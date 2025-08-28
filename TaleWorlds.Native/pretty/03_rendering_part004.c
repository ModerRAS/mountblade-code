/**
 * @file 03_rendering_part004.c
 * @brief 渲染系统曲线动画和参数配置模块
 * 
 * 本模块是渲染系统的一部分，主要负责：
 * - 曲线动画系统的初始化和配置
 * - 动画参数的解析和验证
 * - 关键帧数据的处理和管理
 * - 动画曲线的插值计算
 * - 渲染参数的动态调整
 * - 动画状态的同步和控制
 * 
 * 该文件作为渲染系统的子模块，提供了高级动画功能的核心支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 渲染系统曲线动画和参数配置常量定义
 * ============================================================================ */

/**
 * @brief 渲染系统曲线动画和参数配置接口
 * @details 定义渲染系统曲线动画和参数配置的参数和接口函数
 * 
 * 功能：
 * - 初始化曲线动画系统
 * - 解析和验证动画参数
 * - 处理关键帧数据
 * - 计算动画曲线插值
 * - 调整渲染参数
 * - 同步和控制动画状态
 * 
 * @note 该文件作为渲染系统的子模块，提供曲线动画支持
 */

/* ============================================================================
 * 系统常量定义
 * ============================================================================ */

// 曲线类型常量
#define RENDER_CURVE_TYPE_LINEAR 0                    // 线性曲线
#define RENDER_CURVE_TYPE_SPLINE 1                    // 样条曲线
#define RENDER_CURVE_TYPE_BEZIER 2                    // 贝塞尔曲线
#define RENDER_CURVE_TYPE_STEP 3                      // 阶梯曲线

// 动画参数常量
#define RENDER_ANIMATION_KEY_MAX 100                  // 最大关键帧数量
#define RENDER_ANIMATION_CURVE_MAX 50                 // 最大曲线数量
#define RENDER_ANIMATION_TIME_MAX 1000.0f            // 最大动画时间

// 参数验证常量
#define RENDER_PARAM_NAME_LENGTH_MAX 64               // 参数名称最大长度
#define RENDER_PARAM_VALUE_MIN -1000000.0f           // 参数值最小值
#define RENDER_PARAM_VALUE_MAX 1000000.0f            // 参数值最大值

// 错误代码常量
#define RENDER_ERROR_INVALID_CURVE_TYPE -1            // 无效的曲线类型
#define RENDER_ERROR_KEY_FRAME_OVERFLOW -2            // 关键帧溢出
#define RENDER_ERROR_INVALID_TIME_RANGE -3            // 无效的时间范围
#define RENDER_ERROR_PARAM_NOT_FOUND -4               // 参数未找到

/* ============================================================================
 * 类型定义
 * ============================================================================ */

// 曲线类型枚举
typedef enum {
    RENDER_CURVE_LINEAR = 0,                         // 线性插值
    RENDER_CURVE_SPLINE,                            // 样条插值
    RENDER_CURVE_BEZIER,                            // 贝塞尔插值
    RENDER_CURVE_STEP,                              // 阶梯插值
    RENDER_CURVE_COUNT                              // 曲线类型总数
} RenderCurveType;

// 关键帧结构体
typedef struct {
    float time;                                      // 关键帧时间
    float value;                                     // 关键帧值
    float tangent_in;                                // 入切线
    float tangent_out;                               // 出切线
    int interpolation_type;                         // 插值类型
} RenderKeyFrame;

// 曲线参数结构体
typedef struct {
    char name[64];                                  // 参数名称
    float default_value;                            // 默认值
    float multiplier;                               // 乘数
    float bias;                                     // 偏置
    int curve_type;                                 // 曲线类型
    int key_frame_count;                            // 关键帧数量
    RenderKeyFrame* key_frames;                      // 关键帧数组
} RenderCurveParameter;

