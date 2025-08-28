#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part473.c
 * @brief 渲染系统高级处理模块
 * 
 * 本模块包含13个核心函数，主要负责渲染系统的高级处理功能，包括：
 * - 参数处理和状态管理
 * - 坐标转换和投影计算
 * - 渲染状态切换和清理
 * - 资源管理和生命周期控制
 * 
 * @author 反编译代码美化处理
 * @version 1.0
 * @date 2025-08-28
 */

/*=============================================
            常量定义和类型别名
=============================================*/

/** 渲染状态标志位 */
#define RENDER_STATE_FLAG_NONE           0x00000000
#define RENDER_STATE_FLAG_ACTIVE         0x00000001
#define RENDER_STATE_FLAG_ENABLED        0x00000002
#define RENDER_STATE_FLAG_DISABLED       0x00000004

/** 渲染模式枚举 */
#define RENDER_MODE_NORMAL               0x00000001
#define RENDER_MODE_SHADOW               0x00000002
#define RENDER_MODE_REFLECTION           0x00000005

/** 内存对齐常量 */
#define MEMORY_ALIGNMENT_SIZE           0xA60
#define RENDER_STATE_OFFSET             0x30C0
#define RENDER_DATA_OFFSET              0x3A28

/** 浮点数精度常量 */
#define FLOAT_EPSILON                   0.01999672f
#define FLOAT_MAX_VALUE                 3.4028235e+38f
#define FLOAT_ZERO_THRESHOLD           0.2f

/** 位掩码常量 */
#define BIT_MASK_9TH                    0x200    // 第9位掩码
#define BIT_MASK_6TH                    0x40     // 第6位掩码
#define BIT_MASK_1ST                    0x01     // 第1位掩码

/** 内存偏移量 */
#define OFFSET_RENDER_CONTEXT          0x20
#define OFFSET_RENDER_STATE            0x590
#define OFFSET_RENDER_FLAGS            0x56C
#define OFFSET_RENDER_MODE             0x568
#define OFFSET_RENDER_INDEX           0x560
#define OFFSET_RENDER_DATA            0x8D8
#define OFFSET_RENDER_POSITION        0x988
#define OFFSET_RENDER_TRANSFORM       0x98C
#define OFFSET_RENDER_SCALE           0x990

/*=============================================
            类型别名定义
=============================================*/

/** 渲染上下文指针类型 */
typedef longlong* RenderContextPtr;

/** 渲染状态结构体指针 */
typedef void* RenderStatePtr;

/** 坐标向量类型 */
typedef float* Vector3f;

/** 渲染参数类型 */
typedef struct {
    float x, y, z, w;
} RenderVector4f;

/** 渲染矩阵类型 */
typedef struct {
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;
} RenderMatrix4x4f;

/** 渲染配置类型 */
typedef struct {
    int mode;
    int flags;
    int index;
    float scale;
    RenderVector4f position;
    RenderVector4f transform;
} RenderConfig;

/** 渲染数据类型 */
typedef struct {
    void* data;
    int size;
    int capacity;
    int flags;
} RenderData;

/*=============================================
            函数别名定义
=============================================*/

/** 渲染参数处理函数别名 */
#define RenderParameterProcessor       FUN_18051f1ed
#define RenderParameterProcessorAlt    FUN_18051f289

/** 渲染坐标转换函数别名 */
#define RenderCoordinateTransformer     FUN_18051f339
#define RenderCoordinateAdjuster       FUN_18051f485

/** 渲染状态管理函数别名 */
#define RenderStateManager             FUN_18051f4c1
#define RenderStateUpdater             FUN_18051f528

/** 渲染碰撞检测函数别名 */
#define RenderCollisionDetector        FUN_18051f570

/** 渲染模式切换函数别名 */
#define RenderModeSwitcher             FUN_18051f700
#define RenderModeUpdater              FUN_18051f7cd
#define RenderModeProcessor            FUN_18051f839

/** 渲染资源管理函数别名 */
#define RenderResourceManager          FUN_18051fa40

/** 空函数别名 */
#define RenderEmptyFunction1           FUN_18051f98f
#define RenderEmptyFunction2           FUN_18051f994

/*=============================================
            外部函数声明
=============================================*/
extern void FUN_180593b40(longlong, undefined8, undefined4, undefined8, bool);
extern char func_0x000180522f60(longlong);
extern char func_0x000180522f60(void);
extern void FUN_180511990(longlong, int, int, bool, char, int);
extern void FUN_18052e450(longlong, int, int, int);
extern void FUN_18052e130(longlong, int);
extern void FUN_1805d1c80(longlong, undefined8*, int);
extern void func_0x0001805da580(void);

/*=============================================
            全局变量声明
=============================================*/
extern undefined8 UNK_1809f89f0;
extern undefined8 DAT_180c8ed30;

/**
 * @brief 渲染参数处理器 - 主要参数处理函数
 * 
 * 该函数负责处理渲染系统中的核心参数，包括：
 * - 渲染状态检查和验证
 * - 坐标转换和投影计算
 * - 渲染位置和变换更新
 * - 碰撞检测和边界处理
 * 
 * @param param_1 渲染上下文指针，包含渲染状态和配置信息
 * @param param_2 渲染参数向量，包含位置和变换数据
 * @return void 无返回值
 * 
 * @note 该函数是渲染系统的核心处理函数，涉及复杂的坐标变换和状态管理
 */
