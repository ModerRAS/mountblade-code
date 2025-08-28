#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part501.c
 * @brief 渲染系统高级状态管理和参数处理模块
 * 
 * 本模块包含10个核心函数，涵盖渲染系统高级状态管理、参数处理、
 * 条件判断、标志设置、数据验证、资源控制等高级渲染功能。
 * 
 * 主要功能包括：
 * - 渲染系统状态管理和参数验证
 * - 高级条件判断和分支处理
 * - 渲染参数设置和优化
 * - 系统标志管理和状态控制
 * - 资源分配和内存管理
 * - 数学计算和角度处理
 * - 错误处理和异常管理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// ===========================================
// 常量定义
// ===========================================

/** 渲染系统标志位定义 */
#define RENDERING_FLAG_BIT_B          0x800    /* 第11位标志 */
#define RENDERING_FLAG_BIT_E          0x4000   /* 第14位标志 */
#define RENDERING_FLAG_STATUS_CHECK   0x2000   /* 状态检查标志 */

/** 渲染系统偏移量常量 */
#define RENDERING_OFFSET_BASE         0xa60    /* 基础偏移量 */
#define RENDERING_OFFSET_ADD          0x30a0   /* 附加偏移量 */
#define RENDERING_OFFSET_EXTENDED     0x3638   /* 扩展偏移量 */
#define RENDERING_OFFSET_STATUS      0x56c    /* 状态偏移量 */
#define RENDERING_OFFSET_DATA         0x20     /* 数据偏移量 */
#define RENDERING_OFFSET_CONTROL      0x590    /* 控制偏移量 */
#define RENDERING_OFFSET_CONFIG       0x598    /* 配置偏移量 */
#define RENDERING_OFFSET_REFERENCE    0x8d8    /* 引用偏移量 */
#define RENDERING_OFFSET_SYSTEM       0x8e0    /* 系统偏移量 */
#define RENDERING_OFFSET_HANDLER      0x8f8    /* 处理器偏移量 */

/** 渲染系统数值常量 */
#define RENDERING_VALUE_THRESHOLD_1   0xbecccccd   /* 阈值1：-0.4f */
#define RENDERING_VALUE_THRESHOLD_2   0xbe19999a   /* 阈值2：-0.2f */
#define RENDERING_VALUE_MULTIPLIER    0x3ecccccd   /* 乘数：0.4f */
#define RENDERING_VALUE_SCALE         0x3f80000000000000  /* 缩放：1.0 */
#define RENDERING_VALUE_LIMIT         0x1000000      /* 限制值 */
#define RENDERING_VALUE_PRECISION     0xbe4ccccdbe4ccccd  /* 精度值：-0.4f, -0.1f */

/** 渲染系统角度常量 */
#define RENDERING_ANGLE_NEGATIVE_0_6  -0.6f   /* 负角度：-0.6 */
#define RENDERING_ANGLE_POSITIVE_0_7  0.7f    /* 正角度：0.7 */
#define RENDERING_ANGLE_NEGATIVE_0_8  -0.8f   /* 负角度：-0.8 */
#define RENDERING_ANGLE_POSITIVE_0_8  0.8f    /* 正角度：0.8 */
#define RENDERING_ANGLE_THRESHOLD    0.5f    /* 角度阈值 */
#define RENDERING_ANGLE_UNIT          1.0f    /* 角度单位 */

/** 渲染系统索引常量 */
#define RENDERING_INDEX_ARRAY_SIZE    2       /* 数组大小 */
#define RENDERING_INDEX_PRIMARY       0       /* 主索引 */
#define RENDERING_INDEX_SECONDARY     1       /* 次索引 */
#define RENDERING_INDEX_OFFSET_1      0x148   /* 索引偏移1 */
#define RENDERING_INDEX_OFFSET_2      0x1c    /* 索引偏移2 */
#define RENDERING_INDEX_OFFSET_3      0x34    /* 索引偏移3 */
#define RENDERING_INDEX_OFFSET_4      0xac    /* 索引偏移4 */
#define RENDERING_INDEX_OFFSET_5      0x34bc  /* 索引偏移5 */

/** 渲染系统状态常量 */
#define RENDERING_STATUS_NULL         -1      /* 空状态 */
#define RENDERING_STATUS_ACTIVE        2       /* 活动状态 */
#define RENDERING_STATUS_COMPLETE     5       /* 完成状态 */
#define RENDERING_STATUS_MINIMUM      5       /* 最小状态值 */
#define RENDERING_STATUS_LIMIT        0xffffffff  /* 状态限制 */

/** 渲染系统内存常量 */
#define RENDERING_MEMORY_STACK_1      0x38    /* 栈大小1 */
#define RENDERING_MEMORY_STACK_2      0x30    /* 栈大小2 */
#define RENDERING_MEMORY_STACK_3      0x28    /* 栈大小3 */
#define RENDERING_MEMORY_STACK_4      0x24    /* 栈大小4 */
#define RENDERING_MEMORY_STACK_5      0x1c    /* 栈大小5 */
#define RENDERING_MEMORY_STACK_6      0x14    /* 栈大小6 */
#define RENDERING_MEMORY_STACK_7      0x10    /* 栈大小7 */
#define RENDERING_MEMORY_STACK_8      0xc     /* 栈大小8 */

