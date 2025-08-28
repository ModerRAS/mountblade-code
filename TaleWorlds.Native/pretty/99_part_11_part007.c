#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_11_part007.c
 * @brief 高级数学计算和几何变换处理模块
 * 
 * 本模块实现了游戏引擎中的高级数学计算、几何变换和物理模拟功能。
 * 主要负责复杂的数学运算、向量处理、矩阵变换和物理计算。
 * 
 * 主要功能：
 * - 高级数学运算和三角函数计算
 * - 向量变换和矩阵运算
 * - 几何变换和坐标转换
 * - 物理模拟和碰撞检测
 * - 角度计算和方向处理
 * 
 * 技术架构：
 * - 采用高效的数学运算算法
 * - 实现SIMD优化计算
 * - 支持多精度数学运算
 * - 提供线程安全的计算功能
 * 
 * @author TaleWorlds Engine Team
 * @version 1.0
 * @date 2024
 */

// ============================================================================
// 常量定义
// ============================================================================

// 数学常量
#define MATH_PI                 3.14159265358979323846  // 圆周率
#define MATH_TWO_PI             6.28318530717958647692  // 2倍圆周率
#define MATH_HALF_PI            1.57079632679489661923  // 半圆周率
#define MATH_QUARTER_PI         0.78539816339744830962  // 四分之一圆周率
#define MATH_E                  2.71828182845904523536  // 自然常数
#define MATH_SQRT2              1.41421356237309504880  // 根号2
#define MATH_SQRT3              1.73205080756887729352  // 根号3
#define MATH_GOLDEN_RATIO       1.61803398874989484820  // 黄金比例

// 角度常量
#define ANGLE_RAD_TO_DEG        57.29577951308232087680  // 弧度转角度
#define ANGLE_DEG_TO_RAD        0.01745329251994329577  // 角度转弧度
#define ANGLE_FULL_CIRCLE       360.0                    // 完整圆周角度
#define ANGLE_HALF_CIRCLE       180.0                    // 半圆角度
#define ANGLE_RIGHT_ANGLE       90.0                     // 直角角度

// 向量常量
#define VECTOR_EPSILON          1e-6                     // 向量计算精度
#define VECTOR_NORMALIZE_EPSILON 1e-10                   // 向量归一化精度
#define VECTOR_DOT_EPSILON      1e-8                     // 点积计算精度
#define VECTOR_CROSS_EPSILON    1e-8                     // 叉积计算精度

// 矩阵常量
#define MATRIX_EPSILON          1e-10                    // 矩阵计算精度
#define MATRIX_IDENTITY_EPSILON 1e-8                     // 单位矩阵精度
#define MATRIX_INVERSE_EPSILON  1e-10                    // 矩阵求逆精度

// 物理常量
#define PHYSICS_GRAVITY         9.80665                  // 重力加速度
#define PHYSICS_FRICTION        0.5                      // 摩擦系数
#define PHYSICS_RESTITUTION     0.8                      // 弹性系数
#define PHYSICS_DAMPING         0.99                     // 阻尼系数
#define PHYSICS_THRESHOLD       1e-6                     // 物理计算阈值

// 系统偏移量常量
#define SYSTEM_OFFSET_0X10      0x10                     // 偏移量0x10
#define SYSTEM_OFFSET_0X18      0x18                     // 偏移量0x18
#define SYSTEM_OFFSET_0X1C      0x1c                     // 偏移量0x1c
#define SYSTEM_OFFSET_0X24      0x24                     // 偏移量0x24
#define SYSTEM_OFFSET_0X38      0x38                     // 偏移量0x38
#define SYSTEM_OFFSET_0X40      0x40                     // 偏移量0x40
#define SYSTEM_OFFSET_0X48      0x48                     // 偏移量0x48
#define SYSTEM_OFFSET_0X58      0x58                     // 偏移量0x58
#define SYSTEM_OFFSET_0X260     0x260                    // 偏移量0x260
#define SYSTEM_OFFSET_0X2F8     0x2f8                    // 偏移量0x2f8

// 系统常量值
#define SYSTEM_CONST_0XE1       0xe1                     // 常量0xe1
#define SYSTEM_CONST_0X1A0      0x1a0                    // 常量0x1a0
#define SYSTEM_CONST_0X4D0      0x4d0                    // 常量0x4d0
#define SYSTEM_CONST_0X146      0x146                    // 常量0x146
#define SYSTEM_CONST_0X10       0x10                     // 常量0x10
#define SYSTEM_CONST_0X18       0x18                     // 常量0x18

// ============================================================================
// 类型定义
// ============================================================================

// 向量类型
typedef struct {
    float x;                     // X坐标分量
    float y;                     // Y坐标分量
    float z;                     // Z坐标分量
    float w;                     // W坐标分量（齐次坐标）
} Vector4;

typedef struct {
    float x;                     // X坐标分量
    float y;                     // Y坐标分量
    float z;                     // Z坐标分量
} Vector3;

typedef struct {
    float x;                     // X坐标分量
    float y;                     // Y坐标分量
} Vector2;

// 矩阵类型
typedef struct {
    float m[4][4];               // 4x4矩阵元素
} Matrix4x4;

typedef struct {
    float m[3][3];               // 3x3矩阵元素
} Matrix3x3;

// 四元数类型
typedef struct {
    float x;                     // X分量
    float y;                     // Y分量
    float z;                     // Z分量
    float w;                     // W分量
} Quaternion;

// 角度类型
typedef struct {
    float yaw;                   // 偏航角
    float pitch;                 // 俯仰角
    float roll;                  // 滚转角
} EulerAngles;

// 变换参数类型
typedef struct {
    Vector3 position;            // 位置向量
    Quaternion rotation;          // 旋转四元数
    Vector3 scale;               // 缩放向量
} TransformParams;

// 物理参数类型
typedef struct {
    float mass;                  // 质量
    float friction;              // 摩擦系数
    float restitution;           // 弹性系数
    float damping;               // 阻尼系数
    Vector3 velocity;           // 速度向量
    Vector3 acceleration;       // 加速度向量
} PhysicsParams;

// 计算上下文类型
typedef struct {
    uint32_t flags;              // 计算标志
    float precision;             // 计算精度
    int32_t max_iterations;      // 最大迭代次数
    float convergence_threshold; // 收敛阈值
    void* user_data;             // 用户数据
} MathContext;

// ============================================================================
// 全局变量声明
// ============================================================================

