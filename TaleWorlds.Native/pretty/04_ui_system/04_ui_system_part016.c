#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part016.c - UI系统高级动画处理和渲染模块
// 包含14个核心函数：UI系统动画处理器、UI系统初始化器、UI系统渲染器、UI系统错误处理器等
// 主要功能：UI动画处理、组件初始化、渲染管理、错误处理、动画参数查找、内存管理等

// 常量定义
#define UI_ANIMATION_THRESHOLD 1.001358e-05f
#define UI_ANIMATION_MAX_VALUE 0.99999f
#define UI_WIDGET_STRUCT_SIZE 0x1358
#define UI_CONTROL_BLOCK_SIZE 0x4d6
#define UI_FLOAT_PRECISION 0.0001f
#define UI_ALPHA_FULL 1.0f
#define UI_ALPHA_ZERO 0.0f
#define UI_WIDGET_COUNT 4
#define UI_SUBWIDGET_COUNT 0x12
#define UI_RENDER_BLOCK_SIZE 0x104
#define UI_DATA_INDEX_SIZE 8
#define UI_ANIMATION_POINTER_COUNT 10
#define UI_WIDGET_SEARCH_COUNT 2
#define UI_BLEND_FACTOR_DEFAULT 0.9f
#define UI_ANIMATION_SPEED_MULTIPLIER 6.0f
#define UI_ANIMATION_OFFSET 15.0f
#define UI_ANIMATION_SCALE 10.0f
#define UI_TRANSITION_SPEED_FAST 2.0f
#define UI_TRANSITION_SPEED_SLOW 4.0f
#define UI_INTERPOLATION_FACTOR 3.0f
#define UI_DEFAULT_THRESHOLD 0.5f
#define UI_SENSITIVE_THRESHOLD 0.1f
#define UI_WIDGET_CLEANUP_THRESHOLD 0.001f
#define UI_WIDGET_CLEANUP_SPEED 4.0f
#define UI_ANIMATION_UPDATE_SPEED 5.0f
#define UI_MODULATION_SPEED 4.0f
#define UI_WIDGET_LIFETIME_SPEED 5.0f
#define UI_WIDGET_LIFETIME_SENSITIVE_SPEED 4.0f
#define UI_FRAME_MODULATION_SPEED 4.0f
#define UI_WIDGET_STATE_TRANSITION_SPEED 5.0f
#define UI_WIDGET_STATE_SENSITIVE_SPEED 4.0f
#define UI_ABS_MASK 0x7fffffff
#define UI_FLAG_MASK 0xfffffffd
#define UI_INDEX_MASK 0x1f
#define UI_RENDER_FLAG 0x1010000
#define UI_MAGIC_NUMBER_1 0x7149f2ca
#define UI_MAGIC_NUMBER_2 0x7f7fffff
#define UI_ERROR_MASK 0x80000000
#define UI_MAX_WIDGET_INDEX 9
#define UI_SPECIAL_WIDGET_INDEX_1 5
#define UI_SPECIAL_WIDGET_INDEX_2 7
#define UI_SPECIAL_WIDGET_RANGE_1 2
#define UI_MEMORY_BLOCK_SIZE 0xc88
#define UI_WIDGET_TABLE_OFFSET 0x198
#define UI_ANIMATION_TABLE_OFFSET 0x30
#define UI_WIDGET_ARRAY_SIZE 400
#define UI_DEFAULT_HASH_MASK 0xfffffffffffffffe
#define UI_ANIMATION_PARAM_OFFSET 0x150
#define UI_CONTEXT_OFFSET_60 0x60
#define UI_CONTEXT_OFFSET_6C 0x6c
#define UI_CONTEXT_OFFSET_6150 0x6150
#define UI_WIDGET_PROPERTIES_OFFSET 0x9c
#define UI_WIDGET_DATA_OFFSET 10
#define UI_WIDGET_THRESHOLD_OFFSET 0xe82
#define UI_WIDGET_CONTROL_OFFSET 0x4d6
#define UI_RENDER_CONTEXT_OFFSET 0x208
#define UI_WIDGET_CHAR_OFFSET 100
#define UI_WIDGET_OFFSET_1298 0x1298
#define UI_WIDGET_OFFSET_1C 0x1c
#define UI_WIDGET_OFFSET_20 0x20
#define UI_ANIMATION_BLEND_OFFSET 0x188
#define UI_WIDGET_LIFETIME_OFFSET 0x24
#define UI_WIDGET_STATE_OFFSET 0x3c
#define UI_WIDGET_TRANSITION_OFFSET 0x44
#define UI_WIDGET_BLEND_OFFSET 0x40
#define UI_WIDGET_SENSITIVITY_OFFSET 0x20
#define UI_WIDGET_FLAG_OFFSET_28 0x28
#define UI_WIDGET_FLAG_OFFSET_29 0x29
#define UI_WIDGET_VALUE_OFFSET_18 0x18
#define UI_WIDGET_VALUE_OFFSET_1C 0x1c
#define UI_WIDGET_VALUE_OFFSET_34 0x34
#define UI_WIDGET_VALUE_OFFSET_38 0x38
#define UI_WIDGET_VALUE_OFFSET_30 0x30
#define UI_WIDGET_ANIMATION_OFFSET 0x2c
#define UI_WIDGET_TARGET_OFFSET 0x14
#define UI_WIDGET_CURRENT_OFFSET 0x10
#define UI_WIDGET_SPEED_OFFSET 0x1c
#define UI_WIDGET_PARAM_OFFSET_C 0xc
#define UI_WIDGET_PARAM_OFFSET_8 0x8
#define UI_WIDGET_TABLE_OFFSET_C78 0xc78
#define UI_WIDGET_PARAM_OFFSET_4 0x4
#define UI_WIDGET_PARAM_OFFSET_38 0x38
#define UI_WIDGET_PARAM_OFFSET_3C 0x3c
#define UI_WIDGET_PARAM_OFFSET_40 0x40
#define UI_WIDGET_PARAM_OFFSET_44 0x44
#define UI_WIDGET_RENDER_OFFSET_58 0x58
#define UI_WIDGET_RENDER_OFFSET_40 0x40
#define UI_WIDGET_RENDER_OFFSET_38 0x38
#define UI_WIDGET_RENDER_OFFSET_3C 0x3c
#define UI_WIDGET_RENDER_OFFSET_44 0x44
#define UI_WIDGET_ERROR_OFFSET_20 0x20

// 全局变量
static uint64_t g_uiSystemHashMask = 0;
static void *g_uiSystemVTable = NULL;
static float g_uiSystemDefaultValues[20] = {0};

// 函数别名定义
#define ui_system_animate_widgets FUN_18065bba0
#define ui_system_animate_widgets_optimized FUN_18065bbcf
#define ui_system_no_operation FUN_18065bd4f
#define ui_system_initialize_widgets FUN_18065bd60
#define ui_system_handle_error FUN_18065bf60
#define ui_system_handle_error_alt FUN_18065c070
#define ui_system_update_animations FUN_18065c20a
#define ui_system_set_state FUN_18065c8ba
#define ui_system_initialization_complete FUN_18065c8f0
#define ui_system_cleanup_widgets FUN_18065cb80
#define ui_system_cleanup_widgets_optimized FUN_18065cb98
#define ui_system_set_widget_count FUN_18065cbfa
#define ui_system_render FUN_18065cc10
#define ui_system_find_widget FUN_18065cec0
#define ui_system_manage_widget_memory FUN_18065cf30
#define ui_system_find_animation_param FUN_18065cf70
#define ui_system_process_advanced_animation FUN_18065d0a0