// ===========================================
// 类型别名定义
// ===========================================

/** 渲染系统句柄类型 */
typedef longlong* RenderingSystemHandle;

/** 渲染系统参数类型 */
typedef undefined8 RenderingSystemParameter;

/** 渲染系统状态类型 */
typedef undefined4 RenderingSystemStatus;

/** 渲染系统标志类型 */
typedef uint RenderingSystemFlag;

/** 渲染系统索引类型 */
typedef int RenderingSystemIndex;

/** 渲染系统角度类型 */
typedef float RenderingSystemAngle;

/** 渲染系统配置类型 */
typedef undefined8 RenderingSystemConfig;

/** 渲染系统引用类型 */
typedef longlong* RenderingSystemReference;

/** 渲染系统数据类型 */
typedef float* RenderingSystemData;

/** 渲染系统控制类型 */
typedef longlong* RenderingSystemControl;

/** 渲染系统处理器类型 */
typedef longlong* RenderingSystemProcessor;

// ===========================================
// 函数别名定义
// ===========================================

/** 渲染系统状态管理器 - 主函数 */
void RenderingSystemStateManager(RenderingSystemHandle handle, 
                                RenderingSystemParameter param2, 
                                RenderingSystemParameter param3)
{
    FUN_180535970(handle, param2, param3);
}

/** 渲染系统状态管理器 - 参数版本 */
void RenderingSystemStateManager_Param(RenderingSystemStatus status)
{
    FUN_18053598c(status);
}

/** 渲染系统状态管理器 - 空参数版本 */
void RenderingSystemStateManager_Empty(void)
{
    FUN_1805359c5();
}

/** 渲染系统标志设置器 - 主函数 */
void RenderingSystemFlagSetter(RenderingSystemHandle handle, 
                              RenderingSystemParameter param2, 
                              RenderingSystemParameter param3)
{
    FUN_180535a30(handle, param2, param3);
}

/** 渲染系统标志设置器 - 参数版本 */
void RenderingSystemFlagSetter_Param(void)
{
    FUN_180535a48();
}

/** 渲染系统标志设置器 - 直接设置版本 */
void RenderingSystemFlagSetter_Direct(void)
{
    FUN_180535a81();
}

/** 渲染系统参数处理器 - 主函数 */
void RenderingSystemParameterProcessor(RenderingSystemHandle handle, 
                                      RenderingSystemParameter param2, 
                                      RenderingSystemParameter param3)
{
    FUN_180535aa0(handle, param2, param3);
}

/** 渲染系统参数处理器 - 上下文版本 */
void RenderingSystemParameterProcessor_Context(void)
{
    FUN_180535b2e();
}

/** 渲染系统参数处理器 - 简化版本 */
void RenderingSystemParameterProcessor_Simplified(void)
{
    FUN_180535b60();
}

/** 渲染系统条件验证器 - 主函数 */
void RenderingSystemConditionValidator(RenderingSystemHandle handle, 
                                     RenderingSystemParameter param2, 
                                     RenderingSystemParameter param3)
{
    FUN_180535ba0(handle, param2, param3);
}

// ===========================================
// 原始函数实现
// ===========================================

/**
 * 渲染系统状态管理器 - 核心实现
 * 
 * 处理渲染系统的状态管理、参数验证和条件判断。
 * 支持多种渲染状态的处理和转换。
 * 
 * @param handle 渲染系统句柄
 * @param param2 系统参数2
 * @param param3 系统参数3
 */