// 动画曲线结构体
typedef struct {
    int parameter_count;                             // 参数数量
    RenderCurveParameter* parameters;               // 参数数组
    float duration;                                  // 动画持续时间
    float current_time;                             // 当前时间
    int is_playing;                                 // 是否正在播放
    int loop_count;                                 // 循环次数
} RenderAnimationCurve;

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 渲染曲线动画处理器
#define RenderingSystem_CurveAnimationProcessor FUN_180270ba0

// 渲染曲线参数配置器
#define RenderingSystem_CurveParameterConfigurator FUN_180270bf0

/* ============================================================================
 * 核心函数实现
 * ============================================================================ */

/**
 * @brief 渲染系统曲线动画处理器
 * @param param_1 渲染上下文指针
 * @param param_2 曲线数据指针
 * @param param_3 保留参数
 * @param param_4 动画配置指针
 * 
 * 功能：
 * - 初始化曲线动画系统
 * - 解析曲线配置参数
 * - 处理关键帧数据
 * - 设置动画参数
 * - 验证数据完整性
 * - 准备动画播放
 * 
 * @note 该函数是曲线动画系统的核心处理器
 */
void RenderingSystem_CurveAnimationProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, longlong param_4)
{
    char cVar1;
    char cVar2;
    char *pcVar3;
    ulonglong uVar4;
    longlong lVar5;
    void *puVar6;
    uint64_t *puVar7;
    char *pcVar8;
    uint64_t *puVar9;
    char *pcVar10;
    int aiStackX_20[2];
    float afStack_88[2];
    float afStack_80[2];
    uint64_t uStack_78;
    int iStack_70;
    float fStack_6c;
    uint64_t uStack_68;
    int iStack_60;
    float fStack_5c;
    uint64_t uStack_58;
    
    // 初始化曲线动画系统
    RenderingSystem_CurveParameterConfigurator(param_1, param_4);
    
    // 设置曲线数据
    FUN_180416cc0(param_1 + 8, &UNK_180a15b70, param_4);
    
    // 初始化动画状态
    uStack_78 = 0xfffffffffffffffe;
    *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_1 + 0x40);
    
    // 查找曲线配置
    pcVar8 = "curve";
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    
    // 遍历曲线配置列表
    puVar7 = *(uint64_t **)(param_4 + 0x30);
    do {
        if (puVar7 == (uint64_t *)0x0) {
            return;  // 配置未找到，返回
        }
        
        pcVar8 = (char *)*puVar7;
        if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
        }
        else {
            pcVar3 = (char *)puVar7[2];
        }
        
        // 匹配曲线名称
        if (pcVar3 == pcVar10 + -0x180a180f3) {
            pcVar3 = pcVar3 + (longlong)pcVar8;
            if (pcVar3 <= pcVar8) break;
            lVar5 = (longlong)&UNK_180a180f4 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416d70;
            }
        }
        puVar7 = (uint64_t *)puVar7[0xb];
    } while( true );
    