void FUN_18051f1ed(longlong param_1, float *param_2)
{
    /* 局部变量定义 */
    float fVar1, fVar10, fVar11, fVar12, fVar13, fVar14, fVar15;
    longlong lVar2, lVar7, lVar9;
    undefined8 uVar3, uVar4;
    char cVar5;
    uint uVar6;
    ulonglong uVar8;
    byte bRenderFlag;
    float fStack40, fStack44, fStack48, fStack50, fStack54, fStack58, fStack70;
    longlong lStack60;
    undefined8 uStack68;
    char cStack74;
    
    /* 获取渲染上下文和状态 */
    lVar2 = *(longlong *)(param_1 + OFFSET_RENDER_CONTEXT);
    lVar7 = *(longlong *)(param_1 + OFFSET_RENDER_STATE);
    
    /* 检查渲染状态有效性 */
    if (lVar7 != 0) {
        /* 获取渲染状态标志位 */
        if (*(longlong *)(lVar7 + 0x2460) == 0) {
            uVar8 = 0;
        } else {
            uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x2460) + 0x1d0);
        }
        
        /* 检查第9位标志位 */
        if (((*(ulonglong *)(lVar7 + 0x2470) | uVar8) >> 9 & 1) == 0) {
            /* 获取备用渲染状态 */
            if (*(longlong *)(lVar7 + 0x24a8) == 0) {
                uVar8 = 0;
            } else {
                uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x24a8) + 0x1d0);
            }
            
            /* 检查备用状态的第9位标志位 */
            if (((*(ulonglong *)(lVar7 + 0x24b8) | uVar8) >> 9 & 1) == 0) {
                /* 提取渲染标志位 */
                bRenderFlag = (byte)((uint)*(undefined4 *)(param_1 + OFFSET_RENDER_FLAGS) >> 8) & 1;
                
                /* 初始化堆栈变量 */
                fStack50 = 0.0f;
                fStack58 = FLOAT_MAX_VALUE;
                cStack74 = '\0';
                fStack70 = 0.0f;
                lStack60 = 0;
                uStack68 = 0;
                
                /* 调用渲染处理函数 */
                FUN_180593b40(lVar2, *(undefined8 *)(*(longlong *)(param_1 + OFFSET_RENDER_DATA) + 0x18), 
                             &fStack40, param_2, *(int *)(param_1 + OFFSET_RENDER_MODE) != 1);
                
                /* 检查处理结果 */
                if (cStack74 == '\x02') {
                    uVar6 = *(uint *)(lStack60 + 0x18);
                } else {
                    uVar6 = 0;
                }
                
                /* 处理渲染参数转换 */
                if ((((uVar6 & BIT_MASK_6TH) != 0) && (FLOAT_ZERO_THRESHOLD < fStack58)) &&
                    (lVar7 = lStack60, fVar12 = fStack58, 
                     cVar5 = func_0x000180522f60(param_1), cVar5 != '\0')) {
                    
                    /* 获取渲染对象数据 */
                    if (lVar7 == 0) {
                        lVar7 = 0;
                    } else {
                        lVar7 = *(longlong *)(lVar7 + 0x10);
                    }
                    
                    /* 检查深度值并进行坐标转换 */
                    if (*(float *)(lVar7 + 0x88) <= 0.0 && *(float *)(lVar7 + 0x88) != 0.0) {
                        /* 计算缩放因子 */
                        fVar10 = *(float *)(*(longlong *)(param_1 + 0x5f0) + 0x80) * 10.0f;
                        fVar11 = *(float *)(*(longlong *)(param_1 + 0x5f0) + 0x84) * 10.0f;
                        fVar1 = param_2[2];
                        
                        /* 计算坐标偏移 */
                        fVar14 = *param_2 - fVar10;
                        fVar15 = param_2[1] - fVar11;
                        fVar13 = (*param_2 + fVar10) - fVar14;
                        fVar10 = (param_2[1] + fVar11) - fVar15;
                        
                        /* 计算投影参数 */
                        fVar12 = ((fStack44 - fVar15) * fStack54 + 
                                  (fStack40 - fVar14) * fStack50 + 
                                  (fStack48 - fVar1) * fVar12) /
                                 (fStack54 * fVar10 + fStack50 * fVar13 + 
                                  (fVar1 - fVar1) * fVar12);
                        
                        /* 更新渲染坐标 */
                        *param_2 = fVar12 * fVar13 + fVar14;
                        param_2[1] = fVar12 * fVar10 + fVar15;
                        param_2[2] = (fVar1 - fVar1) * fVar12 + fVar1;
                        param_2[3] = FLOAT_MAX_VALUE;
                        
                        /* 跳转到状态更新部分 */
                        goto FUN_18051f4c1;
                    }
                }
                
                /* 处理深度裁剪 */
                fVar12 = param_2[2];
                if ((fVar12 <= fStack70) ||
                    (((*(byte *)(lVar2 + 0x40) & BIT_MASK_1ST) != 0 &&
                      ((cVar5 = func_0x000180522f60(param_1), cVar5 != '\0' ||
                       (fVar12 - fStack70 < FLOAT_EPSILON)))))) {
                    param_2[2] = fStack70;
                }
            }
        }
    }
    
FUN_18051f4c1:
    /* 更新渲染状态和位置 */
    fVar12 = *(float *)(lVar2 + 0x10);
    fVar1 = *(float *)(lVar2 + 0x14);
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    
    /* 更新渲染位置差值 */
    *(float *)(param_1 + OFFSET_RENDER_POSITION) = 
        (*(float *)(lVar2 + 0xc) - *param_2) + *(float *)(param_1 + OFFSET_RENDER_POSITION);
    
    /* 保存渲染参数 */
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    
    /* 更新渲染变换和缩放 */
    *(float *)(param_1 + OFFSET_RENDER_TRANSFORM) = 
        (fVar12 - fVar10) + *(float *)(param_1 + OFFSET_RENDER_TRANSFORM);
    *(float *)(param_1 + OFFSET_RENDER_SCALE) = 
        (fVar1 - fVar11) + *(float *)(param_1 + OFFSET_RENDER_SCALE);
    
    /* 更新渲染上下文 */
    *(undefined8 *)(lVar2 + 0xc) = uVar3;
    *(undefined8 *)(lVar2 + 0x14) = uVar4;
    
    /* 更新渲染数据 */
    if (-1 < *(int *)(param_1 + OFFSET_RENDER_INDEX)) {
        lVar2 = *(longlong *)(param_1 + OFFSET_RENDER_DATA);
        lVar9 = (longlong)*(int *)(param_1 + OFFSET_RENDER_INDEX) * MEMORY_ALIGNMENT_SIZE;
        lVar7 = *(longlong *)(lVar9 + RENDER_STATE_OFFSET + lVar2);
        
        /* 更新渲染数据状态 */
        *(undefined8 *)(lVar7 + 0xc) = uVar3;
        *(undefined8 *)(lVar7 + 0x14) = uVar4;
        *(undefined8 *)(lVar9 + RENDER_DATA_OFFSET + lVar2) = 0;
        *(undefined8 *)(lVar9 + RENDER_DATA_OFFSET + 8 + lVar2) = 0;
        *(undefined4 *)(lVar9 + RENDER_DATA_OFFSET + 16 + lVar2) = 0;
    }
    
    return;
}