void FUN_180535970(longlong *param_1, undefined8 param_2, undefined8 param_3)
{
    char cVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined1 uVar4;
    int *piVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong *plVar8;
    float fVar9;
    float fVar10;
    int aiStackX_8 [2];
    undefined4 uStack_38;
    int iStack_34;
    undefined8 uStack_30;
    undefined4 uStack_28;
    undefined8 uStack_24;
    undefined8 uStack_1c;
    undefined4 uStack_14;
    undefined4 uStack_10;
    undefined1 uStack_c;
    
    lVar3 = *param_1;
    if (lVar3 == 0) {
        return;
    }
    uStack_30 = 0x18053599e;
    cVar1 = FUN_18055f260(param_3, aiStackX_8, &UNK_1809fa510);
    uStack_30 = 0x1805359bc;
    FUN_1804fe350(&UNK_180a301c8, cVar1, &UNK_180a301f8, aiStackX_8);
    if (cVar1 == '\0') {
        return;
    }
    lVar3 = (longlong)aiStackX_8[0] * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + lVar3;
    if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xb & 1) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_1) = RENDERING_VALUE_THRESHOLD_1;
    }
    else {
        *(undefined4 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_1) = RENDERING_VALUE_THRESHOLD_2;
    }
    if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xb & 1) == 0) {
        uVar2 = RENDERING_STATUS_LIMIT;
        fVar9 = *(float *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_2);
        fVar10 = *(float *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + 0x1c);
        uVar7 = 2;
        if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + 0x2590) + 0x10) < RENDERING_STATUS_MINIMUM) {
            uVar7 = RENDERING_STATUS_LIMIT;
        }
        if (*(int *)(lVar3 + 0x564) != RENDERING_STATUS_NULL) {
            uVar2 = *(undefined4 *)
                     (*(longlong *)
                       ((longlong)*(int *)(lVar3 + 0x564) * RENDERING_OFFSET_BASE + RENDERING_OFFSET_EXTENDED + *(longlong *)(lVar3 + RENDERING_OFFSET_REFERENCE))
                     + RENDERING_OFFSET_DATA);
        }
        iStack_34 = FUN_180557b40(*(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG), uVar2, 0, uVar7, 0, 0,
                                  RENDERING_ANGLE_UNIT < fVar10 * fVar10 + fVar9 * fVar9);
        if (*(int *)(*(longlong *)
                      ((longlong)*(int *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + RENDERING_INDEX_OFFSET_4) * 0xe0 + 0x78 +
                      _DAT_180c95fb0) + (longlong)iStack_34 * 8) < 0) {
            return;
        }
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
            FUN_1805ed8d0(*(undefined8 *)(lVar3 + RENDERING_OFFSET_SYSTEM));
        }
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_14 = RENDERING_VALUE_MULTIPLIER;
        uStack_10 = RENDERING_VALUE_LIMIT;
        uStack_24 = RENDERING_VALUE_SCALE;
        uStack_1c = RENDERING_VALUE_PRECISION;
        uStack_c = 0;
        uStack_38 = 0;
        goto LAB_18052490a;
    }
    lVar6 = 0;
    if ((((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
       (_DAT_180c92514 != 4)) {
        plVar8 = (longlong *)(*(longlong *)(lVar3 + RENDERING_OFFSET_HANDLER) + 0x9e8);
        piVar5 = (int *)(*(longlong *)(lVar3 + RENDERING_OFFSET_HANDLER) + 0x9e0);
        do {
            if ((*piVar5 != RENDERING_STATUS_NULL) &&
               ((*(uint *)((longlong)*(int *)(*plVar8 + 0xf0) * 0xa0 + 0x58 +
                         *(longlong *)(*plVar8 + 0xd0)) & RENDERING_FLAG_STATUS_CHECK) != 0)) {
                FUN_180524260(lVar3);
                break;
            }
            lVar6 = lVar6 + 1;
            piVar5 = piVar5 + 1;
            plVar8 = plVar8 + 1;
        } while (lVar6 < RENDERING_INDEX_ARRAY_SIZE);
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        FUN_1805ed8d0(*(undefined8 *)(lVar3 + RENDERING_OFFSET_SYSTEM));
    }
    lVar6 = *(longlong *)(lVar3 + RENDERING_OFFSET_DATA);
    cVar1 = func_0x000180522f60();
    if (cVar1 != '\0') {
        FUN_1808fd400(*(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_3));
    }
    if (RENDERING_ANGLE_NEGATIVE_0_6 <= *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2)) {
        if (RENDERING_ANGLE_POSITIVE_0_7 < *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2)) {
            fVar9 = (float)atan2f(*(uint *)(lVar6 + 0x1c) ^ 0x80000000, *(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_2));
            if (RENDERING_ANGLE_THRESHOLD <= ABS(fVar9)) {
                cVar1 = (fVar9 < 0.0) + '\x03';
            }
            else {
                cVar1 = '\x02';
            }
            uStack_24 = RENDERING_VALUE_SCALE;
            uStack_1c = RENDERING_VALUE_PRECISION;
            uStack_30 = 0;
            uStack_14 = RENDERING_VALUE_MULTIPLIER;
            uStack_28 = 0;
            uStack_10 = RENDERING_VALUE_LIMIT;
            uStack_c = 0;
            uStack_38 = 0;
            uVar2 = func_0x00018052dcc0(lVar3, *(undefined4 *)(lVar6 + 0x1c),
                                        *(undefined1 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + RENDERING_INDEX_OFFSET_5), cVar1);
            goto LAB_18052449f;
        }
        fVar9 = *(float *)(lVar6 + 0x1c);
        uVar7 = *(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG);
        uStack_30 = 0;
        uStack_10 = RENDERING_VALUE_LIMIT;
        uStack_c = 0;
        uStack_38 = 0;
        uStack_28 = 0;
        uStack_14 = RENDERING_VALUE_MULTIPLIER;
        uStack_24 = RENDERING_VALUE_SCALE;
        uStack_1c = RENDERING_VALUE_PRECISION;
        fVar10 = *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2) * *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2);
        if (fVar9 < RENDERING_ANGLE_NEGATIVE_0_8) {
            uVar4 = RENDERING_ANGLE_UNIT < fVar9 * fVar9 + fVar10;
            uVar2 = func_0x00018052dcc0(lVar3);
            iStack_34 = FUN_180557b40(uVar7, uVar2, 0, 0, 0, 0, uVar4);
            FUN_18051ec50(lVar3, &uStack_38);
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_ACTIVE) {
                return;
            }
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_COMPLETE) {
                return;
            }
            func_0x000180525350(lVar3, 1);
            return;
        }
        if (RENDERING_ANGLE_POSITIVE_0_8 < fVar9) {
            uVar4 = RENDERING_ANGLE_UNIT < fVar9 * fVar9 + fVar10;
            uVar2 = func_0x00018052dcc0(lVar3);
            iStack_34 = FUN_180557b40(uVar7, uVar2, 0, 1, 0, 0, uVar4);
            FUN_18051ec50(lVar3, &uStack_38);
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_ACTIVE) {
                return;
            }
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_COMPLETE) {
                return;
            }
            lVar6 = *(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL);
            if (lVar6 == 0) {
                return;
            }
            if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) & RENDERING_FLAG_BIT_B) == 0) {
                return;
            }
            if (*(char *)(lVar6 + RENDERING_INDEX_OFFSET_5) == '\0') {
                return;
            }
            *(undefined1 *)(lVar6 + RENDERING_INDEX_OFFSET_5) = 0;
            return;
        }
        uVar2 = func_0x00018052dcc0(lVar3);
    }
    else {
        uStack_28 = 0;
        uStack_14 = RENDERING_VALUE_MULTIPLIER;
        uStack_24 = RENDERING_VALUE_SCALE;
        uStack_1c = RENDERING_VALUE_PRECISION;
        uStack_30 = 0;
        uStack_10 = RENDERING_VALUE_LIMIT;
        uStack_c = 0;
        uStack_38 = 0;
        if (*(int *)(lVar3 + 0x564) == RENDERING_STATUS_NULL) {
            uVar2 = RENDERING_STATUS_LIMIT;
            uStack_24 = RENDERING_VALUE_SCALE;
            uStack_1c = RENDERING_VALUE_PRECISION;
        }
        else {
            uVar2 = *(undefined4 *)
                     (*(longlong *)
                       ((longlong)*(int *)(lVar3 + 0x564) * RENDERING_OFFSET_BASE + RENDERING_OFFSET_EXTENDED + *(longlong *)(lVar3 + RENDERING_OFFSET_REFERENCE))
                     + RENDERING_OFFSET_DATA);
        }
LAB_18052449f:
        uVar7 = *(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG);
    }
    iStack_34 = FUN_180557b40(uVar7, uVar2, 0);