// 前向声明
void ui_system_error_handler(uint errorCode);
void ui_system_complete_initialization(void);
void ui_system_complete_render(uint64_t renderHash);
void ui_system_swap_widgets(int64_t widget1, int64_t widget2);
void ui_system_process_animation(int64_t widgetPtr, int64_t *stackContext, uint64_t contextPtr, int widgetIndex, int8_t *renderContext);
float ui_system_get_animation_value(int64_t animationPtr, uint value);
float ui_system_get_animation_value_alt(int64_t animationPtr, uint value);

// UI系统动画处理器 - 处理UI组件动画和插值
// 该函数实现了UI动画的平滑过渡，包括权重计算、插值处理和边界检查
void ui_system_animate_widgets(int64_t uiContext, int64_t animationData, float *outputBuffer, char frameCount)
{
  uint64_t animationMask;
  int64_t widgetCount;
  uint64_t widgetIndex;
  float *widgetData;
  uint64_t frameIndex;
  int64_t processedWidgets;
  int64_t remainingWidgets;
  float smoothFactor;
  float animationValue;
  
  widgetCount = (int64_t)*(int *)(uiContext + UI_CONTEXT_OFFSET_60);
  if (*(int *)(uiContext + UI_CONTEXT_OFFSET_60) == 0) {
    if ('\0' < frameCount) {
      for (widgetCount = (int64_t)frameCount; widgetCount != 0; widgetCount = widgetCount + -1) {
        *outputBuffer = UI_ALPHA_ZERO;
        outputBuffer = outputBuffer + 1;
      }
      return;
    }
  }
  else {
    processedWidgets = 0;
    animationMask = *(uint64_t *)(animationData + UI_ANIMATION_PARAM_OFFSET);
    animationValue = UI_ALPHA_FULL;
    if (3 < widgetCount) {
      widgetData = (float *)(uiContext + UI_CONTEXT_OFFSET_6C);
      frameIndex = (widgetCount - 4U >> 2) + 1;
      processedWidgets = frameIndex * 4;
      do {
        if (((int)widgetData[2] - 2U < 2) && (animationValue = animationValue - *widgetData, animationValue <= UI_ALPHA_ZERO)) {
          animationValue = UI_ALPHA_ZERO;
        }
        if (((int)widgetData[UI_WIDGET_CONTROL_OFFSET] - 2U < 2) && (animationValue = animationValue - widgetData[UI_WIDGET_THRESHOLD_OFFSET], animationValue <= UI_ALPHA_ZERO)) {
          animationValue = UI_ALPHA_ZERO;
        }
        if (((int)widgetData[UI_WIDGET_CONTROL_OFFSET * 2] - 2U < 2) && (animationValue = animationValue - widgetData[UI_WIDGET_THRESHOLD_OFFSET * 2], animationValue <= UI_ALPHA_ZERO)) {
          animationValue = UI_ALPHA_ZERO;
        }
        if (((int)widgetData[UI_WIDGET_CONTROL_OFFSET * 3] - 2U < 2) && (animationValue = animationValue - widgetData[UI_WIDGET_THRESHOLD_OFFSET * 3], animationValue <= UI_ALPHA_ZERO)) {
          animationValue = UI_ALPHA_ZERO;
        }
        widgetData = widgetData + UI_WIDGET_STRUCT_SIZE / sizeof(float);
        frameIndex = frameIndex + -1;
      } while (frameIndex != 0);
    }
    if (processedWidgets < widgetCount) {
      widgetData = (float *)(uiContext + UI_CONTEXT_OFFSET_6C + processedWidgets * UI_WIDGET_STRUCT_SIZE);
      widgetCount = widgetCount - processedWidgets;
      do {
        if (((int)widgetData[2] - 2U < 2) && (animationValue = animationValue - *widgetData, animationValue <= UI_ALPHA_ZERO)) {
          animationValue = UI_ALPHA_ZERO;
        }
        widgetData = widgetData + UI_CONTROL_BLOCK_SIZE / sizeof(float);
        widgetCount = widgetCount + -1;
      } while (widgetCount != 0);
    }
    smoothFactor = *(float *)(uiContext + UI_CONTEXT_OFFSET_6150);
    frameIndex = (uint64_t)(uint)(int)frameCount;
    animationValue = ((smoothFactor * UI_ANIMATION_SPEED_MULTIPLIER - UI_ANIMATION_OFFSET) * smoothFactor + UI_ANIMATION_SCALE) * smoothFactor * smoothFactor * smoothFactor * animationValue;
    if ('\0' < frameCount) {
      widgetIndex = 1;
      do {
        if ((animationMask & widgetIndex) == 0) {
LAB_ui_animation_skip:
          smoothFactor = UI_ALPHA_ZERO;
        }
        else if (UI_ANIMATION_THRESHOLD < animationValue) {
          smoothFactor = UI_ALPHA_FULL - animationValue;
          if (UI_ANIMATION_MAX_VALUE < animationValue) goto LAB_ui_animation_skip;
        }
        else {
          smoothFactor = UI_ALPHA_FULL;
        }
        *outputBuffer = smoothFactor;
        outputBuffer = outputBuffer + 1;
        widgetIndex = widgetIndex << 1 | (uint64_t)((int64_t)widgetIndex < 0);
        frameIndex = frameIndex - 1;
      } while (frameIndex != 0);
    }
  }
  return;
}

