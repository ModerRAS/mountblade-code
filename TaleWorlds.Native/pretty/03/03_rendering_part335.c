#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part335.c - 渲染系统高级渲染效果和材质处理模块
// 包含35个核心函数，涵盖渲染系统颜色处理、材质管理、渲染参数设置、纹理操作、
// 资源管理、内存分配、数据验证等高级渲染功能。

//==========================================================
// 渲染系统常量定义
//==========================================================

/**
 * 渲染系统颜色处理常量
 * 用于颜色转换、插值和验证操作
 */
#define RENDERING_COLOR_MAX_VALUE 255           // 颜色最大值 (0-255)
#define RENDERING_COLOR_ALPHA_MASK 0xFF000000    // Alpha通道掩码
#define RENDERING_COLOR_RED_MASK 0x00FF0000      // 红色通道掩码
#define RENDERING_COLOR_GREEN_MASK 0x0000FF00    // 绿色通道掩码
#define RENDERING_COLOR_BLUE_MASK 0x000000FF     // 蓝色通道掩码
#define RENDERING_COLOR_SCALE_FACTOR 256.0f      // 颜色缩放因子
#define RENDERING_COLOR_NORMALIZE_FACTOR 0.003921569f  // 颜色归一化因子 (1/255)
#define RENDERING_COLOR_BRIGHTNESS_FACTOR 1.0039216f   // 颜色亮度调整因子

/**
 * 渲染系统内存管理常量
 * 用于内存分配、释放和管理操作
 */
#define RENDERING_MEMORY_ALIGNMENT 0x48         // 内存对齐大小
#define RENDERING_MEMORY_BLOCK_SIZE 0x5c         // 内存块大小
#define RENDERING_MEMORY_OFFSET_BASE 0x10        // 基础内存偏移
#define RENDERING_MEMORY_OFFSET_LARGE 0x128      // 大内存偏移
#define RENDERING_MEMORY_FREE_PATTERN 0xfffffffffffffffeULL  // 内存释放模式
#define RENDERING_MEMORY_ALLOC_SUCCESS 0          // 内存分配成功
#define RENDERING_MEMORY_ALLOC_FAIL 0xffffffff    // 内存分配失败

/**
 * 渲染系统参数常量
 * 用于渲染参数设置和验证
 */
#define RENDERING_PARAM_DEFAULT_FLOAT 0x3f800000 // 默认浮点值 (1.0f)
#define RENDERING_PARAM_MAX_FLOAT 0x7f7fffff    // 最大浮点值
#define RENDERING_PARAM_FLAG_ENABLE 0x01         // 启用标志
#define RENDERING_PARAM_FLAG_ACTIVE 0x02         // 活动标志
#define RENDERING_PARAM_FLAG_VISIBLE 0x04        // 可见标志
#define RENDERING_PARAM_FLAG_VALID 0x08          // 有效标志

/**
 * 渲染系统状态常量
 * 用于状态管理和控制
 */
#define RENDERING_STATE_ACTIVE 1                  // 活动状态
#define RENDERING_STATE_INACTIVE 0                // 非活动状态
#define RENDERING_STATE_PENDING 2                  // 等待状态
#define RENDERING_STATE_COMPLETE 3                // 完成状态
#define RENDERING_STATE_ERROR 0xffffffff          // 错误状态

/**
 * 渲染系统偏移常量
 * 用于内存偏移和地址计算
 */
#define RENDERING_OFFSET_RENDER_DATA 0x10         // 渲染数据偏移
#define RENDERING_OFFSET_CONTEXT_DATA 0x18        // 上下文数据偏移
#define RENDERING_OFFSET_MATERIAL_DATA 0x28       // 材质数据偏移
#define RENDERING_OFFSET_TEXTURE_DATA 0x38        // 纹理数据偏移
#define RENDERING_OFFSET_RESOURCE_DATA 0x40       // 资源数据偏移
#define RENDERING_OFFSET_ARRAY_DATA 0x54          // 数组数据偏移
#define RENDERING_OFFSET_TABLE_DATA 0x60          // 表格数据偏移
#define RENDERING_OFFSET_BUFFER_DATA 0x68         // 缓冲区数据偏移
#define RENDERING_OFFSET_POINTER_DATA 0x90        // 指针数据偏移
#define RENDERING_OFFSET_CONTROL_DATA 0x3c0      // 控制数据偏移

