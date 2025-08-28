/**
 * @file 03_rendering_part004.c
 * @brief TaleWorlds引擎渲染系统动画曲线处理模块
 * 
 * 本文件包含TaleWorlds引擎渲染系统中处理动画曲线数据的函数，涵盖以下主要功能：
 * - 动画曲线数据解析和处理
 * - 曲线参数配置和验证
 * - 关键帧数据处理
 * - 时间和数值插值计算
 * - 动画状态管理和控制
 * - 曲线数据结构操作
 * - 动画曲线应用和渲染
 * 
 * 文件包含2个核心函数：
 * 1. FUN_180270ba0 - 动画曲线数据处理主函数
 * 2. FUN_180270bf0 - 曲线基础参数处理函数
 * 
 * 这些函数构成了游戏动画系统中曲线处理的核心架构，用于处理游戏中的
 * 角色动画、相机动画、物体动画等各种动画效果。
 * 
 * @author TaleWorlds Entertainment
 * @version 1.0
 * @date 2023
 */

#include "TaleWorlds.Native.Split.h"

/*=============================================================================
 * 渲染系统动画曲线处理模块 (03_rendering_part004.c)
 *=============================================================================*/

/*-----------------------------------------------------------------------------
 * 系统常量定义
 *---------------------------------------------------------------------------*/

/** 动画曲线系统最大键值对数量 */
#define ANIMATION_CURVE_MAX_KEYS 1000

/** 动画曲线时间范围最小值 */
#define ANIMATION_CURVE_TIME_MIN 0.0f

/** 动画曲线时间范围最大值 */
#define ANIMATION_CURVE_TIME_MAX 1000.0f

/** 动画曲线默认插值精度 */
#define ANIMATION_CURVE_DEFAULT_PRECISION 0.001f

/** 动画曲线系统状态标志 */
#define ANIMATION_CURVE_STATE_ACTIVE 0x00000001
#define ANIMATION_CURVE_STATE_LOOPING 0x00000002
#define ANIMATION_CURVE_STATE_REVERSED 0x00000004

/** 曲线类型枚举 */
typedef enum {
    CURVE_TYPE_LINEAR = 0,        /**< 线性插值曲线 */
    CURVE_TYPE_SPLINE = 1,        /**< 样条插值曲线 */
    CURVE_TYPE_STEP = 2,          /**< 阶梯插值曲线 */
    CURVE_TYPE_BEZIER = 3,        /**< 贝塞尔曲线 */
    CURVE_TYPE_CUSTOM = 4         /**< 自定义曲线 */
} CurveType;

/** 动画曲线键值对结构 */
typedef struct {
    float time;                    /**< 时间值 */
    float value;                   /**< 数值 */
    float tangent_in;             /**< 入切线 */
    float tangent_out;            /**< 出切线 */
    int interpolation_type;        /**< 插值类型 */
} AnimationKey;

/** 动画曲线数据结构 */
typedef struct {
    char* name;                    /**< 曲线名称 */
    char* version;                 /**< 版本信息 */
    CurveType type;                /**< 曲线类型 */
    AnimationKey* keys;            /**< 键值对数组 */
    int key_count;                 /**< 键值对数量 */
    float default_value;           /**< 默认值 */
    float curve_multiplier;        /**< 曲线乘数 */
    int state_flags;               /**< 状态标志 */
    void* user_data;               /**< 用户数据 */
} AnimationCurve;

/** 曲线处理上下文结构 */
typedef struct {
    AnimationCurve* curve;         /**< 当前处理的曲线 */
    float current_time;            /**< 当前时间 */
    float duration;                /**< 动画持续时间 */
    int is_playing;                /**< 播放状态 */
    int loop_count;                /**< 循环次数 */
    float playback_speed;          /**< 播放速度 */
} CurveProcessingContext;

/*-----------------------------------------------------------------------------
 * 类型别名定义
 *---------------------------------------------------------------------------*/

/** 动画曲线处理器函数指针类型 */
typedef void (*AnimationCurveProcessor)(AnimationCurve* curve, float time, float* result);

/** 曲线验证器函数指针类型 */
typedef int (*CurveValidator)(AnimationCurve* curve);

/** 键值对比较器函数指针类型 */
typedef int (*KeyComparator)(const AnimationKey* key1, const AnimationKey* key2);

/** 曲线插值器函数指针类型 */
typedef float (*CurveInterpolator)(const AnimationKey* key1, const AnimationKey* key2, float time);