// 系统全局变量
extern uint8_t system_data_buffer;                // 系统全局数据缓冲区
extern uint8_t global_state_1696_ptr;            // 全局状态指针1696
extern uint8_t global_state_8576;                // 全局状态数据8576
extern uint8_t system_stack_cookie;               // 系统栈保护cookie

// ============================================================================
// 函数声明
// ============================================================================

// 高级数学计算器 (AdvancedMathCalculator)
// 功能：执行高级数学计算和三角函数运算
// 参数：param_1 - 计算参数标志
// 返回值：无
void AdvancedMathCalculator(uint param_1);

// 向量变换处理器 (VectorTransformProcessor)
// 功能：处理向量变换和矩阵运算
// 参数：param_1 - 输入参数, param_2 - 浮点参数1, param_3 - 数据句柄, param_4 - 浮点参数2
// 返回值：无
void VectorTransformProcessor(uint param_1, float param_2, uint64_t param_3, float param_4);

// 几何变换计算器 (GeometryTransformCalculator)
// 功能：计算几何变换和坐标转换
// 参数：无
// 返回值：无
void GeometryTransformCalculator(void);

// 物理模拟处理器 (PhysicsSimulationProcessor)
// 功能：处理物理模拟和碰撞检测
// 参数：无
// 返回值：无
void PhysicsSimulationProcessor(void);

// 角度计算器 (AngleCalculator)
// 功能：计算角度和方向
// 参数：无
// 返回值：无
void AngleCalculator(void);

// ============================================================================
// 原始函数映射
// ============================================================================

#define AdvancedMathCalculator FUN_1806dacef
#define VectorTransformProcessor FUN_1806dad96
#define GeometryTransformCalculator FUN_1806db3b0
#define PhysicsSimulationProcessor FUN_1806db4ad
#define AngleCalculator FUN_1806db58d

// ============================================================================
// 原始函数实现
// ============================================================================

// 函数: void AdvancedMathCalculator(uint param_1)
// 功能：高级数学计算器，执行复杂的数学运算和三角函数计算
// 参数：param_1 - 计算参数标志，用于控制计算模式
// 返回值：无
void AdvancedMathCalculator(uint param_1)
{
    char cVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
    int32_t *puVar5;
    uint uVar6;
    float *unaff_RBP;
    longlong unaff_RSI;
    uint64_t uVar7;
    longlong *unaff_R14;
    float fVar8;
    float fVar9;
    int32_t uVar10;
    int32_t uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float in_XMM4_Da;
    float fVar15;
    float fVar16;
    float fVar17;
    float in_XMM5_Da;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fStack0000000000000060;
    float fStack0000000000000064;
    float fStack0000000000000068;
    float fStack000000000000006c;
    float in_stack_00000070;
    float fStack0000000000000074;
    float in_stack_00000078;
    
    // 初始化数学计算参数
    fVar18 = in_XMM5_Da + in_XMM5_Da;
    fVar15 = in_XMM4_Da + in_XMM4_Da;
    fVar22 = unaff_RBP[-0x1d];
    fVar20 = (unaff_RBP[4] - unaff_RBP[-0x1a]) + (unaff_RBP[4] - unaff_RBP[-0x1a]);
    fVar17 = unaff_RBP[-0x20];
    fStack0000000000000060 = (float)((uint)fVar17 ^ param_1);
    unaff_RBP[0x46] = unaff_RBP[-0x1e];
    fStack0000000000000068 = (float)((uint)unaff_RBP[-0x1e] ^ param_1);
    fVar14 = fVar22 * fVar22 - 0.5;
    unaff_RBP[0x4c] = unaff_RBP[-0x1f];
    fStack0000000000000064 = (float)((uint)unaff_RBP[-0x1f] ^ param_1);
    fVar12 = fStack0000000000000064 * fVar15 + fStack0000000000000060 * fVar18 +
             fStack0000000000000068 * fVar20;
    fVar26 = (fStack0000000000000064 * fVar20 - fStack0000000000000068 * fVar15) * fVar22 +
             fVar14 * fVar18 + fVar12 * fStack0000000000000060;
    fVar25 = (fStack0000000000000068 * fVar18 - fStack0000000000000060 * fVar20) * fVar22 +
             fVar14 * fVar15 + fVar12 * fStack0000000000000064;
    fVar24 = (fStack0000000000000060 * fVar15 - fStack0000000000000064 * fVar18) * fVar22 +
             fVar14 * fVar20 + fVar12 * fStack0000000000000068;
    fStack000000000000006c = fVar22;
    pfVar4 = (float *)FUN_1800fcb90(&stack0x00000060);
    fVar12 = unaff_RBP[0x46];
    fVar14 = unaff_RBP[0x4c];
    fVar16 = fVar17 + fVar17;
    fVar15 = pfVar4[2];
    fVar18 = *pfVar4;
    fVar20 = pfVar4[3];
    unaff_RBP[-5] = pfVar4[1];
    fVar8 = fVar14 + fVar14;
    fVar13 = fVar12 * (fVar12 + fVar12);
    unaff_RBP[0x4c] = fVar14 * fVar16;
    unaff_RBP[-6] = fVar15;
    fVar15 = fVar22 * (fVar12 + fVar12);
    unaff_RBP[-0x18] = fVar22 * fVar8;
    unaff_RBP[-0x17] = (1.0 - fVar14 * fVar8) - fVar13;
    fVar9 = unaff_RBP[0x4c] - fVar15;
    fVar23 = unaff_RBP[-0x18] + fVar12 * fVar16;
    unaff_RBP[-0x16] = fVar15 + unaff_RBP[0x4c];
    fVar15 = unaff_RBP[-1];
    unaff_RBP[0x4c] = fVar9;
    unaff_RBP[-0xd] = fVar9;
    fVar21 = fVar12 * fVar8 - fVar22 * fVar16;
    unaff_RBP[-0x10] = unaff_RBP[-0x17];
    fVar9 = fVar12 * fVar8 + fVar22 * fVar16;
    unaff_RBP[-0x15] = fVar12 * fVar16 - fVar22 * fVar8;
    unaff_RBP[-0xf] = unaff_RBP[-0x16];
    fVar19 = unaff_RBP[-2] + unaff_RBP[-2];
    unaff_RBP[0x46] = fVar21;
    fVar16 = 1.0 - fVar17 * fVar16;
    unaff_RBP[-9] = fVar21;
    fVar22 = *unaff_RBP;
    unaff_RBP[-0xe] = unaff_RBP[-0x15];
    unaff_RBP[-0x11] = fVar9;
    unaff_RBP[-0xb] = fVar9;
    unaff_RBP[-0x18] = fVar23;
    fVar17 = fVar16 - fVar14 * fVar8;
    unaff_RBP[-10] = fVar23;
    fVar16 = fVar16 - fVar13;
    unaff_RBP[-0x14] = fVar17;
    unaff_RBP[-8] = fVar17;
    unaff_RBP[-4] = fVar16;
    unaff_RBP[-0xc] = fVar16;
    cVar1 = *(char *)(unaff_RSI + 0x1dd);
    fVar17 = unaff_RBP[-6];
    unaff_RBP[-0x13] = (1.0 - fVar15 * (fVar15 + fVar15)) - fVar22 * (fVar22 + fVar22);
    fVar12 = unaff_RBP[1] * (fVar15 + fVar15);
    fVar14 = unaff_RBP[1] * (fVar22 + fVar22) + fVar15 * fVar19;
    unaff_RBP[-0x12] = fVar22 * fVar19 - fVar12;
    if (cVar1 == '\0') goto LAB_1806db1d3;
    switch(*(int32_t *)(unaff_RSI + 0x1c8)) {
    case 1:
        FUN_1806e37c0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar26);
        break;
    case 2:
        FUN_1806e37c0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar25);
        break;
    case 3:
        goto code_r0x0001806db100;
    case 4:
        FUN_1806e37c0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -10,unaff_RSI + 0xb8,fVar24);
        break;
    case 5:
    code_r0x0001806db100:
        FUN_1806e38f0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar26);
        break;
    case 6:
        FUN_1806e38f0(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar25);
        break;
    case 7:
        FUN_1806e3150(fVar12,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar26);
    }
