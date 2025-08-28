#include "TaleWorlds.Native.Split.h"
// 03_rendering_part005.c - 渲染系统动画曲线处理器
// 本文件实现了游戏引擎中的动画曲线处理和参数解析系统。
// 主要功能包括：
// - 动画曲线的版本识别和兼容性处理
// - 曲线参数的解析和转换
// - 关键帧数据的提取和处理
// - 动画插值算法的支持
// 技术特点：
// - 支持多种曲线格式的解析
// - 提供曲线乘数器和默认值设置
// - 实现关键帧的时间-值对处理
// - 支持动画数据的批量处理
// ==================== 常量定义 ====================
// 曲线处理相关常量
#define CURVE_VERSION_MIN_LENGTH      3           // 曲线版本号最小长度
#define CURVE_TIME_SCALE_FACTOR       29.0        // 时间缩放因子
#define CURVE_DEFAULT_MULTIPLIER     1.0         // 默认曲线乘数
#define CURVE_KEY_FRAME_COUNT        2           // 关键帧数量
// 内存管理常量
#define MEMORY_BLOCK_SIZE            0x1c68      // 内存块大小
#define MEMORY_ALIGNMENT_MASK        0xfffffffffffffffe  // 内存对齐掩码
// 字符串常量
#define CURVE_NAME_STRING            "curve"     // 曲线名称
#define CURVE_VERSION_STRING         "version"   // 版本字符串
#define CURVE_DEFAULT_STRING         "default"   // 默认值字符串
#define CURVE_MULTIPLIER_STRING      "curve_multiplier"  // 曲线乘数
#define CURVE_KEYS_STRING            "keys"      // 关键字
#define CURVE_KEY_STRING             "key"       // 键
#define CURVE_TIME_STRING            "time"      // 时间
#define CURVE_VALUE_STRING           "value"     // 值
// 错误码定义
#define CURVE_PARSE_ERROR            -1          // 解析错误
#define CURVE_VERSION_ERROR          -2          // 版本错误
#define CURVE_KEY_FRAME_ERROR        -3          // 关键帧错误
// ==================== 类型定义 ====================
// 动画曲线数据结构
typedef struct {
    uint64_t* data_ptr;              // 数据指针
    int version;                     // 版本号
    float multiplier;                // 乘数
    char* name;                      // 曲线名称
    uint64_t key_count;              // 关键帧数量
} AnimationCurve;
// 关键帧数据结构
typedef struct {
    float time;                      // 时间值
    float value;                     // 数值
    int scaled_time;                 // 缩放后的时间
} KeyFrame;
// 曲线处理器上下文
typedef struct {
    AnimationCurve* curve;           // 当前曲线
    KeyFrame* key_frames;            // 关键帧数组
    uint64_t frame_count;            // 帧计数
    float time_scale;                // 时间缩放
} CurveProcessorContext;
// 内存管理结构
typedef struct {
    uint64_t* memory_block;          // 内存块
    uint64_t block_size;             // 块大小
    uint64_t alignment_mask;         // 对齐掩码
} MemoryManager;
// ==================== 函数别名定义 ====================
// 原始函数：function_270d70
// 功能：动画曲线参数解析器和处理器
// 作用：解析动画曲线的参数，包括版本、乘数、关键帧等，并进行相应的处理
#define animation_curve_parameter_parser function_270d70
// 原始函数：function_270dd0
// 功能：曲线数据内存管理器
// 作用：管理曲线数据的内存分配和释放
#define curve_data_memory_manager function_270dd0
// 原始函数：function_270bf0
// 功能：曲线初始化器
// 作用：初始化曲线数据结构
#define curve_initializer function_270bf0
// 原始函数：AdvancedSystemOptimizer
// 功能：字符串转换器
// 作用：将字符串转换为数值或其他格式
#define string_converter AdvancedSystemOptimizer
// 原始函数：SystemManager_Controller
// 功能：数据提取器
// 作用：从数据结构中提取特定信息
#define data_extractor SystemManager_Controller
// 原始函数：function_2b6e50
// 功能：关键帧处理器
// 作用：处理关键帧数据，进行插值计算
#define key_frame_processor function_2b6e50
// 原始函数：function_270e30
// 功能：内存清理器
// 作用：清理内存数据结构
#define memory_cleaner function_270e30
// ==================== 全局变量 ====================
// 默认值常量
static const float DEFAULT_CURVE_MULTIPLIER = 1.0f;
static const int DEFAULT_KEY_FRAME_COUNT = 2;
static const float TIME_SCALE_FACTOR = 29.0f;
// 版本检测常量
static const char* VERSION_PREFIX = "0";
static const char* VERSION_SEPARATOR = ".";
// ==================== 函数实现 ====================
/**
 * 动画曲线参数解析器和处理器
 *
 * 本函数是动画曲线系统的核心处理器，负责解析和动画曲线相关的各种参数。
 * 主要处理流程：
 * 1. 初始化曲线数据结构
 * 2. 解析曲线版本信息
 * 3. 处理曲线乘数和默认值
 * 4. 提取和处理关键帧数据
 * 5. 支持不同版本的兼容性处理
 *
 * @param param_1 曲线数据结构指针
 * @param param_2 配置参数指针
 * @param param_3 动画数据容器指针
 *
 * 技术细节：
 * - 使用字符串匹配算法识别曲线参数
 * - 支持动态内存管理
 * - 实现版本兼容性检查
 * - 提供关键帧数据的批量处理
 */
