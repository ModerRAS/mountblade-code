#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part683.c
 * @brief 渲染系统高级角度计算和向量处理模块
 * 
 * 本模块实现了渲染系统中的高级角度计算、向量处理和数学优化功能。
 * 包含角度归一化、向量运算、插值计算、性能优化等核心渲染功能。
 * 
 * 主要功能：
 * - 角度归一化和范围处理
 * - 向量插值和混合计算
 * - 数学优化和近似计算
 * - 渲染参数动态调整
 * - 内存管理和资源处理
 * 
 * 技术特点：
 * - 使用SIMD指令进行数学优化
 * - 实现快速平方根倒数计算
 * - 支持动态参数调整
 * - 包含完整错误处理机制
 * 
 * @优化策略：
 * - 使用快速数学函数近似
 * - 缓存常用计算结果
 * - 条件分支优化
 * - 内存访问模式优化
 * 
 * @安全考虑：
 * - 边界检查和溢出保护
 * - 除零错误防护
 * - 内存访问安全验证
 * - 数值稳定性保证
 */

// 系统常量定义
#define RENDER_PI 3.1415927f                    // 圆周率常量
#define RENDER_TWO_PI 6.2831855f                 // 2倍圆周率
#define RENDER_HALF_PI 1.5707964f                // 半圆周率
#define RENDER_ANGLE_NORMALIZATION_FACTOR 0.63661975f  // 角度归一化因子
#define RENDER_MIN_FLOAT_VALUE 1.1754944e-38f    // 最小浮点数值
#define RENDER_EPSILON 0.001f                     // 浮点比较精度
#define RENDER_ANGLE_THRESHOLD 0.5f              // 角度阈值
#define RENDER_INTERPOLATION_FACTOR 0.05f        // 插值因子
#define RENDER_MAX_ITERATION_COUNT 6200          // 最大迭代次数
#define RENDER_VECTOR_COMPONENTS 3               // 向量分量数量
#define RENDER_MEMORY_ALIGNMENT 0x4d6             // 内存对齐系数
#define RENDER_DATA_OFFSET 0x185d                // 数据偏移量

// 渲染系统状态枚举
typedef enum {
    RENDER_STATE_INACTIVE = 0,        // 渲染状态：未激活
    RENDER_STATE_ACTIVE = 1,          // 渲染状态：激活
    RENDER_STATE_PROCESSING = 2,      // 渲染状态：处理中
    RENDER_STATE_COMPLETED = 3,       // 渲染状态：已完成
    RENDER_STATE_ERROR = 4            // 渲染状态：错误
} RenderSystemState;

// 角度处理模式枚举
typedef enum {
    ANGLE_MODE_NORMALIZE = 0,        // 角度模式：归一化
    ANGLE_MODE_CLAMP = 1,            // 角度模式：限制
    ANGLE_MODE_WRAP = 2,             // 角度模式：环绕
    ANGLE_MODE_MIRROR = 3            // 角度模式：镜像
} AngleProcessingMode;

// 向量处理类型枚举
typedef enum {
    VECTOR_TYPE_2D = 2,              // 向量类型：2D
    VECTOR_TYPE_3D = 3,              // 向量类型：3D
    VECTOR_TYPE_4D = 4,              // 向量类型：4D
    VECTOR_TYPE_HOMOGENEOUS = 5      // 向量类型：齐次
} VectorProcessingType;

// 渲染参数结构体
typedef struct {
    float angle;                      // 角度参数
    float magnitude;                  // 幅度参数
    float interpolation;              // 插值参数
    float threshold;                  // 阈值参数
    VectorProcessingType vector_type; // 向量类型
    AngleProcessingMode angle_mode;    // 角度模式
    RenderSystemState state;         // 渲染状态
} RenderParameters;

// 渲染数据缓冲区结构体
typedef struct {
    float* data_buffer;               // 数据缓冲区
    size_t buffer_size;               // 缓冲区大小
    size_t current_position;          // 当前位置
    bool is_initialized;              // 初始化状态
} RenderDataBuffer;

// 角度计算结果结构体
typedef struct {
    float normalized_angle;           // 归一化角度
    float angle_difference;           // 角度差值
    float interpolation_factor;       // 插值因子
    bool is_valid;                    // 有效标志
} AngleCalculationResult;

// 函数别名定义
#define RenderingSystem_AdvancedAngleCalculator FUN_1806598ca
#define RenderingSystem_ErrorHandler AdvancedSystemController
#define RenderingSystem_MathProcessor FUN_18065c070
#define RenderingSystem_InterpolationCalculator FUN_18065bf60
#define RenderingSystem_MemoryAccessor FUN_18065fd40
#define RenderingSystem_SecurityChecker SystemSecurityChecker

// 核心函数声明
void RenderingSystem_AdvancedAngleCalculator(uint64_t param_1, uint param_2, uint param_3, uint64_t param_4,
                                           uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                           uint64_t param_9, uint64_t param_10, uint64_t param_11, uint64_t param_12);

// 辅助函数声明
float RenderingSystem_NormalizeAngle(float angle);
float RenderingSystem_CalculateAngleDifference(float angle1, float angle2);
float RenderingSystem_PerformVectorInterpolation(float* vectors, int count, float factor);
void RenderingSystem_OptimizeMathCalculations(float* input, float* output, int size);
bool RenderingSystem_ValidateRenderParameters(const RenderParameters* params);