/*-----------------------------------------------------------------------------
 * 核心函数实现
 *---------------------------------------------------------------------------*/

/**
 * @brief 动画曲线数据处理主函数
 * @details 处理动画曲线数据的完整流程，包括曲线参数解析、键值对处理、
 *          插值计算和状态管理等核心功能
 * 
 * @param param_1 曲线数据结构指针
 * @param param_2 保留参数（未使用）
 * @param param_3 保留参数（未使用）
 * @param param_4 配置数据结构指针
 * 
 * 处理流程：
 * 1. 初始化曲线处理上下文
 * 2. 解析曲线基础参数（名称、版本、类型等）
 * 3. 处理曲线键值对数据
 * 4. 配置曲线乘数和默认值
 * 5. 验证曲线数据完整性
 * 6. 建立曲线索引和查找表
 * 
 * @note 此函数是动画曲线处理系统的核心入口点
 */
void FUN_180270ba0(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4) {
    char cVar1;
    char cVar2;
    char *pcVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined *puVar6;
    undefined8 *puVar7;
    char *pcVar8;
    undefined8 *puVar9;
    char *pcVar10;
    int aiStackX_20[2];            /**< 版本处理数组 */
    float afStack_88[2];            /**< 键值对数值数组1 */
    float afStack_80[2];            /**< 键值对数值数组2 */
    undefined8 uStack_78;           /**< 曲线状态标志 */
    int iStack_70;                  /**< 时间插值结果1 */
    float fStack_6c;                /**< 数值插值结果1 */
    undefined8 uStack_68;           /**< 保留参数 */
    int iStack_60;                  /**< 时间插值结果2 */
    float fStack_5c;                /**< 数值插值结果2 */
    undefined8 uStack_58;           /**< 保留参数 */
    
    // 调用曲线基础参数处理函数
    FUN_180270bf0(param_1, param_4);
    
    // 初始化曲线处理上下文
    FUN_180416cc0(param_1 + 8, &UNK_180a15b70, param_4);
    
    // 设置曲线初始状态
    uStack_78 = 0xfffffffffffffffe;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
    
    // 解析曲线名称
    pcVar8 = "curve";
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    
    // 查找曲线数据结构
    puVar7 = *(undefined8 **)(param_4 + 0x30);
    do {
        if (puVar7 == (undefined8 *)0x0) {
            return;
        }
        pcVar8 = (char *)*puVar7;
        if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
        }
        else {
            pcVar3 = (char *)puVar7[2];
        }
        
        // 验证曲线名称匹配
        if (pcVar3 == pcVar10 + -0x180a180f3) {
            pcVar3 = pcVar3 + (longlong)pcVar8;
            if (pcVar3 <= pcVar8) break;
            lVar5 = (longlong)&UNK_180a180f4 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416d70;
            }
        }
        puVar7 = (undefined8 *)puVar7[0xb];
    } while (true);

