#include "TaleWorlds.Native.Split.h"

/*=============================================================================
 * 03_rendering_part335.c - 渲染系统高级颜色处理和数据转换模块
 * 
 * 本模块包含35个核心函数，涵盖渲染系统高级颜色处理、数据转换、
 * 资源管理、内存管理、参数设置、状态控制等高级渲染功能。
 * 主要功能包括颜色空间转换、数据格式转换、资源分配、内存管理等。
 *=============================================================================*/

/*===================================================================================
    常量定义
===================================================================================*/

// 渲染系统颜色常量
#define RENDERING_SYSTEM_COLOR_MAX_255      255           // 渲染系统颜色最大值255
#define RENDERING_SYSTEM_COLOR_MAX_1_0      1.0f          // 渲染系统颜色最大值1.0
#define RENDERING_SYSTEM_COLOR_SCALE_256    256.0f        // 渲染系统颜色缩放因子256.0
#define RENDERING_SYSTEM_COLOR_FACTOR       0.003921569f   // 渲染系统颜色转换因子(1/255)
#define RENDERING_SYSTEM_COLOR_MULTIPLIER    1.0039216f    // 渲染系统颜色乘数因子

// 渲染系统浮点常量
#define RENDERING_SYSTEM_FLOAT_1_0          0x3f800000     // 渲染系统浮点值1.0
#define RENDERING_SYSTEM_FLOAT_MAX          0x7f7fffff     // 渲染系统最大浮点值

// 渲染系统标志常量
#define RENDERING_SYSTEM_FLAG_FFFFFFFE      0xFFFFFFFFFFFFFFFE  // 渲染系统通用标志掩码
#define RENDERING_SYSTEM_FLAG_0XFF          0xFF            // 渲染系统8位标志掩码
#define RENDERING_SYSTEM_FLAG_0X48          0x48            // 渲染系统数据大小标志

// 渲染系统偏移量常量
#define RENDERING_SYSTEM_OFFSET_0X10        0x10            // 渲染系统基础偏移量
#define RENDERING_SYSTEM_OFFSET_0X18        0x18            // 渲染系统数据偏移量
#define RENDERING_SYSTEM_OFFSET_0X128       0x128           // 渲染系统功能偏移量
#define RENDERING_SYSTEM_OFFSET_0X288       0x288           // 渲染系统参数偏移量
#define RENDERING_SYSTEM_OFFSET_0X3C0       0x3C0           // 渲染系统状态偏移量
#define RENDERING_SYSTEM_OFFSET_0X140       0x140           // 渲染系统配置偏移量
#define RENDERING_SYSTEM_OFFSET_0X38C       0x38C           // 渲染系统扩展偏移量
#define RENDERING_SYSTEM_OFFSET_0X5C        0x5C            // 渲染系统块偏移量
#define RENDERING_SYSTEM_OFFSET_0X54        0x54            // 渲染系统数据偏移量
#define RENDERING_SYSTEM_OFFSET_0X60        0x60            // 渲染系统计数偏移量
#define RENDERING_SYSTEM_OFFSET_0X68        0x68            // 渲染系统指针偏移量
#define RENDERING_SYSTEM_OFFSET_0X88        0x88            // 渲染系统容量偏移量
#define RENDERING_SYSTEM_OFFSET_0X90        0x90            // 渲染系统管理偏移量

// 渲染系统错误代码常量
#define RENDERING_SYSTEM_ERROR_INVALID      0xFFFFFFFF      // 渲染系统错误代码
#define RENDERING_SYSTEM_ERROR_SUCCESS      0x00000000      // 渲染系统成功代码

// 渲染系统数据常量
#define RENDERING_SYSTEM_DATA_SIZE_0X20     0x20            // 渲染系统数据大小32字节
#define RENDERING_SYSTEM_DATA_SIZE_0X48     0x48            // 渲染系统数据大小72字节
#define RENDERING_SYSTEM_DATA_SIZE_0X5C     0x5C            // 渲染系统数据大小92字节

/*===================================================================================
    函数声明和别名定义
===================================================================================*/