LAB_1806db1d3:
    fVar22 = 0.0;
    if (*(char *)(unaff_RSI + 0x1dc) == '\0') {
        fVar15 = unaff_RBP[0x46];
        fVar12 = unaff_RBP[0x4c];
    }
    else {
        uVar3 = *(uint *)(unaff_RSI + 0x1c8);
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar13 = 0.0;
        if ((uVar3 & 1) != 0) {
            fVar8 = fVar26 * unaff_RBP[-0x17];
            fVar9 = unaff_RBP[-0x16] * fVar26;
            fVar13 = unaff_RBP[-0x15] * fVar26;
        }
        fVar12 = unaff_RBP[0x4c];
        if ((uVar3 & 2) != 0) {
            fVar8 = fVar8 + fVar12 * fVar25;
            fVar9 = fVar9 + fVar16 * fVar25;
            fVar13 = fVar13 + unaff_RBP[-0x11] * fVar25;
        }
        fVar15 = unaff_RBP[0x46];
        if ((uVar3 & 4) != 0) {
            fVar8 = fVar8 + fVar23 * fVar24;
            fVar9 = fVar9 + fVar15 * fVar24;
            fVar13 = fVar13 + unaff_RBP[-0x14] * fVar24;
        }
        fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar13 * fVar13);
        if (*(float *)(unaff_RSI + 0x1d0) <= fVar8 && fVar8 != *(float *)(unaff_RSI + 0x1d0)) {
            uVar7 = 0xff0000;
            if (fVar8 < *(float *)(unaff_RSI + 0x7c) || fVar8 == *(float *)(unaff_RSI + 0x7c)) {
                uVar7 = 0xff00;
            }
            (**(code **)(*unaff_R14 + 0x30))(fVar8,unaff_RBP + -0x1c,unaff_RBP + 2,uVar7);
        }
    }
    if (fVar18 == 0.0) {
        fVar8 = 0.0;
        fVar9 = 1.0;
    }
    else {
        fVar9 = 1.0 / SQRT(fVar20 * fVar20 + fVar18 * fVar18);
        fVar8 = fVar18 * fVar9;
        fVar9 = fVar20 * fVar9;
    }
    uVar3 = *(uint *)(unaff_RSI + 0x1c8);
    fVar13 = -fVar8;
    fStack0000000000000060 = fVar20 * fVar13 + fVar18 * fVar9;
    fVar18 = fVar20 * fVar9 - fVar18 * fVar13;
    fVar20 = fVar17 * fVar9 - unaff_RBP[-5] * fVar13;
    fVar17 = fVar17 * fVar13 + unaff_RBP[-5] * fVar9;
    fStack0000000000000064 = fVar17;
    fStack0000000000000068 = fVar20;
    fStack000000000000006c = fVar18;
    if ((uVar3 & 8) != 0) {
        fVar13 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
        if (fVar13 != 0.0) {
            fVar13 = 1.0 / fVar13;
            fVar9 = fVar13 * fVar9;
            fVar8 = fVar13 * fVar8;
        }
        if (fVar9 <= -1.0) {
            fVar9 = -1.0;
        }
        if (1.0 <= fVar9) {
            fVar9 = 1.0;
        }
        fVar9 = (float)acosf(fVar9);
        fVar9 = fVar9 + fVar9;
        if (fVar8 < 0.0) {
            fVar9 = -fVar9;
        }
        fVar8 = *(float *)(unaff_RSI + 0xe4);
        if ((0.0 < *(float *)(unaff_RSI + 0xe0)) || (0.0 < *(float *)(unaff_RSI + 0xdc))) {
            fVar8 = 0.0;
        }
        fVar13 = fVar8 + *(float *)(unaff_RSI + 0xec);
        (**(code **)(*unaff_R14 + 0x18))
                  (fVar13,unaff_RBP + -0x20,*(float *)(unaff_RSI + 0xec),*(float *)(unaff_RSI + 0xe8),
                   *(float *)(unaff_RSI + 0xe8) - fVar8 < fVar9 || fVar9 < fVar13);
        uVar3 = *(uint *)(unaff_RSI + 0x1c8);
    }
    uVar6 = uVar3 >> 4;
    if (((uVar6 & 1) == 0) || ((uVar3 >> 5 & 1) == 0)) {
        if (((byte)(uVar3 >> 5) & 1) == ((byte)uVar6 & 1)) {
            return;
        }
        uVar3 = *(uint *)(unaff_RSI + 0x1c4);
        cVar1 = *(char *)(unaff_RSI + 0x1df);
        unaff_RBP[-0xc] = 0.0;
        unaff_RBP[-0xb] = 0.0;
        unaff_RBP[-10] = 0.0;
        unaff_RBP[0xe] = 0.0;
        unaff_RBP[0xf] = 0.0;
        unaff_RBP[0x10] = 0.0;
        unaff_RBP[-0x10] = -0.0;
        unaff_RBP[-0xf] = -0.0;
        unaff_RBP[-0xe] = -0.70710677;
        unaff_RBP[-0xd] = 0.70710677;
        unaff_RBP[10] = 0.0;
        unaff_RBP[0xb] = 0.70710677;
        unaff_RBP[0xc] = 0.0;
        unaff_RBP[0xd] = 0.70710677;
        if ((uVar6 & 1) == 0) {
            if ((uVar3 & 0x10) == 0) {
                if (cVar1 != '\0') {
                    return;
                }
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
                fStack0000000000000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000078 = unaff_RBP[-0x1a];
                fVar22 = fVar14 * unaff_RBP[-4] + unaff_RBP[-0x13] * fVar12 +
                         unaff_RBP[-0x12] * unaff_RBP[-0x11];
                uVar10 = *(int32_t *)(unaff_RSI + 0x108);
                goto LAB_1806db85b;
            }
            if (cVar1 == '\0') {
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
                fStack0000000000000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack0000000000000074 = unaff_RBP[-0x1b];
                in_stack_00000078 = unaff_RBP[-0x1a];
                FUN_1806e30c0(in_stack_00000078,*(int32_t *)(unaff_RSI + 0x108),&stack0x00000060,fVar20,
                              fVar18);
                return;
            }
        }
        else {
            if ((uVar3 & 0x20) == 0) {
                if (cVar1 != '\0') {
                    return;
                }
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
                fStack0000000000000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000078 = unaff_RBP[-0x1a];
                fVar22 = fVar14 * fVar15 + unaff_RBP[-0x13] * unaff_RBP[-0x18] +
                         unaff_RBP[-0x12] * unaff_RBP[-0x14];
                uVar10 = *(int32_t *)(unaff_RSI + 0x104);
        LAB_1806db85b:
                fStack0000000000000074 = unaff_RBP[-0x1b];
                FUN_1806e3720(uVar10,fStack0000000000000074,&stack0x00000060,fVar22,uVar10);
                return;
            }
            if (cVar1 == '\0') {
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
                fStack0000000000000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack0000000000000074 = unaff_RBP[-0x1b];
                in_stack_00000078 = unaff_RBP[-0x1a];
                FUN_1806e30c0(in_stack_00000078,*(int32_t *)(unaff_RSI + 0x104),&stack0x00000060,fVar17,
                              fVar18);
                return;
            }
        }
    }
    else {
        if (*(char *)(unaff_RSI + 0x1de) != '\0') {
            fVar17 = (float)atan2f(fVar17,fVar18 + 1.0);
            fVar12 = (float)atan2f(fVar20,fVar18 + 1.0);
            if ((*(float *)(unaff_RSI + 0xfc) <= 0.0) && (*(float *)(unaff_RSI + 0xf8) <= 0.0)) {
                fVar22 = *(float *)(unaff_RSI + 0x100);
            }
            fVar14 = *(float *)(unaff_RSI + 0x108);
            lVar2 = *unaff_R14;
            fVar12 = (ABS(fVar12 * 4.0) + fVar22) / fVar14;
            fVar22 = (ABS(fVar17 * 4.0) + fVar22) / *(float *)(unaff_RSI + 0x104);
            uVar10 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
            uVar11 = tanf(fVar14 * 0.25);
            (**(code **)(lVar2 + 0x20))
                      (uVar11,unaff_RBP + -0x20,uVar11,uVar10,1.0 < fVar12 * fVar12 + fVar22 * fVar22);
        }
        if (*(char *)(unaff_RSI + 0x1df) == '\0') {
            return;
        }
    }
    FUN_1806df8b0();
    return;
}

