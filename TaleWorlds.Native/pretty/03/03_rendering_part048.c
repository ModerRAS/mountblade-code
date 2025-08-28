/* 函数别名定义: DataProcessingEngine */
#define DataProcessingEngine DataProcessingEngine


#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * @file 03_rendering_part048.c
 * @brief 渲染系统参数处理和浮点数计算模块
 * @details 本模块包含11个函数，主要处理渲染参数的边界框计算、浮点数插值、
 *          内存管理和批量数据处理等功能。该模块是渲染系统的高级数据处理层，
 *          负责复杂的数值计算和内存管理操作。
 * 
 * 主要功能：
 * - 边界框计算和优化
 * - 浮点数插值计算
 * - 内存池管理
 * - 批量数据处理
 * - 渲染参数管理
 */

/* ================================= 数据结构定义 ================================= */

/**
 * @brief 浮点数边界框结构体
 */
typedef struct {
    float min_x;        ///< 最小X坐标
    float min_y;        ///< 最小Y坐标
    float max_x;        ///< 最大X坐标
    float max_y;        ///< 最大Y坐标
} float_bounding_box_t;

/**
 * @brief 渲染参数结构体
 */
typedef struct {
    uint32_t param_id;      ///< 参数ID
    float param_value1;     ///< 参数值1
    float param_value2;     ///< 参数值2
    uint32_t param_flags;   ///< 参数标志
    void* param_data;       ///< 参数数据指针
} render_params_t;

/**
 * @brief 浮点数插值参数结构体
 */
typedef struct {
    float start_x;          ///< 起始X坐标
    float start_y;          ///< 起始Y坐标
    float end_x;            ///< 结束X坐标
    float end_y;            ///< 结束Y坐标
    float thickness;        ///< 线条粗细
    uint32_t color;         ///< 颜色值
    bool is_wide;           ///< 是否为宽线
} float_interpolation_t;

/**
 * @brief 渲染数据块结构体
 */
typedef struct {
    void* data_ptr;         ///< 数据指针
    uint32_t data_size;     ///< 数据大小
    uint32_t data_capacity; ///< 数据容量
    uint32_t data_count;    ///< 数据计数
    void* metadata_ptr;     ///< 元数据指针
} render_data_block_t;

/**
 * @brief 渲染上下文结构体
 */
typedef struct {
    render_data_block_t* data_blocks;      ///< 数据块数组
    float_bounding_box_t* bounding_boxes;  ///< 边界框数组
    render_params_t* params;                ///< 参数数组
    uint32_t block_count;                   ///< 数据块计数
    uint32_t param_count;                   ///< 参数计数
    uint32_t max_blocks;                    ///< 最大数据块数
    uint32_t max_params;                    ///< 最大参数数
    void* scratch_buffer;                   ///< 临时缓冲区
} render_context_t;

/* ================================= 函数实现 ================================= */

/**
 * @brief 更新浮点数边界框
 * @param context 渲染上下文指针
 * @param param2 参数2（包含X坐标）
 * @param param3 参数3（包含Y坐标）
 * @param update_flag 更新标志
 * @return 无返回值
 * 
 * 该函数根据输入的参数更新浮点数边界框，支持动态扩展边界范围。
 * 主要用于优化渲染区域和减少不必要的渲染计算。
 */