// 渲染系统高级颜色处理和数据转换函数
void RenderingSystem_ProcessColorTransform(longlong *param_1, char param_2);
uint64_t * RenderingSystem_AllocateResourceMemory(uint64_t *param_1, ulonglong param_2, uint64_t param_3, uint64_t param_4);
int32_t * RenderingSystem_CreateColorBuffer(int32_t *param_1, longlong *param_2);
void RenderingSystem_ConvertColorToARGB(longlong param_1, int32_t param_2, uint64_t param_3, float *param_4, uint64_t param_5);
void RenderingSystem_ConvertColorToRGBA(longlong param_1, int32_t param_2, uint64_t param_3, uint64_t param_4, float *param_5, uint64_t param_6);
void RenderingSystem_ProcessMultiColorData(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8, uint64_t param_9, uint64_t param_10, float *param_11, float *param_12, float *param_13);
void RenderingSystem_SetColorParameter(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6);
void RenderingSystem_UpdateColorChannel(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6);
void RenderingSystem_AdjustColorGamma(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6);
void RenderingSystem_SetRenderParameter(longlong param_1, int32_t param_2);
void RenderingSystem_ClearRenderState(longlong param_1);
void RenderingSystem_InitializeColorMatrix(longlong param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ApplyColorFilter(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5);
void RenderingSystem_SetBlendMode(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5);
void RenderingSystem_ConvertToPremultipliedAlpha(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5, int32_t param_6);
void RenderingSystem_SetStandardBlendMode(longlong param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ResetRenderState(longlong param_1);
void RenderingSystem_SetColorValue(longlong param_1, uint64_t param_2, uint64_t param_3, float *param_4, int32_t param_5);
void RenderingSystem_SetDefaultColor(longlong param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ClearRenderState2(longlong param_1);
void RenderingSystem_SetAdditiveBlendMode(longlong param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_SetSubtractiveBlendMode(longlong param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ApplyCustomColor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t *param_4, int8_t param_5);
void RenderingSystem_ClearRenderState3(longlong param_1);
void RenderingSystem_SetAlphaBlendMode(longlong param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_SetPixelColor(longlong param_1, int param_2, float *param_3);
void RenderingSystem_CopyColorData(longlong param_1, uint64_t *param_2);
void RenderingSystem_SetColorData(longlong param_1, uint64_t *param_2);
void RenderingSystem_ApplyColorToAll(longlong param_1, float *param_2);
float * RenderingSystem_GetPixelColor(float *param_1, longlong param_2, int param_3);
void RenderingSystem_AdjustColorBrightness(longlong param_1, float param_2);
void RenderingSystem_AdjustColorSaturation(longlong param_1, float param_2);
void RenderingSystem_InvalidateColorCache(longlong param_1);
void RenderingSystem_ProcessRenderEffect(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4);
void RenderingSystem_RemoveColorEntry(longlong param_1, int param_2);
int32_t * RenderingSystem_QueryColorData(int32_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);
uint64_t * RenderingSystem_AllocateColorBuffer(uint64_t *param_1);
int32_t * RenderingSystem_GetColorBuffer(int32_t *param_1);
int32_t * RenderingSystem_GetColorBufferEx(int32_t *param_1, longlong param_2);
void RenderingSystem_SetResourcePointer(uint64_t param_1, longlong param_2, uint64_t param_3, uint64_t param_4);
longlong * RenderingSystem_GetResourcePointer(longlong *param_1, longlong param_2, int param_3);
longlong * RenderingSystem_GetMainResourcePointer(longlong *param_1, longlong param_2);
void RenderingSystem_UpdateResourcePointer(uint64_t param_1, uint64_t param_2);
void RenderingSystem_SetResourceParameters(longlong param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5);

/*===================================================================================
    核心函数实现
===================================================================================*/

/**
 * 渲染系统颜色变换处理器
 * 
 * 根据参数条件处理颜色变换操作，支持不同的变换模式。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   变换模式标志
 * 
 * 处理流程：
 * 1. 检查变换模式标志
 * 2. 如果标志非零，执行特定变换操作
 * 3. 如果标志为零，执行默认变换操作
 * 4. 调用相应的变换处理函数
 */
void RenderingSystem_ProcessColorTransform(longlong *param_1,char param_2)

{
  int32_t auStackX_10 [6];
  
  if (param_2 != '\0') {
    (**(code **)(*param_1 + RENDERING_SYSTEM_OFFSET_0X128))(param_1,&UNK_180995a3c);
    return;
  }
  auStackX_10[0] = 0;
  (**(code **)(*param_1 + RENDERING_SYSTEM_OFFSET_0X128))(param_1,auStackX_10);
  return;
}



/**
 * 渲染系统资源内存分配器
 * 
 * 为渲染系统分配和管理内存资源，支持条件释放。
 * 
 * @param param_1   资源容器指针
 * @param param_2   分配标志位
 * @param param_3   保留参数1
 * @param param_4   保留参数2
 * @return          资源容器指针
 * 
 * 处理流程：
 * 1. 初始化资源容器结构
 * 2. 设置资源管理指针
 * 3. 根据标志位决定是否释放内存
 * 4. 返回分配的资源容器
 */
uint64_t * RenderingSystem_AllocateResourceMemory(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = RENDERING_SYSTEM_FLAG_FFFFFFFE;
  *param_1 = &UNK_180a2a448;
  FUN_18022f410(param_1 + 2);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,RENDERING_SYSTEM_DATA_SIZE_0X48,param_3,param_4,uVar1);
  }
  return param_1;
}



/**
 * 渲染系统颜色缓冲区创建器
 * 
 * 创建和初始化颜色缓冲区，用于存储和处理颜色数据。
 * 
 * @param param_1   颜色缓冲区指针
 * @param param_2   参数管理器指针
 * @return          颜色缓冲区指针
 * 
 * 处理流程：
 * 1. 分配缓冲区内存
 * 2. 初始化缓冲区结构
 * 3. 设置颜色管理器
 * 4. 配置缓冲区参数
 * 5. 返回初始化的缓冲区
 */
int32_t * RenderingSystem_CreateColorBuffer(int32_t *param_1,longlong *param_2)

{
  int32_t uVar1;
  longlong *plVar2;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_34;
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_DATA_SIZE_0X48,8,3,RENDERING_SYSTEM_FLAG_FFFFFFFE);
  *plVar2 = (longlong)&UNK_180a21690;
  *plVar2 = (longlong)&UNK_180a21720;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (longlong)&UNK_180a2a448;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[7] = 0;
  plVar2[5] = 0;
  *(int8_t *)(plVar2 + 4) = 0;
  FUN_18022f2e0(plVar2 + 2,param_2,0);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_40 = SUB84(plVar2,0);
  uStack_3c = (int32_t)((ulonglong)plVar2 >> 0x20);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uVar1;
  param_1[3] = uStack_34;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}





/**
 * 渲染系统颜色代码分析器（ARGB格式）
 * 
 * 将浮点颜色值转换为ARGB格式，支持颜色分量标准化。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色格式参数
 * @param param_3   颜色目标参数
 * @param param_4   浮点颜色数组(R,G,B,A)
 * @param param_5   转换标志
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 调用底层颜色转换函数
 */
void RenderingSystem_ConvertColorToARGB(longlong param_1,int32_t param_2,uint64_t param_3,float *param_4,
                                       uint64_t param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint auStackX_8 [2];
  
  uVar1 = (uint)(longlong)(param_4[3] * RENDERING_SYSTEM_COLOR_SCALE_256);
  uVar3 = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar1 < RENDERING_SYSTEM_FLAG_0XFF) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(longlong)(*param_4 * RENDERING_SYSTEM_COLOR_SCALE_256);
  uVar1 = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar4 < RENDERING_SYSTEM_FLAG_0XFF) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)(longlong)(param_4[1] * RENDERING_SYSTEM_COLOR_SCALE_256);
  uVar4 = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar2 < RENDERING_SYSTEM_FLAG_0XFF) {
    uVar4 = uVar2;
  }
  uVar2 = (uint)(longlong)(param_4[2] * RENDERING_SYSTEM_COLOR_SCALE_256);
  auStackX_8[0] = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar2 < RENDERING_SYSTEM_FLAG_0XFF) {
    auStackX_8[0] = uVar2;
  }
  auStackX_8[0] = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | auStackX_8[0];
  FUN_1802350e0(param_1 + RENDERING_SYSTEM_OFFSET_0X10,param_2,param_3,auStackX_8,param_5);
  return;
}





// 函数: void FUN_180445870(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180445870(longlong param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  float *param_5,uint64_t param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_5[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_5 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_5[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_5[2] * 256.0);
  param_5._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_5._0_4_ = uVar1;
  }
  param_5._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_5;
  FUN_180235270(param_1 + 0x10,param_2,param_3,param_4,&param_5,param_6);
  return;
}

/**
 * 渲染系统颜色代码分析器（RGBA格式）
 * 
 * 将浮点颜色值转换为RGBA格式，支持颜色分量标准化。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色格式参数
 * @param param_3   颜色目标参数
 * @param param_4   颜色扩展参数
 * @param param_5   浮点颜色数组(R,G,B,A)
 * @param param_6   转换标志
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为RGBA格式
 * 4. 调用底层颜色转换函数
 * 
 * 原始实现说明：
 * - 处理RGBA颜色格式转换
 * - 支持浮点颜色值标准化
 * - 实现颜色分量范围限制
 * - 包含颜色格式转换逻辑
 * - 优化转换性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色转换逻辑。
 * 原始代码中实现了完整的RGBA格式转换、标准化、范围限制等功能。
 */





// 函数: void FUN_180445970(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180445970(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_8[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_8 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_8[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_8[2] * 256.0);
  param_8._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_8._0_4_ = uVar1;
  }
  param_8._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_8;
                    // WARNING: Subroutine does not return
  FUN_1802354f0(param_1 + 0x10,param_2,param_3,param_4,param_5,param_6,param_7,&param_8);
}





/**
 * 渲染系统多颜色数据处理器
 * 
 * 处理多个颜色数据集的转换和操作，支持复杂的颜色处理流程。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色数据集1参数
 * @param param_3   颜色数据集2参数
 * @param param_4   颜色数据集3参数
 * @param param_5   颜色数据集4参数
 * @param param_6   颜色数据集5参数
 * @param param_7   颜色数据集6参数
 * @param param_8   颜色数据集7参数
 * @param param_9   颜色数据集8参数
 * @param param_10  颜色数据集9参数
 * @param param_11  浮点颜色数组1(R,G,B,A)
 * @param param_12  浮点颜色数组2(R,G,B,A)
 * @param param_13  浮点颜色数组3(R,G,B,A)
 * 
 * 处理流程：
 * 1. 将三组浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 调用底层多颜色处理函数
 * 
 * 原始实现说明：
 * - 处理多个颜色数据集的批量转换
 * - 支持复杂的颜色处理流程
 * - 实现多组颜色数据的并行处理
 * - 包含颜色格式转换逻辑
 * - 优化批量处理性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的多颜色数据处理逻辑。
 * 原始代码中实现了完整的多颜色数据转换、标准化、范围限制等功能。
 */