/**
 * @brief 渲染参数处理器 - 替代参数处理函数
 * 
 * 该函数是第一个参数处理函数的替代版本，主要功能包括：
 * - 使用寄存器变量进行高效的参数处理
 * - 支持不同的参数格式和转换模式
 * - 提供优化的坐标变换和投影计算
 * - 处理特殊的渲染状态和标志位
 * 
 * @param param_1 渲染参数1，包含高位和低位浮点数据
 * @param param_2 渲染上下文指针
 * @param param_3 渲染模式参数
 * @param param_4 渲染数据向量
 * @return void 无返回值
 * 
 * @note 该函数使用非受影响寄存器变量，适用于特定的渲染场景
 */
void FUN_18051f289(undefined8 param_1, longlong param_2, undefined4 param_3, undefined8 param_4)
{
    /* 局部变量定义 */
    longlong lVar1, lVar6, lVar7;
    undefined8 uVar2, uVar3;
    char cVar4;
    uint uVar5;
    float fVar8, fVar9, fVar10, fVar11, fVar12, fVar13;
    undefined1 uStack28;
    float fStack40, fStack44, fStack48, fStack50, fStack54, fStack58, fStack70;
    longlong lStack60;
    undefined8 uStack68;
    char cStack74;
    
    /* 从参数1中提取浮点数据 */
    fStack54 = (float)((ulonglong)param_1 >> 0x20);  // 高位部分
    fStack50 = (float)param_1;                       // 低位部分
    
    /* 初始化堆栈变量 */
    cStack74 = '\0';
    fStack70 = 0.0f;
    lStack60 = 0;
    uStack68 = 0;
    uStack28 = in_CL;                                // 控制标志
    fStack58 = in_XMM0_Dc;                           // 浮点寄存器数据
    
    /* 调用渲染处理函数 */
    FUN_180593b40(0, *(undefined8 *)(param_2 + 0x18), param_3, param_4, 
                 *(int *)(unaff_RBX + OFFSET_RENDER_MODE) != 1);
    
    /* 检查处理结果状态 */
    if (cStack74 == '\x02') {
        uVar5 = *(uint *)(lStack60 + 0x18);
    } else {
        uVar5 = 0;
    }
    
    /* 处理渲染参数转换 */
    if (((uVar5 & BIT_MASK_6TH) != 0) && (FLOAT_ZERO_THRESHOLD < fStack58)) {
        lVar6 = lStack60;
        cVar4 = func_0x000180522f60();
        
        if (cVar4 != '\0') {
            /* 获取渲染对象数据 */
            if (lVar6 == 0) {
                lVar6 = 0;
            } else {
                lVar6 = *(longlong *)(lVar6 + 0x10);
            }
            
            /* 检查深度值并进行坐标转换 */
            if (*(float *)(lVar6 + 0x88) <= 0.0 && *(float *)(lVar6 + 0x88) != 0.0) {
                /* 计算缩放因子 */
                fVar8 = *(float *)(*(longlong *)(unaff_RBX + 0x5f0) + 0x80) * 10.0f;
                fVar10 = *(float *)(*(longlong *)(unaff_RBX + 0x5f0) + 0x84) * 10.0f;
                fVar9 = unaff_RDI[2];
                
                /* 计算坐标偏移 */
                fVar12 = *unaff_RDI - fVar8;
                fVar13 = unaff_RDI[1] - fVar10;
                fVar11 = (*unaff_RDI + fVar8) - fVar12;
                fVar10 = (unaff_RDI[1] + fVar10) - fVar13;
                
                /* 计算投影参数 */
                fVar8 = ((fStack44 - fVar13) * fStack54 + 
                         (fStack40 - fVar12) * fStack50 + 
                         (fStack48 - fVar9) * fStack58) /
                        (fStack54 * fVar10 + fStack50 * fVar11 + 
                         (fVar9 - fVar9) * fStack58);
                
                /* 更新渲染坐标 */
                *unaff_RDI = fVar8 * fVar11 + fVar12;
                unaff_RDI[1] = fVar8 * fVar10 + fVar13;
                unaff_RDI[2] = (fVar9 - fVar9) * fVar8 + fVar9;
                unaff_RDI[3] = FLOAT_MAX_VALUE;
                
                /* 跳转到状态更新部分 */
                goto LAB_18051f4b9;
            }
        }
    }
    
    /* 处理深度裁剪 */
    fVar9 = unaff_RDI[2];
    if (fStack70 < fVar9) {
        /* 检查渲染状态标志 */
        if ((*(byte *)(unaff_RSI + 0x40) & BIT_MASK_1ST) == 0) goto LAB_18051f4b9;
        
        cVar4 = func_0x000180522f60();
        if ((cVar4 == '\0') && (FLOAT_EPSILON <= fVar9 - fStack70)) goto LAB_18051f4b9;
    }
    
    /* 更新深度值 */
    unaff_RDI[2] = fStack70;
    
LAB_18051f4b9:
    /* 更新渲染状态和位置 */
    fVar9 = *(float *)(unaff_RSI + 0x10);
    fVar8 = *(float *)(unaff_RSI + 0x14);
    fVar10 = unaff_RDI[1];
    fVar11 = unaff_RDI[2];
    
    /* 更新渲染位置差值 */
    *(float *)(unaff_RBX + OFFSET_RENDER_POSITION) = 
        (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + OFFSET_RENDER_POSITION);
    
    /* 保存渲染参数 */
    uVar2 = *(undefined8 *)unaff_RDI;
    uVar3 = *(undefined8 *)(unaff_RDI + 2);
    
    /* 更新渲染变换和缩放 */
    *(float *)(unaff_RBX + OFFSET_RENDER_TRANSFORM) = 
        (fVar9 - fVar10) + *(float *)(unaff_RBX + OFFSET_RENDER_TRANSFORM);
    *(float *)(unaff_RBX + OFFSET_RENDER_SCALE) = 
        (fVar8 - fVar11) + *(float *)(unaff_RBX + OFFSET_RENDER_SCALE);
    
    /* 更新渲染上下文 */
    *(undefined8 *)(unaff_RSI + 0xc) = uVar2;
    *(undefined8 *)(unaff_RSI + 0x14) = uVar3;
    
    /* 更新渲染数据 */
    if (-1 < *(int *)(unaff_RBX + OFFSET_RENDER_INDEX)) {
        lVar6 = *(longlong *)(unaff_RBX + OFFSET_RENDER_DATA);
        lVar7 = (longlong)*(int *)(unaff_RBX + OFFSET_RENDER_INDEX) * MEMORY_ALIGNMENT_SIZE;
        lVar1 = *(longlong *)(lVar7 + RENDER_STATE_OFFSET + lVar6);
        
        /* 更新渲染数据状态 */
        *(undefined8 *)(lVar1 + 0xc) = uVar2;
        *(undefined8 *)(lVar1 + 0x14) = uVar3;
        *(undefined8 *)(lVar7 + RENDER_DATA_OFFSET + lVar6) = 0;
        *(undefined8 *)(lVar7 + RENDER_DATA_OFFSET + 8 + lVar6) = 0;
        *(undefined4 *)(lVar7 + RENDER_DATA_OFFSET + 16 + lVar6) = 0;
    }
    
    return;
}