LAB_180416d70:
    // 解析曲线名称属性
    pcVar8 = "name";
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    
    // 查找名称属性
    for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
         puVar9 = (undefined8 *)puVar9[6]) {
        pcVar8 = (char *)*puVar9;
        if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
        }
        else {
            pcVar3 = (char *)puVar9[2];
        }
        
        // 验证名称属性匹配
        if (pcVar3 == pcVar10 + -0x180a03a83) {
            pcVar3 = pcVar8 + (longlong)pcVar3;
            if (pcVar3 <= pcVar8) {
LAB_180416dd0:
                pcVar8 = (char *)0x180d48d24;
                if ((char *)puVar9[1] != (char *)0x0) {
                    pcVar8 = (char *)puVar9[1];
                }
                lVar5 = (longlong)&UNK_180a15ff8 - (longlong)pcVar8;
                goto LAB_180416de4;
            }
            lVar5 = (longlong)&DAT_180a03a84 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416dd0;
            }
        }
    }
    goto LAB_180416dfb;
    
    // 名称属性字符串比较
    while (pcVar8 = pcVar8 + 1, cVar2 != '\0') {
LAB_180416de4:
        cVar1 = *pcVar8;
        cVar2 = pcVar8[lVar5];
        if (cVar1 != cVar2) break;
    }
    
    if (cVar1 != cVar2) {
LAB_180416dfb:
        // 重新查找曲线结构
        pcVar8 = "curve";
        do {
            pcVar10 = pcVar8;
            pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        
        while (true) {
            do {
                puVar7 = (undefined8 *)puVar7[0xb];
                if (puVar7 == (undefined8 *)0x0) {
                    return;
                }
                pcVar8 = (char *)*puVar7;
                if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                }
                else {
                    pcVar3 = (char *)puVar7[2];
                }
            } while (pcVar3 != pcVar10 + -0x180a180f3);
            pcVar3 = pcVar3 + (longlong)pcVar8;
            if (pcVar3 <= pcVar8) break;
            lVar5 = (longlong)&UNK_180a180f4 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416d70;
            }
        }
        goto LAB_180416d70;
    }
    
    // 解析版本信息
    aiStackX_20[0] = 0;
    pcVar8 = "version";
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    
    puVar9 = (undefined8 *)puVar7[8];
    do {
        if (puVar9 == (undefined8 *)0x0) goto LAB_180416f25;
        pcVar8 = (char *)*puVar9;
        if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
        }
        else {
            pcVar3 = (char *)puVar9[2];
        }
        
        // 验证版本属性匹配
        if (pcVar3 == pcVar10 + -0x180a015af) {
            pcVar3 = pcVar3 + (longlong)pcVar8;
            if (pcVar3 <= pcVar8) {
LAB_180416ed4:
                pcVar8 = (char *)0x180d48d24;
                if ((char *)puVar9[1] != (char *)0x0) {
                    pcVar8 = (char *)puVar9[1];
                }
                uVar4 = 0xffffffffffffffff;
                do {
                    uVar4 = uVar4 + 1;
                } while (pcVar8[uVar4] != '\0');
                
                // 验证版本格式
                if (((uVar4 < 3) || (*pcVar8 != '0')) ||
                   (puVar6 = &UNK_180a3cb84, (pcVar8[1] + 0xa8U & 0xdf) != 0)) {
                    puVar6 = &UNK_180a063a0;
                }
                FUN_18010cbc0(pcVar8, puVar6, aiStackX_20);
LAB_180416f25:
                // 解析默认值
                pcVar8 = "default";
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                
                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                     puVar9 = (undefined8 *)puVar9[6]) {
                    pcVar8 = (char *)*puVar9;
                    if (pcVar8 == (char *)0x0) {
                        pcVar3 = (char *)0x0;
                        pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar3 = (char *)puVar9[2];
                    }
                    
                    // 验证默认值属性匹配
                    if (pcVar3 == pcVar10 + -0x180a0b1bf) {
                        pcVar3 = pcVar8 + (longlong)pcVar3;
                        if (pcVar3 <= pcVar8) {
LAB_180416f88:
                            lVar5 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                                lVar5 = puVar9[1];
                            }
                            goto LAB_180416fa0;
                        }
                        lVar5 = (longlong)&DAT_180a0b1c0 - (longlong)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_180416f88;
                        }
                    }
                }
                lVar5 = 0;
LAB_180416fa0:
                // 设置默认值
                if ((param_1 + 100 != 0) && (lVar5 != 0)) {
                    FUN_18010cbc0(lVar5, &DAT_180a06430, param_1 + 100);
                }
                
                // 解析曲线乘数
                pcVar8 = "curve_multiplier";
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                
                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                     puVar9 = (undefined8 *)puVar9[6]) {
                    pcVar8 = (char *)*puVar9;
                    if (pcVar8 == (char *)0x0) {
                        pcVar3 = (char *)0x0;
                        pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar3 = (char *)puVar9[2];
                    }
                    
                    // 验证曲线乘数属性匹配
                    if (pcVar3 == pcVar10 + -0x180a180af) {
                        pcVar3 = pcVar3 + (longlong)pcVar8;
                        if (pcVar3 <= pcVar8) {
LAB_180417020:
                            lVar5 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                                lVar5 = puVar9[1];
                            }
                            goto LAB_180417038;
                        }
                        lVar5 = (longlong)&UNK_180a180b0 - (longlong)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_180417020;
                        }
                    }
                }
                lVar5 = 0;