void update_float_bounding_box(render_context_t* context, uint64_t param2, uint64_t param3, char update_flag) {
    uint64_t *puVar1;
    float *pfVar2;
    int64_t lVar3;
    int iVar4;
    uint uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    int64_t lVar10;
    uint64_t uVar11;
    int iVar12;
    int iVar13;
    int64_t lVar14;
    uint *puVar15;
    int64_t *plVar16;
    int *piVar17;
    int *piVar18;
    int *piVar19;
    float fVar20;
    float fVar21;
    float fStackX_8;
    float fStackX_c;
    uint64_t uStack_28;
    uint64_t uStack_20;
    uint64_t uStack_18;
    uint64_t uStack_10;
    
    // 解包输入参数
    fStackX_8 = (float)param2;
    fStackX_c = (float)((uint64_t)param2 >> 0x20);
    uStack_28._0_4_ = (float)param3;
    uStack_28._4_4_ = (float)((uint64_t)param3 >> 0x20);
    fVar20 = uStack_28._4_4_;
    fVar21 = (float)uStack_28;
    uVar11 = param3;
    uStack_18 = param2;
    uStack_10 = param3;
    
    // 如果需要更新且存在数据
    if ((update_flag != '\0') && (uVar11 = param3, context->bounding_box_count != 0)) {
        pfVar2 = (float *)(*(int64_t *)(context + 0x1a) + -0x10 + (int64_t)context->bounding_box_count * 0x10);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        
        // 更新X坐标边界
        if (fStackX_8 < fVar6) {
            uStack_18 = CONCAT44(fStackX_c,fVar6);
            fStackX_8 = fVar6;
        }
        if (fStackX_c < fVar7) {
            uStack_18 = CONCAT44(fVar7,(int32_t)uStack_18);
            fStackX_c = fVar7;
        }
        
        // 更新Y坐标边界
        if (fVar8 < (float)uStack_28) {
            uStack_10 = CONCAT44(uStack_28._4_4_,fVar8);
            fVar21 = fVar8;
        }
        uVar11 = *(uint64_t *)pfVar2;
        if (fVar9 < uStack_28._4_4_) {
            uStack_10 = CONCAT44(fVar9,(int32_t)uStack_10);
            fVar20 = fVar9;
        }
    }
    
    uStack_28 = uVar11;
    
    // 确保边界框的有效性
    if (fVar21 <= fStackX_8) {
        uStack_10 = CONCAT44(uStack_10._4_4_,fStackX_8);
    }
    if (fVar20 <= fStackX_c) {
        uStack_10 = CONCAT44(fStackX_c,(int32_t)uStack_10);
    }
    
    // 扩展边界框数组
    iVar12 = context->bounding_box_count;
    iVar13 = context->max_bounding_boxes;
    if (iVar12 == iVar13) {
        if (iVar13 == 0) {
            iVar13 = 8;
        }
        else {
            iVar13 = iVar13 / 2 + iVar13;
        }
        iVar4 = iVar12 + 1;
        if (iVar12 + 1 < iVar13) {
            iVar4 = iVar13;
        }
        FUN_18013e620(context + 0x18,iVar4);
        iVar12 = context->bounding_box_count;
    }
    
    // 存储新的边界框
    puVar1 = (uint64_t *)(*(int64_t *)(context + 0x1a) + (int64_t)iVar12 * 0x10);
    *puVar1 = uStack_18;
    puVar1[1] = uStack_10;
    context->bounding_box_count = context->bounding_box_count + 1;
    
    // 处理边界框合并
    if (context->bounding_box_count == 0) {
        plVar16 = (int64_t *)(*(int64_t *)(context + 0xe) + 0x18);
    }
    else {
        plVar16 = (int64_t *)((int64_t)(context->bounding_box_count + -1) * 0x10 + *(int64_t *)(context + 0x1a));
    }
    
    lVar10 = *plVar16;
    lVar3 = plVar16[1];
    iVar12 = *context;
    piVar19 = (int *)0x0;
    piVar17 = piVar19;
    if (0 < iVar12) {
        piVar17 = (int *)((int64_t)(iVar12 + -1) * 0x30 + *(int64_t *)(context + 2));
    }
    
    // 检查是否可以合并边界框
    if (((piVar17 != (int *)0x0) &&
        ((*piVar17 == 0 ||
         ((*(int64_t *)(piVar17 + 1) == lVar10 && (*(int64_t *)(piVar17 + 3) == lVar3)))))) &&
       (*(int64_t *)(piVar17 + 8) == 0)) {
        piVar18 = piVar17 + -0xc;
        if (iVar12 < 2) {
            piVar18 = piVar19;
        }
        if ((((*piVar17 == 0) && (piVar18 != (int *)0x0)) && (*(int64_t *)(piVar18 + 1) == lVar10)) &&
           (*(int64_t *)(piVar18 + 3) == lVar3)) {
            if (context->param_count != 0) {
                piVar19 = *(int **)(*(int64_t *)(context + 0x1e) + -8 + (int64_t)context->param_count * 8);
            }
            if ((*(int **)(piVar18 + 6) == piVar19) && (*(int64_t *)(piVar18 + 8) == 0)) {
                *context = iVar12 + -1;
                return;
            }
        }
        *(int64_t *)(piVar17 + 1) = lVar10;
        *(int64_t *)(piVar17 + 3) = lVar3;
        return;
    }
    
    // 添加新的边界框项
    if (context->bounding_box_count == 0) {
        puVar15 = (uint *)(*(int64_t *)(context + 0xe) + 0x18);
    }
    else {
        puVar15 = (uint *)((int64_t)(context->bounding_box_count + -1) * 0x10 + *(int64_t *)(context + 0x1a));
    }
    uVar5 = *puVar15;
    lVar10 = *(int64_t *)(puVar15 + 1);
    uStack_28 = CONCAT44(uStack_28._4_4_,puVar15[3]);
    if (context->param_count == 0) {
        uStack_20 = 0;
    }
    else {
        uStack_20 = *(uint64_t *)(*(int64_t *)(context + 0x1e) + -8 + (int64_t)context->param_count * 8);
    }
    iVar12 = *context;
    iVar13 = context[1];
    if (iVar12 == iVar13) {
        if (iVar13 == 0) {
            iVar13 = 8;
        }
        else {
            iVar13 = iVar13 / 2 + iVar13;
        }
        iVar4 = iVar12 + 1;
        if (iVar12 + 1 < iVar13) {
            iVar4 = iVar13;
        }
        FUN_18013e760(context,iVar4);
        iVar12 = *context;
    }
    lVar14 = (int64_t)iVar12;
    lVar3 = *(int64_t *)(context + 2);
    plVar16 = (int64_t *)(lVar3 + lVar14 * 0x30);
    *plVar16 = (uint64_t)uVar5 << 0x20;
    plVar16[1] = lVar10;
    puVar1 = (uint64_t *)(lVar3 + 0x10 + lVar14 * 0x30);
    *puVar1 = uStack_28;
    puVar1[1] = uStack_20;
    puVar1 = (uint64_t *)(lVar3 + 0x20 + lVar14 * 0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    *context = *context + 1;
    return;
}

/**
 * @brief 处理渲染参数数据
 * @param context 渲染上下文指针
 * @param param2 参数2（包含参数数据）
 * @return 无返回值
 * 
 * 该函数处理渲染参数数据，包括参数的添加、更新和管理。
 * 支持动态扩展参数数组，并处理参数的合并和去重。
 */
void process_render_params(render_context_t* context, uint64_t param2) {
    uint64_t *puVar1;
    int64_t lVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    int64_t lVar6;
    int iVar7;
    int iVar8;
    int64_t lVar9;
    uint *puVar10;
    int64_t *plVar11;
    int *piVar12;
    int *piVar13;
    int *piVar14;
    int32_t uStack_24;
    uint64_t uStack_20;
    
    iVar8 = context->param_count;
    if (iVar8 == context->max_params) {
        DataProcessingEngine0(context + 0x1c);
        iVar8 = context->param_count;
    }
    *(uint64_t *)(*(int64_t *)(context + 0x1e) + (int64_t)iVar8 * 8) = param2;
    context->param_count = context->param_count + 1;
    piVar14 = (int *)0x0;
    if (context->param_count != 0) {
        piVar14 = *(int **)(*(int64_t *)(context + 0x1e) + -8 + (int64_t)context->param_count * 8);
    }
    iVar8 = *context;
    if (iVar8 != 0) {
        piVar13 = (int *)(*(int64_t *)(context + 2) + -0x30 + (int64_t)iVar8 * 0x30);
        if ((piVar13 != (int *)0x0) &&
           (((*piVar13 == 0 || (*(int **)(piVar13 + 6) == piVar14)) && (*(int64_t *)(piVar13 + 8) == 0)
            ))) {
            piVar12 = piVar13 + -0xc;
            if (iVar8 < 2) {
                piVar12 = (int *)0x0;
            }
            if (((*piVar13 == 0) && (piVar12 != (int *)0x0)) && (*(int **)(piVar12 + 6) == piVar14)) {
                if (context->bounding_box_count == 0) {
                    plVar11 = (int64_t *)(*(int64_t *)(context + 0xe) + 0x18);
                }
                else {
                    plVar11 = (int64_t *)
                              ((int64_t)(context->bounding_box_count + -1) * 0x10 + *(int64_t *)(context + 0x1a));
                }
                if (((*(int64_t *)(piVar12 + 1) == *plVar11) && (*(int64_t *)(piVar12 + 3) == plVar11[1]))
                   && (*(int64_t *)(piVar12 + 8) == 0)) {
                    *context = iVar8 + -1;
                    return;
                }
            }
            *(int **)(piVar13 + 6) = piVar14;
            return;
        }
    }
    
    // 添加新的参数项
    if (context->bounding_box_count == 0) {
        puVar10 = (uint *)(*(int64_t *)(context + 0xe) + 0x18);
    }
    else {
        puVar10 = (uint *)((int64_t)(context->bounding_box_count + -1) * 0x10 + *(int64_t *)(context + 0x1a));
    }
    uVar4 = *puVar10;
    lVar6 = *(int64_t *)(puVar10 + 1);
    uVar5 = puVar10[3];
    if (context->param_count == 0) {
        uStack_20 = 0;
    }
    else {
        uStack_20 = *(uint64_t *)(*(int64_t *)(context + 0x1e) + -8 + (int64_t)context->param_count * 8);
    }
    iVar8 = *context;
    iVar7 = context[1];
    if (iVar8 == iVar7) {
        if (iVar7 == 0) {
            iVar7 = 8;
        }
        else {
            iVar7 = iVar7 / 2 + iVar7;
        }
        iVar3 = iVar8 + 1;
        if (iVar8 + 1 < iVar7) {
            iVar3 = iVar7;
        }
        FUN_18013e760(context,iVar3);
        iVar8 = *context;
    }
    lVar9 = (int64_t)iVar8;
    lVar2 = *(int64_t *)(context + 2);
    plVar11 = (int64_t *)(lVar2 + lVar9 * 0x30);
    *plVar11 = (uint64_t)uVar4 << 0x20;
    plVar11[1] = lVar6;
    puVar1 = (uint64_t *)(lVar2 + 0x10 + lVar9 * 0x30);
    *puVar1 = CONCAT44(uStack_24,uVar5);
    puVar1[1] = uStack_20;
    puVar1 = (uint64_t *)(lVar2 + 0x20 + lVar9 * 0x30);
    *puVar1 = 0;
    puVar1[1] = 0;
    *context = *context + 1;
    return;
}

/**
 * @brief 初始化渲染数据块
 * @param param1 参数1（包含渲染上下文）
 * @param param2 数据块大小
 * @param param3 内存分配参数3
 * @param param4 内存分配参数4
 * @return 无返回值
 * 
 * 该函数初始化渲染数据块，包括内存分配、数据结构初始化等操作。
 * 支持动态扩展数据块大小，并处理内存管理。
 */
void initialize_render_data_block(int64_t param1, int param2, uint64_t param3, uint64_t param4) {
    int64_t *plVar1;
    uint *puVar2;
    int iVar3;
    uint64_t *puVar4;
    int64_t lVar5;
    int64_t lVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t lVar11;
    int64_t lVar12;
    int iVar13;
    int64_t lVar14;
    int32_t *puVar15;
    int *piVar16;
    int iVar17;
    int8_t auStackX_10 [8];
    int8_t *puStackX_18;
    uint64_t *puStackX_20;
    int32_t uStack_5c;
    
    iVar3 = *(int *)(param1 + 0x98);
    if (iVar3 < param2) {
        iVar17 = *(int *)(param1 + 0x9c);
        if (iVar17 < param2) {
            if (iVar17 == 0) {
                iVar9 = 8;
            }
            else {
                iVar9 = iVar17 / 2 + iVar17;
            }
            iVar13 = param2;
            if (param2 < iVar9) {
                iVar13 = iVar9;
            }
            if (iVar17 < iVar13) {
                if (SYSTEM_DATA_MANAGER_A != 0) {
                    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
                }
                uVar10 = func_0x000180120ce0((int64_t)iVar13 << 5,SYSTEM_DATA_MANAGER_B,param3,param4,
                                             0xfffffffffffffffe);
                if (*(int64_t *)(param1 + 0xa0) != 0) {
                            // WARNING: Subroutine does not return
                    memcpy(uVar10,*(int64_t *)(param1 + 0xa0),(int64_t)*(int *)(param1 + 0x98) << 5);
                }
                *(uint64_t *)(param1 + 0xa0) = uVar10;
                *(int *)(param1 + 0x9c) = iVar13;
            }
        }
        *(int *)(param1 + 0x98) = param2;
    }
    *(int *)(param1 + 0x94) = param2;
    puVar4 = *(uint64_t **)(param1 + 0xa0);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    
    // 初始化数据块数组
    if (1 < (int64_t)param2) {
        lVar12 = 1;
        lVar14 = 0x20;
        do {
            iVar17 = 0;
            if (lVar12 < iVar3) {
                puVar15 = (int32_t *)(*(int64_t *)(param1 + 0xa0) + lVar14);
                iVar9 = puVar15[1];
                if (iVar9 < 0) {
                    iVar9 = iVar9 / 2 + iVar9;
                    iVar13 = 0;
                    if (0 < iVar9) {
                        iVar13 = iVar9;
                    }
                    FUN_18013e760(puVar15,iVar13);
                }
                *puVar15 = 0;
                lVar5 = *(int64_t *)(param1 + 0xa0);
                iVar9 = *(int *)(lVar5 + 0x14 + lVar14);
                if (iVar9 < 0) {
                    iVar9 = iVar9 / 2 + iVar9;
                    iVar13 = 0;
                    if (0 < iVar9) {
                        iVar13 = iVar9;
                    }
                    FUN_18011dd10(lVar5 + 0x10 + lVar14,iVar13);
                }
                *(int32_t *)(lVar5 + 0x10 + lVar14) = 0;
            }
            else {
                puStackX_20 = (uint64_t *)(*(int64_t *)(param1 + 0xa0) + lVar14);
                puStackX_18 = auStackX_10;
                if (puStackX_20 != (uint64_t *)0x0) {
                    puStackX_20[2] = 0;
                    puStackX_20[3] = 0;
                    *puStackX_20 = 0;
                    puStackX_20[1] = 0;
                    puStackX_20[2] = 0;
                    puStackX_20[3] = 0;
                }
            }
            piVar16 = (int *)(*(int64_t *)(param1 + 0xa0) + lVar14);
            if (*piVar16 == 0) {
                puVar2 = (uint *)(*(int64_t *)(param1 + 0x68) + -0x10 +
                                 (int64_t)*(int *)(param1 + 0x60) * 0x10);
                uVar7 = *puVar2;
                lVar5 = *(int64_t *)(puVar2 + 1);
                uVar8 = puVar2[3];
                uVar10 = *(uint64_t *)
                          (*(int64_t *)(param1 + 0x78) + -8 + (int64_t)*(int *)(param1 + 0x70) * 8);
                if (piVar16[1] == 0) {
                    FUN_18013e760(piVar16,8);
                    iVar17 = *piVar16;
                }
                lVar11 = (int64_t)iVar17;
                lVar6 = *(int64_t *)(piVar16 + 2);
                plVar1 = (int64_t *)(lVar6 + lVar11 * 0x30);
                *plVar1 = (uint64_t)uVar7 << 0x20;
                plVar1[1] = lVar5;
                puVar4 = (uint64_t *)(lVar6 + 0x10 + lVar11 * 0x30);
                *puVar4 = CONCAT44(uStack_5c,uVar8);
                puVar4[1] = uVar10;
                puVar15 = (int32_t *)(lVar6 + 0x20 + lVar11 * 0x30);
                *puVar15 = 0;
                puVar15[1] = 0;
                puVar15[2] = 0;
                puVar15[3] = 0;
                *piVar16 = *piVar16 + 1;
            }
            lVar12 = lVar12 + 1;
            lVar14 = lVar14 + 0x20;
        } while (lVar12 < param2);
    }
    return;
}

/**
 * @brief 合并渲染数据块
 * @param context 渲染上下文指针
 * @return 无返回值
 * 
 * 该函数合并渲染数据块，优化内存使用和提高渲染效率。
 * 主要用于批量处理和数据优化。
 */
void merge_render_data_blocks(render_context_t* context) {
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int64_t lVar8;
    int64_t lVar9;
    
    if (1 < context[0x25]) {
        func_0x000180292160(context,0);
        iVar4 = *context;
        if ((iVar4 != 0) &&
           (iVar5 = iVar4 + -1, *(int *)(*(int64_t *)(context + 2) + (int64_t)iVar5 * 0x30) == 0)) {
            *context = iVar5;
            iVar4 = iVar5;
        }
        iVar6 = 0;
        iVar7 = 1;
        iVar5 = 0;
        lVar9 = 0x20;
        lVar8 = lVar9;
        if (1 < context[0x25]) {
            do {
                piVar3 = (int *)(*(int64_t *)(context + 0x28) + lVar8);
                iVar4 = *piVar3;
                if ((iVar4 != 0) &&
                   (*(int *)(*(int64_t *)(piVar3 + 2) + -0x30 + (int64_t)iVar4 * 0x30) == 0)) {
                    *piVar3 = iVar4 + -1;
                    iVar4 = iVar4 + -1;
                }
                iVar5 = iVar5 + piVar3[4];
                iVar6 = iVar6 + iVar4;
                iVar7 = iVar7 + 1;
                lVar8 = lVar8 + 0x20;
            } while (iVar7 < context[0x25]);
            iVar4 = *context;
        }
        iVar2 = context[1];
        iVar4 = iVar4 + iVar6;
        iVar7 = 8;
        if (iVar2 < iVar4) {
            if (iVar2 == 0) {
                iVar2 = 8;
            }
            else {
                iVar2 = iVar2 / 2 + iVar2;
            }
            iVar1 = iVar4;
            if (iVar4 < iVar2) {
                iVar1 = iVar2;
            }
            FUN_18013e760(context,iVar1);
        }
        *context = iVar4;
        iVar4 = context[5];
        iVar2 = context[4] + iVar5;
        if (iVar4 < iVar2) {
            if (iVar4 != 0) {
                iVar7 = iVar4 + iVar4 / 2;
            }
            iVar4 = iVar2;
            if (iVar2 < iVar7) {
                iVar4 = iVar7;
            }
            FUN_18011dd10(context + 4,iVar4);
        }
        context[4] = iVar2;
        iVar4 = 1;
        *(int64_t *)(context + 0x16) =
             *(int64_t *)(context + 6) + ((int64_t)iVar2 - (int64_t)iVar5) * 2;
        if (1 < context[0x25]) {
            do {
                piVar3 = (int *)(*(int64_t *)(context + 0x28) + lVar9);
                if (*piVar3 != 0) {
                            // WARNING: Subroutine does not return
                    memcpy(((int64_t)*context - (int64_t)iVar6) * 0x30 + *(int64_t *)(context + 2),
                           *(uint64_t *)(piVar3 + 2),(int64_t)*piVar3 * 0x30);
                }
                if (piVar3[4] != 0) {
                            // WARNING: Subroutine does not return
                    memcpy(*(uint64_t *)(context + 0x16),*(uint64_t *)(piVar3 + 6),(int64_t)piVar3[4] * 2
                          );
                }
                iVar4 = iVar4 + 1;
                lVar9 = lVar9 + 0x20;
            } while (iVar4 < context[0x25]);
        }
        FUN_180291950(context);
        context[0x25] = 1;
    }
    return;
}

/**
 * @brief 渲染数据块合并处理（简化版本）
 * @param param1 参数1
 * @return 无返回值
 * 
 * 该函数是渲染数据块合并处理的简化版本，用于特定场景下的数据合并。
 */
void merge_render_data_blocks_simple(uint64_t param1) {
    int *piVar1;
    int *unaff_RBX;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int64_t lVar6;
    int iVar7;
    int64_t lVar8;
    
    func_0x000180292160(param1,0);
    iVar2 = *unaff_RBX;
    if ((iVar2 != 0) &&
       (iVar3 = iVar2 + -1, *(int *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar3 * 0x30) == 0)) {
        *unaff_RBX = iVar3;
        iVar2 = iVar3;
    }
    iVar4 = 0;
    iVar5 = 1;
    iVar3 = 0;
    lVar8 = 0x20;
    lVar6 = lVar8;
    if (1 < unaff_RBX[0x25]) {
        do {
            piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar6);
            iVar2 = *piVar1;
            if ((iVar2 != 0) &&
               (*(int *)(*(int64_t *)(piVar1 + 2) + -0x30 + (int64_t)iVar2 * 0x30) == 0)) {
                *piVar1 = iVar2 + -1;
                iVar2 = iVar2 + -1;
            }
            iVar3 = iVar3 + piVar1[4];
            iVar4 = iVar4 + iVar2;
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 0x20;
        } while (iVar5 < unaff_RBX[0x25]);
        iVar2 = *unaff_RBX;
    }
    iVar5 = 8;
    if (unaff_RBX[1] < iVar2 + iVar4) {
        FUN_18013e760();
    }
    *unaff_RBX = iVar2 + iVar4;
    iVar2 = unaff_RBX[5];
    iVar7 = unaff_RBX[4] + iVar3;
    if (iVar2 < iVar7) {
        if (iVar2 != 0) {
            iVar5 = iVar2 + iVar2 / 2;
        }
        iVar2 = iVar7;
        if (iVar7 < iVar5) {
            iVar2 = iVar5;
        }
        FUN_18011dd10(unaff_RBX + 4,iVar2);
    }
    unaff_RBX[4] = iVar7;
    iVar2 = 1;
    *(int64_t *)(unaff_RBX + 0x16) =
         *(int64_t *)(unaff_RBX + 6) + ((int64_t)iVar7 - (int64_t)iVar3) * 2;
    if (1 < unaff_RBX[0x25]) {
        do {
            piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar8);
            if (*piVar1 != 0) {
                        // WARNING: Subroutine does not return
                memcpy(((int64_t)*unaff_RBX - (int64_t)iVar4) * 0x30 + *(int64_t *)(unaff_RBX + 2),
                       *(uint64_t *)(piVar1 + 2),(int64_t)*piVar3 * 0x30);
            }
            if (piVar1[4] != 0) {
                        // WARNING: Subroutine does not return
                memcpy(*(uint64_t *)(unaff_RBX + 0x16),*(uint64_t *)(piVar1 + 6),(int64_t)piVar1[4] * 2
                      );
            }
            iVar2 = iVar2 + 1;
            lVar8 = lVar8 + 0x20;
        } while (iVar2 < unaff_RBX[0x25]);
    }
    FUN_180291950();
    unaff_RBX[0x25] = 1;
    return;
}