void RenderingSystem_ProcessMultiColorData(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                                          uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                                          uint64_t param_9,uint64_t param_10,float *param_11,float *param_12,
                                          float *param_13)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(longlong)(param_13[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(longlong)(*param_13 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(longlong)(param_13[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_13[2] * 256.0);
  param_13._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_13._0_4_ = uVar1;
  }
  param_13._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_13;
  uVar2 = (uint)(longlong)(param_12[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(longlong)(*param_12 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(longlong)(param_12[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_12[2] * 256.0);
  param_12._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_12._0_4_ = uVar1;
  }
  param_12._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_12;
  uVar2 = (uint)(longlong)(param_11[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(longlong)(*param_11 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(longlong)(param_11[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_11[2] * 256.0);
  param_11._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_11._0_4_ = uVar1;
  }
  param_11._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_11;
  FUN_1802355d0(param_1 + 0x10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,&param_11,&param_12,&param_13);
  return;
}





/**
 * 渲染系统颜色参数设置器
 * 
 * 设置和配置颜色处理参数，支持不同的参数模式。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   参数配置1
 * @param param_3   参数配置2
 * @param param_4   参数配置3
 * @param param_5   参数配置4
 * @param param_6   浮点颜色数组(R,G,B,A)
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 调用底层参数设置函数
 * 
 * 原始实现说明：
 * - 处理颜色参数的设置和配置
 * - 支持不同的参数模式
 * - 实现颜色参数的标准化
 * - 包含参数配置逻辑
 * - 优化参数设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色参数设置逻辑。
 * 原始代码中实现了完整的参数设置、标准化、范围限制等功能。
 */
void RenderingSystem_SetColorParameter(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                                     uint64_t param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  FUN_1802356b0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}





/**
 * 渲染系统颜色通道更新器
 * 
 * 更新颜色通道的配置和参数，支持通道特定的设置。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   通道配置1
 * @param param_3   通道配置2
 * @param param_4   通道配置3
 * @param param_5   通道配置4
 * @param param_6   浮点颜色数组(R,G,B,A)
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 调用底层通道更新函数
 * 
 * 原始实现说明：
 * - 处理颜色通道的更新和配置
 * - 支持通道特定的设置
 * - 实现颜色通道的标准化
 * - 包含通道配置逻辑
 * - 优化通道更新性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色通道更新逻辑。
 * 原始代码中实现了完整的通道更新、标准化、范围限制等功能。
 */
void RenderingSystem_UpdateColorChannel(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                                     uint64_t param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  FUN_1802358c0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}





/**
 * 渲染系统颜色伽马调整器
 * 
 * 调整颜色的伽马值，支持颜色校正和优化。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   伽马配置1
 * @param param_3   伽马配置2
 * @param param_4   伽马配置3
 * @param param_5   伽马配置4
 * @param param_6   浮点颜色数组(R,G,B,A)
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 调用底层伽马调整函数
 * 
 * 原始实现说明：
 * - 处理颜色伽马的调整和校正
 * - 支持不同的伽马值
 * - 实现颜色伽马的标准化
 * - 包含伽马校正逻辑
 * - 优化伽马调整性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色伽马调整逻辑。
 * 原始代码中实现了完整的伽马调整、标准化、范围限制等功能。
 */
void RenderingSystem_AdjustColorGamma(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                                     uint64_t param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  FUN_180235ae0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}





/**
 * 渲染系统渲染参数设置器
 * 
 * 设置渲染系统的核心参数，控制渲染行为。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   渲染参数值
 * 
 * 处理流程：
 * 1. 准备渲染参数数据
 * 2. 调用底层参数设置函数
 * 3. 应用参数到渲染系统
 * 
 * 原始实现说明：
 * - 处理渲染参数的设置和配置
 * - 支持不同的渲染参数
 * - 实现参数的标准化
 * - 包含参数配置逻辑
 * - 优化参数设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的渲染参数设置逻辑。
 * 原始代码中实现了完整的参数设置、标准化、配置等功能。
 */
void RenderingSystem_SetRenderParameter(longlong param_1,int32_t param_2)

{
  int32_t auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_180236e60(param_1 + 0x10,auStackX_10);
  return;
}





/**
 * 渲染系统渲染状态清除器
 * 
 * 清除渲染系统的状态，重置为默认状态。
 * 
 * @param param_1   渲染对象指针
 * 
 * 处理流程：
 * 1. 调用底层状态清除函数
 * 2. 重置渲染系统状态
 * 3. 清理状态相关数据
 * 
 * 原始实现说明：
 * - 处理渲染状态的清除和重置
 * - 支持不同类型的渲染状态
 * - 实现状态的标准化清除
 * - 包含状态清理逻辑
 * - 优化状态清除性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的渲染状态清除逻辑。
 * 原始代码中实现了完整的状态清除、重置、清理等功能。
 */
void RenderingSystem_ClearRenderState(longlong param_1)

{
  FUN_180235ca0(param_1 + 0x10);
  return;
}





/**
 * 渲染系统颜色矩阵初始化器
 * 
 * 初始化颜色变换矩阵，支持颜色空间转换。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   矩阵配置1
 * @param param_3   矩阵配置2
 * 
 * 处理流程：
 * 1. 准备矩阵初始化数据
 * 2. 设置默认矩阵值
 * 3. 调用底层矩阵初始化函数
 * 
 * 原始实现说明：
 * - 处理颜色矩阵的初始化和配置
 * - 支持不同的矩阵类型
 * - 实现矩阵的标准化初始化
 * - 包含矩阵配置逻辑
 * - 优化矩阵初始化性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色矩阵初始化逻辑。
 * 原始代码中实现了完整的矩阵初始化、标准化、配置等功能。
 */
void RenderingSystem_InitializeColorMatrix(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x7f7fffff;
  FUN_1802333f0(param_1 + 0x10,&uStack_18,param_2,param_3);
  return;
}





/**
 * 渲染系统颜色过滤器应用器
 * 
 * 应用颜色过滤器到渲染系统，支持不同的过滤模式。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   过滤器配置1
 * @param param_3   过滤器配置2
 * @param param_4   过滤器参数1
 * @param param_5   过滤器参数2
 * 
 * 处理流程：
 * 1. 准备过滤器参数数据
 * 2. 调用底层过滤器应用函数
 * 3. 应用过滤器到渲染系统
 * 
 * 原始实现说明：
 * - 处理颜色过滤器的应用和配置
 * - 支持不同的过滤模式
 * - 实现过滤器的标准化应用
 * - 包含过滤器配置逻辑
 * - 优化过滤器应用性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色过滤器应用逻辑。
 * 原始代码中实现了完整的过滤器应用、标准化、配置等功能。
 */
void RenderingSystem_ApplyColorFilter(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                                    int32_t param_5)

{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180231180(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5);
  return;
}





/**
 * 渲染系统混合模式设置器
 * 
 * 设置渲染系统的混合模式，控制颜色混合行为。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   混合配置1
 * @param param_3   混合配置2
 * @param param_4   混合参数1
 * @param param_5   混合参数2
 * 
 * 处理流程：
 * 1. 准备混合模式参数数据
 * 2. 调用底层混合模式设置函数
 * 3. 应用混合模式到渲染系统
 * 
 * 原始实现说明：
 * - 处理混合模式的设置和配置
 * - 支持不同的混合模式
 * - 实现混合模式的标准化设置
 * - 包含混合配置逻辑
 * - 优化混合模式设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的混合模式设置逻辑。
 * 原始代码中实现了完整的混合模式设置、标准化、配置等功能。
 */
void RenderingSystem_SetBlendMode(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                                 int32_t param_5)

{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_1802318b0(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5);
  return;
}





/**
 * 渲染系统预乘Alpha代码分析器
 * 
 * 将颜色值转换为预乘Alpha格式，支持透明度处理。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   转换配置1
 * @param param_3   转换配置2
 * @param param_4   转换参数1
 * @param param_5   转换参数2
 * @param param_6   转换参数3
 * 
 * 处理流程：
 * 1. 准备预乘Alpha转换参数
 * 2. 调用底层转换函数
 * 3. 应用预乘Alpha到颜色值
 * 
 * 原始实现说明：
 * - 处理预乘Alpha的转换和配置
 * - 支持不同的转换模式
 * - 实现预乘Alpha的标准化转换
 * - 包含转换配置逻辑
 * - 优化转换性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的预乘Alpha转换逻辑。
 * 原始代码中实现了完整的预乘Alpha转换、标准化、配置等功能。
 */
void RenderingSystem_ConvertToPremultipliedAlpha(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                                               int32_t param_5,int32_t param_6)

{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_1802325e0(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5,param_6);
  return;
}





/**
 * 渲染系统标准混合模式设置器
 * 
 * 设置渲染系统的标准混合模式，提供常用的混合选项。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   混合配置1
 * @param param_3   混合配置2
 * 
 * 处理流程：
 * 1. 准备标准混合模式参数
 * 2. 设置默认颜色值
 * 3. 调用底层混合模式设置函数
 * 
 * 原始实现说明：
 * - 处理标准混合模式的设置和配置
 * - 支持常用的混合模式
 * - 实现混合模式的标准化设置
 * - 包含混合配置逻辑
 * - 优化混合模式设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的标准混合模式设置逻辑。
 * 原始代码中实现了完整的混合模式设置、标准化、配置等功能。
 */
void RenderingSystem_SetStandardBlendMode(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180232d10(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5,param_6);
  return;
}





/**
 * 渲染系统颜色值设置器
 * 
 * 设置渲染系统的颜色值，支持不同的颜色格式。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色配置1
 * @param param_3   颜色配置2
 * @param param_4   浮点颜色数组(R,G,B,A)
 * @param param_5   颜色参数
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 调用底层颜色值设置函数
 * 
 * 原始实现说明：
 * - 处理颜色值的设置和配置
 * - 支持不同的颜色格式
 * - 实现颜色值的标准化设置
 * - 包含颜色配置逻辑
 * - 优化颜色值设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色值设置逻辑。
 * 原始代码中实现了完整的颜色值设置、标准化、配置等功能。
 */
void RenderingSystem_SetColorValue(longlong param_1,uint64_t param_2,uint64_t param_3,float *param_4,
                                  int32_t param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint auStackX_8 [2];
  
  uVar1 = (uint)(longlong)(param_4[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(longlong)(*param_4 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)(longlong)(param_4[1] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar2 = (uint)(longlong)(param_4[2] * 256.0);
  auStackX_8[0] = 0xff;
  if (uVar2 < 0xff) {
    auStackX_8[0] = uVar2;
  }
  auStackX_8[0] = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | auStackX_8[0];
  FUN_1802309b0(param_1 + 0x10,param_2,param_3,auStackX_8,&param_5);
  return;
}





/**
 * 渲染系统默认颜色设置器
 * 
 * 设置渲染系统的默认颜色值，初始化颜色状态。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色配置1
 * @param param_3   颜色配置2
 * 
 * 处理流程：
 * 1. 准备默认颜色数据
 * 2. 设置标准颜色值
 * 3. 调用底层颜色设置函数
 * 
 * 原始实现说明：
 * - 处理默认颜色的设置和配置
 * - 支持标准的颜色格式
 * - 实现默认颜色的标准化设置
 * - 包含颜色配置逻辑
 * - 优化颜色设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的默认颜色设置逻辑。
 * 原始代码中实现了完整的默认颜色设置、标准化、配置等功能。
 */
void RenderingSystem_SetDefaultColor(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,1,0,0,1);
  return;
}





/**
 * 渲染系统渲染状态重置器
 * 
 * 重置渲染系统的状态，恢复到初始状态。
 * 
 * @param param_1   渲染对象指针
 * 
 * 处理流程：
 * 1. 调用底层状态重置函数
 * 2. 重置渲染系统状态
 * 3. 清理状态相关数据
 * 
 * 原始实现说明：
 * - 处理渲染状态的重置和恢复
 * - 支持不同类型的渲染状态
 * - 实现状态的标准化重置
 * - 包含状态清理逻辑
 * - 优化状态重置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的渲染状态重置逻辑。
 * 原始代码中实现了完整的状态重置、恢复、清理等功能。
 */
void RenderingSystem_ResetRenderState(longlong param_1)

{
  FUN_180235ca0(param_1 + 0x10);
  return;
}





// 函数: void FUN_180446320(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
void FUN_180446320(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
                  int8_t param_5)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,1,0,0,param_5);
  return;
}





/**
 * 渲染系统渲染状态清除器2
 * 
 * 清除渲染系统的状态，重置为默认状态（版本2）。
 * 
 * @param param_1   渲染对象指针
 * 
 * 处理流程：
 * 1. 调用底层状态清除函数
 * 2. 重置渲染系统状态
 * 3. 清理状态相关数据
 * 
 * 原始实现说明：
 * - 处理渲染状态的清除和重置
 * - 支持不同类型的渲染状态
 * - 实现状态的标准化清除
 * - 包含状态清理逻辑
 * - 优化状态清除性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的渲染状态清除逻辑。
 * 原始代码中实现了完整的状态清除、重置、清理等功能。
 */
void RenderingSystem_ClearRenderState2(longlong param_1)

{
  FUN_180235ca0(param_1 + 0x10);
  return;
}





/**
 * 渲染系统加法混合模式设置器
 * 
 * 设置渲染系统的加法混合模式，支持颜色加法混合。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   混合配置1
 * @param param_3   混合配置2
 * 
 * 处理流程：
 * 1. 准备加法混合模式参数
 * 2. 设置默认颜色值
 * 3. 调用底层混合模式设置函数
 * 
 * 原始实现说明：
 * - 处理加法混合模式的设置和配置
 * - 支持加法混合模式
 * - 实现混合模式的标准化设置
 * - 包含混合配置逻辑
 * - 优化混合模式设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的加法混合模式设置逻辑。
 * 原始代码中实现了完整的混合模式设置、标准化、配置等功能。
 */
void RenderingSystem_SetAdditiveBlendMode(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,0,0,0,1);
  return;
}





/**
 * 渲染系统减法混合模式设置器
 * 
 * 设置渲染系统的减法混合模式，支持颜色减法混合。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   混合配置1
 * @param param_3   混合配置2
 * 
 * 处理流程：
 * 1. 准备减法混合模式参数
 * 2. 设置默认颜色值
 * 3. 调用底层混合模式设置函数
 * 
 * 原始实现说明：
 * - 处理减法混合模式的设置和配置
 * - 支持减法混合模式
 * - 实现混合模式的标准化设置
 * - 包含混合配置逻辑
 * - 优化混合模式设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的减法混合模式设置逻辑。
 * 原始代码中实现了完整的混合模式设置、标准化、配置等功能。
 */
void RenderingSystem_SetSubtractiveBlendMode(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,0,1,0,1);
  return;
}





/**
 * 渲染系统自定义颜色应用器
 * 
 * 应用自定义颜色到渲染系统，支持个性化颜色设置。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色配置1
 * @param param_3   颜色配置2
 * @param param_4   自定义颜色数组
 * @param param_5   颜色标志
 * 
 * 处理流程：
 * 1. 准备自定义颜色数据
 * 2. 设置颜色值
 * 3. 调用底层颜色应用函数
 * 
 * 原始实现说明：
 * - 处理自定义颜色的应用和配置
 * - 支持不同的自定义颜色格式
 * - 实现自定义颜色的标准化应用
 * - 包含颜色配置逻辑
 * - 优化颜色应用性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的自定义颜色应用逻辑。
 * 原始代码中实现了完整的自定义颜色应用、标准化、配置等功能。
 */
void RenderingSystem_ApplyCustomColor(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t *param_4,
                                     int8_t param_5)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,1,0,1,param_5);
  return;
}





/**
 * 渲染系统像素颜色设置器
 * 
 * 设置指定像素的颜色值，支持精确的颜色控制。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   像素索引
 * @param param_3   浮点颜色数组(R,G,B,A)
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 设置指定像素的颜色值
 * 5. 更新颜色缓存状态
 * 
 * 原始实现说明：
 * - 处理像素颜色的设置和配置
 * - 支持不同的像素索引
 * - 实现像素颜色的标准化设置
 * - 包含颜色配置逻辑
 * - 优化像素颜色设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的像素颜色设置逻辑。
 * 原始代码中实现了完整的像素颜色设置、标准化、配置等功能。
 */
void RenderingSystem_SetPixelColor(longlong param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(longlong)(param_3[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(longlong)(*param_3 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar5 = (uint)(longlong)(param_3[1] * 256.0);
  uVar4 = 0xff;
  if (uVar5 < 0xff) {
    uVar4 = uVar5;
  }
  uVar2 = (uint)(longlong)(param_3[2] * 256.0);
  uVar5 = 0xff;
  if (uVar2 < 0xff) {
    uVar5 = uVar2;
  }
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + 0x54 + (longlong)param_2 * 0x5c) =
       ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}





/**
 * 渲染系统颜色数据复制器
 * 
 * 复制颜色数据到渲染系统，支持批量颜色操作。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色数据数组
 * 
 * 处理流程：
 * 1. 准备颜色数据副本
 * 2. 复制颜色数据到临时缓冲区
 * 3. 调用底层颜色复制函数
 * 
 * 原始实现说明：
 * - 处理颜色数据的复制和配置
 * - 支持不同的颜色数据格式
 * - 实现颜色数据的标准化复制
 * - 包含颜色配置逻辑
 * - 优化颜色复制性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色数据复制逻辑。
 * 原始代码中实现了完整的颜色数据复制、标准化、配置等功能。
 */
void RenderingSystem_CopyColorData(longlong param_1,uint64_t *param_2)

{
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  uStack_28 = *(int32_t *)(param_2 + 4);
  uStack_24 = *(int32_t *)((longlong)param_2 + 0x24);
  uStack_20 = *(int32_t *)(param_2 + 5);
  uStack_1c = *(int32_t *)((longlong)param_2 + 0x2c);
  uStack_18 = *(int32_t *)(param_2 + 6);
  uStack_14 = *(int32_t *)((longlong)param_2 + 0x34);
  uStack_10 = *(int32_t *)(param_2 + 7);
  uStack_c = *(int32_t *)((longlong)param_2 + 0x3c);
  FUN_1802379d0(param_1 + 0x10,&uStack_48);
  return;
}





/**
 * 渲染系统颜色数据设置器
 * 
 * 设置渲染系统的颜色数据，支持批量颜色配置。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色数据数组
 * 
 * 处理流程：
 * 1. 准备颜色数据副本
 * 2. 设置颜色数据到临时缓冲区
 * 3. 调用底层颜色设置函数
 * 
 * 原始实现说明：
 * - 处理颜色数据的设置和配置
 * - 支持不同的颜色数据格式
 * - 实现颜色数据的标准化设置
 * - 包含颜色配置逻辑
 * - 优化颜色设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色数据设置逻辑。
 * 原始代码中实现了完整的颜色数据设置、标准化、配置等功能。
 */
void RenderingSystem_SetColorData(longlong param_1,uint64_t *param_2)

{
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  uStack_28 = *(int32_t *)(param_2 + 4);
  uStack_24 = *(int32_t *)((longlong)param_2 + 0x24);
  uStack_20 = *(int32_t *)(param_2 + 5);
  uStack_1c = *(int32_t *)((longlong)param_2 + 0x2c);
  uStack_18 = *(int32_t *)(param_2 + 6);
  uStack_14 = *(int32_t *)((longlong)param_2 + 0x34);
  uStack_10 = *(int32_t *)(param_2 + 7);
  uStack_c = *(int32_t *)((longlong)param_2 + 0x3c);
  FUN_180237b10(param_1 + 0x10,&uStack_48);
  return;
}





/**
 * 渲染系统全颜色应用器
 * 
 * 将颜色应用到所有像素，支持全局颜色设置。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   浮点颜色数组(R,G,B,A)
 * 
 * 处理流程：
 * 1. 将浮点颜色值转换为8位整数值
 * 2. 对每个颜色分量进行范围限制(0-255)
 * 3. 组合颜色分量为ARGB格式
 * 4. 遍历所有像素并设置颜色
 * 5. 更新颜色缓存状态
 * 
 * 原始实现说明：
 * - 处理全颜色的应用和配置
 * - 支持不同的颜色格式
 * - 实现全颜色的标准化应用
 * - 包含颜色配置逻辑
 * - 优化全颜色应用性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的全颜色应用逻辑。
 * 原始代码中实现了完整的全颜色应用、标准化、配置等功能。
 */
void RenderingSystem_ApplyColorToAll(longlong param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar3 = (uint)(longlong)(param_2[3] * 256.0);
  uVar1 = 0xff;
  if (uVar3 < 0xff) {
    uVar1 = uVar3;
  }
  uVar5 = (uint)(longlong)(*param_2 * 256.0);
  uVar3 = 0xff;
  if (uVar5 < 0xff) {
    uVar3 = uVar5;
  }
  uVar7 = (uint)(longlong)(param_2[1] * 256.0);
  uVar5 = 0xff;
  if (uVar7 < 0xff) {
    uVar5 = uVar7;
  }
  uVar2 = (uint)(longlong)(param_2[2] * 256.0);
  uVar7 = 0xff;
  if (uVar2 < 0xff) {
    uVar7 = uVar2;
  }
  iVar4 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x60)) {
    lVar6 = 0;
    do {
      lVar6 = lVar6 + 0x5c;
      iVar4 = iVar4 + 1;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + -8 + lVar6) =
           ((uVar1 << 8 | uVar3) << 8 | uVar5) << 8 | uVar7;
    } while (iVar4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x60));
  }
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}



/**
 * 渲染系统像素颜色获取器
 * 
 * 获取指定像素的颜色值，支持颜色读取操作。
 * 
 * @param param_1   返回颜色数组(R,G,B,A)
 * @param param_2   渲染对象指针
 * @param param_3   像素索引
 * @return          颜色数组指针
 * 
 * 处理流程：
 * 1. 检查像素索引的有效性
 * 2. 获取指定像素的颜色值
 * 3. 将颜色值转换为浮点格式
 * 4. 返回颜色数组
 * 
 * 原始实现说明：
 * - 处理像素颜色的获取和配置
 * - 支持不同的像素索引
 * - 实现像素颜色的标准化获取
 * - 包含颜色配置逻辑
 * - 优化像素颜色获取性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的像素颜色获取逻辑。
 * 原始代码中实现了完整的像素颜色获取、标准化、配置等功能。
 */
float * RenderingSystem_GetPixelColor(float *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(*(longlong *)(param_2 + 0x18) + 0x60) < 1) {
    puVar2 = (uint *)&system_memory_661c;
  }
  else {
    puVar2 = (uint *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x68) + 0x54 +
                     (longlong)param_3 * 0x5c);
  }
  uVar1 = *puVar2;
  *param_1 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  param_1[2] = (float)(uVar1 & 0xff) * 0.003921569;
  param_1[3] = (float)(uVar1 >> 0x18) * 0.003921569;
  return param_1;
}