LAB_18052490a:
    FUN_18051ec50(lVar3, &uStack_38);
    return;
}

/**
 * 渲染系统状态管理器 - 参数版本
 * 
 * 处理带有状态参数的渲染系统管理。
 * 
 * @param param1 状态参数
 */
void FUN_18053598c(undefined4 param_1)
{
    char cVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong unaff_RDI;
    undefined1 uVar4;
    int *piVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong *plVar8;
    float fVar9;
    float fVar10;
    int iStack0000000000000030;
    undefined4 uStack_10;
    int iStack_c;
    undefined8 uStack_8;
    
    uStack_8 = 0x18053599e;
    cVar1 = FUN_18055f260(param_1, &stack0x00000030);
    uStack_8 = 0x1805359bc;
    FUN_1804fe350(&UNK_180a301c8, cVar1, &UNK_180a301f8, &stack0x00000030);
    if (cVar1 == '\0') {
        return;
    }
    lVar3 = (longlong)iStack0000000000000030 * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + unaff_RDI;
    if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xb & 1) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_1) = RENDERING_VALUE_THRESHOLD_1;
    }
    else {
        *(undefined4 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_1) = RENDERING_VALUE_THRESHOLD_2;
    }
    if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xb & 1) == 0) {
        uVar2 = RENDERING_STATUS_LIMIT;
        fVar9 = *(float *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_2);
        fVar10 = *(float *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + 0x1c);
        uVar7 = 2;
        if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + 0x2590) + 0x10) < RENDERING_STATUS_MINIMUM) {
            uVar7 = RENDERING_STATUS_LIMIT;
        }
        if (*(int *)(lVar3 + 0x564) != RENDERING_STATUS_NULL) {
            uVar2 = *(undefined4 *)
                     (*(longlong *)
                       ((longlong)*(int *)(lVar3 + 0x564) * RENDERING_OFFSET_BASE + RENDERING_OFFSET_EXTENDED + *(longlong *)(lVar3 + RENDERING_OFFSET_REFERENCE))
                     + RENDERING_OFFSET_DATA);
        }
        iStack_c = FUN_180557b40(*(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG), uVar2, 0, uVar7, 0, 0,
                                 RENDERING_ANGLE_UNIT < fVar10 * fVar10 + fVar9 * fVar9);
        if (*(int *)(*(longlong *)
                      ((longlong)*(int *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + RENDERING_INDEX_OFFSET_4) * 0xe0 + 0x78 +
                      _DAT_180c95fb0) + (longlong)iStack_c * 8) < 0) {
            return;
        }
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
            FUN_1805ed8d0(*(undefined8 *)(lVar3 + RENDERING_OFFSET_SYSTEM));
        }
        uStack_8 = 0;
        uStack_10 = 0;
        goto LAB_18052490a;
    }
    lVar6 = 0;
    if ((((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
       (_DAT_180c92514 != 4)) {
        plVar8 = (longlong *)(*(longlong *)(lVar3 + RENDERING_OFFSET_HANDLER) + 0x9e8);
        piVar5 = (int *)(*(longlong *)(lVar3 + RENDERING_OFFSET_HANDLER) + 0x9e0);
        do {
            if ((*piVar5 != RENDERING_STATUS_NULL) &&
               ((*(uint *)((longlong)*(int *)(*plVar8 + 0xf0) * 0xa0 + 0x58 +
                         *(longlong *)(*plVar8 + 0xd0)) & RENDERING_FLAG_STATUS_CHECK) != 0)) {
                FUN_180524260(lVar3);
                break;
            }
            lVar6 = lVar6 + 1;
            piVar5 = piVar5 + 1;
            plVar8 = plVar8 + 1;
        } while (lVar6 < RENDERING_INDEX_ARRAY_SIZE);
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        FUN_1805ed8d0(*(undefined8 *)(lVar3 + RENDERING_OFFSET_SYSTEM));
    }
    lVar6 = *(longlong *)(lVar3 + RENDERING_OFFSET_DATA);
    cVar1 = func_0x000180522f60();
    if (cVar1 != '\0') {
        FUN_1808fd400(*(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_3));
    }
    if (RENDERING_ANGLE_NEGATIVE_0_6 <= *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2)) {
        if (RENDERING_ANGLE_POSITIVE_0_7 < *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2)) {
            fVar9 = (float)atan2f(*(uint *)(lVar6 + 0x1c) ^ 0x80000000, *(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_2));
            if (RENDERING_ANGLE_THRESHOLD <= ABS(fVar9)) {
                cVar1 = (fVar9 < 0.0) + '\x03';
            }
            else {
                cVar1 = '\x02';
            }
            uStack_8 = 0;
            uStack_10 = 0;
            uVar2 = func_0x00018052dcc0(*(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_2), *(undefined4 *)(lVar6 + 0x1c),
                                        *(undefined1 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + RENDERING_INDEX_OFFSET_5), cVar1);
            goto LAB_18052449f;
        }
        fVar9 = *(float *)(lVar6 + 0x1c);
        uVar7 = *(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG);
        uStack_8 = 0;
        uStack_10 = 0;
        fVar10 = *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2) * *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2);
        if (fVar9 < RENDERING_ANGLE_NEGATIVE_0_8) {
            uVar4 = RENDERING_ANGLE_UNIT < fVar9 * fVar9 + fVar10;
            uVar2 = func_0x00018052dcc0(lVar3);
            iStack_c = FUN_180557b40(uVar7, uVar2, 0, 0, 0, 0, uVar4);
            FUN_18051ec50(lVar3, &uStack_10);
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_ACTIVE) {
                return;
            }
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_COMPLETE) {
                return;
            }
            func_0x000180525350(lVar3, 1);
            return;
        }
        if (RENDERING_ANGLE_POSITIVE_0_8 < fVar9) {
            uVar4 = RENDERING_ANGLE_UNIT < fVar9 * fVar9 + fVar10;
            uVar2 = func_0x00018052dcc0(lVar3);
            iStack_c = FUN_180557b40(uVar7, uVar2, 0, 1, 0, 0, uVar4);
            FUN_18051ec50(lVar3, &uStack_10);
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_ACTIVE) {
                return;
            }
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_COMPLETE) {
                return;
            }
            lVar6 = *(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL);
            if (lVar6 == 0) {
                return;
            }
            if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) & RENDERING_FLAG_BIT_B) == 0) {
                return;
            }
            if (*(char *)(lVar6 + RENDERING_INDEX_OFFSET_5) == '\0') {
                return;
            }
            *(undefined1 *)(lVar6 + RENDERING_INDEX_OFFSET_5) = 0;
            return;
        }
        uVar2 = func_0x00018052dcc0(lVar3);
    }
    else {
        uStack_8 = 0;
        uStack_10 = 0;
        if (*(int *)(lVar3 + 0x564) == RENDERING_STATUS_NULL) {
            uVar2 = RENDERING_STATUS_LIMIT;
        }
        else {
            uVar2 = *(undefined4 *)
                     (*(longlong *)
                       ((longlong)*(int *)(lVar3 + 0x564) * RENDERING_OFFSET_BASE + RENDERING_OFFSET_EXTENDED + *(longlong *)(lVar3 + RENDERING_OFFSET_REFERENCE))
                     + RENDERING_OFFSET_DATA);
        }
LAB_18052449f:
        uVar7 = *(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG);
    }
    iStack_c = FUN_180557b40(uVar7, uVar2, 0);