/**
 * @brief 渲染数据块合并处理（基础版本）
 * @return 无返回值
 * 
 * 该函数是渲染数据块合并处理的基础版本，用于最基本的数据合并操作。
 */
void merge_render_data_blocks_basic(void) {
    int *piVar1;
    int *unaff_RBX;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int64_t lVar6;
    int iVar7;
    int64_t lVar8;
    
    func_0x000180292160();
    iVar2 = *unaff_RBX;
    if ((iVar2 != 0) &&
       (iVar3 = iVar2 + -1, *(int *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar3 * 0x30) == 0)) {
        *unaff_RBX = iVar3;
        iVar2 = iVar3;
    }
    iVar4 = 0;
    iVar5 = 1;
    iVar3 = 0;
    lVar8 = 0x20;
    lVar6 = lVar8;
    if (1 < unaff_RBX[0x25]) {
        do {
            piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar6);
            iVar2 = *piVar1;
            if ((iVar2 != 0) &&
               (*(int *)(*(int64_t *)(piVar1 + 2) + -0x30 + (int64_t)iVar2 * 0x30) == 0)) {
                *piVar1 = iVar2 + -1;
                iVar2 = iVar2 + -1;
            }
            iVar3 = iVar3 + piVar1[4];
            iVar4 = iVar4 + iVar2;
            iVar5 = iVar5 + 1;
            lVar6 = lVar6 + 0x20;
        } while (iVar5 < unaff_RBX[0x25]);
        iVar2 = *unaff_RBX;
    }
    iVar5 = 8;
    if (unaff_RBX[1] < iVar2 + iVar4) {
        FUN_18013e760();
    }
    *unaff_RBX = iVar2 + iVar4;
    iVar2 = unaff_RBX[5];
    iVar7 = unaff_RBX[4] + iVar3;
    if (iVar2 < iVar7) {
        if (iVar2 != 0) {
            iVar5 = iVar2 + iVar2 / 2;
        }
        iVar2 = iVar7;
        if (iVar7 < iVar5) {
            iVar2 = iVar5;
        }
        FUN_18011dd10(unaff_RBX + 4,iVar2);
    }
    unaff_RBX[4] = iVar7;
    iVar2 = 1;
    *(int64_t *)(unaff_RBX + 0x16) =
         *(int64_t *)(unaff_RBX + 6) + ((int64_t)iVar7 - (int64_t)iVar3) * 2;
    if (1 < unaff_RBX[0x25]) {
        do {
            piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0x28) + lVar8);
            if (*piVar1 != 0) {
                        // WARNING: Subroutine does not return
                memcpy(((int64_t)*unaff_RBX - (int64_t)iVar4) * 0x30 + *(int64_t *)(unaff_RBX + 2),
                       *(uint64_t *)(piVar1 + 2),(int64_t)*piVar1 * 0x30);
            }
            if (piVar1[4] != 0) {
                        // WARNING: Subroutine does not return
                memcpy(*(uint64_t *)(unaff_RBX + 0x16),*(uint64_t *)(piVar1 + 6),(int64_t)piVar1[4] * 2
                      );
            }
            iVar2 = iVar2 + 1;
            lVar8 = lVar8 + 0x20;
        } while (iVar2 < unaff_RBX[0x25]);
    }
    FUN_180291950();
    unaff_RBX[0x25] = 1;
    return;
}