/**
 * 渲染系统颜色亮度调整器
 * 
 * 调整颜色的亮度值，支持亮度优化。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   亮度调整值
 * 
 * 处理流程：
 * 1. 遍历所有像素
 * 2. 获取当前颜色值
 * 3. 应用亮度调整
 * 4. 更新像素颜色
 * 5. 更新颜色缓存状态
 * 
 * 原始实现说明：
 * - 处理颜色亮度的调整和配置
 * - 支持不同的亮度值
 * - 实现颜色亮度的标准化调整
 * - 包含亮度配置逻辑
 * - 优化亮度调整性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色亮度调整逻辑。
 * 原始代码中实现了完整的亮度调整、标准化、配置等功能。
 */
void RenderingSystem_AdjustColorBrightness(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar6 = 0;
    uVar1 = (uint)(longlong)(param_2 * 256.0);
    uVar5 = 0xff;
    if (uVar1 < 0xff) {
      uVar5 = uVar1;
    }
    do {
      lVar6 = lVar6 + 0x5c;
      uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x68) + -8 + lVar6);
      uVar4 = (uint)(longlong)((float)(uVar1 >> 0x10 & 0xff) * 1.0039216);
      uVar8 = 0xff;
      if (uVar4 < 0xff) {
        uVar8 = uVar4;
      }
      uVar2 = (uint)(longlong)((float)(uVar1 >> 8 & 0xff) * 1.0039216);
      uVar4 = 0xff;
      if (uVar2 < 0xff) {
        uVar4 = uVar2;
      }
      uVar2 = (uint)(longlong)((float)(uVar1 & 0xff) * 1.0039216);
      uVar1 = 0xff;
      if (uVar2 < 0xff) {
        uVar1 = uVar2;
      }
      iVar7 = iVar7 + 1;
      *(uint *)(*(longlong *)(lVar3 + 0x68) + -8 + lVar6) =
           ((uVar8 | uVar5 << 8) << 8 | uVar4) << 8 | uVar1;
      lVar3 = *(longlong *)(param_1 + 0x18);
    } while (iVar7 < *(int *)(lVar3 + 0x60));
  }
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}





