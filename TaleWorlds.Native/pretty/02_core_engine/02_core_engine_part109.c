/* 函数别名定义: DataProcessingEngine */
#define DataProcessingEngine DataProcessingEngine


#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part109.c - 9 个函数

/**
 * 处理文本渲染参数调整
 * 
 * 根据输入参数调整文本渲染的各种参数，包括位置、大小、颜色等
 * 支持不同的渲染模式和特效处理
 * 
 * @param render_context 渲染上下文指针
 * @param text_params 文本参数结构体指针
 * @param layout_params 布局参数结构体指针
 */
void adjust_text_rendering_params(uint64_t render_context, int64_t text_params, int64_t layout_params)

{
  float scale_factor;
  int64_t layout_iter;
  int64_t current_layout;
  uint layout_flags;
  float text_height;
  float width_adjustment;
  float height_adjustment;
  float position_y;
  float new_position_y;
  float position_x;
  
  // 检查是否有缩放或宽度调整需求
  if ((width_adjustment != 0.0) || (*(float *)(text_params + 300) != 0.0)) {
    layout_flags = *(uint *)(layout_params + 0xc);
    current_layout = layout_params;
    
    // 遍历布局链表，查找符合条件的布局项
    while ((((layout_flags >> 0x18 & 1) != 0 && ((layout_flags & 0x218) == 0x10)) &&
           (layout_iter = *(int64_t *)(current_layout + 0x398), layout_iter != 0))) {
      layout_flags = *(uint *)(layout_iter + 0xc);
      current_layout = layout_iter;
    }
    
    layout_flags = *(uint *)(current_layout + 0xc) & 0x210;
    
    // 处理宽度缩放
    if (width_adjustment != 0.0) {
      if (*(char *)(text_params + 0x134) == '\0') {
        if (layout_flags == 0) {
          // 计算缩放后的文本尺寸
          text_height = *(float *)(text_params + 0x19fc) * *(float *)(current_layout + 0x2d8) *
                  *(float *)(current_layout + 0x2dc) * 5.0;
          position_y = *(float *)(current_layout + 0x90);
          height_adjustment = (*(float *)(current_layout + 0x27c) - *(float *)(current_layout + 0x274)) * 0.67 +
                  *(float *)(current_layout + 0x74) * 1.34;
          if (text_height <= height_adjustment) {
            height_adjustment = text_height;
          }
          height_adjustment = position_y - (float)(int)height_adjustment * width_adjustment;
          *(float *)(current_layout + 0x90) = height_adjustment;
          *(float *)(current_layout + 0x11c) = (position_y + *(float *)(current_layout + 0x11c)) - height_adjustment;
        }
      }
      else if (*(char *)(text_params + 0xac) != '\0') {
        // 处理特殊文本模式的缩放
        position_y = *(float *)(layout_params + 0x2d8);
        text_height = width_adjustment * 0.1 + position_y;
        height_adjustment = 0.5;
        if ((0.5 <= text_height) && (height_adjustment = text_height, 2.5 <= text_height)) {
          height_adjustment = 2.5;
        }
        *(float *)(layout_params + 0x2d8) = height_adjustment;
        text_height = *(float *)(text_params + 0x11c);
        height_adjustment = height_adjustment / position_y;
        
        // 调整位置参数
        *(float *)(layout_params + 0x40) =
             ((*(float *)(text_params + 0x118) - *(float *)(layout_params + 0x40)) *
             *(float *)(layout_params + 0x48) * (1.0 - height_adjustment)) / *(float *)(layout_params + 0x48) +
             *(float *)(layout_params + 0x40);
        *(float *)(layout_params + 0x44) =
             (*(float *)(layout_params + 0x4c) * (1.0 - height_adjustment) * (text_height - *(float *)(layout_params + 0x44))) /
             *(float *)(layout_params + 0x4c) + *(float *)(layout_params + 0x44);
        *(float *)(layout_params + 0x48) = height_adjustment * *(float *)(layout_params + 0x48);
        *(float *)(layout_params + 0x4c) = height_adjustment * *(float *)(layout_params + 0x4c);
        *(float *)(layout_params + 0x54) = height_adjustment * *(float *)(layout_params + 0x54);
        *(float *)(layout_params + 0x50) = height_adjustment * *(float *)(layout_params + 0x50);
      }
    }
    
    // 处理高度调整
    if (((*(float *)(text_params + 300) != 0.0) && (layout_flags == 0)) && (*(char *)(text_params + 0x134) == '\0')) {
      position_y = *(float *)(current_layout + 0x8c);
      height_adjustment = position_y - *(float *)(text_params + 0x19fc) * *(float *)(current_layout + 0x2d8) *
                      *(float *)(current_layout + 0x2dc) * *(float *)(text_params + 300);
      *(float *)(current_layout + 0x8c) = height_adjustment;
      *(float *)(current_layout + 0x118) = (position_y + *(float *)(current_layout + 0x118)) - height_adjustment;
    }
  }
  return;
}



/**
 * 更新文本布局参数
 * 
 * 根据输入参数更新文本的布局参数，包括位置、大小和缩放比例
 * 支持动态调整文本显示效果
 * 
 * @param scale 缩放因子
 * @param text_params 文本参数结构体指针
 * @param layout_params 布局参数结构体指针
 * @param render_mode 渲染模式标志
 */
void update_text_layout_params(float scale, int64_t text_params, int64_t layout_params, int render_mode)