// UI系统动画处理器优化版 - 优化后的UI动画处理函数
// 该函数是ui_system_animate_widgets的优化版本，使用寄存器变量提升性能
void ui_system_animate_widgets_optimized(int64_t uiContext, int64_t animationData, float *outputBuffer)
{
  uint64_t animationMask;
  int64_t widgetCount;
  uint64_t widgetIndex;
  float *widgetData;
  uint64_t frameIndex;
  int64_t processedWidgets;
  int64_t remainingWidgets;
  char frameCount;
  int64_t contextReg;
  float smoothFactor;
  float animationValue;
  
  processedWidgets = 0;
  animationMask = *(uint64_t *)(animationData + UI_ANIMATION_PARAM_OFFSET);
  animationValue = UI_ALPHA_FULL;
  if (3 < widgetCount) {
    widgetData = (float *)(uiContext + UI_CONTEXT_OFFSET_6C);
    frameIndex = (widgetCount - 4U >> 2) + 1;
    processedWidgets = frameIndex * 4;
    do {
      if (((int)widgetData[2] - 2U < 2) && (animationValue = animationValue - *widgetData, animationValue <= UI_ALPHA_ZERO)) {
        animationValue = UI_ALPHA_ZERO;
      }
      if (((int)widgetData[UI_WIDGET_CONTROL_OFFSET] - 2U < 2) && (animationValue = animationValue - widgetData[UI_WIDGET_THRESHOLD_OFFSET], animationValue <= UI_ALPHA_ZERO)) {
        animationValue = UI_ALPHA_ZERO;
      }
      if (((int)widgetData[UI_WIDGET_CONTROL_OFFSET * 2] - 2U < 2) && (animationValue = animationValue - widgetData[UI_WIDGET_THRESHOLD_OFFSET * 2], animationValue <= UI_ALPHA_ZERO)) {
        animationValue = UI_ALPHA_ZERO;
      }
      if (((int)widgetData[UI_WIDGET_CONTROL_OFFSET * 3] - 2U < 2) && (animationValue = animationValue - widgetData[UI_WIDGET_THRESHOLD_OFFSET * 3], animationValue <= UI_ALPHA_ZERO)) {
        animationValue = UI_ALPHA_ZERO;
      }
      widgetData = widgetData + UI_WIDGET_STRUCT_SIZE / sizeof(float);
      frameIndex = frameIndex + -1;
    } while (frameIndex != 0);
  }
  if (processedWidgets < widgetCount) {
    widgetData = (float *)(contextReg + UI_CONTEXT_OFFSET_6C + processedWidgets * UI_WIDGET_STRUCT_SIZE);
    processedWidgets = widgetCount - processedWidgets;
    do {
      if (((int)widgetData[2] - 2U < 2) && (animationValue = animationValue - *widgetData, animationValue <= UI_ALPHA_ZERO)) {
        animationValue = UI_ALPHA_ZERO;
      }
      widgetData = widgetData + UI_CONTROL_BLOCK_SIZE / sizeof(float);
      processedWidgets = processedWidgets + -1;
    } while (processedWidgets != 0);
  }
  smoothFactor = *(float *)(contextReg + UI_CONTEXT_OFFSET_6150);
  frameIndex = (uint64_t)(uint)(int)frameCount;
  animationValue = ((smoothFactor * UI_ANIMATION_SPEED_MULTIPLIER - UI_ANIMATION_OFFSET) * smoothFactor + UI_ANIMATION_SCALE) * smoothFactor * smoothFactor * smoothFactor * animationValue;
  if ('\0' < frameCount) {
    widgetIndex = 1;
    do {
      if ((animationMask & widgetIndex) == 0) {
LAB_ui_animation_optimized_skip:
        smoothFactor = UI_ALPHA_ZERO;
      }
      else if (UI_ANIMATION_THRESHOLD < animationValue) {
        smoothFactor = UI_ALPHA_FULL - animationValue;
        if (UI_ANIMATION_MAX_VALUE < animationValue) goto LAB_ui_animation_optimized_skip;
      }
      else {
        smoothFactor = UI_ALPHA_FULL;
      }
      *outputBuffer = smoothFactor;
      outputBuffer = outputBuffer + 1;
      widgetIndex = widgetIndex << 1 | (uint64_t)((int64_t)widgetIndex < 0);
      frameIndex = frameIndex - 1;
    } while (frameIndex != 0);
  }
  return;
}

// UI系统无操作函数 - 空操作函数
// 该函数是一个空操作，用于系统初始化或占位
void ui_system_no_operation(void)
{
  return;
}

// UI系统组件初始化器 - 初始化UI组件数据结构
// 该函数负责初始化UI组件的数据结构，设置默认值和标志位
void ui_system_initialize_widgets(int64_t uiContext)
{
  uint64_t *widgetBlock;
  int64_t blockIndex;
  int64_t subBlockIndex;
  uint64_t *subBlockPtr;
  uint64_t *dataPtr;
  int64_t dataIndex;
  
  widgetBlock = (uint64_t *)(uiContext + 0x1398);
  blockIndex = UI_WIDGET_COUNT;
  do {
    *(int32_t *)(widgetBlock + -0x266) = 0xffffffff;
    subBlockPtr = widgetBlock + -0x264;
    *(int32_t *)((int64_t)widgetBlock + -0x132c) = 0x3f800000;
    dataIndex = UI_SUBWIDGET_COUNT;
    widgetBlock[-0x265] = 0x3f800000;
    widgetBlock[-0x1b] = 0;
    do {
      *(int32_t *)(subBlockPtr + 0x20) = 0xffffffff;
      subBlockIndex = UI_DATA_INDEX_SIZE;
      dataPtr = subBlockPtr;
      do {
        *dataPtr = 0xffffffffffffffff;
        dataPtr[1] = 0xffffffffffffffff;
        dataPtr[2] = 0xffffffffffffffff;
        dataPtr[3] = 0xffffffffffffffff;
        dataPtr[4] = 0xffffffffffffffff;
        dataPtr[5] = 0xffffffffffffffff;
        dataPtr[6] = 0xffffffffffffffff;
        dataPtr[7] = 0xffffffffffffffff;
        subBlockIndex = subBlockIndex + -1;
        dataPtr = dataPtr + 8;
      } while (subBlockIndex != 0);
      subBlockPtr = (uint64_t *)((int64_t)subBlockPtr + UI_RENDER_BLOCK_SIZE);
      dataIndex = dataIndex + -1;
    } while (dataIndex != 0);
    widgetBlock[-0x1a] = 0;
    widgetBlock[-0x19] = 0;
    *(int32_t *)(widgetBlock + -0x17) = UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0xb4) = UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -0x16) = UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0xac) = UI_MAGIC_NUMBER_2;
    widgetBlock[-0x18] = UI_MAGIC_NUMBER_1 * 0x100000000 + UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -0x15) = UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0xa4) = UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -0x14) = UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0x9c) = UI_MAGIC_NUMBER_2;
    *(int16_t *)(widgetBlock + -0x13) = 0;
    *(uint64_t *)((int64_t)widgetBlock + -0x94) = 0;
    *(uint64_t *)((int64_t)widgetBlock + -0x8c) = 0;
    *(uint64_t *)((int64_t)widgetBlock + -0x84) = 0;
    *(uint64_t *)((int64_t)widgetBlock + -0x7c) = 0;
    *(int32_t *)((int64_t)widgetBlock + -0x74) = 0;
    *(int8_t *)(widgetBlock + -0xe) = 0;
    *(uint64_t *)((int64_t)widgetBlock + -0x6c) = 0;
    *(uint64_t *)((int64_t)widgetBlock + -100) = 0;
    *(int32_t *)((int64_t)widgetBlock + -0x54) = UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -10) = UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0x4c) = UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -9) = UI_MAGIC_NUMBER_2;
    *(uint64_t *)((int64_t)widgetBlock + -0x5c) = UI_MAGIC_NUMBER_1 * 0x100000000 + UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0x44) = UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -8) = UI_MAGIC_NUMBER_1;
    *(int32_t *)((int64_t)widgetBlock + -0x3c) = UI_MAGIC_NUMBER_1;
    *(int32_t *)(widgetBlock + -7) = UI_MAGIC_NUMBER_2;
    *(int16_t *)((int64_t)widgetBlock + -0x34) = 0;
    widgetBlock[-6] = 0;
    widgetBlock[-5] = 0;
    widgetBlock[-4] = 0;
    widgetBlock[-3] = 0;
    *(int32_t *)(widgetBlock + -2) = 0;
    *(int8_t *)((int64_t)widgetBlock + -0xc) = 0;
    widgetBlock[-1] = 0;
    *widgetBlock = 0;
    *(int32_t *)(widgetBlock + 1) = 0;
    *(int32_t *)((int64_t)widgetBlock + 0xc) = UI_RENDER_FLAG;
    widgetBlock[2] = 0;
    widgetBlock[3] = 0;
    *(int32_t *)(widgetBlock + 4) = 0;
    *(int32_t *)((int64_t)widgetBlock + 0x24) = UI_RENDER_FLAG;
    widgetBlock = widgetBlock + 0x26b;
    blockIndex = blockIndex + -1;
  } while (blockIndex != 0);
  func_0x000180668820(uiContext + 0x4dc8);
  *(int32_t *)(uiContext + UI_CONTEXT_OFFSET_60) = 0;
  *(uint64_t *)(uiContext + 0x6120) = 0;
  return;
}