/**
 * @brief 渲染坐标转换器 - 专用坐标转换函数
 * 
 * 该函数专门用于处理渲染系统中的坐标转换，主要功能包括：
 * - 基于给定参数进行精确的坐标变换
 * - 处理投影矩阵计算和变换
 * - 支持多种坐标系统和转换模式
 * - 更新渲染状态和位置信息
 * 
 * @param param_1 基础坐标参数，用于X轴变换计算
 * @param param_2 渲染上下文参数
 * @param param_3 渲染状态参数
 * @param param_4 深度参数，用于Z轴变换计算
 * @return void 无返回值
 * 
 * @note 该函数使用优化的数学计算，适用于高性能渲染场景
 */
void FUN_18051f339(float param_1, undefined8 param_2, undefined8 param_3, float param_4)
{
    /* 局部变量定义 */
    float fVar1, fVar7, fVar8, fVar9, fVar10, fVar11;
    longlong lVar2, lVar3, lVar6;
    undefined8 uVar4, uVar5;
    float in_XMM4_Da;
    float fStack50, fStack54;
    float in_stack48;
    
    /* 计算缩放因子 */
    fVar7 = *(float *)(in_RAX + 0x80) * 10.0f;
    fVar8 = *(float *)(in_RAX + 0x84) * 10.0f;
    fVar1 = unaff_RDI[2];
    
    /* 计算坐标偏移 */
    fVar10 = *unaff_RDI - fVar7;
    fVar11 = unaff_RDI[1] - fVar8;
    fVar9 = (*unaff_RDI + fVar7) - fVar10;
    fVar8 = (unaff_RDI[1] + fVar8) - fVar11;
    
    /* 计算投影变换参数 */
    fVar7 = ((in_XMM4_Da - fVar11) * fStack54 + 
             (param_1 - fVar10) * fStack50 + 
             (in_stack48 - fVar1) * param_4) /
            (fStack54 * fVar8 + fStack50 * fVar9 + 
             (fVar1 - fVar1) * param_4);
    
    /* 应用坐标变换 */
    *unaff_RDI = fVar7 * fVar9 + fVar10;
    unaff_RDI[1] = fVar7 * fVar8 + fVar11;
    unaff_RDI[2] = (fVar1 - fVar1) * fVar7 + fVar1;
    unaff_RDI[3] = FLOAT_MAX_VALUE;
    
    /* 更新渲染状态和位置 */
    fVar1 = *(float *)(unaff_RSI + 0x10);
    fVar7 = *(float *)(unaff_RSI + 0x14);
    fVar8 = unaff_RDI[1];
    fVar9 = unaff_RDI[2];
    
    /* 更新渲染位置差值 */
    *(float *)(unaff_RBX + OFFSET_RENDER_POSITION) = 
        (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + OFFSET_RENDER_POSITION);
    
    /* 保存渲染参数 */
    uVar4 = *(undefined8 *)unaff_RDI;
    uVar5 = *(undefined8 *)(unaff_RDI + 2);
    
    /* 更新渲染变换和缩放 */
    *(float *)(unaff_RBX + OFFSET_RENDER_TRANSFORM) = 
        (fVar1 - fVar8) + *(float *)(unaff_RBX + OFFSET_RENDER_TRANSFORM);
    *(float *)(unaff_RBX + OFFSET_RENDER_SCALE) = 
        (fVar7 - fVar9) + *(float *)(unaff_RBX + OFFSET_RENDER_SCALE);
    
    /* 更新渲染上下文 */
    *(undefined8 *)(unaff_RSI + 0xc) = uVar4;
    *(undefined8 *)(unaff_RSI + 0x14) = uVar5;
    
    /* 更新渲染数据 */
    if (-1 < *(int *)(unaff_RBX + OFFSET_RENDER_INDEX)) {
        lVar2 = *(longlong *)(unaff_RBX + OFFSET_RENDER_DATA);
        lVar6 = (longlong)*(int *)(unaff_RBX + OFFSET_RENDER_INDEX) * MEMORY_ALIGNMENT_SIZE;
        lVar3 = *(longlong *)(lVar6 + RENDER_STATE_OFFSET + lVar2);
        
        /* 更新渲染数据状态 */
        *(undefined8 *)(lVar3 + 0xc) = uVar4;
        *(undefined8 *)(lVar3 + 0x14) = uVar5;
        *(undefined8 *)(lVar6 + RENDER_DATA_OFFSET + lVar2) = 0;
        *(undefined8 *)(lVar6 + RENDER_DATA_OFFSET + 8 + lVar2) = 0;
        *(undefined4 *)(lVar6 + RENDER_DATA_OFFSET + 16 + lVar2) = 0;
    }
    
    return;
}