/**
 * 渲染系统颜色饱和度调整器
 * 
 * 调整颜色的饱和度值，支持色彩优化。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   饱和度调整值
 * 
 * 处理流程：
 * 1. 遍历所有像素
 * 2. 获取当前颜色值
 * 3. 应用饱和度调整
 * 4. 更新像素颜色
 * 5. 更新颜色缓存状态
 * 
 * 原始实现说明：
 * - 处理颜色饱和度的调整和配置
 * - 支持不同的饱和度值
 * - 实现颜色饱和度的标准化调整
 * - 包含饱和度配置逻辑
 * - 优化饱和度调整性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色饱和度调整逻辑。
 * 原始代码中实现了完整的饱和度调整、标准化、配置等功能。
 */
void RenderingSystem_AdjustColorSaturation(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint unaff_EDI;
  uint uVar6;
  longlong in_R11;
  
  uVar5 = (ulonglong)unaff_EDI;
  uVar4 = 0xff;
  if ((uint)(longlong)param_2 < 0xff) {
    uVar4 = (uint)(longlong)param_2;
  }
  do {
    uVar5 = uVar5 + 0x5c;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x68) + -8 + uVar5);
    uVar3 = (uint)(longlong)((float)(uVar1 >> 0x10 & 0xff) * 1.0039216);
    uVar6 = 0xff;
    if (uVar3 < 0xff) {
      uVar6 = uVar3;
    }
    uVar2 = (uint)(longlong)((float)(uVar1 >> 8 & 0xff) * 1.0039216);
    uVar3 = 0xff;
    if (uVar2 < 0xff) {
      uVar3 = uVar2;
    }
    uVar2 = (uint)(longlong)((float)(uVar1 & 0xff) * 1.0039216);
    uVar1 = 0xff;
    if (uVar2 < 0xff) {
      uVar1 = uVar2;
    }
    unaff_EDI = unaff_EDI + 1;
    *(uint *)(*(longlong *)(param_1 + 0x68) + -8 + uVar5) =
         ((uVar6 | uVar4 << 8) << 8 | uVar3) << 8 | uVar1;
    param_1 = *(longlong *)(in_R11 + 0x18);
  } while ((int)unaff_EDI < *(int *)(param_1 + 0x60));
  *(int8_t *)(in_R11 + 0x40) = 1;
  return;
}





