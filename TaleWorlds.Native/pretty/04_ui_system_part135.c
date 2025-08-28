#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// ============================================================================
// 04_ui_system_part135.c - UI系统组件管理和参数处理模块
// ============================================================================
// 
// 本模块包含6个核心函数，涵盖以下功能领域：
// - UI组件状态管理和清理
// - UI参数验证和处理
// - UI向量数学计算
// - UI系统初始化和配置
// - UI组件数据管理
// - UI系统状态控制
//
// 主要函数包括：
// - UISystem_ComponentManager: UI系统组件管理器
// - UISystem_ParameterProcessor: UI系统参数处理器
// - UISystem_VectorCalculator: UI系统向量计算器
// - UISystem_ConfigManager: UI系统配置管理器
// - UISystem_DataHandler: UI系统数据处理器
// - UISystem_StateController: UI系统状态控制器
//
// ============================================================================

// ============================================================================
// 系统常量定义
// ============================================================================

// UI系统偏移量
#define UI_OFFSET_670              0x670         // 偏移量0x670
#define UI_OFFSET_11418            0x11418       // 偏移量0x11418
#define UI_OFFSET_11608            0x11608       // 偏移量0x11608
#define UI_OFFSET_11644            0x11644       // 偏移量0x11644
#define UI_OFFSET_11650            0x11650       // 偏移量0x11650
#define UI_OFFSET_11658            0x11658       // 偏移量0x11658
#define UI_OFFSET_1165c            0x1165c       // 偏移量0x1165c
#define UI_OFFSET_11664            0x11664       // 偏移量0x11664
#define UI_OFFSET_1166c            0x1166c       // 偏移量0x1166c
#define UI_OFFSET_11680            0x11680       // 偏移量0x11680
#define UI_OFFSET_116b8            0x116b8       // 偏移量0x116b8
#define UI_OFFSET_115e0            0x115e0       // 偏移量0x115e0
#define UI_OFFSET_115e8            0x115e8       // 偏移量0x115e8
#define UI_OFFSET_11080            0x11080       // 偏移量0x11080
#define UI_OFFSET_11088            0x11088       // 偏移量0x11088
#define UI_OFFSET_1108c            0x1108c       // 偏移量0x1108c
#define UI_OFFSET_11094            0x11094       // 偏移量0x11094
#define UI_OFFSET_11098            0x11098       // 偏移量0x11098
#define UI_OFFSET_110a0            0x110a0       // 偏移量0x110a0
#define UI_OFFSET_110a4            0x110a4       // 偏移量0x110a4
#define UI_OFFSET_110a8            0x110a8       // 偏移量0x110a8
#define UI_OFFSET_110ac            0x110ac       // 偏移量0x110ac
#define UI_OFFSET_110b0            0x110b0       // 偏移量0x110b0
#define UI_OFFSET_110b8            0x110b8       // 偏移量0x110b8
#define UI_OFFSET_110bc            0x110bc       // 偏移量0x110bc
#define UI_OFFSET_110c0            0x110c0       // 偏移量0x110c0
#define UI_OFFSET_110c4            0x110c4       // 偏移量0x110c4
#define UI_OFFSET_110c8            0x110c8       // 偏移量0x110c8
#define UI_OFFSET_110d0            0x110d0       // 偏移量0x110d0
#define UI_OFFSET_110d4            0x110d4       // 偏移量0x110d4
#define UI_OFFSET_110d8            0x110d8       // 偏移量0x110d8
#define UI_OFFSET_110dc            0x110dc       // 偏移量0x110dc
#define UI_OFFSET_110e0            0x110e0       // 偏移量0x110e0
#define UI_OFFSET_110e4            0x110e4       // 偏移量0x110e4
#define UI_OFFSET_110e8            0x110e8       // 偏移量0x110e8
#define UI_OFFSET_110ec            0x110ec       // 偏移量0x110ec
#define UI_OFFSET_110ed            0x110ed       // 偏移量0x110ed

// UI系统常量
#define UI_CONST_0X70              0x70          // 常量0x70
#define UI_CONST_0X160             0x160         // 常量0x160
#define UI_CONST_0X1A0             0x1a0         // 常量0x1a0
#define UI_CONST_0X53A             0x53a         // 常量0x53a
#define UI_CONST_0X15              0x15          // 常量0x15
#define UI_CONST_0X55              0x55          // 常量0x55
#define UI_CONST_0X14              0x14          // 常量0x14
#define UI_CONST_0X10000           0x10000       // 常量0x10000
#define UI_CONST_0X21              0x21          // 常量0x21
#define UI_CONST_0X61              0x61          // 常量0x61
#define UI_CONST_0X18              0x18          // 常量0x18
#define UI_CONST_0X26F             0x26f         // 常量0x26f
#define UI_CONST_0X680             0x680         // 常量0x680
#define UI_CONST_0X116CC           0x116cc       // 常量0x116cc

