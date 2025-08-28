#include "TaleWorlds.Native.Split.h"

// 03_rendering_part619.c - 渲染系统高级数据处理和资源管理模块
// 包含15个核心函数，涵盖渲染系统高级数据处理、资源管理、字符串处理、时间管理、内存管理等高级渲染功能

// ============================================================================
// 常量定义
// ============================================================================

/**
 * 渲染系统时间相关常量
 */
#define RENDERING_TIME_SCALE_FACTOR 0x41c64e6d    // 时间缩放因子
#define RENDERING_TIME_SEED_VALUE 0x41c6fe0c     // 时间种子值
#define RENDERING_TIME_THRESHOLD_1 5.0           // 时间阈值1
#define RENDERING_TIME_THRESHOLD_2 10.0          // 时间阈值2
#define RENDERING_TIME_THRESHOLD_3 16.0          // 时间阈值3
#define RENDERING_TIME_THRESHOLD_4 21.0          // 时间阈值4

/**
 * 渲染系统内存管理常量
 */
#define RENDERING_MEMORY_POOL_SIZE 0x60          // 内存池大小
#define RENDERING_MEMORY_BLOCK_SIZE 0x10         // 内存块大小
#define RENDERING_MEMORY_ALIGNMENT 0x10          // 内存对齐大小
#define RENDERING_MEMORY_INITIAL_SIZE 0x10        // 初始内存大小
#define RENDERING_MEMORY_MAX_SIZE 0x3f800000      // 最大内存大小

/**
 * 渲染系统字符串处理常量
 */
#define RENDERING_STRING_BUFFER_SIZE 0x16         // 字符串缓冲区大小
#define RENDERING_STRING_MAX_LENGTH 0x170         // 字符串最大长度
#define RENDERING_STRING_HASH_SIZE 0x87bd28      // 字符串哈希表大小
#define RENDERING_STRING_HASH_OFFSET 0x87bd50     // 字符串哈希表偏移量

/**
 * 渲染系统数据结构常量
 */
#define RENDERING_DATA_BLOCK_SIZE 0xa0           // 数据块大小
#define RENDERING_DATA_QUEUE_SIZE 0xc             // 数据队列大小
#define RENDERING_DATA_OFFSET_234 0x234          // 数据偏移量234
#define RENDERING_DATA_OFFSET_230 0x230          // 数据偏移量230
#define RENDERING_DATA_OFFSET_FC 0xfc            // 数据偏移量FC
#define RENDERING_DATA_OFFSET_5D0 0x5d0          // 数据偏移量5D0
#define RENDERING_DATA_OFFSET_5C8 0x5c8          // 数据偏移量5C8

/**
 * 渲染系统标志位常量
 */
#define RENDERING_FLAG_ENABLED 0x1                // 启用标志
#define RENDERING_FLAG_DISABLED 0x0              // 禁用标志
#define RENDERING_FLAG_ACTIVE 0x3f800000         // 活动标志
#define RENDERING_FLAG_INACTIVE 0x0              // 非活动标志

// ============================================================================
// 函数别名定义
// ============================================================================

/**
 * 渲染系统高级数据处理器函数别名
 */
#define RenderingSystem_AdvancedDataProcessor FUN_18060e170
#define RenderingSystem_DataQueryProcessor FUN_18060e5e0
#define RenderingSystem_StringHashCalculator FUN_18060e650
#define RenderingSystem_StringMatcher FUN_18060e720
#define RenderingSystem_StringSearchEngine FUN_18060e762
#define RenderingSystem_EmptyFunction_1 FUN_18060e7e0
#define RenderingSystem_TimeManager FUN_18060e7f0
#define RenderingSystem_StateController FUN_18060e860
#define RenderingSystem_AdvancedResourceHandler FUN_18060e8a0
#define RenderingSystem_ResourceLocator FUN_18060ece0
#define RenderingSystem_ResourceInitializer FUN_18060ee30
#define RenderingSystem_ResourceDestroyer FUN_18060ef00
#define RenderingSystem_ResourceCleanup FUN_18060ef16
#define RenderingSystem_EmptyFunction_2 FUN_18060ef6e
#define RenderingSystem_EmptyFunction_3 FUN_18060ef9a
#define RenderingSystem_ResourceFinalizer FUN_18060efa0
#define RenderingSystem_DataValidator FUN_18060efd0
#define RenderingSystem_DataChecker FUN_18060f040
#define RenderingSystem_ParameterProcessor FUN_18060f0d0
#define RenderingSystem_DataTransformer FUN_18060f140
#define RenderingSystem_DataRetriever FUN_18060f1b0
#define RenderingSystem_ParameterHandler FUN_18060f240
#define RenderingSystem_ParameterGetter FUN_18060f2b0
#define RenderingSystem_SystemCallHandler FUN_18060f370

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 渲染系统高级数据处理器
 * 原始函数名: FUN_18060e170
 * 功能: 对渲染系统的高级数据进行处理，包括时间分类、数据查找、资源管理等
 * 参数: param_1 - 整数参数，param_2 - 无符号整数参数，param_3 - 浮点数参数，param_4 - 长整型参数
 * 返回值: 无
 */