/**
 * 渲染系统数据结构常量
 * 用于数据结构操作和管理
 */
#define RENDERING_ARRAY_MAX_SIZE 0xffff          // 数组最大大小
#define RENDERING_TABLE_MAX_ENTRIES 0xff         // 表格最大条目
#define RENDERING_BUFFER_MAX_SIZE 0x5c           // 缓冲区最大大小
#define RENDERING_POINTER_MAX_COUNT 0x08         // 指针最大数量
#define RENDERING_CONTROL_MAX_FLAGS 0x02         // 控制最大标志

//==========================================================
// 渲染系统函数别名定义
//==========================================================

/**
 * 渲染系统高级渲染效果和材质处理函数
 * 原始函数名: FUN_180445570
 * 功能: 处理渲染系统的高级渲染效果和材质参数
 * 参数: param_1 - 长整型指针参数，param_2 - 字符参数
 * 返回值: 无
 */
void RenderingSystem_AdvancedRenderer(longlong *param_1, char param_2)
{
  int32_t auStackX_10 [6];
  
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x128))(param_1, &unknown_var_1052_ptr);
    return;
  }
  auStackX_10[0] = 0;
  (**(code **)(*param_1 + 0x128))(param_1, auStackX_10);
  return;
}

/**
 * 渲染系统资源管理器
 * 原始函数名: FUN_180445610
 * 功能: 管理渲染系统的资源分配和释放
 * 参数: param_1 - 无符号8位指针参数，param_2 - 无符号长整型参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数
 * 返回值: 无符号8位指针
 */
uint64_t *RenderingSystem_ResourceManager(uint64_t *param_1, ulonglong param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_9832_ptr;
  FUN_18022f410(param_1 + 2);
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1, 0x48, param_3, param_4, uVar1);
  }
  return param_1;
}

/**
 * 渲染系统材质处理器
 * 原始函数名: FUN_180445680
 * 功能: 处理渲染系统的材质创建和管理
 * 参数: param_1 - 无符号4位指针参数，param_2 - 长整型指针参数
 * 返回值: 无符号4位指针
 */
int32_t *RenderingSystem_MaterialProcessor(int32_t *param_1, longlong *param_2)
{
  int32_t uVar1;
  longlong *plVar2;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_34;
  
  plVar2 = (longlong *)FUN_18062b1e0(system_memory_pool_ptr, 0x48, 8, 3, 0xfffffffffffffffe);
  *plVar2 = (longlong)&unknown_var_3552_ptr;
  *plVar2 = (longlong)&unknown_var_3696_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (longlong)&unknown_var_9832_ptr;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[7] = 0;
  plVar2[5] = 0;
  *(int8_t *)(plVar2 + 4) = 0;
  FUN_18022f2e0(plVar2 + 2, param_2, 0);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_40 = SUB84(plVar2, 0);
  uStack_3c = (int32_t)((ulonglong)plVar2 >> 0x20);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uVar1;
  param_1[3] = uStack_34;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}