{
  int64_t layout_iter;
  float base_scale;
  float current_scale;
  float scale_factor;
  float text_width;
  float position_y;
  float position_x;
  
  // 计算并限制缩放因子
  scale_factor = scale + base_scale;
  if ((scale <= scale_factor) && (scale = scale_factor, 2.5 <= scale_factor)) {
    scale = 2.5;
  }
  *(float *)(layout_params + 0x2d8) = scale;
  scale_factor = *(float *)(text_params + 0x11c);
  scale = scale / base_scale;
  
  // 调整布局参数
  *(float *)(layout_params + 0x40) =
       ((*(float *)(text_params + 0x118) - *(float *)(layout_params + 0x40)) *
       *(float *)(layout_params + 0x48) * (1.0 - scale)) / *(float *)(layout_params + 0x48) +
       *(float *)(layout_params + 0x40);
  *(float *)(layout_params + 0x44) =
       (*(float *)(layout_params + 0x4c) * (1.0 - scale) * (scale_factor - *(float *)(layout_params + 0x44))) /
       *(float *)(layout_params + 0x4c) + *(float *)(layout_params + 0x44);
  *(float *)(layout_params + 0x48) = scale * *(float *)(layout_params + 0x48);
  *(float *)(layout_params + 0x4c) = scale * *(float *)(layout_params + 0x4c);
  *(float *)(layout_params + 0x54) = scale * *(float *)(layout_params + 0x54);
  *(float *)(layout_params + 0x50) = scale * *(float *)(layout_params + 0x50);
  
  // 处理特殊渲染模式
  if (((*(float *)(text_params + 300) != text_width) && (render_mode == 0)) &&
     (*(char *)(text_params + 0x134) == '\0')) {
    scale_factor = *(float *)(layout_iter + 0x8c);
    current_scale = scale_factor - *(float *)(text_params + 0x19fc) * *(float *)(layout_iter + 0x2d8) *
                    *(float *)(layout_iter + 0x2dc) * *(float *)(text_params + 300);
    *(float *)(layout_iter + 0x8c) = current_scale;
    *(float *)(layout_iter + 0x118) = (scale_factor + *(float *)(layout_iter + 0x118)) - current_scale;
  }
  return;
}



/**
 * 应用文本变换效果
 * 
 * 对文本应用各种变换效果，包括缩放、位移和旋转
 * 根据渲染模式选择不同的变换策略
 * 
 * @param layout_ptr 布局指针
 * @param text_params 文本参数结构体指针
 * @param transform_params 变换参数
 * @param effect_mode 效果模式
 */
void apply_text_transform_effects(int64_t layout_ptr, int64_t text_params, uint64_t transform_params, int effect_mode)

{
  float base_height;
  float max_height;
  float adjusted_height;
  float transform_scale;
  float scale_factor;
  
  if (effect_mode == 0) {
    // 计算文本高度和调整值
    max_height = *(float *)(text_params + 0x19fc) * *(float *)(layout_ptr + 0x2d8) * *(float *)(layout_ptr + 0x2dc)
            * 5.0;
    base_height = *(float *)(layout_ptr + 0x90);
    adjusted_height = (*(float *)(layout_ptr + 0x27c) - *(float *)(layout_ptr + 0x274)) * 0.67 +
            *(float *)(layout_ptr + 0x74) * 1.34;
    if (max_height <= adjusted_height) {
      adjusted_height = max_height;
    }
    adjusted_height = base_height - (float)(int)adjusted_height * transform_scale;
    *(float *)(layout_ptr + 0x90) = adjusted_height;
    *(float *)(layout_ptr + 0x11c) = (base_height + *(float *)(layout_ptr + 0x11c)) - adjusted_height;
  }
  
  // 处理高度变换效果
  if (((*(float *)(text_params + 300) != scale_factor) && (effect_mode == 0)) &&
     (*(char *)(text_params + 0x134) == '\0')) {
    base_height = *(float *)(layout_ptr + 0x8c);
    adjusted_height = base_height - *(float *)(text_params + 0x19fc) * *(float *)(layout_ptr + 0x2d8) *
                    *(float *)(layout_ptr + 0x2dc) * *(float *)(text_params + 300);
    *(float *)(layout_ptr + 0x8c) = adjusted_height;
    *(float *)(layout_ptr + 0x118) = (base_height + *(float *)(layout_ptr + 0x118)) - adjusted_height;
  }
  return;
}



/**
 * 初始化文本渲染状态
 * 
 * 初始化文本渲染系统的状态和参数
 * 为后续的文本渲染操作做准备
 */