/**
 * @brief 渲染坐标调整器 - 深度值调整函数
 * 
 * 该函数专门用于调整渲染系统中的深度值，主要功能包括：
 * - 检查和验证深度值的有效性
 * - 根据渲染状态调整深度值
 * - 处理深度裁剪和边界条件
 * - 更新渲染状态和位置信息
 * 
 * @param void 无直接参数，使用非受影响寄存器变量
 * @return void 无返回值
 * 
 * @note 该函数主要用于深度缓冲区的管理和优化
 */
void FUN_18051f485(void)
{
    /* 局部变量定义 */
    float fVar1, fVar2, fVar3, fVar10;
    longlong lVar4, lVar5, lVar9;
    undefined8 uVar6, uVar7;
    char cVar8;
    float in_stack70;
    
    /* 获取当前深度值 */
    fVar10 = unaff_RDI[2];
    
    /* 检查深度值是否需要调整 */
    if (in_stack70 < fVar10) {
        /* 检查渲染状态标志 */
        if ((*(byte *)(unaff_RSI + 0x40) & BIT_MASK_1ST) == 0) goto LAB_18051f4b9;
        
        cVar8 = func_0x000180522f60();
        if ((cVar8 == '\0') && (FLOAT_EPSILON <= fVar10 - in_stack70)) goto LAB_18051f4b9;
    }
    
    /* 更新深度值 */
    unaff_RDI[2] = in_stack70;
    
LAB_18051f4b9:
    /* 更新渲染状态和位置 */
    fVar10 = *(float *)(unaff_RSI + 0x10);
    fVar1 = *(float *)(unaff_RSI + 0x14);
    fVar2 = unaff_RDI[1];
    fVar3 = unaff_RDI[2];
    
    /* 更新渲染位置差值 */
    *(float *)(unaff_RBX + OFFSET_RENDER_POSITION) = 
        (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + OFFSET_RENDER_POSITION);
    
    /* 保存渲染参数 */
    uVar6 = *(undefined8 *)unaff_RDI;
    uVar7 = *(undefined8 *)(unaff_RDI + 2);
    
    /* 更新渲染变换和缩放 */
    *(float *)(unaff_RBX + OFFSET_RENDER_TRANSFORM) = 
        (fVar10 - fVar2) + *(float *)(unaff_RBX + OFFSET_RENDER_TRANSFORM);
    *(float *)(unaff_RBX + OFFSET_RENDER_SCALE) = 
        (fVar1 - fVar3) + *(float *)(unaff_RBX + OFFSET_RENDER_SCALE);
    
    /* 更新渲染上下文 */
    *(undefined8 *)(unaff_RSI + 0xc) = uVar6;
    *(undefined8 *)(unaff_RSI + 0x14) = uVar7;
    
    /* 更新渲染数据 */
    if (-1 < *(int *)(unaff_RBX + OFFSET_RENDER_INDEX)) {
        lVar4 = *(longlong *)(unaff_RBX + OFFSET_RENDER_DATA);
        lVar9 = (longlong)*(int *)(unaff_RBX + OFFSET_RENDER_INDEX) * MEMORY_ALIGNMENT_SIZE;
        lVar5 = *(longlong *)(lVar9 + RENDER_STATE_OFFSET + lVar4);
        
        /* 更新渲染数据状态 */
        *(undefined8 *)(lVar5 + 0xc) = uVar6;
        *(undefined8 *)(lVar5 + 0x14) = uVar7;
        *(undefined8 *)(lVar9 + RENDER_DATA_OFFSET + lVar4) = 0;
        *(undefined8 *)(lVar9 + RENDER_DATA_OFFSET + 8 + lVar4) = 0;
        *(undefined4 *)(lVar9 + RENDER_DATA_OFFSET + 16 + lVar4) = 0;
    }
    
    return;
}





// 函数: void FUN_18051f4c1(void)
void FUN_18051f4c1(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float *unaff_RDI;
  
  fVar1 = *(float *)(unaff_RSI + 0x10);
  fVar2 = *(float *)(unaff_RSI + 0x14);
  fVar3 = unaff_RDI[1];
  fVar4 = unaff_RDI[2];
  *(float *)(unaff_RBX + 0x988) =
       (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + 0x988);
  uVar7 = *(undefined8 *)unaff_RDI;
  uVar8 = *(undefined8 *)(unaff_RDI + 2);
  *(float *)(unaff_RBX + 0x98c) = (fVar1 - fVar3) + *(float *)(unaff_RBX + 0x98c);
  *(float *)(unaff_RBX + 0x990) = (fVar2 - fVar4) + *(float *)(unaff_RBX + 0x990);
  *(undefined8 *)(unaff_RSI + 0xc) = uVar7;
  *(undefined8 *)(unaff_RSI + 0x14) = uVar8;
  if (-1 < *(int *)(unaff_RBX + 0x560)) {
    lVar5 = *(longlong *)(unaff_RBX + 0x8d8);
    lVar9 = (longlong)*(int *)(unaff_RBX + 0x560) * 0xa60;
    lVar6 = *(longlong *)(lVar9 + 0x30c0 + lVar5);
    *(undefined8 *)(lVar6 + 0xc) = uVar7;
    *(undefined8 *)(lVar6 + 0x14) = uVar8;
    *(undefined8 *)(lVar9 + 0x3a28 + lVar5) = 0;
    *(undefined8 *)(lVar9 + 0x3a30 + lVar5) = 0;
    *(undefined4 *)(lVar9 + 0x3a38 + lVar5) = 0;
  }
  return;
}