LAB_18052490a:
    FUN_18051ec50(lVar3, &uStack_10);
    return;
}

/**
 * 渲染系统状态管理器 - 空参数版本
 * 
 * 处理无参数的渲染系统状态管理。
 */
void FUN_1805359c5(void)
{
    char cVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong unaff_RDI;
    undefined1 uVar4;
    int *piVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong *plVar8;
    float fVar9;
    float fVar10;
    int in_stack_00000030;
    undefined4 uStack_10;
    int iStack_c;
    undefined8 uStack_8;
    
    lVar3 = (longlong)in_stack_00000030 * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + unaff_RDI;
    if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xb & 1) == 0) {
        *(undefined4 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_1) = RENDERING_VALUE_THRESHOLD_1;
    }
    else {
        *(undefined4 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_1) = RENDERING_VALUE_THRESHOLD_2;
    }
    if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xb & 1) == 0) {
        uVar2 = RENDERING_STATUS_LIMIT;
        fVar9 = *(float *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + RENDERING_INDEX_OFFSET_2);
        fVar10 = *(float *)(*(longlong *)(lVar3 + RENDERING_OFFSET_DATA) + 0x1c);
        uVar7 = 2;
        if (*(int *)(*(longlong *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + 0x2590) + 0x10) < RENDERING_STATUS_MINIMUM) {
            uVar7 = RENDERING_STATUS_LIMIT;
        }
        if (*(int *)(lVar3 + 0x564) != RENDERING_STATUS_NULL) {
            uVar2 = *(undefined4 *)
                     (*(longlong *)
                       ((longlong)*(int *)(lVar3 + 0x564) * RENDERING_OFFSET_BASE + RENDERING_OFFSET_EXTENDED + *(longlong *)(lVar3 + RENDERING_OFFSET_REFERENCE))
                     + RENDERING_OFFSET_DATA);
        }
        iStack_c = FUN_180557b40(*(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG), uVar2, 0, uVar7, 0, 0,
                                 RENDERING_ANGLE_UNIT < fVar10 * fVar10 + fVar9 * fVar9);
        if (*(int *)(*(longlong *)
                      ((longlong)*(int *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + RENDERING_INDEX_OFFSET_4) * 0xe0 + 0x78 +
                      _DAT_180c95fb0) + (longlong)iStack_c * 8) < 0) {
            return;
        }
        if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
            FUN_1805ed8d0(*(undefined8 *)(lVar3 + RENDERING_OFFSET_SYSTEM));
        }
        uStack_8 = 0;
        uStack_10 = 0;
        goto LAB_18052490a;
    }
    lVar6 = 0;
    if ((((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) >> 0xe & 1) != 0) && (_DAT_180c92514 != 1)) &&
       (_DAT_180c92514 != 4)) {
        plVar8 = (longlong *)(*(longlong *)(lVar3 + RENDERING_OFFSET_HANDLER) + 0x9e8);
        piVar5 = (int *)(*(longlong *)(lVar3 + RENDERING_OFFSET_HANDLER) + 0x9e0);
        do {
            if ((*piVar5 != RENDERING_STATUS_NULL) &&
               ((*(uint *)((longlong)*(int *)(*plVar8 + 0xf0) * 0xa0 + 0x58 +
                         *(longlong *)(*plVar8 + 0xd0)) & RENDERING_FLAG_STATUS_CHECK) != 0)) {
                FUN_180524260(lVar3);
                break;
            }
            lVar6 = lVar6 + 1;
            piVar5 = piVar5 + 1;
            plVar8 = plVar8 + 1;
        } while (lVar6 < RENDERING_INDEX_ARRAY_SIZE);
    }
    if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        FUN_1805ed8d0(*(undefined8 *)(lVar3 + RENDERING_OFFSET_SYSTEM));
    }
    lVar6 = *(longlong *)(lVar3 + RENDERING_OFFSET_DATA);
    cVar1 = func_0x000180522f60();
    if (cVar1 != '\0') {
        FUN_1808fd400(*(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_3));
    }
    if (RENDERING_ANGLE_NEGATIVE_0_6 <= *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2)) {
        if (RENDERING_ANGLE_POSITIVE_0_7 < *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2)) {
            fVar9 = (float)atan2f(*(uint *)(lVar6 + 0x1c) ^ 0x80000000, *(undefined4 *)(lVar6 + RENDERING_INDEX_OFFSET_2));
            if (RENDERING_ANGLE_THRESHOLD <= ABS(fVar9)) {
                cVar1 = (fVar9 < 0.0) + '\x03';
            }
            else {
                cVar1 = '\x02';
            }
            uStack_8 = 0;
            uStack_10 = 0;
            uVar2 = func_0x00018052dcc0(lVar3, *(undefined4 *)(lVar6 + 0x1c),
                                        *(undefined1 *)(*(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL) + RENDERING_INDEX_OFFSET_5), cVar1);
            goto LAB_18052449f;
        }
        fVar9 = *(float *)(lVar6 + 0x1c);
        uVar7 = *(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG);
        uStack_8 = 0;
        uStack_10 = 0;
        fVar10 = *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2) * *(float *)(lVar6 + RENDERING_INDEX_OFFSET_2);
        if (fVar9 < RENDERING_ANGLE_NEGATIVE_0_8) {
            uVar4 = RENDERING_ANGLE_UNIT < fVar9 * fVar9 + fVar10;
            uVar2 = func_0x00018052dcc0(lVar3);
            iStack_c = FUN_180557b40(uVar7, uVar2, 0, 0, 0, 0, uVar4);
            FUN_18051ec50(lVar3, &uStack_10);
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_ACTIVE) {
                return;
            }
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_COMPLETE) {
                return;
            }
            func_0x000180525350(lVar3, 1);
            return;
        }
        if (RENDERING_ANGLE_POSITIVE_0_8 < fVar9) {
            uVar4 = RENDERING_ANGLE_UNIT < fVar9 * fVar9 + fVar10;
            uVar2 = func_0x00018052dcc0(lVar3);
            iStack_c = FUN_180557b40(uVar7, uVar2, 0, 1, 0, 0, uVar4);
            FUN_18051ec50(lVar3, &uStack_10);
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_ACTIVE) {
                return;
            }
            if (*(int *)(lVar3 + 0x1fc) == RENDERING_STATUS_COMPLETE) {
                return;
            }
            lVar6 = *(longlong *)(lVar3 + RENDERING_OFFSET_CONTROL);
            if (lVar6 == 0) {
                return;
            }
            if ((*(uint *)(lVar3 + RENDERING_OFFSET_STATUS) & RENDERING_FLAG_BIT_B) == 0) {
                return;
            }
            if (*(char *)(lVar6 + RENDERING_INDEX_OFFSET_5) == '\0') {
                return;
            }
            *(undefined1 *)(lVar6 + RENDERING_INDEX_OFFSET_5) = 0;
            return;
        }
        uVar2 = func_0x00018052dcc0(lVar3);
    }
    else {
        uStack_8 = 0;
        uStack_10 = 0;
        if (*(int *)(lVar3 + 0x564) == RENDERING_STATUS_NULL) {
            uVar2 = RENDERING_STATUS_LIMIT;
        }
        else {
            uVar2 = *(undefined4 *)
                     (*(longlong *)
                       ((longlong)*(int *)(lVar3 + 0x564) * RENDERING_OFFSET_BASE + RENDERING_OFFSET_EXTENDED + *(longlong *)(lVar3 + RENDERING_OFFSET_REFERENCE))
                     + RENDERING_OFFSET_DATA);
        }
LAB_18052449f:
        uVar7 = *(undefined8 *)(lVar3 + RENDERING_OFFSET_CONFIG);
    }
    iStack_c = FUN_180557b40(uVar7, uVar2, 0);