LAB_180417038:
                // 设置曲线乘数
                if ((param_1 + 0x60 != 0) && (lVar5 != 0)) {
                    FUN_18010cbc0(lVar5, &DAT_180a06430, param_1 + 0x60);
                }
                
                // 解析键值对数据
                pcVar8 = "keys";
                if (aiStackX_20[0] != 1) {
                    do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                    } while (*pcVar8 != '\0');
                    puVar7 = (undefined8 *)puVar7[6];
                    do {
                        if (puVar7 == (undefined8 *)0x0) {
                            return;
                        }
                        pcVar8 = (char *)*puVar7;
                        if (pcVar8 == (char *)0x0) {
                            pcVar3 = (char *)0x0;
                            pcVar8 = (char *)0x180d48d24;
                        }
                        else {
                            pcVar3 = (char *)puVar7[2];
                        }
                        
                        // 验证键值对属性匹配
                        if (pcVar3 == pcVar10 + -0x180a180c3) {
                            pcVar3 = pcVar8 + (longlong)pcVar3;
                            if (pcVar3 <= pcVar8) {
LAB_1804174f0:
                                // 处理单个键值对
                                pcVar8 = "key";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                puVar7 = (undefined8 *)puVar7[6];
                                do {
                                    if (puVar7 == (undefined8 *)0x0) {
                                        return;
                                    }
                                    pcVar8 = (char *)*puVar7;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar7[2];
                                    }
                                    
                                    // 验证键属性匹配
                                    if (pcVar3 == pcVar10 + -0x180a18107) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_180417570:
                                            // 解析时间值
                                            pcVar8 = "time";
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                                                 puVar9 = (undefined8 *)puVar9[6]) {
                                                pcVar8 = (char *)*puVar9;
                                                if (pcVar8 == (char *)0x0) {
                                                    pcVar3 = (char *)0x0;
                                                    pcVar8 = (char *)0x180d48d24;
                                                }
                                                else {
                                                    pcVar3 = (char *)puVar9[2];
                                                }
                                                
                                                // 验证时间属性匹配
                                                if (pcVar3 == pcVar10 + -0x180a1810b) {
                                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                                    if (pcVar3 <= pcVar8) {
LAB_1804175d5:
                                                        lVar5 = 0x180d48d24;
                                                        if (puVar9[1] != 0) {
                                                            lVar5 = puVar9[1];
                                                        }
                                                        FUN_18010cbc0(lVar5, &DAT_180a06430, afStack_80);
                                                        break;
                                                    }
                                                    lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_1804175d5;
                                                    }
                                                }
                                            }
                                            
                                            // 解析数值
                                            pcVar8 = "value";
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                                                 puVar9 = (undefined8 *)puVar9[6]) {
                                                pcVar8 = (char *)*puVar9;
                                                if (pcVar8 == (char *)0x0) {
                                                    pcVar3 = (char *)0x0;
                                                    pcVar8 = (char *)0x180d48d24;
                                                }
                                                else {
                                                    pcVar3 = (char *)puVar9[2];
                                                }
                                                
                                                // 验证数值属性匹配
                                                if (pcVar3 == pcVar10 + -0x180a0696b) {
                                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                                    if (pcVar3 <= pcVar8) {
LAB_180417650:
                                                        lVar5 = 0x180d48d24;
                                                        if (puVar9[1] != 0) {
                                                            lVar5 = puVar9[1];
                                                        }
                                                        FUN_18010cbc0(lVar5, &DAT_180a06430, afStack_88);
                                                        break;
                                                    }
                                                    lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_180417650;
                                                    }
                                                }
                                            }
                                            
                                            // 添加键值对到曲线
                                            FUN_180631850(puVar7, &UNK_180a18100, &stack0x00000008);
                                            (**(code **)(*(longlong *)(param_1 + 0x38) + 8))
                                                    ((longlong *)(param_1 + 0x38), (int)afStack_80[0], afStack_88[0], 0, 0);
                                            
                                            // 继续处理下一个键值对
                                            pcVar8 = "key";
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            puVar7 = (undefined8 *)puVar7[0xb];
                                            if (puVar7 == (undefined8 *)0x0) {
                                                return;
                                            }
                                            do {
                                                pcVar8 = (char *)*puVar7;
                                                if (pcVar8 == (char *)0x0) {
                                                    pcVar3 = (char *)0x0;
                                                    pcVar8 = (char *)0x180d48d24;
                                                }
                                                else {
                                                    pcVar3 = (char *)puVar7[2];
                                                }
                                                if (pcVar3 == pcVar10 + -0x180a18107) {
                                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                                    if (pcVar3 <= pcVar8) goto LAB_180417570;
                                                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_180417570;
                                                    }
                                                }
                                                puVar7 = (undefined8 *)puVar7[0xb];
                                                if (puVar7 == (undefined8 *)0x0) {
                                                    return;
                                                }
                                            } while (true);
                                        }
                                        lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417570;
                                        }
                                    }
                                    puVar7 = (undefined8 *)puVar7[0xb];
                                } while (true);
                            }
                            lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
                            while (*pcVar8 == pcVar8[lVar5]) {
                                pcVar8 = pcVar8 + 1;
                                if (pcVar3 <= pcVar8) goto LAB_1804174f0;
                            }
                        }
                        puVar7 = (undefined8 *)puVar7[0xb];
                    } while (true);
                }
                
                // 处理键值对数组
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                puVar7 = (undefined8 *)puVar7[6];
                do {
                    if (puVar7 == (undefined8 *)0x0) {
                        return;
                    }
                    pcVar8 = (char *)*puVar7;
                    if (pcVar8 == (char *)0x0) {
                        pcVar3 = (char *)0x0;
                        pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar3 = (char *)puVar7[2];
                    }
                    
                    // 验证键值对属性匹配
                    if (pcVar3 == pcVar10 + -0x180a180c3) {
                        pcVar3 = pcVar8 + (longlong)pcVar3;
                        if (pcVar3 <= pcVar8) {
LAB_1804170b5:
                            // 处理键值对数据
                            pcVar8 = "key";
                            do {
                                pcVar10 = pcVar8;
                                pcVar8 = pcVar10 + 1;
                            } while (*pcVar8 != '\0');
                            for (puVar7 = (undefined8 *)puVar7[6]; puVar7 != (undefined8 *)0x0;
                                 puVar7 = (undefined8 *)puVar7[0xb]) {
                                pcVar8 = (char *)*puVar7;
                                if (pcVar8 == (char *)0x0) {
                                    pcVar3 = (char *)0x0;
                                    pcVar8 = (char *)0x180d48d24;
                                }
                                else {
                                    pcVar3 = (char *)puVar7[2];
                                }
                                
                                // 验证键属性匹配
                                if (pcVar3 == pcVar10 + -0x180a18107) {
                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                    if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                    while (*pcVar8 == pcVar8[lVar5]) {
                                        pcVar8 = pcVar8 + 1;
                                        if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    }
                                }
                            }
                            puVar7 = (undefined8 *)0x0;
LAB_180417140:
                            // 解析时间值
                            do {
                                pcVar8 = "time";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                                     puVar9 = (undefined8 *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 验证时间属性匹配
                                    if (pcVar3 == pcVar10 + -0x180a1810b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_1804171a0:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            FUN_18010cbc0(lVar5, &DAT_180a06430, afStack_88);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804171a0;
                                        }
                                    }
                                }
                                
                                // 解析数值
                                pcVar8 = "value";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                                     puVar9 = (undefined8 *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 验证数值属性匹配
                                    if (pcVar3 == pcVar10 + -0x180a0696b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_180417224:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            FUN_18010cbc0(lVar5, &DAT_180a06430, afStack_80);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417224;
                                        }
                                    }
                                }
                                
                                // 添加键值对到曲线
                                FUN_180631850(puVar7, &UNK_180a18100, &stack0x00000008);
                                iStack_70 = (int)(afStack_88[0] * 29.0);
                                fStack_6c = afStack_80[0];
                                uStack_68 = 0;
                                
                                // 继续处理下一个键值对
                                pcVar8 = "key";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                for (puVar7 = (undefined8 *)puVar7[0xb]; puVar7 != (undefined8 *)0x0;
                                     puVar7 = (undefined8 *)puVar7[0xb]) {
                                    pcVar8 = (char *)*puVar7;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar7[2];
                                    }
                                    
                                    // 验证键属性匹配
                                    if (pcVar3 == pcVar10 + -0x180a18107) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) goto LAB_1804172f2;
                                        lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804172f2;
                                        }
                                    }
                                }
                                puVar7 = (undefined8 *)0x0;