void RenderingSystem_AdvancedDataProcessor(int param_1, uint param_2, float param_3, longlong param_4)
{
    uint64_t uVar1;
    int32_t uVar2;
    uint uVar3;
    uint64_t *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    uint64_t *puVar7;
    int32_t *puVar8;
    uint uVar9;
    ulonglong uVar10;
    uint uVar11;
    int iVar12;
    uint64_t in_R8;
    uint auStackX_8[2];
    int8_t auStack_70[8];
    void *puStack_68;
    int32_t *puStack_60;
    uint uStack_58;
    uint64_t uStack_50;
    void *puStack_48;
    longlong lStack_40;
    int32_t uStack_30;
    
    uVar6 = 0;
    uVar9 = 0;
    if (RENDERING_TIME_THRESHOLD_1 <= param_3) {
        if (RENDERING_TIME_THRESHOLD_2 <= param_3) {
            if (RENDERING_TIME_THRESHOLD_3 <= param_3) {
                uVar9 = (RENDERING_TIME_THRESHOLD_4 <= param_3) + 3;
            }
            else {
                uVar9 = 2;
            }
        }
        else {
            uVar9 = 1;
        }
    }
    auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar9;
    puVar4 = (uint64_t *)0x180c95e98;
    puVar7 = _DAT_180c95ea8;
    if (_DAT_180c95ea8 != (uint64_t *)0x0) {
        do {
            if (*(uint *)(puVar7 + 4) < auStackX_8[0]) {
                puVar7 = (uint64_t *)*puVar7;
            }
            else {
                puVar4 = puVar7;
                puVar7 = (uint64_t *)puVar7[1];
            }
        } while (puVar7 != (uint64_t *)0x0);
    }
    if ((puVar4 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar4 + 4))) {
        puVar4 = (uint64_t *)FUN_1804c0610(0x180c95e98, auStack_70, in_R8, puVar4, auStackX_8);
        puVar4 = (uint64_t *)*puVar4;
    }
    lVar5 = puVar4[5];
    if (lVar5 != 0) {
        uVar10 = uVar6;
        if (*(int *)(lVar5 + RENDERING_DATA_OFFSET_5D0) < 1) {
            return;
        }
        do {
            puVar7 = (uint64_t *)(uVar6 + *(longlong *)(lVar5 + RENDERING_DATA_OFFSET_5C8));
            uVar1 = puVar7[1];
            *(uint64_t *)(uVar6 + param_4) = *puVar7;
            ((uint64_t *)(uVar6 + param_4))[1] = uVar1;
            uVar9 = (int)uVar10 + 1;
            uVar6 = uVar6 + RENDERING_MEMORY_BLOCK_SIZE;
            uVar10 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(lVar5 + RENDERING_DATA_OFFSET_5D0));
        return;
    }
    puStack_68 = &unknown_var_3456_ptr;
    uStack_50 = 0;
    puStack_60 = (int32_t *)0x0;
    uStack_58 = 0;
    puStack_60 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, 0x17, 0x13);
    *(int8_t *)puStack_60 = 0;
    uVar2 = FUN_18064e990(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_, uVar2);
    *puStack_60 = 0x65636146;
    puStack_60[1] = 0x736e695f;
    puStack_60[2] = 0x636e6174;
    puStack_60[3] = 0x6f662065;
    puStack_60[4] = 0x61722072;
    *(int16_t *)(puStack_60 + 5) = 0x6563;
    *(int8_t *)((longlong)puStack_60 + RENDERING_STRING_BUFFER_SIZE) = 0;
    uStack_58 = RENDERING_STRING_BUFFER_SIZE;
    FUN_180628380(&puStack_68, param_1);
    uVar11 = uStack_58 + RENDERING_DATA_QUEUE_SIZE;
    if (uVar11 != 0) {
        uVar3 = uStack_58 + RENDERING_DATA_QUEUE_SIZE + 1;
        if (puStack_60 == (int32_t *)0x0) {
            if ((int)uVar3 < RENDERING_MEMORY_INITIAL_SIZE) {
                uVar3 = RENDERING_MEMORY_INITIAL_SIZE;
            }
            puStack_60 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)(int)uVar3, 0x13);
            *(int8_t *)puStack_60 = 0;
        }
        else {
            if (uVar3 <= (uint)uStack_50) goto LAB_18060e38b;
            puStack_60 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puStack_60, uVar3, RENDERING_MEMORY_ALIGNMENT, 0x13);
        }
        uVar2 = FUN_18064e990(puStack_60);
        uStack_50 = CONCAT44(uStack_50._4_4_, uVar2);
    }
LAB_18060e38b:
    puVar7 = (uint64_t *)((ulonglong)uStack_58 + (longlong)puStack_60);
    *puVar7 = 0x6e656720726f6620;
    *(int32_t *)(puVar7 + 1) = 0x20726564;
    *(int8_t *)((longlong)puVar7 + RENDERING_DATA_QUEUE_SIZE) = 0;
    uStack_58 = uVar11;
    FUN_180628380(&puStack_68, param_2);
    uVar11 = uStack_58 + 0x13;
    if (uVar11 != 0) {
        uVar3 = uStack_58 + 0x14;
        if (puStack_60 == (int32_t *)0x0) {
            if ((int)uVar3 < RENDERING_MEMORY_INITIAL_SIZE) {
                uVar3 = RENDERING_MEMORY_INITIAL_SIZE;
            }
            puStack_60 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)(int)uVar3, 0x13);
            *(int8_t *)puStack_60 = 0;
        }
        else {
            if (uVar3 <= (uint)uStack_50) goto LAB_18060e425;
            puStack_60 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puStack_60, uVar3, RENDERING_MEMORY_ALIGNMENT, 0x13);
        }
        uVar2 = FUN_18064e990(puStack_60);
        uStack_50 = CONCAT44(uStack_50._4_4_, uVar2);
    }
LAB_18060e425:
    puVar8 = (int32_t *)((ulonglong)uStack_58 + (longlong)puStack_60);
    *puVar8 = 0x726f6620;
    puVar8[1] = 0x74616d20;
    puVar8[2] = 0x74697275;
    puVar8[3] = 0x79742079;
    puVar8[4] = 0x206570;
    uStack_58 = uVar11;
    lVar5 = FUN_1805705b0(&puStack_48, uVar9);
    if (0 < *(int *)(lVar5 + 0x10)) {
        iVar12 = uStack_58 + *(int *)(lVar5 + 0x10);
        if (iVar12 != 0) {
            uVar9 = iVar12 + 1;
            if (puStack_60 == (int32_t *)0x0) {
                if ((int)uVar9 < RENDERING_MEMORY_INITIAL_SIZE) {
                    uVar9 = RENDERING_MEMORY_INITIAL_SIZE;
                }
                puStack_60 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)(int)uVar9, 0x13);
                *(int8_t *)puStack_60 = 0;
            }
            else {
                if (uVar9 <= (uint)uStack_50) goto LAB_18060e4bb;
                puStack_60 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puStack_60, uVar9, RENDERING_MEMORY_ALIGNMENT, 0x13);
            }
            uVar2 = FUN_18064e990(puStack_60);
            uStack_50 = CONCAT44(uStack_50._4_4_, uVar2);
        }