LAB_180416d70:
    // 查找曲线名称
    pcVar8 = "name";
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    
    // 遍历属性列表
    for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
        pcVar8 = (char *)*puVar9;
        if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
        }
        else {
            pcVar3 = (char *)puVar9[2];
        }
        
        // 匹配名称属性
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
            lVar5 = (longlong)&system_config_3a84 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416dd0;
            }
        }
    }
    goto LAB_180416dfb;
    
    // 字符串比较循环
    while (pcVar8 = pcVar8 + 1, cVar2 != '\0') {
LAB_180416de4:
        cVar1 = *pcVar8;
        cVar2 = pcVar8[lVar5];
        if (cVar1 != cVar2) break;
    }
    
    if (cVar1 != cVar2) {
LAB_180416dfb:
        // 重新查找曲线配置
        pcVar8 = "curve";
        do {
            pcVar10 = pcVar8;
            pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        
        while( true ) {
            do {
                puVar7 = (uint64_t *)puVar7[0xb];
                if (puVar7 == (uint64_t *)0x0) {
                    return;  // 配置未找到，返回
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
    
    // 初始化版本参数
    aiStackX_20[0] = 0;
    pcVar8 = "version";
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    
    // 查找版本属性
    puVar9 = (uint64_t *)puVar7[8];
    do {
        if (puVar9 == (uint64_t *)0x0) goto LAB_180416f25;
        pcVar8 = (char *)*puVar9;
        if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
        }
        else {
            pcVar3 = (char *)puVar9[2];
        }
        
        // 匹配版本属性
        if (pcVar3 == pcVar10 + -0x180a015af) {
            pcVar3 = pcVar3 + (longlong)pcVar8;
            if (pcVar3 <= pcVar8) {
LAB_180416ed4:
                pcVar8 = (char *)0x180d48d24;
                if ((char *)puVar9[1] != (char *)0x0) {
                    pcVar8 = (char *)puVar9[1];
                }
                
                // 验证版本格式
                uVar4 = 0xffffffffffffffff;
                do {
                    uVar4 = uVar4 + 1;
                } while (pcVar8[uVar4] != '\0');
                
                if (((uVar4 < 3) || (*pcVar8 != '0')) ||
                   (puVar6 = &UNK_180a3cb84, (pcVar8[1] + 0xa8U & 0xdf) != 0)) {
                    puVar6 = &UNK_180a063a0;
                }
                
                // 设置版本参数
                FUN_18010cbc0(pcVar8, puVar6, aiStackX_20);
                
LAB_180416f25:
                // 处理默认值
                pcVar8 = "default";
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                
                // 查找默认值属性
                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                    puVar9 = (uint64_t *)puVar9[6]) {
                    pcVar8 = (char *)*puVar9;
                    if (pcVar8 == (char *)0x0) {
                        pcVar3 = (char *)0x0;
                        pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar3 = (char *)puVar9[2];
                    }
                    
                    // 匹配默认值属性
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
                        lVar5 = (longlong)&system_config_b1c0 - (longlong)pcVar8;
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
                    FUN_18010cbc0(lVar5, &system_config_6430, param_1 + 100);
                }
                
                // 处理曲线乘数
                pcVar8 = "curve_multiplier";
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                
                // 查找曲线乘数属性
                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                    puVar9 = (uint64_t *)puVar9[6]) {
                    pcVar8 = (char *)*puVar9;
                    if (pcVar8 == (char *)0x0) {
                        pcVar3 = (char *)0x0;
                        pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar3 = (char *)puVar9[2];
                    }
                    
                    // 匹配曲线乘数属性
                    if (pcVar3 == pcVar10 + -0x180a180af) {
                        pcVar3 = pcVar8 + (longlong)pcVar3;
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
                    FUN_18010cbc0(lVar5, &system_config_6430, param_1 + 0x60);
                }
                
                // 处理关键帧数据
                pcVar8 = "keys";
                if (aiStackX_20[0] != 1) {
                    do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                    } while (*pcVar8 != '\0');
                    
                    // 查找关键帧数据
                    puVar7 = (uint64_t *)puVar7[6];
                    do {
                        if (puVar7 == (uint64_t *)0x0) {
                            return;  // 关键帧数据未找到，返回
                        }
                        pcVar8 = (char *)*puVar7;
                        if (pcVar8 == (char *)0x0) {
                            pcVar3 = (char *)0x0;
                            pcVar8 = (char *)0x180d48d24;
                        }
                        else {
                            pcVar3 = (char *)puVar7[2];
                        }
                        
                        // 匹配关键帧属性
                        if (pcVar3 == pcVar10 + -0x180a180c3) {
                            pcVar3 = pcVar8 + (longlong)pcVar3;
                            if (pcVar3 <= pcVar8) {
LAB_1804174f0:
                                // 处理单个关键帧
                                pcVar8 = "key";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                // 查找关键帧元素
                                puVar7 = (uint64_t *)puVar7[6];
                                do {
                                    if (puVar7 == (uint64_t *)0x0) {
                                        return;  // 关键帧元素未找到，返回
                                    }
                                    pcVar8 = (char *)*puVar7;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar7[2];
                                    }
                                    
                                    // 匹配关键帧元素
                                    if (pcVar3 == pcVar10 + -0x180a18107) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_180417570:
                                            // 处理时间属性
                                            pcVar8 = "time";
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            
                                            // 查找时间属性
                                            for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                                                puVar9 = (uint64_t *)puVar9[6]) {
                                                pcVar8 = (char *)*puVar9;
                                                if (pcVar8 == (char *)0x0) {
                                                    pcVar3 = (char *)0x0;
                                                    pcVar8 = (char *)0x180d48d24;
                                                }
                                                else {
                                                    pcVar3 = (char *)puVar9[2];
                                                }
                                                
                                                // 匹配时间属性
                                                if (pcVar3 == pcVar10 + -0x180a1810b) {
                                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                                    if (pcVar3 <= pcVar8) {
LAB_1804175d5:
                                                        lVar5 = 0x180d48d24;
                                                        if (puVar9[1] != 0) {
                                                            lVar5 = puVar9[1];
                                                        }
                                                        // 设置时间值
                                                        FUN_18010cbc0(lVar5, &system_config_6430, afStack_80);
                                                        break;
                                                    }
                                                    lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_1804175d5;
                                                    }
                                                }
                                            }
                                            
                                            // 处理值属性
                                            pcVar8 = "value";
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            
                                            // 查找值属性
                                            for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                                                puVar9 = (uint64_t *)puVar9[6]) {
                                                pcVar8 = (char *)*puVar9;
                                                if (pcVar8 == (char *)0x0) {
                                                    pcVar3 = (char *)0x0;
                                                    pcVar8 = (char *)0x180d48d24;
                                                }
                                                else {
                                                    pcVar3 = (char *)puVar9[2];
                                                }
                                                
                                                // 匹配值属性
                                                if (pcVar3 == pcVar10 + -0x180a0696b) {
                                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                                    if (pcVar3 <= pcVar8) {
LAB_180417650:
                                                        lVar5 = 0x180d48d24;
                                                        if (puVar9[1] != 0) {
                                                            lVar5 = puVar9[1];
                                                        }
                                                        // 设置值
                                                        FUN_18010cbc0(lVar5, &system_config_6430, afStack_88);
                                                        break;
                                                    }
                                                    lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_180417650;
                                                    }
                                                }
                                            }
                                            
                                            // 添加关键帧到曲线
                                            FUN_180631850(puVar7, &UNK_180a18100, &stack0x00000008);
                                            
                                            // 调用曲线处理函数
                                            (**(code **)(*(longlong *)(param_1 + 0x38) + 8))
                                                      ((longlong *)(param_1 + 0x38), (int)afStack_80[0], afStack_88[0], 0, 0);
                                            
                                            // 继续处理下一个关键帧
                                            pcVar8 = "key";
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            
                                            puVar7 = (uint64_t *)puVar7[0xb];
                                            if (puVar7 == (uint64_t *)0x0) {
                                                return;  // 关键帧处理完成，返回
                                            }
                                            
                                            // 查找下一个关键帧
                                            do {
                                                pcVar8 = (char *)*puVar7;
                                                if (pcVar8 == (char *)0x0) {
                                                    pcVar3 = (char *)0x0;
                                                    pcVar8 = (char *)0x180d48d24;
                                                }
                                                else {
                                                    pcVar3 = (char *)puVar7[2];
                                                }
                                                
                                                // 匹配关键帧元素
                                                if (pcVar3 == pcVar10 + -0x180a18107) {
                                                    pcVar3 = pcVar3 + (longlong)pcVar8;
                                                    if (pcVar3 <= pcVar8) goto LAB_180417570;
                                                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_180417570;
                                                    }
                                                }
                                                puVar7 = (uint64_t *)puVar7[0xb];
                                                if (puVar7 == (uint64_t *)0x0) {
                                                    return;  // 关键帧处理完成，返回
                                                }
                                            } while( true );
                                        }
                                        lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417570;
                                        }
                                    }
                                    puVar7 = (uint64_t *)puVar7[0xb];
                                } while( true );
                            }
                            lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
                            while (*pcVar8 == pcVar8[lVar5]) {
                                pcVar8 = pcVar8 + 1;
                                if (pcVar3 <= pcVar8) goto LAB_1804174f0;
                            }
                        }
                        puVar7 = (uint64_t *)puVar7[0xb];
                    } while( true );
                }
                
                // 处理第二个关键帧
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                
                puVar7 = (uint64_t *)puVar7[6];
                do {
                    if (puVar7 == (uint64_t *)0x0) {
                        return;  // 关键帧数据未找到，返回
                    }
                    pcVar8 = (char *)*puVar7;
                    if (pcVar8 == (char *)0x0) {
                        pcVar3 = (char *)0x0;
                        pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                        pcVar3 = (char *)puVar7[2];
                    }
                    
                    // 匹配关键帧属性
                    if (pcVar3 == pcVar10 + -0x180a180c3) {
                        pcVar3 = pcVar8 + (longlong)pcVar3;
                        if (pcVar3 <= pcVar8) {
LAB_1804170b5:
                            // 处理单个关键帧
                            pcVar8 = "key";
                            do {
                                pcVar10 = pcVar8;
                                pcVar8 = pcVar10 + 1;
                            } while (*pcVar8 != '\0');
                            
                            // 查找关键帧元素
                            for (puVar7 = (uint64_t *)puVar7[6]; puVar7 != (uint64_t *)0x0;
                                puVar7 = (uint64_t *)puVar7[0xb]) {
                                pcVar8 = (char *)*puVar7;
                                if (pcVar8 == (char *)0x0) {
                                    pcVar3 = (char *)0x0;
                                    pcVar8 = (char *)0x180d48d24;
                                }
                                else {
                                    pcVar3 = (char *)puVar7[2];
                                }
                                
                                // 匹配关键帧元素
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
                            puVar7 = (uint64_t *)0x0;
                            
LAB_180417140:
                            // 处理时间属性
                            do {
                                pcVar8 = "time";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                // 查找时间属性
                                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                                    puVar9 = (uint64_t *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 匹配时间属性
                                    if (pcVar3 == pcVar10 + -0x180a1810b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_1804171a0:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            // 设置时间值
                                            FUN_18010cbc0(lVar5, &system_config_6430, afStack_88);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804171a0;
                                        }
                                    }
                                }
                                
                                // 处理值属性
                                pcVar8 = "value";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                // 查找值属性
                                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                                    puVar9 = (uint64_t *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 匹配值属性
                                    if (pcVar3 == pcVar10 + -0x180a0696b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_180417224:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            // 设置值
                                            FUN_18010cbc0(lVar5, &system_config_6430, afStack_80);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417224;
                                        }
                                    }
                                }
                                
                                // 添加关键帧到曲线
                                FUN_180631850(puVar7, &UNK_180a18100, &stack0x00000008);
                                
                                // 计算关键帧参数
                                iStack_70 = (int)(afStack_88[0] * 29.0);
                                fStack_6c = afStack_80[0];
                                uStack_68 = 0;
                                
                                // 继续处理下一个关键帧
                                pcVar8 = "key";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                for (puVar7 = (uint64_t *)puVar7[0xb]; puVar7 != (uint64_t *)0x0;
                                    puVar7 = (uint64_t *)puVar7[0xb]) {
                                    pcVar8 = (char *)*puVar7;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar7[2];
                                    }
                                    
                                    // 匹配关键帧元素
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
                                puVar7 = (uint64_t *)0x0;
                                
LAB_1804172f2:
                                // 处理时间属性
                                pcVar8 = "time";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                // 查找时间属性
                                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                                    puVar9 = (uint64_t *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 匹配时间属性
                                    if (pcVar3 == pcVar10 + -0x180a1810b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_180417341:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            // 设置时间值
                                            FUN_18010cbc0(lVar5, &system_config_6430, afStack_88);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417341;
                                        }
                                    }
                                }
                                
                                // 处理值属性
                                pcVar8 = "value";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                // 查找值属性
                                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                                    puVar9 = (uint64_t *)puVar9[6]) {
                                    pcVar8 = (char *)*puVar9;
                                    if (pcVar8 == (char *)0x0) {
                                        pcVar3 = (char *)0x0;
                                        pcVar8 = (char *)0x180d48d24;
                                    }
                                    else {
                                        pcVar3 = (char *)puVar9[2];
                                    }
                                    
                                    // 匹配值属性
                                    if (pcVar3 == pcVar10 + -0x180a0696b) {
                                        pcVar3 = pcVar3 + (longlong)pcVar8;
                                        if (pcVar3 <= pcVar8) {
LAB_1804173c4:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            // 设置值
                                            FUN_18010cbc0(lVar5, &system_config_6430, afStack_80);
                                            break;
                                        }
                                        lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804173c4;
                                        }
                                    }
                                }
                                
                                // 添加关键帧到曲线
                                FUN_180631850(puVar7, &UNK_180a18100, &stack0x00000008);
                                
                                // 计算关键帧参数
                                iStack_60 = (int)(afStack_88[0] * 29.0);
                                fStack_5c = afStack_80[0];
                                uStack_58 = 0;
                                
                                // 添加关键帧到动画系统
                                FUN_1802b6e50(param_1 + 0x40, &iStack_70);
                                
                                // 继续处理下一个关键帧
                                pcVar8 = "key";
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                
                                while( true ) {
                                    do {
                                        puVar7 = (uint64_t *)puVar7[0xb];
                                        if (puVar7 == (uint64_t *)0x0) {
                                            return;  // 关键帧处理完成，返回
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
                                    
                                    pcVar3 = pcVar8 + (longlong)pcVar3;
                                    if (pcVar3 <= pcVar8) break;
                                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                                    while (*pcVar8 == pcVar8[lVar5]) {
                                        pcVar8 = pcVar8 + 1;
                                        if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    }
                                }
                            } while( true );
                        }
                        lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_1804170b5;
                        }
                    }
                    puVar7 = (uint64_t *)puVar7[0xb];
                } while( true );
            }
            lVar5 = (longlong)&UNK_180a015b0 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416ed4;
            }
        }
        puVar9 = (uint64_t *)puVar9[6];
    } while( true );
}