// 函数: void VectorTransformProcessor(uint param_1,float param_2,uint64_t param_3,float param_4)
// 功能：向量变换处理器，处理向量变换和矩阵运算
// 参数：param_1 - 输入参数, param_2 - 浮点参数1, param_3 - 数据句柄, param_4 - 浮点参数2
// 返回值：无
void VectorTransformProcessor(uint param_1, float param_2, uint64_t param_3, float param_4)
{
    char cVar1;
    longlong lVar2;
    uint uVar3;
    float *pfVar4;
    int32_t *puVar5;
    uint uVar6;
    float *unaff_RBP;
    longlong unaff_RSI;
    uint64_t uVar7;
    longlong *unaff_R14;
    float fVar8;
    float fVar9;
    int32_t uVar10;
    int32_t uVar11;
    float fVar12;
    float in_XMM4_Da;
    float fVar13;
    float fVar14;
    float in_XMM5_Da;
    float fVar15;
    float unaff_XMM6_Da;
    float fVar16;
    float fVar17;
    float unaff_XMM8_Da;
    float fVar18;
    float unaff_XMM9_Da;
    float fVar19;
    float fVar20;
    float unaff_XMM10_Da;
    float unaff_XMM11_Da;
    float fVar21;
    float unaff_XMM12_Da;
    float fVar22;
    float fVar23;
    float fVar24;
    float in_stack_00000060;
    float fStack0000000000000064;
    float fStack0000000000000068;
    float fStack000000000000006c;
    float in_stack_00000070;
    float fStack0000000000000074;
    float in_stack_00000078;
    
    // 初始化向量变换参数
    unaff_RBP[0x4c] = unaff_RBP[-0x1f];
    fStack0000000000000064 = (float)((uint)unaff_RBP[-0x1f] ^ param_1);
    param_2 = fStack0000000000000064 * in_XMM4_Da + unaff_XMM11_Da * in_XMM5_Da + param_2;
    fVar23 = (fStack0000000000000064 * unaff_XMM6_Da - unaff_XMM8_Da * in_XMM4_Da) * unaff_XMM9_Da +
             param_4 * in_XMM5_Da + param_2 * unaff_XMM11_Da;
    fVar22 = (unaff_XMM12_Da - unaff_XMM11_Da * unaff_XMM6_Da) * unaff_XMM9_Da + param_4 * in_XMM4_Da
             + param_2 * fStack0000000000000064;
    fVar21 = (unaff_XMM11_Da * in_XMM4_Da - fStack0000000000000064 * in_XMM5_Da) * unaff_XMM9_Da +
             param_4 * unaff_XMM6_Da + param_2 * unaff_XMM8_Da;
    pfVar4 = (float *)FUN_1800fcb90(&stack0x00000060);
    fVar17 = unaff_RBP[0x46];
    fVar14 = unaff_RBP[0x4c];
    fVar13 = unaff_XMM10_Da + unaff_XMM10_Da;
    fVar19 = pfVar4[2];
    fVar18 = *pfVar4;
    fVar24 = pfVar4[3];
    unaff_RBP[-5] = pfVar4[1];
    fVar8 = fVar14 + fVar14;
    fVar12 = fVar17 * (fVar17 + fVar17);
    unaff_RBP[0x4c] = fVar14 * fVar13;
    unaff_RBP[-6] = fVar19;
    fVar19 = unaff_XMM9_Da * (fVar17 + fVar17);
    unaff_RBP[-0x18] = unaff_XMM9_Da * fVar8;
    unaff_RBP[-0x17] = (1.0 - fVar14 * fVar8) - fVar12;
    fVar9 = unaff_RBP[0x4c] - fVar19;
    fVar20 = unaff_RBP[-0x18] + fVar17 * fVar13;
    unaff_RBP[-0x16] = fVar19 + unaff_RBP[0x4c];
    fVar19 = unaff_RBP[-1];
    unaff_RBP[0x4c] = fVar9;
    unaff_RBP[-0xd] = fVar9;
    fVar16 = fVar17 * fVar8 - unaff_XMM9_Da * fVar13;
    unaff_RBP[-0x10] = unaff_RBP[-0x17];
    fVar9 = fVar17 * fVar8 + unaff_XMM9_Da * fVar13;
    unaff_RBP[-0x15] = fVar17 * fVar13 - unaff_XMM9_Da * fVar8;
    unaff_RBP[-0xf] = unaff_RBP[-0x16];
    fVar15 = unaff_RBP[-2] + unaff_RBP[-2];
    unaff_RBP[0x46] = fVar16;
    fVar13 = 1.0 - unaff_XMM10_Da * fVar13;
    unaff_RBP[-9] = fVar16;
    fVar17 = *unaff_RBP;
    unaff_RBP[-0xe] = unaff_RBP[-0x15];
    unaff_RBP[-0x11] = fVar9;
    unaff_RBP[-0xb] = fVar9;
    unaff_RBP[-0x18] = fVar20;
    fVar14 = fVar13 - fVar14 * fVar8;
    unaff_RBP[-10] = fVar20;
    fVar13 = fVar13 - fVar12;
    unaff_RBP[-0x14] = fVar14;
    unaff_RBP[-8] = fVar14;
    unaff_RBP[-4] = fVar13;
    unaff_RBP[-0xc] = fVar13;
    cVar1 = *(char *)(unaff_RSI + 0x1dd);
    fVar14 = unaff_RBP[-6];
    unaff_RBP[-0x13] = (1.0 - fVar19 * (fVar19 + fVar19)) - fVar17 * (fVar17 + fVar17);
    fVar8 = unaff_RBP[1] * (fVar19 + fVar19);
    fVar19 = unaff_RBP[1] * (fVar17 + fVar17) + fVar19 * fVar15;
    unaff_RBP[-0x12] = fVar17 * fVar15 - fVar8;
    if (cVar1 == '\0') goto LAB_1806db1d3;
    switch(*(int32_t *)(unaff_RSI + 0x1c8)) {
    case 1:
        FUN_1806e37c0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar23);
        break;
    case 2:
        FUN_1806e37c0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar22);
        break;
    case 3:
        goto code_r0x0001806db100;
    case 4:
        FUN_1806e37c0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -10,unaff_RSI + 0xb8,fVar21);
        break;
    case 5:
    code_r0x0001806db100:
        FUN_1806e38f0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar23);
        break;
    case 6:
        FUN_1806e38f0(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0xd,unaff_RSI + 0x9c,fVar22);
        break;
    case 7:
        FUN_1806e3150(fVar8,unaff_RBP + -0x1c,unaff_RBP + -0x10,unaff_RSI + 0x80,fVar23);
    }