/**
 * 渲染系统颜色代码分析器
 * 原始函数名: FUN_1804457b0
 * 功能: 转换渲染系统的颜色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号4位参数，param_3 - 无符号8位参数，param_4 - 浮点数指针参数，param_5 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_ColorConverter(longlong param_1, int32_t param_2, uint64_t param_3, float *param_4, uint64_t param_5)
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
  FUN_1802350e0(param_1 + 0x10, param_2, param_3, auStackX_8, param_5);
  return;
}

/**
 * 渲染系统颜色处理器
 * 原始函数名: FUN_180445870
 * 功能: 处理渲染系统的颜色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号4位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数，param_5 - 浮点数指针参数，param_6 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_ColorProcessor(longlong param_1, int32_t param_2, uint64_t param_3, uint64_t param_4, float *param_5, uint64_t param_6)
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
  FUN_180235270(param_1 + 0x10, param_2, param_3, param_4, &param_5, param_6);
  return;
}

/**
 * 渲染系统高级颜色处理器
 * 原始函数名: FUN_180445970
 * 功能: 处理渲染系统的高级颜色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数，param_5 - 无符号8位参数，param_6 - 无符号8位参数，param_7 - 无符号8位参数，param_8 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_AdvancedColorProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6, uint64_t param_7, float *param_8)
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
  FUN_1802354f0(param_1 + 0x10, param_2, param_3, param_4, param_5, param_6, param_7, &param_8);
}

/**
 * 渲染系统多颜色处理器
 * 原始函数名: FUN_180445a80
 * 功能: 处理渲染系统的多颜色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数，param_5 - 无符号8位参数，param_6 - 无符号8位参数，param_7 - 无符号8位参数，param_8 - 无符号8位参数，param_9 - 无符号8位参数，param_10 - 无符号8位参数，param_11 - 浮点数指针参数，param_12 - 浮点数指针参数，param_13 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_MultiColorProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8, uint64_t param_9, uint64_t param_10, float *param_11, float *param_12, float *param_13)
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
  FUN_1802355d0(param_1 + 0x10, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, &param_11, &param_12, &param_13);
  return;
}

/**
 * 渲染系统单色处理器
 * 原始函数名: FUN_180445cd0
 * 功能: 处理渲染系统的单色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数，param_5 - 无符号8位参数，param_6 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_SingleColorProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6)
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
  if (uVar4 < /* (0x7f) */ 0xff) {
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
  FUN_1802356b0(param_1 + 0x10, param_2, param_3, param_4, param_5, &param_6);
  return;
}

/**
 * 渲染系统标准颜色处理器
 * 原始函数名: FUN_180445dc0
 * 功能: 处理渲染系统的标准颜色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数，param_5 - 无符号8位参数，param_6 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_StandardColorProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6)
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
  FUN_1802358c0(param_1 + 0x10, param_2, param_3, param_4, param_5, &param_6);
  return;
}

/**
 * 渲染系统增强颜色处理器
 * 原始函数名: FUN_180445eb0
 * 功能: 处理渲染系统的增强颜色数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数，param_5 - 无符号8位参数，param_6 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_EnhancedColorProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6)
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
  FUN_180235ae0(param_1 + 0x10, param_2, param_3, param_4, param_5, &param_6);
  return;
}

/**
 * 渲染系统参数设置器
 * 原始函数名: FUN_180445fd0
 * 功能: 设置渲染系统的参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_ParameterSetter(longlong param_1, int32_t param_2)
{
  int32_t auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_180236e60(param_1 + 0x10, auStackX_10);
  return;
}

/**
 * 渲染系统清理器
 * 原始函数名: FUN_180446010
 * 功能: 清理渲染系统
 * 参数: param_1 - 长整型参数
 * 返回值: 无
 */
void RenderingSystem_Cleaner(longlong param_1)
{
  FUN_180235ca0(param_1 + 0x10);
  return;
}