void initialize_text_render_state(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 更新渲染引擎状态
 * 
 * 更新渲染引擎的各种状态参数，包括缓冲区、纹理和着色器状态
 * 处理渲染队列和资源管理
 */
void update_render_engine_state(void)

{
  double time_delta;
  char state_flag;
  bool render_active;
  int64_t engine_context;
  int8_t buffer_state;
  uint64_t render_target;
  uint64_t current_target;
  int64_t buffer_iter;
  uint64_t *buffer_ptr;
  uint64_t target_handle;
  int frame_count;
  bool buffer_ready;
  
  engine_context = SYSTEM_DATA_MANAGER_A;
  FUN_180127d70();
  target_handle = 0;
  current_target = target_handle;
  
  // 查找活动的渲染目标
  if (0 < *(int *)(engine_context + 0x1bb0)) {
    buffer_iter = (int64_t)*(int *)(engine_context + 0x1bb0) + -1;
    buffer_ptr = (uint64_t *)(*(int64_t *)(engine_context + 0x1bb8) + 8 + buffer_iter * 0x30);
    do {
      current_target = *buffer_ptr;
      if ((current_target != 0) && ((*(uint *)(current_target + 0xc) & 0x8000000) != 0)) {
        target_handle = *(uint64_t *)(engine_context + 0x1b08);
        if ((target_handle != 0) && (*(uint64_t *)(target_handle + 0x3a0) != current_target)) goto LAB_1801254f0;
        break;
      }
      buffer_ptr = buffer_ptr + -6;
      buffer_iter = buffer_iter + -1;
      current_target = target_handle;
    } while (-1 < buffer_iter);
  }
  goto LAB_18012549e;
  
  // 遍历渲染目标链表
  while (target_handle = *(uint64_t *)(target_handle + 0x398), target_handle != 0) {
LAB_1801254f0:
    if (target_handle == current_target) goto LAB_18012549e;
  }
  
  // 清空渲染目标缓冲区
  *(uint64_t *)(engine_context + 0x1b10) = 0;
  *(uint64_t *)(engine_context + 0x1b08) = 0;
  *(uint64_t *)(engine_context + 0x1b00) = 0;
LAB_18012549e:
  
  // 处理特殊渲染模式
  if ((*(byte *)(engine_context + 8) & 0x10) != 0) {
    *(uint64_t *)(engine_context + 0x1b10) = 0;
    *(uint64_t *)(engine_context + 0x1b08) = 0;
    *(uint64_t *)(engine_context + 0x1b00) = 0;
  }
  
  // 更新缓冲区状态
  if (*(char *)(engine_context + 0x410) != '\0') {
    if ((*(int64_t *)(engine_context + 0x1b00) == 0) && (*(int *)(engine_context + 0x1bb0) == 0)) {
      buffer_state = 0;
    }
    else {
      buffer_state = 1;
    }
    *(int8_t *)(engine_context + 0x41f) = buffer_state;
  }
  
  // 处理多重渲染目标
  state_flag = *(char *)(engine_context + 0x120);
  frame_count = (state_flag != '\0') - 1;
  if (*(char *)(engine_context + 0x411) != '\0') {
    if ((*(int64_t *)(engine_context + 0x1b00) == 0) && (*(int *)(engine_context + 0x1bb0) == 0)) {
      buffer_state = 0;
    }
    else {
      buffer_state = 1;
    }
    *(int8_t *)(engine_context + 0x420) = buffer_state;
  }
  
  // 处理渲染目标优先级
  if ((*(char *)(engine_context + 0x121) != '\0') &&
     ((state_flag == '\0' ||
      (time_delta = *(double *)(engine_context + 1000 + (int64_t)frame_count * 8),
      *(double *)(engine_context + 0x3f0) <= time_delta && time_delta != *(double *)(engine_context + 0x3f0))))) {
    frame_count = 1;
  }
  
  if (*(char *)(engine_context + 0x412) != '\0') {
    if ((*(int64_t *)(engine_context + 0x1b00) == 0) && (*(int *)(engine_context + 0x1bb0) == 0)) {
      buffer_state = 0;
    }
    else {
      buffer_state = 1;
    }
    *(int8_t *)(engine_context + 0x421) = buffer_state;
  }
  
  // 继续处理渲染目标优先级
  if ((*(char *)(engine_context + 0x122) != '\0') &&
     ((frame_count == -1 ||
      (time_delta = *(double *)(engine_context + 1000 + (int64_t)frame_count * 8),
      *(double *)(engine_context + 0x3f8) <= time_delta && time_delta != *(double *)(engine_context + 0x3f8))))) {
    frame_count = 2;
  }
  
  if (*(char *)(engine_context + 0x413) != '\0') {
    if ((*(int64_t *)(engine_context + 0x1b00) == 0) && (*(int *)(engine_context + 0x1bb0) == 0)) {
      buffer_state = 0;
    }
    else {
      buffer_state = 1;
    }
    *(int8_t *)(engine_context + 0x422) = buffer_state;
  }
  
  // 处理最后的渲染目标优先级
  if ((*(char *)(engine_context + 0x123) != '\0') &&
     ((frame_count == -1 ||
      (time_delta = *(double *)(engine_context + 1000 + (int64_t)frame_count * 8),
      *(double *)(engine_context + 0x400) <= time_delta && time_delta != *(double *)(engine_context + 0x400))))) {
    frame_count = 3;
  }
  
  if (*(char *)(engine_context + 0x414) != '\0') {
    if ((*(int64_t *)(engine_context + 0x1b00) == 0) && (*(int *)(engine_context + 0x1bb0) == 0)) {
      buffer_state = 0;
    }
    else {
      buffer_state = 1;
    }
    *(int8_t *)(engine_context + 0x423) = buffer_state;
  }
  
  // 确定最终渲染目标
  if ((*(char *)(engine_context + 0x124) == '\0') ||
     ((frame_count != -1 &&
      (time_delta = *(double *)(engine_context + 1000 + (int64_t)frame_count * 8),
      time_delta < *(double *)(engine_context + 0x408) || time_delta == *(double *)(engine_context + 0x408))))) {
    if (frame_count != -1) goto LAB_180125699;
  }
  else {
    frame_count = 4;
LAB_180125699:
    if (*(char *)((int64_t)frame_count + 0x41f + engine_context) == '\0') {
      buffer_ready = false;
      goto LAB_1801256ac;
    }
  }
  buffer_ready = true;
LAB_1801256ac:
  
  // 处理渲染状态标志
  if ((*(char *)(engine_context + 0x1dd0) == '\0') || ((*(byte *)(engine_context + 0x1dd4) & 0x10) == 0)) {
    render_active = false;
  }
  else {
    render_active = true;
  }
  
  // 更新渲染状态
  if ((!buffer_ready) && (!render_active)) {
    *(uint64_t *)(engine_context + 0x1b10) = 0;
    *(uint64_t *)(engine_context + 0x1b08) = 0;
    *(uint64_t *)(engine_context + 0x1b00) = 0;
  }
  
  // 处理渲染模式切换
  if (*(int *)(engine_context + 0x3048) == -1) {
    if (((buffer_ready) &&
        ((*(int64_t *)(engine_context + 0x1b00) != 0 ||
         ((((state_flag != '\0' || *(char *)(engine_context + 0x121) != '\0') || *(char *)(engine_context + 0x122) != '\0')
          || *(char *)(engine_context + 0x123) != '\0') || *(char *)(engine_context + 0x124) != '\0')))) ||
       (*(int *)(engine_context + 0x1bb0) != 0)) {
      buffer_ready = true;
    }
    else {
      buffer_ready = false;
    }
  }
  else {
    buffer_ready = *(int *)(engine_context + 0x3048) != 0;
  }
  *(bool *)(engine_context + 0x38c) = buffer_ready;
  
  // 处理缓冲区状态
  if (*(int *)(engine_context + 0x304c) == -1) {
    if ((*(int *)(engine_context + 0x1b2c) == 0) && (current_target == 0)) {
      buffer_ready = false;
    }
    else {
      buffer_ready = true;
    }
  }
  else {
    buffer_ready = *(int *)(engine_context + 0x304c) != 0;
  }
  *(bool *)(engine_context + 0x38d) = buffer_ready;
  
  // 处理特殊渲染状态
  if ((*(char *)(engine_context + 0x391) != '\0') && (((byte)*(int32_t *)(engine_context + 8) & 9) == 1)) {
    *(int8_t *)(engine_context + 0x38d) = 1;
  }
  
  // 更新渲染标志
  if (*(int *)(engine_context + 0x3050) != -1) {
    target_handle = (uint64_t)(*(int *)(engine_context + 0x3050) != 0);
  }
  *(char *)(engine_context + 0x38e) = (char)target_handle;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行渲染帧初始化
 * 
 * 初始化渲染帧的各项参数，包括相机、灯光和材质设置
 * 准备渲染管线状态
 * 
 * @param frame_params 帧参数
 * @param render_context 渲染上下文
 */
void initialize_render_frame(uint64_t frame_params, uint64_t render_context)

{
  int render_mode;
  int64_t engine_context;
  int64_t camera_ptr;
  int64_t light_ptr;
  int64_t material_ptr;
  int texture_count;
  float *texture_data;
  int64_t *render_queue;
  uint64_t frame_index;
  uint64_t queue_index;
  uint vertex_count;
  float min_x, min_y;
  float max_x, max_y;
  uint64_t frame_params_local[3];
  
  engine_context = SYSTEM_DATA_MANAGER_A;
  
  // 清理渲染状态
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0xcb) != '\0') && ((*(byte *)(SYSTEM_DATA_MANAGER_A + 0xc) & 2) == 0)) {
    *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0xcb) = 0;
  }
  
  // 更新渲染模式标志
  if (((*(uint *)(engine_context + 8) >> 10 & 1) != 0) && ((*(uint *)(engine_context + 0xc) & 0x1400) != 0x1400)) {
    *(uint *)(engine_context + 8) = *(uint *)(engine_context + 8) & 0xfffffbff;
  }
  
  frame_index = 0;
  
  // 处理渲染资源清理
  if (*(char *)(engine_context + 0x2e00) == '\0') {
    if (*(int64_t *)(engine_context + 0x20) != 0) {
      frame_params_local[0] = 0;
      camera_ptr = FUN_180121420(*(int64_t *)(engine_context + 0x20), render_context, frame_params_local);
      if (camera_ptr != 0) {
        FUN_18013cb20(camera_ptr, frame_params_local[0]);
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        ResourceManager_Release(camera_ptr, SYSTEM_DATA_MANAGER_B);
      }
    }
    *(int8_t *)(engine_context + 0x2e00) = 1;
  }
  
  // 处理时间相关的渲染更新
  if ((0.0 < *(float *)(engine_context + 0x2e04)) &&
     (min_x = *(float *)(engine_context + 0x2e04) - *(float *)(engine_context + 0x18),
     *(float *)(engine_context + 0x2e04) = min_x, min_x <= 0.0)) {
    if (*(int64_t *)(engine_context + 0x20) == 0) {
      *(int8_t *)(engine_context + 0x390) = 1;
    }
    else {
      FUN_18013cdc0();
    }
    *(int32_t *)(engine_context + 0x2e04) = 0;
  }
  
  // 更新帧计数器和状态
  *(int *)(engine_context + 0x1a90) = *(int *)(engine_context + 0x1a90) + 1;
  *(int8_t *)(engine_context + 1) = 1;
  *(int32_t *)(engine_context + 0x2dcc) = 0;
  *(int32_t *)(engine_context + 0x1af0) = 0;
  *(int32_t *)(engine_context + 0x19e8) = *(int32_t *)(engine_context + 8);
  *(double *)(engine_context + 0x1a88) = (double)*(float *)(engine_context + 0x18) + *(double *)(engine_context + 0x1a88);
  
  // 初始化渲染管线
  FUN_180130010();
  camera_ptr = SYSTEM_DATA_MANAGER_A;
  **(int8_t **)(engine_context + 0xa0) = 1;
  
  // 处理纹理数据
  texture_data = *(float **)(camera_ptr + 0xb0);
  if (texture_data == (float *)0x0) {
    texture_data = (float *)**(uint64_t **)(*(int64_t *)(camera_ptr + 0xa0) + 0x48);
  }
  
  light_ptr = *(int64_t *)(camera_ptr + 0x1af8);
  *(float **)(camera_ptr + 0x19f0) = texture_data;
  min_x = *(float *)(camera_ptr + 0xa8) * *texture_data * texture_data[1];
  *(float *)(camera_ptr + 0x19fc) = min_x;
  
  // 计算光照强度
  if (light_ptr == 0) {
    min_x = 0.0;
  }
  else {
    min_x = min_x * *(float *)(light_ptr + 0x2d8) * *(float *)(light_ptr + 0x2dc);
  }
  *(float *)(camera_ptr + 0x19f8) = min_x;
  
  // 初始化边界计算
  min_y = 0.0;
  max_y = 0.0;
  *(uint64_t *)(camera_ptr + 0x1a00) = *(uint64_t *)(*(int64_t *)(texture_data + 0x16) + 0x38);
  *(float *)(camera_ptr + 0x1a10) = min_x;
  *(float **)(camera_ptr + 0x1a08) = texture_data;
  
  // 计算渲染边界
  vertex_count = *(uint *)(engine_context + 0x1c68);
  if (0 < (int)vertex_count) {
    render_queue = *(int64_t **)(engine_context + 0x1c70);
    queue_index = (uint64_t)vertex_count;
    min_x = min_y;
    max_x = max_y;
    do {
      light_ptr = *render_queue;
      render_queue = render_queue + 1;
      min_y = *(float *)(light_ptr + 0x10) + *(float *)(light_ptr + 8);
      max_y = *(float *)(light_ptr + 0x14) + *(float *)(light_ptr + 0xc);
      if (min_y <= min_x) {
        min_y = min_x;
      }
      if (max_y <= max_x) {
        max_y = max_x;
      }
      queue_index = queue_index - 1;
      min_x = min_y;
      max_x = max_y;
    } while (queue_index != 0);
  }
  
  // 更新渲染参数
  *(int32_t *)(engine_context + 0x1a14) = *(int32_t *)(engine_context + 0x16c4);
  *(int32_t *)(engine_context + 0x1a18) = 0;
  *(int32_t *)(engine_context + 0x1a1c) = 0;
  *(float *)(engine_context + 0x1a20) = min_y;
  *(float *)(engine_context + 0x1a24) = max_y;
  queue_index = frame_index;
  
  // 清理渲染队列
  if (0 < (int)vertex_count) {
    do {
      vertex_count = (int)queue_index + 1;
      light_ptr = *(int64_t *)(frame_index + *(int64_t *)(engine_context + 0x1c70));
      *(uint64_t *)(light_ptr + 0x20) = 0;
      *(uint64_t *)(light_ptr + 0xac) = 0;
      *(uint64_t *)(light_ptr + 0xa4) = *(uint64_t *)(light_ptr + 0xac);
      *(int8_t *)(light_ptr + 0x88) = 0;
      *(uint64_t *)(light_ptr + 0x90) = 0;
      *(uint64_t *)(light_ptr + 0x9c) = 0;
      *(int32_t *)(light_ptr + 0x98) = 0;
      frame_index = frame_index + 8;
      queue_index = (uint64_t)vertex_count;
    } while ((int)vertex_count < *(int *)(engine_context + 0x1c68));
  }
  
  // 处理渲染目标切换
  if ((*(char *)(engine_context + 0x1dd0) != '\0') &&
     (render_mode = *(int *)(engine_context + 0x1dec), render_mode == *(int *)(engine_context + 0x1b2c))) {
    if (*(int *)(camera_ptr + 0x1b2c) == render_mode) {
      *(int *)(camera_ptr + 0x1b34) = render_mode;
    }
    if (*(int *)(camera_ptr + 0x1b30) == render_mode) {
      *(int8_t *)(camera_ptr + 0x1b3f) = 1;
    }
  }
  
  // 更新渲染参数
  render_mode = *(int *)(engine_context + 0x1b18);
  if (*(int *)(engine_context + 0x1b20) == 0) {
    *(int32_t *)(engine_context + 0x1b24) = 0;
  }
  else if ((render_mode == 0) || (*(int *)(engine_context + 0x1b2c) != render_mode)) goto LAB_180125a82;
  *(int32_t *)(engine_context + 0x1b28) = 0;