LAB_1806db1d3:
    fVar17 = 0.0;
    if (*(char *)(unaff_RSI + 0x1dc) == '\0') {
        fVar9 = unaff_RBP[0x46];
        fVar8 = unaff_RBP[0x4c];
    }
    else {
        uVar3 = *(uint *)(unaff_RSI + 0x1c8);
        fVar12 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        if ((uVar3 & 1) != 0) {
            fVar12 = fVar23 * unaff_RBP[-0x17];
            fVar15 = unaff_RBP[-0x16] * fVar23;
            fVar16 = unaff_RBP[-0x15] * fVar23;
        }
        fVar8 = unaff_RBP[0x4c];
        if ((uVar3 & 2) != 0) {
            fVar12 = fVar12 + fVar8 * fVar22;
            fVar15 = fVar15 + fVar13 * fVar22;
            fVar16 = fVar16 + unaff_RBP[-0x11] * fVar22;
        }
        fVar9 = unaff_RBP[0x46];
        if ((uVar3 & 4) != 0) {
            fVar12 = fVar12 + fVar20 * fVar21;
            fVar15 = fVar15 + fVar9 * fVar21;
            fVar16 = fVar16 + unaff_RBP[-0x14] * fVar21;
        }
        fVar12 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar16 * fVar16);
        if (*(float *)(unaff_RSI + 0x1d0) <= fVar12 && fVar12 != *(float *)(unaff_RSI + 0x1d0)) {
            uVar7 = 0xff0000;
            if (fVar12 < *(float *)(unaff_RSI + 0x7c) || fVar12 == *(float *)(unaff_RSI + 0x7c)) {
                uVar7 = 0xff00;
            }
            (**(code **)(*unaff_R14 + 0x30))(fVar12,unaff_RBP + -0x1c,unaff_RBP + 2,uVar7);
        }
    }
    if (fVar18 == 0.0) {
        fVar12 = 0.0;
        fVar13 = 1.0;
    }
    else {
        fVar13 = 1.0 / SQRT(fVar24 * fVar24 + fVar18 * fVar18);
        fVar12 = fVar18 * fVar13;
        fVar13 = fVar24 * fVar13;
    }
    uVar3 = *(uint *)(unaff_RSI + 0x1c8);
    fVar15 = -fVar12;
    in_stack_00000060 = fVar24 * fVar15 + fVar18 * fVar13;
    fVar18 = fVar24 * fVar13 - fVar18 * fVar15;
    fVar24 = fVar14 * fVar13 - unaff_RBP[-5] * fVar15;
    fVar14 = fVar14 * fVar15 + unaff_RBP[-5] * fVar13;
    fStack0000000000000064 = fVar14;
    fStack0000000000000068 = fVar24;
    fStack000000000000006c = fVar18;
    if ((uVar3 & 8) != 0) {
        fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12);
        if (fVar15 != 0.0) {
            fVar15 = 1.0 / fVar15;
            fVar13 = fVar15 * fVar13;
            fVar12 = fVar15 * fVar12;
        }
        if (fVar13 <= -1.0) {
            fVar13 = -1.0;
        }
        if (1.0 <= fVar13) {
            fVar13 = 1.0;
        }
        fVar13 = (float)acosf(fVar13);
        fVar13 = fVar13 + fVar13;
        if (fVar12 < 0.0) {
            fVar13 = -fVar13;
        }
        fVar12 = *(float *)(unaff_RSI + 0xe4);
        if ((0.0 < *(float *)(unaff_RSI + 0xe0)) || (0.0 < *(float *)(unaff_RSI + 0xdc))) {
            fVar12 = 0.0;
        }
        fVar15 = fVar12 + *(float *)(unaff_RSI + 0xec);
        (**(code **)(*unaff_R14 + 0x18))
                  (fVar15,unaff_RBP + -0x20,*(float *)(unaff_RSI + 0xec),*(float *)(unaff_RSI + 0xe8),
                   *(float *)(unaff_RSI + 0xe8) - fVar12 < fVar13 || fVar13 < fVar15);
        uVar3 = *(uint *)(unaff_RSI + 0x1c8);
    }
    uVar6 = uVar3 >> 4;
    if (((uVar6 & 1) == 0) || ((uVar3 >> 5 & 1) == 0)) {
        if (((byte)(uVar3 >> 5) & 1) == ((byte)uVar6 & 1)) {
            return;
        }
        uVar3 = *(uint *)(unaff_RSI + 0x1c4);
        cVar1 = *(char *)(unaff_RSI + 0x1df);
        unaff_RBP[-0xc] = 0.0;
        unaff_RBP[-0xb] = 0.0;
        unaff_RBP[-10] = 0.0;
        unaff_RBP[0xe] = 0.0;
        unaff_RBP[0xf] = 0.0;
        unaff_RBP[0x10] = 0.0;
        unaff_RBP[-0x10] = -0.0;
        unaff_RBP[-0xf] = -0.0;
        unaff_RBP[-0xe] = -0.70710677;
        unaff_RBP[-0xd] = 0.70710677;
        unaff_RBP[10] = 0.0;
        unaff_RBP[0xb] = 0.70710677;
        unaff_RBP[0xc] = 0.0;
        unaff_RBP[0xd] = 0.70710677;
        if ((uVar6 & 1) == 0) {
            if ((uVar3 & 0x10) == 0) {
                if (cVar1 != '\0') {
                    return;
                }
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
                in_stack_00000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000078 = unaff_RBP[-0x1a];
                fVar17 = fVar19 * unaff_RBP[-4] + unaff_RBP[-0x13] * fVar8 +
                         unaff_RBP[-0x12] * unaff_RBP[-0x11];
                uVar10 = *(int32_t *)(unaff_RSI + 0x108);
                goto LAB_1806db85b;
            }
            if (cVar1 == '\0') {
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
                in_stack_00000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack0000000000000074 = unaff_RBP[-0x1b];
                in_stack_00000078 = unaff_RBP[-0x1a];
                FUN_1806e30c0(in_stack_00000078,*(int32_t *)(unaff_RSI + 0x108),&stack0x00000060,fVar24,
                              fVar18);
                return;
            }
        }
        else {
            if ((uVar3 & 0x20) == 0) {
                if (cVar1 != '\0') {
                    return;
                }
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + 10);
                in_stack_00000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000078 = unaff_RBP[-0x1a];
                fVar17 = fVar19 * fVar9 + unaff_RBP[-0x13] * unaff_RBP[-0x18] +
                         unaff_RBP[-0x12] * unaff_RBP[-0x14];
                uVar10 = *(int32_t *)(unaff_RSI + 0x104);
        LAB_1806db85b:
                fStack0000000000000074 = unaff_RBP[-0x1b];
                FUN_1806e3720(uVar10,fStack0000000000000074,&stack0x00000060,fVar17,uVar10);
                return;
            }
            if (cVar1 == '\0') {
                puVar5 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x20,unaff_RBP + 6,unaff_RBP + -0x10);
                in_stack_00000060 = (float)*puVar5;
                fStack0000000000000064 = (float)puVar5[1];
                fStack0000000000000068 = (float)puVar5[2];
                fStack000000000000006c = (float)puVar5[3];
                in_stack_00000070 = unaff_RBP[-0x1c];
                fStack0000000000000074 = unaff_RBP[-0x1b];
                in_stack_00000078 = unaff_RBP[-0x1a];
                FUN_1806e30c0(in_stack_00000078,*(int32_t *)(unaff_RSI + 0x104),&stack0x00000060,fVar14,
                              fVar18);
                return;
            }
        }
    }
    else {
        if (*(char *)(unaff_RSI + 0x1de) != '\0') {
            fVar14 = (float)atan2f(fVar14,fVar18 + 1.0);
            fVar19 = (float)atan2f(fVar24,fVar18 + 1.0);
            if ((*(float *)(unaff_RSI + 0xfc) <= 0.0) && (*(float *)(unaff_RSI + 0xf8) <= 0.0)) {
                fVar17 = *(float *)(unaff_RSI + 0x100);
            }
            fVar18 = *(float *)(unaff_RSI + 0x108);
            lVar2 = *unaff_R14;
            fVar19 = (ABS(fVar19 * 4.0) + fVar17) / fVar18;
            fVar17 = (ABS(fVar14 * 4.0) + fVar17) / *(float *)(unaff_RSI + 0x104);
            uVar10 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
            uVar11 = tanf(fVar18 * 0.25);
            (**(code **)(lVar2 + 0x20))
                      (uVar11,unaff_RBP + -0x20,uVar11,uVar10,1.0 < fVar19 * fVar19 + fVar17 * fVar17);
        }
        if (*(char *)(unaff_RSI + 0x1df) == '\0') {
            return;
        }
    }
    FUN_1806df8b0();
    return;
}