void animation_curve_parameter_parser(int64_t param_1, int64_t param_2, int64_t param_3)
{
// 局部变量声明
    char cVar1;
    char cVar2;
    char *pcVar3;
    uint64_t uVar4;
    int64_t lVar5;
    void *puVar6;
    uint64_t *puVar7;
    char *pcVar8;
    uint64_t *puVar9;
    char *pcVar10;
// 关键帧数据数组
    int aiStackX_20[2];              // 版本信息数组
    float afStack_88[2];              // 时间值数组
    float afStack_80[2];              // 数值数组
// 栈变量
    uint64_t local_var_78;               // 栈数据
    int iStack_70;                    // 整型栈变量
    float fStack_6c;                  // 浮点栈变量
    uint64_t local_var_68;               // 栈数据
    int iStack_60;                    // 整型栈变量
    float fStack_5c;                  // 浮点栈变量
    uint64_t local_var_58;               // 栈数据
// 初始化曲线数据
    curve_initializer(param_1, param_3);
    local_var_78 = MEMORY_ALIGNMENT_MASK;
    *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_1 + 0x10);
// 解析曲线名称
    pcVar8 = CURVE_NAME_STRING;
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
// 查找曲线数据
    puVar7 = *(uint64_t **)(param_3 + 0x30);
    do {
        if (puVar7 == (uint64_t *)0x0) {
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
// 匹配曲线名称
        if (pcVar3 == pcVar10 + -0x180a180f3) {
            pcVar3 = pcVar3 + (int64_t)pcVar8;
            if (pcVar3 <= pcVar8) break;
            lVar5 = (int64_t)&processed_var_5252_ptr - (int64_t)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416d70;
            }
        }
        puVar7 = (uint64_t *)puVar7[0xb];
    } while( true );