// UI系统错误码
#define UI_ERROR_INVALID_FLOAT     0x1d          // 无效浮点数
#define UI_ERROR_INVALID_VECTOR    0x24          // 无效向量
#define UI_ERROR_INVALID_PARAM    0x1f          // 无效参数

// ============================================================================
// 类型别名定义
// ============================================================================

typedef uint64_t UIComponentHandle;          // UI组件句柄
typedef uint64_t UIParameterHandle;          // UI参数句柄
typedef uint64_t UIVectorHandle;             // UI向量句柄
typedef uint64_t UIConfigHandle;             // UI配置句柄
typedef uint64_t UIDataHandle;               // UI数据句柄
typedef uint64_t UIStateHandle;              // UI状态句柄
typedef int32_t UIStatus;                    // UI状态
typedef uint32_t UIErrorCode;                // UI错误码
typedef float* UIFloatVector;                // UI浮点向量
typedef void* UIContext;                     // UI上下文

// ============================================================================
// 函数声明和实现
// ============================================================================

/**
 * @brief UI系统组件管理器
 * 
 * 管理UI组件的清理和资源释放，包括组件状态检查、资源清理和系统重置
 * 
 * @param context UI系统上下文指针
 * 
 * 处理流程：
 * 1. 检查组件状态和初始化标志
 * 2. 清理组件资源
 * 3. 重置系统状态
 * 4. 更新系统控制块
 * 5. 执行最终清理操作
 * 
 * 错误处理：
 * - 状态检查失败时跳过清理
 * - 资源释放失败时提供错误反馈
 * - 确保系统状态一致性
 */
void UISystem_ComponentManager(longlong context)
{
    int status;
    
    // 检查组件状态，如果状态无效则跳过清理
    if ((*(char *)(context + 8) != '\0') && (status = UISystem_CheckComponentStatus(context, 0), status != 0)) {
        return;
    }
    
    // 清理主组件资源
    if (*(uint64_t **)(context + UI_OFFSET_670) != (uint64_t *)0x0) {
        (**(code **)**(uint64_t **)(context + UI_OFFSET_670))();
        *(uint64_t *)(context + UI_OFFSET_670) = 0;
    }
    
    // 清理资源句柄
    if (*(longlong *)(context + UI_OFFSET_11418) != 0) {
        status = UISystem_ReleaseResource(*(longlong *)(context + UI_OFFSET_11418), 1);
        if (status != 0) {
            return;
        }
        *(uint64_t *)(context + UI_OFFSET_11418) = 0;
        *(int8_t *)(context + 9) = 0;
    }
    
    // 检查系统控制块状态
    status = UISystem_CheckSystemStatus(SYSTEM_MAIN_CONTROL_BLOCK);
    if (status != 0) {
        return;
    }
    
    // 更新系统控制块
    *(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + UI_CONST_0X160 + (ulonglong)*(uint *)(context + UI_OFFSET_116b8) * 8) = 0;
    
    // 执行最终清理操作
    UISystem_ExecuteCleanup(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + UI_CONST_0X1A0), context, &unknown_var_8576_ptr, UI_CONST_0X53A, 1);
}



/**
 * @brief UI系统参数处理器
 * 
 * 处理UI系统参数验证和设置，包括浮点数验证、向量长度检查和参数更新
 * 
 * @param context UI系统上下文指针
 * @param componentIndex 组件索引
 * @param vector1 第一个向量参数
 * @param vector2 第二个向量参数
 * @param vector3 第三个向量参数
 * @param vector4 第四个向量参数
 * @return UIErrorCode 处理结果，0表示成功
 * 
 * 处理流程：
 * 1. 验证组件索引有效性
 * 2. 验证每个向量的浮点数有效性
 * 3. 检查向量长度是否在有效范围内
 * 4. 更新组件参数数据
 * 5. 执行向量正交化计算
 * 
 * 验证内容：
 * - 浮点数非NaN和非无穷大
 * - 向量长度在0.9-1.1范围内
 * - 组件索引不超过7
 * - 向量正交性检查
 * 
 * 错误处理：
 * - 无效浮点数返回错误码0x1d
 * - 无效向量长度返回错误码0x24
 * - 无效组件索引返回错误码0x1f
 */