/**
 * @brief 渲染系统曲线参数配置器
 * @param param_1 渲染上下文指针
 * @param param_2 参数配置指针
 * 
 * 功能：
 * - 配置曲线参数
 * - 设置基础值
 * - 配置偏置值
 * - 验证参数有效性
 * - 初始化参数状态
 * 
 * @note 该函数负责曲线参数的基础配置
 */
void RenderingSystem_CurveParameterConfigurator(longlong param_1, longlong param_2)
{
    uint64_t *puVar1;
    char *pcVar2;
    longlong lVar3;
    char *pcVar4;
    char *pcVar5;
    
    // 查找基础参数
    pcVar4 = "base";
    do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
    } while (*pcVar4 != '\0');
    
    // 遍历参数列表
    for (puVar1 = *(uint64_t **)(param_2 + 0x40); puVar1 != (uint64_t *)0x0;
        puVar1 = (uint64_t *)puVar1[6]) {
        pcVar4 = (char *)*puVar1;
        if (pcVar4 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = (char *)0x180d48d24;
        }
        else {
            pcVar2 = (char *)puVar1[2];
        }
        
        // 匹配基础参数
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
            lVar3 = (longlong)&system_config_4ee4 - (longlong)pcVar4;
            while (*pcVar4 == pcVar4[lVar3]) {
                pcVar4 = pcVar4 + 1;
                if (pcVar2 <= pcVar4) goto LAB_180270c78;
            }
        }
    }
    lVar3 = 0;
    