// 函数: void FUN_18051f528(undefined8 param_1)
void FUN_18051f528(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  undefined8 in_XMM0_Qb;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x8d8);
  lVar3 = in_RAX * 0xa60;
  lVar2 = *(longlong *)(lVar3 + 0x30c0 + lVar1);
  *(undefined8 *)(lVar2 + 0xc) = param_1;
  *(undefined8 *)(lVar2 + 0x14) = in_XMM0_Qb;
  *(undefined8 *)(lVar3 + 0x3a28 + lVar1) = 0;
  *(undefined8 *)(lVar3 + 0x3a30 + lVar1) = 0;
  *(undefined4 *)(lVar3 + 0x3a38 + lVar1) = 0;
  return;
}





// 函数: void FUN_18051f570(longlong param_1,float *param_2)
void FUN_18051f570(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x988);
  fVar2 = *param_2;
  if (0.0 < *(float *)(param_1 + 0x990) * param_2[2] +
            *(float *)(param_1 + 0x98c) * param_2[1] + fVar1 * fVar2) {
    if (0.0 < fVar1 * fVar2) {
      if (ABS(fVar2) <= ABS(fVar1)) {
        *(float *)(param_1 + 0x988) = fVar1 - fVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0x988) = 0;
      }
    }
    fVar1 = *(float *)(param_1 + 0x98c);
    fVar2 = param_2[1];
    if (0.0 < fVar1 * fVar2) {
      if (ABS(fVar1) < ABS(fVar2)) {
        *(undefined4 *)(param_1 + 0x98c) = 0;
        return;
      }
      *(float *)(param_1 + 0x98c) = fVar1 - fVar2;
    }
  }
  return;
}





// 函数: void FUN_18051f700(longlong param_1,undefined4 param_2)
void FUN_18051f700(longlong param_1,undefined4 param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  iVar2 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(param_1 + 0x980) = param_2;
  if (*(char *)(param_1 + 0x984) == '\0') goto LAB_18051f7bf;
  if (*(char *)(*(longlong *)(param_1 + 0x738) + 0x99) != '\0') {
    lVar11 = (longlong)*(int *)(param_1 + 0x560) * 0xa60;
    if (*(int *)(lVar11 + 0x3608 + *(longlong *)(param_1 + 0x8d8)) == 1) {
      param_2 = *(undefined4 *)(lVar11 + 0x3a20 + *(longlong *)(param_1 + 0x8d8));
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x738) + 0x1dc) = param_2;
  if (*(int *)(param_1 + 0x564) < 0) goto LAB_18051f7bf;
  lVar11 = (longlong)*(int *)(param_1 + 0x564) * 0xa60 + *(longlong *)(param_1 + 0x8d8);
  if (*(char *)(*(longlong *)(lVar11 + 0x37d8) + 0x99) == '\0') {
LAB_18051f7b2:
    uVar6 = *(undefined4 *)(lVar11 + 0x3a20);
  }
  else {
    lVar8 = (longlong)*(int *)(lVar11 + 0x3600) * 0xa60;
    if (*(int *)(lVar8 + 0x3608 + *(longlong *)(lVar11 + 0x3978)) != 1) goto LAB_18051f7b2;
    uVar6 = *(undefined4 *)(lVar8 + 0x3a20 + *(longlong *)(lVar11 + 0x3978));
  }
  *(undefined4 *)(*(longlong *)(lVar11 + 0x37d8) + 0x1dc) = uVar6;
LAB_18051f7bf:
  if (((*(byte *)(param_1 + 0x56c) & 1) == 0) && (iVar3 = *(int *)(param_1 + 0x980), -1 < iVar2)) {
    if ((*(int *)(param_1 + 0x568) == 1) && (*(longlong *)(param_1 + 0x6e0) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x10;
    }
    if (-1 < iVar3) {
      lVar11 = *(longlong *)(param_1 + 0x8d8);
      if (*(char *)(lVar11 + 0x87a93c) == '\0') {
        uVar7 = (uint)(*(longlong *)(lVar11 + 0x87a920) - *(longlong *)(lVar11 + 0x87a918) >> 3);
      }
      else {
        uVar7 = *(uint *)(lVar11 + 0x87a938);
      }
      if (0 < (int)uVar7) {
        lVar11 = 0;
        uVar10 = (ulonglong)uVar7;
        do {
          lVar4 = *(longlong *)(param_1 + 0x8d8);
          lVar8 = lVar4 + 0x876958;
          if (*(char *)(lVar4 + 0x87a93c) == '\0') {
            lVar8 = *(longlong *)(lVar4 + 0x87a918);
          }
          lVar8 = *(longlong *)(lVar8 + lVar11);
          lVar5 = *(longlong *)(lVar8 + 0x6e0);
          if (((*(int *)(lVar8 + 0x568) == 1) && (lVar5 != 0)) &&
             (uVar7 = *(uint *)(lVar8 + 0x980), -1 < (int)uVar7)) {
            iVar9 = *(int *)(lVar4 + 0x87b770) >> 3;
            if (((*(byte *)((longlong)(iVar9 * iVar2 + ((int)uVar7 >> 3)) +
                           *(longlong *)(lVar4 + 0x87b768)) & (&UNK_1809f89f0)[uVar7 & 7]) != 0) &&
               ((*(byte *)((longlong)(iVar9 * iVar3 + ((int)uVar7 >> 3)) +
                          *(longlong *)(lVar4 + 0x87b768)) & (&UNK_1809f89f0)[uVar7 & 7]) == 0)) {
              *(undefined4 *)(lVar5 + 0x1b6c) = 0;
              *(undefined1 *)(lVar5 + 0x17a8) = 0;
              *(undefined8 *)(lVar5 + 0x1798) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar5 + 0x17a0) * 8);
              *(undefined4 *)(lVar5 + 0x1c0c) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c14) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c1c) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c24) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c2c) = 0;
              *(undefined4 *)(lVar5 + 0x200c) = 0;
              *(undefined1 *)(lVar5 + 0x1c48) = 0;
              *(undefined8 *)(lVar5 + 0x1c38) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar5 + 0x1c40) * 8);
            }
          }
          lVar11 = lVar11 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  return;
}