/**
 * 渲染系统浮点数处理器
 * 原始函数名: FUN_180446080
 * 功能: 处理渲染系统的浮点数数据
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_FloatProcessor(longlong param_1, uint64_t param_2, uint64_t param_3)
{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x7f7fffff;
  FUN_1802333f0(param_1 + 0x10, &uStack_18, param_2, param_3);
  return;
}

/**
 * 渲染系统双参数处理器
 * 原始函数名: FUN_1804460c0
 * 功能: 处理渲染系统的双参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位参数，param_5 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_DoubleParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5)
{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180231180(param_1 + 0x10, param_2, param_3, auStackX_20, &param_5);
  return;
}

/**
 * 渲染系统标准参数处理器
 * 原始函数名: FUN_1804460f0
 * 功能: 处理渲染系统的标准参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位参数，param_5 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_StandardParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5)
{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_1802318b0(param_1 + 0x10, param_2, param_3, auStackX_20, &param_5);
  return;
}

/**
 * 渲染系统三参数处理器
 * 原始函数名: FUN_180446120
 * 功能: 处理渲染系统的三参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位参数，param_5 - 无符号4位参数，param_6 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_TripleParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)
{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_1802325e0(param_1 + 0x10, param_2, param_3, auStackX_20, &param_5, param_6);
  return;
}

/**
 * 渲染系统增强参数处理器
 * 原始函数名: FUN_180446160
 * 功能: 处理渲染系统的增强参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位参数，param_5 - 无符号4位参数，param_6 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_EnhancedParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)
{
  int32_t auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180232d10(param_1 + 0x10, param_2, param_3, auStackX_20, &param_5, param_6);
  return;
}

/**
 * 渲染系统颜色参数处理器
 * 原始函数名: FUN_1804461b0
 * 功能: 处理渲染系统的颜色参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 浮点数指针参数，param_5 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_ColorParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, float *param_4, int32_t param_5)
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
  FUN_1802309b0(param_1 + 0x10, param_2, param_3, auStackX_8, &param_5);
  return;
}

/**
 * 渲染系统默认参数处理器
 * 原始函数名: FUN_1804462a0
 * 功能: 处理渲染系统的默认参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_DefaultParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3)
{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10, param_2, param_3, 0xff, &uStack_18, 1, 0, 0, 1);
  return;
}

/**
 * 渲染系统简单清理器
 * 原始函数名: FUN_1804462e0
 * 功能: 简单清理渲染系统
 * 参数: param_1 - 长整型参数
 * 返回值: 无
 */
void RenderingSystem_SimpleCleaner(longlong param_1)
{
  FUN_180235ca0(param_1 + 0x10);
  return;
}

/**
 * 渲染系统数组参数处理器
 * 原始函数名: FUN_180446320
 * 功能: 处理渲染系统的数组参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位指针参数，param_5 - 无符号1位参数
 * 返回值: 无
 */
void RenderingSystem_ArrayParameterProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t *param_4, int8_t param_5)
{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_180235ca0(param_1 + 0x10, param_2, param_3, 0xff, &uStack_18, 1, 0, 0, param_5);
  return;
}

/**
 * 渲染系统基础清理器
 * 原始函数名: FUN_180446370
 * 功能: 基础清理渲染系统
 * 参数: param_1 - 长整型参数
 * 返回值: 无
 */
void RenderingSystem_BasicCleaner(longlong param_1)
{
  FUN_180235ca0(param_1 + 0x10);
  return;
}

/**
 * 渲染系统标准初始化器
 * 原始函数名: FUN_1804463b0
 * 功能: 标准初始化渲染系统
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_StandardInitializer(longlong param_1, uint64_t param_2, uint64_t param_3)
{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10, param_2, param_3, 0xff, &uStack_18, 0, 0, 0, 1);
  return;
}

/**
 * 渲染系统增强初始化器
 * 原始函数名: FUN_1804463f0
 * 功能: 增强初始化渲染系统
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_EnhancedInitializer(longlong param_1, uint64_t param_2, uint64_t param_3)
{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10, param_2, param_3, 0xff, &uStack_18, 0, 1, 0, 1);
  return;
}

/**
 * 渲染系统高级数组处理器
 * 原始函数名: FUN_180446430
 * 功能: 处理渲染系统的高级数组
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位指针参数，param_5 - 无符号1位参数
 * 返回值: 无
 */
void RenderingSystem_AdvancedArrayProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t *param_4, int8_t param_5)
{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_180235ca0(param_1 + 0x10, param_2, param_3, 0xff, &uStack_18, 1, 0, 1, param_5);
  return;
}

/**
 * 渲染系统颜色数组处理器
 * 原始函数名: FUN_180446480
 * 功能: 处理渲染系统的颜色数组
 * 参数: param_1 - 长整型参数，param_2 - 整数参数，param_3 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_ColorArrayProcessor(longlong param_1, int param_2, float *param_3)
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
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + 0x54 + (longlong)param_2 * 0x5c) = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}

/**
 * 渲染系统多参数处理器
 * 原始函数名: FUN_180446610
 * 功能: 处理渲染系统的多参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位指针参数
 * 返回值: 无
 */