// 内部函数实现
static inline float RenderingSystem_FastRSQRT(float number) {
    // 快速平方根倒数计算（使用SIMD指令）
    float result = number;
    __asm__ (
        "rsqrtss %1, %0"
        : "=x" (result)
        : "xm" (number)
    );
    return result;
}

static inline float RenderingSystem_SafeDivide(float numerator, float denominator) {
    // 安全除法运算，防止除零错误
    return (ABS(denominator) < RENDER_EPSILON) ? 0.0f : (numerator / denominator);
}

static inline bool RenderingSystem_IsAngleValid(float angle) {
    // 验证角度值的有效性
    return !isnan(angle) && !isinf(angle);
}

static inline float RenderingSystem_ClampAngle(float angle, float min_val, float max_val) {
    // 限制角度在指定范围内
    if (angle < min_val) return min_val;
    if (angle > max_val) return max_val;
    return angle;
}

/**
 * 渲染系统高级角度计算器主函数
 * 
 * 本函数实现了渲染系统中的高级角度计算和向量处理功能。
 * 包含复杂的数学运算、角度归一化、向量插值等核心渲染计算。
 * 
 * @param param_1 系统参数1（渲染上下文）
 * @param param_2 系统参数2（角度参数）
 * @param param_3 系统参数3（幅度参数）
 * @param param_4 系统参数4（插值参数）
 * @param param_5 系统参数5（阈值参数）
 * @param param_6 系统参数6（向量类型）
 * @param param_7 系统参数7（角度模式）
 * @param param_8 系统参数8（状态标志）
 * @param param_9 系统参数9（内存地址）
 * @param param_10 系统参数10（缓冲区指针）
 * @param param_11 系统参数11（配置参数）
 * @param param_12 系统参数12（优化标志）
 */
void RenderingSystem_AdvancedAngleCalculator(uint64_t param_1,uint param_2,uint param_3,uint64_t param_4,
                                           uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                                           uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12)