// UI系统错误处理器 - 处理UI系统错误
// 该函数负责处理UI系统中的错误情况，调用错误处理函数
void ui_system_handle_error(int64_t errorContext)
{
  // 调用错误处理函数
  ui_system_error_handler(*(uint *)(errorContext + UI_WIDGET_ERROR_OFFSET) ^ UI_ERROR_MASK);
}

// UI系统错误处理器替代版 - 错误处理的替代实现
// 该函数是ui_system_handle_error的替代版本，功能相同
void ui_system_handle_error_alt(int64_t errorContext)
{
  // 调用错误处理函数
  ui_system_error_handler(*(uint *)(errorContext + UI_WIDGET_ERROR_OFFSET) ^ UI_ERROR_MASK);
}

// UI系统动画更新器 - 更新UI动画状态
// 该函数负责更新UI动画状态，处理复杂的动画逻辑和矩阵变换
void ui_system_update_animations(int64_t uiContext)
{
  float controlX;
  float controlY;
  float controlZ;
  float controlW;
  float animationSpeed;
  int64_t frameContext;
  int8_t *renderContext;
  float *matrixData;
  char *widgetData;
  int widgetIndex;
  float *widgetProperties;
  float animationThreshold;
  float animationValue;
  int64_t stackContext;
  int64_t animationContext;
  int32_t renderFlags;
  int32_t animationType;
  int32_t widgetFlags;
  int32_t controlFlags;
  uint64_t contextPtr;
  int8_t *widgetPtr;
  char *widgetCharPtr;
  float matrixValue;
  float animationProgress;
  
  widgetCharPtr = (char *)(uiContext + 0x1300);
  do {
    widgetProperties = (float *)(widgetCharPtr + UI_WIDGET_PROPERTIES_OFFSET);
    widgetIndex = 0;
    widgetData = widgetCharPtr;
    do {
      if (*widgetData != '\0') {
        if (*(char *)((int64_t)widgetProperties + UI_WIDGET_DATA_OFFSET) == '\0') {
          animationThreshold = UI_ALPHA_ZERO;
        }
        else {
          animationThreshold = widgetProperties[1] * 0.05f;
        }
        if (animationThreshold + widgetProperties[-3] < *widgetProperties) {
          animationValue = matrixData[9];
          controlX = matrixData[10];
          controlY = matrixData[6];
          matrixValue = matrixData[2];
          controlZ = matrixData[8];
          controlW = matrixData[4];
          animationSpeed = matrixData[5];
          animationProgress = animationSpeed * controlX - animationValue * controlY;
          animationThreshold = animationValue * matrixValue;
          animationValue =
               ((((animationSpeed * matrixData[0xe] - matrixData[0xd] * controlY) * controlZ -
                 controlW * (animationValue * matrixData[0xe] - matrixData[0xd] * controlX)) -
                animationProgress * matrixData[0xc]) +
               (controlZ * controlY - controlW * matrixData[10]) * *(float *)(widgetData + UI_WIDGET_OFFSET_1C) +
               *(float *)(widgetData + UI_WIDGET_OFFSET_20) * animationProgress) *
               (UI_ALPHA_FULL / ((matrixData[1] * controlY - animationSpeed * animationThreshold) * controlZ +
                      *matrixData * animationProgress + controlW * (animationThreshold - matrixData[1] * controlX))
               );
          renderFlags = *(int32_t *)(uiContext + 0x44);
          animationContext = uiContext + 0x6178;
          animationType = *(int32_t *)(uiContext + 0x40);
          stackContext = uiContext + UI_CONTEXT_OFFSET_6150;
          widgetFlags = *(int32_t *)(uiContext + 0x38);
          controlFlags = 0;
          contextPtr = 0;
          widgetPtr = renderContext;
          ui_system_process_animation(widgetCharPtr + UI_WIDGET_OFFSET_1298, &stackContext,
                        *(uint64_t *)(frameContext + UI_RENDER_CONTEXT_OFFSET), widgetIndex, *renderContext);
          // 调用错误处理函数
          ui_system_error_handler(*(int32_t *)(stackContext + UI_WIDGET_ERROR_OFFSET));
        }
      }
      renderContext = renderContext + 1;
      widgetIndex = widgetIndex + 1;
      widgetData = widgetData + UI_WIDGET_CHAR_OFFSET;
      widgetProperties = widgetProperties + 6;
    } while (widgetIndex < 2);
    widgetCharPtr = widgetCharPtr + UI_WIDGET_STRUCT_SIZE;
    contextPtr._4_4_ = contextPtr._4_4_ + 1;
    renderContext = widgetPtr;
    if (*(int *)(uiContext + UI_CONTEXT_OFFSET_60) <= contextPtr._4_4_) {
      *(int32_t *)(uiContext + 0x58) = animationProgress._4_4_;
      return;
    }
  } while( true );
}

// UI系统状态设置器 - 设置UI系统状态
// 该函数用于设置UI系统的状态值
void ui_system_set_state(int32_t stateValue)
{
  int64_t contextReg;
  
  *(int32_t *)(contextReg + UI_WIDGET_RENDER_OFFSET_58) = stateValue;
  return;
}

// UI系统初始化完成函数 - 标记初始化完成
// 该函数用于标记UI系统初始化完成
void ui_system_initialization_complete(void)
{
  // 调用初始化完成函数
  ui_system_complete_initialization();
}

// UI系统组件清理器 - 清理无效的UI组件
// 该函数负责清理无效的UI组件，重新排序有效组件
void ui_system_cleanup_widgets(int64_t uiContext)
{
  int widgetCount;
  float *widgetData;
  int validCount;
  float threshold;
  
  validCount = 0;
  if (0 < *(int *)(uiContext + UI_CONTEXT_OFFSET_60)) {
    threshold = UI_ALPHA_ZERO;
    widgetData = (float *)(uiContext + UI_CONTEXT_OFFSET_6C);
    widgetCount = validCount;
    do {
      if (threshold < *widgetData) {
        if (validCount < widgetCount) {
          ui_system_swap_widgets((int64_t)validCount * UI_WIDGET_STRUCT_SIZE + 0x68 + uiContext,
                              uiContext + 0x68 + (int64_t)widgetCount * UI_WIDGET_STRUCT_SIZE);
        }
        validCount = validCount + 1;
      }
      widgetCount = widgetCount + 1;
      widgetData = widgetData + UI_CONTROL_BLOCK_SIZE / sizeof(float);
    } while (widgetCount < *(int *)(uiContext + UI_CONTEXT_OFFSET_60));
    *(int *)(uiContext + UI_CONTEXT_OFFSET_60) = validCount;
    return;
  }
  *(int32_t *)(uiContext + UI_CONTEXT_OFFSET_60) = 0;
  return;
}