LAB_180125a82:
  
  min_x = *(float *)(engine_context + 0x18);
  texture_count = *(int *)(engine_context + 0x1b2c);
  if ((render_mode != 0) &&
     (*(float *)(engine_context + 0x1b24) = min_x + *(float *)(engine_context + 0x1b24), texture_count != render_mode)) {
    *(float *)(engine_context + 0x1b28) = min_x + *(float *)(engine_context + 0x1b28);
  }
  *(int *)(engine_context + 0x1b20) = render_mode;
  *(int32_t *)(engine_context + 0x1b18) = 0;
  *(int8_t *)(engine_context + 0x1b1c) = 0;
  
  // 处理渲染状态切换
  if (((*(int *)(engine_context + 0x1b34) != texture_count) && (*(int *)(engine_context + 0x1b30) == texture_count)) && (texture_count != 0)) {
    *(bool *)(camera_ptr + 0x1b3c) = *(int *)(camera_ptr + 0x1b2c) != 0;
    if (*(int *)(camera_ptr + 0x1b2c) != 0) {
      *(int32_t *)(camera_ptr + 0x1b38) = 0;
      *(int8_t *)(camera_ptr + 0x1b3e) = 0;
    }
    *(int32_t *)(camera_ptr + 0x1b2c) = 0;
    *(int32_t *)(camera_ptr + 0x1b44) = 0;
    *(int8_t *)(camera_ptr + 0x1b3d) = 0;
    *(uint64_t *)(camera_ptr + 0x1b50) = 0;
    texture_count = *(int *)(engine_context + 0x1b2c);
    min_x = *(float *)(engine_context + 0x18);
  }
  
  // 更新渲染参数
  if (texture_count != 0) {
    *(float *)(engine_context + 0x1b38) = min_x + *(float *)(engine_context + 0x1b38);
  }
  *(uint64_t *)(engine_context + 7000) = *(uint64_t *)(engine_context + 0x1b50);
  *(int8_t *)(engine_context + 0x1b40) = *(int8_t *)(engine_context + 0x1b3e);
  *(float *)(engine_context + 0x1b68) = min_x + *(float *)(engine_context + 0x1b68);
  *(int *)(engine_context + 0x1b30) = texture_count;
  *(int32_t *)(engine_context + 0x1b34) = 0;
  *(int8_t *)(engine_context + 0x1b3f) = 0;
  *(int8_t *)(engine_context + 0x1b3c) = 0;
  
  // 处理纹理状态切换
  if ((*(int *)(engine_context + 0x2da0) != 0) && (texture_count != *(int *)(engine_context + 0x2da0))) {
    *(int32_t *)(engine_context + 0x2da0) = 0;
  }
  
  // 最终渲染参数设置
  *(int32_t *)(engine_context + 0x1e40) = *(int32_t *)(engine_context + 0x1e3c);
  *(uint64_t *)(engine_context + 0x1e38) = 0x7f7fffff;
  *(int8_t *)(engine_context + 0x1dd1) = 0;
                    // WARNING: Subroutine does not return
  memcpy(engine_context + 0xc88, engine_context + 0x488, 0x800);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行渲染帧更新
 * 
 * 更新渲染帧的各项参数，处理渲染队列和资源管理
 * 与初始化函数类似，但用于帧更新而不是初始化
 * 
 * @param frame_params 帧参数
 * @param render_context 渲染上下文
 */