/**
 * @brief 处理渲染数据流
 * @return 无返回值
 * 
 * 该函数处理渲染数据流，包括数据复制和内存管理操作。
 */
void process_render_data_stream(void) {
    int64_t unaff_RBX;
    int unaff_EBP;
    int *piVar1;
    int64_t unaff_R14;
    
    while( true ) {
        piVar1 = (int *)(*(int64_t *)(unaff_RBX + 0xa0) + unaff_R14);
        if (*piVar1 != 0) {
                    // WARNING: Subroutine does not return
            memcpy();
        }
        if (piVar1[4] != 0) break;
        unaff_EBP = unaff_EBP + 1;
        unaff_R14 = unaff_R14 + 0x20;
        if (*(int *)(unaff_RBX + 0x94) <= unaff_EBP) {
            FUN_180291950();
            *(int32_t *)(unaff_RBX + 0x94) = 1;
            return;
        }
    }
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(unaff_RBX + 0x58),*(uint64_t *)(piVar1 + 6),(int64_t)piVar1[4] * 2);
}

/**
 * @brief 空操作函数
 * @return 无返回值
 * 
 * 该函数是一个空操作函数，用于占位或作为默认实现。
 */
void render_nop_operation(void) {
    return;
}

/**
 * @brief 更新渲染数据统计
 * @param context 渲染上下文指针
 * @param param2 参数2（数据增量）
 * @param param3 参数3（元数据增量）
 * @return 无返回值
 * 
 * 该函数更新渲染数据的统计信息，包括数据大小和元数据大小的更新。
 */