// UI系统组件清理器优化版 - 清理无效UI组件的优化版本
// 该函数是ui_system_cleanup_widgets的优化版本，使用寄存器变量提升性能
void ui_system_cleanup_widgets_optimized(int64_t uiContext)
{
  int widgetCount;
  float *widgetData;
  int64_t contextReg;
  int validCount;
  float threshold;
  
  threshold = UI_ALPHA_ZERO;
  widgetData = (float *)(uiContext + UI_CONTEXT_OFFSET_6C);
  do {
    if (threshold < *widgetData) {
      if (validCount < widgetCount) {
        ui_system_swap_widgets((int64_t)validCount * UI_WIDGET_STRUCT_SIZE + 0x68 + contextReg,
                            contextReg + 0x68 + (int64_t)widgetCount * UI_WIDGET_STRUCT_SIZE);
      }
      validCount = validCount + 1;
    }
    widgetCount = widgetCount + 1;
    widgetData = widgetData + UI_CONTROL_BLOCK_SIZE / sizeof(float);
  } while (widgetCount < *(int *)(contextReg + UI_CONTEXT_OFFSET_60));
  *(int *)(contextReg + UI_CONTEXT_OFFSET_60) = validCount;
  return;
}

// UI系统组件计数设置器 - 设置UI组件数量
// 该函数用于设置UI系统中组件的数量
void ui_system_set_widget_count(int64_t uiContext, int32_t widgetCount)
{
  *(int32_t *)(uiContext + UI_CONTEXT_OFFSET_60) = widgetCount;
  return;
}

// UI系统渲染器 - 渲染UI系统
// 该函数负责渲染UI系统，处理渲染上下文和参数设置
void ui_system_render(int64_t uiContext)
{
  int64_t *renderContext;
  uint64_t renderIndex;
  uint renderParam;
  int32_t renderFlags;
  int8_t renderStack[32];
  void *renderPointers[UI_ANIMATION_POINTER_COUNT];
  uint64_t renderHash;
  uint64_t renderVar;
  
  renderHash = g_uiSystemHashMask ^ (uint64_t)renderStack;
  renderPointers[0] = &g_uiSystemDefaultValues[0];
  renderPointers[1] = &g_uiSystemDefaultValues[1];
  renderPointers[2] = &g_uiSystemDefaultValues[2];
  renderPointers[3] = &g_uiSystemDefaultValues[3];
  renderPointers[4] = &g_uiSystemDefaultValues[4];
  renderPointers[5] = &g_uiSystemDefaultValues[5];
  renderPointers[6] = &g_uiSystemDefaultValues[6];
  renderPointers[7] = &g_uiSystemDefaultValues[7];
  renderPointers[8] = &g_uiSystemDefaultValues[8];
  renderPointers[9] = &g_uiSystemDefaultValues[9];
  renderContext = (int64_t *)(**(code **)(g_uiSystemVTable + 0x70))(g_uiSystemVTable, &g_uiSystemDefaultValues[10]);
  renderContext = (int64_t *)(**(code **)(*renderContext + 0x28))(renderContext, *(int32_t *)(uiContext + 0x38));
  (**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[11]);
  renderContext = (int64_t *)(**(code **)(g_uiSystemVTable + 0x70))(g_uiSystemVTable, &g_uiSystemDefaultValues[12]);
  renderContext = (int64_t *)(**(code **)(*renderContext + 0x28))(renderContext, *(int32_t *)(uiContext + 0x3c));
  (**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[11]);
  renderContext = (int64_t *)(**(code **)(g_uiSystemVTable + 0x70))(g_uiSystemVTable, &g_uiSystemDefaultValues[13]);
  renderContext = (int64_t *)(**(code **)(*renderContext + 0x28))(renderContext, *(int32_t *)(uiContext + 0x40));
  (**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[11]);
  renderContext = (int64_t *)(**(code **)(g_uiSystemVTable + 0x70))(g_uiSystemVTable, &g_uiSystemDefaultValues[14]);
  renderContext = (int64_t *)(**(code **)(*renderContext + 0x28))(renderContext, *(int32_t *)(uiContext + 0x44));
  (**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[11]);
  renderIndex = 0;
  renderVar = renderIndex;
  if (0 < *(int *)(uiContext + UI_CONTEXT_OFFSET_60)) {
    do {
      renderContext = (int64_t *)(**(code **)(g_uiSystemVTable + 0x70))(g_uiSystemVTable, &g_uiSystemDefaultValues[15]);
      renderContext = (int64_t *)(**(code **)(*renderContext + 0x28))(renderContext, *(int32_t *)(uiContext + 4));
      (**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[11]);
      renderParam = (int)renderVar + 1;
      renderVar = (uint64_t)renderParam;
    } while ((int)renderParam < *(int *)(uiContext + UI_CONTEXT_OFFSET_60));
  }
  do {
    if (UI_ALPHA_ZERO < *(float *)(uiContext + UI_CONTEXT_OFFSET_6150 + renderIndex * 4)) {
      renderContext = (int64_t *)(**(code **)(g_uiSystemVTable + 0x70))(g_uiSystemVTable, &g_uiSystemDefaultValues[16]);
      renderContext = (int64_t *)(**(code **)(*renderContext + 0x70))(renderContext, renderPointers[renderIndex]);
      renderContext = (int64_t *)(**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[17]);
      if (renderIndex == 0) {
        renderFlags = *(int32_t *)(uiContext + 0x3c);
      }
      else if ((int64_t)renderIndex < UI_MAX_WIDGET_INDEX) {
        if (renderIndex - UI_SPECIAL_WIDGET_INDEX_2 < UI_SPECIAL_WIDGET_RANGE_1) {
          renderFlags = *(int32_t *)(uiContext + 0x44);
        }
        else {
          renderFlags = *(int32_t *)(uiContext + 0x38);
        }
      }
      else {
        renderFlags = *(int32_t *)(uiContext + 0x40);
      }
      renderContext = (int64_t *)(**(code **)(*renderContext + 0x28))(renderContext, renderFlags);
      renderContext = (int64_t *)(**(code **)(*renderContext + 0x70))(renderContext, &g_uiSystemDefaultValues[18]);
      (**(code **)(*renderContext + 0x28))(renderContext, *(int32_t *)(uiContext + UI_CONTEXT_OFFSET_6150 + renderIndex * 4));
    }
    renderIndex = renderIndex + 1;
  } while ((int64_t)renderIndex < UI_ANIMATION_POINTER_COUNT);
  // 调用渲染完成函数
  ui_system_complete_render(renderHash ^ (uint64_t)renderStack);
}

// UI系统组件查找器 - 查找UI组件
// 该函数负责在组件表中查找指定的UI组件
uint64_t ui_system_find_widget(int64_t widgetTable, int widgetIndex)
{
  int64_t widgetPtr;
  int checkResult;
  int searchIndex;
  int64_t *widgetArray;
  
  searchIndex = 0;
  widgetPtr = *(int64_t *)(widgetTable + (int64_t)widgetIndex * 8);
  widgetArray = (int64_t *)(widgetPtr + UI_WIDGET_TABLE_OFFSET);
  do {
    if ((int64_t *)*widgetArray != (int64_t *)0x0) {
      checkResult = (**(code **)(*(int64_t *)*widgetArray + 0x18))();
      if (checkResult == 1) {
        return *(uint64_t *)(widgetPtr + UI_WIDGET_TABLE_OFFSET + (int64_t)searchIndex * 8);
      }
    }
    searchIndex = searchIndex + 1;
    widgetArray = widgetArray + 1;
  } while (searchIndex < UI_WIDGET_SEARCH_COUNT);
  return 0;
}