void update_render_frame(uint64_t frame_params, uint64_t render_context)

{
  int render_mode;
  int64_t engine_context;
  int64_t camera_ptr;
  int64_t light_ptr;
  int64_t material_ptr;
  int texture_count;
  float *texture_data;
  int64_t *render_queue;
  uint64_t frame_index;
  uint64_t queue_index;
  uint vertex_count;
  float min_x, min_y;
  float max_x, max_y;
  uint64_t stack_params;
  
  // 清理渲染状态
  if ((*(char *)(engine_context + 0xcb) != '\0') && ((*(byte *)(engine_context + 0xc) & 2) == 0)) {
    *(int8_t *)(engine_context + 0xcb) = 0;
  }
  
  // 更新渲染模式标志
  if (((*(uint *)(engine_context + 8) >> 10 & 1) != 0) &&
     ((*(uint *)(engine_context + 0xc) & 0x1400) != 0x1400)) {
    *(uint *)(engine_context + 8) = *(uint *)(engine_context + 8) & 0xfffffbff;
  }
  
  frame_index = 0;
  
  // 处理渲染资源清理
  if (*(char *)(engine_context + 0x2e00) == '\0') {
    if (*(int64_t *)(engine_context + 0x20) != 0) {
      stack_params = 0;
      material_ptr = FUN_180121420(*(int64_t *)(engine_context + 0x20), render_context, &stack_params);
      if (material_ptr != 0) {
        FUN_18013cb20(material_ptr, stack_params);
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        ResourceManager_Release(material_ptr, SYSTEM_DATA_MANAGER_B);
      }
    }
    *(int8_t *)(engine_context + 0x2e00) = 1;
  }
  
  // 处理时间相关的渲染更新
  if ((0.0 < *(float *)(engine_context + 0x2e04)) &&
     (min_x = *(float *)(engine_context + 0x2e04) - *(float *)(engine_context + 0x18),
     *(float *)(engine_context + 0x2e04) = min_x, min_x <= 0.0)) {
    if (*(int64_t *)(engine_context + 0x20) == 0) {
      *(int8_t *)(engine_context + 0x390) = 1;
    }
    else {
      FUN_18013cdc0();
    }
    *(int32_t *)(engine_context + 0x2e04) = 0;
  }
  
  // 更新帧计数器和状态
  *(int *)(engine_context + 0x1a90) = *(int *)(engine_context + 0x1a90) + 1;
  *(int8_t *)(engine_context + 1) = 1;
  *(int32_t *)(engine_context + 0x2dcc) = 0;
  *(int32_t *)(engine_context + 0x1af0) = 0;
  *(int32_t *)(engine_context + 0x19e8) = *(int32_t *)(engine_context + 8);
  *(double *)(engine_context + 0x1a88) =
       (double)*(float *)(engine_context + 0x18) + *(double *)(engine_context + 0x1a88);
  
  // 初始化渲染管线
  FUN_180130010();
  material_ptr = SYSTEM_DATA_MANAGER_A;
  **(int8_t **)(engine_context + 0xa0) = 1;
  
  // 处理纹理数据
  texture_data = *(float **)(material_ptr + 0xb0);
  if (texture_data == (float *)0x0) {
    texture_data = (float *)**(uint64_t **)(*(int64_t *)(material_ptr + 0xa0) + 0x48);
  }
  
  light_ptr = *(int64_t *)(material_ptr + 0x1af8);
  *(float **)(material_ptr + 0x19f0) = texture_data;
  min_x = *(float *)(material_ptr + 0xa8) * *texture_data * texture_data[1];
  *(float *)(material_ptr + 0x19fc) = min_x;
  
  // 计算光照强度
  if (light_ptr == 0) {
    min_x = 0.0;
  }
  else {
    min_x = min_x * *(float *)(light_ptr + 0x2d8) * *(float *)(light_ptr + 0x2dc);
  }
  *(float *)(material_ptr + 0x19f8) = min_x;
  
  // 初始化边界计算
  min_y = 0.0;
  max_y = 0.0;
  *(uint64_t *)(material_ptr + 0x1a00) = *(uint64_t *)(*(int64_t *)(texture_data + 0x16) + 0x38);
  *(float *)(material_ptr + 0x1a10) = min_x;
  *(float **)(material_ptr + 0x1a08) = texture_data;
  
  // 计算渲染边界
  vertex_count = *(uint *)(engine_context + 0x1c68);
  if (0 < (int)vertex_count) {
    render_queue = *(int64_t **)(engine_context + 0x1c70);
    queue_index = (uint64_t)vertex_count;
    min_x = min_y;
    max_x = max_y;
    do {
      light_ptr = *render_queue;
      render_queue = render_queue + 1;
      min_y = *(float *)(light_ptr + 0x10) + *(float *)(light_ptr + 8);
      max_y = *(float *)(light_ptr + 0x14) + *(float *)(light_ptr + 0xc);
      if (min_y <= min_x) {
        min_y = min_x;
      }
      if (max_y <= max_x) {
        max_y = max_x;
      }
      queue_index = queue_index - 1;
      min_x = min_y;
      max_x = max_y;
    } while (queue_index != 0);
  }
  
  // 更新渲染参数
  *(int32_t *)(engine_context + 0x1a14) = *(int32_t *)(engine_context + 0x16c4);
  *(int32_t *)(engine_context + 0x1a18) = 0;
  *(int32_t *)(engine_context + 0x1a1c) = 0;
  *(float *)(engine_context + 0x1a20) = min_y;
  *(float *)(engine_context + 0x1a24) = max_y;
  queue_index = frame_index;
  
  // 清理渲染队列
  if (0 < (int)vertex_count) {
    do {
      vertex_count = (int)queue_index + 1;
      light_ptr = *(int64_t *)(frame_index + *(int64_t *)(engine_context + 0x1c70));
      *(uint64_t *)(light_ptr + 0x20) = 0;
      *(uint64_t *)(light_ptr + 0xac) = 0;
      *(uint64_t *)(light_ptr + 0xa4) = *(uint64_t *)(light_ptr + 0xac);
      *(int8_t *)(light_ptr + 0x88) = 0;
      *(uint64_t *)(light_ptr + 0x90) = 0;
      *(uint64_t *)(light_ptr + 0x9c) = 0;
      *(int32_t *)(light_ptr + 0x98) = 0;
      frame_index = frame_index + 8;
      queue_index = (uint64_t)vertex_count;
    } while ((int)vertex_count < *(int *)(engine_context + 0x1c68));
  }
  
  // 处理渲染目标切换
  if ((*(char *)(engine_context + 0x1dd0) != '\0') &&
     (render_mode = *(int *)(engine_context + 0x1dec), render_mode == *(int *)(engine_context + 0x1b2c))) {
    if (*(int *)(material_ptr + 0x1b2c) == render_mode) {
      *(int *)(material_ptr + 0x1b34) = render_mode;
    }
    if (*(int *)(material_ptr + 0x1b30) == render_mode) {
      *(int8_t *)(material_ptr + 0x1b3f) = 1;
    }
  }
  
  // 更新渲染参数
  render_mode = *(int *)(engine_context + 0x1b18);
  if (*(int *)(engine_context + 0x1b20) == 0) {
    *(int32_t *)(engine_context + 0x1b24) = 0;
  }
  else if ((render_mode == 0) || (*(int *)(engine_context + 0x1b2c) != render_mode)) goto LAB_180125a82;
  *(int32_t *)(engine_context + 0x1b28) = 0;
LAB_180125a82:
  
  min_x = *(float *)(engine_context + 0x18);
  texture_count = *(int *)(engine_context + 0x1b2c);
  if ((render_mode != 0) &&
     (*(float *)(engine_context + 0x1b24) = min_x + *(float *)(engine_context + 0x1b24), texture_count != render_mode)) {
    *(float *)(engine_context + 0x1b28) = min_x + *(float *)(engine_context + 0x1b28);
  }
  *(int *)(engine_context + 0x1b20) = render_mode;
  *(int32_t *)(engine_context + 0x1b18) = 0;
  *(int8_t *)(engine_context + 0x1b1c) = 0;
  
  // 处理渲染状态切换
  if (((*(int *)(engine_context + 0x1b34) != texture_count) && (*(int *)(engine_context + 0x1b30) == texture_count)) &&
     (texture_count != 0)) {
    *(bool *)(material_ptr + 0x1b3c) = *(int *)(material_ptr + 0x1b2c) != 0;
    if (*(int *)(material_ptr + 0x1b2c) != 0) {
      *(int32_t *)(material_ptr + 0x1b38) = 0;
      *(int8_t *)(material_ptr + 0x1b3e) = 0;
    }
    *(int32_t *)(material_ptr + 0x1b2c) = 0;
    *(int32_t *)(material_ptr + 0x1b44) = 0;
    *(int8_t *)(material_ptr + 0x1b3d) = 0;
    *(uint64_t *)(material_ptr + 0x1b50) = 0;
    texture_count = *(int *)(engine_context + 0x1b2c);
    min_x = *(float *)(engine_context + 0x18);
  }
  
  // 更新渲染参数
  if (texture_count != 0) {
    *(float *)(engine_context + 0x1b38) = min_x + *(float *)(engine_context + 0x1b38);
  }
  *(uint64_t *)(engine_context + 7000) = *(uint64_t *)(engine_context + 0x1b50);
  *(int8_t *)(engine_context + 0x1b40) = *(int8_t *)(engine_context + 0x1b3e);
  *(float *)(engine_context + 0x1b68) = min_x + *(float *)(engine_context + 0x1b68);
  *(int *)(engine_context + 0x1b30) = texture_count;
  *(int32_t *)(engine_context + 0x1b34) = 0;
  *(int8_t *)(engine_context + 0x1b3f) = 0;
  *(int8_t *)(engine_context + 0x1b3c) = 0;
  
  // 处理纹理状态切换
  if ((*(int *)(engine_context + 0x2da0) != 0) && (texture_count != *(int *)(engine_context + 0x2da0))) {
    *(int32_t *)(engine_context + 0x2da0) = 0;
  }
  
  // 最终渲染参数设置
  *(int32_t *)(engine_context + 0x1e40) = *(int32_t *)(engine_context + 0x1e3c);
  *(uint64_t *)(engine_context + 0x1e38) = 0x7f7fffff;
  *(int8_t *)(engine_context + 0x1dd1) = 0;
                    // WARNING: Subroutine does not return
  memcpy(engine_context + 0xc88, engine_context + 0x488, 0x800);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理渲染批次更新
 * 
 * 更新渲染批次的各种参数，包括纹理、着色器和缓冲区状态
 * 处理渲染资源的分配和释放
 * 
 * @param batch_params 批次参数
 * @param batch_index 批次索引
 */
void process_render_batch_update(uint64_t batch_params, int batch_index)

{
  int texture_id;
  int *texture_array;
  uint texture_flags;
  uint64_t texture_handle;
  int64_t engine_context;
  uint64_t batch_handle;
  char batch_type;
  int render_count;
  uint64_t batch_index_ull;
  int64_t batch_data;
  int64_t texture_data;
  int64_t buffer_ptr;
  int64_t *batch_array;
  
  batch_handle = batch_index_ull;
  
  // 更新批次数据
  do {
    batch_index = batch_index + 1;
    batch_data = *(int64_t *)(batch_handle + *(int64_t *)(engine_context + 0x1aa8));
    *(int8_t *)(batch_data + 0xb0) = *(int8_t *)(batch_data + 0xaf);
    *(short *)(batch_data + 0xb8) = (short)batch_index_ull;
    batch_type = (char)batch_index_ull;
    *(char *)(batch_data + 0xaf) = batch_type;
    *(char *)(batch_data + 0xb1) = batch_type;
    batch_handle = batch_handle + 8;
  } while (batch_index != *(int *)(engine_context + 0x1aa0));
  
  // 处理特殊批次类型
  if (((*(int64_t *)(engine_context + 0x1c98) != 0) &&
      (*(char *)(*(int64_t *)(engine_context + 0x1c98) + 0xb0) == batch_type)) &&
     (0 < *(int *)(buffer_ptr + 0x1ab0))) {
    batch_data = (int64_t)*(int *)(buffer_ptr + 0x1ab0) + -1;
    batch_array = (int64_t *)(*(int64_t *)(buffer_ptr + 0x1ab8) + batch_data * 8);
    do {
      texture_data = *batch_array;
      if (((texture_data != 0) && (*(char *)(texture_data + 0xb0) != batch_type)) &&
         ((*(uint *)(texture_data + 0xc) >> 0x18 & 1) == 0 && (*(uint *)(texture_data + 0xc) & 0x40200) != 0x40200
         )) {
        if (*(int64_t *)(texture_data + 0x3c0) != 0) {
          texture_data = *(int64_t *)(texture_data + 0x3c0);
        }
        FUN_18012d2e0(texture_data);
        break;
      }
      batch_array = batch_array + -1;
      batch_data = batch_data + -1;
    } while (-1 < batch_data);
  }
  
  // 更新纹理状态
  texture_id = *(int *)(engine_context + 0x1ad4);
  render_count = (int)batch_index_ull;
  if (texture_id < 0) {
    batch_handle = batch_index_ull & 0xffffffff;
    texture_flags = texture_id / 2 + texture_id;
    if (0 < (int)texture_flags) {
      batch_handle = (uint64_t)texture_flags;
    }
    DataProcessingEngine0(engine_context + 0x1ad0, batch_handle);
  }
  *(int *)(engine_context + 0x1ad0) = render_count;
  
  // 更新渲染计数器
  texture_id = *(int *)(engine_context + 0x1bc4);
  if (texture_id < 0) {
    batch_handle = batch_index_ull & 0xffffffff;
    texture_flags = texture_id / 2 + texture_id;
    if (0 < (int)texture_flags) {
      batch_handle = (uint64_t)texture_flags;
    }
    FUN_18013e760(engine_context + 0x1bc0, batch_handle);
  }
  *(int *)(engine_context + 0x1bc0) = render_count;
  
  // 处理渲染资源
  FUN_18012ed10(*(uint64_t *)(engine_context + 0x1c98));
  texture_array = *(int **)(engine_context + 0x2df8);
  
  // 处理特殊渲染模式
  if ((*(byte *)(engine_context + 8) & 0x40) != 0) {
    batch_handle = batch_index_ull & 0xffffffff;
    batch_index_ull = batch_index;
    if (render_count < texture_array[4]) {
      do {
        if (*(int *)(batch_index + *(int64_t *)(texture_array + 6)) == 1) {
          FUN_1801364d0();
        }
        texture_flags = (int)batch_handle + 1;
        batch_handle = (uint64_t)texture_flags;
        batch_index = batch_index + 0x40;
      } while ((int)texture_flags < texture_array[4]);
    }
    
    texture_id = texture_array[5];
    if (texture_id < 0) {
      batch_handle = batch_index_ull & 0xffffffff;
      texture_flags = texture_id / 2 + texture_id;
      if (0 < (int)texture_flags) {
        batch_handle = (uint64_t)texture_flags;
      }
      FUN_18013e6c0(texture_array + 4, batch_handle);
    }
    texture_array[4] = render_count;
    batch_index_ull = batch_index;
    
    // 处理纹理资源
    if (render_count < *texture_array) {
      do {
        batch_data = *(int64_t *)(batch_index_ull + 8 + *(int64_t *)(texture_array + 2));
        if (((batch_data != 0) && ((*(byte *)(batch_data + 0xa0) & 0x10) == 0)) &&
           (*(int64_t *)(batch_data + 8) == 0)) {
          FUN_1801373f0();
        }
        texture_flags = (int)batch_index_ull + 1;
        batch_index_ull = batch_index_ull + 0x10;
        batch_index = (uint64_t)texture_flags;
      } while ((int)texture_flags < *texture_array);
    }
  }
  
  // 初始化渲染参数
  batch_data = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(batch_data + 0x1c08) = 0x43c80000;
  *(int32_t *)(batch_data + 0x1bd4) = 4;
  FUN_1801299b0(&rendering_buffer_2432_ptr, 0, 0);
  *(int8_t *)(engine_context + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理渲染资源清理
 * 
 * 清理渲染系统中的各种资源，包括纹理、着色器和缓冲区
 * 重置渲染状态到初始状态
 */
void process_render_resource_cleanup(void)

{
  int resource_id;
  int64_t resource_ptr;
  uint resource_flags;
  uint64_t resource_handle;
  int64_t engine_context;
  int *resource_array;
  int resource_count;
  uint64_t resource_index;
  
  resource_count = (int)resource_index;
  resource_handle = resource_index;
  
  // 清理纹理资源
  if (resource_count < resource_array[4]) {
    do {
      if (*(int *)(resource_handle + *(int64_t *)(resource_array + 6)) == 1) {
        FUN_1801364d0();
      }
      resource_count = resource_count + 1;
      resource_handle = resource_handle + 0x40;
    } while (resource_count < resource_array[4]);
  }
  
  // 清理渲染资源
  resource_id = resource_array[5];
  if (resource_id < 0) {
    resource_handle = resource_index & 0xffffffff;
    resource_flags = resource_id / 2 + resource_id;
    if (0 < (int)resource_flags) {
      resource_handle = (uint64_t)resource_flags;
    }
    FUN_18013e6c0(resource_array + 4, resource_handle);
  }
  resource_array[4] = resource_count;
  resource_handle = resource_index;
  
  // 清理缓冲区资源
  if (resource_count < *resource_array) {
    do {
      resource_ptr = *(int64_t *)(resource_index + 8 + *(int64_t *)(resource_array + 2));
      if (((resource_ptr != 0) && ((*(byte *)(resource_ptr + 0xa0) & 0x10) == 0)) &&
         (*(int64_t *)(resource_ptr + 8) == 0)) {
        FUN_1801373f0();
      }
      resource_flags = (int)resource_handle + 1;
      resource_index = resource_index + 0x10;
      resource_handle = (uint64_t)resource_flags;
    } while ((int)resource_flags < *resource_array);
  }
  
  // 重置渲染参数
  resource_ptr = SYSTEM_DATA_MANAGER_A;
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c04) = 0x43c80000;
  *(int32_t *)(resource_ptr + 0x1c08) = 0x43c80000;
  *(int32_t *)(resource_ptr + 0x1bd4) = 4;
  FUN_1801299b0(&rendering_buffer_2432_ptr, 0, 0);
  *(int8_t *)(engine_context + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