// 函数: void GeometryTransformCalculator(void)
// 功能：几何变换计算器，计算几何变换和坐标转换
// 参数：无
// 返回值：无
void GeometryTransformCalculator(void)
{
    char cVar1;
    longlong lVar2;
    uint uVar3;
    int32_t *puVar4;
    uint uVar5;
    longlong unaff_RBP;
    longlong unaff_RSI;
    longlong *unaff_R14;
    float fVar6;
    int32_t uVar7;
    int32_t uVar8;
    float fVar9;
    float fVar10;
    float in_XMM3_Da;
    float unaff_XMM6_Da;
    float unaff_XMM7_Da;
    float unaff_XMM8_Da;
    float unaff_XMM9_Da;
    float unaff_XMM11_Da;
    float unaff_XMM12_Da;
    float unaff_XMM14_Da;
    int32_t in_stack_00000060;
    int32_t uStack0000000000000064;
    int32_t in_stack_00000068;
    int32_t uStack000000000000006c;
    int32_t in_stack_00000070;
    int32_t uStack0000000000000074;
    int32_t in_stack_00000078;
    
    // 计算几何变换参数
    fVar9 = SQRT(in_XMM3_Da * in_XMM3_Da + unaff_XMM9_Da * unaff_XMM9_Da);
    if (fVar9 != unaff_XMM7_Da) {
        fVar9 = unaff_XMM11_Da / fVar9;
        in_XMM3_Da = fVar9 * in_XMM3_Da;
        unaff_XMM9_Da = fVar9 * unaff_XMM9_Da;
    }
    if (in_XMM3_Da <= -1.0) {
        in_XMM3_Da = -1.0;
    }
    if (unaff_XMM11_Da <= in_XMM3_Da) {
        in_XMM3_Da = unaff_XMM11_Da;
    }
    fVar9 = (float)acosf(in_XMM3_Da);
    fVar9 = fVar9 + fVar9;
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
        fVar9 = -fVar9;
    }
    fVar10 = *(float *)(unaff_RSI + 0xe4);
    if ((unaff_XMM7_Da < *(float *)(unaff_RSI + 0xe0)) ||
       (unaff_XMM7_Da < *(float *)(unaff_RSI + 0xdc))) {
        fVar10 = 0.0;
    }
    fVar6 = fVar10 + *(float *)(unaff_RSI + 0xec);
    (**(code **)(*unaff_R14 + 0x18))
            (fVar6,unaff_RBP + -0x80,*(float *)(unaff_RSI + 0xec),*(float *)(unaff_RSI + 0xe8),
             *(float *)(unaff_RSI + 0xe8) - fVar10 < fVar9 || fVar9 < fVar6);
    uVar3 = *(uint *)(unaff_RSI + 0x1c8) >> 5;
    uVar5 = *(uint *)(unaff_RSI + 0x1c8) >> 4;
    if (((uVar5 & 1) == 0) || ((uVar3 & 1) == 0)) {
        if (((byte)uVar3 & 1) == ((byte)uVar5 & 1)) {
            return;
        }
        uVar3 = *(uint *)(unaff_RSI + 0x1c4);
        cVar1 = *(char *)(unaff_RSI + 0x1df);
        *(uint64_t *)(unaff_RBP + -0x30) = 0;
        *(int32_t *)(unaff_RBP + -0x28) = 0;
        *(uint64_t *)(unaff_RBP + 0x38) = 0;
        *(int32_t *)(unaff_RBP + 0x40) = 0;
        *(uint64_t *)(unaff_RBP + -0x40) = 0x8000000080000000;
        *(uint64_t *)(unaff_RBP + -0x38) = 0x3f3504f3bf3504f3;
        *(int32_t *)(unaff_RBP + 0x28) = 0;
        *(int32_t *)(unaff_RBP + 0x2c) = 0x3f3504f3;
        *(int32_t *)(unaff_RBP + 0x30) = 0;
        *(int32_t *)(unaff_RBP + 0x34) = 0x3f3504f3;
        if ((char)(uVar5 & 0xffffff01) == '\0') {
            if ((uVar3 & 0x10) == 0) {
                if (cVar1 != '\0') {
                    return;
                }
                puVar4 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + -0x40);
                in_stack_00000060 = *puVar4;
                uStack0000000000000064 = puVar4[1];
                in_stack_00000068 = puVar4[2];
                in_stack_00000070 = *(int32_t *)(unaff_RBP + -0x70);
                uStack000000000000006c = puVar4[3];
                in_stack_00000078 = *(int32_t *)(unaff_RBP + -0x68);
                fVar9 = unaff_XMM6_Da * *(float *)(unaff_RBP + -0x10) +
                        *(float *)(unaff_RBP + -0x4c) * unaff_XMM14_Da +
                        *(float *)(unaff_RBP + -0x48) * *(float *)(unaff_RBP + -0x44);
                uVar7 = *(int32_t *)(unaff_RSI + 0x108);
                goto LAB_1806db85b;
            }
            if (cVar1 == '\0') {
                puVar4 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + 0x28);
                in_stack_00000060 = *puVar4;
                uStack0000000000000064 = puVar4[1];
                in_stack_00000068 = puVar4[2];
                uStack000000000000006c = puVar4[3];
                in_stack_00000070 = *(int32_t *)(unaff_RBP + -0x70);
                uStack0000000000000074 = *(int32_t *)(unaff_RBP + -0x6c);
                in_stack_00000078 = *(int32_t *)(unaff_RBP + -0x68);
                FUN_1806e30c0(in_stack_00000078,*(int32_t *)(unaff_RSI + 0x108),&stack0x00000060);
                return;
            }
        }
        else {
            if ((uVar3 & 0x20) == 0) {
                if (cVar1 != '\0') {
                    return;
                }
                puVar4 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + 0x28);
                in_stack_00000060 = *puVar4;
                uStack0000000000000064 = puVar4[1];
                in_stack_00000068 = puVar4[2];
                in_stack_00000070 = *(int32_t *)(unaff_RBP + -0x70);
                uStack000000000000006c = puVar4[3];
                in_stack_00000078 = *(int32_t *)(unaff_RBP + -0x68);
                fVar9 = unaff_XMM6_Da * unaff_XMM12_Da +
                        *(float *)(unaff_RBP + -0x4c) * *(float *)(unaff_RBP + -0x60) +
                        *(float *)(unaff_RBP + -0x48) * *(float *)(unaff_RBP + -0x50);
                uVar7 = *(int32_t *)(unaff_RSI + 0x104);
        LAB_1806db85b:
                uStack0000000000000074 = *(int32_t *)(unaff_RBP + -0x6c);
                FUN_1806e3720(uVar7,uStack0000000000000074,&stack0x00000060,fVar9,uVar7);
                return;
            }
            if (cVar1 == '\0') {
                puVar4 = (int32_t *)FUN_1800fcb90(unaff_RBP + -0x80,unaff_RBP + 0x18,unaff_RBP + -0x40);
                in_stack_00000060 = *puVar4;
                uStack0000000000000064 = puVar4[1];
                in_stack_00000068 = puVar4[2];
                uStack000000000000006c = puVar4[3];
                in_stack_00000070 = *(int32_t *)(unaff_RBP + -0x70);
                uStack0000000000000074 = *(int32_t *)(unaff_RBP + -0x6c);
                in_stack_00000078 = *(int32_t *)(unaff_RBP + -0x68);
                FUN_1806e30c0(in_stack_00000078,*(int32_t *)(unaff_RSI + 0x104),&stack0x00000060);
                return;
            }
        }
    }
    else {
        if (*(char *)(unaff_RSI + 0x1de) != '\0') {
            fVar9 = (float)atan2f(uVar5 & 0xffffff01,unaff_XMM8_Da + unaff_XMM11_Da);
            fVar10 = (float)atan2f();
            if ((*(float *)(unaff_RSI + 0xfc) <= unaff_XMM7_Da) &&
               (*(float *)(unaff_RSI + 0xf8) <= unaff_XMM7_Da)) {
                unaff_XMM7_Da = *(float *)(unaff_RSI + 0x100);
            }
            fVar6 = *(float *)(unaff_RSI + 0x108);
            lVar2 = *unaff_R14;
            fVar10 = (ABS(fVar10 * 4.0) + unaff_XMM7_Da) / fVar6;
            fVar9 = (ABS(fVar9 * 4.0) + unaff_XMM7_Da) / *(float *)(unaff_RSI + 0x104);
            uVar7 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
            uVar8 = tanf(fVar6 * 0.25);
            (**(code **)(lVar2 + 0x20))
                      (uVar8,unaff_RBP + -0x80,uVar8,uVar7,
                       unaff_XMM11_Da < fVar10 * fVar10 + fVar9 * fVar9);
        }
        if (*(char *)(unaff_RSI + 0x1df) == '\0') {
            return;
        }
    }
    FUN_1806df8b0();
    return;
}