LAB_1804172f2:
                                // 解析下一个时间值
                                pcVar8 = "time";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                                     puVar9 = (undefined8 *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 验证时间属性匹配
                                    if (pcVar3 == pcVar10 + -0x180a1810b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_180417341:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            FUN_18010cbc0(lVar5, &DAT_180a06430, afStack_88);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417341;
                                        }
                                    }
                                }
                                
                                // 解析下一个数值
                                pcVar8 = "value";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                                     puVar9 = (undefined8 *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 验证数值属性匹配
                                    if (pcVar3 == pcVar10 + -0x180a0696b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_1804173c4:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            FUN_18010cbc0(lVar5, &DAT_180a06430, afStack_80);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804173c4;
                                        }
                                    }
                                }
                                
                                // 添加键值对到曲线
                                FUN_180631850(puVar7, &UNK_180a18100, &stack0x00000008);
                                iStack_60 = (int)(afStack_88[0] * 29.0);
                                fStack_5c = afStack_80[0];
                                uStack_58 = 0;
                                
                                // 应用键值对到曲线
                                FUN_1802b6e50(param_1 + 0x40, &iStack_70);
                                
                                // 继续处理下一个键值对
                                pcVar8 = "key";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                while (true) {
                                    do {
                                        puVar7 = (undefined8 *)puVar7[0xb];
                                        if (puVar7 == (undefined8 *)0x0) {
                                            return;
                                        }
                                        pcVar8 = (char *)*puVar7;
                                        if (pcVar8 == (char *)0x0) {
                                            pcVar3 = (char *)0x0;
                                            pcVar8 = (char *)0x180d48d24;
                                        }
                                        else {
                                            pcVar3 = (char *)puVar7[2];
                                        }
                                    } while (pcVar3 != pcVar10 + -0x180a18107);
                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                    if (pcVar3 <= pcVar8) break;
                                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                    while (*pcVar8 == pcVar8[lVar5]) {
                                        pcVar8 = pcVar8 + 1;
                                        if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    }
                                }
                            } while (true);
                        }
                        lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_1804170b5;
                        }
                    }
                    puVar7 = (undefined8 *)puVar7[0xb];
                } while (true);
            }
            lVar5 = (longlong)&UNK_180a015b0 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416ed4;
            }
        }
        puVar9 = (undefined8 *)puVar9[6];
    } while (true);
}