LAB_180416d70:
// 解析名称属性
    pcVar8 = CURVE_NAME_STRING;
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
// 查找名称数据
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
// 匹配名称
        if (pcVar3 == pcVar10 + -0x180a03a83) {
            pcVar3 = pcVar8 + (int64_t)pcVar3;
            if (pcVar3 <= pcVar8) {
            LAB_180416dd0:
                pcVar8 = (char *)0x180d48d24;
                if ((char *)puVar9[1] != (char *)0x0) {
                    pcVar8 = (char *)puVar9[1];
                }
                lVar5 = param_2 - (int64_t)pcVar8;
                goto LAB_180416de4;
            }
            lVar5 = (int64_t)&system_memory_3a84 - (int64_t)pcVar8;
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
// 重新查找曲线
        pcVar8 = CURVE_NAME_STRING;
        do {
            pcVar10 = pcVar8;
            pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        while( true ) {
            do {
                puVar7 = (uint64_t *)puVar7[0xb];
                if (puVar7 == (uint64_t *)0x0) {
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
            pcVar3 = pcVar3 + (int64_t)pcVar8;
            if (pcVar3 <= pcVar8) break;
            lVar5 = (int64_t)&processed_var_5252_ptr - (int64_t)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416d70;
            }
        }
        goto LAB_180416d70;
    }
// 解析版本信息
    aiStackX_20[0] = 0;
    pcVar8 = CURVE_VERSION_STRING;
    do {
        pcVar10 = pcVar8;
        pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
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
// 匹配版本字符串
        if (pcVar3 == pcVar10 + -0x180a015af) {
            pcVar3 = pcVar3 + (int64_t)pcVar8;
            if (pcVar3 <= pcVar8) {
            LAB_180416ed4:
                pcVar8 = (char *)0x180d48d24;
                if ((char *)puVar9[1] != (char *)0x0) {
                    pcVar8 = (char *)puVar9[1];
                }
// 版本号验证
                uVar4 = 0xffffffffffffffff;
                do {
                    uVar4 = uVar4 + 1;
                } while (pcVar8[uVar4] != '\0');
// 检查版本格式
                if (((uVar4 < CURVE_VERSION_MIN_LENGTH) || (*pcVar8 != '0')) ||
                   (puVar6 = &processed_var_5412_ptr, (pcVar8[1] + 0xa8U & 0xdf) != 0)) {
                    puVar6 = &rendering_buffer_2208_ptr;
                }
// 转换版本号
                string_converter(pcVar8, puVar6, aiStackX_20);
            LAB_180416f25:
// 解析默认值
                pcVar8 = CURVE_DEFAULT_STRING;
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
// 查找默认值数据
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
// 匹配默认值
                    if (pcVar3 == pcVar10 + -0x180a0b1bf) {
                        pcVar3 = pcVar8 + (int64_t)pcVar3;
                        if (pcVar3 <= pcVar8) {
                        LAB_180416f88:
                            lVar5 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                                lVar5 = puVar9[1];
                            }
                            goto LAB_180416fa0;
                        }
                        lVar5 = (int64_t)&system_memory_b1c0 - (int64_t)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_180416f88;
                        }
                    }
                }
                lVar5 = 0;
            LAB_180416fa0:
// 设置默认值
                if ((param_1 + 0x34 != 0) && (lVar5 != 0)) {
                    string_converter(lVar5, &system_memory_6430, param_1 + 0x34);
                }
// 解析曲线乘数
                pcVar8 = CURVE_MULTIPLIER_STRING;
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
// 查找乘数数据
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
// 匹配乘数
                    if (pcVar3 == pcVar10 + -0x180a180af) {
                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                        if (pcVar3 <= pcVar8) {
                        LAB_180417020:
                            lVar5 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                                lVar5 = puVar9[1];
                            }
                            goto LAB_180417038;
                        }
                        lVar5 = (int64_t)&processed_var_5184_ptr - (int64_t)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_180417020;
                        }
                    }
                }
                lVar5 = 0;
            LAB_180417038:
// 设置乘数值
                if ((param_1 + 0x30 != 0) && (lVar5 != 0)) {
                    string_converter(lVar5, &system_memory_6430, param_1 + 0x30);
                }