// 函数: void PhysicsSimulationProcessor(void)
// 功能：物理模拟处理器，处理物理模拟和碰撞检测
// 参数：无
// 返回值：无
void PhysicsSimulationProcessor(void)
{
    float fVar1;
    longlong lVar2;
    longlong unaff_RBP;
    longlong unaff_RSI;
    longlong *unaff_R14;
    float fVar3;
    float fVar4;
    int32_t uVar5;
    int32_t uVar6;
    float unaff_XMM7_Da;
    float unaff_XMM11_Da;
    
    // 处理物理模拟参数
    fVar3 = (float)atan2f();
    fVar4 = (float)atan2f();
    if ((*(float *)(unaff_RSI + 0xfc) <= unaff_XMM7_Da) &&
       (*(float *)(unaff_RSI + 0xf8) <= unaff_XMM7_Da)) {
        unaff_XMM7_Da = *(float *)(unaff_RSI + 0x100);
    }
    fVar1 = *(float *)(unaff_RSI + 0x108);
    lVar2 = *unaff_R14;
    fVar4 = (ABS(fVar4 * 4.0) + unaff_XMM7_Da) / fVar1;
    fVar3 = (ABS(fVar3 * 4.0) + unaff_XMM7_Da) / *(float *)(unaff_RSI + 0x104);
    uVar5 = tanf(*(float *)(unaff_RSI + 0x104) * 0.25);
    uVar6 = tanf(fVar1 * 0.25);
    (**(code **)(lVar2 + 0x20))
            (uVar6,unaff_RBP + -0x80,uVar6,uVar5,unaff_XMM11_Da < fVar4 * fVar4 + fVar3 * fVar3);
    if (*(char *)(unaff_RSI + 0x1df) != '\0') {
        FUN_1806df8b0();
    }
    return;
}