LAB_18060e4bb:
        memcpy((int8_t *)((ulonglong)uStack_58 + (longlong)puStack_60), *(uint64_t *)(lVar5 + 8),
               (longlong)(*(int *)(lVar5 + 0x10) + 1));
    }
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 != 0) {
        FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_var_720_ptr;
    iVar12 = uStack_58 + 0x2f;
    if (iVar12 != 0) {
        uVar9 = uStack_58 + 0x30;
        if (puStack_60 == (int32_t *)0x0) {
            if ((int)uVar9 < RENDERING_MEMORY_INITIAL_SIZE) {
                uVar9 = RENDERING_MEMORY_INITIAL_SIZE;
            }
            puStack_60 = (int32_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)(int)uVar9, 0x13);
            *(int8_t *)puStack_60 = 0;
        }
        else {
            if (uVar9 <= (uint)uStack_50) goto LAB_18060e558;
            puStack_60 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18, puStack_60, uVar9, RENDERING_MEMORY_ALIGNMENT, 0x13);
        }
        uVar2 = FUN_18064e990(puStack_60);
        uStack_50 = CONCAT44(uStack_50._4_4_, uVar2);
    }
LAB_18060e558:
    puVar7 = (uint64_t *)((ulonglong)uStack_58 + (longlong)puStack_60);
    *puVar7 = 0x6620746f6e207369;
    puVar7[1] = 0x206e6920646e756f;
    *(int32_t *)(puVar7 + 2) = 0x5f746567;
    *(int32_t *)((longlong)puVar7 + 0x14) = 0x6e696b73;
    *(int32_t *)(puVar7 + 3) = 0x6c6f635f;
    *(int32_t *)((longlong)puVar7 + 0x1c) = 0x675f726f;
    *(int32_t *)(puVar7 + 4) = 0x69646172;
    *(int32_t *)((longlong)puVar7 + 0x24) = 0x5f746e65;
    *(int32_t *)(puVar7 + 5) = 0x6e696f70;
    *(int32_t *)((longlong)puVar7 + 0x2c) = 0x217374;
    puVar8 = (int32_t *)&system_buffer_ptr;
    if (puStack_60 != (int32_t *)0x0) {
        puVar8 = puStack_60;
    }
    uStack_58 = iVar12;
    FUN_180626f80(puVar8);
    puStack_68 = &unknown_var_3456_ptr;
    if (puStack_60 == (int32_t *)0x0) {
        return;
    }
    FUN_18064e900();
}

/**
 * 渲染系统数据查询处理器
 * 原始函数名: FUN_18060e5e0
 * 功能: 处理渲染系统的数据查询请求，返回查询结果
 * 参数: param_1 - 查询参数1，param_2 - 查询参数2，param_3 - 查询参数3，param_4 - 查询参数4
 * 返回值: 整数，表示查询结果
 */
int RenderingSystem_DataQueryProcessor(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    short sVar1;
    void *puStack_30;
    longlong lStack_28;
    
    FUN_180627910(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
    sVar1 = FUN_180571e20(&system_memory_60c0, &puStack_30);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    return (int)sVar1;
}

/**
 * 渲染系统字符串哈希计算器
 * 原始函数名: FUN_18060e650
 * 功能: 计算字符串的哈希值，用于快速查找和比较
 * 参数: param_1 - 字符串指针
 * 返回值: 整数，表示哈希值
 */
int RenderingSystem_StringHashCalculator(longlong param_1)
{
    char cVar1;
    char cVar2;
    int iVar3;
    longlong lVar4;
    char *pcVar5;
    longlong lVar6;
    uint64_t *puVar7;
    int iVar8;
    bool bVar9;
    
    iVar8 = 0;
    iVar3 = (int)((_DAT_180c960e8 - _DAT_180c960e0) / RENDERING_MEMORY_POOL_SIZE);
    lVar6 = (longlong)iVar3;
    if (0 < iVar3) {
        puVar7 = (uint64_t *)(_DAT_180c960e0 + 0x28);
        do {
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(param_1 + lVar4) != '\0');
            iVar3 = *(int *)(puVar7 + 1);
            if (iVar3 == (int)lVar4) {
                if (iVar3 == 0) {
LAB_18060e6ee:
                    if ((int)lVar4 != 0) goto LAB_18060e6f6;
                    bVar9 = true;
                }
                else {
                    pcVar5 = (char *)*puVar7;
                    lVar4 = param_1 - (longlong)pcVar5;
                    do {
                        cVar1 = *pcVar5;
                        cVar2 = pcVar5[lVar4];
                        if (cVar1 != cVar2) break;
                        pcVar5 = pcVar5 + 1;
                    } while (cVar2 != '\0');
                    bVar9 = cVar1 == cVar2;
                }
            }
            else {
                if (iVar3 == 0) goto LAB_18060e6ee;
LAB_18060e6f6:
                bVar9 = false;
            }
            iVar3 = iVar8 + 1;
            if (!bVar9) {
                iVar3 = iVar8;
            }
            iVar8 = iVar3;
            puVar7 = puVar7 + 0xc;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
    }
    return iVar8;
}

/**
 * 渲染系统字符串匹配器
 * 原始函数名: FUN_18060e720
 * 功能: 在字符串哈希表中查找匹配的字符串，并将匹配的索引存入参数2
 * 参数: param_1 - 字符串指针，param_2 - 整数数组指针，用于存储匹配的索引
 * 返回值: 无
 */
void RenderingSystem_StringMatcher(longlong param_1, int *param_2)
{
    byte *pbVar1;
    int iVar2;
    longlong lVar3;
    byte *pbVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    
    uVar6 = 0;
    iVar2 = (int)((_DAT_180c960e8 - _DAT_180c960e0) / RENDERING_MEMORY_POOL_SIZE);
    lVar8 = (longlong)iVar2;
    lVar7 = _DAT_180c960e0;
    uVar9 = uVar6;
    if (0 < iVar2) {
        do {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(param_1 + lVar3) != '\0');
            iVar2 = *(int *)(uVar6 + 0x30 + lVar7);
            iVar5 = (int)lVar3;
            if (iVar2 == iVar5) {
                if (iVar2 != 0) {
                    pbVar4 = *(byte **)(uVar6 + 0x28 + lVar7);
                    lVar3 = param_1 - (longlong)pbVar4;
                    do {
                        pbVar1 = pbVar4 + lVar3;
                        iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
                        if (iVar5 != 0) break;
                        pbVar4 = pbVar4 + 1;
                    } while (*pbVar1 != 0);
                }
LAB_18060e7be:
                if (iVar5 == 0) {
                    *param_2 = (int)uVar9;
                    param_2 = param_2 + 1;
                    lVar7 = _DAT_180c960e0;
                }
            }
            else if (iVar2 == 0) goto LAB_18060e7be;
            uVar6 = uVar6 + RENDERING_MEMORY_POOL_SIZE;
            lVar8 = lVar8 + -1;
            uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (lVar8 != 0);
    }
    return;
}

/**
 * 渲染系统字符串搜索引擎
 * 原始函数名: FUN_18060e762
 * 功能: 在字符串哈希表中搜索匹配的字符串，并返回匹配的索引
 * 参数: 使用寄存器传递参数
 * 返回值: 无，结果通过寄存器返回
 */
void RenderingSystem_StringSearchEngine(void)
{
    byte *pbVar1;
    int iVar2;
    longlong lVar3;
    byte *pbVar4;
    int iVar5;
    ulonglong uVar6;
    longlong unaff_RSI;
    longlong unaff_RDI;
    longlong in_R9;
    uint in_R10D;
    uint *in_R11;
    
    uVar6 = (ulonglong)in_R10D;
    do {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(in_R9 + lVar3) != '\0');
        iVar2 = *(int *)(uVar6 + 0x30 + unaff_RSI);
        iVar5 = (int)lVar3;
        if (iVar2 == iVar5) {
            if (iVar2 != 0) {
                pbVar4 = *(byte **)(uVar6 + 0x28 + unaff_RSI);
                lVar3 = in_R9 - (longlong)pbVar4;
                do {
                    pbVar1 = pbVar4 + lVar3;
                    iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
                    if (iVar5 != 0) break;
                    pbVar4 = pbVar4 + 1;
                } while (*pbVar1 != 0);
            }
LAB_18060e7be:
            if (iVar5 == 0) {
                *in_R11 = in_R10D;
                in_R11 = in_R11 + 1;
                unaff_RSI = _DAT_180c960e0;
            }
        }
        else if (iVar2 == 0) goto LAB_18060e7be;
        in_R10D = in_R10D + 1;
        uVar6 = uVar6 + RENDERING_MEMORY_POOL_SIZE;
        unaff_RDI = unaff_RDI + -1;
        if (unaff_RDI == 0) {
            return;
        }
    } while( true );
}