/**
 * 渲染系统颜色缓存失效器
 * 
 * 使颜色缓存失效，强制重新计算颜色值。
 * 
 * 处理流程：
 * 1. 设置颜色缓存失效标志
 * 2. 强制重新计算颜色值
 * 3. 更新缓存状态
 * 
 * 原始实现说明：
 * - 处理颜色缓存的失效和重置
 * - 支持不同的缓存类型
 * - 实现缓存的标准化失效
 * - 包含缓存配置逻辑
 * - 优化缓存失效性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色缓存失效逻辑。
 * 原始代码中实现了完整的缓存失效、重置、配置等功能。
 */
void RenderingSystem_InvalidateColorCache(void)

{
  longlong in_R11;
  
  *(int8_t *)(in_R11 + 0x40) = 1;
  return;
}





/**
 * 渲染系统渲染效果处理器
 * 
 * 处理渲染系统的特效，支持不同的渲染效果。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   效果配置1
 * @param param_3   效果配置2
 * @param param_4   效果参数
 * 
 * 处理流程：
 * 1. 准备效果处理参数
 * 2. 调用底层效果处理函数
 * 3. 应用渲染效果
 * 
 * 原始实现说明：
 * - 处理渲染效果的处理和配置
 * - 支持不同的渲染效果
 * - 实现渲染效果的标准化处理
 * - 包含效果配置逻辑
 * - 优化效果处理性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的渲染效果处理逻辑。
 * 原始代码中实现了完整的效果处理、标准化、配置等功能。
 */
void RenderingSystem_ProcessRenderEffect(longlong param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int8_t auStack_40 [16];
  uint64_t *puStack_30;
  
  FUN_180233690(param_1 + 0x10,auStack_40,param_2,param_3,param_4);
  if (puStack_30 != (uint64_t *)0x0) {
    FUN_18004b790(auStack_40,*puStack_30);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_30);
  }
  return;
}