void update_render_data_stats(render_context_t* context, int param2, int param3) {
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    piVar1 = (int *)(*(int64_t *)(context + 2) + -0x30 + (int64_t)*context * 0x30);
    *piVar1 = *piVar1 + param2;
    iVar4 = context[8];
    FUN_18013e800(context + 8,iVar4 + param3);
    iVar2 = context[4];
    *(int64_t *)(context + 0x14) = *(int64_t *)(context + 10) + (int64_t)iVar4 * 0x14;
    param2 = iVar2 + param2;
    iVar4 = context[5];
    if (iVar4 < param2) {
        if (iVar4 == 0) {
            iVar4 = 8;
        }
        else {
            iVar4 = iVar4 / 2 + iVar4;
        }
        iVar3 = param2;
        if (param2 < iVar4) {
            iVar3 = iVar4;
        }
        FUN_18011dd10(context + 4,iVar3);
    }
    context[4] = param2;
    *(int64_t *)(context + 0x16) = *(int64_t *)(context + 6) + (int64_t)iVar2 * 2;
    return;
}

/**
 * @brief 处理浮点数渲染参数
 * @param param1 参数1（包含渲染上下文）
 * @param param2 参数2（浮点数数组指针）
 * @param param3 参数3（浮点数数组指针）
 * @param param4 参数4（浮点数数组指针）
 * @param param5 参数5（浮点数数组指针）
 * @param param6 参数6（颜色值）
 * @return 无返回值
 * 
 * 该函数处理浮点数渲染参数，用于复杂的渲染效果计算。
 * 主要用于处理线段、多边形等几何图形的渲染参数。
 */