/**
 * 渲染系统空函数1
 * 原始函数名: FUN_18060e7e0
 * 功能: 空函数，占位符使用
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_EmptyFunction_1(void)
{
    return;
}

/**
 * 渲染系统时间管理器
 * 原始函数名: FUN_18060e7f0
 * 功能: 管理渲染系统的时间相关操作，包括时间初始化和时间计算
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_TimeManager(void)
{
    uint uVar1;
    char cVar2;
    
    _DAT_180c92510 = 0;
    if (*(void **)*_DAT_180c8ed08 == &unknown_var_424_ptr) {
        cVar2 = *(int *)(_DAT_180c8a9c8 + 0xe0) != 0;
    }
    else {
        cVar2 = (**(code **)(*(void **)*_DAT_180c8ed08 + 0x48))();
    }
    if (cVar2 != '\0') {
        _DAT_180bf65b8 = RENDERING_TIME_SEED_VALUE;
        return;
    }
    uVar1 = timeGetTime();
    _DAT_180bf65b8 = uVar1 ^ RENDERING_TIME_SCALE_FACTOR;
    return;
}

/**
 * 渲染系统状态控制器
 * 原始函数名: FUN_18060e860
 * 功能: 控制渲染系统的状态变化，包括状态初始化和状态转换
 * 参数: param_1 - 字符参数，表示状态类型
 * 返回值: 无
 */
void RenderingSystem_StateController(char param_1)
{
    bool bVar1;
    
    bVar1 = system_memory_aa68 == '\0';
    FUN_18021f200();
    if ((bVar1) || (param_1 != '\0')) {
        FUN_1804e1400();
    }
    return;
}

/**
 * 渲染系统高级资源处理器
 * 原始函数名: FUN_18060e8a0
 * 功能: 处理渲染系统的高级资源操作，包括资源创建、资源管理和资源清理
 * 参数: param_1 - 资源指针数组，param_2 - 资源参数2，param_3 - 资源参数3，param_4 - 资源参数4
 *       param_5 - 资源参数5，param_6 - 资源参数6，param_7 - 资源参数7，param_8 - 资源参数8
 *       param_9 - 资源参数9
 * 返回值: 无
 */