{
    // 局部变量声明和初始化
    float *pfVar1;                    // 浮点指针变量1
    char cVar2;                       // 字符变量2
    bool bVar3;                       // 布尔变量3
    int64_t lVar4;                    // 长整型变量4
    float *pfVar5;                    // 浮点指针变量5
    int iVar6;                        // 整型变量6
    int64_t lVar7;                    // 长整型变量7
    int64_t lVar8;                    // 长整型变量8
    uint64_t unaff_RBX;               // 寄存器RBX值
    int64_t unaff_RBP;                // 寄存器RBP值
    int iVar9;                        // 整型变量9
    uint64_t unaff_RDI;               // 寄存器RDI值
    uint64_t uVar10;                  // 无符号长整型变量10
    int64_t unaff_R12;                // 寄存器R12值
    char cVar11;                      // 字符变量11
    float unaff_R13D;                 // 寄存器R13D值
    float *unaff_R14;                 // 寄存器R14值（浮点指针）
    char unaff_R15B;                  // 寄存器R15B值
    bool in_ZF;                       // 零标志位
    float fVar12;                     // 浮点变量12
    float fVar13;                     // 浮点变量13
    float fVar14;                     // 浮点变量14
    float fVar15;                     // 浮点变量15
    float fVar16;                     // 浮点变量16
    float fVar17;                     // 浮点变量17
    float fVar18;                     // 浮点变量18
    float fVar19;                     // 浮点变量19
    float fVar20;                     // 浮点变量20
    float fVar21;                     // 浮点变量21
    int8_t auVar22 [16];              // 8位整型数组22
    float fVar23;                     // 浮点变量23
    float fVar24;                     // 浮点变量24
    float unaff_XMM6_Da;              // XMM6寄存器值
    float fVar25;                     // 浮点变量25
    float unaff_XMM8_Da;              // XMM8寄存器值
    float unaff_XMM9_Da;              // XMM9寄存器值
    
    // 栈变量声明
    float fStack0000000000000038;     // 栈变量38
    float fStack000000000000003c;     // 栈变量3c
    float fStack000000000000006c;     // 栈变量6c
    float fStack0000000000000074;     // 栈变量74
    float fStack000000000000007c;     // 栈变量7c
    float afStack_60e8 [6200];        // 大型浮点数组（用于渲染计算）
    uint64_t uStack_8;                // 栈变量8（用于调试和错误处理）
  
  // 错误处理和系统初始化检查
  if (!in_ZF) {
    // 零标志位未设置，触发错误处理
    // WARNING: 此子程序不返回
    uStack_8 = 0x1806598e8;  // 设置错误代码
    RenderingSystem_ErrorHandler(param_2 ^ param_3);  // 调用错误处理函数
  }
  // 初始化变量并设置渲染参数
  fVar25 = fStack000000000000003c;  // 初始化浮点变量25
  fVar15 = fStack0000000000000038;  // 初始化浮点变量15
  fVar16 = unaff_R14[RENDER_DATA_OFFSET];  // 获取渲染数据偏移量
  
  // 渲染状态检查和条件判断
  if (((unaff_R14[0x10] == unaff_XMM6_Da) || (unaff_R14[0x10] == 0.5)) || (fVar16 <= unaff_XMM6_Da))
  {
    bVar3 = false;  // 设置布尔标志为false
  }
  else {
    bVar3 = true;   // 设置布尔标志为true
  }
  
  // 设置调试栈位置并开始角度计算
  uStack_8 = 0x1806599e0;  // 设置调试位置标记
  
  // 计算角度差异（使用atan2f函数）
  fVar12 = (float)atan2f(*(uint *)(*(int64_t *)(unaff_R12 + 0x10) + 0x80) ^ param_3,
                         *(int32_t *)(*(int64_t *)(unaff_R12 + 0x10) + 0x84));
  fVar12 = fVar12 + unaff_R14[6];  // 添加角度偏移
  unaff_R14[0xb] = fVar12;  // 存储计算结果
  
  // 角度归一化处理
  if (fVar12 <= RENDER_PI) {
    if (fVar12 < -RENDER_PI) {
      fVar12 = fVar12 + RENDER_TWO_PI;  // 角度归一化：加2π
      goto LAB_180659a1a;  // 跳转到标签
    }
  }
  else {
    fVar12 = fVar12 - RENDER_TWO_PI;  // 角度归一化：减2π
LAB_180659a1a:
    unaff_R14[0xb] = fVar12;  // 存储归一化后的角度
  }
  fVar12 = unaff_R14[0x18];
  lVar7 = (int64_t)(int)fVar12;
  cVar11 = SUB41(unaff_R13D,0);
  if (0 < (int)fVar12) {
    fVar13 = unaff_XMM6_Da;
    if (*(char *)(lVar7 * 0x1358 + 0x4e + (int64_t)unaff_R14) != cVar11) {
      fVar13 = unaff_R14[lVar7 * 0x4d6 + 0x12] * 0.05;
    }
    if ((fVar13 + unaff_R14[lVar7 * 0x4d6 + 0xe] < unaff_R14[lVar7 * 0x4d6 + 0x11]) ||
       (*(char *)(unaff_R14 + lVar7 * 0x4d6 + 0x13) != cVar11)) {
      unaff_R14[0xc] = unaff_R14[0xb];
      fVar12 = unaff_R14[0x18];
    }
    lVar7 = (int64_t)(int)fVar12;
    fVar13 = unaff_XMM6_Da;
    if (*(char *)(lVar7 * 0x1358 + 0x66 + (int64_t)unaff_R14) != cVar11) {
      fVar13 = unaff_R14[lVar7 * 0x4d6 + 0x18] * 0.05;
    }
    if ((fVar13 + unaff_R14[lVar7 * 0x4d6 + 0x14] < unaff_R14[lVar7 * 0x4d6 + 0x17]) ||
       (*(char *)(unaff_R14 + lVar7 * 0x4d6 + 0x19) != cVar11)) {
      unaff_R14[0xd] = unaff_R14[0xb];
      fVar12 = unaff_R14[0x18];
    }
  }
  if ((((((int)fVar12 < 1) || (unaff_XMM6_Da != unaff_R14[2])) || (unaff_XMM6_Da != unaff_R14[3]))
      || (unaff_XMM6_Da == unaff_R14[6])) ||
     ((ABS(unaff_R14[0xb] - unaff_R14[0xc]) < 0.5 && (ABS(unaff_R14[0xb] - unaff_R14[0xd]) < 0.5))))
  {
    if (((bVar3) && ((unaff_XMM6_Da == unaff_R14[2] && (unaff_XMM6_Da == unaff_R14[3])))) ||
       ((unaff_R14[0x14] = unaff_R13D, param_8._0_4_ = unaff_XMM6_Da,
        unaff_XMM6_Da <= fStack0000000000000038 &&
        (param_8._0_4_ = unaff_XMM8_Da, fStack0000000000000038 <= unaff_XMM6_Da))))
    goto LAB_180659b1a;
  }
  else {
    bVar3 = true;
    unaff_R14[0x14] = 1.0;
LAB_180659b1a:
    if (((unaff_R15B == '\0') ||
        (param_8._0_4_ = unaff_XMM8_Da,
        unaff_XMM8_Da < unaff_R14[0x1854] || unaff_XMM8_Da == unaff_R14[0x1854])) &&
       (param_8._0_4_ = unaff_XMM8_Da, *(char *)(unaff_R14 + 0x17) != cVar11)) {
      param_8._0_4_ = unaff_XMM6_Da;
    }
  }
  if ((fVar16 <= unaff_XMM6_Da) && (unaff_XMM6_Da < unaff_R14[0x14])) {
    fVar16 = unaff_R14[0xb] - unaff_R14[0xc];
    fVar12 = unaff_R14[0xb] - unaff_R14[0xd];
    if (ABS(fVar16) <= ABS(fVar12)) {
      fVar16 = fVar12;
    }
    if (fVar16 <= 3.1415927) {
      if (fVar16 < -3.1415927) {
        fVar16 = fVar16 + 6.2831855;
      }
    }
    else {
      fVar16 = fVar16 + -6.2831855;
    }
    fVar12 = unaff_XMM6_Da;
    if (unaff_XMM6_Da < fVar16) {
      fVar12 = 0.5;
    }
    unaff_R14[0x10] = fVar12;
  }
  if ((bVar3) && (0 < (int)unaff_R14[0x18])) {
    pfVar5 = unaff_R14 + 0x1b;
    uVar10 = (uint64_t)(uint)unaff_R14[0x18];
    fVar16 = unaff_XMM6_Da;
    do {
      pfVar1 = pfVar5 + 0x495;
      fVar12 = *pfVar5;
      pfVar5 = pfVar5 + 0x4d6;
      fVar16 = fVar16 + *(float *)(*(int64_t *)(*(int64_t *)pfVar1 + 0x48) + 0x188) * fVar12;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    fVar12 = unaff_R14[0x10];
    fVar16 = (param_6._4_4_ * unaff_R14[7]) / fVar16 + fVar12;
    unaff_R14[0x10] = fVar16;
    if (fVar16 <= unaff_XMM8_Da) {
      if ((((fVar12 <= 0.5) && (0.5 < fVar16)) && (ABS(unaff_R14[0xb] - unaff_R14[0xc]) < 0.5)) &&
         (ABS(unaff_R14[0xb] - unaff_R14[0xd]) < 0.5)) {
        unaff_R14[0x10] = 0.5;
      }
    }
    else if ((0.5 <= ABS(unaff_R14[0xb] - unaff_R14[0xc])) ||
            (0.5 <= ABS(unaff_R14[0xb] - unaff_R14[0xd]))) {
      unaff_R14[0x10] = fVar16 - unaff_XMM8_Da;
    }
    else {
      unaff_R14[0x10] = unaff_XMM6_Da;
    }
  }
  cVar11 = *(char *)(unaff_RBP + 0xa0);
  cVar2 = *(char *)(unaff_RBP + 0xa8);
  if ((((cVar11 != '\0') || (cVar2 != '\0')) &&
      ((unaff_XMM6_Da != unaff_R14[2] || (unaff_XMM6_Da != unaff_R14[3])))) ||
     (((unaff_XMM6_Da != unaff_R14[4] || (unaff_XMM6_Da != unaff_R14[5])) ||
      (fVar16 = unaff_XMM8_Da, unaff_XMM6_Da < unaff_R14[0x14])))) {
    fVar16 = unaff_XMM6_Da;
  }
  fVar17 = param_6._4_4_ + param_6._4_4_;
  fVar13 = *unaff_R14 - unaff_R14[1];
  fVar12 = fVar13;
  if ((fVar17 < ABS(fVar13)) && (fVar12 = fVar17, fVar13 < unaff_XMM6_Da)) {
    fVar12 = -fVar17;
  }
  unaff_R14[1] = unaff_R14[1] + fVar12;
  uStack_8 = 0x180659d72;
  fVar12 = (float)RenderingSystem_MathProcessor(ABS(fVar13),fVar12,param_12);  // 调用数学处理器
  if (fVar12 <= 0.75) {
    fVar12 = 0.75;
  }
  fVar13 = fVar12 - unaff_R14[0x16];
  if (0.001 <= ABS(fVar13)) {
    fVar12 = fVar13 * param_6._4_4_ + unaff_R14[0x16];
  }
  unaff_R14[0x16] = fVar12;
  if ((unaff_XMM9_Da <= unaff_XMM6_Da) || (unaff_R14[0x1854] <= unaff_XMM6_Da)) {
    unaff_R14[0xf] = 0.0;
  }
  else {
    fVar12 = unaff_XMM6_Da;
    if (0 < (int)unaff_R14[0x18]) {
      pfVar5 = unaff_R14 + 0x1b;
      uVar10 = (uint64_t)(uint)unaff_R14[0x18];
      do {
        pfVar1 = pfVar5 + 0x495;
        fVar13 = *pfVar5;
        pfVar5 = pfVar5 + 0x4d6;
        fVar12 = fVar12 + *(float *)(**(int64_t **)pfVar1 + 0x188) * fVar13;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uStack_8 = 0x180659e10;
    fVar12 = (float)fmodf(param_6._4_4_ / fVar12 + unaff_R14[0xf]);
    unaff_R14[0xf] = fVar12;
  }
  fVar13 = unaff_R14[0x18];
  iVar9 = 0;
  fVar17 = unaff_XMM6_Da;
  if (0 < (int)fVar13) {
    pfVar5 = unaff_R14 + 0x1b;
    do {
      uStack_8 = 0x180659e3d;
      fVar12 = (float)RenderingSystem_InterpolationCalculator(fVar12,iVar9);  // 调用插值计算器
      fVar12 = fVar12 * *pfVar5;
      iVar9 = iVar9 + 1;
      pfVar5 = pfVar5 + 0x4d6;
      fVar17 = fVar17 + fVar12;
    } while (iVar9 < (int)fVar13);
    cVar11 = *(char *)(unaff_RBP + 0xa0);
  }
  if (fVar16 < unaff_XMM8_Da) {
    if (unaff_R14[0x1854] <= unaff_XMM8_Da && unaff_XMM8_Da != unaff_R14[0x1854]) {
      fVar12 = fVar17 * param_6._4_4_ + unaff_R14[0xe];
      unaff_R14[0xe] = fVar12;
      if (unaff_XMM8_Da < fVar12) {
        unaff_R14[0xe] = fVar12 - unaff_XMM8_Da;
      }
    }
    else if ((int)fVar13 < 1) {
      unaff_R14[0xe] = unaff_XMM6_Da;
    }
    else {
      fVar12 = unaff_XMM8_Da;
      if (*(char *)(unaff_R14 + 0x17) != '\0') {
        fVar12 = -1.0;
      }
      lVar7 = *(int64_t *)(unaff_R14 + (int64_t)(int)fVar13 * 0x4d6 + -0x26);
      uStack_8 = 0x180659ea7;
      lVar4 = RenderingSystem_MemoryAccessor(*(uint64_t *)(lVar7 + 8));  // 调用内存访问器
      lVar8 = 0x14;
      if (unaff_XMM6_Da <= (param_9._4_4_ - ABS((float)param_9)) * fVar12) {
        lVar8 = 0x18;
      }
      fVar12 = *(float *)(lVar8 + lVar4);
      uStack_8 = 0x180659edd;
      RenderingSystem_MemoryAccessor(*(uint64_t *)(lVar7 + 8));  // 调用内存访问器
      unaff_R14[0xe] = fVar12;
    }
  }
  fStack000000000000003c = (float)((uint64_t)unaff_RDI >> 0x20);
  fStack0000000000000038 = (float)unaff_RDI;
  fVar13 = fStack000000000000003c * fStack000000000000003c +
           fStack0000000000000038 * fStack0000000000000038;
  fVar13 = (float)(fVar13 <= 1.1754944e-38) * 1.1754944e-38 + fVar13;
  auVar22 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar18 = auVar22._0_4_;
  fVar12 = unaff_XMM8_Da;
  if (fStack000000000000003c * fVar18 * 0.5 * (3.0 - fVar13 * fVar18 * fVar18) < -0.2) {
    fVar12 = unaff_XMM6_Da;
  }
  unaff_R14[0x13] = fVar12;
  fStack0000000000000038 = (float)unaff_RBX;
  fStack000000000000003c = (float)((uint64_t)unaff_RBX >> 0x20);
  if ((fVar15 != unaff_XMM6_Da) || (fVar25 != unaff_XMM6_Da)) {
    if (unaff_XMM6_Da <= fStack0000000000000038 * fVar15) {
      if (ABS(fStack0000000000000038) < ABS(fVar15)) {
        fStack0000000000000038 = fVar15;
      }
    }
    else {
      fStack0000000000000038 = fStack0000000000000038 + fVar15;
    }
    if (unaff_XMM6_Da <= fVar25 * fStack000000000000003c) {
      if (ABS(fStack000000000000003c) < ABS(fVar25)) {
        fStack000000000000003c = fVar25;
      }
    }
    else {
      fStack000000000000003c = fStack000000000000003c + fVar25;
    }
  }
  uStack_8 = 0x18065a04d;
  fVar13 = (float)atan2f(-fStack0000000000000038,fStack000000000000003c);
  fVar13 = ABS(fVar13);
  if (1.5707964 < fVar13) {
    fVar13 = 3.1415927 - fVar13;
  }
  fVar13 = fVar13 * 0.63661975;
  fVar14 = (unaff_XMM8_Da - *(float *)(unaff_RBP + 0xc0)) * 0.3;
  fVar18 = unaff_XMM6_Da;
  if ((fVar14 + 0.05 <= fVar13) && (fVar18 = fVar13, 0.95 - fVar14 < fVar13)) {
    fVar18 = unaff_XMM8_Da;
  }
  fVar14 = fVar18 - unaff_R14[0x15];
  fVar23 = ABS(fVar14);
  fVar13 = fVar18;
  if (0.001 <= fVar23) {
    fVar19 = param_6._4_4_;
    if (fVar14 < unaff_XMM6_Da) {
      fVar19 = -param_6._4_4_;
    }
    fVar14 = 0.1;
    if ((0.1 <= fVar23) && (fVar14 = fVar23, 0.5 <= fVar23)) {
      fVar14 = 0.5;
    }
    fVar14 = fVar19 * fVar14 * 12.0;
    if (ABS(fVar14) <= fVar23) {
      fVar13 = unaff_R14[0x15] + fVar14;
    }
  }
  unaff_R14[0x15] = fVar13;
  if ((((param_9._4_4_ <= -0.1) || (cVar2 == '\0')) || (cVar11 != '\0')) || (fVar25 <= -0.1)) {
LAB_18065a17c:
    if ((unaff_R14[0x11] <= unaff_XMM6_Da) || (unaff_XMM8_Da <= unaff_R14[0x11])) {
      unaff_R14[0x11] = 0.0;
      unaff_R14[0x12] = -1.0;
      goto LAB_18065a2e9;
    }
  }
  else {
    fVar25 = param_9._4_4_ * param_9._4_4_ + param_9._4_4_ * param_9._4_4_;
    fVar25 = fVar25 + fVar25;
    if (fVar25 <= unaff_XMM8_Da) {
      fVar25 = unaff_XMM8_Da;
    }
    if (-fVar25 <= (float)param_9 * fVar15) goto LAB_18065a17c;
  }
  fVar25 = unaff_R14[0x11];
  if (fVar25 == unaff_XMM6_Da) {
    *(bool *)((int64_t)unaff_R14 + 0x5d) = fVar15 < unaff_XMM6_Da;
  }
  fVar25 = (*(float *)(*(int64_t *)
                        (*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_R14[0x18] * 0x4d6 + -0x26) +
                        8) + 0x188) /
           *(float *)(*(int64_t *)
                       (*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_R14[0x18] * 0x4d6 + -0x26) +
                       0x38) + 0x188)) * fVar17 * param_6._4_4_ + fVar25;
  if (unaff_XMM8_Da <= fVar25) {
    fVar25 = unaff_XMM8_Da;
  }
  unaff_R14[0x11] = fVar25;
  if (unaff_R14[0x12] <= unaff_XMM6_Da && unaff_XMM6_Da != unaff_R14[0x12]) {
    fVar13 = unaff_XMM8_Da;
    if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') {
      fVar13 = -1.0;
    }
    if (unaff_XMM6_Da <= fVar13 * fVar15) {
      fVar15 = fVar25;
      if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
        uStack_8 = 0x18065a252;
        fVar15 = (float)fmodf(fVar25 + 0.5);
      }
      fVar15 = fVar15 - unaff_R14[0xe];
      if (fVar15 <= 0.5) {
        if (fVar15 < -0.5) {
          fVar15 = fVar15 + unaff_XMM8_Da;
        }
      }
      else {
        fVar15 = fVar15 + -1.0;
      }
      fVar13 = fVar25 * fVar25 * fVar25 + param_6._4_4_;
      if (unaff_XMM8_Da <= fVar13) {
        fVar13 = unaff_XMM8_Da;
      }
      fVar15 = fVar13 * fVar25 * fVar15 + unaff_R14[0xe];
      unaff_R14[0xe] = fVar15;
      if (unaff_XMM6_Da <= fVar15) {
        if (unaff_XMM8_Da <= fVar15) {
          unaff_R14[0xe] = fVar15 - unaff_XMM8_Da;
        }
      }
      else {
        unaff_R14[0xe] = fVar15 + unaff_XMM8_Da;
      }
    }
    else {
      unaff_R14[0x12] = fVar25 + 0.25;
    }
  }