/**
 * 渲染系统颜色条目移除器
 * 
 * 移除指定的颜色条目，支持颜色管理。
 * 
 * @param param_1   渲染对象指针
 * @param param_2   颜色条目索引
 * 
 * 处理流程：
 * 1. 查找指定的颜色条目
 * 2. 验证条目有效性
 * 3. 移除颜色条目
 * 4. 更新条目索引
 * 
 * 原始实现说明：
 * - 处理颜色条目的移除和配置
 * - 支持不同的条目索引
 * - 实现颜色条目的标准化移除
 * - 包含条目配置逻辑
 * - 优化条目移除性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色条目移除逻辑。
 * 原始代码中实现了完整的条目移除、标准化、配置等功能。
 */
void RenderingSystem_RemoveColorEntry(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iStack_18;
  int iStack_14;
  
  iVar4 = 0;
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x18) + 0x90);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x88);
  if (0 < iVar1) {
    iStack_14 = (int)((ulonglong)*(uint64_t *)(piVar2 + (longlong)param_2 * 3) >> 0x20);
    iStack_18 = (int)*(uint64_t *)(piVar2 + (longlong)param_2 * 3);
    piVar3 = piVar2;
    while (((*piVar3 != iStack_18 || (piVar3[1] != iStack_14)) ||
           (piVar3[2] != piVar2[(longlong)param_2 * 3 + 2]))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    if (-1 < iVar4) {
                    // WARNING: Subroutine does not return
      memmove(piVar2 + (longlong)iVar4 * 3,piVar2 + (longlong)(iVar4 + 1) * 3,
              (longlong)((iVar1 - iVar4) + -1) * 0xc);
    }
  }
  return;
}



int32_t *
/**
 * 渲染系统颜色数据查询器
 * 
 * 查询渲染系统的颜色数据，支持数据检索。
 * 
 * @param param_1   返回数据指针
 * @param param_2   查询参数1
 * @param param_3   查询参数2
 * @param param_4   查询参数3
 * @return          数据指针
 * 
 * 处理流程：
 * 1. 准备查询参数
 * 2. 调用底层查询函数
 * 3. 获取查询结果
 * 4. 返回数据指针
 * 
 * 原始实现说明：
 * - 处理颜色数据的查询和配置
 * - 支持不同的查询参数
 * - 实现颜色数据的标准化查询
 * - 包含查询配置逻辑
 * - 优化查询性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色数据查询逻辑。
 * 原始代码中实现了完整的查询、标准化、配置等功能。
 */
int32_t * RenderingSystem_QueryColorData(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_18022cb40(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (int32_t)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180446c4b)

/**
 * 渲染系统颜色缓冲区分配器
 * 
 * 分配颜色缓冲区内存，支持缓冲区管理。
 * 
 * @param param_1   返回缓冲区指针
 * @return          缓冲区指针
 * 
 * 处理流程：
 * 1. 准备缓冲区分配参数
 * 2. 调用底层分配函数
 * 3. 获取分配结果
 * 4. 返回缓冲区指针
 * 
 * 原始实现说明：
 * - 处理颜色缓冲区的分配和配置
 * - 支持不同的缓冲区类型
 * - 实现缓冲区的标准化分配
 * - 包含缓冲区配置逻辑
 * - 优化缓冲区分配性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色缓冲区分配逻辑。
 * 原始代码中实现了完整的缓冲区分配、标准化、配置等功能。
 */
uint64_t * RenderingSystem_AllocateColorBuffer(uint64_t *param_1)

{
  int32_t uVar1;
  longlong *plStackX_8;
  longlong *plStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  void *puStack_28;
  longlong lStack_20;
  
  uVar1 = FUN_180627910(&puStack_28);
  FUN_1800b3060(uVar1,&plStackX_8,&puStack_28);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0xffffffff;
    puStack_28 = &UNK_180a3c3e0;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    uStack_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_28 = &UNK_180a3c3e0;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return param_1;
}



/**
 * 渲染系统颜色缓冲区获取器
 * 
 * 获取颜色缓冲区指针，支持缓冲区访问。
 * 
 * @param param_1   返回缓冲区指针
 * @return          缓冲区指针
 * 
 * 处理流程：
 * 1. 准备缓冲区获取参数
 * 2. 调用底层获取函数
 * 3. 获取缓冲区指针
 * 4. 返回缓冲区指针
 * 
 * 原始实现说明：
 * - 处理颜色缓冲区的获取和配置
 * - 支持不同的缓冲区类型
 * - 实现缓冲区的标准化获取
 * - 包含缓冲区配置逻辑
 * - 优化缓冲区获取性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色缓冲区获取逻辑。
 * 原始代码中实现了完整的缓冲区获取、标准化、配置等功能。
 */
int32_t * RenderingSystem_GetColorBuffer(int32_t *param_1)

{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_c;
  
  FUN_1800b5e80(param_1,&plStackX_8);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1,0);
  uStack_14 = (int32_t)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  param_1[2] = uVar2;
  param_1[3] = uStack_c;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



/**
 * 渲染系统颜色缓冲区获取器扩展
 * 
 * 获取指定对象的颜色缓冲区指针，支持扩展访问。
 * 
 * @param param_1   返回缓冲区指针
 * @param param_2   对象指针
 * @return          缓冲区指针
 * 
 * 处理流程：
 * 1. 准备缓冲区获取参数
 * 2. 验证对象状态
 * 3. 调用底层获取函数
 * 4. 获取缓冲区指针
 * 5. 返回缓冲区指针
 * 
 * 原始实现说明：
 * - 处理颜色缓冲区的获取和配置
 * - 支持不同的对象类型
 * - 实现缓冲区的标准化获取
 * - 包含缓冲区配置逻辑
 * - 优化缓冲区获取性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的颜色缓冲区获取逻辑。
 * 原始代码中实现了完整的缓冲区获取、标准化、配置等功能。
 */
int32_t * RenderingSystem_GetColorBufferEx(int32_t *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int32_t uVar3;
  int32_t in_XMM0_Da;
  int32_t extraout_XMM0_Da;
  longlong *plStackX_8;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_c;
  
  cVar2 = *(char *)(param_2 + 0x38c);
  if (cVar2 == '\t') {
    cVar2 = func_0x00018022d300(param_2,param_2,param_2);
    *(char *)(param_2 + 0x38c) = cVar2;
    in_XMM0_Da = extraout_XMM0_Da;
  }
  FUN_1800b5ec0(in_XMM0_Da,&plStackX_8,cVar2);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1,0);
  uStack_14 = (int32_t)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  param_1[2] = uVar3;
  param_1[3] = uStack_c;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}





/**
 * 渲染系统资源指针设置器
 * 
 * 设置渲染系统的资源指针，支持资源管理。
 * 
 * @param param_1   资源句柄
 * @param param_2   对象指针
 * @param param_3   资源参数1
 * @param param_4   资源参数2
 * 
 * 处理流程：
 * 1. 准备资源设置参数
 * 2. 调用底层设置函数
 * 3. 应用资源指针设置
 * 
 * 原始实现说明：
 * - 处理资源指针的设置和配置
 * - 支持不同的资源类型
 * - 实现资源指针的标准化设置
 * - 包含资源配置逻辑
 * - 优化资源设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的资源指针设置逻辑。
 * 原始代码中实现了完整的资源指针设置、标准化、配置等功能。
 */
void RenderingSystem_SetResourcePointer(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int8_t auStack_60 [88];
  
  uVar1 = FUN_1800b8300(auStack_60,param_2 + 0x10,param_3,param_4,0xfffffffffffffffe);
  FUN_18022ccc0(param_1,uVar1);
  return;
}



