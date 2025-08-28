#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part076.c - UI系统高级动画控制和数据处理模块
// 包含6个核心函数，涵盖UI系统高级动画控制、参数处理、数据变换、状态管理、音频处理和初始化等功能

// 函数别名定义
#define ui_system_advanced_animation_processor FUN_18070fc68
#define ui_system_animation_parameter_handler FUN_18070fe0f
#define ui_system_empty_function_1 FUN_1807104af
#define ui_system_empty_function_2 FUN_1807104b7
#define ui_system_audio_data_processor FUN_180710510
#define ui_system_animation_initializer FUN_180710fc0

// UI系统常量定义
#define UI_ANIMATION_MAX_THRESHOLD 2.0         // UI动画最大阈值
#define UI_ANIMATION_MIN_THRESHOLD -2.0        // UI动画最小阈值
#define UI_ANIMATION_SCALE_FACTOR 1.0000002    // UI动画缩放因子
#define UI_ANIMATION_CLAMP_VALUE 1.0           // UI动画限制值
#define UI_AUDIO_BUFFER_SIZE 640               // UI音频缓冲区大小
#define UI_PARAMETER_MULTIPLIER 1000           // UI参数乘数
#define UI_MEMORY_ALIGNMENT 0x10               // UI内存对齐大小
#define UI_MAX_STREAM_COUNT 0xf                // UI最大流数量
#define UI_DATA_BLOCK_SIZE 0x430               // UI数据块大小
#define UI_OFFSET_960 0x960                    // UI偏移量960
#define UI_OFFSET_990 0x990                    // UI偏移量990
#define UI_OFFSET_10C0 0x10C0                  // UI偏移量10C0
#define UI_OFFSET_15C4 0x15C4                  // UI偏移量15C4
#define UI_OFFSET_1A40 0x1A40                  // UI偏移量1A40
#define UI_OFFSET_1A50 0x1A50                  // UI偏移量1A50
#define UI_OFFSET_2180 0x2180                  // UI偏移量2180
#define UI_OFFSET_2190 0x2190                  // UI偏移量2190
#define UI_OFFSET_2194 0x2194                  // UI偏移量2194

// UI系统数据结构定义
typedef struct {
    float* animation_data;          // 动画数据指针
    int animation_count;            // 动画数量
    float threshold_min;            // 最小阈值
    float threshold_max;            // 最大阈值
    float scale_factor;              // 缩放因子
    int stream_count;                // 流数量
    void* audio_buffer;              // 音频缓冲区
    int audio_buffer_size;          // 音频缓冲区大小
} ui_animation_processor_t;

typedef struct {
    int* parameter_data;            // 参数数据指针
    int parameter_count;            // 参数数量
    int parameter_type;             // 参数类型
    int parameter_flags;            // 参数标志
    void* resource_manager;         // 资源管理器
    int resource_count;             // 资源数量
} ui_parameter_handler_t;

typedef struct {
    void* audio_context;             // 音频上下文
    void* audio_stream;             // 音频流
    int audio_format;               // 音频格式
    int audio_channels;             // 音频通道数
    int audio_sample_rate;          // 音频采样率
    int audio_buffer_size;          // 音频缓冲区大小
    void* audio_callback;           // 音频回调函数
} ui_audio_processor_t;

typedef struct {
    void* initialization_data;      // 初始化数据
    int initialization_flags;       // 初始化标志
    int initialization_state;       // 初始化状态
    void* context_manager;          // 上下文管理器
    int context_count;              // 上下文数量
} ui_initializer_t;

// 函数: UI系统高级动画处理器
// 功能: 处理UI系统的高级动画控制、参数计算、状态管理和动画插值
// 参数: 
//   param_1 - UI上下文指针
//   param_2 - 动画参数数量
//   param_3 - 动画处理起始位置
// 返回值: 无
void ui_system_advanced_animation_processor(undefined8 param_1, uint param_2, int param_3)