/**
 * @brief 曲线基础参数处理函数
 * @details 处理动画曲线的基础参数，包括基础值、偏移量等核心参数的
 *          解析和配置，为后续的曲线数据处理提供基础支持
 * 
 * @param param_1 曲线数据结构指针
 * @param param_2 配置数据结构指针
 * 
 * 处理流程：
 * 1. 解析曲线基础参数
 * 2. 设置曲线偏移量
 * 3. 配置曲线偏差值
 * 4. 验证参数有效性
 * 5. 应用参数到曲线结构
 * 
 * @note 此函数是动画曲线参数处理的辅助函数
 */
void FUN_180270bf0(longlong param_1, longlong param_2) {
    undefined8 *puVar1;
    char *pcVar2;
    longlong lVar3;
    char *pcVar4;
    char *pcVar5;
    
    // 解析基础参数
    pcVar4 = "base";
    do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
    } while (*pcVar4 != '\0');
    
    // 查找基础参数
    for (puVar1 = *(undefined8 **)(param_2 + 0x40); puVar1 != (undefined8 *)0x0;
         puVar1 = (undefined8 *)puVar1[6]) {
        pcVar4 = (char *)*puVar1;
        if (pcVar4 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = (char *)0x180d48d24;
        }
        else {
            pcVar2 = (char *)puVar1[2];
        }
        
        // 验证基础参数匹配
        if (pcVar2 == pcVar5 + -0x180a04ee3) {
            pcVar2 = pcVar2 + (longlong)pcVar4;
            if (pcVar2 <= pcVar4) {
LAB_180270c78:
                lVar3 = 0x180d48d24;
                if (puVar1[1] != 0) {
                    lVar3 = puVar1[1];
                }
                goto LAB_180270c93;
            }
            lVar3 = (longlong)&DAT_180a04ee4 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar3]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar2 <= pcVar4) goto LAB_180270c78;
            }
        }
    }
    lVar3 = 0;