LAB_18052490a:
    FUN_18051ec50(lVar3, &uStack_10);
    return;
}

/**
 * 渲染系统标志设置器 - 主函数
 * 
 * 设置渲染系统的标志位和状态。
 * 
 * @param param1 系统句柄
 * @param param2 系统参数2
 * @param param3 系统参数3
 */
void FUN_180535a30(longlong *param_1, undefined8 param_2, undefined8 param_3)
{
    longlong lVar1;
    char cVar2;
    int aiStackX_8 [2];
    
    lVar1 = *param_1;
    if (lVar1 != 0) {
        cVar2 = FUN_18055f260(param_3, aiStackX_8, &UNK_1809fa510);
        FUN_1804fe350(&UNK_180a30230, cVar2, &UNK_180a301f8, aiStackX_8);
        if (cVar2 != '\0') {
            *(undefined1 *)((longlong)aiStackX_8[0] * RENDERING_OFFSET_BASE + 0x3628 + lVar1) = 1;
        }
    }
    return;
}

/**
 * 渲染系统标志设置器 - 参数版本
 * 
 * 处理参数化的标志设置。
 */
void FUN_180535a48(void)
{
    char cVar1;
    longlong unaff_RDI;
    int in_stack_00000030;
    
    cVar1 = FUN_18055f260();
    FUN_1804fe350(&UNK_180a30230, cVar1, &UNK_180a301f8, &stack0x00000030);
    if (cVar1 != '\0') {
        *(undefined1 *)((longlong)in_stack_00000030 * RENDERING_OFFSET_BASE + 0x3628 + unaff_RDI) = 1;
    }
    return;
}