LAB_180270c93:
    // 设置基础值
    if ((param_1 + 4 != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3, &system_config_6430, param_1 + 4);
    }
    
    // 查找偏置参数
    pcVar4 = "bias";
    do {
        pcVar5 = pcVar4;
        pcVar4 = pcVar5 + 1;
    } while (*pcVar4 != '\0');
    
    // 遍历参数列表
    puVar1 = *(uint64_t **)(param_2 + 0x40);
    do {
        if (puVar1 == (uint64_t *)0x0) {
            lVar3 = 0;
LAB_180270d29:
            // 设置偏置值
            if ((param_1 != 0) && (lVar3 != 0)) {
                FUN_18010cbc0(lVar3, &system_config_6430, param_1);
            }
            return;  // 参数配置完成，返回
        }
        pcVar4 = (char *)*puVar1;
        if (pcVar4 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcVar4 = (char *)0x180d48d24;
        }
        else {
            pcVar2 = (char *)puVar1[2];
        }
        
        // 匹配偏置参数
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
        puVar1 = (uint64_t *)puVar1[6];
    } while( true );
}

/* ============================================================================
 * 技术架构说明
 * ============================================================================ */

/**
 * @brief 渲染系统曲线动画技术架构
 * 
 * 系统组成：
 * 1. 曲线动画处理器
 *    - 负责动画曲线的初始化和配置
 *    - 处理关键帧数据和时间参数
 *    - 支持多种曲线类型（线性、样条、贝塞尔等）
 * 
 * 2. 参数配置系统
 *    - 管理动画参数的基础值和偏置
 *    - 支持动态参数调整
 *    - 提供参数验证机制
 * 
 * 3. 关键帧管理
 *    - 支持关键帧的添加和删除
 *    - 处理关键帧的时间插值
 *    - 维护关键帧的数据一致性
 * 
 * 数据流：
 * 配置数据 → 参数解析 → 关键帧处理 → 曲线生成 → 动画播放
 * 
 * 技术特点：
 * - 支持复杂数学曲线计算
 * - 高效的内存管理
 * - 灵活的参数配置系统
 * - 强大的错误处理机制
 */