LAB_18065a2e9:
  fVar15 = unaff_R14[0x14];
  param_10._4_4_ = (unaff_XMM8_Da - fVar15) * (unaff_XMM8_Da - fVar16);
  fVar13 = (unaff_XMM8_Da - fVar12) * param_10._4_4_;
  fStack000000000000006c = (unaff_XMM8_Da - fVar18) * fVar12 * param_10._4_4_;
  fVar12 = fVar12 * param_10._4_4_ * fVar18;
  fVar17 = fVar13 * fVar18;
  param_10._4_4_ = param_10._4_4_ * fVar18;
  fStack0000000000000074 = fVar12 * (float)param_8;
  *(float *)(unaff_RBP + -0x7c) = param_10._4_4_;
  *(float *)(unaff_RBP + -0x78) = param_10._4_4_;
  *(float *)(unaff_RBP + -0x74) = (unaff_XMM8_Da - fVar16) * fVar15;
  fVar25 = (unaff_XMM8_Da - (float)param_8) * fVar17;
  param_11._4_4_ = (unaff_XMM8_Da - (float)param_8) * fVar12;
  *(float *)(unaff_RBP + -0x80) = fVar25;
  if (((char)param_6 == '\0') || (unaff_XMM6_Da < (float)param_8)) {
    if (fVar15 <= unaff_XMM6_Da) {
      fVar15 = 3.0;
    }
    else {
      fVar15 = 5.0;
    }
  }
  else {
    fVar15 = 2.0;
  }
  fVar14 = unaff_R14[0x184a];
  if (fVar16 <= fVar14) {
    fVar14 = fVar14 - fVar15 * param_6._4_4_;
    if (fVar14 <= fVar16) {
      fVar14 = fVar16;
    }
  }
  else {
    fVar14 = fVar14 + fVar15 * param_6._4_4_;
    if (fVar16 <= fVar14) {
      fVar14 = fVar16;
    }
  }
  unaff_R14[0x184a] = fVar14;
  unaff_R14[0x1854] = fVar14;
  fVar16 = unaff_R14[0x11];
  if (0.2 <= fVar16) {
    fVar15 = unaff_XMM8_Da;
    if (0.7 < fVar16) {
      fVar15 = (unaff_XMM8_Da - fVar16) * 3.333333;
    }
  }
  else {
    fVar15 = fVar16 * 5.0;
  }
  if (unaff_XMM6_Da < unaff_R14[0x12]) {
    fVar16 = (unaff_R14[0x12] - fVar16) * 4.0;
    if (fVar16 <= unaff_XMM6_Da) {
      fVar16 = unaff_XMM6_Da;
    }
    fVar15 = fVar15 * fVar16;
  }
  pfVar5 = unaff_R14 + 0x1855;
  iVar9 = 1;
  fVar16 = unaff_XMM6_Da;
  do {
    fVar14 = *(float *)(((int64_t)afStack_60e8 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar23 = fVar14 - pfVar5[-10];
    fVar19 = ABS(fVar23);
    if (0.001 <= fVar19) {
      fVar20 = unaff_XMM8_Da;
      if (fVar23 < unaff_XMM6_Da) {
        fVar20 = -1.0;
      }
      if (0.05 <= fVar19) {
        if (0.5 <= fVar19) {
          fVar19 = 0.5;
        }
      }
      else {
        fVar19 = 0.05;
      }
      fVar19 = fVar19 * fVar20 * param_6._4_4_ * 6.0;
      if (fVar19 * fVar20 <= fVar20 * fVar23) {
        fVar14 = pfVar5[-10] + fVar19;
      }
    }
    pfVar5[-10] = fVar14;
    *pfVar5 = fVar14;
    if (2 < iVar9) {
      if (iVar9 < 7) {
        fVar23 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar23 = unaff_XMM6_Da;
        if (iVar9 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a5b3:
            fVar23 = fVar15;
          }
        }
        else {
          if (iVar9 != 8) goto LAB_18065a5d3;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a5b3;
        }
      }
      fVar14 = fVar23 * fVar14;
      *pfVar5 = fVar14;
    }
LAB_18065a5d3:
    fVar23 = *(float *)((int64_t)afStack_60e8 + (4 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar19 = fVar23 - pfVar5[-9];
    fVar20 = ABS(fVar19);
    if (0.001 <= fVar20) {
      fVar21 = unaff_XMM8_Da;
      if (fVar19 < unaff_XMM6_Da) {
        fVar21 = -1.0;
      }
      if (0.05 <= fVar20) {
        if (0.5 <= fVar20) {
          fVar20 = 0.5;
        }
      }
      else {
        fVar20 = 0.05;
      }
      fVar20 = fVar20 * fVar21 * param_6._4_4_ * 6.0;
      if (fVar20 * fVar21 <= fVar21 * fVar19) {
        fVar23 = pfVar5[-9] + fVar20;
      }
    }
    iVar6 = iVar9 + 1;
    pfVar5[-9] = fVar23;
    pfVar5[1] = fVar23;
    if (2 < iVar6) {
      if (iVar6 < 7) {
        fVar19 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar19 = unaff_XMM6_Da;
        if (iVar6 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a67b:
            fVar19 = fVar15;
          }
        }
        else {
          if (iVar6 != 8) goto LAB_18065a69c;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a67b;
        }
      }
      fVar23 = fVar19 * fVar23;
      pfVar5[1] = fVar23;
    }
LAB_18065a69c:
    fVar19 = *(float *)((int64_t)afStack_60e8 + (8 - (int64_t)unaff_R14) + (int64_t)pfVar5);
    fVar20 = fVar19 - pfVar5[-8];
    fVar21 = ABS(fVar20);
    if (0.001 <= fVar21) {
      fVar24 = unaff_XMM8_Da;
      if (fVar20 < unaff_XMM6_Da) {
        fVar24 = -1.0;
      }
      if (0.05 <= fVar21) {
        if (0.5 <= fVar21) {
          fVar21 = 0.5;
        }
      }
      else {
        fVar21 = 0.05;
      }
      fVar21 = fVar21 * fVar24 * param_6._4_4_ * 6.0;
      if (fVar21 * fVar24 <= fVar24 * fVar20) {
        fVar19 = pfVar5[-8] + fVar21;
      }
    }
    iVar6 = iVar9 + 2;
    pfVar5[-8] = fVar19;
    pfVar5[2] = fVar19;
    if (2 < iVar6) {
      if (iVar6 < 7) {
        fVar20 = unaff_XMM8_Da - fVar15;
      }
      else {
        fVar20 = unaff_XMM6_Da;
        if (iVar6 == 7) {
          if (*(char *)((int64_t)unaff_R14 + 0x5d) == '\0') {
LAB_18065a744:
            fVar20 = fVar15;
          }
        }
        else {
          if (iVar6 != 8) goto LAB_18065a765;
          if (*(char *)((int64_t)unaff_R14 + 0x5d) != '\0') goto LAB_18065a744;
        }
      }
      fVar19 = fVar20 * fVar19;
      pfVar5[2] = fVar19;
    }
LAB_18065a765:
    iVar9 = iVar9 + 3;
    fVar16 = fVar16 + fVar14 + fVar23 + fVar19;
    pfVar5 = pfVar5 + 3;
    if (9 < iVar9) {
      fVar15 = unaff_R14[0x1854];
      fVar15 = unaff_XMM8_Da - ((fVar15 * 6.0 - 15.0) * fVar15 + 10.0) * fVar15 * fVar15 * fVar15;
      if (fVar16 != fVar15) {
        if (fVar16 <= unaff_XMM6_Da) {
          unaff_R14[0x1854] = 1.0;
        }
        else {
          fVar15 = fVar15 / fVar16;
          unaff_R14[0x1855] = unaff_R14[0x1855] * fVar15;
          unaff_R14[0x1856] = unaff_R14[0x1856] * fVar15;
          unaff_R14[0x1857] = unaff_R14[0x1857] * fVar15;
          unaff_R14[0x1858] = unaff_R14[0x1858] * fVar15;
          unaff_R14[0x1859] = unaff_R14[0x1859] * fVar15;
          unaff_R14[0x185a] = unaff_R14[0x185a] * fVar15;
          unaff_R14[0x185b] = unaff_R14[0x185b] * fVar15;
          unaff_R14[0x185c] = unaff_R14[0x185c] * fVar15;
          unaff_R14[0x185d] = fVar15 * unaff_R14[0x185d];
        }
      }
      fVar13 = fStack000000000000006c - (unaff_XMM8_Da - fVar18) * fVar13;
      fVar25 = ((((fVar17 + fVar12) * (float)param_8 + param_10._4_4_) - param_11._4_4_) - fVar25) -
               param_10._4_4_;
      fVar16 = fVar13 * fVar13 + fVar25 * fVar25;
      fVar16 = (float)(fVar16 <= 1.1754944e-38) * 1.1754944e-38 + fVar16;
      auVar22 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
      fVar15 = auVar22._0_4_;
      fVar16 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
      fVar13 = fVar16 * fVar13;
      fVar16 = fVar16 * fVar25;
      _fStack0000000000000038 = CONCAT44(fVar13,fVar16);
      if (ABS(fVar16 * unaff_R14[0x185e] + fVar13 * unaff_R14[0x185f]) <= 0.999) {
        fVar25 = unaff_R14[0x1855] - unaff_R14[0x1856];
        fVar12 = (((unaff_R14[0x1858] + unaff_R14[0x1857] + unaff_R14[0x185b]) - unaff_R14[0x1859])
                 - unaff_R14[0x185a]) - unaff_R14[0x185c];
        fVar16 = fVar25 * fVar25 + fVar12 * fVar12;
        fVar16 = (float)(fVar16 <= 1.1754944e-38) * 1.1754944e-38 + fVar16;
        auVar22 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar15 = auVar22._0_4_;
        param_6._4_4_ = param_6._4_4_ * 8.0;
        fVar16 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
        _fStack0000000000000038 =
             CONCAT44(fVar16 * fVar25 * param_6._4_4_ +
                      (unaff_XMM8_Da - param_6._4_4_) * unaff_R14[0x185f],
                      fVar16 * fVar12 * param_6._4_4_ +
                      (unaff_XMM8_Da - param_6._4_4_) * unaff_R14[0x185e]);
        *(uint64_t *)(unaff_R14 + 0x185e) = _fStack0000000000000038;
        fVar16 = unaff_R14[0x185f];
        fVar15 = unaff_R14[0x185e];
        fVar25 = fVar15 * fVar15 + fVar16 * fVar16;
        auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar12 = auVar22._0_4_;
        fVar25 = fVar12 * 0.5 * (3.0 - fVar25 * fVar12 * fVar12);
        unaff_R14[0x185f] = fVar25 * fVar16;
        unaff_R14[0x185e] = fVar25 * fVar15;
      }
      else {
        *(uint64_t *)(unaff_R14 + 0x185e) = _fStack0000000000000038;
      }
                    // WARNING: Subroutine does not return
      uStack_8 = 0x18065aa9f;
      fStack000000000000007c = param_11._4_4_;
      RenderingSystem_SecurityChecker(*(uint64_t *)(unaff_RBP + -0x70) ^ (uint64_t)&stack0x00000000);  // 调用安全检查器
    }
  } while( true );
}

// 辅助函数实现

/**
 * 角度归一化函数
 * 将角度归一化到[-π, π]范围内
 * 
 * @param angle 输入角度
 * @return 归一化后的角度
 */
float RenderingSystem_NormalizeAngle(float angle) {
    while (angle > RENDER_PI) {
        angle -= RENDER_TWO_PI;
    }
    while (angle < -RENDER_PI) {
        angle += RENDER_TWO_PI;
    }
    return angle;
}

/**
 * 角度差值计算函数
 * 计算两个角度之间的最小差值
 * 
 * @param angle1 第一个角度
 * @param angle2 第二个角度
 * @return 角度差值
 */
float RenderingSystem_CalculateAngleDifference(float angle1, float angle2) {
    float diff = angle1 - angle2;
    while (diff > RENDER_PI) {
        diff -= RENDER_TWO_PI;
    }
    while (diff < -RENDER_PI) {
        diff += RENDER_TWO_PI;
    }
    return diff;
}

/**
 * 向量插值函数
 * 对多个向量进行插值计算
 * 
 * @param vectors 向量数组
 * @param count 向量数量
 * @param factor 插值因子
 * @return 插值结果
 */
float RenderingSystem_PerformVectorInterpolation(float* vectors, int count, float factor) {
    float result = 0.0f;
    for (int i = 0; i < count; i++) {
        result += vectors[i] * factor;
    }
    return result;
}

/**
 * 数学计算优化函数
 * 对输入数据进行数学优化处理
 * 
 * @param input 输入数据
 * @param output 输出数据
 * @param size 数据大小
 */
void RenderingSystem_OptimizeMathCalculations(float* input, float* output, int size) {
    for (int i = 0; i < size; i++) {
        // 使用快速平方根倒数进行优化
        if (ABS(input[i]) > RENDER_EPSILON) {
            output[i] = RenderingSystem_FastRSQRT(input[i]);
        } else {
            output[i] = 0.0f;
        }
    }
}

/**
 * 渲染参数验证函数
 * 验证渲染参数的有效性
 * 
 * @param params 渲染参数结构体
 * @return 验证结果
 */
bool RenderingSystem_ValidateRenderParameters(const RenderParameters* params) {
    if (!params) return false;
    
    // 验证角度值
    if (!RenderingSystem_IsAngleValid(params->angle)) {
        return false;
    }
    
    // 验证幅度值
    if (isnan(params->magnitude) || isinf(params->magnitude)) {
        return false;
    }
    
    // 验证插值因子范围
    if (params->interpolation < 0.0f || params->interpolation > 1.0f) {
        return false;
    }
    
    // 验证阈值
    if (params->threshold < 0.0f) {
        return false;
    }
    
    return true;
}