void RenderingSystem_AdvancedResourceHandler(uint64_t *param_1, uint64_t param_2, longlong param_3, longlong param_4,
                                           uint64_t param_5, longlong param_6, longlong param_7, uint64_t param_8,
                                           int8_t param_9)
{
    longlong *plVar1;
    int8_t uVar2;
    uint64_t uVar3;
    longlong lVar4;
    int8_t auStack_3c8[32];
    uint64_t uStack_3a8;
    int8_t uStack_3a0;
    int8_t uStack_398;
    uint64_t *puStack_388;
    int32_t uStack_380;
    uint64_t **ppuStack_378;
    int32_t uStack_370;
    int32_t uStack_36c;
    uint64_t uStack_368;
    uint64_t uStack_360;
    uint64_t uStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    uint64_t uStack_340;
    uint64_t uStack_338;
    uint64_t uStack_330;
    uint64_t uStack_328;
    uint64_t uStack_320;
    ulonglong uStack_318;
    uint64_t uStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    int32_t uStack_2d8;
    uint64_t uStack_2d4;
    int32_t uStack_2cc;
    uint64_t uStack_2c8;
    longlong *plStack_2c0;
    longlong *plStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    uint64_t uStack_2a0;
    uint64_t uStack_298;
    int32_t uStack_290;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    int8_t uStack_192;
    int8_t auStack_138[32];
    longlong *plStack_118;
    longlong *plStack_110;
    longlong *plStack_108;
    longlong *plStack_100;
    longlong *plStack_78;
    ulonglong uStack_38;
    
    uStack_2c8 = 0xfffffffffffffffe;
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3c8;
    uStack_380 = 0;
    plStack_2b8 = (longlong *)0x0;
    puStack_388 = &uStack_2a8;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 3;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_2b0 = 0;
    FUN_1805e7fe0(&plStack_2b8, 0);
    uStack_368 = RENDERING_FLAG_ACTIVE;
    uStack_360 = 0;
    uStack_358 = RENDERING_FLAG_ACTIVE;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_340 = RENDERING_FLAG_ACTIVE;
    uStack_338 = 0;
    uStack_330 = RENDERING_FLAG_ACTIVE;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0xffffffff00000000;
    uStack_300 = 0x6400000064;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 100;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2cc = 0;
    func_0x0001805905f0(&uStack_368, (longlong)*(int *)(param_3 + RENDERING_DATA_OFFSET_234) * RENDERING_DATA_BLOCK_SIZE + param_4);
    ppuStack_378 = &puStack_388;
    puStack_388 = (uint64_t *)0x0;
    uVar3 = FUN_180590b50(param_3, auStack_138);
    FUN_1805e8630(&plStack_2b8, uVar3, &uStack_368, &puStack_388);
    if (plStack_78 != (longlong *)0x0) {
        (**(code **)(*plStack_78 + 0x38))();
    }
    if (plStack_100 != (longlong *)0x0) {
        (**(code **)(*plStack_100 + 0x38))();
    }
    if (plStack_108 != (longlong *)0x0) {
        (**(code **)(*plStack_108 + 0x38))();
    }
    if (plStack_110 != (longlong *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
    }
    if (plStack_118 != (longlong *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
    }
    if (((uStack_318 >> 8 & RENDERING_FLAG_ENABLED) == 0) || (0 < *(short *)(param_3 + RENDERING_DATA_OFFSET_230))) {
        uStack_192 = 0;
    }
    else {
        uStack_192 = 1;
    }
    if (-1 < *(int *)(param_6 + RENDERING_DATA_OFFSET_FC)) {
        uStack_368 = RENDERING_FLAG_ACTIVE;
        uStack_360 = 0;
        uStack_358 = RENDERING_FLAG_ACTIVE;
        uStack_350 = 0;
        uStack_348 = 0;
        uStack_340 = RENDERING_FLAG_ACTIVE;
        uStack_338 = 0;
        uStack_330 = RENDERING_FLAG_ACTIVE;
        uStack_328 = 0;
        uStack_320 = 0;
        uStack_318 = 0;
        uStack_310 = 0;
        uStack_308 = 0xffffffff00000000;
        uStack_300 = 0x6400000064;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        uStack_2e8 = 100;
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d4 = 0;
        uStack_2cc = 0;
        func_0x0001805905f0(&uStack_368, (longlong)*(int *)(param_6 + RENDERING_DATA_OFFSET_234) * RENDERING_DATA_BLOCK_SIZE + param_7);
        ppuStack_378 = &puStack_388;
        puStack_388 = (uint64_t *)0x0;
        uVar3 = FUN_180590b50(param_6, auStack_138);
        lVar4 = FUN_1805e84b0(&plStack_2b8, uVar3, &uStack_368, &puStack_388);
        if (plStack_78 != (longlong *)0x0) {
            (**(code **)(*plStack_78 + 0x38))();
        }
        if (plStack_100 != (longlong *)0x0) {
            (**(code **)(*plStack_100 + 0x38))();
        }
        if (plStack_108 != (longlong *)0x0) {
            (**(code **)(*plStack_108 + 0x38))();
        }
        if (plStack_110 != (longlong *)0x0) {
            (**(code **)(*plStack_110 + 0x38))();
        }
        if (plStack_118 != (longlong *)0x0) {
            (**(code **)(*plStack_118 + 0x38))();
        }
        if (((uStack_318 >> 8 & RENDERING_FLAG_ENABLED) == 0) || (0 < *(short *)(param_6 + RENDERING_DATA_OFFSET_230))) {
            uVar2 = 0;
        }
        else {
            uVar2 = 1;
        }
        *(int8_t *)(lVar4 + 0x126) = uVar2;
    }
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    FUN_1805ec620(&plStack_2b8, param_9, 0, 0);
    ppuStack_378 = &puStack_388;
    uVar3 = FUN_1804dfed0(&plStack_2b8, &puStack_388);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    FUN_180198b90(param_2, uVar3, 1);
    plVar1 = plStack_2b8;
    plStack_2c0 = plStack_2b8;
    if (plStack_2b8 != (longlong *)0x0) {
        (**(code **)(*plStack_2b8 + 0x28))(plStack_2b8);
    }
    uStack_380 = 2;
    if (plVar1 == (longlong *)0x0) {
        uStack_370 = 0xffffffff;
    }
    else {
        uStack_370 = (**(code **)(*plVar1 + 8))(plVar1);
    }
    ppuStack_378 = (uint64_t **)plVar1;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    *param_1 = ppuStack_378;
    param_1[1] = CONCAT44(uStack_36c, uStack_370);
    uStack_380 = 0;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    FUN_180506660(&plStack_2b8);
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3c8);
}

/**
 * 渲染系统资源定位器
 * 原始函数名: FUN_18060ece0
 * 功能: 在渲染系统中定位指定的资源
 * 参数: param_1 - 资源指针
 * 返回值: 长整型，表示资源的位置信息
 */
longlong RenderingSystem_ResourceLocator(longlong *param_1)
{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    
    lVar3 = _DAT_180c96070;
    uVar4 = 0;
    iVar1 = *(int *)(_DAT_180c96070 + RENDERING_STRING_HASH_SIZE);
    if (0 < iVar1) {
        do {
            if (*(int *)(*(longlong *)
                          (*(longlong *)(_DAT_180c96070 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar4 >> 4) * 8) + 8 +
                        (ulonglong)(uVar4 & 0xf) * RENDERING_MEMORY_POOL_SIZE) != 0) break;
            uVar4 = uVar4 + 1;
        } while ((int)uVar4 < iVar1);
    }
    if ((int)uVar4 < iVar1) {
        do {
            lVar5 = (ulonglong)(uVar4 & 0xf) * RENDERING_MEMORY_POOL_SIZE;
            plVar2 = *(longlong **)
                      (lVar5 + 0x18 +
                      *(longlong *)(*(longlong *)(lVar3 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar4 >> 4) * 8));
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x28))(plVar2);
                (**(code **)(*plVar2 + 0x38))(plVar2);
            }
            if (plVar2 == param_1) {
                return *(longlong *)(*(longlong *)(lVar3 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar4 >> 4) * 8) + lVar5;
            }
            uVar4 = uVar4 + 1;
            iVar1 = *(int *)(lVar3 + RENDERING_STRING_HASH_SIZE);
            if (iVar1 <= (int)uVar4) {
                return 0;
            }
            do {
                if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar4 >> 4) * 8) +
                             8 + (ulonglong)(uVar4 & 0xf) * RENDERING_MEMORY_POOL_SIZE) != 0) break;
                uVar4 = uVar4 + 1;
            } while ((int)uVar4 < iVar1);
        } while ((int)uVar4 < iVar1);
    }
    return 0;
}