// 解析关键帧数据
                pcVar8 = CURVE_KEYS_STRING;
                if (aiStackX_20[0] != 1) {
                    do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                    } while (*pcVar8 != '\0');
                    puVar7 = (uint64_t *)puVar7[6];
                    do {
                        if (puVar7 == (uint64_t *)0x0) {
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
// 匹配关键帧
                        if (pcVar3 == pcVar10 + -0x180a180c3) {
                            pcVar3 = pcVar8 + (int64_t)pcVar3;
                            if (pcVar3 <= pcVar8) {
                            LAB_1804174f0:
// 处理关键帧
                                pcVar8 = CURVE_KEY_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                puVar7 = (uint64_t *)puVar7[6];
                                do {
                                    if (puVar7 == (uint64_t *)0x0) {
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
// 匹配键
                                    if (pcVar3 == pcVar10 + -0x180a18107) {
                                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                                        if (pcVar3 <= pcVar8) {
                                        LAB_180417570:
// 解析时间值
                                            pcVar8 = CURVE_TIME_STRING;
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
// 查找时间数据
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
// 匹配时间
                                                if (pcVar3 == pcVar10 + -0x180a1810b) {
                                                    pcVar3 = pcVar3 + (int64_t)pcVar8;
                                                    if (pcVar3 <= pcVar8) {
                                                    LAB_1804175d5:
                                                        lVar5 = 0x180d48d24;
                                                        if (puVar9[1] != 0) {
                                                            lVar5 = puVar9[1];
                                                        }
                                                        string_converter(lVar5, &system_memory_6430, afStack_80);
                                                        break;
                                                    }
                                                    lVar5 = (int64_t)&processed_var_5276_ptr - (int64_t)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_1804175d5;
                                                    }
                                                }
                                            }
// 解析数值
                                            pcVar8 = CURVE_VALUE_STRING;
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
// 查找数值数据
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
// 匹配数值
                                                if (pcVar3 == pcVar10 + -0x180a0696b) {
                                                    pcVar3 = pcVar3 + (int64_t)pcVar8;
                                                    if (pcVar3 <= pcVar8) {
                                                    LAB_180417650:
                                                        lVar5 = 0x180d48d24;
                                                        if (puVar9[1] != 0) {
                                                            lVar5 = puVar9[1];
                                                        }
                                                        string_converter(lVar5, &system_memory_6430, afStack_88);
                                                        break;
                                                    }
                                                    lVar5 = (int64_t)&memory_allocator_3692_ptr - (int64_t)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_180417650;
                                                    }
                                                }
                                            }
// 处理关键帧数据
                                            data_extractor(puVar7, &processed_var_5264_ptr, &local_buffer_00000008);
                                            (**(code **)(*(int64_t *)(param_1 + 8) + 8))
                                                      ((int64_t *)(param_1 + 8), (int)afStack_80[0], afStack_88[0], 0, 0);
// 继续处理下一个关键帧
                                            pcVar8 = CURVE_KEY_STRING;
                                            do {
                                                pcVar10 = pcVar8;
                                                pcVar8 = pcVar10 + 1;
                                            } while (*pcVar8 != '\0');
                                            puVar7 = (uint64_t *)puVar7[0xb];
                                            if (puVar7 == (uint64_t *)0x0) {
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
                                                    pcVar3 = pcVar3 + (int64_t)pcVar8;
                                                    if (pcVar3 <= pcVar8) goto LAB_180417570;
                                                    lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar8;
                                                    while (*pcVar8 == pcVar8[lVar5]) {
                                                        pcVar8 = pcVar8 + 1;
                                                        if (pcVar3 <= pcVar8) goto LAB_180417570;
                                                    }
                                                }
                                                puVar7 = (uint64_t *)puVar7[0xb];
                                                if (puVar7 == (uint64_t *)0x0) {
                                                    return;
                                                }
                                            } while( true );
                                        }
                                        lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417570;
                                        }
                                    }
                                    puVar7 = (uint64_t *)puVar7[0xb];
                                } while( true );
                            }
                            lVar5 = (int64_t)&processed_var_5204_ptr - (int64_t)pcVar8;
                            while (*pcVar8 == pcVar8[lVar5]) {
                                pcVar8 = pcVar8 + 1;
                                if (pcVar3 <= pcVar8) goto LAB_1804174f0;
                            }
                        }
                        puVar7 = (uint64_t *)puVar7[0xb];
                    } while( true );
                }