// UI系统组件内存管理器 - 管理UI组件内存
// 该函数负责管理UI组件的内存分配和释放
uint64_t * ui_system_manage_widget_memory(uint64_t *widgetPtr, uint64_t freeFlag)
{
  widgetPtr[UI_WIDGET_ARRAY_SIZE] = 0;
  *widgetPtr = &g_uiSystemDefaultValues[19];
  if ((freeFlag & 1) != 0) {
    free(widgetPtr, UI_MEMORY_BLOCK_SIZE);
  }
  return widgetPtr;
}

// UI系统动画参数查找器 - 查找动画参数
// 该函数负责在动画表中查找指定的动画参数
uint64_t ui_system_find_animation_param(int64_t animationTable, float animationValue)
{
  int checkResult;
  int64_t animationPtr;
  int64_t *animationArray;
  uint64_t animIndex;
  int64_t searchIndex;
  int searchCount;
  uint64_t animCount;
  int64_t currentAnim;
  
  animIndex = (uint64_t)*(int *)(animationTable + 0x10);
  currentAnim = animIndex * UI_ANIMATION_TABLE_OFFSET;
  animCount = animIndex;
  do {
    searchCount = 0;
    searchIndex = 0;
    animationPtr = *(int64_t *)(currentAnim + *(int64_t *)(animationTable + UI_WIDGET_TABLE_OFFSET_C78));
    animationArray = (int64_t *)(animationPtr + UI_WIDGET_TABLE_OFFSET);
    do {
      if ((int64_t *)*animationArray != (int64_t *)0x0) {
        checkResult = (**(code **)(*(int64_t *)*animationArray + 0x18))();
        if (checkResult == 1) {
          animationPtr = *(int64_t *)(animationPtr + UI_WIDGET_TABLE_OFFSET + searchIndex * 8);
          goto LAB_ui_animation_found;
        }
      }
      searchCount = searchCount + 1;
      searchIndex = searchIndex + 1;
      animationArray = animationArray + 1;
    } while (searchCount < UI_WIDGET_SEARCH_COUNT);
    animationPtr = 0;
LAB_ui_animation_found:
    if ((animationValue < *(float *)(animationPtr + UI_WIDGET_VALUE_OFFSET_10) || animationValue == *(float *)(animationPtr + UI_WIDGET_VALUE_OFFSET_10)) ||
       (*(int *)(animationTable + UI_WIDGET_PARAM_OFFSET_8) + -1 <= (int)animIndex)) {
      currentAnim = animCount * UI_ANIMATION_TABLE_OFFSET;
      do {
        searchCount = 0;
        searchIndex = 0;
        animationPtr = *(int64_t *)(currentAnim + *(int64_t *)(animationTable + UI_WIDGET_TABLE_OFFSET_C78));
        animationArray = (int64_t *)(animationPtr + UI_WIDGET_TABLE_OFFSET);
        do {
          if ((int64_t *)*animationArray != (int64_t *)0x0) {
            checkResult = (**(code **)(*(int64_t *)*animationArray + 0x18))();
            if (checkResult == 1) {
              animationPtr = *(int64_t *)(animationPtr + UI_WIDGET_TABLE_OFFSET + searchIndex * 8);
              goto LAB_ui_animation_check;
            }
          }
          searchCount = searchCount + 1;
          searchIndex = searchIndex + 1;
          animationArray = animationArray + 1;
        } while (searchCount < UI_WIDGET_SEARCH_COUNT);
        animationPtr = 0;
LAB_ui_animation_check:
        if ((*(float *)(animationPtr + UI_WIDGET_VALUE_OFFSET_C) <= animationValue) || ((int64_t)animCount < 1)) {
          return animIndex & 0xffffffff;
        }
        animIndex = (uint64_t)((int)animIndex - 1);
        animCount = animCount - 1;
        currentAnim = currentAnim + -UI_ANIMATION_TABLE_OFFSET;
      } while( true );
    }
    animIndex = (uint64_t)((int)animIndex + 1);
    animCount = animCount + 1;
    currentAnim = currentAnim + UI_ANIMATION_TABLE_OFFSET;
  } while( true );
}