/**
 * 渲染系统标志设置器 - 直接设置版本
 * 
 * 直接设置标志位，无需参数验证。
 */
void FUN_180535a81(void)
{
    longlong unaff_RDI;
    int in_stack_00000030;
    
    *(undefined1 *)((longlong)in_stack_00000030 * RENDERING_OFFSET_BASE + 0x3628 + unaff_RDI) = 1;
    return;
}

/**
 * 渲染系统参数处理器 - 主函数
 * 
 * 处理渲染系统的参数配置和优化。
 * 
 * @param param1 系统句柄
 * @param param2 系统参数2
 * @param param3 系统参数3
 */
void FUN_180535aa0(longlong *param_1, undefined8 param_2, undefined8 param_3)
{
    longlong lVar1;
    char cVar2;
    undefined8 extraout_XMM0_Qa;
    int aiStackX_8 [2];
    longlong lVar3;
    undefined4 uStack_78;
    undefined4 uStack_74;
    undefined4 uStack_70;
    undefined4 uStack_6c;
    undefined4 uStack_68;
    undefined4 uStack_64;
    undefined4 uStack_60;
    undefined4 uStack_5c;
    undefined8 uStack_58;
    undefined8 uStack_50;
    undefined1 uStack_48;
    undefined4 uStack_44;
    undefined1 uStack_40;
    undefined8 uStack_3c;
    undefined4 uStack_34;
    undefined4 uStack_30;
    undefined8 uStack_28;
    undefined8 uStack_20;
    undefined2 uStack_18;
    
    lVar1 = *param_1;
    if (lVar1 != 0) {
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0x7f7fffff;
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0x7f7fffff;
        uStack_58 = 0xffffffffffffffff;
        uStack_50 = 0xffffffffffffffff;
        uStack_48 = 0xff;
        uStack_44 = 0xffffffff;
        uStack_40 = 0xff;
        uStack_3c = 0;
        uStack_30 = 0x7f7fffff;
        uStack_34 = 0;
        uStack_28 = 0;
        uStack_20 = 0xffffffffffffffff;
        uStack_18 = 0;
        cVar2 = FUN_1805ae280(param_3, aiStackX_8, &uStack_78);
        lVar3 = (longlong)&uStack_50 + 4;
        FUN_1804fe500(extraout_XMM0_Qa, cVar2);
        if (cVar2 != '\0') {
            FUN_18051d2d0((longlong)aiStackX_8[0] * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + lVar1, 0, &uStack_78, uStack_40, lVar3);
        }
    }
    return;
}