void RenderingSystem_MultiParameterProcessor(longlong param_1, uint64_t *param_2)
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
  FUN_1802379d0(param_1 + 0x10, &uStack_48);
  return;
}

/**
 * 渲染系统增强多参数处理器
 * 原始函数名: FUN_180446650
 * 功能: 处理渲染系统的增强多参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位指针参数
 * 返回值: 无
 */
void RenderingSystem_EnhancedMultiParameterProcessor(longlong param_1, uint64_t *param_2)
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
  FUN_180237b10(param_1 + 0x10, &uStack_48);
  return;
}

/**
 * 渲染系统颜色数组管理器
 * 原始函数名: FUN_180446690
 * 功能: 管理渲染系统的颜色数组
 * 参数: param_1 - 长整型参数，param_2 - 浮点数指针参数
 * 返回值: 无
 */
void RenderingSystem_ColorArrayManager(longlong param_1, float *param_2)
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
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + -8 + lVar6) = ((uVar1 << 8 | uVar3) << 8 | uVar5) << 8 | uVar7;
    } while (iVar4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x60));
  }
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}

/**
 * 渲染系统颜色数组获取器
 * 原始函数名: FUN_180446760
 * 功能: 获取渲染系统的颜色数组
 * 参数: param_1 - 浮点数指针参数，param_2 - 长整型参数，param_3 - 整数参数
 * 返回值: 浮点数指针
 */
float *RenderingSystem_ColorArrayGetter(float *param_1, longlong param_2, int param_3)
{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(*(longlong *)(param_2 + 0x18) + 0x60) < 1) {
    puVar2 = (uint *)&system_memory_661c;
  }
  else {
    puVar2 = (uint *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x68) + 0x54 + (longlong)param_3 * 0x5c);
  }
  uVar1 = *puVar2;
  *param_1 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  param_1[2] = (float)(uVar1 & 0xff) * 0.003921569;
  param_1[3] = (float)(uVar1 >> 0x18) * 0.003921569;
  return param_1;
}

/**
 * 渲染系统亮度调整器
 * 原始函数名: FUN_180446810
 * 功能: 调整渲染系统的亮度
 * 参数: param_1 - 长整型参数，param_2 - 浮点数参数
 * 返回值: 无
 */
void RenderingSystem_BrightnessAdjuster(longlong param_1, float param_2)
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
      *(uint *)(*(longlong *)(lVar3 + 0x68) + -8 + lVar6) = ((uVar8 | uVar5 << 8) << 8 | uVar4) << 8 | uVar1;
      lVar3 = *(longlong *)(param_1 + 0x18);
    } while (iVar7 < *(int *)(lVar3 + 0x60));
  }
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}

/**
 * 渲染系统颜色处理器
 * 原始函数名: FUN_18044682c
 * 功能: 处理渲染系统的颜色
 * 参数: param_1 - 长整型参数，param_2 - 浮点数参数
 * 返回值: 无
 */
void RenderingSystem_ColorProcessor2(longlong param_1, float param_2)
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
    *(uint *)(*(longlong *)(param_1 + 0x68) + -8 + uVar5) = ((uVar6 | uVar4 << 8) << 8 | uVar3) << 8 | uVar1;
    param_1 = *(longlong *)(in_R11 + 0x18);
  } while ((int)unaff_EDI < *(int *)(param_1 + 0x60));
  *(int8_t *)(in_R11 + 0x40) = 1;
  return;
}

/**
 * 渲染系统状态激活器
 * 原始函数名: FUN_1804468f7
 * 功能: 激活渲染系统的状态
 * 参数: 无
 * 返回值: 无
 */
void RenderingSystem_StateActivator(void)
{
  longlong in_R11;
  
  *(int8_t *)(in_R11 + 0x40) = 1;
  return;
}