// UI系统高级动画处理器 - 处理高级UI动画
// 该函数负责处理高级UI动画，包括复杂的插值、过渡和混合逻辑
void ui_system_process_advanced_animation(int64_t animationContext, float deltaTime, uint64_t animationParam, float blendFactor)
{
  float currentValue;
  uint currentIndex;
  int64_t animPtr;
  uint targetIndex;
  int widgetState;
  float transitionSpeed;
  float animationSpeed;
  int32_t animFlags;
  float sourceValue;
  float targetValue;
  float animationProgress;
  float blendProgress;
  float resultValue;
  float animThreshold;
  float animMax;
  
  currentIndex = *(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) - *(int *)(animationContext + UI_WIDGET_TARGET_OFFSET);
  targetIndex = (int)currentIndex >> 0x1f;
  if ((int)((currentIndex ^ targetIndex) - targetIndex) < 2) {
    transitionSpeed = UI_TRANSITION_SPEED_FAST;
  }
  else {
    transitionSpeed = UI_TRANSITION_SPEED_SLOW;
  }
  animMax = UI_ALPHA_FULL;
  blendProgress = (UI_INTERPOLATION_FACTOR - blendFactor) * transitionSpeed * deltaTime;
  transitionSpeed = blendProgress + *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET);
  if (UI_ALPHA_FULL <= transitionSpeed) {
    transitionSpeed = UI_ALPHA_FULL;
  }
  *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) = transitionSpeed;
  targetIndex = ui_system_find_animation_param(transitionSpeed, *(int32_t *)(animationContext + UI_WIDGET_SPEED_OFFSET));
  currentIndex = targetIndex;
  if ((1 < (int)targetIndex) &&
     (currentIndex = *(uint *)(animationContext + UI_WIDGET_PARAM_OFFSET_C), (int)*(uint *)(animationContext + UI_WIDGET_PARAM_OFFSET_C) < (int)targetIndex)) {
    currentIndex = targetIndex;
  }
  if (((currentIndex & UI_FLAG_MASK) == 0) &&
     (ABS(*(float *)(animationContext + UI_WIDGET_SPEED_OFFSET)) * 2.0f < ABS(*(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_18)))) {
    currentIndex = 1;
  }
  targetIndex = *(uint *)(animationContext + UI_WIDGET_VALUE_OFFSET_10);
  if (currentIndex != targetIndex) {
    transitionSpeed = *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET);
    if (transitionSpeed <= 0.9999f) {
      if (blendProgress + UI_FLOAT_PRECISION <= transitionSpeed) {
        if ((targetIndex != 1) || (0.5f < transitionSpeed)) {
          transitionSpeed = blendProgress * 1.5f + transitionSpeed;
          if (UI_ALPHA_FULL <= transitionSpeed) {
            transitionSpeed = UI_ALPHA_FULL;
          }
          *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) = transitionSpeed;
        }
        else {
          targetIndex = 1;
          transitionSpeed = transitionSpeed - (blendProgress + blendProgress);
          if (transitionSpeed <= UI_ALPHA_ZERO) {
            transitionSpeed = UI_ALPHA_ZERO;
          }
          *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) = transitionSpeed;
        }
      }
      else {
        *(uint *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) = currentIndex;
        *(int32_t *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) = 0;
        targetIndex = currentIndex;
      }
    }
    else {
      *(uint *)(animationContext + UI_WIDGET_TARGET_OFFSET) = targetIndex;
      *(uint *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) = currentIndex;
      *(int32_t *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) = 0;
      targetIndex = currentIndex;
    }
  }
  transitionSpeed = UI_ALPHA_ZERO;
  blendProgress = UI_ALPHA_ZERO;
  if (targetIndex == 1) {
    resultValue = 0.2f;
    animThreshold = 0.05f;
    targetIndex = 1;
  }
  else {
    animThreshold = (UI_ALPHA_FULL - blendFactor) * 3.5f + 0.4f;
    resultValue = (UI_ALPHA_FULL - blendFactor) * 4.0f + 0.5f;
  }
  animationSpeed = *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_34);
  currentValue = *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_38);
  if (animationSpeed + currentValue <= UI_ALPHA_ZERO) {
    animThreshold = resultValue;
  }
  resultValue = ABS(*(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_18));
  if (resultValue <= animThreshold) {
    if ((*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) != '\0') || ((currentValue == UI_ALPHA_ZERO && (animationSpeed == UI_ALPHA_ZERO)))) {
      if (*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_29) == '\0') {
        animThreshold = UI_DEFAULT_THRESHOLD;
      }
      else {
        animThreshold = UI_SENSITIVE_THRESHOLD;
      }
      if ((animThreshold < *(float *)(animationContext + UI_WIDGET_SENSITIVITY_OFFSET)) && (targetIndex == 1)) {
        *(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) = (char)targetIndex;
        goto LAB_ui_animation_active;
      }
      if (*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_29) == '\0') {
        animThreshold = UI_DEFAULT_THRESHOLD;
      }
      else {
        animThreshold = UI_SENSITIVE_THRESHOLD;
      }
      if ((-*(float *)(animationContext + UI_WIDGET_SENSITIVITY_OFFSET) <= animThreshold) || (targetIndex != 1)) {
        if ((currentValue == UI_ALPHA_ZERO) && (animationSpeed == UI_ALPHA_ZERO)) {
          *(int8_t *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) = 0;
        }
      }
      else {
        *(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) = (char)targetIndex;
        blendProgress = UI_ALPHA_FULL;
      }
    }
  }
  else if ((*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) == '\0') || ((animationSpeed == UI_ALPHA_ZERO && (currentValue == UI_ALPHA_ZERO)))) {
    *(int8_t *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) = 0;
    if (*(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_18) <= UI_ALPHA_ZERO) {
LAB_ui_animation_active:
      transitionSpeed = UI_ALPHA_FULL;
    }
    else {
      blendProgress = UI_ALPHA_FULL;
    }
  }
  animThreshold = *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET);
  animThreshold = (UI_INTERPOLATION_FACTOR - (animThreshold + animThreshold)) * animThreshold * animThreshold;
  if (targetIndex == 1) {
    resultValue = (float)ui_system_get_animation_value(*(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78) + UI_ANIMATION_TABLE_OFFSET, resultValue);
  }
  else {
    resultValue = (float)ui_system_get_animation_value_alt((int64_t)(int)targetIndex * UI_ANIMATION_TABLE_OFFSET + *(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78),
                                  *(int32_t *)(animationContext + UI_WIDGET_SPEED_OFFSET));
  }
  if (*(int *)(animationContext + UI_WIDGET_TARGET_OFFSET) == 1) {
    animationSpeed = (float)ui_system_get_animation_value(*(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78) + UI_ANIMATION_TABLE_OFFSET,
                                 *(uint *)(animationContext + UI_WIDGET_VALUE_OFFSET_18) & UI_ABS_MASK);
  }
  else {
    animationSpeed = (float)ui_system_get_animation_value_alt((int64_t)*(int *)(animationContext + UI_WIDGET_TARGET_OFFSET) * UI_ANIMATION_TABLE_OFFSET +
                                 *(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78), *(int32_t *)(animationContext + UI_WIDGET_SPEED_OFFSET));
  }
  animThreshold = resultValue * animThreshold + animationSpeed * (UI_ALPHA_FULL - animThreshold);
  if (animThreshold <= UI_ALPHA_ZERO) {
LAB_ui_animation_zero:
    resultValue = UI_ALPHA_ZERO;
  }
  else {
    animPtr = ui_system_find_widget((int64_t)*(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) * UI_ANIMATION_TABLE_OFFSET + *(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78)
                          , 0);
    resultValue = *(float *)(animPtr + UI_WIDGET_PARAM_OFFSET_8) / animThreshold;
    if ((resultValue == UI_ALPHA_ZERO) ||
       (resultValue = ABS(*(float *)(animationContext + UI_WIDGET_SPEED_OFFSET)) / ((blendFactor * UI_BLEND_FACTOR_DEFAULT + 0.1f) * resultValue), resultValue < UI_ALPHA_ZERO))
    goto LAB_ui_animation_zero;
    if (UI_ALPHA_FULL <= resultValue) {
      resultValue = UI_ALPHA_FULL;
    }
  }
  if ((*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) == '\0') && ((transitionSpeed != UI_ALPHA_ZERO || (blendProgress != UI_ALPHA_ZERO)))) {
    animPtr = ui_system_find_widget((int64_t)*(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) * UI_ANIMATION_TABLE_OFFSET + *(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78)
                          , 2);
    animThreshold = (*(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_18) * animThreshold) / *(float *)(animPtr + UI_WIDGET_PARAM_OFFSET_8);
    if (UI_ALPHA_ZERO <= *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_18)) {
      if (UI_ALPHA_FULL <= animThreshold) {
        animThreshold = UI_ALPHA_FULL;
      }
      blendProgress = blendProgress * animThreshold * *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET);
    }
    else {
      animThreshold = -animThreshold;
      if (UI_ALPHA_FULL <= animThreshold) {
        animThreshold = UI_ALPHA_FULL;
      }
      transitionSpeed = transitionSpeed * animThreshold * *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET);
    }
  }
  animThreshold = *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_38);
  animationSpeed = UI_WIDGET_LIFETIME_SPEED;
  if (animThreshold <= transitionSpeed) {
    if (animThreshold < transitionSpeed) {
      animThreshold = deltaTime + deltaTime + animThreshold;
      if (transitionSpeed <= animThreshold) {
        animThreshold = transitionSpeed;
      }
      goto LAB_ui_animation_update;
    }
  }
  else {
    if (*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) == '\0') {
      animThreshold = animThreshold - deltaTime * UI_WIDGET_LIFETIME_SPEED;
      if (animThreshold <= transitionSpeed) {
        animThreshold = transitionSpeed;
      }
    }
    else {
      animThreshold = animThreshold - deltaTime * UI_WIDGET_LIFETIME_SENSITIVE_SPEED;
      if (animThreshold <= transitionSpeed) {
        animThreshold = transitionSpeed;
      }
    }