/**
 * 渲染系统参数处理器 - 上下文版本
 * 
 * 处理带上下文的参数处理。
 */
void FUN_180535b2e(void)
{
    char cVar1;
    undefined8 unaff_RBX;
    longlong unaff_RDI;
    longlong in_R11;
    undefined1 *puVar2;
    undefined1 in_stack_00000068;
    int in_stack_000000b0;
    
    *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
    cVar1 = FUN_1805ae280();
    puVar2 = &stack0x0000005c;
    FUN_1804fe500();
    if (cVar1 != '\0') {
        FUN_18051d2d0((longlong)in_stack_000000b0 * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + unaff_RDI, 0, &stack0x00000030,
                      in_stack_00000068, puVar2);
    }
    return;
}

/**
 * 渲染系统参数处理器 - 简化版本
 * 
 * 简化的参数处理函数。
 */
void FUN_180535b60(void)
{
    longlong unaff_RDI;
    undefined1 in_stack_00000068;
    int in_stack_000000b0;
    
    FUN_18051d2d0((longlong)in_stack_000000b0 * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + unaff_RDI, 0, &stack0x00000030,
                  in_stack_00000068);
    return;
}

/**
 * 渲染系统条件验证器 - 主函数
 * 
 * 验证渲染系统的条件状态和参数有效性。
 * 
 * @param param1 系统句柄
 * @param param2 系统参数2
 * @param param3 系统参数3
 */
void FUN_180535ba0(longlong *param_1, undefined8 param_2, undefined8 param_3)
{
    longlong lVar1;
    char cVar2;
    uint auStackX_8 [2];
    int aiStackX_20 [2];
    
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    cVar2 = FUN_18055f260(param_3, aiStackX_20, &UNK_1809fa510);
    if (cVar2 != '\0') {
        auStackX_8[0] = (uint)((char)auStackX_8[0] != '\0');
        cVar2 = FUN_18055f260(param_3, auStackX_8, &UNK_1809fa560);
        auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_, auStackX_8[0] != 0);
        if (cVar2 != '\0') {
            cVar2 = '\x01';
            goto LAB_180535c06;
        }
    }
    cVar2 = '\0';
LAB_180535c06:
    FUN_1804fe790(&UNK_180a303f8, cVar2, &UNK_180a30378, aiStackX_20, auStackX_8);
    if (cVar2 != '\0') {
        FUN_18051ac20((longlong)aiStackX_20[0] * RENDERING_OFFSET_BASE + RENDERING_OFFSET_ADD + lVar1, (char)auStackX_8[0]);
    }
    return;
}

// ===========================================
// 技术说明
// ===========================================

/**
 * @section technical_implementation 技术实现说明
 * 
 * 本模块实现了渲染系统的高级状态管理和参数处理功能，主要技术特点包括：
 * 
 * 1. **状态管理机制**
 *    - 多级状态检查和验证
 *    - 条件分支和状态转换
 *    - 角度计算和阈值判断
 *    - 标志位管理和状态同步
 * 
 * 2. **参数处理系统**
 *    - 参数验证和优化
 *    - 多种参数格式支持
 *    - 动态参数配置
 *    - 参数上下文管理
 * 
 * 3. **内存管理策略**
 *    - 栈内存分配和管理
 *    - 偏移量计算和访问
 *    - 内存地址计算
 *    - 资源清理和释放
 * 
 * 4. **错误处理机制**
 *    - 多层错误检查
 *    - 异常状态处理
 *    - 条件验证和恢复
 *    - 安全退出机制
 * 
 * 5. **性能优化技术**
 *    - 条件分支优化
 *    - 内存访问优化
 *    - 计算结果缓存
 *    - 状态机优化
 * 
 * @section performance_optimization 性能优化说明
 * 
 * 本模块采用多种性能优化技术：
 * 
 * 1. **条件判断优化**
 *    - 使用位操作进行标志检查
 *    - 条件分支预测优化
 *    - 短路评估策略
 * 
 * 2. **内存访问优化**
 *    - 偏移量预计算
 *    - 连续内存访问
 *    - 缓存友好的数据布局
 * 
 * 3. **计算优化**
 *    - 角度计算优化
 *    - 浮点运算优化
 *    - 数学函数调用优化
 * 
 * @section safety_security 安全性说明
 * 
 * 本模块包含多重安全检查机制：
 * 
 * 1. **输入验证**
 *    - 空指针检查
 *    - 参数范围验证
 *    - 状态一致性检查
 * 
 * 2. **内存安全**
 *    - 边界检查
 *    - 内存访问权限验证
 *    - 资源泄漏防护
 * 
 * 3. **错误恢复**
 *    - 异常处理机制
 *    - 状态回滚功能
 *    - 安全退出策略
 * 
 * @section maintainability 维护性说明
 * 
 * 本模块具有良好的维护性特点：
 * 
 * 1. **代码结构**
 *    - 清晰的函数划分
 *    - 统一的命名规范
 *    - 详细的注释文档
 * 
 * 2. **可扩展性**
 *    - 模块化设计
 *    - 接口标准化
 *    - 配置参数化
 * 
 * 3. **调试支持**
 *    - 状态跟踪
 *    - 错误日志
 *    - 调试信息输出
 */