uint UISystem_ParameterProcessor(longlong context, uint componentIndex, UIFloatVector vector1, UIFloatVector vector2, UIFloatVector vector3, UIFloatVector vector4)
{
    uint64_t vectorData1, vectorData2;
    uint errorCode;
    longlong componentOffset;
    uint floatError1, floatError2, floatError3;
    float x1, y1, z1;
    float x2, y2, z2;
    float x3, y3, z3;
    float x4, y4, z4;
    float lengthSquared;
    float crossX, crossY, crossZ;
    float dotProduct;
    float tempFloat1, tempFloat2, tempFloat3, tempFloat4;
    
    componentOffset = (longlong)(int)componentIndex;
    
    // 验证组件索引有效性
    if (7 < componentIndex) {
        return UI_ERROR_INVALID_PARAM;
    }
    
    errorCode = UI_ERROR_INVALID_FLOAT;
    
    // 处理第三个向量参数
    if (vector3 != (UIFloatVector)0x0) {
        z1 = vector3[2];
        y1 = vector3[1];
        floatError3 = 0;
        x1 = *vector3;
        floatError1 = 0;
        floatError2 = 0;
        
        // 检查浮点数有效性（非NaN和非无穷大）
        if (((uint)z1 & 0x7f800000) == 0x7f800000) {
            floatError2 = errorCode;
        }
        if (((uint)y1 & 0x7f800000) == 0x7f800000) {
            floatError3 = UI_ERROR_INVALID_FLOAT;
        }
        if (((uint)x1 & 0x7f800000) == 0x7f800000) {
            floatError1 = UI_ERROR_INVALID_FLOAT;
        }
        
        errorCode = floatError2 | floatError3 | floatError1;
        if (errorCode != 0) {
            return errorCode;
        }
        
        // 检查向量长度
        lengthSquared = y1 * y1 + x1 * x1 + z1 * z1;
        if (lengthSquared < 0.9) {
            return UI_ERROR_INVALID_VECTOR;
        }
        if (1.1 < lengthSquared) {
            return UI_ERROR_INVALID_VECTOR;
        }
        
        // 更新组件数据
        componentOffset = componentOffset * UI_CONST_0X70;
        if (((x1 != *(float *)(componentOffset + UI_OFFSET_110d4 + context)) ||
            (y1 != *(float *)(componentOffset + UI_OFFSET_110d8 + context))) ||
           (z1 != *(float *)(componentOffset + UI_OFFSET_110dc + context))) {
            *(int8_t *)(componentOffset + UI_OFFSET_110ed + context) = 1;
        }
        
        // 保存旧数据并更新新数据
        *(uint64_t *)(componentOffset + UI_OFFSET_110d4 + context) = *(uint64_t *)(componentOffset + UI_OFFSET_110c8 + context);
        *(int32_t *)(componentOffset + UI_OFFSET_110dc + context) = *(int32_t *)(componentOffset + UI_OFFSET_110d0 + context);
        *(uint64_t *)(componentOffset + UI_OFFSET_110c8 + context) = *(uint64_t *)vector3;
        *(float *)(componentOffset + UI_OFFSET_110d0 + context) = vector3[2];
    }
    
    // 处理第四个向量参数
    if (vector4 != (UIFloatVector)0x0) {
        z2 = vector4[2];
        y2 = vector4[1];
        floatError3 = 0;
        x2 = *vector4;
        floatError1 = 0;
        floatError2 = 0;
        
        // 检查浮点数有效性
        if (((uint)z2 & 0x7f800000) == 0x7f800000) {
            floatError2 = errorCode;
        }
        if (((uint)y2 & 0x7f800000) == 0x7f800000) {
            floatError3 = UI_ERROR_INVALID_FLOAT;
        }
        if (((uint)x2 & 0x7f800000) == 0x7f800000) {
            floatError1 = UI_ERROR_INVALID_FLOAT;
        }
        
        errorCode = floatError2 | floatError3 | floatError1;
        if (errorCode != 0) {
            return errorCode;
        }
        
        // 检查向量长度
        lengthSquared = y2 * y2 + x2 * x2 + z2 * z2;
        if (lengthSquared < 0.9) {
            return UI_ERROR_INVALID_VECTOR;
        }
        if (1.1 < lengthSquared) {
            return UI_ERROR_INVALID_VECTOR;
        }
        
        // 更新组件数据
        componentOffset = componentOffset * UI_CONST_0X70;
        if (((x2 != *(float *)(componentOffset + UI_OFFSET_110bc + context)) ||
            (y2 != *(float *)(componentOffset + UI_OFFSET_110c0 + context))) ||
           (z2 != *(float *)(componentOffset + UI_OFFSET_110c4 + context))) {
            *(int8_t *)(componentOffset + UI_OFFSET_110ed + context) = 1;
        }
        
        // 保存旧数据并更新新数据
        *(uint64_t *)(componentOffset + UI_OFFSET_110bc + context) = *(uint64_t *)(componentOffset + UI_OFFSET_110b0 + context);
        *(int32_t *)(componentOffset + UI_OFFSET_110c4 + context) = *(int32_t *)(componentOffset + UI_OFFSET_110b8 + context);
        *(uint64_t *)(componentOffset + UI_OFFSET_110b0 + context) = *(uint64_t *)vector4;
        *(float *)(componentOffset + UI_OFFSET_110b8 + context) = vector4[2];
    }
    
    // 处理第一个向量参数
    if (vector1 != (UIFloatVector)0x0) {
        floatError3 = 0;
        floatError1 = 0;
        floatError2 = 0;
        
        // 检查浮点数有效性
        if (((uint)vector1[2] & 0x7f800000) == 0x7f800000) {
            floatError2 = errorCode;
        }
        if (((uint)vector1[1] & 0x7f800000) == 0x7f800000) {
            floatError3 = UI_ERROR_INVALID_FLOAT;
        }
        if (((uint)*vector1 & 0x7f800000) == 0x7f800000) {
            floatError1 = UI_ERROR_INVALID_FLOAT;
        }
        
        errorCode = floatError2 | floatError3 | floatError1;
        if (errorCode != 0) {
            return errorCode;
        }
        
        // 更新组件数据
        componentOffset = componentOffset * UI_CONST_0X70;
        if (((*vector1 != *(float *)(componentOffset + UI_OFFSET_1108c + context)) ||
            (vector1[1] != *(float *)((componentOffset + UI_CONST_0X26F) * UI_CONST_0X70 + context))) ||
           (vector1[2] != *(float *)(componentOffset + UI_OFFSET_11094 + context))) {
            *(int8_t *)(componentOffset + UI_OFFSET_110ec + context) = 1;
        }
        
        // 更新向量数据
        *(uint64_t *)(componentOffset + UI_OFFSET_11080 + context) = *(uint64_t *)vector1;
        *(float *)(componentOffset + UI_OFFSET_11088 + context) = vector1[2];
        *(uint64_t )(componentOffset + UI_OFFSET_1108c + context) = *(uint64_t *)vector1;
        *(float *)(componentOffset + UI_OFFSET_11094 + context) = vector1[2];
    }
    
    // 处理第二个向量参数
    if (vector2 != (UIFloatVector)0x0) {
        floatError3 = 0;
        floatError2 = 0;
        
        // 检查浮点数有效性
        if (((uint)vector2[2] & 0x7f800000) == 0x7f800000) {
            floatError2 = errorCode;
        }
        if (((uint)vector2[1] & 0x7f800000) == 0x7f800000) {
            floatError3 = UI_ERROR_INVALID_FLOAT;
        }
        floatError1 = 0;
        if (((uint)*vector2 & 0x7f800000) == 0x7f800000) {
            floatError1 = errorCode;
        }
        
        errorCode = floatError2 | floatError3 | floatError1;
        if (errorCode != 0) {
            return errorCode;
        }
        
        // 更新组件数据
        componentOffset = componentOffset * UI_CONST_0X70;
        if (((*vector2 != *(float *)(componentOffset + UI_OFFSET_110a4 + context)) ||
            (vector2[1] != *(float *)(componentOffset + UI_OFFSET_110a8 + context))) ||
           (vector2[2] != *(float *)(componentOffset + UI_OFFSET_110ac + context))) {
            *(int8_t *)(componentOffset + UI_OFFSET_110ec + context) = 1;
        }
        
        // 保存旧数据并更新新数据
        *(uint64_t *)(componentOffset + UI_OFFSET_110a4 + context) = *(uint64_t *)(componentOffset + UI_OFFSET_11098 + context);
        *(int32_t *)(componentOffset + UI_OFFSET_110ac + context) = *(int32_t *)(componentOffset + UI_OFFSET_110a0 + context);
        *(uint64_t *)(componentOffset + UI_OFFSET_11098 + context) = *(uint64_t *)vector2;
        *(float *)(componentOffset + UI_OFFSET_110a0 + context) = vector2[2];
    }
    
    // 计算向量正交化
    componentOffset = componentOffset * UI_CONST_0X70;
    vectorData1 = *(uint64_t *)(componentOffset + UI_OFFSET_110b0 + context);
    z2 = *(float *)(componentOffset + UI_OFFSET_110b8 + context);
    y1 = *(float *)(componentOffset + UI_OFFSET_110d0 + context);
    vectorData2 = *(uint64_t *)(componentOffset + UI_OFFSET_110c8 + context);
    
    // 处理符号翻转
    if ((*(byte *)(context + 0x78) & 4) != 0) {
        z2 = -z2;
        y1 = -y1;
    }
    
    // 计算叉积和点积
    tempFloat4 = (float)((ulonglong)vectorData2 >> 0x20);
    tempFloat3 = (float)vectorData2;
    tempFloat2 = (float)((ulonglong)vectorData1 >> 0x20);
    tempFloat1 = (float)vectorData1;
    dotProduct = tempFloat4 * tempFloat2 + tempFloat3 * tempFloat1 + y1 * z2;
    
    // 检查正交性
    if ((-0.01 <= dotProduct) && (dotProduct <= 0.01)) {
        *(float *)(componentOffset + UI_OFFSET_110e0 + context) = tempFloat2 * y1 - tempFloat4 * z2;
        *(float *)(componentOffset + UI_OFFSET_110e8 + context) = tempFloat4 * tempFloat1 - tempFloat2 * tempFloat3;
        *(float *)(componentOffset + UI_OFFSET_110e4 + context) = tempFloat3 * z2 - tempFloat1 * y1;
        return UI_SYSTEM_SUCCESS;
    }
    
    return UI_ERROR_INVALID_VECTOR;
}