// 函数: void FUN_18051f7cd(void)
void FUN_18051f7cd(void)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int unaff_EBP;
  longlong lVar9;
  longlong in_R9;
  
  iVar2 = *(int *)(in_R9 + 0x980);
  if (-1 < unaff_EBP) {
    if ((*(int *)(in_R9 + 0x568) == 1) && (*(longlong *)(in_R9 + 0x6e0) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(in_R9 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x10;
    }
    if (-1 < iVar2) {
      lVar9 = *(longlong *)(in_R9 + 0x8d8);
      if (*(char *)(lVar9 + 0x87a93c) == '\0') {
        uVar5 = (uint)(*(longlong *)(lVar9 + 0x87a920) - *(longlong *)(lVar9 + 0x87a918) >> 3);
      }
      else {
        uVar5 = *(uint *)(lVar9 + 0x87a938);
      }
      if (0 < (int)uVar5) {
        lVar9 = 0;
        uVar8 = (ulonglong)uVar5;
        do {
          lVar3 = *(longlong *)(in_R9 + 0x8d8);
          lVar6 = lVar3 + 0x876958;
          if (*(char *)(lVar3 + 0x87a93c) == '\0') {
            lVar6 = *(longlong *)(lVar3 + 0x87a918);
          }
          lVar6 = *(longlong *)(lVar6 + lVar9);
          lVar4 = *(longlong *)(lVar6 + 0x6e0);
          if (((*(int *)(lVar6 + 0x568) == 1) && (lVar4 != 0)) &&
             (uVar5 = *(uint *)(lVar6 + 0x980), -1 < (int)uVar5)) {
            iVar7 = *(int *)(lVar3 + 0x87b770) >> 3;
            if (((*(byte *)((longlong)(iVar7 * unaff_EBP + ((int)uVar5 >> 3)) +
                           *(longlong *)(lVar3 + 0x87b768)) & (&UNK_1809f89f0)[uVar5 & 7]) != 0) &&
               ((*(byte *)((longlong)(iVar7 * iVar2 + ((int)uVar5 >> 3)) +
                          *(longlong *)(lVar3 + 0x87b768)) & (&UNK_1809f89f0)[uVar5 & 7]) == 0)) {
              *(undefined4 *)(lVar4 + 0x1b6c) = 0;
              *(undefined1 *)(lVar4 + 0x17a8) = 0;
              *(undefined8 *)(lVar4 + 0x1798) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar4 + 0x17a0) * 8);
              *(undefined4 *)(lVar4 + 0x1c0c) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c14) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c1c) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c24) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c2c) = 0;
              *(undefined4 *)(lVar4 + 0x200c) = 0;
              *(undefined1 *)(lVar4 + 0x1c48) = 0;
              *(undefined8 *)(lVar4 + 0x1c38) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar4 + 0x1c40) * 8);
            }
          }
          lVar9 = lVar9 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}





// 函数: void FUN_18051f839(void)
void FUN_18051f839(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint in_EAX;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int unaff_EBP;
  int unaff_ESI;
  longlong lVar7;
  longlong in_R9;
  
  lVar7 = 0;
  uVar6 = (ulonglong)in_EAX;
  do {
    lVar2 = *(longlong *)(in_R9 + 0x8d8);
    lVar4 = lVar2 + 0x876958;
    if (*(char *)(lVar2 + 0x87a93c) == '\0') {
      lVar4 = *(longlong *)(lVar2 + 0x87a918);
    }
    lVar4 = *(longlong *)(lVar4 + lVar7);
    lVar3 = *(longlong *)(lVar4 + 0x6e0);
    if (((*(int *)(lVar4 + 0x568) == 1) && (lVar3 != 0)) &&
       (uVar1 = *(uint *)(lVar4 + 0x980), -1 < (int)uVar1)) {
      iVar5 = *(int *)(lVar2 + 0x87b770) >> 3;
      if (((*(byte *)((longlong)(iVar5 * unaff_EBP + ((int)uVar1 >> 3)) +
                     *(longlong *)(lVar2 + 0x87b768)) & (&UNK_1809f89f0)[uVar1 & 7]) != 0) &&
         ((*(byte *)((longlong)(iVar5 * unaff_ESI + ((int)uVar1 >> 3)) +
                    *(longlong *)(lVar2 + 0x87b768)) & (&UNK_1809f89f0)[uVar1 & 7]) == 0)) {
        *(undefined4 *)(lVar3 + 0x1b6c) = 0;
        *(undefined1 *)(lVar3 + 0x17a8) = 0;
        *(undefined8 *)(lVar3 + 0x1798) =
             *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar3 + 0x17a0) * 8);
        *(undefined4 *)(lVar3 + 0x1c0c) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c14) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c1c) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c24) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c2c) = 0;
        *(undefined4 *)(lVar3 + 0x200c) = 0;
        *(undefined1 *)(lVar3 + 0x1c48) = 0;
        *(undefined8 *)(lVar3 + 0x1c38) =
             *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar3 + 0x1c40) * 8);
      }
    }
    lVar7 = lVar7 + 8;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}





// 函数: void FUN_18051f98f(void)
void FUN_18051f98f(void)

{
  return;
}





// 函数: void FUN_18051f994(void)
void FUN_18051f994(void)

{
  return;
}





// 函数: void FUN_18051fa40(longlong param_1,int param_2)
void FUN_18051fa40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 uStackX_18;
  
  if ((param_2 == 1) || (*(int *)(param_1 + 0x570) != 1)) goto FUN_18051fb03;
  lVar9 = *(longlong *)(param_1 + 0x6e0);
  iVar6 = *(int *)(lVar9 + 0x14a8);
  if (iVar6 == 0) {
    bVar11 = *(char *)(lVar9 + 0x2024) == (char)iVar6;
    if (*(char *)(lVar9 + 0x2024) == (char)iVar6) goto LAB_18051fb42;
LAB_18051faab:
    cVar3 = '\x01';
  }
  else {
    bVar11 = (iVar6 - 1U & 0xfffffffd) == 0;
    if ((iVar6 - 2U & 0xfffffffd) == 0) goto LAB_18051faab;
LAB_18051fb42:
    cVar3 = '\0';
  }
  if ((bVar11 != false) || (cVar3 != '\0')) {
    FUN_180511990(param_1,*(undefined4 *)(lVar9 + 0x14b4),0xffffffff,bVar11,cVar3,0);
  }
  lVar9 = *(longlong *)(param_1 + 0x6e0);
  if (-1 < *(int *)(lVar9 + 0x14b4)) {
    *(undefined8 *)(lVar9 + 0x14b4) = 0xffffffffffffffff;
    *(undefined4 *)(lVar9 + 0x1728) = 0xffffffff;
  }