LAB_ui_animation_update:
    *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_38) = animThreshold;
  }
  transitionSpeed = *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_34);
  if (transitionSpeed <= blendProgress) {
    if (blendProgress <= transitionSpeed) goto LAB_ui_animation_skip;
    animThreshold = deltaTime + deltaTime + transitionSpeed;
    if (blendProgress <= animThreshold) {
      animThreshold = blendProgress;
    }
  }
  else {
    if (*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) != '\0') {
      animationSpeed = UI_MODULATION_SPEED;
    }
    transitionSpeed = transitionSpeed - animationSpeed * deltaTime;
    if (transitionSpeed <= blendProgress) {
      transitionSpeed = blendProgress;
    }
  }
  *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_34) = transitionSpeed;
LAB_ui_animation_skip:
  blendProgress = *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_30);
  if (blendProgress <= resultValue) {
    if (blendProgress < resultValue) {
      blendProgress = deltaTime + deltaTime + blendProgress;
      if (resultValue <= blendProgress) {
        blendProgress = resultValue;
      }
      *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_30) = blendProgress;
    }
  }
  else {
    blendProgress = blendProgress - deltaTime * UI_MODULATION_SPEED;
    if (blendProgress <= resultValue) {
      blendProgress = resultValue;
    }
    *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_30) = blendProgress;
  }
  widgetState = *(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10);
  if ((widgetState == 1) && ((animThreshold != UI_ALPHA_ZERO || (transitionSpeed != UI_ALPHA_ZERO)))) {
    transitionSpeed = (float)ui_system_get_animation_value(*(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78) + UI_ANIMATION_TABLE_OFFSET,
                                 *(uint *)(animationContext + UI_WIDGET_VALUE_OFFSET_18) & UI_ABS_MASK);
    widgetState = *(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10);
    transitionSpeed = deltaTime / transitionSpeed;
  }
  else {
    transitionSpeed = UI_ALPHA_ZERO;
  }
  if ((widgetState == 1) || ((*(int *)(animationContext + UI_WIDGET_TARGET_OFFSET) == 1 && (*(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) != UI_ALPHA_FULL)))) {
    animFlags = fmodf(deltaTime / *(float *)(*(int64_t *)
                                        (*(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78) + UI_WIDGET_PARAM_OFFSET_8 + (int64_t)widgetState * UI_ANIMATION_TABLE_OFFSET
                                        ) + UI_ANIMATION_BLEND_OFFSET) + *(float *)(animationContext + UI_WIDGET_TRANSITION_OFFSET), UI_ALPHA_FULL);
    *(int32_t *)(animationContext + UI_WIDGET_TRANSITION_OFFSET) = animFlags;
  }
  else {
    *(int32_t *)(animationContext + UI_WIDGET_TRANSITION_OFFSET) = 0;
  }
  if ((widgetState == 1) && (*(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) == UI_ALPHA_FULL)) {
    *(int32_t *)(animationContext + UI_WIDGET_BLEND_OFFSET) = 0;
  }
  else {
    animThreshold = (float)ui_system_get_animation_value_alt((int64_t)widgetState * UI_ANIMATION_TABLE_OFFSET + *(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78),
                                 *(uint *)(animationContext + UI_WIDGET_SPEED_OFFSET) & UI_ABS_MASK);
    blendProgress = deltaTime / animThreshold;
    if (deltaTime / animThreshold <= transitionSpeed) {
      blendProgress = transitionSpeed;
    }
    blendProgress = blendProgress + *(float *)(animationContext + UI_WIDGET_BLEND_OFFSET);
    *(float *)(animationContext + UI_WIDGET_BLEND_OFFSET) = blendProgress;
    if (UI_ALPHA_FULL < blendProgress) {
      animFlags = fmodf(blendProgress, UI_ALPHA_FULL);
      *(int32_t *)(animationContext + UI_WIDGET_BLEND_OFFSET) = animFlags;
    }
  }
  if ((UI_ALPHA_ZERO < *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_38)) || (UI_ALPHA_ZERO < *(float *)(animationContext + UI_WIDGET_VALUE_OFFSET_34))) {
    if (*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_28) != '\0') {
      transitionSpeed = *(float *)(animationContext + UI_WIDGET_SENSITIVITY_OFFSET);
      animPtr = (int64_t)*(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) * UI_ANIMATION_TABLE_OFFSET + *(int64_t *)(animationContext + UI_WIDGET_TABLE_OFFSET_C78);
      blendProgress = *(float *)(*(int64_t *)(animPtr + 0x20) + UI_ANIMATION_BLEND_OFFSET);
      animPtr = ui_system_find_widget(animPtr, 4);
      transitionSpeed = (ABS(transitionSpeed) / (blendProgress * *(float *)(animPtr + UI_WIDGET_PARAM_OFFSET_8))) * deltaTime;
    }
    transitionSpeed = transitionSpeed + *(float *)(animationContext + UI_WIDGET_LIFETIME_OFFSET);
    *(float *)(animationContext + UI_WIDGET_LIFETIME_OFFSET) = transitionSpeed;
    if (UI_ALPHA_FULL < transitionSpeed) {
      *(float *)(animationContext + UI_WIDGET_LIFETIME_OFFSET) = transitionSpeed - UI_ALPHA_FULL;
    }
  }
  else {
    *(int32_t *)(animationContext + UI_WIDGET_LIFETIME_OFFSET) = 0;
  }
  if (*(char *)(animationContext + UI_WIDGET_FLAG_OFFSET_29) == '\0') {
    transitionSpeed = UI_DEFAULT_THRESHOLD;
  }
  else {
    transitionSpeed = UI_SENSITIVE_THRESHOLD;
  }
  if (*(float *)(animationContext + UI_WIDGET_SENSITIVITY_OFFSET) <= transitionSpeed) {
    if (((*(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) != UI_SPECIAL_WIDGET_INDEX_1) &&
        ((*(int *)(animationContext + UI_WIDGET_TARGET_OFFSET) != UI_SPECIAL_WIDGET_INDEX_1 ||
         (UI_ALPHA_FULL < *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) || *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) == UI_ALPHA_FULL)))) ||
       (transitionSpeed = *(float *)(animationContext + UI_WIDGET_STATE_OFFSET), transitionSpeed < UI_WIDGET_CLEANUP_THRESHOLD)) {
      *(int32_t *)(animationContext + UI_WIDGET_STATE_OFFSET) = 0;
    }
    else {
      *(float *)(animationContext + UI_WIDGET_STATE_OFFSET) = transitionSpeed - transitionSpeed * deltaTime * UI_WIDGET_CLEANUP_SPEED;
    }
  }
  else {
    if (((*(int *)(animationContext + UI_WIDGET_VALUE_OFFSET_10) == UI_SPECIAL_WIDGET_INDEX_1) ||
        ((*(int *)(animationContext + UI_WIDGET_TARGET_OFFSET) == UI_SPECIAL_WIDGET_INDEX_1 &&
         (*(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) <= UI_ALPHA_FULL && *(float *)(animationContext + UI_WIDGET_ANIMATION_OFFSET) != UI_ALPHA_FULL)))) &&
       (transitionSpeed = *(float *)(animationContext + UI_WIDGET_STATE_OFFSET), transitionSpeed <= 0.999f)) {
      animMax = (UI_ALPHA_FULL - transitionSpeed) * deltaTime * UI_WIDGET_CLEANUP_SPEED + transitionSpeed;
    }
    *(float *)(animationContext + UI_WIDGET_STATE_OFFSET) = animMax;
  }
  return;
}