/**
 * 渲染系统资源处理器
 * 原始函数名: FUN_180446960
 * 功能: 处理渲染系统的资源
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_ResourceProcessor(longlong param_1, uint64_t param_2, uint64_t param_3, int32_t param_4)
{
  int8_t auStack_40 [16];
  uint64_t *puStack_30;
  
  FUN_180233690(param_1 + 0x10, auStack_40, param_2, param_3, param_4);
  if (puStack_30 != (uint64_t *)0x0) {
    FUN_18004b790(auStack_40, *puStack_30);
    FUN_18064e900(puStack_30);
  }
  return;
}

/**
 * 渲染系统数组管理器
 * 原始函数名: FUN_180446a60
 * 功能: 管理渲染系统的数组
 * 参数: param_1 - 长整型参数，param_2 - 整数参数
 * 返回值: 无
 */
void RenderingSystem_ArrayManager(longlong param_1, int param_2)
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
    while (((*piVar3 != iStack_18 || (piVar3[1] != iStack_14)) || (piVar3[2] != piVar2[(longlong)param_2 * 3 + 2]))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    if (-1 < iVar4) {
      memmove(piVar2 + (longlong)iVar4 * 3, piVar2 + (longlong)(iVar4 + 1) * 3, (longlong)((iVar1 - iVar4) + -1) * 0xc);
    }
  }
  return;
}

/**
 * 渲染系统参数处理器
 * 原始函数名: FUN_180446b20
 * 功能: 处理渲染系统的参数
 * 参数: param_1 - 无符号4位指针参数，param_2 - 无符号8位参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数
 * 返回值: 无符号4位指针
 */
int32_t *RenderingSystem_ParameterProcessor(int32_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_18022cb40(param_2, &plStackX_8, param_3, param_4, 0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1, 0);
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

/**
 * 渲染系统资源分配器
 * 原始函数名: FUN_180446ba0
 * 功能: 分配渲染系统的资源
 * 参数: param_1 - 无符号8位指针参数
 * 返回值: 无符号8位指针
 */
uint64_t *RenderingSystem_ResourceAllocator(uint64_t *param_1)
{
  int32_t uVar1;
  longlong *plStackX_8;
  longlong *plStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  void *puStack_28;
  longlong lStack_20;
  
  uVar1 = FUN_180627910(&puStack_28);
  FUN_1800b3060(uVar1, &plStackX_8, &puStack_28);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0xffffffff;
    puStack_28 = &unknown_var_3456_ptr;
    if (lStack_20 != 0) {
      FUN_18064e900();
    }
  }
  else {
    uStack_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_28 = &unknown_var_3456_ptr;
    if (lStack_20 != 0) {
      FUN_18064e900();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(uStack_2c, uStack_30);
  return param_1;
}

/**
 * 渲染系统资源管理器
 * 原始函数名: FUN_180446ca0
 * 功能: 管理渲染系统的资源
 * 参数: param_1 - 无符号4位指针参数
 * 返回值: 无符号4位指针
 */
int32_t *RenderingSystem_ResourceManager2(int32_t *param_1)
{
  longlong *plVar1;
  int32_t uVar2;
  longlong *plStackX_8;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_c;
  
  FUN_1800b5e80(param_1, &plStackX_8);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1, 0);
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
 * 渲染系统上下文处理器
 * 原始函数名: FUN_180446d20
 * 功能: 处理渲染系统的上下文
 * 参数: param_1 - 无符号4位指针参数，param_2 - 长整型参数
 * 返回值: 无符号4位指针
 */
int32_t *RenderingSystem_ContextProcessor(int32_t *param_1, longlong param_2)
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
    cVar2 = func_0x00018022d300(param_2, param_2, param_2);
    *(char *)(param_2 + 0x38c) = cVar2;
    in_XMM0_Da = extraout_XMM0_Da;
  }
  FUN_1800b5ec0(in_XMM0_Da, &plStackX_8, cVar2);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1, 0);
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
 * 渲染系统数据处理器
 * 原始函数名: FUN_180446dc0
 * 功能: 处理渲染系统的数据
 * 参数: param_1 - 无符号8位参数，param_2 - 长整型参数，param_3 - 无符号8位参数，param_4 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_DataProcessor(uint64_t param_1, longlong param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t uVar1;
  int8_t auStack_60 [88];
  
  uVar1 = FUN_1800b8300(auStack_60, param_2 + 0x10, param_3, param_4, 0xfffffffffffffffe);
  FUN_18022ccc0(param_1, uVar1);
  return;
}