{
    bool bVar1;
    undefined1 auVar2 [16];
    undefined1 auVar3 [16];
    int iVar4;
    undefined1 (*pauVar5) [16];
    uint uVar6;
    int iVar7;
    int iVar8;
    longlong lVar9;
    float *pfVar10;
    longlong lVar11;
    float *pfVar12;
    int iVar13;
    longlong lVar14;
    longlong lVar15;
    int iVar16;
    ulonglong uVar17;
    int iVar18;
    float *in_R10;
    longlong in_R11;
    longlong lVar19;
    int unaff_R13D;
    int iVar20;
    longlong unaff_R14;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    undefined1 auVar26 [16];
    float *in_stack_000000c8;
    
    auVar3 = _DAT_180a401b0;  // 动画最大阈值常量
    auVar2 = _DAT_18094ed40;  // 动画最小阈值常量
    if (0 < (int)param_2) {
        // 批量处理动画数据
        if (0xf < param_2) {
            uVar6 = param_2 & 0x8000000f;
            if ((int)uVar6 < 0) {
                uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
            }
            lVar9 = 0;
            pauVar5 = (undefined1 (*) [16])(in_R11 + 0x20);
            do {
                param_3 = param_3 + 0x10;
                // 应用最小最大阈值限制
                auVar26 = minps(auVar3,pauVar5[-2]);
                lVar9 = lVar9 + 0x10;
                auVar26 = maxps(auVar2,auVar26);
                pauVar5[-2] = auVar26;
                auVar26 = minps(auVar3,pauVar5[-1]);
                auVar26 = maxps(auVar2,auVar26);
                pauVar5[-1] = auVar26;
                auVar26 = minps(auVar3,*pauVar5);
                auVar26 = maxps(auVar2,auVar26);
                *pauVar5 = auVar26;
                auVar26 = minps(auVar3,pauVar5[1]);
                auVar26 = maxps(auVar2,auVar26);
                pauVar5[1] = auVar26;
                pauVar5 = pauVar5 + 4;
            } while (lVar9 < (int)(param_2 - uVar6));
        }
        // 处理剩余的动画数据
        if (param_3 < (int)param_2) {
            if (3 < (int)(param_2 - param_3)) {
                uVar6 = ((param_2 - param_3) - 4 >> 2) + 1;
                pfVar10 = (float *)(in_R11 + ((longlong)param_3 + 2) * 4);
                uVar17 = (ulonglong)uVar6;
                param_3 = param_3 + uVar6 * 4;
                do {
                    // 限制动画值在阈值范围内
                    fVar23 = pfVar10[-2];
                    if (UI_ANIMATION_MAX_THRESHOLD <= fVar23) {
                        fVar23 = UI_ANIMATION_MAX_THRESHOLD;
                    }
                    if (fVar23 < UI_ANIMATION_MIN_THRESHOLD) {
                        fVar23 = UI_ANIMATION_MIN_THRESHOLD;
                    }
                    fVar21 = pfVar10[-1];
                    if (UI_ANIMATION_MAX_THRESHOLD <= fVar21) {
                        fVar21 = UI_ANIMATION_MAX_THRESHOLD;
                    }
                    pfVar10[-2] = fVar23;
                    if (fVar21 < UI_ANIMATION_MIN_THRESHOLD) {
                        fVar21 = UI_ANIMATION_MIN_THRESHOLD;
                    }
                    fVar23 = *pfVar10;
                    if (UI_ANIMATION_MAX_THRESHOLD <= fVar23) {
                        fVar23 = UI_ANIMATION_MAX_THRESHOLD;
                    }
                    pfVar10[-1] = fVar21;
                    if (fVar23 < UI_ANIMATION_MIN_THRESHOLD) {
                        fVar23 = UI_ANIMATION_MIN_THRESHOLD;
                    }
                    *pfVar10 = fVar23;
                    fVar23 = pfVar10[1];
                    if (UI_ANIMATION_MAX_THRESHOLD <= fVar23) {
                        fVar23 = UI_ANIMATION_MAX_THRESHOLD;
                    }
                    if (fVar23 < UI_ANIMATION_MIN_THRESHOLD) {
                        fVar23 = UI_ANIMATION_MIN_THRESHOLD;
                    }
                    pfVar10[1] = fVar23;
                    pfVar10 = pfVar10 + 4;
                    uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
            }
            // 处理单个动画值
            if (param_3 < (int)param_2) {
                pfVar10 = (float *)(in_R11 + (longlong)param_3 * 4);
                lVar9 = (longlong)(int)(param_2 - param_3);
                do {
                    fVar23 = *pfVar10;
                    if (UI_ANIMATION_MAX_THRESHOLD <= fVar23) {
                        fVar23 = UI_ANIMATION_MAX_THRESHOLD;
                    }
                    if (fVar23 < UI_ANIMATION_MIN_THRESHOLD) {
                        fVar23 = UI_ANIMATION_MIN_THRESHOLD;
                    }
                    *pfVar10 = fVar23;
                    pfVar10 = pfVar10 + 1;
                    lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
            }
        }
    }
    // 处理动画插值和状态更新
    iVar20 = (int)unaff_R14;
    if (0 < iVar20) {
        lVar19 = in_R11 - (longlong)in_R10;
        lVar9 = unaff_R14;
        do {
            fVar23 = *in_R10;
            pfVar10 = (float *)(lVar19 + (longlong)in_R10);
            iVar7 = 0;
            if (3 < unaff_R13D) {
                iVar13 = iVar20 * 2;
                do {
                    iVar4 = iVar20 * -2 + iVar13;
                    fVar21 = pfVar10[iVar4] * fVar23;
                    if (0.0 <= fVar21) goto LAB_18070ff9b;
                    pfVar10[iVar4] = (fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar10[iVar4];
                    fVar21 = pfVar10[iVar13 - iVar20] * fVar23;
                    if (0.0 <= fVar21) goto LAB_18070ff9b;
                    pfVar10[iVar13 - iVar20] = (fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar10[iVar13 - iVar20];
                    fVar21 = pfVar10[iVar13] * fVar23;
                    if (0.0 <= fVar21) goto LAB_18070ff9b;
                    pfVar10[iVar13] = (fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar10[iVar13];
                    iVar4 = iVar13 + iVar20;
                    fVar21 = pfVar10[iVar4] * fVar23;
                    if (0.0 <= fVar21) goto LAB_18070ff9b;
                    iVar7 = iVar7 + 4;
                    iVar13 = iVar13 + iVar20 * 4;
                    pfVar10[iVar4] = (fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar10[iVar4];
                } while (iVar7 < unaff_R13D + -3);
            }
            if (iVar7 < unaff_R13D) {
                iVar13 = iVar7 * iVar20;
                do {
                    fVar21 = pfVar10[iVar13] * fVar23;
                    if (0.0 <= fVar21) break;
                    iVar7 = iVar7 + 1;
                    pfVar10[iVar13] = (fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar10[iVar13];
                    iVar13 = iVar13 + iVar20;
                } while (iVar7 < unaff_R13D);
            }
LAB_18070ff9b:
            fVar23 = *pfVar10;
            iVar7 = 0;
            do {
                iVar13 = iVar7;
                if (iVar7 < unaff_R13D) {
                    if (3 < unaff_R13D - iVar7) {
                        iVar18 = iVar7 - (iVar7 + 2);
                        iVar4 = (iVar7 + 2) * iVar20;
                        do {
                            if ((UI_ANIMATION_CLAMP_VALUE < pfVar10[iVar18 * iVar20 + iVar4]) ||
                               (pfVar10[iVar18 * iVar20 + iVar4] < -UI_ANIMATION_CLAMP_VALUE)) goto LAB_1807100a5;
                            if ((UI_ANIMATION_CLAMP_VALUE < pfVar10[(iVar18 + 1) * iVar20 + iVar4]) ||
                               (pfVar10[(iVar18 + 1) * iVar20 + iVar4] < -UI_ANIMATION_CLAMP_VALUE)) {
                                iVar13 = iVar13 + 1;
                                goto LAB_1807100a5;
                            }
                            if ((UI_ANIMATION_CLAMP_VALUE < pfVar10[iVar4]) || (pfVar10[iVar4] < -UI_ANIMATION_CLAMP_VALUE)) {
                                iVar13 = iVar13 + 2;
                                goto LAB_1807100a5;
                            }
                            if ((UI_ANIMATION_CLAMP_VALUE < pfVar10[(iVar18 + 3) * iVar20 + iVar4]) ||
                               (pfVar10[(iVar18 + 3) * iVar20 + iVar4] < -UI_ANIMATION_CLAMP_VALUE)) {
                                iVar13 = iVar13 + 3;
                                goto LAB_1807100a5;
                            }
                            iVar13 = iVar13 + 4;
                            iVar4 = iVar4 + iVar20 * 4;
                        } while (iVar13 < unaff_R13D + -3);
                    }
                    if (iVar13 < unaff_R13D) {
                        iVar4 = iVar13 * iVar20;
                        do {
                            if ((UI_ANIMATION_CLAMP_VALUE < pfVar10[iVar4]) || (pfVar10[iVar4] < -UI_ANIMATION_CLAMP_VALUE)) break;
                            iVar13 = iVar13 + 1;
                            iVar4 = iVar4 + iVar20;
                        } while (iVar13 < unaff_R13D);
                    }
                }
LAB_1807100a5:
                if (iVar13 == unaff_R13D) {
                    fVar21 = 0.0;
                    break;
                }
                iVar4 = iVar13 * iVar20;
                fVar25 = pfVar10[iVar4];
                fVar21 = ABS(fVar25);
                iVar18 = iVar13;
                iVar16 = iVar13;
                if (0 < iVar13) {
                    iVar8 = (iVar13 + -1) * iVar20;
                    do {
                        if (fVar25 * pfVar10[iVar8] < 0.0) break;
                        iVar16 = iVar16 + -1;
                        iVar8 = iVar8 - iVar20;
                    } while (0 < iVar16);
                }
                while ((iVar8 = iVar18, iVar18 = iVar13, iVar18 < unaff_R13D &&
                       (0.0 <= fVar25 * pfVar10[iVar4]))) {
                    fVar24 = ABS(pfVar10[iVar4]);
                    fVar22 = fVar21;
                    if (fVar21 < fVar24) {
                        fVar22 = fVar24;
                    }
                    iVar4 = iVar4 + iVar20;
                    bVar1 = fVar24 <= fVar21;
                    fVar21 = fVar22;
                    iVar13 = iVar18 + 1;
                    if (bVar1) {
                        iVar18 = iVar8;
                    }
                }
                if ((iVar16 != 0) || (fVar25 * *pfVar10 < 0.0)) {
                    bVar1 = false;
                }
                else {
                    bVar1 = true;
                }
                fVar22 = (fVar21 - UI_ANIMATION_CLAMP_VALUE) / (fVar21 * fVar21);
                fVar21 = fVar22 * UI_ANIMATION_SCALE_FACTOR;
                if (0.0 < fVar25) {
                    fVar21 = fVar22 * -UI_ANIMATION_SCALE_FACTOR;
                }
                if (iVar16 < iVar18) {
                    if (3 < iVar18 - iVar16) {
                        lVar11 = (longlong)((iVar16 + 2) * iVar20);
                        pfVar12 = pfVar10 + lVar11;
                        lVar14 = (iVar16 + 1) * iVar20 - lVar11;
                        lVar15 = (iVar16 + 3) * iVar20 - lVar11;
                        lVar11 = iVar16 * iVar20 - lVar11;
                        uVar6 = ((iVar18 - iVar16) - 4U >> 2) + 1;
                        uVar17 = (ulonglong)uVar6;
                        iVar16 = iVar16 + uVar6 * 4;
                        do {
                            pfVar12[lVar11] = (pfVar12[lVar11] * fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar12[lVar11];
                            pfVar12[lVar14] = (pfVar12[lVar14] * fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar12[lVar14];
                            *pfVar12 = (fVar21 * *pfVar12 + UI_ANIMATION_CLAMP_VALUE) * *pfVar12;
                            pfVar12[lVar15] = (pfVar12[lVar15] * fVar21 + UI_ANIMATION_CLAMP_VALUE) * pfVar12[lVar15];
                            pfVar12 = pfVar12 + iVar20 * 4;
                            uVar17 = uVar17 - 1;
                        } while (uVar17 != 0);
                    }
                    if (iVar16 < iVar18) {
                        pfVar12 = pfVar10 + iVar16 * iVar20;
                        lVar11 = (longlong)(iVar18 - iVar16);
                        do {
                            *pfVar12 = (*pfVar12 * fVar21 + UI_ANIMATION_CLAMP_VALUE) * *pfVar12;
                            pfVar12 = pfVar12 + unaff_R14;
                            lVar11 = lVar11 + -1;
                        } while (lVar11 != 0);
                    }
                }
                if ((bVar1) && (1 < iVar8)) {
                    fVar25 = fVar23 - *pfVar10;
                    fVar22 = fVar25 / (float)iVar8;
                    if (iVar7 < iVar8) {
                        if (3 < iVar8 - iVar7) {
                            lVar11 = (longlong)((iVar7 + 2) * iVar20);
                            pfVar12 = pfVar10 + lVar11;
                            lVar14 = (iVar7 + 1) * iVar20 - lVar11;
                            lVar15 = (iVar7 + 3) * iVar20 - lVar11;
                            lVar11 = iVar7 * iVar20 - lVar11;
                            uVar6 = ((iVar8 - iVar7) - 4U >> 2) + 1;
                            uVar17 = (ulonglong)uVar6;
                            iVar7 = iVar7 + uVar6 * 4;
                            do {
                                fVar24 = (fVar25 - fVar22) + pfVar12[lVar11];
                                if (UI_ANIMATION_CLAMP_VALUE <= fVar24) {
                                    fVar24 = UI_ANIMATION_CLAMP_VALUE;
                                }
                                if (fVar24 < -UI_ANIMATION_CLAMP_VALUE) {
                                    fVar24 = -UI_ANIMATION_CLAMP_VALUE;
                                }
                                pfVar12[lVar11] = fVar24;
                                fVar25 = (fVar25 - fVar22) - fVar22;
                                fVar24 = fVar25 + pfVar12[lVar14];
                                if (UI_ANIMATION_CLAMP_VALUE <= fVar24) {
                                    fVar24 = UI_ANIMATION_CLAMP_VALUE;
                                }
                                if (fVar24 < -UI_ANIMATION_CLAMP_VALUE) {
                                    fVar24 = -UI_ANIMATION_CLAMP_VALUE;
                                }
                                pfVar12[lVar14] = fVar24;
                                fVar25 = fVar25 - fVar22;
                                fVar24 = fVar25 + *pfVar12;
                                if (UI_ANIMATION_CLAMP_VALUE <= fVar24) {
                                    fVar24 = UI_ANIMATION_CLAMP_VALUE;
                                }
                                if (fVar24 < -UI_ANIMATION_CLAMP_VALUE) {
                                    fVar24 = -UI_ANIMATION_CLAMP_VALUE;
                                }
                                *pfVar12 = fVar24;
                                fVar25 = fVar25 - fVar22;
                                fVar24 = fVar25 + pfVar12[lVar15];
                                if (UI_ANIMATION_CLAMP_VALUE <= fVar25 + pfVar12[lVar15]) {
                                    fVar24 = UI_ANIMATION_CLAMP_VALUE;
                                }
                                if (fVar24 < -UI_ANIMATION_CLAMP_VALUE) {
                                    fVar24 = -UI_ANIMATION_CLAMP_VALUE;
                                }
                                pfVar12[lVar15] = fVar24;
                                pfVar12 = pfVar12 + iVar20 * 4;
                                uVar17 = uVar17 - 1;
                            } while (uVar17 != 0);
                        }
                        if (iVar7 < iVar8) {
                            pfVar12 = pfVar10 + iVar7 * iVar20;
                            lVar11 = (longlong)(iVar8 - iVar7);
                            do {
                                fVar25 = fVar25 - fVar22;
                                fVar24 = fVar25 + *pfVar12;
                                if (UI_ANIMATION_CLAMP_VALUE <= fVar25 + *pfVar12) {
                                    fVar24 = UI_ANIMATION_CLAMP_VALUE;
                                }
                                if (fVar24 < -UI_ANIMATION_CLAMP_VALUE) {
                                    fVar24 = -UI_ANIMATION_CLAMP_VALUE;
                                }
                                *pfVar12 = fVar24;
                                pfVar12 = pfVar12 + unaff_R14;
                                lVar11 = lVar11 + -1;
                            } while (lVar11 != 0);
                        }
                    }
                }
                iVar7 = iVar18;
            } while (iVar18 != unaff_R13D);
            *in_stack_000000c8 = fVar21;
            in_R10 = in_stack_000000c8 + 1;
            lVar9 = lVar9 + -1;
            in_stack_000000c8 = in_R10;
        } while (lVar9 != 0);
    }
    return;
}



// 函数: UI系统动画参数处理器
// 功能: 处理UI系统动画参数的高级计算、状态管理和数据变换
// 参数: 无（使用寄存器传递参数）
// 返回值: 无
void ui_system_animation_parameter_handler(void)

{
    float *pfVar1;
    float fVar2;
    bool bVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    longlong lVar8;
    ulonglong uVar9;
    float *pfVar10;
    int iVar11;
    longlong lVar12;
    longlong unaff_RBP;
    longlong lVar13;
    int iVar14;
    int iVar15;
    float *in_R10;
    longlong in_R11;
    int unaff_R13D;
    int iVar16;
    longlong unaff_R14;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float in_XMM3_Da;
    float in_XMM4_Da;
    longlong lVar21;
    float *in_stack_000000c8;
    
    lVar21 = unaff_R14;
    do {
        fVar2 = *in_R10;
        pfVar1 = (float *)(in_R11 + (longlong)in_R10);
        iVar6 = 0;
        iVar16 = (int)unaff_R14;
        if (3 < unaff_R13D) {
            iVar11 = iVar16 * 2;
            do {
                iVar4 = iVar16 * -2 + iVar11;
                fVar17 = pfVar1[iVar4] * fVar2;
                if (0.0 <= fVar17) goto LAB_18070ff9b;
                pfVar1[iVar4] = (fVar17 + in_XMM4_Da) * pfVar1[iVar4];
                fVar17 = pfVar1[iVar11 - iVar16] * fVar2;
                if (0.0 <= fVar17) goto LAB_18070ff9b;
                pfVar1[iVar11 - iVar16] = (fVar17 + in_XMM4_Da) * pfVar1[iVar11 - iVar16];
                fVar17 = pfVar1[iVar11] * fVar2;
                if (0.0 <= fVar17) goto LAB_18070ff9b;
                pfVar1[iVar11] = (fVar17 + in_XMM4_Da) * pfVar1[iVar11];
                iVar4 = iVar11 + iVar16;
                fVar17 = pfVar1[iVar4] * fVar2;
                if (0.0 <= fVar17) goto LAB_18070ff9b;
                iVar6 = iVar6 + 4;
                iVar11 = iVar11 + iVar16 * 4;
                pfVar1[iVar4] = (fVar17 + in_XMM4_Da) * pfVar1[iVar4];
            } while (iVar6 < unaff_R13D + -3);
        }
        if (iVar6 < unaff_R13D) {
            iVar11 = iVar6 * iVar16;
            do {
                fVar17 = pfVar1[iVar11] * fVar2;
                if (0.0 <= fVar17) break;
                iVar6 = iVar6 + 1;
                pfVar1[iVar11] = (fVar17 + in_XMM4_Da) * pfVar1[iVar11];
                iVar11 = iVar11 + iVar16;
            } while (iVar6 < unaff_R13D);
        }
LAB_18070ff9b:
        fVar2 = *pfVar1;
        iVar6 = 0;
        do {
            iVar11 = iVar6;
            if (iVar6 < unaff_R13D) {
                if (3 < unaff_R13D - iVar6) {
                    iVar15 = iVar6 - (iVar6 + 2);
                    iVar4 = (iVar6 + 2) * iVar16;
                    do {
                        if ((in_XMM4_Da < pfVar1[iVar15 * iVar16 + iVar4]) ||
                           (pfVar1[iVar15 * iVar16 + iVar4] < in_XMM3_Da)) goto LAB_1807100a5;
                        if ((in_XMM4_Da < pfVar1[(iVar15 + 1) * iVar16 + iVar4]) ||
                           (pfVar1[(iVar15 + 1) * iVar16 + iVar4] < in_XMM3_Da)) {
                            iVar11 = iVar11 + 1;
                            goto LAB_1807100a5;
                        }
                        if ((in_XMM4_Da < pfVar1[iVar4]) || (pfVar1[iVar4] < in_XMM3_Da)) {
                            iVar11 = iVar11 + 2;
                            goto LAB_1807100a5;
                        }
                        if ((in_XMM4_Da < pfVar1[(iVar15 + 3) * iVar16 + iVar4]) ||
                           (pfVar1[(iVar15 + 3) * iVar16 + iVar4] < in_XMM3_Da)) {
                            iVar11 = iVar11 + 3;
                            goto LAB_1807100a5;
                        }
                        iVar11 = iVar11 + 4;
                        iVar4 = iVar4 + iVar16 * 4;
                    } while (iVar11 < unaff_R13D + -3);
                }
                if (iVar11 < unaff_R13D) {
                    iVar4 = iVar11 * iVar16;
                    do {
                        if ((in_XMM4_Da < pfVar1[iVar4]) || (pfVar1[iVar4] < in_XMM3_Da)) break;
                        iVar11 = iVar11 + 1;
                        iVar4 = iVar4 + iVar16;
                    } while (iVar11 < unaff_R13D);
                }
            }
LAB_1807100a5:
            if (iVar11 == unaff_R13D) {
                fVar17 = 0.0;
                break;
            }
            iVar4 = iVar11 * iVar16;
            fVar20 = pfVar1[iVar4];
            fVar17 = ABS(fVar20);
            iVar15 = iVar11;
            iVar14 = iVar11;
            if (0 < iVar11) {
                iVar7 = (iVar11 + -1) * iVar16;
                do {
                    if (fVar20 * pfVar1[iVar7] < 0.0) break;
                    iVar14 = iVar14 + -1;
                    iVar7 = iVar7 - iVar16;
                } while (0 < iVar14);
            }
            while ((iVar7 = iVar15, iVar15 = iVar11, iVar15 < unaff_R13D &&
                   (0.0 <= fVar20 * pfVar1[iVar4]))) {
                fVar19 = ABS(pfVar1[iVar4]);
                fVar18 = fVar17;
                if (fVar17 < fVar19) {
                    fVar18 = fVar19;
                }
                iVar4 = iVar4 + iVar16;
                bVar3 = fVar19 <= fVar17;
                fVar17 = fVar18;
                iVar11 = iVar15 + 1;
                if (bVar3) {
                    iVar15 = iVar7;
                }
            }
            if ((iVar14 != 0) || (fVar20 * *pfVar1 < 0.0)) {
                bVar3 = false;
            }
            else {
                bVar3 = true;
            }
            fVar18 = (fVar17 - in_XMM4_Da) / (fVar17 * fVar17);
            fVar17 = fVar18 * UI_ANIMATION_SCALE_FACTOR;
            if (0.0 < fVar20) {
                fVar17 = fVar18 * -UI_ANIMATION_SCALE_FACTOR;
            }
            if (iVar14 < iVar15) {
                if (3 < iVar15 - iVar14) {
                    lVar8 = (longlong)((iVar14 + 2) * iVar16);
                    pfVar10 = pfVar1 + lVar8;
                    lVar12 = (iVar14 + 1) * iVar16 - lVar8;
                    lVar13 = (iVar14 + 3) * iVar16 - lVar8;
                    lVar8 = iVar14 * iVar16 - lVar8;
                    uVar5 = ((iVar15 - iVar14) - 4U >> 2) + 1;
                    uVar9 = (ulonglong)uVar5;
                    iVar14 = iVar14 + uVar5 * 4;
                    do {
                        pfVar10[lVar8] = (pfVar10[lVar8] * fVar17 + in_XMM4_Da) * pfVar10[lVar8];
                        pfVar10[lVar12] = (pfVar10[lVar12] * fVar17 + in_XMM4_Da) * pfVar10[lVar12];
                        *pfVar10 = (fVar17 * *pfVar10 + in_XMM4_Da) * *pfVar10;
                        pfVar10[lVar13] = (pfVar10[lVar13] * fVar17 + in_XMM4_Da) * pfVar10[lVar13];
                        pfVar10 = pfVar10 + iVar16 * 4;
                        uVar9 = uVar9 - 1;
                        unaff_RBP = unaff_R14;
                    } while (uVar9 != 0);
                }
                if (iVar14 < iVar15) {
                    pfVar10 = pfVar1 + iVar14 * iVar16;
                    lVar8 = (longlong)(iVar15 - iVar14);
                    do {
                        *pfVar10 = (*pfVar10 * fVar17 + in_XMM4_Da) * *pfVar10;
                        pfVar10 = pfVar10 + unaff_RBP;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
            }
            if ((bVar3) && (1 < iVar7)) {
                fVar20 = fVar2 - *pfVar1;
                fVar18 = fVar20 / (float)iVar7;
                if (iVar6 < iVar7) {
                    if (3 < iVar7 - iVar6) {
                        lVar8 = (longlong)((iVar6 + 2) * iVar16);
                        pfVar10 = pfVar1 + lVar8;
                        lVar12 = (iVar6 + 1) * iVar16 - lVar8;
                        lVar13 = (iVar6 + 3) * iVar16 - lVar8;
                        lVar8 = iVar6 * iVar16 - lVar8;
                        uVar5 = ((iVar7 - iVar6) - 4U >> 2) + 1;
                        uVar9 = (ulonglong)uVar5;
                        iVar6 = iVar6 + uVar5 * 4;
                        do {
                            fVar19 = (fVar20 - fVar18) + pfVar10[lVar8];
                            if (in_XMM4_Da <= fVar19) {
                                fVar19 = in_XMM4_Da;
                            }
                            if (fVar19 < in_XMM3_Da) {
                                fVar19 = in_XMM3_Da;
                            }
                            pfVar10[lVar8] = fVar19;
                            fVar20 = (fVar20 - fVar18) - fVar18;
                            fVar19 = fVar20 + pfVar10[lVar12];
                            if (in_XMM4_Da <= fVar19) {
                                fVar19 = in_XMM4_Da;
                            }
                            if (fVar19 < in_XMM3_Da) {
                                fVar19 = in_XMM3_Da;
                            }
                            pfVar10[lVar12] = fVar19;
                            fVar20 = fVar20 - fVar18;
                            fVar19 = fVar20 + *pfVar10;
                            if (in_XMM4_Da <= fVar19) {
                                fVar19 = in_XMM4_Da;
                            }
                            if (fVar19 < in_XMM3_Da) {
                                fVar19 = in_XMM3_Da;
                            }
                            *pfVar10 = fVar19;
                            fVar20 = fVar20 - fVar18;
                            fVar19 = fVar20 + pfVar10[lVar13];
                            if (in_XMM4_Da <= fVar20 + pfVar10[lVar13]) {
                                fVar19 = in_XMM4_Da;
                            }
                            if (fVar19 < in_XMM3_Da) {
                                fVar19 = in_XMM3_Da;
                            }
                            pfVar10[lVar13] = fVar19;
                            pfVar10 = pfVar10 + iVar16 * 4;
                            uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                    }
                    if (iVar6 < iVar7) {
                        pfVar10 = pfVar1 + iVar6 * iVar16;
                        lVar8 = (longlong)(iVar7 - iVar6);
                        do {
                            fVar20 = fVar20 - fVar18;
                            fVar19 = fVar20 + *pfVar10;
                            if (in_XMM4_Da <= fVar20 + *pfVar10) {
                                fVar19 = in_XMM4_Da;
                            }
                            if (fVar19 < in_XMM3_Da) {
                                fVar19 = in_XMM3_Da;
                            }
                            *pfVar10 = fVar19;
                            pfVar10 = pfVar10 + unaff_RBP;
                            lVar8 = lVar8 + -1;
                        } while (lVar8 != 0);
                    }
                }
            }
            iVar6 = iVar15;
        } while (iVar15 != unaff_R13D);
        *in_stack_000000c8 = fVar17;
        in_R10 = in_stack_000000c8 + 1;
        lVar21 = lVar21 + -1;
        in_stack_000000c8 = in_R10;
        if (lVar21 == 0) {
            return;
        }
    } while( true );
}



// 函数: UI系统空函数1
// 功能: 空函数，作为占位符使用
// 参数: 无
// 返回值: 无
void ui_system_empty_function_1(void)

{
    return;
}



// 函数: UI系统空函数2
// 功能: 空函数，作为占位符使用
// 参数: 无
// 返回值: 无
void ui_system_empty_function_2(void)

{
    return;
}



// 函数: UI系统音频数据处理器
// 功能: 处理UI系统音频数据的高级处理、参数管理和资源控制
// 参数: 
//   param_1 - UI上下文指针
//   param_2 - 音频参数数组
//   param_3 - 音频处理类型
//   param_4 - 音频标志位
//   param_5 - 音频资源管理器
//   param_6 - 音频数据指针
//   param_7 - 音频配置参数
// 返回值: 无
void ui_system_audio_data_processor(longlong param_1, int *param_2, int param_3, int param_4, undefined8 param_5,
                                  undefined8 param_6, undefined8 param_7)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    int iVar11;
    int iVar12;
    undefined4 *puVar13;
    undefined8 *puVar14;
    byte bVar15;
    int iVar16;
    undefined8 *puVar17;
    longlong lVar18;
    ulonglong uVar19;
    int *piVar20;
    int *piVar21;
    char *pcVar22;
    int iVar23;
    int *piVar24;
    uint *puVar25;
    int iVar26;
    int iStack_338;
    int iStack_334;
    int iStack_32c;
    int *piStack_328;
    longlong lStack_320;
    undefined8 uStack_318;
    undefined8 uStack_310;
    int iStack_308;
    undefined4 uStack_304;
    undefined8 uStack_300;
    int iStack_2e8;
    undefined8 uStack_2e0;
    undefined1 auStack_2c8 [UI_AUDIO_BUFFER_SIZE];
    ulonglong uStack_48;
    
    uStack_48 = _DAT_180bf00a8 ^ (ulonglong)&iStack_338;
    iVar26 = 0;
    uStack_310 = param_6;
    uStack_2e0 = param_7;
    uStack_318 = param_5;
    iStack_32c = 0;
    iStack_338 = 0;
    uStack_300 = 0;
    iVar12 = 0;
    if ((param_4 != 0) && (0 < param_2[1])) {
        puVar13 = (undefined4 *)(param_1 + UI_OFFSET_960);
        iVar16 = iVar26;
        do {
            *puVar13 = 0;
            puVar13 = puVar13 + UI_DATA_BLOCK_SIZE;
            iVar16 = iVar16 + 1;
        } while (iVar16 < param_2[1]);
    }
    iVar16 = param_2[1];
    iStack_334 = param_3;
    piStack_328 = param_2;
    lStack_320 = param_1;
    if (*(int *)(param_1 + UI_OFFSET_2190) < iVar16) {
        iStack_338 = FUN_1807224d0(param_1 + UI_OFFSET_10C0);
        iVar16 = param_2[1];
    }
    if (((iVar16 != 1) || (*(int *)(param_1 + UI_OFFSET_2190) != 2)) ||
       (uStack_304 = 1, param_2[3] != *(int *)(param_1 + UI_OFFSET_90C) * UI_PARAMETER_MULTIPLIER)) {
        uStack_304 = 0;
    }
    piVar21 = (int *)(param_1 + UI_OFFSET_960);
    if ((*piVar21 == 0) && (0 < iVar16)) {
        puVar13 = (undefined4 *)(param_1 + UI_OFFSET_914);
        iVar23 = iVar26;
        do {
            iVar16 = param_2[4];
            if ((iVar16 == 0) || (iVar16 == 10)) {
                *puVar13 = 2;
LAB_18071066b:
                puVar13[0x14] = 1;
            }
            else {
                if (iVar16 == 0x14) {
                    *puVar13 = 4;
                    goto LAB_18071066b;
                }
                if (iVar16 == 0x28) {
                    puVar13[0x14] = 2;
                    *puVar13 = 4;
                }
                else {
                    if (iVar16 != 0x3c) goto LAB_180710f7f;
                    puVar13[0x14] = 3;
                    *puVar13 = 4;
                }
            }
            iVar16 = (param_2[3] >> 10) + 1;
            if ((((param_2[3] >> 10) - 7U & 0xfffffff3) != 0) || (iVar16 == 0x14)) goto LAB_180710f7f;
            iVar16 = FUN_180722540((longlong)iVar23 * UI_OFFSET_10C0 + param_1,iVar16,param_2[2]);
            iStack_338 = iStack_338 + iVar16;
            iVar23 = iVar23 + 1;
            iVar16 = param_2[1];
            puVar13 = puVar13 + UI_DATA_BLOCK_SIZE;
            param_3 = iStack_334;
        } while (iVar23 < iVar16);
    }
    piVar24 = piStack_328;
    iVar23 = *param_2;
    if (((iVar23 == 2) && (iVar16 == 2)) &&
       ((*(int *)(param_1 + UI_OFFSET_218C) == 1 || (*(int *)(param_1 + UI_OFFSET_2190) == 1)))) {
        *(undefined4 *)(param_1 + UI_OFFSET_2180) = 0;
        lVar18 = 2;
        *(undefined4 *)(param_1 + UI_OFFSET_2188) = 0;
        puVar9 = (undefined8 *)(param_1 + UI_OFFSET_1A50);
        puVar10 = (undefined8 *)(param_1 + UI_OFFSET_990);
        do {
            puVar17 = puVar10;
            puVar14 = puVar9;
            uVar5 = puVar17[1];
            uVar6 = puVar17[2];
            uVar7 = puVar17[3];
            *puVar14 = *puVar17;
            puVar14[1] = uVar5;
            uVar5 = puVar17[4];
            uVar8 = puVar17[5];
            puVar14[2] = uVar6;
            puVar14[3] = uVar7;
            uVar6 = puVar17[6];
            uVar7 = puVar17[7];
            puVar14[4] = uVar5;
            puVar14[5] = uVar8;
            uVar5 = puVar17[8];
            uVar8 = puVar17[9];
            puVar14[6] = uVar6;
            puVar14[7] = uVar7;
            uVar6 = puVar17[10];
            uVar7 = puVar17[0xb];
            puVar14[8] = uVar5;
            puVar14[9] = uVar8;
            uVar5 = puVar17[0xc];
            uVar8 = puVar17[0xd];
            puVar14[10] = uVar6;
            puVar14[0xb] = uVar7;
            uVar6 = puVar17[0xe];
            uVar7 = puVar17[0xf];
            puVar14[0xc] = uVar5;
            puVar14[0xd] = uVar8;
            puVar14[0xe] = uVar6;
            puVar14[0xf] = uVar7;
            lVar18 = lVar18 + -1;
            puVar9 = puVar14 + 0x10;
            puVar10 = puVar17 + 0x10;
        } while (lVar18 != 0);
        uVar5 = puVar17[0x11];
        uVar6 = puVar17[0x12];
        uVar7 = puVar17[0x13];
        puVar14[0x10] = puVar17[0x10];
        puVar14[0x11] = uVar5;
        uVar1 = *(undefined4 *)(puVar17 + 0x14);
        uVar2 = *(undefined4 *)((longlong)puVar17 + 0xa4);
        uVar3 = *(undefined4 *)(puVar17 + 0x15);
        uVar4 = *(undefined4 *)((longlong)puVar17 + 0xac);
        puVar14[0x12] = uVar6;
        puVar14[0x13] = uVar7;
        *(undefined4 *)(puVar14 + 0x14) = uVar1;
        *(undefined4 *)((longlong)puVar14 + 0xa4) = uVar2;
        *(undefined4 *)(puVar14 + 0x15) = uVar3;
        *(undefined4 *)((longlong)puVar14 + 0xac) = uVar4;
        iVar23 = *param_2;
    }
    *(int *)(param_1 + UI_OFFSET_218C) = iVar23;
    *(int *)(param_1 + UI_OFFSET_2190) = param_2[1];
    if (40000 < param_2[2] - 8000U) {
LAB_180710f7f:
                    // WARNING: Subroutine does not return
        FUN_1808fc050(uStack_48 ^ (ulonglong)&iStack_338);
    }
    if ((param_3 != 1) && (*piVar21 == 0)) {
        iVar16 = param_2[1];
        if (0 < iVar16) {
            piVar21 = (int *)(param_1 + UI_OFFSET_964);
            iVar23 = iVar26;
            do {
                if (0 < *piVar21) {
                    piVar20 = piVar21 + 3;
                    iVar16 = iVar26;
                    do {
                        iVar11 = FUN_18070f310(param_5,1);
                        *piVar20 = iVar11;
                        piVar20 = piVar20 + 1;
                        iVar16 = iVar16 + 1;
                    } while (iVar16 < *piVar21);
                }
                iVar16 = FUN_18070f310(param_5,1);
                piVar21[6] = iVar16;
                iVar23 = iVar23 + 1;
                iVar16 = piVar24[1];
                piVar21 = piVar21 + UI_DATA_BLOCK_SIZE;
                param_2 = piStack_328;
                param_1 = lStack_320;
                param_3 = iStack_334;
            } while (iVar23 < iVar16);
        }
        if (0 < iVar16) {
            piVar21 = (int *)(param_1 + UI_OFFSET_964);
            iVar23 = iVar26;
            do {
                *(undefined8 *)((longlong)iVar23 * UI_OFFSET_10C0 + UI_OFFSET_980 + param_1) = 0;
                *(undefined4 *)((longlong)iVar23 * UI_OFFSET_10C0 + UI_OFFSET_988 + param_1) = 0;
                if (piVar21[6] != 0) {
                    if (*piVar21 == 1) {
                        piVar21[7] = 1;
                    }
                    else {
                        iVar16 = FUN_18070f3e0(param_5,*(undefined8 *)(&UNK_180953620 + (longlong)*piVar21 * 8),
                                       8);
                        if (0 < *piVar21) {
                            puVar25 = (uint *)(piVar21 + 7);
                            iVar11 = iVar26;
                            do {
                                bVar15 = (byte)iVar11;
                                iVar11 = iVar11 + 1;
                                *puVar25 = iVar16 + 1 >> (bVar15 & 0x1f) & 1;
                                puVar25 = puVar25 + 1;
                            } while (iVar11 < *piVar21);
                        }
                    }
                }
                iVar16 = param_2[1];
                iVar23 = iVar23 + 1;
                piVar21 = piVar21 + UI_DATA_BLOCK_SIZE;
                param_3 = iStack_334;
            } while (iVar23 < iVar16);
        }
        if ((param_3 == 0) && (0 < *(int *)(param_1 + UI_OFFSET_964))) {
            piVar21 = (int *)(param_1 + UI_OFFSET_1A40);
            iVar23 = iVar26;
            do {
                if (iVar16 < 1) {
                    iVar16 = param_2[1];
                }
                else {
                    pcVar22 = (char *)(param_1 + 0xae6);
                    piVar24 = piVar21 + -0x431;
                    iVar11 = iVar26;
                    do {
                        if (piVar24[1] != 0) {
                            if (((iVar16 == 2) && (iVar11 == 0)) &&
                               (FUN_180722370(uStack_318,&uStack_300), *piVar21 == 0)) {
                                FUN_180722340(uStack_318,&iStack_32c);
                            }
                            if ((iVar23 < 1) || (iVar16 = 2, *piVar24 == 0)) {
                                iVar16 = iVar12;
                            }
                            FUN_180722910((longlong)iVar11 * UI_OFFSET_10C0 + param_1,uStack_318,iVar23,1,iVar16);
                            FUN_180722cf0(uStack_318,auStack_2c8,(int)pcVar22[-1],(int)*pcVar22,
                                          *(undefined4 *)(pcVar22 + -0x1ce));
                            iVar16 = piStack_328[1];
                        }
                        iVar11 = iVar11 + 1;
                        piVar24 = piVar24 + UI_DATA_BLOCK_SIZE;
                        pcVar22 = pcVar22 + UI_OFFSET_10C0;
                        param_2 = piStack_328;
                    } while (iVar11 < iVar16);
                }
                iVar23 = iVar23 + 1;
                piVar21 = piVar21 + 1;
                param_5 = uStack_318;
                param_3 = iStack_334;
            } while (iVar23 < *(int *)(param_1 + UI_OFFSET_964));
        }
        piVar21 = (int *)(param_1 + UI_OFFSET_960);
    }
    if (param_2[1] != 2) goto LAB_180710a34;
    if ((param_3 != 0) &&
       ((param_3 != 2 || (*(int *)(param_1 + UI_OFFSET_980 + (longlong)*piVar21 * 4) != 1)))) {
        uStack_300 = CONCAT44((int)*(short *)(param_1 + UI_OFFSET_2182),(int)*(short *)(param_1 + UI_OFFSET_2180));
        goto LAB_180710a34;
    }
    FUN_180722370(param_5,&uStack_300);
    if (param_3 == 0) {
        iVar26 = *(int *)(param_1 + UI_OFFSET_1A30 + (longlong)*piVar21 * 4);
joined_r0x000180710ac6:
        if (iVar26 == 0) {
            FUN_180722340(param_5,&iStack_32c);
            goto LAB_180710a34;
        }
    }
    else if (param_3 == 2) {
        iVar26 = *(int *)(param_1 + UI_OFFSET_1A40 + (longlong)*piVar21 * 4);
        goto joined_r0x000180710ac6;
    }
    iStack_32c = 0;
LAB_180710a34:
    iVar26 = param_2[1];
    if (((iVar26 == 2) && (iStack_32c == 0)) && (*(int *)(param_1 + UI_OFFSET_2194) == 1)) {
                    // WARNING: Subroutine does not return
        memset(param_1 + UI_OFFSET_15C4,0,0x400);
    }
    iStack_2e8 = param_2[3] * iVar26;
    iStack_308 = param_2[2] * *param_2;
    if (iStack_308 <= iStack_2e8) {
        iVar12 = (*(int *)(param_1 + UI_OFFSET_918) + 2) * iVar26;
    }
    uVar19 = (longlong)iVar12 * 2 + 0xf;
    if (uVar19 <= (ulonglong)((longlong)iVar12 * 2)) {
        uVar19 = 0xffffffffffffff0;
    }
                    // WARNING: Subroutine does not return
    FUN_1808fd200(iVar26,uVar19 & 0xfffffffffffffff0);
}



// 函数: UI系统动画初始化器
// 功能: 初始化UI系统动画数据、状态管理和资源清理
// 参数: 
//   param_1 - UI上下文指针
// 返回值: 无
void ui_system_animation_initializer(longlong param_1)

{
    longlong lVar1;
    
    lVar1 = 2;
    do {
        FUN_1807224d0();
        lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    *(undefined8 *)(param_1 + UI_OFFSET_2180) = 0;
    *(undefined4 *)(param_1 + UI_OFFSET_2188) = 0;
    *(undefined4 *)(param_1 + UI_OFFSET_2194) = 0;
    return;
}