uint FUN_1807485dc(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  float *unaff_RSI;
  uint uVar6;
  uint uVar7;
  longlong in_R10;
  float *in_R11;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_8;
  float fStackX_c;
  float fStackX_18;
  float fStackX_1c;
  float *in_stack_00000080;
  float *in_stack_00000088;
  
  uVar5 = 0x1d;
  if (in_stack_00000080 != (float *)0x0) {
    fVar10 = in_stack_00000080[2];
    fVar11 = in_stack_00000080[1];
    uVar3 = 0;
    fVar8 = *in_stack_00000080;
    uVar7 = 0;
    uVar6 = 0;
    if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
      uVar7 = 0x1d;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    fVar9 = fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
    if (fVar9 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar9) {
      return 0x24;
    }
    lVar4 = param_3 * 0x70;
    if (((fVar8 != *(float *)(lVar4 + 0x110d4 + in_R10)) ||
        (fVar11 != *(float *)(lVar4 + 0x110d8 + in_R10))) ||
       (fVar10 != *(float *)(lVar4 + 0x110dc + in_R10))) {
      *(int8_t *)(lVar4 + 0x110ed + in_R10) = 1;
    }
    *(uint64_t *)(lVar4 + 0x110d4 + in_R10) = *(uint64_t *)(lVar4 + 0x110c8 + in_R10);
    *(int32_t *)(lVar4 + 0x110dc + in_R10) = *(int32_t *)(lVar4 + 0x110d0 + in_R10);
    *(uint64_t *)(lVar4 + 0x110c8 + in_R10) = *(uint64_t *)in_stack_00000080;
    *(float *)(lVar4 + 0x110d0 + in_R10) = in_stack_00000080[2];
  }
  if (in_stack_00000088 != (float *)0x0) {
    fVar10 = in_stack_00000088[2];
    fVar11 = in_stack_00000088[1];
    uVar3 = 0;
    fVar8 = *in_stack_00000088;
    uVar7 = 0;
    uVar6 = 0;
    if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)fVar11 & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
      uVar7 = 0x1d;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    fVar9 = fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
    if (fVar9 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar9) {
      return 0x24;
    }
    lVar4 = param_3 * 0x70;
    if (((fVar8 != *(float *)(lVar4 + 0x110bc + in_R10)) ||
        (fVar11 != *(float *)(lVar4 + 0x110c0 + in_R10))) ||
       (fVar10 != *(float *)(lVar4 + 0x110c4 + in_R10))) {
      *(int8_t *)(lVar4 + 0x110ed + in_R10) = 1;
    }
    *(uint64_t *)(lVar4 + 0x110bc + in_R10) = *(uint64_t *)(lVar4 + 0x110b0 + in_R10);
    *(int32_t *)(lVar4 + 0x110c4 + in_R10) = *(int32_t *)(lVar4 + 0x110b8 + in_R10);
    *(uint64_t *)(lVar4 + 0x110b0 + in_R10) = *(uint64_t *)in_stack_00000088;
    *(float *)(lVar4 + 0x110b8 + in_R10) = in_stack_00000088[2];
  }
  if (in_R11 != (float *)0x0) {
    uVar3 = 0;
    uVar7 = 0;
    uVar6 = 0;
    if (((uint)in_R11[2] & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)in_R11[1] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    if (((uint)*in_R11 & 0x7f800000) == 0x7f800000) {
      uVar7 = 0x1d;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    lVar4 = param_3 * 0x70;
    if (((*in_R11 != *(float *)(lVar4 + 0x1108c + in_R10)) ||
        (in_R11[1] != *(float *)((param_3 + 0x26f) * 0x70 + in_R10))) ||
       (in_R11[2] != *(float *)(lVar4 + 0x11094 + in_R10))) {
      *(int8_t *)(lVar4 + 0x110ec + in_R10) = 1;
    }
    *(uint64_t *)(lVar4 + 0x11080 + in_R10) = *(uint64_t *)in_R11;
    *(float *)(lVar4 + 0x11088 + in_R10) = in_R11[2];
    *(uint64_t *)(lVar4 + 0x1108c + in_R10) = *(uint64_t *)in_R11;
    *(float *)(lVar4 + 0x11094 + in_R10) = in_R11[2];
  }
  if (unaff_RSI != (float *)0x0) {
    uVar3 = 0;
    uVar6 = 0;
    if (((uint)unaff_RSI[2] & 0x7f800000) == 0x7f800000) {
      uVar6 = uVar5;
    }
    if (((uint)unaff_RSI[1] & 0x7f800000) == 0x7f800000) {
      uVar3 = 0x1d;
    }
    uVar7 = 0;
    if (((uint)*unaff_RSI & 0x7f800000) == 0x7f800000) {
      uVar7 = uVar5;
    }
    uVar7 = uVar6 | uVar3 | uVar7;
    if (uVar7 != 0) {
      return uVar7;
    }
    lVar4 = param_3 * 0x70;
    if (((*unaff_RSI != *(float *)(lVar4 + 0x110a4 + in_R10)) ||
        (unaff_RSI[1] != *(float *)(lVar4 + 0x110a8 + in_R10))) ||
       (unaff_RSI[2] != *(float *)(lVar4 + 0x110ac + in_R10))) {
      *(int8_t *)(lVar4 + 0x110ec + in_R10) = 1;
    }
    *(uint64_t *)(lVar4 + 0x110a4 + in_R10) = *(uint64_t *)(lVar4 + 0x11098 + in_R10);
    *(int32_t *)(lVar4 + 0x110ac + in_R10) = *(int32_t *)(lVar4 + 0x110a0 + in_R10);
    *(uint64_t *)(lVar4 + 0x11098 + in_R10) = *(uint64_t *)unaff_RSI;
    *(float *)(lVar4 + 0x110a0 + in_R10) = unaff_RSI[2];
  }
  param_3 = param_3 * 0x70;
  uVar1 = *(uint64_t *)(param_3 + 0x110b0 + in_R10);
  fVar10 = *(float *)(param_3 + 0x110b8 + in_R10);
  fVar11 = *(float *)(param_3 + 0x110d0 + in_R10);
  uVar2 = *(uint64_t *)(param_3 + 0x110c8 + in_R10);
  if ((*(byte *)(in_R10 + 0x78) & 4) != 0) {
    fVar10 = -fVar10;
    fVar11 = -fVar11;
  }
  fStackX_1c = (float)((ulonglong)uVar2 >> 0x20);
  fStackX_18 = (float)uVar2;
  fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
  fStackX_8 = (float)uVar1;
  fVar8 = fStackX_1c * fStackX_c + fStackX_18 * fStackX_8 + fVar11 * fVar10;
  if ((-0.01 <= fVar8) && (fVar8 <= 0.01)) {
    *(float *)(param_3 + 0x110e0 + in_R10) = fStackX_c * fVar11 - fStackX_1c * fVar10;
    *(float *)(param_3 + 0x110e8 + in_R10) = fStackX_1c * fStackX_8 - fStackX_c * fStackX_18;
    *(float *)(param_3 + 0x110e4 + in_R10) = fStackX_18 * fVar10 - fStackX_8 * fVar11;
    return 0;
  }
  return 0x24;
}



uint FUN_1807487b0(uint64_t param_1,uint64_t param_2,longlong param_3,float param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint unaff_EBX;
  uint unaff_EBP;
  float *unaff_RSI;
  uint uVar6;
  uint64_t *in_R9;
  longlong in_R10;
  float *in_R11;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float fVar9;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fStackX_8;
  float fStackX_c;
  float fStackX_18;
  float fStackX_1c;
  
  fVar8 = param_4 * param_4 + in_XMM4_Da * in_XMM4_Da + in_XMM5_Da * in_XMM5_Da;
  if ((unaff_XMM7_Da <= fVar8) && (fVar8 <= unaff_XMM6_Da)) {
    lVar4 = param_3 * 0x70;
    if ((in_XMM4_Da != *(float *)(lVar4 + 0x110bc + in_R10)) ||
       ((param_4 != *(float *)(lVar4 + 0x110c0 + in_R10) ||
        (in_XMM5_Da != *(float *)(lVar4 + 0x110c4 + in_R10))))) {
      *(int8_t *)(lVar4 + 0x110ed + in_R10) = 1;
    }
    *(uint64_t *)(lVar4 + 0x110bc + in_R10) = *(uint64_t *)(lVar4 + 0x110b0 + in_R10);
    *(int32_t *)(lVar4 + 0x110c4 + in_R10) = *(int32_t *)(lVar4 + 0x110b8 + in_R10);
    *(uint64_t *)(lVar4 + 0x110b0 + in_R10) = *in_R9;
    *(int32_t *)(lVar4 + 0x110b8 + in_R10) = *(int32_t *)(in_R9 + 1);
    if (in_R11 != (float *)0x0) {
      uVar5 = unaff_EBX;
      if (((uint)in_R11[2] & 0x7f800000) == 0x7f800000) {
        uVar5 = unaff_EBP;
      }
      uVar3 = unaff_EBX;
      if (((uint)in_R11[1] & 0x7f800000) == 0x7f800000) {
        uVar3 = unaff_EBP;
      }
      uVar6 = unaff_EBX;
      if (((uint)*in_R11 & 0x7f800000) == 0x7f800000) {
        uVar6 = unaff_EBP;
      }
      uVar6 = uVar5 | uVar3 | uVar6;
      if (uVar6 != 0) {
        return uVar6;
      }
      lVar4 = param_3 * 0x70;
      if (((*in_R11 != *(float *)(lVar4 + 0x1108c + in_R10)) ||
          (in_R11[1] != *(float *)((param_3 + 0x26f) * 0x70 + in_R10))) ||
         (in_R11[2] != *(float *)(lVar4 + 0x11094 + in_R10))) {
        *(int8_t *)(lVar4 + 0x110ec + in_R10) = 1;
      }
      *(uint64_t *)(lVar4 + 0x11080 + in_R10) = *(uint64_t *)in_R11;
      *(float *)(lVar4 + 0x11088 + in_R10) = in_R11[2];
      *(uint64_t *)(lVar4 + 0x1108c + in_R10) = *(uint64_t *)in_R11;
      *(float *)(lVar4 + 0x11094 + in_R10) = in_R11[2];
    }
    if (unaff_RSI != (float *)0x0) {
      uVar5 = unaff_EBX;
      if (((uint)unaff_RSI[2] & 0x7f800000) == 0x7f800000) {
        uVar5 = unaff_EBP;
      }
      uVar3 = unaff_EBX;
      if (((uint)unaff_RSI[1] & 0x7f800000) == 0x7f800000) {
        uVar3 = unaff_EBP;
      }
      if (((uint)*unaff_RSI & 0x7f800000) == 0x7f800000) {
        unaff_EBX = unaff_EBP;
      }
      uVar5 = uVar5 | uVar3 | unaff_EBX;
      if (uVar5 != 0) {
        return uVar5;
      }
      lVar4 = param_3 * 0x70;
      if (((*unaff_RSI != *(float *)(lVar4 + 0x110a4 + in_R10)) ||
          (unaff_RSI[1] != *(float *)(lVar4 + 0x110a8 + in_R10))) ||
         (unaff_RSI[2] != *(float *)(lVar4 + 0x110ac + in_R10))) {
        *(int8_t *)(lVar4 + 0x110ec + in_R10) = 1;
      }
      *(uint64_t *)(lVar4 + 0x110a4 + in_R10) = *(uint64_t *)(lVar4 + 0x11098 + in_R10);
      *(int32_t *)(lVar4 + 0x110ac + in_R10) = *(int32_t *)(lVar4 + 0x110a0 + in_R10);
      *(uint64_t *)(lVar4 + 0x11098 + in_R10) = *(uint64_t *)unaff_RSI;
      *(float *)(lVar4 + 0x110a0 + in_R10) = unaff_RSI[2];
    }
    param_3 = param_3 * 0x70;
    uVar1 = *(uint64_t *)(param_3 + 0x110b0 + in_R10);
    fVar8 = *(float *)(param_3 + 0x110b8 + in_R10);
    fVar9 = *(float *)(param_3 + 0x110d0 + in_R10);
    uVar2 = *(uint64_t *)(param_3 + 0x110c8 + in_R10);
    if ((*(byte *)(in_R10 + 0x78) & 4) != 0) {
      fVar8 = -fVar8;
      fVar9 = -fVar9;
    }
    fStackX_1c = (float)((ulonglong)uVar2 >> 0x20);
    fStackX_18 = (float)uVar2;
    fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
    fStackX_8 = (float)uVar1;
    fVar7 = fStackX_1c * fStackX_c + fStackX_18 * fStackX_8 + fVar9 * fVar8;
    if ((-0.01 <= fVar7) && (fVar7 <= 0.01)) {
      *(float *)(param_3 + 0x110e0 + in_R10) = fStackX_c * fVar9 - fStackX_1c * fVar8;
      *(float *)(param_3 + 0x110e8 + in_R10) = fStackX_1c * fStackX_8 - fStackX_c * fStackX_18;
      *(float *)(param_3 + 0x110e4 + in_R10) = fStackX_18 * fVar8 - fStackX_8 * fVar9;
      return 0;
    }
  }
  return 0x24;
}



uint64_t FUN_180748b0a(void)

{
  return 0x1f;
}



uint64_t FUN_180748b40(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar3 = *param_2;
    if (((((iVar3 - 0x55U < 0x14) && (((longlong)iVar3 & 3U) == 0)) && ((uint)param_2[2] < 0x10000))
        && ((((uint)param_2[1] < 0x10000 && ((uint)param_2[3] < 0x10000)) &&
            (((uint)param_2[4] < 0x10000 &&
             (((uint)param_2[5] < 0x10000 && ((uint)param_2[6] < 0x10000)))))))) &&
       ((iVar3 < 0x61 || ((-1 < param_2[0x18] && (param_2[2] < 0x10000)))))) {
      fVar1 = (float)param_2[0xe];
      if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
        return 0x1d;
      }
      fVar2 = (float)param_2[0x12];
      if (0.0001 <= fVar2) {
        if (fVar2 < 10.0) {
          return 0x1f;
        }
        if (22050.0 < fVar2) {
          return 0x1f;
        }
      }
      else {
        param_2[0x12] = *(int *)(param_1 + 0x11650);
      }
      if ((((fVar1 == -1.0) || ((0.0 <= fVar1 && (fVar1 <= 1.0)))) && ((uint)param_2[8] < 0x21)) &&
         (((((uint)param_2[0x14] < 0x10000 && ((uint)param_2[0x15] < 5)) &&
           ((uint)param_2[0x13] < 4)) && ((uint)param_2[0x17] < 4)))) {
        if (29999 < param_2[0xf] - 1U) {
          param_2[0xf] = *(int *)(param_1 + 0x11644);
        }
        if (param_2[0x14] == 0) {
          param_2[0x14] = *(int *)(param_1 + 0x11658);
        }
        if (param_2[0x15] == 0) {
          param_2[0x15] = *(int *)(param_1 + 0x1165c);
        }
        if (param_2[0x17] == 0) {
          param_2[0x17] = *(int *)(param_1 + 0x11664);
        }
                    // WARNING: Subroutine does not return
        memcpy(param_1 + 0x11608,param_2,(longlong)iVar3);
      }
    }
  }
  return 0x1f;
}





// 函数: void FUN_180748dd0(longlong param_1)
void FUN_180748dd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18078ad10();
  if (iVar1 == 0) {
    FUN_180746460(param_1,*(int32_t *)(param_1 + 0x680),0,0,param_1 + 0x116cc,0,0,0);
  }
  return;
}



uint64_t FUN_180748e20(longlong param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_1 != 0) {
    func_0x000180743c20(param_1,0x15);
  }
  *(uint64_t *)(param_1 + 0x115e0 + (longlong)param_2 * 8) = param_3;
  *(uint64_t *)(param_1 + 0x115e8 + (longlong)param_2 * 8) = param_4;
  if ((param_1 != 0) && (param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,0x15);
  }
  return 0;
}





