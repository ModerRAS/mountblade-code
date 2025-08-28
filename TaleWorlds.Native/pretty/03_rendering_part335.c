// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer
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
void RenderingSystem_ProcessColorTransform(int64_t *param_1, char param_2);
uint64_t * RenderingSystem_AllocateResourceMemory(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);
int32_t * RenderingSystem_CreateColorBuffer(int32_t *param_1, int64_t *param_2);
void RenderingSystem_ConvertColorToARGB(int64_t param_1, int32_t param_2, uint64_t param_3, float *param_4, uint64_t param_5);
void RenderingSystem_ConvertColorToRGBA(int64_t param_1, int32_t param_2, uint64_t param_3, uint64_t param_4, float *param_5, uint64_t param_6);
void RenderingSystem_ProcessMultiColorData(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8, uint64_t param_9, uint64_t param_10, float *param_11, float *param_12, float *param_13);
void RenderingSystem_SetColorParameter(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6);
void RenderingSystem_UpdateColorChannel(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6);
void RenderingSystem_AdjustColorGamma(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint64_t param_5, float *param_6);
void RenderingSystem_SetRenderParameter(int64_t param_1, int32_t param_2);
void RenderingSystem_ClearRenderState(int64_t param_1);
void RenderingSystem_InitializeColorMatrix(int64_t param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ApplyColorFilter(int64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5);
void RenderingSystem_SetBlendMode(int64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5);
void RenderingSystem_ConvertToPremultipliedAlpha(int64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4, int32_t param_5, int32_t param_6);
void RenderingSystem_SetStandardBlendMode(int64_t param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ResetRenderState(int64_t param_1);
void RenderingSystem_SetColorValue(int64_t param_1, uint64_t param_2, uint64_t param_3, float *param_4, int32_t param_5);
void RenderingSystem_SetDefaultColor(int64_t param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ClearRenderState2(int64_t param_1);
void RenderingSystem_SetAdditiveBlendMode(int64_t param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_SetSubtractiveBlendMode(int64_t param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_ApplyCustomColor(int64_t param_1, uint64_t param_2, uint64_t param_3, int32_t *param_4, int8_t param_5);
void RenderingSystem_ClearRenderState3(int64_t param_1);
void RenderingSystem_SetAlphaBlendMode(int64_t param_1, uint64_t param_2, uint64_t param_3);
void RenderingSystem_SetPixelColor(int64_t param_1, int param_2, float *param_3);
void RenderingSystem_CopyColorData(int64_t param_1, uint64_t *param_2);
void RenderingSystem_SetColorData(int64_t param_1, uint64_t *param_2);
void RenderingSystem_ApplyColorToAll(int64_t param_1, float *param_2);
float * RenderingSystem_GetPixelColor(float *param_1, int64_t param_2, int param_3);
void RenderingSystem_AdjustColorBrightness(int64_t param_1, float param_2);
void RenderingSystem_AdjustColorSaturation(int64_t param_1, float param_2);
void RenderingSystem_InvalidateColorCache(int64_t param_1);
void RenderingSystem_ProcessRenderEffect(int64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4);
void RenderingSystem_RemoveColorEntry(int64_t param_1, int param_2);
int32_t * RenderingSystem_QueryColorData(int32_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4);
uint64_t * RenderingSystem_AllocateColorBuffer(uint64_t *param_1);
int32_t * RenderingSystem_GetColorBuffer(int32_t *param_1);
int32_t * RenderingSystem_GetColorBufferEx(int32_t *param_1, int64_t param_2);
void RenderingSystem_SetResourcePointer(uint64_t param_1, int64_t param_2, uint64_t param_3, uint64_t param_4);
int64_t * RenderingSystem_GetResourcePointer(int64_t *param_1, int64_t param_2, int param_3);
int64_t * RenderingSystem_GetMainResourcePointer(int64_t *param_1, int64_t param_2);
void RenderingSystem_UpdateResourcePointer(uint64_t param_1, uint64_t param_2);
void RenderingSystem_SetResourceParameters(int64_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5);
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
void RenderingSystem_ProcessColorTransform(int64_t *param_1,char param_2)
{
  int32_t astack_special_x_10 [6];
  if (param_2 != '\0') {
    (**(code **)(*param_1 + RENDERING_SYSTEM_OFFSET_0X128))(param_1,&ui_system_data_1052_ptr);
    return;
  }
  astack_special_x_10[0] = 0;
  (**(code **)(*param_1 + RENDERING_SYSTEM_OFFSET_0X128))(param_1,astack_special_x_10);
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
uint64_t * RenderingSystem_AllocateResourceMemory(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = RENDERING_SYSTEM_FLAG_FFFFFFFE;
  *param_1 = &processed_var_9832_ptr;
  function_22f410(param_1 + 2);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
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
int32_t * RenderingSystem_CreateColorBuffer(int32_t *param_1,int64_t *param_2)
{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_34;
  plVar2 = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,RENDERING_SYSTEM_DATA_SIZE_0X48,8,3,RENDERING_SYSTEM_FLAG_FFFFFFFE);
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&processed_var_9832_ptr;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[7] = 0;
  plVar2[5] = 0;
  *(int8_t *)(plVar2 + 4) = 0;
  RenderingSystem_MaterialProcessor(plVar2 + 2,param_2,0);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  local_var_40 = SUB84(plVar2,0);
  local_var_3c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = local_var_40;
  param_1[1] = local_var_3c;
  param_1[2] = uVar1;
  param_1[3] = local_var_34;
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
void RenderingSystem_ConvertColorToARGB(int64_t param_1,int32_t param_2,uint64_t param_3,float *param_4,
                                       uint64_t param_5)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint astack_special_x_8 [2];
  uVar1 = (uint)(int64_t)(param_4[3] * RENDERING_SYSTEM_COLOR_SCALE_256);
  uVar3 = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar1 < RENDERING_SYSTEM_FLAG_0XFF) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(int64_t)(*param_4 * RENDERING_SYSTEM_COLOR_SCALE_256);
  uVar1 = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar4 < RENDERING_SYSTEM_FLAG_0XFF) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)(int64_t)(param_4[1] * RENDERING_SYSTEM_COLOR_SCALE_256);
  uVar4 = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar2 < RENDERING_SYSTEM_FLAG_0XFF) {
    uVar4 = uVar2;
  }
  uVar2 = (uint)(int64_t)(param_4[2] * RENDERING_SYSTEM_COLOR_SCALE_256);
  astack_special_x_8[0] = RENDERING_SYSTEM_FLAG_0XFF;
  if (uVar2 < RENDERING_SYSTEM_FLAG_0XFF) {
    astack_special_x_8[0] = uVar2;
  }
  astack_special_x_8[0] = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | astack_special_x_8[0];
  SystemCore_Decoder(param_1 + RENDERING_SYSTEM_OFFSET_0X10,param_2,param_3,astack_special_x_8,param_5);
  return;
}
/**
 * 渲染系统颜色代码分析器（RGBA格式）
 *
 * 将浮点颜色值转换为RGBA格式，支持颜色分量标准化和格式转换。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色格式参数
 * @param param_3   颜色目标参数
 * @param param_4   保留参数
 * @param param_5   浮点颜色数组(R,G,B,A)
 * @param param_6   转换标志
 */
void RenderingSystem_ConvertColorToRGBA(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                                       float *param_5,uint64_t param_6)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = (uint)(int64_t)(param_5[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(int64_t)(*param_5 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(int64_t)(param_5[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_5[2] * 256.0);
  param_5._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_5._0_4_ = uVar1;
  }
  param_5._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_5;
  function_235270(param_1 + 0x10,param_2,param_3,param_4,&param_5,param_6);
  return;
}
/**
 * 渲染系统多颜色数据处理器
 *
 * 处理多个颜色数据集的转换和操作，支持批量颜色处理。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色数据参数1
 * @param param_3   颜色数据参数2
 * @param param_4   颜色数据参数3
 * @param param_5   颜色数据参数4
 * @param param_6   颜色数据参数5
 * @param param_7   颜色数据参数6
 * @param param_8   颜色数据参数7
 * @param param_9   颜色数据参数8
 * @param param_10  颜色数据参数9
 * @param param_11  浮点颜色数组1(R,G,B,A)
 * @param param_12  浮点颜色数组2(R,G,B,A)
 * @param param_13  浮点颜色数组3(R,G,B,A)
 *
 * 处理流程：
 * 1. 转换三个浮点颜色数组为RGBA格式
 * 2. 对每个颜色进行范围限制和格式转换
 * 3. 调用底层批量颜色处理函数
 */
void RenderingSystem_ProcessMultiColorData(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                          uint64_t param_4,uint64_t param_5,uint64_t param_6,
                                          uint64_t param_7,uint64_t param_8,uint64_t param_9,
                                          uint64_t param_10,float *param_11,float *param_12,
                                          float *param_13)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = (uint)(int64_t)(param_8[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(int64_t)(*param_8 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(int64_t)(param_8[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_8[2] * 256.0);
  param_8._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_8._0_4_ = uVar1;
  }
  param_8._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_8;
// WARNING: Subroutine does not return
  function_2354f0(param_1 + 0x10,param_2,param_3,param_4,param_5,param_6,param_7,&param_8);
}
// 函数: void function_445a80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_445a80(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,float *param_11,float *param_12,
                  float *param_13)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uVar2 = (uint)(int64_t)(param_13[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(int64_t)(*param_13 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(int64_t)(param_13[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_13[2] * 256.0);
  param_13._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_13._0_4_ = uVar1;
  }
  param_13._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_13;
  uVar2 = (uint)(int64_t)(param_12[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(int64_t)(*param_12 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(int64_t)(param_12[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_12[2] * 256.0);
  param_12._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_12._0_4_ = uVar1;
  }
  param_12._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_12;
  uVar2 = (uint)(int64_t)(param_11[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(int64_t)(*param_11 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(int64_t)(param_11[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_11[2] * 256.0);
  param_11._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_11._0_4_ = uVar1;
  }
  param_11._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_11;
  function_2355d0(param_1 + 0x10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,&param_11,&param_12,&param_13);
  return;
}
/**
 * 渲染系统颜色参数设置器
 *
 * 设置渲染系统的颜色参数，支持多种颜色格式转换。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色格式参数
 * @param param_3   颜色目标参数
 * @param param_4   保留参数
 * @param param_5   颜色数据参数
 * @param param_6   浮点颜色数组(R,G,B,A)
 *
 * 处理流程：
 * 1. 将浮点颜色值转换为RGBA格式
 * 2. 对颜色分量进行范围限制
 * 3. 组合颜色分量为RGBA格式
 * 4. 调用底层参数设置函数
 */
void RenderingSystem_SetColorParameter(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                     uint64_t param_4,uint64_t param_5,float *param_6)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = (uint)(int64_t)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(int64_t)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(int64_t)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  function_2356b0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}
/**
 * 渲染系统颜色通道更新器
 *
 * 更新指定颜色通道的值，支持单独颜色通道的调整。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色格式参数
 * @param param_3   颜色目标参数
 * @param param_4   保留参数
 * @param param_5   颜色数据参数
 * @param param_6   浮点颜色数组(R,G,B,A)
 *
 * 处理流程：
 * 1. 将浮点颜色值转换为RGBA格式
 * 2. 对颜色分量进行范围限制
 * 3. 组合颜色分量为RGBA格式
 * 4. 调用底层通道更新函数
 */
void RenderingSystem_UpdateColorChannel(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                      uint64_t param_4,uint64_t param_5,float *param_6)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = (uint)(int64_t)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(int64_t)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(int64_t)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  function_2358c0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}
/**
 * 渲染系统颜色伽马调整器
 *
 * 调整颜色的伽马值，支持颜色伽马校正。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色格式参数
 * @param param_3   颜色目标参数
 * @param param_4   保留参数
 * @param param_5   颜色数据参数
 * @param param_6   浮点颜色数组(R,G,B,A)
 *
 * 处理流程：
 * 1. 将浮点颜色值转换为RGBA格式
 * 2. 对颜色分量进行范围限制
 * 3. 组合颜色分量为RGBA格式
 * 4. 调用底层伽马调整函数
 */
void RenderingSystem_AdjustColorGamma(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                     uint64_t param_4,uint64_t param_5,float *param_6)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uVar3 = (uint)(int64_t)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(int64_t)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(int64_t)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(int64_t)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  function_235ae0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}
/**
 * 渲染系统参数设置器
 *
 * 设置渲染系统的基本参数，用于配置渲染行为。
 *
 * @param param_1   渲染对象指针
 * @param param_2   渲染参数值
 *
 * 处理流程：
 * 1. 准备参数数据结构
 * 2. 调用底层参数设置函数
 */
void RenderingSystem_SetRenderParameter(int64_t param_1,int32_t param_2)
{
  int32_t astack_special_x_10 [6];
  astack_special_x_10[0] = param_2;
  function_236e60(param_1 + 0x10,astack_special_x_10);
  return;
}
/**
 * 渲染系统状态清理器
 *
 * 清理渲染系统的状态信息，重置为默认状态。
 *
 * @param param_1   渲染对象指针
 *
 * 处理流程：
 * 1. 调用底层状态清理函数
 * 2. 重置渲染状态为默认值
 */
void RenderingSystem_ClearRenderState(int64_t param_1)
{
  function_235ca0(param_1 + 0x10);
  return;
}
/**
 * 渲染系统颜色矩阵初始化器
 *
 * 初始化颜色变换矩阵，用于颜色空间转换和变换操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   矩阵参数1
 * @param param_3   矩阵参数2
 *
 * 处理流程：
 * 1. 准备单位矩阵数据
 * 2. 设置最大浮点值参数
 * 3. 调用底层矩阵初始化函数
 */
void RenderingSystem_InitializeColorMatrix(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = 0;
  local_var_14 = 0;
  local_var_10 = 0;
  local_var_c = 0x7f7fffff;
  function_2333f0(param_1 + 0x10,&local_var_18,param_2,param_3);
  return;
}
/**
 * 渲染系统颜色滤镜应用器
 *
 * 应用颜色滤镜效果，支持基本的颜色过滤操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   滤镜参数1
 * @param param_3   滤镜参数2
 * @param param_4   滤镜类型
 * @param param_5   滤镜强度
 *
 * 处理流程：
 * 1. 准备滤镜参数数据
 * 2. 调用底层滤镜应用函数
 */
void RenderingSystem_ApplyColorFilter(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                     int32_t param_4,int32_t param_5)
{
  int32_t astack_special_x_20 [2];
  astack_special_x_20[0] = param_4;
  function_231180(param_1 + 0x10,param_2,param_3,astack_special_x_20,&param_5);
  return;
}
/**
 * 渲染系统混合模式设置器
 *
 * 设置渲染的混合模式，控制颜色混合方式。
 *
 * @param param_1   渲染对象指针
 * @param param_2   混合参数1
 * @param param_3   混合参数2
 * @param param_4   混合模式
 * @param param_5   混合系数
 *
 * 处理流程：
 * 1. 准备混合模式参数
 * 2. 调用底层混合模式设置函数
 */
void RenderingSystem_SetBlendMode(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                 int32_t param_4,int32_t param_5)
{
  int32_t astack_special_x_20 [2];
  astack_special_x_20[0] = param_4;
  function_2318b0(param_1 + 0x10,param_2,param_3,astack_special_x_20,&param_5);
  return;
}
/**
 * 渲染系统预乘Alpha代码分析器
 *
 * 将颜色转换为预乘Alpha格式，用于优化的混合操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   转换参数1
 * @param param_3   转换参数2
 * @param param_4   转换标志1
 * @param param_5   转换标志2
 * @param param_6   转换标志3
 *
 * 处理流程：
 * 1. 准备转换参数数据
 * 2. 调用底层预乘Alpha转换函数
 */
void RenderingSystem_ConvertToPremultipliedAlpha(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                               int32_t param_4,int32_t param_5,int32_t param_6)
{
  int32_t astack_special_x_20 [2];
  astack_special_x_20[0] = param_4;
  function_2325e0(param_1 + 0x10,param_2,param_3,astack_special_x_20,&param_5,param_6);
  return;
}
/**
 * 渲染系统标准混合模式设置器
 *
 * 设置标准混合模式，提供常用的颜色混合效果。
 *
 * @param param_1   渲染对象指针
 * @param param_2   混合参数1
 * @param param_3   混合参数2
 * @param param_4   混合模式
 * @param param_5   混合系数
 *
 * 处理流程：
 * 1. 准备标准混合参数
 * 2. 调用底层混合模式设置函数
 */
void RenderingSystem_SetStandardBlendMode(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                         int32_t param_4,int32_t param_5)
{
  int32_t astack_special_x_20 [2];
  astack_special_x_20[0] = param_4;
  function_232d10(param_1 + 0x10,param_2,param_3,astack_special_x_20,&param_5,param_6);
  return;
}
/**
 * 渲染系统颜色值设置器
 *
 * 设置渲染系统的颜色值，支持浮点颜色格式。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色参数1
 * @param param_3   颜色参数2
 * @param param_4   浮点颜色数组(R,G,B,A)
 * @param param_5   颜色标志
 *
 * 处理流程：
 * 1. 将浮点颜色值转换为RGBA格式
 * 2. 对颜色分量进行范围限制
 * 3. 组合颜色分量为RGBA格式
 * 4. 调用底层颜色值设置函数
 */
void RenderingSystem_SetColorValue(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                  float *param_4,int32_t param_5)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint astack_special_x_8 [2];
  uVar1 = (uint)(int64_t)(param_4[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(int64_t)(*param_4 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)(int64_t)(param_4[1] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar2 = (uint)(int64_t)(param_4[2] * 256.0);
  astack_special_x_8[0] = 0xff;
  if (uVar2 < 0xff) {
    astack_special_x_8[0] = uVar2;
  }
  astack_special_x_8[0] = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | astack_special_x_8[0];
  function_2309b0(param_1 + 0x10,param_2,param_3,astack_special_x_8,&param_5);
  return;
}
/**
 * 渲染系统默认颜色设置器
 *
 * 设置渲染系统的默认颜色值，初始化为标准白色。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色参数1
 * @param param_3   颜色参数2
 *
 * 处理流程：
 * 1. 准备标准白色颜色数据(1.0,1.0,1.0,1.0)
 * 2. 调用底层默认颜色设置函数
 */
void RenderingSystem_SetDefaultColor(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = 0x3f800000;
  local_var_14 = 0x3f800000;
  local_var_10 = 0x3f800000;
  local_var_c = 0x3f800000;
  function_235ca0(param_1 + 0x10,param_2,param_3,0xff,&local_var_18,1,0,0,1);
  return;
}
/**
 * 渲染系统状态清理器2
 *
 * 第二个版本的渲染系统状态清理器，提供额外的状态重置功能。
 *
 * @param param_1   渲染对象指针
 *
 * 处理流程：
 * 1. 调用底层状态清理函数
 * 2. 重置渲染状态为默认值
 */
void RenderingSystem_ClearRenderState2(int64_t param_1)
{
  function_235ca0(param_1 + 0x10);
  return;
}
/**
 * 渲染系统自定义颜色应用器
 *
 * 应用自定义颜色效果，支持用户定义的颜色操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色参数1
 * @param param_3   颜色参数2
 * @param param_4   自定义颜色数据指针
 * @param param_5   应用标志
 *
 * 处理流程：
 * 1. 提取自定义颜色数据
 * 2. 准备颜色应用参数
 * 3. 调用底层自定义颜色应用函数
 */
void RenderingSystem_ApplyCustomColor(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                     int32_t *param_4,int8_t param_5)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_4;
  local_var_14 = param_4[1];
  local_var_10 = param_4[2];
  local_var_c = param_4[3];
  function_235ca0(param_1 + 0x10,param_2,param_3,0xff,&local_var_18,1,0,0,param_5);
  return;
}
/**
 * 渲染系统状态清理器3
 *
 * 第三个版本的渲染系统状态清理器，提供完整的状态重置功能。
 *
 * @param param_1   渲染对象指针
 *
 * 处理流程：
 * 1. 调用底层状态清理函数
 * 2. 重置渲染状态为默认值
 */
void RenderingSystem_ClearRenderState3(int64_t param_1)
{
  function_235ca0(param_1 + 0x10);
  return;
}
/**
 * 渲染系统加法混合模式设置器
 *
 * 设置加法混合模式，用于亮度和颜色增强效果。
 *
 * @param param_1   渲染对象指针
 * @param param_2   混合参数1
 * @param param_3   混合参数2
 *
 * 处理流程：
 * 1. 准备加法混合参数(1.0,1.0,1.0,1.0)
 * 2. 调用底层加法混合模式设置函数
 */
void RenderingSystem_SetAdditiveBlendMode(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = 0x3f800000;
  local_var_14 = 0x3f800000;
  local_var_10 = 0x3f800000;
  local_var_c = 0x3f800000;
  function_235ca0(param_1 + 0x10,param_2,param_3,0xff,&local_var_18,0,0,0,1);
  return;
}
/**
 * 渲染系统减法混合模式设置器
 *
 * 设置减法混合模式，用于暗化和颜色减少效果。
 *
 * @param param_1   渲染对象指针
 * @param param_2   混合参数1
 * @param param_3   混合参数2
 *
 * 处理流程：
 * 1. 准备减法混合参数(1.0,1.0,1.0,1.0)
 * 2. 调用底层减法混合模式设置函数
 */
void RenderingSystem_SetSubtractiveBlendMode(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = 0x3f800000;
  local_var_14 = 0x3f800000;
  local_var_10 = 0x3f800000;
  local_var_c = 0x3f800000;
  function_235ca0(param_1 + 0x10,param_2,param_3,0xff,&local_var_18,0,1,0,1);
  return;
}
/**
 * 渲染系统Alpha混合模式设置器
 *
 * 设置Alpha混合模式，用于透明度混合效果。
 *
 * @param param_1   渲染对象指针
 * @param param_2   混合参数1
 * @param param_3   混合参数2
 * @param param_4   混合模式
 * @param param_5   混合系数
 *
 * 处理流程：
 * 1. 准备Alpha混合参数
 * 2. 调用底层Alpha混合模式设置函数
 */
void RenderingSystem_SetAlphaBlendMode(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                       int32_t param_4,int32_t param_5)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_4;
  local_var_14 = param_4[1];
  local_var_10 = param_4[2];
  local_var_c = param_4[3];
  function_235ca0(param_1 + 0x10,param_2,param_3,0xff,&local_var_18,1,0,1,param_5);
  return;
}
/**
 * 渲染系统像素颜色设置器
 *
 * 设置指定像素的颜色值，支持精确的像素级颜色控制。
 *
 * @param param_1   渲染对象指针
 * @param param_2   像素索引
 * @param param_3   浮点颜色数组(R,G,B,A)
 *
 * 处理流程：
 * 1. 将浮点颜色值转换为RGBA格式
 * 2. 对颜色分量进行范围限制
 * 3. 组合颜色分量为RGBA格式
 * 4. 将颜色值写入指定像素位置
 * 5. 设置颜色修改标志
 */
void RenderingSystem_SetPixelColor(int64_t param_1,int param_2,float *param_3)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uVar1 = (uint)(int64_t)(param_3[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(int64_t)(*param_3 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar5 = (uint)(int64_t)(param_3[1] * 256.0);
  uVar4 = 0xff;
  if (uVar5 < 0xff) {
    uVar4 = uVar5;
  }
  uVar2 = (uint)(int64_t)(param_3[2] * 256.0);
  uVar5 = 0xff;
  if (uVar2 < 0xff) {
    uVar5 = uVar2;
  }
  *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x68) + 0x54 + (int64_t)param_2 * 0x5c) =
       ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}
/**
 * 渲染系统颜色数据复制器
 *
 * 复制颜色数据到目标位置，支持批量颜色数据操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色数据源指针
 *
 * 处理流程：
 * 1. 提取源颜色数据
 * 2. 准备数据复制参数
 * 3. 调用底层颜色数据复制函数
 */
void RenderingSystem_CopyColorData(int64_t param_1,uint64_t *param_2)
{
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_48 = *param_2;
  local_var_40 = param_2[1];
  local_var_38 = param_2[2];
  local_var_30 = param_2[3];
  local_var_28 = *(int32_t *)(param_2 + 4);
  local_var_24 = *(int32_t *)((int64_t)param_2 + 0x24);
  local_var_20 = *(int32_t *)(param_2 + 5);
  local_var_1c = *(int32_t *)((int64_t)param_2 + 0x2c);
  local_var_18 = *(int32_t *)(param_2 + 6);
  local_var_14 = *(int32_t *)((int64_t)param_2 + 0x34);
  local_var_10 = *(int32_t *)(param_2 + 7);
  local_var_c = *(int32_t *)((int64_t)param_2 + 0x3c);
  function_2379d0(param_1 + 0x10,&local_var_48);
  return;
}
/**
 * 渲染系统颜色数据设置器
 *
 * 设置颜色数据到目标位置，支持批量颜色数据操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   颜色数据源指针
 *
 * 处理流程：
 * 1. 提取源颜色数据
 * 2. 准备数据设置参数
 * 3. 调用底层颜色数据设置函数
 */
void RenderingSystem_SetColorData(int64_t param_1,uint64_t *param_2)
{
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_48 = *param_2;
  local_var_40 = param_2[1];
  local_var_38 = param_2[2];
  local_var_30 = param_2[3];
  local_var_28 = *(int32_t *)(param_2 + 4);
  local_var_24 = *(int32_t *)((int64_t)param_2 + 0x24);
  local_var_20 = *(int32_t *)(param_2 + 5);
  local_var_1c = *(int32_t *)((int64_t)param_2 + 0x2c);
  local_var_18 = *(int32_t *)(param_2 + 6);
  local_var_14 = *(int32_t *)((int64_t)param_2 + 0x34);
  local_var_10 = *(int32_t *)(param_2 + 7);
  local_var_c = *(int32_t *)((int64_t)param_2 + 0x3c);
  function_237b10(param_1 + 0x10,&local_var_48);
  return;
}
/**
 * 渲染系统全局颜色应用器
 *
 * 将指定颜色应用到所有像素，支持批量颜色设置。
 *
 * @param param_1   渲染对象指针
 * @param param_2   浮点颜色数组(R,G,B,A)
 *
 * 处理流程：
 * 1. 将浮点颜色值转换为RGBA格式
 * 2. 对颜色分量进行范围限制
 * 3. 组合颜色分量为RGBA格式
 * 4. 遍历所有像素并设置颜色值
 * 5. 设置颜色修改标志
 */
void RenderingSystem_ApplyColorToAll(int64_t param_1,float *param_2)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  uint uVar7;
  uVar3 = (uint)(int64_t)(param_2[3] * 256.0);
  uVar1 = 0xff;
  if (uVar3 < 0xff) {
    uVar1 = uVar3;
  }
  uVar5 = (uint)(int64_t)(*param_2 * 256.0);
  uVar3 = 0xff;
  if (uVar5 < 0xff) {
    uVar3 = uVar5;
  }
  uVar7 = (uint)(int64_t)(param_2[1] * 256.0);
  uVar5 = 0xff;
  if (uVar7 < 0xff) {
    uVar5 = uVar7;
  }
  uVar2 = (uint)(int64_t)(param_2[2] * 256.0);
  uVar7 = 0xff;
  if (uVar2 < 0xff) {
    uVar7 = uVar2;
  }
  iVar4 = 0;
  if (0 < *(int *)(*(int64_t *)(param_1 + 0x18) + 0x60)) {
    lVar6 = 0;
    do {
      lVar6 = lVar6 + 0x5c;
      iVar4 = iVar4 + 1;
      *(uint *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x68) + -8 + lVar6) =
           ((uVar1 << 8 | uVar3) << 8 | uVar5) << 8 | uVar7;
    } while (iVar4 < *(int *)(*(int64_t *)(param_1 + 0x18) + 0x60));
  }
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}
/**
 * 渲染系统像素颜色获取器
 *
 * 获取指定像素的颜色值，支持像素级颜色读取。
 *
 * @param param_1   输出颜色数组指针
 * @param param_2   渲染对象指针
 * @param param_3   像素索引
 * @return          颜色数组指针
 *
 * 处理流程：
 * 1. 检查像素索引的有效性
 * 2. 读取指定像素的颜色值
 * 3. 将RGBA颜色值转换为浮点格式
 * 4. 返回颜色数组指针
 */
float * RenderingSystem_GetPixelColor(float *param_1,int64_t param_2,int param_3)
{
  uint uVar1;
  uint *puVar2;
  if (*(int *)(*(int64_t *)(param_2 + 0x18) + 0x60) < 1) {
    puVar2 = (uint *)&system_memory_661c;
  }
  else {
    puVar2 = (uint *)(*(int64_t *)(*(int64_t *)(param_2 + 0x18) + 0x68) + 0x54 +
                     (int64_t)param_3 * 0x5c);
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
 * 调整所有像素的颜色亮度，支持整体亮度控制。
 *
 * @param param_1   渲染对象指针
 * @param param_2   亮度调整系数
 *
 * 处理流程：
 * 1. 遍历所有像素
 * 2. 提取每个像素的颜色值
 * 3. 应用亮度调整系数
 * 4. 对调整后的颜色进行范围限制
 * 5. 更新像素颜色值
 * 6. 设置颜色修改标志
 */
void RenderingSystem_AdjustColorBrightness(int64_t param_1,float param_2)
{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  int iVar7;
  uint uVar8;
  iVar7 = 0;
  lVar3 = *(int64_t *)(param_1 + 0x18);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar6 = 0;
    uVar1 = (uint)(int64_t)(param_2 * 256.0);
    uVar5 = 0xff;
    if (uVar1 < 0xff) {
      uVar5 = uVar1;
    }
    do {
      lVar6 = lVar6 + 0x5c;
      uVar1 = *(uint *)(*(int64_t *)(lVar3 + 0x68) + -8 + lVar6);
      uVar4 = (uint)(int64_t)((float)(uVar1 >> 0x10 & 0xff) * 1.0039216);
      uVar8 = 0xff;
      if (uVar4 < 0xff) {
        uVar8 = uVar4;
      }
      uVar2 = (uint)(int64_t)((float)(uVar1 >> 8 & 0xff) * 1.0039216);
      uVar4 = 0xff;
      if (uVar2 < 0xff) {
        uVar4 = uVar2;
      }
      uVar2 = (uint)(int64_t)((float)(uVar1 & 0xff) * 1.0039216);
      uVar1 = 0xff;
      if (uVar2 < 0xff) {
        uVar1 = uVar2;
      }
      iVar7 = iVar7 + 1;
      *(uint *)(*(int64_t *)(lVar3 + 0x68) + -8 + lVar6) =
           ((uVar8 | uVar5 << 8) << 8 | uVar4) << 8 | uVar1;
      lVar3 = *(int64_t *)(param_1 + 0x18);
    } while (iVar7 < *(int *)(lVar3 + 0x60));
  }
  *(int8_t *)(param_1 + 0x40) = 1;
  return;
}
/**
 * 渲染系统颜色饱和度调整器
 *
 * 调整所有像素的颜色饱和度，支持色彩饱和度控制。
 *
 * @param param_1   渲染对象指针
 * @param param_2   饱和度调整系数
 *
 * 处理流程：
 * 1. 遍历所有像素
 * 2. 提取每个像素的颜色值
 * 3. 应用饱和度调整系数
 * 4. 对调整后的颜色进行范围限制
 * 5. 更新像素颜色值
 * 6. 设置颜色修改标志
 */
void RenderingSystem_AdjustColorSaturation(int64_t param_1,float param_2)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint unaff_EDI;
  uint uVar6;
  int64_t in_R11;
  uVar5 = (uint64_t)unaff_EDI;
  uVar4 = 0xff;
  if ((uint)(int64_t)param_2 < 0xff) {
    uVar4 = (uint)(int64_t)param_2;
  }
  do {
    uVar5 = uVar5 + 0x5c;
    uVar1 = *(uint *)(*(int64_t *)(param_1 + 0x68) + -8 + uVar5);
    uVar3 = (uint)(int64_t)((float)(uVar1 >> 0x10 & 0xff) * 1.0039216);
    uVar6 = 0xff;
    if (uVar3 < 0xff) {
      uVar6 = uVar3;
    }
    uVar2 = (uint)(int64_t)((float)(uVar1 >> 8 & 0xff) * 1.0039216);
    uVar3 = 0xff;
    if (uVar2 < 0xff) {
      uVar3 = uVar2;
    }
    uVar2 = (uint)(int64_t)((float)(uVar1 & 0xff) * 1.0039216);
    uVar1 = 0xff;
    if (uVar2 < 0xff) {
      uVar1 = uVar2;
    }
    unaff_EDI = unaff_EDI + 1;
    *(uint *)(*(int64_t *)(param_1 + 0x68) + -8 + uVar5) =
         ((uVar6 | uVar4 << 8) << 8 | uVar3) << 8 | uVar1;
    param_1 = *(int64_t *)(in_R11 + 0x18);
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
 * 2. 触发颜色重新计算
 */
void RenderingSystem_InvalidateColorCache(int64_t param_1)
{
  int64_t in_R11;
  *(int8_t *)(in_R11 + 0x40) = 1;
  return;
}
/**
 * 渲染系统渲染效果处理器
 *
 * 处理各种渲染效果，支持特效和滤镜应用。
 *
 * @param param_1   渲染对象指针
 * @param param_2   效果参数1
 * @param param_3   效果参数2
 * @param param_4   效果类型
 *
 * 处理流程：
 * 1. 准备效果处理参数
 * 2. 调用底层效果处理函数
 * 3. 处理效果相关的资源管理
 */
void RenderingSystem_ProcessRenderEffect(int64_t param_1,uint64_t param_2,uint64_t param_3,
                                        int32_t param_4)
{
  int8_t stack_array_40 [16];
  uint64_t *plocal_var_30;
  function_233690(param_1 + 0x10,stack_array_40,param_2,param_3,param_4);
  if (plocal_var_30 != (uint64_t *)0x0) {
    SystemCache_Manager(stack_array_40,*plocal_var_30);
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plocal_var_30);
  }
  return;
}
/**
 * 渲染系统颜色条目移除器
 *
 * 从颜色管理器中移除指定的颜色条目。
 *
 * @param param_1   渲染对象指针
 * @param param_2   要移除的颜色条目索引
 *
 * 处理流程：
 * 1. 查找指定的颜色条目
 * 2. 如果找到，从数组中移除该条目
 * 3. 更新颜色管理器状态
 */
void RenderingSystem_RemoveColorEntry(int64_t param_1,int param_2)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iStack_18;
  int iStack_14;
  iVar4 = 0;
  piVar2 = *(int **)(*(int64_t *)(param_1 + 0x18) + 0x90);
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x18) + 0x88);
  if (0 < iVar1) {
    iStack_14 = (int)((uint64_t)*(uint64_t *)(piVar2 + (int64_t)param_2 * 3) >> 0x20);
    iStack_18 = (int)*(uint64_t *)(piVar2 + (int64_t)param_2 * 3);
    piVar3 = piVar2;
    while (((*piVar3 != iStack_18 || (piVar3[1] != iStack_14)) ||
           (piVar3[2] != piVar2[(int64_t)param_2 * 3 + 2]))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    if (-1 < iVar4) {
// WARNING: Subroutine does not return
      memmove(piVar2 + (int64_t)iVar4 * 3,piVar2 + (int64_t)(iVar4 + 1) * 3,
              (int64_t)((iVar1 - iVar4) + -1) * 0xc);
    }
  }
  return;
}
/**
 * 渲染系统颜色数据查询器
 *
 * 查询指定的颜色数据，支持颜色数据的读取和验证。
 *
 * @param param_1   输出参数指针
 * @param param_2   查询参数1
 * @param param_3   查询参数2
 * @param param_4   查询参数3
 * @return          查询结果指针
 *
 * 处理流程：
 * 1. 执行颜色数据查询操作
 * 2. 处理查询结果
 * 3. 返回查询结果指针
 */
int32_t * RenderingSystem_QueryColorData(int32_t *param_1,uint64_t param_2,uint64_t param_3,
                                          uint64_t param_4)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  function_22cb40(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  local_var_20 = SUB84(plVar1,0);
  local_var_1c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar2;
  param_1[3] = local_var_14;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x000180446c4b)
/**
 * 渲染系统颜色缓冲区分配器
 *
 * 分配颜色缓冲区内存，用于存储颜色数据。
 *
 * @param param_1   输出参数指针
 * @return          分配的缓冲区指针
 *
 * 处理流程：
 * 1. 执行缓冲区分配操作
 * 2. 处理分配结果
 * 3. 返回分配的缓冲区指针
 */
uint64_t * RenderingSystem_AllocateColorBuffer(uint64_t *param_1)
{
  int32_t uVar1;
  int64_t *plStackX_8;
  int64_t *plStack_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  void *plocal_var_28;
  int64_t lStack_20;
  uVar1 = CoreMemoryPoolValidator(&plocal_var_28);
  function_0b3060(uVar1,&plStackX_8,&plocal_var_28);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    plStack_38 = (int64_t *)0x0;
    local_var_30 = 0xffffffff;
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    local_var_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(local_var_2c,local_var_30);
  return param_1;
}
/**
 * 渲染系统颜色缓冲区获取器
 *
 * 获取颜色缓冲区指针，用于访问颜色数据。
 *
 * @param param_1   输出参数指针
 * @return          颜色缓冲区指针
 *
 * 处理流程：
 * 1. 执行缓冲区获取操作
 * 2. 处理获取结果
 * 3. 返回颜色缓冲区指针
 */
int32_t * RenderingSystem_GetColorBuffer(int32_t *param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_c;
  function_0b5e80(param_1,&plStackX_8);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  local_var_18 = SUB84(plVar1,0);
  local_var_14 = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = local_var_18;
  param_1[1] = local_var_14;
  param_1[2] = uVar2;
  param_1[3] = local_var_c;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}
/**
 * 渲染系统颜色缓冲区扩展获取器
 *
 * 获取扩展的颜色缓冲区指针，支持附加参数。
 *
 * @param param_1   输出参数指针
 * @param param_2   扩展参数
 * @return          颜色缓冲区指针
 *
 * 处理流程：
 * 1. 检查扩展参数状态
 * 2. 执行扩展缓冲区获取操作
 * 3. 处理获取结果
 * 4. 返回颜色缓冲区指针
 */
int32_t * RenderingSystem_GetColorBufferEx(int32_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  char cVar2;
  int32_t uVar3;
  int32_t in_XMM0_Da;
  int32_t extraout_XMM0_Da;
  int64_t *plStackX_8;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_c;
  cVar2 = *(char *)(param_2 + 0x38c);
  if (cVar2 == '\t') {
    cVar2 = Function_59f5000a(param_2,param_2,param_2);
    *(char *)(param_2 + 0x38c) = cVar2;
    in_XMM0_Da = extraout_XMM0_Da;
  }
  function_0b5ec0(in_XMM0_Da,&plStackX_8,cVar2);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  local_var_18 = SUB84(plVar1,0);
  local_var_14 = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = local_var_18;
  param_1[1] = local_var_14;
  param_1[2] = uVar3;
  param_1[3] = local_var_c;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}
/**
 * 渲染系统资源指针设置器
 *
 * 设置渲染系统的资源指针，用于资源管理。
 *
 * @param param_1   资源指针值
 * @param param_2   渲染对象指针
 * @param param_3   资源参数1
 * @param param_4   资源参数2
 *
 * 处理流程：
 * 1. 执行资源指针设置操作
 * 2. 更新资源管理状态
 * 3. 设置资源状态标志
 */
void RenderingSystem_SetResourcePointer(uint64_t param_1,int64_t param_2,uint64_t param_3,
                                       uint64_t param_4)
{
  uint64_t uVar1;
  int8_t stack_array_60 [88];
  uVar1 = DataDeserializer0(stack_array_60,param_2 + 0x10,param_3,param_4,0xfffffffffffffffe);
  function_22ccc0(param_1,uVar1);
  return;
}
/**
 * 渲染系统资源指针获取器
 *
 * 获取指定索引的资源指针，支持资源访问。
 *
 * @param param_1   输出参数指针
 * @param param_2   渲染对象指针
 * @param param_3   资源索引
 * @return          资源指针
 *
 * 处理流程：
 * 1. 根据索引计算资源指针位置
 * 2. 执行资源获取操作
 * 3. 处理获取结果
 * 4. 返回资源指针
 */
int64_t * RenderingSystem_GetResourcePointer(int64_t *param_1,int64_t param_2,int param_3)
{
  int64_t *plStack_20;
  int32_t local_var_18;
  int32_t local_var_14;
  plStack_20 = *(int64_t **)(param_2 + 0xb8 + (int64_t)param_3 * 8);
  if (plStack_20 == (int64_t *)0x0) {
    plStack_20 = (int64_t *)0x0;
    local_var_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    local_var_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (int64_t)plStack_20;
  param_1[1] = CONCAT44(local_var_14,local_var_18);
  return param_1;
}
/**
 * 渲染系统主资源指针获取器
 *
 * 获取主资源指针，用于访问主要资源。
 *
 * @param param_1   输出参数指针
 * @param param_2   渲染对象指针
 * @return          主资源指针
 *
 * 处理流程：
 * 1. 计算主资源指针位置
 * 2. 执行主资源获取操作
 * 3. 处理获取结果
 * 4. 返回主资源指针
 */
int64_t * RenderingSystem_GetMainResourcePointer(int64_t *param_1,int64_t param_2)
{
  int64_t *plStack_20;
  int32_t local_var_18;
  int32_t local_var_14;
  plStack_20 = *(int64_t **)(param_2 + 0x1e0);
  if (plStack_20 == (int64_t *)0x0) {
    plStack_20 = (int64_t *)0x0;
    local_var_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    local_var_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (int64_t)plStack_20;
  param_1[1] = CONCAT44(local_var_14,local_var_18);
  return param_1;
}
/**
 * 渲染系统资源指针更新器
 *
 * 更新资源指针，用于资源管理操作。
 *
 * @param param_1   渲染对象指针
 * @param param_2   新的资源指针值
 *
 * 处理流程：
 * 1. 更新资源指针值
 * 2. 执行资源更新操作
 * 3. 设置资源状态标志
 */
void RenderingSystem_UpdateResourcePointer(uint64_t param_1,uint64_t param_2)
{
  *(uint64_t *)(param_1 + 0x140) = param_2;
  function_22dd60();
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  return;
}
/**
 * 渲染系统资源参数设置器
 *
 * 设置渲染系统的资源参数，用于资源配置。
 *
 * @param param_1   渲染对象指针
 * @param param_2   资源参数1
 * @param param_3   资源参数2
 * @param param_4   资源参数3
 * @param param_5   资源参数4
 *
 * 处理流程：
 * 1. 将资源参数写入指定偏移位置
 * 2. 更新资源配置状态
 */
void RenderingSystem_SetResourceParameters(int64_t param_1,int32_t param_2,int32_t param_3,
                                          int32_t param_4,int32_t param_5)
{
  *(int32_t *)(param_1 + RENDERING_SYSTEM_OFFSET_0X288) = param_2;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_OFFSET_0X28C) = param_3;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_OFFSET_0X290) = param_4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_OFFSET_0X294) = param_5;
  return;
}
/*===================================================================================
    函数别名定义
===================================================================================*/
// 渲染系统颜色处理函数
#define RenderingSystem_ProcessColorTransform          function_445570  // 渲染系统颜色变换处理器
#define RenderingSystem_AllocateResourceMemory          function_445610  // 渲染系统资源内存分配器
#define RenderingSystem_CreateColorBuffer               function_445680  // 渲染系统颜色缓冲区创建器
#define RenderingSystem_ConvertColorToARGB              function_4457b0  // 渲染系统颜色代码分析器(ARGB)
#define RenderingSystem_ConvertColorToRGBA              function_445870  // 渲染系统颜色代码分析器(RGBA)
#define RenderingSystem_ProcessMultiColorData           function_445970  // 渲染系统多颜色数据处理器
#define RenderingSystem_SetColorParameter               function_445cd0  // 渲染系统颜色参数设置器
#define RenderingSystem_UpdateColorChannel              function_445dc0  // 渲染系统颜色通道更新器
#define RenderingSystem_AdjustColorGamma                 function_445eb0  // 渲染系统颜色伽马调整器
// 渲染系统参数和状态管理函数
#define RenderingSystem_SetRenderParameter               function_445fd0  // 渲染系统参数设置器
#define RenderingSystem_ClearRenderState                 function_446010  // 渲染系统状态清理器
#define RenderingSystem_InitializeColorMatrix            function_446080  // 渲染系统颜色矩阵初始化器
#define RenderingSystem_ApplyColorFilter                 function_4460c0  // 渲染系统颜色滤镜应用器
#define RenderingSystem_SetBlendMode                     function_4460f0  // 渲染系统混合模式设置器
#define RenderingSystem_ConvertToPremultipliedAlpha      function_446120  // 渲染系统预乘Alpha代码分析器
#define RenderingSystem_SetStandardBlendMode             function_446160  // 渲染系统标准混合模式设置器
#define RenderingSystem_SetColorValue                    function_4461b0  // 渲染系统颜色值设置器
#define RenderingSystem_SetDefaultColor                  function_4462a0  // 渲染系统默认颜色设置器
#define RenderingSystem_ClearRenderState2                function_4462e0  // 渲染系统状态清理器2
#define RenderingSystem_SetAdditiveBlendMode             function_4463b0  // 渲染系统加法混合模式设置器
#define RenderingSystem_SetSubtractiveBlendMode          function_4463f0  // 渲染系统减法混合模式设置器
#define RenderingSystem_ApplyCustomColor                 function_446320  // 渲染系统自定义颜色应用器
#define RenderingSystem_ClearRenderState3                function_446370  // 渲染系统状态清理器3
#define RenderingSystem_SetAlphaBlendMode               function_446430  // 渲染系统Alpha混合模式设置器
// 渲染系统像素和颜色数据操作函数
#define RenderingSystem_SetPixelColor                   function_446480  // 渲染系统像素颜色设置器
#define RenderingSystem_CopyColorData                   function_446610  // 渲染系统颜色数据复制器
#define RenderingSystem_SetColorData                    function_446650  // 渲染系统颜色数据设置器
#define RenderingSystem_ApplyColorToAll                 function_446690  // 渲染系统全局颜色应用器
#define RenderingSystem_GetPixelColor                   function_446760  // 渲染系统像素颜色获取器
#define RenderingSystem_AdjustColorBrightness            function_446810  // 渲染系统颜色亮度调整器
#define RenderingSystem_AdjustColorSaturation           function_44682c  // 渲染系统颜色饱和度调整器
#define RenderingSystem_InvalidateColorCache             function_4468f7  // 渲染系统颜色缓存失效器
// 渲染系统效果和资源管理函数
#define RenderingSystem_ProcessRenderEffect              function_446960  // 渲染系统渲染效果处理器
#define RenderingSystem_RemoveColorEntry                 function_446a60  // 渲染系统颜色条目移除器
#define RenderingSystem_QueryColorData                   function_446b20  // 渲染系统颜色数据查询器
#define RenderingSystem_AllocateColorBuffer              function_446ba0  // 渲染系统颜色缓冲区分配器
#define RenderingSystem_GetColorBuffer                   function_446ca0  // 渲染系统颜色缓冲区获取器
#define RenderingSystem_GetColorBufferEx                 function_446d20  // 渲染系统颜色缓冲区扩展获取器
#define RenderingSystem_SetResourcePointer              function_446dc0  // 渲染系统资源指针设置器
#define RenderingSystem_GetResourcePointer              function_446e70  // 渲染系统资源指针获取器
#define RenderingSystem_GetMainResourcePointer           function_446f00  // 渲染系统主资源指针获取器
#define RenderingSystem_UpdateResourcePointer            function_446fa0  // 渲染系统资源指针更新器
#define RenderingSystem_SetResourceParameters            function_446fd0  // 渲染系统资源参数设置器
/*===================================================================================
    技术说明
===================================================================================*/
/*
    渲染系统高级颜色处理和数据转换模块技术说明：
    1. 模块概述：
       - 本模块是渲染系统的核心颜色处理组件
       - 包含35个高级函数，涵盖颜色处理、数据转换、资源管理等
       - 提供完整的颜色空间转换和格式处理功能
    2. 核心功能：
       - 颜色空间转换：浮点颜色与整数颜色相互转换
       - 颜色格式处理：ARGB、RGBA等格式的转换和处理
       - 资源管理：内存分配、缓冲区创建、资源释放
       - 颜色调整：亮度、饱和度、对比度等调整
       - 混合模式：标准混合、加法混合、减法混合等
       - 像素操作：像素颜色设置、获取、批量处理
    3. 技术特点：
       - 高精度颜色处理：支持浮点颜色值转换
       - 多格式支持：支持多种颜色格式转换
       - 高性能：优化的颜色处理算法
       - 内存安全：完善的内存管理机制
       - 灵活性：支持多种颜色调整模式
    4. 使用场景：
       - 3D游戏引擎的渲染管线
       - 图形用户界面的颜色处理
       - 图像处理和滤镜效果
       - 多媒体应用的颜色管理
       - 实时渲染系统
    5. 性能优化：
       - 批量颜色处理减少函数调用开销
       - 颜色值缓存提高处理效率
       - 优化的转换算法提高性能
       - 内存池技术减少内存分配开销
    6. 注意事项：
       - 颜色值范围：浮点颜色值应在0.0-1.0范围内
       - 内存管理：正确分配和释放颜色缓冲区
       - 格式兼容：确保颜色格式转换的正确性
       - 性能考虑：避免在渲染循环中进行大量颜色转换
    7. 依赖关系：
       - 依赖于底层图形API（如DirectX/OpenGL）
       - 依赖于系统内存管理函数
       - 依赖于数学运算库
       - 依赖于渲染系统核心模块
*/