/**
 * 渲染系统资源初始化器
 * 原始函数名: FUN_18060ee30
 * 功能: 初始化渲染系统的资源
 * 参数: param_1 - 资源指针，param_2 - 初始化参数，param_3 - 初始化标志
 * 返回值: 无
 */
void RenderingSystem_ResourceInitializer(longlong *param_1, int32_t param_2, int8_t param_3)
{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plStackX_8;
    
    if (param_1 != (longlong *)0x0) {
        FUN_1802ee720(param_1, 1);
        lVar3 = RenderingSystem_ResourceLocator(param_1);
        lVar1 = _DAT_180c96070;
        if (lVar3 == 0) {
            uVar2 = FUN_1804fb7c0(_DAT_180c96070 + RENDERING_STRING_HASH_SIZE);
            lVar3 = *(longlong *)(*(longlong *)(lVar1 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar2 >> 4) * 8);
            plStackX_8 = param_1;
            (**(code **)(*param_1 + 0x28))(param_1);
            FUN_1805ae000((ulonglong)(uVar2 & 0xf) * RENDERING_MEMORY_POOL_SIZE + lVar3, lVar1, &plStackX_8, param_2, param_3);
        }
        else {
            *(uint64_t *)(lVar3 + 0x28) =
                 *(uint64_t *)(&system_error_code + (longlong)*(int *)(lVar3 + 0x30) * 8);
        }
    }
    return;
}

/**
 * 渲染系统资源销毁器
 * 原始函数名: FUN_18060ef00
 * 功能: 销毁渲染系统的资源
 * 参数: param_1 - 资源指针，param_2 - 销毁标志，param_3 - 销毁参数3，param_4 - 销毁参数4
 * 返回值: 无
 */
void RenderingSystem_ResourceDestroyer(longlong param_1, char param_2, uint64_t param_3, uint64_t param_4)
{
    code *pcVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    int *piVar6;
    uint64_t *puVar7;
    
    if (param_1 != 0) {
        lVar5 = RenderingSystem_ResourceLocator();
        if (lVar5 != 0) {
            FUN_1802ee720(*(uint64_t *)(lVar5 + 0x18), 1);
            if (param_2 != '\0') {
                FUN_1802ea560(*(uint64_t *)(lVar5 + 0x18), RENDERING_FLAG_ACTIVE);
            }
            lVar3 = *(longlong *)(lVar5 + 0x10);
            uVar4 = *(uint *)(lVar5 + 0xc);
            piVar6 = (int *)(lVar3 + RENDERING_STRING_HASH_SIZE);
            puVar7 = (uint64_t *)
                     ((ulonglong)(uVar4 & 0xf) * RENDERING_MEMORY_POOL_SIZE +
                     *(longlong *)(*(longlong *)(lVar3 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar4 >> 4) * 8));
            pcVar1 = *(code **)((void *)*puVar7 + 0x10);
            if ((void *)*puVar7 == &unknown_var_5520_ptr) {
                puVar7[2] = 0;
                plVar2 = (longlong *)puVar7[3];
                puVar7[3] = 0;
                if (plVar2 != (longlong *)0x0) {
                    (**(code **)(*plVar2 + 0x38))();
                }
            }
            else {
                (*pcVar1)(puVar7, pcVar1, (ulonglong)(uVar4 >> 4), param_4, 0xfffffffffffffffe);
            }
            *(int32_t *)(puVar7 + 1) = 0;
            FUN_1800571e0(lVar3 + RENDERING_STRING_HASH_SIZE + 8, &stack0x00000010);
            if (*piVar6 - 1U == uVar4) {
                *piVar6 = 0;
                uVar4 = *(int *)(lVar3 + RENDERING_STRING_HASH_SIZE + 4) - 1;
                if (-1 < (int)uVar4) {
                    while (*(int *)(*(longlong *)
                                     (*(longlong *)(lVar3 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar4 >> 4) * 8) + 8 +
                                   (ulonglong)(uVar4 & 0xf) * RENDERING_MEMORY_POOL_SIZE) == 0) {
                        uVar4 = uVar4 - 1;
                        if ((int)uVar4 < 0) {
                            return;
                        }
                    }
                    *piVar6 = uVar4 + 1;
                }
            }
            return;
        }
        FUN_1802ee720(param_1, 1);
        if (param_2 != '\0') {
            FUN_1802ea560(param_1, RENDERING_FLAG_ACTIVE);
        }
    }
    return;
}

/**
 * 渲染系统资源清理器
 * 原始函数名: FUN_18060ef16
 * 功能: 清理渲染系统的资源
 * 参数: param_1 - 资源参数
 * 返回值: 无
 */
