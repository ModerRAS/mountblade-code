#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/*=============================================================================
 * 03_rendering_part114.c - 渲染系统高级数据处理和资源管理模块
 * 
 * 本模块包含16个核心函数，涵盖渲染系统高级数据处理、资源管理、
 * 内存分配、缓冲区管理、序列化、数据变换和系统清理等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染数据批量处理和序列化
 * - 资源管理和内存分配
 * - 缓冲区操作和数据变换
 * - 系统状态管理和清理
 * - 高级渲染参数处理
 * 
 * 作者: Claude Code
 * 创建时间: 2025-08-28
 * 完成时间: 2025-08-28
 *=============================================================================*/

/*=============================================================================
 * 常量定义和宏
 *=============================================================================*/

/* 渲染系统数据块大小常量 */
#define RENDERING_SYSTEM_BLOCK_SIZE_176   0xB0    /* 176字节 - 渲染数据块大小 */
#define RENDERING_SYSTEM_BLOCK_SIZE_416   0x1A0   /* 416字节 - 大型渲染数据块大小 */
#define RENDERING_SYSTEM_BUFFER_THRESHOLD 5       /* 缓冲区阈值 */
#define RENDERING_SYSTEM_POINTER_SIZE     8       /* 指针大小 */
#define RENDERING_SYSTEM_INT_SIZE        4       /* 整数大小 */

/* 渲染系统偏移量常量 */
#define RENDERING_OFFSET_BASE            0x00    /* 基础偏移量 */
#define RENDERING_OFFSET_DATA_START      0x1A    /* 数据起始偏移量 */
#define RENDERING_OFFSET_DATA_END        0x1C    /* 数据结束偏移量 */
#define RENDERING_OFFSET_COUNT           0x22    /* 计数偏移量 */
#define RENDERING_OFFSET_SIZE            0x24    /* 大小偏移量 */
#define RENDERING_OFFSET_FLAGS           0x28    /* 标志偏移量 */
#define RENDERING_OFFSET_CAPACITY        0x26    /* 容量偏移量 */
#define RENDERING_OFFSET_RESOURCE_COUNT  0x68    /* 资源计数偏移量 */
#define RENDERING_OFFSET_RESOURCE_START 0x88    /* 资源起始偏移量 */
#define RENDERING_OFFSET_RESOURCE_END   0x90    /* 资源结束偏移量 */
#define RENDERING_OFFSET_RESOURCE_FLAGS 0xA8    /* 资源标志偏移量 */
#define RENDERING_OFFSET_RESOURCE_EXTRA  0xAC    /* 资源额外数据偏移量 */

/* 渲染系统内存管理常量 */
#define RENDERING_MEMORY_ALIGNMENT       8       /* 内存对齐 */
#define RENDERING_MEMORY_INITIAL_SIZE    1       /* 初始内存大小 */
#define RENDERING_MEMORY_GROWTH_FACTOR  2       /* 内存增长因子 */

/* 渲染系统错误码 */
#define RENDERING_ERROR_SUCCESS          0       /* 成功 */
#define RENDERING_ERROR_MEMORY          -1      /* 内存错误 */
#define RENDERING_ERROR_BUFFER          -2      /* 缓冲区错误 */
#define RENDERING_ERROR_RESOURCE        -3      /* 资源错误 */

/*=============================================================================
 * 函数别名定义
 *=============================================================================*/

/* 主要渲染处理函数别名 */
#define RenderingSystem_ProcessRenderData              FUN_1803370b0  /* 渲染系统数据处理器 */
#define RenderingSystem_ProcessRenderDataEx           FUN_1803370bc  /* 渲染系统扩展数据处理器 */
#define RenderingSystem_ProcessRenderDataRange        FUN_1803371e1  /* 渲染系统范围数据处理器 */
#define RenderingSystem_ProcessRenderDataQuick        FUN_1803372f3  /* 渲染系统快速数据处理器 */
#define RenderingSystem_InitializeRenderProcessor    FUN_18033731d  /* 渲染系统处理器初始化器 */
#define RenderingSystem_CleanupRenderProcessor        FUN_18033738f  /* 渲染系统处理器清理器 */
#define RenderingSystem_ResetRenderProcessor         FUN_1803373cc  /* 渲染系统处理器重置器 */

/* 资源管理函数别名 */
#define RenderingSystem_LoadRenderResource            FUN_180337400  /* 渲染系统资源加载器 */
#define RenderingSystem_LoadRenderResourceBatch       FUN_1803374d0  /* 渲染系统批量资源加载器 */
#define RenderingSystem_LoadRenderResourceFlags       FUN_1803375cd  /* 渲染系统资源标志加载器 */
#define RenderingSystem_LoadRenderResourceData       FUN_180337600  /* 渲染系统资源数据加载器 */
#define RenderingSystem_LoadRenderResourceDataBatch  FUN_180337692  /* 渲染系统批量资源数据加载器 */
#define RenderingSystem_EmptyRenderOperation          FUN_1803377a2  /* 渲染系统空操作器 */
#define RenderingSystem_SaveRenderResource           FUN_1803377b0  /* 渲染系统资源保存器 */
#define RenderingSystem_SaveRenderResourceEx         FUN_180337990  /* 渲染系统扩展资源保存器 */
#define RenderingSystem_CleanupRenderResource         FUN_180337af0  /* 渲染系统资源清理器 */