FUN_18051fb03:
  if (param_2 == 5) {
    lVar9 = *(longlong *)(param_1 + 0x8d8);
    if (*(char *)(lVar9 + 0x87a93c) == '\0') {
      uVar5 = (uint)(*(longlong *)(lVar9 + 0x87a920) - *(longlong *)(lVar9 + 0x87a918) >> 3);
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0x87a938);
    }
    if (0 < (int)uVar5) {
      lVar9 = 0;
      uVar8 = (ulonglong)uVar5;
      do {
        lVar1 = *(longlong *)(param_1 + 0x8d8);
        lVar7 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar7 = *(longlong *)(lVar1 + 0x87a918);
        }
        lVar1 = *(longlong *)(lVar9 + lVar7);
        if (-1 < *(int *)(lVar1 + 0x10)) {
          lVar7 = *(longlong *)(lVar1 + 0x6e0);
          if (*(char *)(lVar7 + 0x21c0) == '\0') {
            iVar6 = *(int *)(lVar7 + 0x14b4);
          }
          else {
            iVar6 = *(int *)(lVar7 + 0x21c4);
          }
          if (iVar6 == *(int *)(param_1 + 0x10)) {
            iVar6 = *(int *)(lVar7 + 0x14a8);
            if (iVar6 == 0) {
              bVar11 = *(char *)(lVar7 + 0x2024) == (char)iVar6;
              if (*(char *)(lVar7 + 0x2024) == (char)iVar6) goto LAB_18051fc9f;
LAB_18051fbf9:
              uVar4 = 1;
            }
            else {
              bVar11 = (iVar6 - 1U & 0xfffffffd) == 0;
              if ((iVar6 - 2U & 0xfffffffd) == 0) goto LAB_18051fbf9;
LAB_18051fc9f:
              uVar4 = 0;
            }
            FUN_180511990(lVar1,*(int *)(param_1 + 0x10),0xffffffff,bVar11,uVar4,0);
            *(undefined8 *)(lVar7 + 0x14b4) = 0xffffffffffffffff;
            *(undefined4 *)(lVar7 + 0x1728) = 0xffffffff;
          }
        }
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x564);
      if (iVar6 != -1) {
        lVar9 = *(longlong *)(param_1 + 0x8d8);
        FUN_18052e450(param_1,0xffffffff,0,0);
        FUN_18052e130((longlong)iVar6 * 0xa60 + lVar9 + 0x30a0,0xffffffff);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x560);
      if (iVar6 != -1) {
        lVar9 = *(longlong *)(param_1 + 0x8d8);
        FUN_18052e130(param_1,0xffffffff);
        FUN_18052e450((longlong)iVar6 * 0xa60 + lVar9 + 0x30a0,0xffffffff,0,0);
      }
    }
  }
  else if (param_2 == 2) {
    lVar9 = *(longlong *)(param_1 + 0x8d8);
    if (*(char *)(lVar9 + 0x87a93c) == '\0') {
      uVar5 = (uint)(*(longlong *)(lVar9 + 0x87a920) - *(longlong *)(lVar9 + 0x87a918) >> 3);
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0x87a938);
    }
    if (0 < (int)uVar5) {
      lVar9 = 0;
      uVar8 = (ulonglong)uVar5;
      do {
        lVar1 = *(longlong *)(param_1 + 0x8d8);
        lVar7 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar7 = *(longlong *)(lVar1 + 0x87a918);
        }
        if (-1 < *(int *)(*(longlong *)(lVar9 + lVar7) + 0x10)) {
          lVar1 = *(longlong *)(*(longlong *)(lVar9 + lVar7) + 0x6e0);
          if (*(char *)(lVar1 + 0x21c0) == '\0') {
            iVar6 = *(int *)(lVar1 + 0x14b4);
          }
          else {
            iVar6 = *(int *)(lVar1 + 0x21c4);
          }
          if (iVar6 == *(int *)(param_1 + 0x10)) {
            uStackX_18 = 0xffffffffffffffff;
            FUN_1805d1c80(lVar1,&uStackX_18,0);
            *(undefined4 *)(lVar1 + 0x12dc) = 0xffffffff;
            func_0x0001805da580();
          }
        }
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  *(int *)(param_1 + 0x568) = param_2;
  if (*(char *)(param_1 + 0x984) != '\0') {
    lVar9 = *(longlong *)(param_1 + 0x738);
    *(int *)(lVar9 + 0x194) = param_2;
    if ((*(int *)(param_1 + 0x568) == 1) || (*(char *)(param_1 + 0xa50) == '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(lVar9 + 0x199) = uVar4;
    if ((param_2 != 5) && (*(char *)(lVar9 + 0x98) != '\0')) {
      lVar9 = *(longlong *)(param_1 + 0x8d8);
      lVar7 = (longlong)*(int *)(param_1 + 0x564) * 0xa60;
      lVar1 = *(longlong *)(lVar7 + 0x37d8 + lVar9);
      if (*(char *)(lVar1 + 0x99) != '\0') {
        lVar10 = (longlong)*(int *)(lVar7 + 0x3600 + lVar9) * 0xa60;
        lVar2 = *(longlong *)(lVar7 + 0x3978 + lVar9);
        if (*(int *)(lVar10 + 0x3608 + lVar2) == 1) {
          *(undefined4 *)(lVar1 + 0x1dc) = *(undefined4 *)(lVar10 + 0x3a20 + lVar2);
          return;
        }
      }
      *(undefined4 *)(lVar1 + 0x1dc) = *(undefined4 *)(lVar7 + 0x3a20 + lVar9);
    }
  }
  return;
}