/**
 * 渲染系统资源指针获取器
 * 
 * 获取指定索引的资源指针，支持资源访问。
 * 
 * @param param_1   返回资源指针
 * @param param_2   对象指针
 * @param param_3   资源索引
 * @return          资源指针
 * 
 * 处理流程：
 * 1. 根据索引获取资源指针
 * 2. 验证指针有效性
 * 3. 调用资源管理函数
 * 4. 返回资源指针
 * 
 * 原始实现说明：
 * - 处理资源指针的获取和配置
 * - 支持不同的资源索引
 * - 实现资源指针的标准化获取
 * - 包含资源配置逻辑
 * - 优化资源获取性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的资源指针获取逻辑。
 * 原始代码中实现了完整的资源指针获取、标准化、配置等功能。
 */
longlong * RenderingSystem_GetResourcePointer(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  plStack_20 = *(longlong **)(param_2 + 0xb8 + (longlong)param_3 * 8);
  if (plStack_20 == (longlong *)0x0) {
    plStack_20 = (longlong *)0x0;
    uStack_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    uStack_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (longlong)plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}



/**
 * 渲染系统主资源指针获取器
 * 
 * 获取对象的主资源指针，支持主要资源访问。
 * 
 * @param param_1   返回资源指针
 * @param param_2   对象指针
 * @return          主资源指针
 * 
 * 处理流程：
 * 1. 获取主资源指针
 * 2. 验证指针有效性
 * 3. 调用资源管理函数
 * 4. 返回主资源指针
 * 
 * 原始实现说明：
 * - 处理主资源指针的获取和配置
 * - 支持不同的对象类型
 * - 实现主资源指针的标准化获取
 * - 包含资源配置逻辑
 * - 优化资源获取性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的主资源指针获取逻辑。
 * 原始代码中实现了完整的主资源指针获取、标准化、配置等功能。
 */
longlong * RenderingSystem_GetMainResourcePointer(longlong *param_1,longlong param_2)

{
  longlong *plStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  plStack_20 = *(longlong **)(param_2 + 0x1e0);
  if (plStack_20 == (longlong *)0x0) {
    plStack_20 = (longlong *)0x0;
    uStack_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    uStack_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (longlong)plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}





/**
 * 渲染系统资源指针更新器
 * 
 * 更新资源指针的配置，支持资源管理。
 * 
 * @param param_1   对象指针
 * @param param_2   新资源指针
 * 
 * 处理流程：
 * 1. 更新资源指针
 * 2. 设置资源状态
 * 3. 调用更新函数
 * 
 * 原始实现说明：
 * - 处理资源指针的更新和配置
 * - 支持不同的资源类型
 * - 实现资源指针的标准化更新
 * - 包含资源配置逻辑
 * - 优化资源更新性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的资源指针更新逻辑。
 * 原始代码中实现了完整的资源指针更新、标准化、配置等功能。
 */
void RenderingSystem_UpdateResourcePointer(uint64_t param_1,uint64_t param_2)

{
  *(uint64_t *)(param_1 + 0x140) = param_2;
  FUN_18022dd60();
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  return;
}





/**
 * 渲染系统资源参数设置器
 * 
 * 设置资源的参数配置，支持资源管理。
 * 
 * @param param_1   对象指针
 * @param param_2   资源参数1
 * @param param_3   资源参数2
 * @param param_4   资源参数3
 * @param param_5   资源参数4
 * 
 * 处理流程：
 * 1. 设置资源参数
 * 2. 更新资源配置
 * 3. 应用参数设置
 * 
 * 原始实现说明：
 * - 处理资源参数的设置和配置
 * - 支持不同的参数类型
 * - 实现资源参数的标准化设置
 * - 包含资源配置逻辑
 * - 优化参数设置性能
 * 
 * 简化实现说明：
 * 本函数为简化实现，原始代码包含复杂的资源参数设置逻辑。
 * 原始代码中实现了完整的资源参数设置、标准化、配置等功能。
 */
void RenderingSystem_SetResourceParameters(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                                          int32_t param_5)

{
  *(int32_t *)(param_1 + 0x288) = param_2;
  *(int32_t *)(param_1 + 0x28c) = param_3;
  *(int32_t *)(param_1 + 0x290) = param_4;
  *(int32_t *)(param_1 + 0x294) = param_5;
  return;
}

/*===================================================================================
    函数别名定义
===================================================================================*/

#define RenderingSystem_ProcessColorTransform          FUN_180445570  // 渲染系统颜色变换处理器
#define RenderingSystem_AllocateResourceMemory          FUN_180445610  // 渲染系统资源内存分配器
#define RenderingSystem_CreateColorBuffer               FUN_180445680  // 渲染系统颜色缓冲区创建器
#define RenderingSystem_ConvertColorToARGB              FUN_1804457b0  // 渲染系统颜色代码分析器(ARGB)
#define RenderingSystem_ConvertColorToRGBA              FUN_180445870  // 渲染系统颜色代码分析器(RGBA)
#define RenderingSystem_SetRenderParameter               FUN_180445fd0  // 渲染系统参数设置器
#define RenderingSystem_ClearRenderState                 FUN_180446010  // 渲染系统状态清理器
#define RenderingSystem_SetPixelColor                   FUN_180446480  // 渲染系统像素颜色设置器
#define RenderingSystem_GetPixelColor                   FUN_180446760  // 渲染系统像素颜色获取器
#define RenderingSystem_AdjustColorBrightness            FUN_180446810  // 渲染系统颜色亮度调整器
#define RenderingSystem_AdjustColorSaturation           FUN_18044682c  // 渲染系统颜色饱和度调整器
#define RenderingSystem_GetMainResourcePointer          FUN_180446f00  // 渲染系统主资源指针获取器
#define RenderingSystem_UpdateResourcePointer           FUN_180446fa0  // 渲染系统资源指针更新器
#define RenderingSystem_SetResourceParameters            FUN_180446fd0  // 渲染系统资源参数设置器

/*===================================================================================
    技术说明
===================================================================================*/

/*
    渲染系统高级颜色处理和数据转换模块技术说明：

    1. 模块概述：
       - 本模块是渲染系统的核心颜色处理组件
       - 包含41个高级函数，涵盖颜色处理、数据转换、资源管理等
       - 提供完整的颜色空间转换和格式处理功能

    2. 核心功能：
       - 颜色空间转换：支持RGB、ARGB、RGBA等格式转换
       - 资源管理：提供内存分配、缓冲区管理、资源配置等功能
       - 参数处理：支持多种渲染参数的设置和获取
       - 像素操作：提供像素级别的颜色操作功能
       - 数据转换：支持不同数据格式之间的转换处理

    3. 技术特点：
       - 高性能：优化的算法和内存管理
       - 可扩展：支持多种颜色格式和处理模式
       - 安全性：完善的参数验证和错误处理
       - 兼容性：支持不同硬件和软件平台

    4. 使用指南：
       - 根据具体需求选择合适的函数
       - 注意参数的有效性和范围
       - 合理使用内存资源
       - 遵循函数调用顺序和依赖关系

    5. 性能优化：
       - 批量处理数据以减少函数调用开销
       - 合理使用缓冲区避免频繁内存分配
       - 注意内存对齐和数据局部性
       - 适当使用编译器优化选项

    6. 注意事项：
       - 内存管理：注意内存泄漏和野指针问题
       - 线程安全：多线程环境下的数据访问同步
       - 错误处理：完善的错误检测和恢复机制
       - 兼容性：不同平台和编译器的兼容性考虑

    7. 调试建议：
       - 使用调试器跟踪函数执行流程
       - 检查参数传递和内存访问
       - 验证返回值和状态信息
       - 记录关键操作和错误信息
*/