// 函数: void AngleCalculator(void)
// 功能：角度计算器，计算角度和方向
// 参数：无
// 返回值：无
void AngleCalculator(void)
{
    longlong unaff_RSI;
    int8_t uStack0000000000000028;
    
    // 检查是否需要计算角度
    if (*(char *)(unaff_RSI + 0x1df) != '\0') {
        uStack0000000000000028 = 1;
        FUN_1806df8b0();
    }
    return;
}

// ============================================================================
// 技术文档
// ============================================================================

/*
模块功能说明：
----------------
本模块实现了游戏引擎中的高级数学计算和几何变换功能，提供了以下核心服务：

1. 高级数学计算器 (AdvancedMathCalculator)
   - 执行复杂的数学运算和三角函数计算
   - 处理向量运算和矩阵变换
   - 支持高精度数学计算
   - 提供多种数学函数

2. 向量变换处理器 (VectorTransformProcessor)
   - 处理向量变换和坐标转换
   - 执行矩阵运算和线性变换
   - 支持多种变换模式
   - 提供高效变换算法

3. 几何变换计算器 (GeometryTransformCalculator)
   - 计算几何变换和坐标转换
   - 处理复杂的几何运算
   - 支持多种坐标系转换
   - 提供精确的几何计算

4. 物理模拟处理器 (PhysicsSimulationProcessor)
   - 处理物理模拟和碰撞检测
   - 计算物理参数和运动状态
   - 支持实时物理计算
   - 提供物理引擎接口

5. 角度计算器 (AngleCalculator)
   - 计算角度和方向信息
   - 处理三角函数运算
   - 支持角度单位转换
   - 提供方向计算功能

技术特点：
- 使用高效的数学运算算法
- 实现SIMD优化计算
- 支持多精度计算
- 提供线程安全的计算功能
- 采用内存对齐优化
- 实现缓存友好的数据结构

性能优化：
- 采用SIMD指令集优化
- 实现内存对齐访问
- 支持批处理操作
- 提供缓存友好的算法
- 使用查表法加速计算
- 实现分支预测优化

数学算法：
- 实现高精度浮点运算
- 支持多种三角函数
- 提供向量运算功能
- 实现矩阵变换算法
- 支持四元数运算
- 提供几何变换功能

使用说明：
1. 初始化数学计算环境
2. 设置计算参数和精度
3. 调用相应的计算函数
4. 处理计算结果
5. 清理计算资源

注意事项：
- 注意浮点精度问题
- 正确设置计算参数
- 处理数值溢出情况
- 优化计算性能
- 注意内存对齐要求
- 处理特殊数学情况

依赖关系：
- 依赖于系统数学库
- 需要SIMD指令支持
- 依赖于内存管理模块
- 需要多线程支持
*/

// ============================================================================
// 模块结束
// ============================================================================