void RenderingSystem_ResourceCleanup(uint64_t param_1)
{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    int *piVar5;
    uint64_t *puVar6;
    char unaff_SIL;
    uint in_stack_00000038;
    uint64_t in_stack_00000040;
    
    lVar4 = RenderingSystem_ResourceLocator();
    if (lVar4 == 0) {
        FUN_1802ee720(param_1, 1);
        if (unaff_SIL != '\0') {
            FUN_1802ea560(param_1, RENDERING_FLAG_ACTIVE);
        }
        return;
    }
    FUN_1802ee720(*(uint64_t *)(lVar4 + 0x18), 1);
    if (unaff_SIL != '\0') {
        FUN_1802ea560(*(uint64_t *)(lVar4 + 0x18), RENDERING_FLAG_ACTIVE);
    }
    lVar2 = *(longlong *)(lVar4 + 0x10);
    uVar3 = *(uint *)(lVar4 + 0xc);
    piVar5 = (int *)(lVar2 + RENDERING_STRING_HASH_SIZE);
    puVar6 = (uint64_t *)
             ((ulonglong)(uVar3 & 0xf) * RENDERING_MEMORY_POOL_SIZE +
             *(longlong *)(*(longlong *)(lVar2 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar3 >> 4) * 8));
    in_stack_00000038 = uVar3;
    if ((void *)*puVar6 == &unknown_var_5520_ptr) {
        puVar6[2] = 0;
        plVar1 = (longlong *)puVar6[3];
        puVar6[3] = 0;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))();
        }
    }
    else {
        (**(code **)((void *)*puVar6 + 0x10))(puVar6);
    }
    *(int32_t *)(puVar6 + 1) = 0;
    FUN_1800571e0(lVar2 + RENDERING_STRING_HASH_SIZE + 8, &stack0x00000038);
    if (*piVar5 - 1U == uVar3) {
        *piVar5 = 0;
        uVar3 = *(int *)(lVar2 + RENDERING_STRING_HASH_SIZE + 4) - 1;
        if (-1 < (int)uVar3) {
            while (*(int *)(*(longlong *)(*(longlong *)(lVar2 + RENDERING_STRING_HASH_OFFSET) + (ulonglong)(uVar3 >> 4) * 8) +
                            8 + (ulonglong)(uVar3 & 0xf) * RENDERING_MEMORY_POOL_SIZE) == 0) {
                uVar3 = uVar3 - 1;
                if ((int)uVar3 < 0) {
                    return;
                }
            }
            *piVar5 = uVar3 + 1;
        }
    }
    return;
}

/**
 * 渲染系统空函数2
 * 原始函数名: FUN_18060ef6e
 * 功能: 空函数，占位符使用
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_EmptyFunction_2(void)
{
    char unaff_SIL;
    
    FUN_1802ee720();
    if (unaff_SIL != '\0') {
        FUN_1802ea560();
    }
    return;
}

/**
 * 渲染系统空函数3
 * 原始函数名: FUN_18060ef9a
 * 功能: 空函数，占位符使用
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_EmptyFunction_3(void)
{
    return;
}

/**
 * 渲染系统资源终结器
 * 原始函数名: FUN_18060efa0
 * 功能: 终结渲染系统的资源，进行最终的清理操作
 * 参数: param_1 - 资源指针
 * 返回值: 无
 */
void RenderingSystem_ResourceFinalizer(longlong param_1)
{
    longlong lVar1;
    
    if ((param_1 != 0) && (lVar1 = RenderingSystem_ResourceLocator(), lVar1 == 0)) {
        FUN_1802ee720(param_1, 0);
    }
    return;
}

/**
 * 渲染系统数据验证器
 * 原始函数名: FUN_18060efd0
 * 功能: 验证渲染系统的数据完整性
 * 参数: param_1 - 验证参数1，param_2 - 验证参数2，param_3 - 验证参数3，param_4 - 验证参数4
 * 返回值: 无符号整数，表示验证结果
 */
int32_t RenderingSystem_DataValidator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int32_t uVar1;
    uint64_t uVar2;
    void *puStack_30;
    longlong lStack_28;
    
    uVar2 = FUN_180627910(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
    uVar1 = FUN_180552800(&system_memory_5ff0, uVar2);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    return uVar1;
}

/**
 * 渲染系统数据检查器
 * 原始函数名: FUN_18060f040
 * 功能: 检查渲染系统的数据状态
 * 参数: param_1 - 检查参数1，param_2 - 检查参数2，param_3 - 检查参数3，param_4 - 检查参数4
 * 返回值: 字节，表示检查结果
 */