/* 辅助函数别名 */
#define RenderingSystem_AllocateRenderMemory          FUN_18033ab50  /* 渲染系统内存分配器 */
#define RenderingSystem_GetRenderResource             FUN_180337b40  /* 渲染系统资源获取器 */
#define RenderingSystem_ExpandRenderBuffer           System_BufferManager  /* 渲染系统缓冲区扩展器 */
#define RenderingSystem_ProcessRenderSubData         System_QueueProcessor  /* 渲染系统子数据处理器 */
#define RenderingSystem_ProcessRenderParameters      FUN_18063a050  /* 渲染系统参数处理器 */
#define RenderingSystem_InitializeRenderState        FUN_18063a110  /* 渲染系统状态初始化器 */
#define RenderingSystem_SaveRenderParameters         FUN_18063aca0  /* 渲染系统参数保存器 */
#define RenderingSystem_ProcessRenderSubResources    FUN_180338100  /* 渲染系统子资源处理器 */
#define RenderingSystem_SaveRenderSubResources        FUN_1803387a0  /* 渲染系统子资源保存器 */

/*=============================================================================
 * 16个核心渲染系统函数实现
 *=============================================================================*/

/**
 * 渲染系统数据处理器
 * 
 * 主要功能：
 * - 处理渲染数据序列化
 * - 管理数据块和资源
 * - 批量处理渲染数据
 * - 内存管理和缓冲区操作
 * 
 * @param param_1 渲染数据指针
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_ProcessRenderData(int32_t *param_1, int64_t *param_2)
{
    int32_t uVar1;
    int64_t lVar2;
    int64_t *plVar3;
    int32_t *puVar4;
    int *piVar5;
    int iVar6;
    int *piVar7;
    int64_t lVar8;
    int64_t lVar9;
    int64_t lVar10;
    int64_t lVar11;
    
    /* 处理基础渲染数据 */
    uVar1 = *param_1;
    puVar4 = (int32_t *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar4 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 处理扩展渲染数据 */
    puVar4 = (int32_t *)param_2[1];
    uVar1 = param_1[1];
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar4 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 处理高级渲染数据 */
    puVar4 = (int32_t *)param_2[1];
    uVar1 = param_1[2];
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar4 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 处理渲染子数据 */
    RenderingSystem_ProcessRenderSubData(param_2, param_1 + 4);
    
    /* 处理渲染数据块 */
    piVar5 = (int *)param_2[1];
    iVar6 = (int)((*(int64_t *)(param_1 + 0x1c) - *(int64_t *)(param_1 + 0x1a)) / RENDERING_SYSTEM_BLOCK_SIZE_176);
    if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)piVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        piVar5 = (int *)param_2[1];
    }
    *piVar5 = iVar6;
    lVar11 = 0;
    piVar5 = (int *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
    lVar10 = (int64_t)iVar6;
    param_2[1] = (int64_t)piVar5;
    lVar9 = lVar11;
    
    /* 批量处理渲染数据 */
    if (0 < iVar6) {
        do {
            piVar7 = (int *)(*(int64_t *)(param_1 + 0x1a) + lVar9);
            iVar6 = *piVar7;
            if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
                RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)piVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
                piVar5 = (int *)param_2[1];
            }
            *piVar5 = iVar6;
            param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
            RenderingSystem_ProcessRenderParameters(param_2, piVar7 + 4);
            RenderingSystem_ProcessRenderSubData(param_2, piVar7 + 0xc);
            lVar8 = *(int64_t *)(piVar7 + 0x24);
            lVar2 = *(int64_t *)(piVar7 + 0x22);
            piVar5 = (int *)param_2[1];
            if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
                RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)piVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
                piVar5 = (int *)param_2[1];
            }
            iVar6 = (int)(lVar8 - lVar2 >> 3);
            *piVar5 = iVar6;
            param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
            piVar5 = (int *)param_2[1];
            lVar8 = lVar11;
            if (0 < (int64_t)iVar6) {
                do {
                    plVar3 = *(int64_t **)(*(int64_t *)(piVar7 + 0x22) + lVar8 * 8);
                    (**(code **)(*plVar3 + 0x18))(plVar3, param_2);
                    lVar8 = lVar8 + 1;
                } while (lVar8 < iVar6);
                piVar5 = (int *)param_2[1];
            }
            lVar10 = lVar10 + -1;
            lVar9 = lVar9 + RENDERING_SYSTEM_BLOCK_SIZE_176;
        } while (lVar10 != 0);
    }
    
    /* 处理渲染资源数据 */
    lVar9 = *(int64_t *)(param_1 + 0x24);
    lVar10 = *(int64_t *)(param_1 + 0x22);
    if ((uint64_t)((*param_2 - (int64_t)piVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)piVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        piVar5 = (int *)param_2[1];
    }
    iVar6 = (int)(lVar9 - lVar10 >> 3);
    *piVar5 = iVar6;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar4 = (int32_t *)param_2[1];
    if (0 < (int64_t)iVar6) {
        do {
            plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x22) + lVar11 * 8);
            (**(code **)(*plVar3 + 0x18))(plVar3, param_2);
            lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
        puVar4 = (int32_t *)param_2[1];
    }
    
    /* 处理渲染标志数据 */
    uVar1 = param_1[0x2a];
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar4 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = param_1[0x2b];
    if (RENDERING_SYSTEM_BUFFER_THRESHOLD < (uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2])) {
        *puVar4 = uVar1;
        param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
        return;
    }
    RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar4 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    *(int32_t *)param_2[1] = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统扩展数据处理器
 * 
 * 主要功能：
 * - 处理扩展渲染数据
 * - 管理大型资源数据
 * - 执行高级数据变换
 * - 处理复杂渲染结构
 * 
 * @param param_1 渲染数据句柄
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_ProcessRenderDataEx(int64_t param_1, int64_t *param_2)
{
    int32_t uVar1;
    int64_t lVar2;
    int32_t *puVar3;
    int *piVar4;
    int64_t *unaff_RBX;
    int iVar5;
    int *piVar6;
    int32_t unaff_EDI;
    int64_t lVar7;
    int64_t lVar8;
    int64_t lVar9;
    int64_t lVar10;
    
    /* 处理扩展渲染标志数据 */
    puVar3 = (int32_t *)param_2[1];
    if ((uint64_t)((*param_2 - (int64_t)puVar3) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = unaff_EDI;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar3 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(param_1 + 4);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar3 = (int32_t *)unaff_RBX[1];
    uVar1 = *(int32_t *)(param_1 + 8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    RenderingSystem_ProcessRenderSubData();
    piVar4 = (int *)unaff_RBX[1];
    iVar5 = (int)((*(int64_t *)(param_1 + 0x70) - *(int64_t *)(param_1 + 0x68)) / RENDERING_SYSTEM_BLOCK_SIZE_176);
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        piVar4 = (int *)unaff_RBX[1];
    }
    *piVar4 = iVar5;
    lVar10 = 0;
    piVar4 = (int *)(unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE);
    lVar9 = (int64_t)iVar5;
    unaff_RBX[1] = (int64_t)piVar4;
    lVar8 = lVar10;
    
    /* 批量处理扩展渲染数据 */
    if (0 < iVar5) {
        do {
            piVar6 = (int *)(*(int64_t *)(param_1 + 0x68) + lVar8);
            iVar5 = *piVar6;
            if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
                RenderingSystem_ExpandRenderBuffer();
                piVar4 = (int *)unaff_RBX[1];
            }
            *piVar4 = iVar5;
            unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
            RenderingSystem_ProcessRenderParameters();
            RenderingSystem_ProcessRenderSubData();
            lVar7 = *(int64_t *)(piVar6 + 0x24);
            lVar2 = *(int64_t *)(piVar6 + 0x22);
            piVar4 = (int *)unaff_RBX[1];
            if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
                RenderingSystem_ExpandRenderBuffer();
                piVar4 = (int *)unaff_RBX[1];
            }
            iVar5 = (int)(lVar7 - lVar2 >> 3);
            *piVar4 = iVar5;
            unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
            piVar4 = (int *)unaff_RBX[1];
            lVar7 = lVar10;
            if (0 < (int64_t)iVar5) {
                do {
                    (**(code **)(**(int64_t **)(*(int64_t *)(piVar6 + 0x22) + lVar7 * 8) + 0x18))();
                    lVar7 = lVar7 + 1;
                } while (lVar7 < iVar5);
                piVar4 = (int *)unaff_RBX[1];
            }
            lVar9 = lVar9 + -1;
            lVar8 = lVar8 + RENDERING_SYSTEM_BLOCK_SIZE_176;
        } while (lVar9 != 0);
    }
    
    /* 处理大型渲染资源数据 */
    lVar8 = *(int64_t *)(param_1 + 0x90);
    lVar9 = *(int64_t *)(param_1 + 0x88);
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        piVar4 = (int *)unaff_RBX[1];
    }
    iVar5 = (int)(lVar8 - lVar9 >> 3);
    *piVar4 = iVar5;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar3 = (int32_t *)unaff_RBX[1];
    if (0 < (int64_t)iVar5) {
        do {
            (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x88) + lVar10 * 8) + 0x18))();
            lVar10 = lVar10 + 1;
        } while (lVar10 < iVar5);
        puVar3 = (int32_t *)unaff_RBX[1];
    }
    uVar1 = *(int32_t *)(param_1 + 0xa8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar3) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar3 = (int32_t *)unaff_RBX[1];
    }
    *puVar3 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    uVar1 = *(int32_t *)(param_1 + 0xac);
    if (RENDERING_SYSTEM_BUFFER_THRESHOLD < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
        *(int32_t *)unaff_RBX[1] = uVar1;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        return;
    }
    RenderingSystem_ExpandRenderBuffer();
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统范围数据处理器
 * 
 * 主要功能：
 * - 处理指定范围的渲染数据
 * - 批量处理数据块
 * - 管理资源范围
 * - 优化数据处理性能
 * 
 * @param param_1 渲染数据句柄
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_ProcessRenderDataRange(uint64_t param_1, int *param_2)
{
    int32_t uVar1;
    int64_t lVar2;
    int64_t lVar3;
    int *piVar4;
    int32_t *puVar5;
    int64_t *unaff_RBX;
    int iVar6;
    int *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t unaff_R13;
    uint64_t unaff_R14;
    int64_t unaff_R15;
    
    uVar9 = unaff_R14 & 0xffffffff;
    do {
        piVar7 = (int *)(*(int64_t *)(unaff_R15 + 0x68) + uVar9);
        iVar6 = *piVar7;
        if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
            RenderingSystem_ExpandRenderBuffer();
            param_2 = (int *)unaff_RBX[1];
        }
        *param_2 = iVar6;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        RenderingSystem_ProcessRenderParameters();
        RenderingSystem_ProcessRenderSubData();
        lVar2 = *(int64_t *)(piVar7 + 0x24);
        lVar3 = *(int64_t *)(piVar7 + 0x22);
        piVar4 = (int *)unaff_RBX[1];
        if ((uint64_t)((*unaff_RBX - (int64_t)piVar4) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
            RenderingSystem_ExpandRenderBuffer();
            piVar4 = (int *)unaff_RBX[1];
        }
        iVar6 = (int)(lVar2 - lVar3 >> 3);
        *piVar4 = iVar6;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        param_2 = (int *)unaff_RBX[1];
        uVar8 = unaff_R14;
        if (0 < (int64_t)iVar6) {
            do {
                (**(code **)(**(int64_t **)(*(int64_t *)(piVar7 + 0x22) + uVar8 * 8) + 0x18))();
                uVar8 = uVar8 + 1;
            } while ((int64_t)uVar8 < (int64_t)iVar6);
            param_2 = (int *)unaff_RBX[1];
        }
        uVar9 = uVar9 + RENDERING_SYSTEM_BLOCK_SIZE_176;
        unaff_R13 = unaff_R13 + -1;
    } while (unaff_R13 != 0);
    lVar2 = *(int64_t *)(unaff_R15 + 0x90);
    lVar3 = *(int64_t *)(unaff_R15 + 0x88);
    if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        param_2 = (int *)unaff_RBX[1];
    }
    iVar6 = (int)(lVar2 - lVar3 >> 3);
    *param_2 = iVar6;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar5 = (int32_t *)unaff_RBX[1];
    if (0 < (int64_t)iVar6) {
        do {
            (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
            unaff_R14 = unaff_R14 + 1;
        } while ((int64_t)unaff_R14 < (int64_t)iVar6);
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    uVar1 = *(int32_t *)(unaff_R15 + 0xa8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar5 = (int32_t *)unaff_RBX[1];
    }
    *puVar5 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    uVar1 = *(int32_t *)(unaff_R15 + 0xac);
    if (RENDERING_SYSTEM_BUFFER_THRESHOLD < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
        *(int32_t *)unaff_RBX[1] = uVar1;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        return;
    }
    RenderingSystem_ExpandRenderBuffer();
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统快速数据处理器
 * 
 * 主要功能：
 * - 快速处理渲染数据
 * - 优化数据处理流程
 * - 处理关键渲染参数
 * - 提高处理性能
 * 
 * @param param_1 渲染数据句柄
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_ProcessRenderDataQuick(uint64_t param_1, int *param_2)
{
    int32_t uVar1;
    int64_t lVar2;
    int64_t lVar3;
    int32_t *puVar4;
    int64_t *unaff_RBX;
    int iVar5;
    int64_t unaff_R14;
    int64_t unaff_R15;
    
    lVar2 = *(int64_t *)(unaff_R15 + 0x90);
    lVar3 = *(int64_t *)(unaff_R15 + 0x88);
    if ((uint64_t)((*unaff_RBX - (int64_t)param_2) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        param_2 = (int *)unaff_RBX[1];
    }
    iVar5 = (int)(lVar2 - lVar3 >> 3);
    *param_2 = iVar5;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar4 = (int32_t *)unaff_RBX[1];
    if (0 < (int64_t)iVar5) {
        do {
            (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
            unaff_R14 = unaff_R14 + 1;
        } while (unaff_R14 < iVar5);
        puVar4 = (int32_t *)unaff_RBX[1];
    }
    uVar1 = *(int32_t *)(unaff_R15 + 0xa8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar4) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar4 = (int32_t *)unaff_RBX[1];
    }
    *puVar4 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    uVar1 = *(int32_t *)(unaff_R15 + 0xac);
    if (RENDERING_SYSTEM_BUFFER_THRESHOLD < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
        *(int32_t *)unaff_RBX[1] = uVar1;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        return;
    }
    RenderingSystem_ExpandRenderBuffer();
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统处理器初始化器
 * 
 * 主要功能：
 * - 初始化渲染处理器
 * - 设置初始状态
 * - 准备处理环境
 * - 验证系统配置
 * 
 * @return void
 */
void RenderingSystem_InitializeRenderProcessor(void)
{
    int32_t uVar1;
    int32_t *puVar2;
    int64_t *unaff_RBX;
    int unaff_EDI;
    int64_t unaff_R14;
    int64_t unaff_R15;
    
    RenderingSystem_ExpandRenderBuffer();
    *(int *)unaff_RBX[1] = unaff_EDI;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    puVar2 = (int32_t *)unaff_RBX[1];
    if (0 < (int64_t)unaff_EDI) {
        do {
            (**(code **)(**(int64_t **)(*(int64_t *)(unaff_R15 + 0x88) + unaff_R14 * 8) + 0x18))();
            unaff_R14 = unaff_R14 + 1;
        } while (unaff_R14 < unaff_EDI);
        puVar2 = (int32_t *)unaff_RBX[1];
    }
    uVar1 = *(int32_t *)(unaff_R15 + 0xa8);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        puVar2 = (int32_t *)unaff_RBX[1];
    }
    *puVar2 = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    uVar1 = *(int32_t *)(unaff_R15 + 0xac);
    if (RENDERING_SYSTEM_BUFFER_THRESHOLD < (uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2])) {
        *(int32_t *)unaff_RBX[1] = uVar1;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        return;
    }
    RenderingSystem_ExpandRenderBuffer();
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统处理器清理器
 * 
 * 主要功能：
 * - 清理渲染处理器
 * - 释放系统资源
 * - 重置处理状态
 * - 优化内存使用
 * 
 * @return void
 */
void RenderingSystem_CleanupRenderProcessor(void)
{
    int32_t uVar1;
    int64_t *unaff_RBX;
    int32_t unaff_EDI;
    int64_t unaff_R15;
    
    RenderingSystem_ExpandRenderBuffer();
    *(int32_t *)unaff_RBX[1] = unaff_EDI;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    uVar1 = *(int32_t *)(unaff_R15 + 0xac);
    if ((uint64_t)((*unaff_RBX - unaff_RBX[1]) + unaff_RBX[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer();
        *(int32_t *)unaff_RBX[1] = uVar1;
        unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
        return;
    }
    *(int32_t *)unaff_RBX[1] = uVar1;
    unaff_RBX[1] = unaff_RBX[1] + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统处理器重置器
 * 
 * 主要功能：
 * - 重置渲染处理器
 * - 恢复默认配置
 * - 清理临时数据
 * - 准备重新初始化
 * 
 * @return void
 */
void RenderingSystem_ResetRenderProcessor(void)
{
    int64_t unaff_RBX;
    int32_t unaff_EDI;
    
    RenderingSystem_ExpandRenderBuffer();
    **(int32_t **)(unaff_RBX + 8) = unaff_EDI;
    *(int64_t *)(unaff_RBX + 8) = *(int64_t *)(unaff_RBX + 8) + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统资源加载器
 * 
 * 主要功能：
 * - 加载渲染资源
 * - 处理资源数据
 * - 管理资源内存
 * - 批量加载处理
 * 
 * @param param_1 资源数据指针
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_LoadRenderResource(int32_t *param_1, int64_t param_2)
{
    uint uVar1;
    uint64_t uVar2;
    uint64_t *puVar3;
    uint *puVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    int64_t lVar7;
    uint64_t *puVar8;
    
    /* 加载基础资源数据 */
    *param_1 = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    param_1[1] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    param_1[2] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    
    /* 处理资源数据块 */
    uVar1 = **(uint **)(param_2 + 8);
    puVar4 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar4;
    if (uVar1 != 0) {
        (**(code **)(*(int64_t *)(param_1 + 4) + 0x18))(param_1 + 4, puVar4, uVar1);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
        puVar4 = *(uint **)(param_2 + 8);
    }
    
    /* 处理资源计数 */
    uVar1 = *puVar4;
    uVar6 = (uint64_t)uVar1;
    *(uint **)(param_2 + 8) = puVar4 + 1;
    if (0 < (int)uVar1) {
        RenderingSystem_AllocateRenderMemory(param_1 + 0x1a, (int64_t)(int)uVar1);
        lVar7 = 0;
        do {
            RenderingSystem_LoadRenderResourceData(*(int64_t *)(param_1 + 0x1a) + lVar7, param_2);
            lVar7 = lVar7 + RENDERING_SYSTEM_BLOCK_SIZE_176;
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
    }
    
    /* 处理资源数据范围 */
    *(uint64_t *)(param_1 + 0x24) = *(uint64_t *)(param_1 + 0x22);
    uVar1 = **(uint **)(param_2 + 8);
    puVar4 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar4;
    if (0 < (int)uVar1) {
        uVar6 = (uint64_t)uVar1;
        do {
            uVar2 = RenderingSystem_GetRenderResource(param_2);
            puVar8 = *(uint64_t **)(param_1 + 0x24);
            if (puVar8 < *(uint64_t **)(param_1 + 0x26)) {
                *(uint64_t **)(param_1 + 0x24) = puVar8 + 1;
                *puVar8 = uVar2;
            }
            else {
                puVar5 = *(uint64_t **)(param_1 + 0x22);
                lVar7 = (int64_t)puVar8 - (int64_t)puVar5 >> 3;
                if (lVar7 == 0) {
                    lVar7 = RENDERING_SYSTEM_MEMORY_INITIAL_SIZE;
LAB_180337537:
                    puVar3 = (uint64_t *)
                             FUN_18062b420(system_memory_pool_ptr, lVar7 * 8, *(int8_t *)(param_1 + 0x28));
                    puVar5 = *(uint64_t **)(param_1 + 0x22);
                    puVar8 = *(uint64_t **)(param_1 + 0x24);
                }
                else {
                    lVar7 = lVar7 * RENDERING_SYSTEM_MEMORY_GROWTH_FACTOR;
                    if (lVar7 != 0) goto LAB_180337537;
                    puVar3 = (uint64_t *)0x0;
                }
                if (puVar5 != puVar8) {
                    // WARNING: Subroutine does not return
                    memmove(puVar3, puVar5, (int64_t)puVar8 - (int64_t)puVar5);
                }
                *puVar3 = uVar2;
                if (*(int64_t *)(param_1 + 0x22) != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                }
                *(uint64_t **)(param_1 + 0x22) = puVar3;
                *(uint64_t **)(param_1 + 0x26) = puVar3 + lVar7;
                *(uint64_t **)(param_1 + 0x24) = puVar3 + 1;
            }
            uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        puVar4 = *(uint **)(param_2 + 8);
    }
    
    /* 处理资源标志 */
    param_1[0x2a] = *puVar4;
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    param_1[0x2b] = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统批量资源加载器
 * 
 * 主要功能：
 * - 批量加载渲染资源
 * - 优化加载性能
 * - 管理资源队列
 * - 处理加载状态
 * 
 * @param param_1 资源数量
 * @return void
 */
void RenderingSystem_LoadRenderResourceBatch(uint param_1)
{
    uint64_t uVar1;
    int64_t lVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    uint64_t *puVar5;
    uint64_t uVar6;
    
    uVar6 = (uint64_t)param_1;
    do {
        uVar1 = RenderingSystem_GetRenderResource();
        puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
        if (puVar5 < *(uint64_t **)(unaff_RBX + 0x98)) {
            *(uint64_t **)(unaff_RBX + 0x90) = puVar5 + 1;
            *puVar5 = uVar1;
        }
        else {
            puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
            lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
            if (lVar2 == 0) {
                lVar2 = RENDERING_SYSTEM_MEMORY_INITIAL_SIZE;
LAB_180337537:
                puVar3 = (uint64_t *)
                         FUN_18062b420(system_memory_pool_ptr, lVar2 * 8, *(int8_t *)(unaff_RBX + 0xa0));
                puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
                puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
            }
            else {
                lVar2 = lVar2 * RENDERING_SYSTEM_MEMORY_GROWTH_FACTOR;
                if (lVar2 != 0) goto LAB_180337537;
                puVar3 = (uint64_t *)0x0;
            }
            if (puVar4 != puVar5) {
                // WARNING: Subroutine does not return
                memmove(puVar3, puVar4, (int64_t)puVar5 - (int64_t)puVar4);
            }
            *puVar3 = uVar1;
            if (*(int64_t *)(unaff_RBX + 0x88) != 0) {
                // WARNING: Subroutine does not return
                FUN_18064e900();
            }
            *(uint64_t **)(unaff_RBX + 0x88) = puVar3;
            *(uint64_t **)(unaff_RBX + 0x98) = puVar3 + lVar2;
            *(uint64_t **)(unaff_RBX + 0x90) = puVar3 + 1;
        }
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
            *(int32_t *)(unaff_RBX + 0xa8) = **(int32_t **)(unaff_RSI + 8);
            *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + RENDERING_SYSTEM_INT_SIZE;
            *(int32_t *)(unaff_RBX + 0xac) = **(int32_t **)(unaff_RSI + 8);
            *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + RENDERING_SYSTEM_INT_SIZE;
            return;
        }
    } while( true );
}

/**
 * 渲染系统资源标志加载器
 * 
 * 主要功能：
 * - 加载资源标志数据
 * - 处理资源状态
 * - 更新资源信息
 * - 管理资源属性
 * 
 * @return void
 */
void RenderingSystem_LoadRenderResourceFlags(void)
{
    int32_t *in_RAX;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    
    *(int32_t *)(unaff_RBX + 0xa8) = *in_RAX;
    *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + RENDERING_SYSTEM_INT_SIZE;
    *(int32_t *)(unaff_RBX + 0xac) = **(int32_t **)(unaff_RSI + 8);
    *(int64_t *)(unaff_RSI + 8) = *(int64_t *)(unaff_RSI + 8) + RENDERING_SYSTEM_INT_SIZE;
    return;
}

/**
 * 渲染系统资源数据加载器
 * 
 * 主要功能：
 * - 加载资源数据
 * - 处理数据结构
 * - 管理数据内存
 * - 优化数据访问
 * 
 * @param param_1 数据指针
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_LoadRenderResourceData(int32_t *param_1, int64_t param_2)
{
    uint uVar1;
    uint64_t uVar2;
    int64_t lVar3;
    uint64_t *puVar4;
    uint *puVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    
    /* 加载数据块 */
    *param_1 = **(int32_t **)(param_2 + 8);
    lVar3 = *(int64_t *)(param_2 + 8);
    param_1[4] = *(int32_t *)(lVar3 + 4);
    param_1[5] = *(int32_t *)(lVar3 + 8);
    param_1[6] = *(int32_t *)(lVar3 + 0xc);
    param_1[7] = *(int32_t *)(lVar3 + 0x10);
    param_1[8] = *(int32_t *)(lVar3 + 0x14);
    param_1[9] = *(int32_t *)(lVar3 + 0x18);
    param_1[10] = *(int32_t *)(lVar3 + 0x1c);
    param_1[0xb] = *(int32_t *)(lVar3 + 0x20);
    *(uint **)(param_2 + 8) = (uint *)(lVar3 + 0x24);
    uVar1 = *(uint *)(lVar3 + 0x24);
    puVar5 = (uint *)(lVar3 + 0x28);
    *(uint **)(param_2 + 8) = puVar5;
    if (uVar1 != 0) {
        (**(code **)(*(int64_t *)(param_1 + 0xc) + 0x18))(param_1 + 0xc, puVar5, uVar1);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
        puVar5 = *(uint **)(param_2 + 8);
    }
    uVar1 = *puVar5;
    *(uint **)(param_2 + 8) = puVar5 + 1;
    if (0 < (int)uVar1) {
        uVar8 = (uint64_t)uVar1;
        do {
            uVar2 = RenderingSystem_GetRenderResource(param_2);
            puVar7 = *(uint64_t **)(param_1 + 0x24);
            if (puVar7 < *(uint64_t **)(param_1 + 0x26)) {
                *(uint64_t **)(param_1 + 0x24) = puVar7 + 1;
                *puVar7 = uVar2;
            }
            else {
                puVar6 = *(uint64_t **)(param_1 + 0x22);
                lVar3 = (int64_t)puVar7 - (int64_t)puVar6 >> 3;
                if (lVar3 == 0) {
                    lVar3 = RENDERING_SYSTEM_MEMORY_INITIAL_SIZE;
LAB_180337706:
                    puVar4 = (uint64_t *)
                             FUN_18062b420(system_memory_pool_ptr, lVar3 * 8, *(int8_t *)(param_1 + 0x28));
                    puVar6 = *(uint64_t **)(param_1 + 0x22);
                    puVar7 = *(uint64_t **)(param_1 + 0x24);
                }
                else {
                    lVar3 = lVar3 * RENDERING_SYSTEM_MEMORY_GROWTH_FACTOR;
                    if (lVar3 != 0) goto LAB_180337706;
                    puVar4 = (uint64_t *)0x0;
                }
                if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
                    memmove(puVar4, puVar6, (int64_t)puVar7 - (int64_t)puVar6);
                }
                *puVar4 = uVar2;
                if (*(int64_t *)(param_1 + 0x22) != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                }
                *(uint64_t **)(param_1 + 0x22) = puVar4;
                *(uint64_t **)(param_1 + 0x26) = puVar4 + lVar3;
                *(uint64_t **)(param_1 + 0x24) = puVar4 + 1;
            }
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    return;
}

/**
 * 渲染系统批量资源数据加载器
 * 
 * 主要功能：
 * - 批量加载资源数据
 * - 优化加载性能
 * - 管理数据队列
 * - 处理加载状态
 * 
 * @param param_1 数据数量
 * @return void
 */
void RenderingSystem_LoadRenderResourceDataBatch(uint param_1)
{
    uint64_t uVar1;
    int64_t lVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    int64_t unaff_RBX;
    uint64_t *puVar5;
    uint64_t uVar6;
    
    uVar6 = (uint64_t)param_1;
    do {
        uVar1 = RenderingSystem_GetRenderResource();
        puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
        if (puVar5 < *(uint64_t **)(unaff_RBX + 0x98)) {
            *(uint64_t **)(unaff_RBX + 0x90) = puVar5 + 1;
            *puVar5 = uVar1;
        }
        else {
            puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
            lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
            if (lVar2 == 0) {
                lVar2 = RENDERING_SYSTEM_MEMORY_INITIAL_SIZE;
LAB_180337706:
                puVar3 = (uint64_t *)
                         FUN_18062b420(system_memory_pool_ptr, lVar2 * 8, *(int8_t *)(unaff_RBX + 0xa0));
                puVar4 = *(uint64_t **)(unaff_RBX + 0x88);
                puVar5 = *(uint64_t **)(unaff_RBX + 0x90);
            }
            else {
                lVar2 = lVar2 * RENDERING_SYSTEM_MEMORY_GROWTH_FACTOR;
                if (lVar2 != 0) goto LAB_180337706;
                puVar3 = (uint64_t *)0x0;
            }
            if (puVar4 != puVar5) {
                // WARNING: Subroutine does not return
                memmove(puVar3, puVar4, (int64_t)puVar5 - (int64_t)puVar4);
            }
            *puVar3 = uVar1;
            if (*(int64_t *)(unaff_RBX + 0x88) != 0) {
                // WARNING: Subroutine does not return
                FUN_18064e900();
            }
            *(uint64_t **)(unaff_RBX + 0x88) = puVar3;
            *(uint64_t **)(unaff_RBX + 0x98) = puVar3 + lVar2;
            *(uint64_t **)(unaff_RBX + 0x90) = puVar3 + 1;
        }
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
            return;
        }
    } while( true );
}

/**
 * 渲染系统空操作器
 * 
 * 主要功能：
 * - 执行空操作
 * - 保持系统状态
 * - 用于流程控制
 * - 占位操作
 * 
 * @return void
 */
void RenderingSystem_EmptyRenderOperation(void)
{
    return;
}

/**
 * 渲染系统资源保存器
 * 
 * 主要功能：
 * - 保存渲染资源
 * - 序列化资源数据
 * - 管理保存状态
 * - 处理保存错误
 * 
 * @param param_1 资源句柄
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_SaveRenderResource(int64_t param_1, int64_t *param_2)
{
    int32_t uVar1;
    int32_t *puVar2;
    int *piVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t lVar6;
    
    /* 保存资源基础数据 */
    uVar1 = *(int32_t *)(param_1 + 0x8c);
    puVar2 = (int32_t *)param_2[1];
    if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar2 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar2 = (int32_t *)param_2[1];
    }
    *puVar2 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 保存资源扩展数据 */
    puVar2 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 8);
    if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar2 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar2 = (int32_t *)param_2[1];
    }
    *puVar2 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 保存资源高级数据 */
    puVar2 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0xc);
    if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar2 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar2 = (int32_t *)param_2[1];
    }
    *puVar2 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 保存资源属性数据 */
    puVar2 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x10);
    if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar2 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar2 = (int32_t *)param_2[1];
    }
    *puVar2 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 保存资源参数数据 */
    puVar2 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x14);
    if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)puVar2 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        puVar2 = (int32_t *)param_2[1];
    }
    *puVar2 = uVar1;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 处理资源状态数据 */
    RenderingSystem_InitializeRenderState(param_2, param_1 + 0x18);
    RenderingSystem_SaveRenderParameters(param_1 + 0x58, param_2);
    
    /* 保存资源计数 */
    piVar3 = (int *)param_2[1];
    uVar5 = (*(int64_t *)(param_1 + 0x98) - *(int64_t *)(param_1 + 0x90)) / RENDERING_SYSTEM_BLOCK_SIZE_416;
    if ((uint64_t)((param_2[2] - (int64_t)piVar3) + *param_2) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
        RenderingSystem_ExpandRenderBuffer(param_2, (int64_t)piVar3 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
        piVar3 = (int *)param_2[1];
    }
    iVar4 = (int)uVar5;
    *piVar3 = iVar4;
    param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
    
    /* 批量保存资源数据 */
    if (0 < iVar4) {
        lVar6 = 0;
        uVar5 = uVar5 & 0xffffffff;
        do {
            RenderingSystem_ProcessRenderSubResources(*(int64_t *)(param_1 + 0x90) + lVar6, param_2);
            lVar6 = lVar6 + RENDERING_SYSTEM_BLOCK_SIZE_416;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    return;
}

/**
 * 渲染系统扩展资源保存器
 * 
 * 主要功能：
 * - 保存扩展资源数据
 * - 处理复杂资源结构
 * - 管理保存流程
 * - 优化保存性能
 * 
 * @param param_1 资源句柄
 * @param param_2 序列化缓冲区指针
 * @param param_3 保存标志
 * @return void
 */
void RenderingSystem_SaveRenderResourceEx(int64_t param_1, int64_t param_2, char param_3)
{
    int32_t uVar1;
    uint uVar2;
    int64_t lVar3;
    uint64_t uVar4;
    
    if (param_3 != '\0') {
        uVar1 = **(int32_t **)(param_2 + 8);
        *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
        *(int32_t *)(param_1 + 0x8c) = uVar1;
    }
    
    /* 保存基础资源数据 */
    *(int32_t *)(param_1 + 8) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    *(int32_t *)(param_1 + 0xc) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    *(int32_t *)(param_1 + 0x10) = **(int32_t **)(param_2 + 8);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + RENDERING_SYSTEM_INT_SIZE;
    *(int32_t *)(param_1 + 0x14) = **(int32_t **)(param_2 + 8);
    lVar3 = *(int64_t *)(param_2 + 8);
    
    /* 保存资源属性数据 */
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(lVar3 + 4);
    *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(lVar3 + 8);
    *(int32_t *)(param_1 + 0x20) = *(int32_t *)(lVar3 + 0xc);
    *(int32_t *)(param_1 + 0x24) = *(int32_t *)(lVar3 + 0x10);
    *(int32_t *)(param_1 + 0x28) = *(int32_t *)(lVar3 + 0x14);
    *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(lVar3 + 0x18);
    *(int32_t *)(param_1 + 0x30) = *(int32_t *)(lVar3 + 0x1c);
    *(int32_t *)(param_1 + 0x34) = *(int32_t *)(lVar3 + 0x20);
    *(int32_t *)(param_1 + 0x38) = *(int32_t *)(lVar3 + 0x24);
    *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(lVar3 + 0x28);
    *(int32_t *)(param_1 + 0x40) = *(int32_t *)(lVar3 + 0x2c);
    *(int32_t *)(param_1 + 0x44) = *(int32_t *)(lVar3 + 0x30);
    *(int32_t *)(param_1 + 0x48) = *(int32_t *)(lVar3 + 0x34);
    *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(lVar3 + 0x38);
    *(int32_t *)(param_1 + 0x50) = *(int32_t *)(lVar3 + 0x3c);
    *(int32_t *)(param_1 + 0x54) = *(int32_t *)(lVar3 + 0x40);
    *(int32_t *)(param_1 + 0x58) = *(int32_t *)(lVar3 + 0x44);
    *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(lVar3 + 0x48);
    *(int32_t *)(param_1 + 0x60) = *(int32_t *)(lVar3 + 0x4c);
    *(int32_t *)(param_1 + 100) = *(int32_t *)(lVar3 + 0x50);
    *(int32_t *)(param_1 + 0x68) = *(int32_t *)(lVar3 + 0x54);
    *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(lVar3 + 0x58);
    *(int32_t *)(param_1 + 0x70) = *(int32_t *)(lVar3 + 0x5c);
    *(int32_t *)(param_1 + 0x74) = *(int32_t *)(lVar3 + 0x60);
    *(int32_t *)(param_1 + 0x78) = *(int32_t *)(lVar3 + 100);
    *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(lVar3 + 0x68);
    *(int32_t *)(param_1 + 0x80) = *(int32_t *)(lVar3 + 0x6c);
    *(int32_t *)(param_1 + 0x84) = *(int32_t *)(lVar3 + 0x70);
    *(int32_t *)(param_1 + 0x88) = *(int32_t *)(lVar3 + 0x74);
    *(uint **)(param_2 + 8) = (uint *)(lVar3 + 0x78);
    uVar2 = *(uint *)(lVar3 + 0x78);
    uVar4 = (uint64_t)uVar2;
    *(int64_t *)(param_2 + 8) = lVar3 + 0x7c;
    
    /* 批量保存资源数据 */
    if (0 < (int)uVar2) {
        FUN_180284580(param_1 + 0x90, (int64_t)(int)uVar2);
        lVar3 = 0;
        do {
            RenderingSystem_SaveRenderSubResources(*(int64_t *)(param_1 + 0x90) + lVar3, param_2);
            lVar3 = lVar3 + RENDERING_SYSTEM_BLOCK_SIZE_416;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return;
}

/**
 * 渲染系统资源清理器
 * 
 * 主要功能：
 * - 清理渲染资源
 * - 释放系统内存
 * - 重置资源状态
 * - 优化系统性能
 * 
 * @return void
 */
void RenderingSystem_CleanupRenderResource(void)
{
    int64_t lVar1;
    int64_t unaff_RDI;
    int64_t unaff_R14;
    
    FUN_180284580();
    lVar1 = 0;
    do {
        RenderingSystem_SaveRenderSubResources(*(int64_t *)(unaff_R14 + 0x90) + lVar1);
        lVar1 = lVar1 + RENDERING_SYSTEM_BLOCK_SIZE_416;
        unaff_RDI = unaff_RDI + -1;
    } while (unaff_RDI != 0);
    return;
}

/*=============================================================================
 * 模块结束 - 03_rendering_part114.c
 *=============================================================================*/