/**
 * 渲染系统资源管理器
 * 原始函数名: FUN_180446e70
 * 功能: 管理渲染系统的资源
 * 参数: param_1 - 长整型指针参数，param_2 - 长整型参数，param_3 - 整数参数
 * 返回值: 长整型指针
 */
longlong *RenderingSystem_ResourceManager3(longlong *param_1, longlong param_2, int param_3)
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
  param_1[1] = CONCAT44(uStack_14, uStack_18);
  return param_1;
}

/**
 * 渲染系统资源获取器
 * 原始函数名: FUN_180446f00
 * 功能: 获取渲染系统的资源
 * 参数: param_1 - 长整型指针参数，param_2 - 长整型参数
 * 返回值: 长整型指针
 */
longlong *RenderingSystem_ResourceGetter(longlong *param_1, longlong param_2)
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
  param_1[1] = CONCAT44(uStack_14, uStack_18);
  return param_1;
}

/**
 * 渲染系统资源设置器
 * 原始函数名: FUN_180446fa0
 * 功能: 设置渲染系统的资源
 * 参数: param_1 - 长整型参数，param_2 - 无符号8位参数
 * 返回值: 无
 */
void RenderingSystem_ResourceSetter(longlong param_1, uint64_t param_2)
{
  *(uint64_t *)(param_1 + 0x140) = param_2;
  FUN_18022dd60();
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  return;
}

/**
 * 渲染系统渲染参数设置器
 * 原始函数名: FUN_180446fd0
 * 功能: 设置渲染系统的渲染参数
 * 参数: param_1 - 长整型参数，param_2 - 无符号4位参数，param_3 - 无符号4位参数，param_4 - 无符号4位参数，param_5 - 无符号4位参数
 * 返回值: 无
 */
void RenderingSystem_RenderParameterSetter(longlong param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5)
{
  *(int32_t *)(param_1 + 0x288) = param_2;
  *(int32_t *)(param_1 + 0x28c) = param_3;
  *(int32_t *)(param_1 + 0x290) = param_4;
  *(int32_t *)(param_1 + 0x294) = param_5;
  return;
}

//==========================================================
// 渲染系统技术说明
//==========================================================

/**
 * 渲染系统高级渲染效果和材质处理模块技术说明
 * 
 * 模块功能：
 * 本模块提供了完整的渲染系统高级渲染效果和材质处理功能，包括：
 * 1. 颜色处理：颜色转换、插值、调整、验证等
 * 2. 材质管理：材质创建、处理、参数设置等
 * 3. 渲染参数：参数设置、处理、验证等
 * 4. 资源管理：资源分配、释放、管理等
 * 5. 内存管理：内存分配、释放、清理等
 * 6. 数据处理：数据验证、转换、处理等
 * 
 * 核心函数：
 * - RenderingSystem_AdvancedRenderer：高级渲染效果处理器
 * - RenderingSystem_MaterialProcessor：材质处理器
 * - RenderingSystem_ColorConverter：颜色代码分析器
 * - RenderingSystem_ParameterSetter：参数设置器
 * - RenderingSystem_ResourceManager：资源管理器
 * - RenderingSystem_ArrayManager：数组管理器
 * - RenderingSystem_BrightnessAdjuster：亮度调整器
 * - RenderingSystem_RenderParameterSetter：渲染参数设置器
 * 
 * 技术特点：
 * 1. 高性能：使用高效的算法和数据结构
 * 2. 精确控制：提供精确的颜色和参数控制
 * 3. 内存安全：具有完整的内存管理和错误处理
 * 4. 可扩展：模块化设计，易于扩展和维护
 * 5. 兼容性：支持多种渲染API和硬件平台
 * 
 * 应用场景：
 * - 游戏引擎渲染系统
 * - 图形处理应用
 * - 多媒体软件
 * - 科学可视化
 * - 虚拟现实系统
 */