// 处理版本1的关键帧数据
                do {
                    pcVar10 = pcVar8;
                    pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                puVar7 = (uint64_t *)puVar7[6];
                do {
                    if (puVar7 == (uint64_t *)0x0) {
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
// 匹配关键帧
                    if (pcVar3 == pcVar10 + -0x180a180c3) {
                        pcVar3 = pcVar8 + (int64_t)pcVar3;
                        if (pcVar3 <= pcVar8) {
                        LAB_1804170b5:
// 处理版本1的关键帧
                            pcVar8 = CURVE_KEY_STRING;
                            do {
                                pcVar10 = pcVar8;
                                pcVar8 = pcVar10 + 1;
                            } while (*pcVar8 != '\0');
// 查找关键帧数据
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
// 匹配键
                                if (pcVar3 == pcVar10 + -0x180a18107) {
                                    pcVar3 = pcVar3 + (int64_t)pcVar8;
                                    if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar8;
                                    while (*pcVar8 == pcVar8[lVar5]) {
                                        pcVar8 = pcVar8 + 1;
                                        if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    }
                                }
                            }
                            puVar7 = (uint64_t *)0x0;
                        LAB_180417140:
// 解析关键帧时间
                            do {
                                pcVar8 = CURVE_TIME_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
// 查找时间数据
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
// 匹配时间
                                    if (pcVar3 == pcVar10 + -0x180a1810b) {
                                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                                        if (pcVar3 <= pcVar8) {
                                        LAB_1804171a0:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            string_converter(lVar5, &system_memory_6430, afStack_88);
                                            break;
                                        }
                                        lVar5 = (int64_t)&processed_var_5276_ptr - (int64_t)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804171a0;
                                        }
                                    }
                                }
// 解析关键帧数值
                                pcVar8 = CURVE_VALUE_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
// 查找数值数据
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
// 匹配数值
                                    if (pcVar3 == pcVar10 + -0x180a0696b) {
                                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                                        if (pcVar3 <= pcVar8) {
                                        LAB_180417224:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            string_converter(lVar5, &system_memory_6430, afStack_80);
                                            break;
                                        }
                                        lVar5 = (int64_t)&memory_allocator_3692_ptr - (int64_t)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417224;
                                        }
                                    }
                                }
// 处理关键帧数据
                                data_extractor(puVar7, &processed_var_5264_ptr, &local_buffer_00000008);
                                iStack_70 = (int)(afStack_88[0] * TIME_SCALE_FACTOR);
                                fStack_6c = afStack_80[0];
                                local_var_68 = 0;
// 继续处理下一个关键帧
                                pcVar8 = CURVE_KEY_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
// 查找下一个关键帧
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
// 匹配键
                                    if (pcVar3 == pcVar10 + -0x180a18107) {
                                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                                        if (pcVar3 <= pcVar8) goto LAB_1804172f2;
                                        lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804172f2;
                                        }
                                    }
                                }
                                puVar7 = (uint64_t *)0x0;
                            LAB_1804172f2:
// 解析第二个关键帧的时间
                                pcVar8 = CURVE_TIME_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
// 查找时间数据
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
// 匹配时间
                                    if (pcVar3 == pcVar10 + -0x180a1810b) {
                                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                                        if (pcVar3 <= pcVar8) {
                                        LAB_180417341:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            string_converter(lVar5, &system_memory_6430, afStack_88);
                                            break;
                                        }
                                        lVar5 = (int64_t)&processed_var_5276_ptr - (int64_t)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_180417341;
                                        }
                                    }
                                }
// 解析第二个关键帧的数值
                                pcVar8 = CURVE_VALUE_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
// 查找数值数据
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
// 匹配数值
                                    if (pcVar3 == pcVar10 + -0x180a0696b) {
                                        pcVar3 = pcVar3 + (int64_t)pcVar8;
                                        if (pcVar3 <= pcVar8) {
                                        LAB_1804173c4:
                                            lVar5 = 0x180d48d24;
                                            if (puVar9[1] != 0) {
                                                lVar5 = puVar9[1];
                                            }
                                            string_converter(lVar5, &system_memory_6430, afStack_80);
                                            break;
                                        }
                                        lVar5 = (int64_t)&memory_allocator_3692_ptr - (int64_t)pcVar8;
                                        while (*pcVar8 == pcVar8[lVar5]) {
                                            pcVar8 = pcVar8 + 1;
                                            if (pcVar3 <= pcVar8) goto LAB_1804173c4;
                                        }
                                    }
                                }
// 处理第二个关键帧数据
                                data_extractor(puVar7, &processed_var_5264_ptr, &local_buffer_00000008);
                                iStack_60 = (int)(afStack_88[0] * TIME_SCALE_FACTOR);
                                fStack_5c = afStack_80[0];
                                local_var_58 = 0;