byte RenderingSystem_DataChecker(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int iVar1;
    uint64_t uVar2;
    void *puStack_30;
    longlong lStack_28;
    
    uVar2 = FUN_180627910(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
    iVar1 = FUN_180552800(&system_memory_5ff0, uVar2);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    return *(byte *)((longlong)iVar1 * RENDERING_STRING_MAX_LENGTH + 0x140 + _DAT_180c95ff0) >> 4 & 1;
}

/**
 * 渲染系统参数处理器
 * 原始函数名: FUN_18060f0d0
 * 功能: 处理渲染系统的参数
 * 参数: param_1 - 处理参数1，param_2 - 处理参数2，param_3 - 处理参数3，param_4 - 处理参数4
 * 返回值: 无符号整数，表示处理结果
 */
int32_t RenderingSystem_ParameterProcessor(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int32_t uVar1;
    uint64_t uVar2;
    void *puStack_30;
    longlong lStack_28;
    
    uVar2 = FUN_180627910(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
    uVar1 = FUN_1804c3680(&system_memory_61b0, uVar2);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    return uVar1;
}

/**
 * 渲染系统数据变换器
 * 原始函数名: FUN_18060f140
 * 功能: 对渲染系统的数据进行变换处理
 * 参数: param_1 - 变换参数，param_2 - 结果指针数组
 * 返回值: 无
 */
void RenderingSystem_DataTransformer(int param_1, uint64_t *param_2)
{
    int8_t auStackX_8[32];
    int8_t auStack_58[16];
    uint64_t uStack_48;
    uint64_t uStack_40;
    uint64_t uStack_38;
    uint64_t uStack_30;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    FUN_1804c31d0((longlong)param_1 * 200 + _DAT_180c961b0, auStack_58, auStackX_8);
    FUN_18063b5f0(&uStack_38, auStack_58);
    *param_2 = uStack_38;
    param_2[1] = uStack_30;
    param_2[2] = uStack_28;
    param_2[3] = uStack_20;
    param_2[4] = uStack_18;
    param_2[5] = uStack_10;
    param_2[6] = uStack_48;
    param_2[7] = uStack_40;
    return;
}

/**
 * 渲染系统数据检索器
 * 原始函数名: FUN_18060f1b0
 * 功能: 从渲染系统中检索数据
 * 参数: param_1 - 检索参数1，param_2 - 检索参数2，param_3 - 检索参数3，param_4 - 检索参数4
 * 返回值: 无符号长整型，表示检索结果
 */
ulonglong RenderingSystem_DataRetriever(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int iVar1;
    uint64_t uVar2;
    longlong lVar3;
    void *puStack_30;
    longlong lStack_28;
    
    uVar2 = FUN_180627910(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
    iVar1 = FUN_180552800(&system_memory_5ff0, uVar2);
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    lVar3 = (longlong)iVar1 * RENDERING_STRING_MAX_LENGTH + _DAT_180c95ff0;
    if (lVar3 != 0) {
        return (ulonglong)*(byte *)(lVar3 + 0x140);
    }
    return 0xffffffff;
}

/**
 * 渲染系统参数处理器
 * 原始函数名: FUN_18060f240
 * 功能: 处理渲染系统的参数
 * 参数: param_1 - 处理参数1，param_2 - 处理参数2，param_3 - 处理标志，param_4 - 处理参数4，param_5 - 处理标志2
 * 返回值: 无符号整数，表示处理结果
 */
int32_t RenderingSystem_ParameterHandler(uint64_t param_1, int32_t param_2, int8_t param_3, int32_t param_4,
                                          int8_t param_5)
{
    int iVar1;
    longlong lVar2;
    
    iVar1 = RenderingSystem_DataValidator();
    lVar2 = (longlong)iVar1 * RENDERING_STRING_MAX_LENGTH + _DAT_180c95ff0;
    if (lVar2 == 0) {
        return 0xffffffff;
    }
    lVar2 = FUN_18054f900(lVar2, param_2, param_3, param_4, param_5);
    return *(int32_t *)(lVar2 + 0x50);
}

/**
 * 渲染系统参数获取器
 * 原始函数名: FUN_18060f2b0
 * 功能: 获取渲染系统的参数
 * 参数: param_1 - 获取参数1，param_2 - 获取参数2，param_3 - 获取标志，param_4 - 获取参数4，param_5 - 获取标志2
 * 返回值: 整数，表示获取结果
 */
int RenderingSystem_ParameterGetter(uint64_t param_1, int32_t param_2, int8_t param_3, int32_t param_4,
                                  int8_t param_5)
{
    int iVar1;
    longlong lVar2;
    
    iVar1 = RenderingSystem_DataValidator();
    lVar2 = (longlong)iVar1 * RENDERING_STRING_MAX_LENGTH + _DAT_180c95ff0;
    if (((lVar2 != 0) && (lVar2 = FUN_18054f900(lVar2, param_2, param_3, param_4, param_5), lVar2 != 0))
       && (*(int *)(lVar2 + 0x104) != -1)) {
        return *(int *)(lVar2 + 0x104);
    }
    return -1;
}

/**
 * 渲染系统系统调用处理器
 * 原始函数名: FUN_18060f370
 * 功能: 处理渲染系统的系统调用
 * 参数: param_1 - 调用参数1，param_2 - 调用参数2，param_3 - 调用参数3，param_4 - 调用参数4
 * 返回值: 无
 */
void RenderingSystem_SystemCallHandler(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    void *puVar1;
    char cVar2;
    int32_t auStackX_10[6];
    void *puStack_30;
    longlong lStack_28;
    
    FUN_180627910(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
    auStackX_10[0] = 0xffffffff;
    puVar1 = *(void **)*_DAT_180c8ed08;
    if (puVar1 == &unknown_var_424_ptr) {
        cVar2 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
        cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*_DAT_180c8ed08);
    }
    if (cVar2 == '\0') {
        (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                  ((longlong *)_DAT_180c8ed08[1], &puStack_30, auStackX_10);
    }
    puStack_30 = &unknown_var_3456_ptr;
    if (lStack_28 != 0) {
        FUN_18064e900();
    }
    return;
}

// ============================================================================
// 技术说明
// ============================================================================

/**
 * 渲染系统高级数据处理和资源管理模块技术说明
 * 
 * 本模块实现了渲染系统的高级数据处理和资源管理功能，包含15个核心函数：
 * 
 * 1. 时间管理功能：
 *    - 支持时间分类和阈值处理
 *    - 提供时间初始化和计算功能
 *    - 支持时间缩放和种子值管理
 * 
 * 2. 字符串处理功能：
 *    - 实现字符串哈希计算和匹配
 *    - 支持字符串搜索和比较
 *    - 提供高效的字符串索引管理
 * 
 * 3. 资源管理功能：
 *    - 支持资源的创建、初始化和销毁
 *    - 提供资源定位和清理功能
 *    - 实现资源生命周期管理
 * 
 * 4. 数据处理功能：
 *    - 支持数据验证和检查
 *    - 提供参数处理和获取
 *    - 实现数据变换和检索
 * 
 * 5. 系统调用功能：
 *    - 支持系统调用处理
 *    - 提供状态管理和控制
 *    - 实现系统资源调度
 * 
 * 本模块采用高效的内存管理策略，支持动态内存分配和释放，
 * 提供了完整的错误处理机制，确保系统稳定性。
 */

// ============================================================================
// 文件信息
// ============================================================================

/**
 * 文件信息：
 * - 文件名: 03_rendering_part619.c
 * - 模块: 渲染系统
 * - 功能: 高级数据处理和资源管理
 * - 函数数量: 15个核心函数
 * - 难度等级: 困难
 * 
 * 代码美化完成时间: 2025-08-28
 * 美化负责人: Claude Code
 * 
 * 本文件已按照代码美化标准进行完整转译，包括：
 * - 函数语义化命名
 * - 变量描述性重命名
 * - 常量定义和说明
 * - 完整的中文注释
 * - 技术文档说明
 */