void process_float_render_params(int64_t param1, uint64_t *param2, uint64_t *param3, uint64_t *param4,
                               uint64_t *param5, uint32_t param6) {
    int32_t uVar1;
    int32_t uVar2;
    int32_t uVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    int32_t uVar7;
    int32_t uVar8;
    short sVar9;
    int64_t lVar10;
    
    // 提取浮点数参数
    uVar1 = *(int32_t *)((int64_t)param4 + 4);
    uVar2 = *(int32_t *)param3;
    uVar3 = *(int32_t *)((int64_t)param2 + 4);
    uVar4 = *(int32_t *)param4;
    sVar9 = *(short *)(param1 + 0x48);
    uVar5 = *(int32_t *)param5;
    uVar6 = *(int32_t *)((int64_t)param5 + 4);
    uVar7 = *(int32_t *)param2;
    uVar8 = *(int32_t *)((int64_t)param3 + 4);
    
    // 设置渲染参数
    **(short **)(param1 + 0x58) = sVar9;
    *(short *)(*(int64_t *)(param1 + 0x58) + 2) = sVar9 + 1;
    *(short *)(*(int64_t *)(param1 + 0x58) + 4) = sVar9 + 2;
    *(short *)(*(int64_t *)(param1 + 0x58) + 6) = sVar9;
    *(short *)(*(int64_t *)(param1 + 0x58) + 8) = sVar9 + 2;
    *(short *)(*(int64_t *)(param1 + 0x58) + 10) = sVar9 + 3;
    
    // 存储顶点数据
    **(uint64_t **)(param1 + 0x50) = *param2;
    *(uint64_t *)(*(int64_t *)(param1 + 0x50) + 8) = *param4;
    *(int32_t *)(*(int64_t *)(param1 + 0x50) + 0x10) = param6;
    
    lVar10 = *(int64_t *)(param1 + 0x50);
    *(int32_t *)(lVar10 + 0x14) = uVar2;
    *(int32_t *)(lVar10 + 0x18) = uVar3;
    lVar10 = *(int64_t *)(param1 + 0x50);
    *(int32_t *)(lVar10 + 0x1c) = uVar5;
    *(int32_t *)(lVar10 + 0x20) = uVar1;
    *(int32_t *)(*(int64_t *)(param1 + 0x50) + 0x24) = param6;
    *(uint64_t *)(*(int64_t *)(param1 + 0x50) + 0x28) = *param3;
    *(uint64_t *)(*(int64_t *)(param1 + 0x50) + 0x30) = *param5;
    *(int32_t *)(*(int64_t *)(param1 + 0x50) + 0x38) = param6;
    lVar10 = *(int64_t *)(param1 + 0x50);
    *(int32_t *)(lVar10 + 0x3c) = uVar7;
    *(int32_t *)(lVar10 + 0x40) = uVar8;
    lVar10 = *(int64_t *)(param1 + 0x50);
    *(int32_t *)(lVar10 + 0x44) = uVar4;
    *(int32_t *)(lVar10 + 0x48) = uVar6;
    *(int32_t *)(*(int64_t *)(param1 + 0x50) + 0x4c) = param6;
    
    // 更新指针
    *(int64_t *)(param1 + 0x50) = *(int64_t *)(param1 + 0x50) + 0x50;
    *(int *)(param1 + 0x48) = *(int *)(param1 + 0x48) + 4;
    *(int64_t *)(param1 + 0x58) = *(int64_t *)(param1 + 0x58) + 0xc;
    return;
}