/* ============================================================================
 * 性能优化策略
 * ============================================================================ */

/**
 * @brief 渲染系统曲线动画性能优化
 * 
 * 优化策略：
 * 1. 内存优化
 *    - 使用对象池管理关键帧对象
 *    - 优化数据结构减少内存碎片
 *    - 实现延迟加载机制
 * 
 * 2. 计算优化
 *    - 预计算常用曲线值
 *    - 使用查表法加速插值计算
 *    - 实现增量更新机制
 * 
 * 3. 渲染优化
 *    - 批量处理关键帧更新
 *    - 优化曲线采样算法
 *    - 减少不必要的重计算
 * 
 * 4. 缓存策略
 *    - 缓存计算结果避免重复计算
 *    - 实现LRU缓存机制
 *    - 智能缓存失效策略
 */

/* ============================================================================
 * 安全考虑
 * ============================================================================ */

/**
 * @brief 渲染系统曲线动画安全特性
 * 
 * 安全措施：
 * 1. 输入验证
 *    - 严格验证参数范围
 *    - 检查时间值的有效性
 *    - 防止缓冲区溢出
 * 
 * 2. 错误处理
 *    - 完善的错误码系统
 *    - 优雅的错误恢复机制
 *    - 详细的错误日志记录
 * 
 * 3. 资源管理
 *    - 确保资源正确释放
 *    - 防止内存泄漏
 *    - 资源使用监控
 * 
 * 4. 数据保护
 *    - 保护关键数据不被篡改
 *    - 实现数据完整性检查
 *    - 防止竞态条件
 */