// 处理关键帧数据
                                key_frame_processor(param_1 + 0x10, &iStack_70);
// 继续处理剩余的关键帧
                                pcVar8 = CURVE_KEY_STRING;
                                do {
                                    pcVar10 = pcVar8;
                                    pcVar8 = pcVar10 + 1;
                                } while (*pcVar8 != '\0');
                                while( true ) {
                                    do {
                                        puVar7 = (uint64_t *)puVar7[0xb];
                                        if (puVar7 == (uint64_t *)0x0) {
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
                                    pcVar3 = pcVar8 + (int64_t)pcVar3;
                                    if (pcVar3 <= pcVar8) break;
                                    lVar5 = (int64_t)&processed_var_5272_ptr - (int64_t)pcVar8;
                                    while (*pcVar8 == pcVar8[lVar5]) {
                                        pcVar8 = pcVar8 + 1;
                                        if (pcVar3 <= pcVar8) goto LAB_180417140;
                                    }
                                }
                            } while( true );
                        }
                        lVar5 = (int64_t)&processed_var_5204_ptr - (int64_t)pcVar8;
                        while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_1804170b5;
                        }
                    }
                    puVar7 = (uint64_t *)puVar7[0xb];
                } while( true );
            }
            lVar5 = (int64_t)&rendering_buffer_2256_ptr - (int64_t)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_180416ed4;
            }
        }
        puVar9 = (uint64_t *)puVar9[6];
    } while( true );
}
/**
 * 曲线数据内存管理器
 *
 * 本函数负责管理动画曲线数据的内存分配和释放。
 * 主要功能：
 * 1. 初始化内存数据结构
 * 2. 清理内存数据
 * 3. 根据标志位决定是否释放内存
 * 4. 返回管理后的内存指针
 *
 * @param param_1 内存块指针
 * @param param_2 内存管理标志位
 * @param param_3 内存参数1
 * @param param_4 内存参数2
 * @return 处理后的内存指针
 *
 * 技术特点：
 * - 支持动态内存管理
 * - 提供内存清理功能
 * - 使用位掩码进行内存对齐
 * - 确保内存安全释放
 */
uint64_t* curve_data_memory_manager(uint64_t* param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t uVar1;
// 设置内存对齐掩码
    uVar1 = MEMORY_ALIGNMENT_MASK;
// 清理内存数据
    memory_cleaner(param_1 + 1);
// 设置内存块指针
    *param_1 = &processed_var_5192_ptr;
// 根据标志位决定是否释放内存
    if ((param_2 & 1) != 0) {
        free(param_1, MEMORY_BLOCK_SIZE, param_3, param_4, uVar1);
    }
    return param_1;
}
// ==================== 技术文档 ====================
/*
 * 动画曲线处理系统架构说明
 *
 * 1. 系统概述
 *    本模块实现了游戏引擎中的动画曲线处理系统，负责解析和处理各种动画曲线数据。
 *    系统支持多种曲线格式，包括线性、贝塞尔曲线等，并提供相应的插值算法。
 *
 * 2. 核心组件
 *    - 动画曲线参数解析器 (animation_curve_parameter_parser)
 *    - 曲线数据内存管理器 (curve_data_memory_manager)
 *    - 关键帧数据处理器 (key_frame_processor)
 *    - 字符串转换器 (string_converter)
 *
 * 3. 数据流处理
 *    输入数据 → 参数解析 → 版本检查 → 关键帧提取 → 数据处理 → 输出结果
 *
 * 4. 内存管理策略
 *    - 使用动态内存分配
 *    - 实现内存对齐
 *    - 提供安全的内存释放机制
 *    - 防止内存泄漏
 *
 * 5. 错误处理
 *    - 版本兼容性检查
 *    - 数据格式验证
 *    - 内存分配失败处理
 *    - 空指针检查
 *
 * 6. 性能优化
 *    - 批量处理关键帧数据
 *    - 缓存常用计算结果
 *    - 优化字符串匹配算法
 *    - 减少内存分配次数
 *
 * 7. 扩展性
 *    - 支持新的曲线格式
 *    - 可配置的参数系统
 *    - 模块化的设计架构
 *    - 易于维护和升级
 */