/**
 * @brief 执行浮点数插值渲染
 * @param param1 参数1（包含渲染上下文）
 * @param param2 参数2（浮点数数据指针）
 * @param param3 参数3（顶点数量）
 * @param param4 参数4（颜色值）
 * @param param5 参数5（标志位）
 * @param param6 参数6（线条粗细）
 * @return 无返回值
 * 
 * 该函数执行浮点数插值渲染，用于生成平滑的线条和几何图形。
 * 支持多种渲染模式，包括宽线渲染和普通渲染。
 */
void execute_float_interpolation_render(int64_t param1, int64_t param2, int param3, uint32_t param4, char param5,
                                      float param6) {
    float *pfVar1;
    int32_t uVar2;
    int32_t uVar3;
    float fVar4;
    int64_t lVar5;
    int64_t lVar6;
    int iVar7;
    int64_t lVar8;
    int iVar9;
    int64_t lVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    int8_t auStack_f8 [16];
    uint uStack_e8;
    uint uStack_e4;
    int64_t lStack_d8;
    int iStack_d0;
    uint64_t uStack_c0;
    
    uStack_c0 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_f8;
    uStack_e8 = param4;
    if (1 < param3) {
        iVar9 = param3 + -1;
        if (param5 != '\0') {
            iVar9 = param3;
        }
        uVar2 = **(int32_t **)(param1 + 0x38);
        uVar3 = (*(int32_t **)(param1 + 0x38))[1];
        lVar10 = (int64_t)iVar9;
        auStack_f8[0] = 1.0 < param6;
        lStack_d8 = lVar10;
        if ((*(byte *)(param1 + 0x30) & 1) != 0) {
            uStack_e4 = param4 & 0xffffff;
            iStack_d0 = ((byte)auStack_f8[0] + 3) * param3;
            iVar7 = 0x12;
            if (!(bool)auStack_f8[0]) {
                iVar7 = 0xc;
            }
            FUN_1802921e0(param1,iVar7 * iVar9,iStack_d0);
                        // WARNING: Subroutine does not return
            SystemCore_MemoryManager0();
        }
        FUN_1802921e0(param1,iVar9 * 6,iVar9 * 4);
        if (0 < lVar10) {
            iVar9 = 0;
            lVar8 = 0;
            do {
                iVar9 = iVar9 + 1;
                fVar4 = *(float *)(param2 + lVar8 * 8);
                pfVar1 = (float *)(param2 + lVar8 * 8);
                lVar8 = lVar8 + 1;
                lVar6 = 0;
                if (iVar9 != param3) {
                    lVar6 = lVar8;
                }
                fVar12 = *(float *)(param2 + lVar6 * 8) - fVar4;
                fVar13 = *(float *)(param2 + 4 + lVar6 * 8) - pfVar1[1];
                fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
                if (0.0 < fVar11) {
                    fVar11 = 1.0 / SQRT(fVar11);
                    fVar12 = fVar12 * fVar11;
                    fVar13 = fVar13 * fVar11;
                }
                fVar13 = fVar13 * param6 * 0.5;
                fVar12 = fVar12 * param6 * 0.5;
                **(float **)(param1 + 0x50) = fVar4 + fVar13;
                *(float *)(*(int64_t *)(param1 + 0x50) + 4) = pfVar1[1] - fVar12;
                lVar5 = *(int64_t *)(param1 + 0x50);
                *(int32_t *)(lVar5 + 8) = uVar2;
                *(int32_t *)(lVar5 + 0xc) = uVar3;
                *(uint *)(*(int64_t *)(param1 + 0x50) + 0x10) = param4;
                *(float *)(*(int64_t *)(param1 + 0x50) + 0x14) = fVar13 + *(float *)(param2 + lVar6 * 8);
                *(float *)(*(int64_t *)(param1 + 0x50) + 0x18) =
                     *(float *)(param2 + 4 + lVar6 * 8) - fVar12;
                lVar5 = *(int64_t *)(param1 + 0x50);
                *(int32_t *)(lVar5 + 0x1c) = uVar2;
                *(int32_t *)(lVar5 + 0x20) = uVar3;
                *(uint *)(*(int64_t *)(param1 + 0x50) + 0x24) = param4;
                *(float *)(*(int64_t *)(param1 + 0x50) + 0x28) = *(float *)(param2 + lVar6 * 8) - fVar13;
                *(float *)(*(int64_t *)(param1 + 0x50) + 0x2c) =
                     fVar12 + *(float *)(param2 + 4 + lVar6 * 8);
                lVar6 = *(int64_t *)(param1 + 0x50);
                *(int32_t *)(lVar6 + 0x30) = uVar2;
                *(int32_t *)(lVar6 + 0x34) = uVar3;
                *(uint *)(*(int64_t *)(param1 + 0x50) + 0x38) = param4;
                *(float *)(*(int64_t *)(param1 + 0x50) + 0x3c) = *pfVar1 - fVar13;
                *(float *)(*(int64_t *)(param1 + 0x50) + 0x40) = fVar12 + pfVar1[1];
                lVar6 = *(int64_t *)(param1 + 0x50);
                *(int32_t *)(lVar6 + 0x44) = uVar2;
                *(int32_t *)(lVar6 + 0x48) = uVar3;
                *(uint *)(*(int64_t *)(param1 + 0x50) + 0x4c) = param4;
                *(int64_t *)(param1 + 0x50) = *(int64_t *)(param1 + 0x50) + 0x50;
                **(int16_t **)(param1 + 0x58) = *(int16_t *)(param1 + 0x48);
                *(short *)(*(int64_t *)(param1 + 0x58) + 2) = *(short *)(param1 + 0x48) + 1;
                *(short *)(*(int64_t *)(param1 + 0x58) + 4) = *(short *)(param1 + 0x48) + 2;
                *(int16_t *)(*(int64_t *)(param1 + 0x58) + 6) = *(int16_t *)(param1 + 0x48);
                *(short *)(*(int64_t *)(param1 + 0x58) + 8) = *(short *)(param1 + 0x48) + 2;
                *(short *)(*(int64_t *)(param1 + 0x58) + 10) = *(short *)(param1 + 0x48) + 3;
                *(int64_t *)(param1 + 0x58) = *(int64_t *)(param1 + 0x58) + 0xc;
                *(int *)(param1 + 0x48) = *(int *)(param1 + 0x48) + 4;
            } while (lVar8 < lVar10);
        }
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_c0 ^ (uint64_t)auStack_f8);
}