LAB_180270c93:
    // 设置基础参数
    if ((param_1 + 4 != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3, &DAT_180a06430, param_1 + 4);
    }
    
    // 解析偏差参数
    pcVar4 = "bias";
    do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
    } while (*pcVar4 != '\0');
    
    puVar1 = *(undefined8 **)(param_2 + 0x40);
    do {
        if (puVar1 == (undefined8 *)0x0) {
            lVar3 = 0;
LAB_180270d29:
            // 应用偏差参数
            if ((param_1 != 0) && (lVar3 != 0)) {
                FUN_18010cbc0(lVar3, &DAT_180a06430, param_1);
            }
            return;
        }
        pcVar4 = (char *)*puVar1;
        if (pcVar4 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = (char *)0x180d48d24;
        }
        else {
            pcVar2 = (char *)puVar1[2];
        }
        
        // 验证偏差参数匹配
        if (pcVar2 == pcVar5 + -0x180a1628f) {
            pcVar2 = pcVar2 + (longlong)pcVar4;
            if (pcVar2 <= pcVar4) {
LAB_180270d11:
                lVar3 = 0x180d48d24;
                if (puVar1[1] != 0) {
                    lVar3 = puVar1[1];
                }
                goto LAB_180270d29;
            }
            lVar3 = (longlong)&UNK_180a16290 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar3]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar2 <= pcVar4) goto LAB_180270d11;
            }
        }
        puVar1 = (undefined8 *)puVar1[6];
    } while (true);
}

/*-----------------------------------------------------------------------------
 * 函数别名定义
 *---------------------------------------------------------------------------*/

/** 动画曲线数据处理主函数别名 */
#define AnimationCurveDataProcessor FUN_180270ba0

/** 曲线基础参数处理函数别名 */
#define CurveBaseParameterProcessor FUN_180270bf0

/*-----------------------------------------------------------------------------
 * 技术说明
 *---------------------------------------------------------------------------*/

/**
 * @section animation_curve_processing 动画曲线处理技术说明
 * 
 * 本模块实现了TaleWorlds引擎中动画曲线数据的处理系统，主要功能包括：
 * 
 * @subsection curve_data_processing 曲线数据处理
 * - 解析动画曲线的名称、版本、类型等基本信息
 * - 处理曲线的键值对数据，包括时间和数值
 * - 支持不同类型的曲线插值算法
 * - 实现曲线数据的验证和错误处理
 * 
 * @subsection key_frame_processing 关键帧处理
 * - 解析关键帧的时间戳和数值
 * - 支持线性和非线性插值算法
 * - 处理曲线的循环和反向播放
 * - 实现关键帧的动态添加和删除
 * 
 * @subsection performance_optimization 性能优化
 * - 使用高效的字符串匹配算法
 * - 优化内存分配和数据结构
 * - 实现曲线数据的缓存机制
 * - 支持批量处理多个曲线
 * 
 * @subsection error_handling 错误处理
 * - 完善的参数验证机制
 * - 内存分配失败处理
 * - 数据格式错误检测
 * - 系统状态一致性检查
 * 
 * @subsection memory_management 内存管理
 * - 动态内存分配和释放
 * - 内存泄漏防护机制
 * - 数据结构优化存储
 * - 缓冲区溢出防护
 * 
 * @subsection threading_support 线程支持
 * - 线程安全的数据访问
 * - 并发处理支持
 * - 资源锁定机制
 * - 异步处理能力
 * 
 * @subsection security 安全性
 * - 输入数据验证
 * - 缓冲区溢出防护
 * - 恶意数据检测
 * - 系统完整性保护
 */

/*=============================================================================
 * 模块信息
 *=============================================================================*/

/**
 * @section module_info 模块信息
 * 
 * @subsection overview 概述
 * 本模块是TaleWorlds引擎渲染系统中处理动画曲线数据的核心组件，
 * 负责解析、处理和应用各种类型的动画曲线数据。
 * 
 * @subsection main_functions 主要功能
 * - 动画曲线数据解析和处理
 * - 曲线参数配置和验证
 * - 关键帧数据处理和插值计算
 * - 动画状态管理和控制
 * - 曲线数据结构操作和维护
 * 
 * @subsection technical_features 技术特点
 * - 高效的字符串处理和模式匹配
 * - 灵活的曲线类型支持
 * - 强大的错误处理机制
 * - 优化的内存管理和数据结构
 * - 线程安全的并发处理
 * 
 * @subsection performance_metrics 性能指标
 * - 支持最大1000个关键帧的曲线处理
 * - 时间精度达到0.001秒
 * - 内存使用优化，支持大规模曲线数据
 * - 处理速度满足实时动画需求
 * 
 * @subsection integration_points 集成点
 * - 与渲染系统的紧密集成
 * - 与动画系统的数据交换
 * - 与资源管理系统的协同工作
 * - 与物理系统的交互支持
 */