/* ================================= 函数别名 ================================= */

// 原始函数别名，用于向后兼容
void FUN_180291b40(int *param_1, uint64_t param_2, uint64_t param_3, char param_4)
    __attribute__((alias("update_float_bounding_box")));

void FUN_180291c70(int *param_1, uint64_t param_2)
    __attribute__((alias("process_render_params")));

void FUN_180291cf0(int64_t param_1, int param_2, uint64_t param_3, uint64_t param_4)
    __attribute__((alias("initialize_render_data_block")));

void FUN_180291f60(int *param_1)
    __attribute__((alias("merge_render_data_blocks")));

void FUN_180291f76(uint64_t param_1)
    __attribute__((alias("merge_render_data_blocks_simple")));

void FUN_180291f87(void)
    __attribute__((alias("merge_render_data_blocks_basic")));

void FUN_1802920d0(void)
    __attribute__((alias("process_render_data_stream")));

void FUN_180292156(void)
    __attribute__((alias("render_nop_operation")));

void FUN_1802921e0(int *param_1, int param_2, int param_3)
    __attribute__((alias("update_render_data_stats")));

void FUN_180292290(int64_t param_1, uint64_t *param_2, uint64_t *param_3, uint64_t *param_4,
                  uint64_t *param_5, int32_t param_6)
    __attribute__((alias("process_float_render_params")));

void FUN_1802923e0(int64_t param_1, int64_t param_2, int param_3, uint param_4, char param_5,
                  float param_6)
    __attribute__((alias("execute_float_interpolation_render")));

/* ================================= 模块信息 ================================= */

/**
 * @module 渲染系统参数处理和浮点数计算模块
 * 
 * @description
 * 本模块是TaleWorlds.Native渲染系统的重要组成部分，负责处理渲染参数、
 * 浮点数计算、边界框优化和内存管理等核心功能。该模块为上层渲染系统
 * 提供了高效的数据处理和计算能力。
 * 
 * @features
 * - 边界框计算和优化
 * - 浮点数插值计算
 * - 内存池管理
 * - 批量数据处理
 * - 渲染参数管理
 * - 动态数组扩展
 * - 数据合并和优化
 * 
 * @dependencies
 * - TaleWorlds.Native.Split.h
 * - 内存管理函数 (FUN_18013e620, FUN_18013e760, FUN_18011dd10)
 * - 数据处理函数 (FUN_180292160, FUN_180291950)
 * 
 * @notes
 * 本模块中的函数主要用于渲染系统的高级数据处理，涉及复杂的内存管理
 * 和数值计算。部分函数包含平台特定的优化和硬件加速支持。
 * 
 * @author Claude Code Assistant
 * @version 1.0
 * @date 2024
 */