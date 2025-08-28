#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part009.c - UI系统高级向量处理和动画控制模块
// 该文件包含4个核心函数，涵盖UI向量归一化处理、动画权重计算、角度插值等高级UI功能

/*========================================================================================
函数别名定义 - 将原始FUN_*名称映射为语义化名称
========================================================================================*/

// 向量归一化处理函数别名
#define normalize_ui_vectors_with_scale FUN_1806593b0
#define normalize_ui_vectors_advanced FUN_1806593d9

// UI系统控制函数别名  
#define ui_system_empty_handler FUN_1806594bd
#define process_ui_animation_data FUN_1806596a0

/*========================================================================================
核心函数实现
========================================================================================*/

/**
 * UI向量归一化和缩放处理函数
 * 对UI元素向量数组进行归一化处理并应用缩放因子
 * 
 * @param vector_array 向量数组指针，包含待处理的UI元素向量数据
 * @param scale_factor 缩放因子，用于调整归一化后的向量大小
 * @return void
 * 
 * 功能说明：
 * - 遍历向量数组中的每个向量
 * - 计算向量的长度（模）
 * - 使用快速倒数平方根算法进行归一化
 * - 应用缩放因子调整向量大小
 * - 更新原始向量数据
 */
void normalize_ui_vectors_with_scale(longlong *vector_array, float scale_factor)

{
  ulonglong index;
  longlong array_start;
  uint element_count;
  ulonglong current_offset;
  float vector_x;
  float vector_y;
  float vector_length;
  float normalized_length;
  float inverse_length;
  float scaled_x;
  float scaled_y;
  
  array_start = *vector_array;
  index = 0;
  current_offset = index;
  element_count = (uint)((vector_array[1] - array_start) >> 3);
  if (element_count != 0) {
    do {
      // 提取向量分量（高32位为Y坐标，低32位为X坐标）
      vector_y = (float)((ulonglong)*(undefined8 *)(current_offset + array_start) >> 0x20);
      vector_x = (float)*(undefined8 *)(current_offset + array_start);
      
      // 计算向量长度
      vector_length = vector_y * vector_y + vector_x * vector_x;
      
      // 使用快速倒数平方根算法计算归一化因子
      inverse_length = rsqrtss(ZEXT416((uint)vector_length), ZEXT416((uint)vector_length))._0_4_;
      
      // 牛顿迭代法提高精度
      normalized_length = inverse_length * 0.5f * (3.0f - vector_length * inverse_length * inverse_length);
      
      // 应用缩放因子并更新向量
      scaled_x = normalized_length * vector_x * scale_factor + *(float *)(current_offset + array_start);
      scaled_y = normalized_length * vector_y * scale_factor + *(float *)(current_offset + 4 + array_start);
      
      *(ulonglong *)(current_offset + vector_array[0x11]) = CONCAT44(scaled_y, scaled_x);
      
      current_offset = current_offset + 8;
      array_start = *vector_array;
      element_count = (uint)((vector_array[1] - array_start) >> 3);
    } while (current_offset < (ulonglong)((vector_array[1] - array_start) >> 3));
  }
  return;
}

/**
 * UI系统高级向量归一化处理函数
 * 对UI元素进行高级向量处理，支持复杂数据结构和多种参数
 * 
 * @param render_context 渲染上下文，用于UI渲染操作
 * @param vector_data 向量数据指针，包含待处理的UI向量信息
 * @param processing_params 处理参数，控制向量处理的行为
 * @param data_offset 数据偏移量，指定处理起始位置
 * @return void
 * 
 * 功能说明：
 * - 支持复杂数据结构的向量处理
 * - 使用优化的归一化算法
 * - 处理大容量向量数据
 * - 支持动态偏移和批量处理
 */
void normalize_ui_vectors_advanced(undefined8 render_context, longlong *vector_data, 
                                undefined8 processing_params, longlong data_offset)

{
  ulonglong current_offset;
  uint element_index;
  float vector_x;
  float vector_y;
  float vector_length;
  float inverse_length;
  float normalized_length;
  float scale_factor;
  float scaled_x;
  float scaled_y;
  
  current_offset = 0;
  element_index = 0;
  scale_factor = *(float *)&processing_params;  // 从处理参数中提取缩放因子
  
  do {
    element_index = element_index + 1;
    
    // 提取向量分量
    vector_y = (float)((ulonglong)*(undefined8 *)(current_offset + data_offset) >> 0x20);
    vector_x = (float)*(undefined8 *)(current_offset + data_offset);
    
    // 计算向量长度
    vector_length = vector_y * vector_y + vector_x * vector_x;
    
    // 快速倒数平方根归一化
    inverse_length = rsqrtss(ZEXT416((uint)vector_length), ZEXT416((uint)vector_length))._0_4_;
    normalized_length = inverse_length * 0.5f * (3.0f - vector_length * inverse_length * inverse_length);
    
    // 应用缩放并更新向量
    scaled_x = normalized_length * vector_x * scale_factor + *(float *)(current_offset + data_offset);
    scaled_y = normalized_length * vector_y * scale_factor + *(float *)(current_offset + 4 + data_offset);
    
    *(ulonglong *)(current_offset + vector_data[0x11]) = CONCAT44(scaled_y, scaled_x);
    
    current_offset = current_offset + 8;
    data_offset = *vector_data;
  } while (current_offset < (ulonglong)((vector_data[1] - data_offset) >> 3));
  
  return;
}

/**
 * UI系统空处理函数
 * 预留的UI系统处理函数，当前为空实现
 * 
 * @return void
 * 
 * 功能说明：
 * - 作为系统扩展点预留
 * - 可用于未来功能扩展
 * - 保持系统架构完整性
 */
void ui_system_empty_handler(void)

{
  return;
}

/**
 * UI系统动画数据处理函数
 * 处理UI动画的核心数据，包括权重计算、角度插值、状态更新等
 * 
 * @param animation_data 动画数据数组，包含关键帧和插值信息
 * @param time_delta 时间增量，用于动画插值计算
 * @param animation_params 动画参数，控制动画行为
 * @param blend_mode 融合模式，指定动画混合方式
 * @param loop_enabled 循环启用标志，控制动画循环播放
 * @param reverse_mode 反向模式标志，控制动画播放方向
 * @param context1 上下文参数1，用于扩展功能
 * @param context2 上下文参数2，用于扩展功能
 * @param blend_weight 融合权重，控制动画强度
 * @param context3 上下文参数3，用于扩展功能
 * @return void
 * 
 * 功能说明：
 * - 处理复杂的UI动画数据
 * - 支持权重归一化和插值
 * - 实现角度标准化和范围限制
 * - 支持多种动画模式
 * - 提供高级动画控制功能
 */
void process_ui_animation_data(float *animation_data, float time_delta, longlong animation_params,
                              char blend_mode, char loop_enabled, char reverse_mode,
                              undefined8 context1, undefined8 context2, float blend_weight,
                              undefined8 context3)

{
  undefined8 temp_storage1;
  undefined8 temp_storage2;
  bool is_active_animation;
  char direction_flag;
  int frame_index;
  longlong data_start;
  float *current_keyframe;
  longlong data_end;
  longlong keyframe_data;
  float *next_keyframe;
  int blend_count;
  ulonglong total_elements;
  float current_weight;
  float angle_value;
  float interpolated_value;
  float min_boundary;
  float max_boundary;
  float animation_speed;
  float normalized_weight;
  float accumulated_weight;
  float weight_factor;
  float interpolation_factor;
  float angle_difference;
  float normalized_angle;
  float temp_angle1;
  float temp_angle2;
  float blend_result1;
  float blend_result2;
  float final_blend1;
  float final_blend2;
  float animation_progress;
  float target_weight;
  undefined1 vector_data [16];
  float blend_result3;
  float blend_result4;
  float blend_result5;
  float blend_result6;
  float blend_result7;
  float blend_result8;
  float animation_buffer [6200];
  undefined8 control_flag;
  undefined1 temp_storage [32];
  float current_time;
  float *keyframe_pointer;
  char state_flag;
  float temp_value1;
  undefined8 temp_storage3;
  float temp_value2;
  undefined8 temp_storage4;
  float temp_value3;
  float temp_value4;
  float temp_value5;
  float temp_value6;
  undefined8 temp_storage5;
  float temp_value7;
  float temp_value8;
  float temp_value9;
  float temp_value10;
  float temp_value11;
  ulonglong storage_index;
  
  storage_index = _DAT_180bf00a8 ^ (ulonglong)temp_storage;
  accumulated_weight = 0.0f;
  frame_index = 0;
  control_flag = context3;
  state_flag = blend_mode;
  current_time = time_delta;
  
  // 处理关键帧权重调整
  if (0 < (int)animation_data[0x18]) {
    current_keyframe = animation_data + 0x1b;
    next_keyframe = current_keyframe;
    blend_count = frame_index;
    
    do {
      // 提取关键帧边界值
      max_boundary = next_keyframe[1];
      current_weight = *next_keyframe;
      current_time = animation_data[0x11];
      
      // 根据时间增量调整边界
      if (max_boundary <= current_weight) {
        current_weight = current_weight - time_delta * 4.0f;
        if (current_weight <= max_boundary) {
          current_weight = max_boundary;
        }
      }
      else {
        current_weight = time_delta * 4.0f + current_weight;
        if (max_boundary <= current_weight) {
          current_weight = max_boundary;
        }
      }
      
      keyframe_pointer = next_keyframe + 0x4c9;
      *next_keyframe = current_weight;
      temp_storage1 = 0x1806597d3;
      
      // 调用动画处理函数
      FUN_18065ee60(*(undefined8 *)(next_keyframe + 0x495), animation_data + 0x1854);
      
      // 更新动画状态标志
      if ((*(char *)(next_keyframe + 0x4af) == '\0') && (*(char *)(next_keyframe + 0x4ce) != '\0')) {
        *(undefined1 *)(next_keyframe + 0x4af) = 1;
      }
      if ((*(char *)(next_keyframe + 0x4c8) == '\0') && (*(char *)(next_keyframe + 0x4d4) != '\0')) {
        *(undefined1 *)(next_keyframe + 0x4c8) = 1;
      }
      
      accumulated_weight = accumulated_weight + *next_keyframe;
      next_keyframe = next_keyframe + 0x4d6;
      blend_count = blend_count + 1;
    } while (blend_count < (int)animation_data[0x18]);
    
    // 权重归一化处理
    if (((0.0f < accumulated_weight) && (accumulated_weight != 1.0f)) && (0 < (int)animation_data[0x18])) {
      do {
        frame_index = frame_index + 1;
        *current_keyframe = (1.0f / accumulated_weight) * *current_keyframe;
        current_keyframe = current_keyframe + 0x4d6;
      } while (frame_index < (int)animation_data[0x18]);
    }
  }
  
  direction_flag = state_flag;
  temp_storage1 = 0x18065986c;
  FUN_18065cb80(animation_data);
  
  // 处理动画数据变换
  if (((animation_data[4] == 0.0f) && (animation_data[5] == 0.0f)) &&
     (0.25f < animation_data[2] * animation_data[2] + animation_data[3] * animation_data[3])) {
    *(undefined8 *)(animation_data + 4) = *(undefined8 *)(animation_data + 2);
  }
  
  temp_storage1 = *(undefined8 *)(animation_data + 4);
  temp_storage2 = *(undefined8 *)(animation_data + 2);
  temp_storage3 = temp_storage1;
  temp_storage4 = temp_storage2;
  
  if (animation_data[8] != 0.0f) {
    temp_storage1 = 0x1806598e8;
    FUN_1808fd400(-animation_data[8]);
  }
  
  temp_storage3._4_4_ = (float)((ulonglong)temp_storage1 >> 0x20);
  blend_result4 = temp_storage3._4_4_;
  temp_storage3._0_4_ = (float)temp_storage1;
  current_weight = (float)temp_storage3;
  temp_storage4._4_4_ = (float)((ulonglong)temp_storage2 >> 0x20);
  blend_result7 = temp_storage4._4_4_;
  temp_storage4._0_4_ = (float)temp_storage2;
  animation_progress = (float)temp_storage4;
  
  // 检查动画激活状态
  animation_speed = animation_data[0x185d];
  if (((animation_data[0x10] == 0.0f) || (animation_data[0x10] == 0.5f)) || (animation_speed <= 0.0f)) {
    is_active_animation = false;
  }
  else {
    is_active_animation = true;
  }
  
  temp_storage1 = 0x1806599e0;
  
  // 计算动画角度
  normalized_angle = (float)atan2f(*(uint *)(*(longlong *)(animation_params + 0x10) + 0x80) ^ 0x80000000,
                         *(undefined4 *)(*(longlong *)(animation_params + 0x10) + 0x84));
  normalized_angle = normalized_angle + animation_data[6];
  animation_data[0xb] = normalized_angle;
  
  // 角度标准化处理
  if (normalized_angle <= 3.1415927f) {
    if (normalized_angle < -3.1415927f) {
      normalized_angle = normalized_angle + 6.2831855f;
      animation_data[0xb] = normalized_angle;
    }
  }
  else {
    normalized_angle = normalized_angle - 6.2831855f;
    animation_data[0xb] = normalized_angle;
  }
  
  normalized_angle = animation_data[0x18];
  data_start = (longlong)(int)normalized_angle;
  if (0 < (int)normalized_angle) {
    if (*(char *)(data_start * 0x1358 + 0x4e + (longlong)animation_data) == '\0') {
      max_boundary = 0.0f;
    }
    else {
      max_boundary = animation_data[data_start * 0x4d6 + 0x12] * 0.05f;
    }
    
    if ((max_boundary + animation_data[data_start * 0x4d6 + 0xe] < animation_data[data_start * 0x4d6 + 0x11]) ||
       (*(char *)(animation_data + data_start * 0x4d6 + 0x13) != '\0')) {
      animation_data[0xc] = animation_data[0xb];
      normalized_angle = animation_data[0x18];
    }
    
    data_start = (longlong)(int)normalized_angle;
    if (*(char *)(data_start * 0x1358 + 0x66 + (longlong)animation_data) == '\0') {
      max_boundary = 0.0f;
    }
    else {
      max_boundary = animation_data[data_start * 0x4d6 + 0x18] * 0.05f;
    }
    
    if ((max_boundary + animation_data[data_start * 0x4d6 + 0x14] < animation_data[data_start * 0x4d6 + 0x17]) ||
       (*(char *)(animation_data + data_start * 0x4d6 + 0x19) != '\0')) {
      animation_data[0xd] = animation_data[0xb];
      normalized_angle = animation_data[0x18];
    }
  }
  
  temp_value2 = 1.0f;
  if ((((((int)normalized_angle < 1) || (animation_data[2] != 0.0f)) || (animation_data[3] != 0.0f)) || (animation_data[6] == 0.0f))
     || ((ABS(animation_data[0xb] - animation_data[0xc]) < 0.5f && (ABS(animation_data[0xb] - animation_data[0xd]) < 0.5f)))) {
    if ((is_active_animation) && ((animation_data[2] == 0.0f && (animation_data[3] == 0.0f)))) {
      goto LAB_180659b1a;
    }
    
    animation_data[0x14] = 0.0f;
    if (0.0f <= current_weight) {
      if (current_weight <= 0.0f) goto LAB_180659b1a;
      temp_value2 = 1.0f;
    }
    else {
      temp_value2 = 0.0f;
    }
  }
  else {
    is_active_animation = true;
    animation_data[0x14] = 1.0f;
LAB_180659b1a:
    if ((direction_flag == '\0') || (1.0f < animation_data[0x1854] || animation_data[0x1854] == 1.0f)) {
      if (*(char *)(animation_data + 0x17) == '\0') {
        temp_value2 = 1.0f;
      }
      else {
        temp_value2 = 0.0f;
      }
    }
  }
  
  // 处理动画进度
  if ((animation_speed <= 0.0f) && (0.0f < animation_data[0x14])) {
    animation_speed = animation_data[0xb] - animation_data[0xc];
    normalized_angle = animation_data[0xb] - animation_data[0xd];
    if (ABS(animation_speed) <= ABS(normalized_angle)) {
      animation_speed = normalized_angle;
    }
    
    if (animation_speed <= 3.1415927f) {
      if (animation_speed < -3.1415927f) {
        animation_speed = animation_speed + 6.2831855f;
      }
    }
    else {
      animation_speed = animation_speed + -6.2831855f;
    }
    
    if (animation_speed <= 0.0f) {
      animation_speed = 0.0f;
    }
    else {
      animation_speed = 0.5f;
    }
    animation_data[0x10] = animation_speed;
  }
  
  // 处理活动动画
  if ((is_active_animation) && (0 < (int)animation_data[0x18])) {
    animation_speed = 0.0f;
    current_keyframe = animation_data + 0x1b;
    total_elements = (ulonglong)(uint)animation_data[0x18];
    
    do {
      keyframe_pointer = current_keyframe + 0x495;
      normalized_angle = *current_keyframe;
      current_keyframe = current_keyframe + 0x4d6;
      animation_speed = animation_speed + *(float *)(*(longlong *)(*(longlong *)keyframe_pointer + 0x48) + 0x188) * normalized_angle;
      total_elements = total_elements - 1;
    } while (total_elements != 0);
    
    normalized_angle = animation_data[0x10];
    animation_speed = (current_time * animation_data[7]) / animation_speed + normalized_angle;
    animation_data[0x10] = animation_speed;
    
    if (animation_speed <= 1.0f) {
      if ((((normalized_angle <= 0.5f) && (0.5f < animation_speed)) && (ABS(animation_data[0xb] - animation_data[0xc]) < 0.5f)) &&
         (ABS(animation_data[0xb] - animation_data[0xd]) < 0.5f)) {
        animation_data[0x10] = 0.5f;
      }
    }
    else if ((0.5f <= ABS(animation_data[0xb] - animation_data[0xc])) || (0.5f <= ABS(animation_data[0xb] - animation_data[0xd]))) {
      animation_data[0x10] = animation_speed - 1.0f;
    }
    else {
      animation_data[0x10] = 0.0f;
    }
  }
  
  // 处理动画混合
  animation_speed = 1.0f;
  if ((((reverse_mode != '\0') || (loop_enabled != '\0')) && ((animation_data[2] != 0.0f || (animation_data[3] != 0.0f)))) ||
     (((animation_data[4] != 0.0f || (animation_data[5] != 0.0f)) || (0.0f < animation_data[0x14])))) {
    animation_speed = 0.0f;
  }
  
  normalized_angle = current_time + current_time;
  max_boundary = *animation_data - animation_data[1];
  normalized_angle = max_boundary;
  if ((normalized_angle < ABS(max_boundary)) && (normalized_angle = normalized_angle, max_boundary < 0.0f)) {
    normalized_angle = -normalized_angle;
  }
  
  animation_data[1] = animation_data[1] + normalized_angle;
  temp_storage1 = 0x180659d72;
  max_boundary = (float)FUN_18065c070(animation_data, animation_params, control_flag);
  normalized_angle = current_time;
  
  if (max_boundary <= 0.75f) {
    max_boundary = 0.75f;
  }
  
  blend_result3 = max_boundary - animation_data[0x16];
  if (0.001f <= ABS(blend_result3)) {
    max_boundary = blend_result3 * normalized_angle + animation_data[0x16];
  }
  animation_data[0x16] = max_boundary;
  
  // 处理动画权重更新
  if ((accumulated_weight <= 0.0f) || (animation_data[0x1854] <= 0.0f)) {
    animation_data[0xf] = 0.0f;
  }
  else {
    accumulated_weight = 0.0f;
    if (0 < (int)animation_data[0x18]) {
      current_keyframe = animation_data + 0x1b;
      total_elements = (ulonglong)(uint)animation_data[0x18];
      
      do {
        keyframe_pointer = current_keyframe + 0x495;
        max_boundary = *current_keyframe;
        current_keyframe = current_keyframe + 0x4d6;
        accumulated_weight = accumulated_weight + *(float *)(**(longlong **)keyframe_pointer + 0x188) * max_boundary;
        total_elements = total_elements - 1;
      } while (total_elements != 0);
    }
    
    temp_storage1 = 0x180659e10;
    accumulated_weight = (float)fmodf(normalized_angle / accumulated_weight + animation_data[0xf], 0x3f800000);
    animation_data[0xf] = accumulated_weight;
  }
  
  accumulated_weight = animation_data[0x18];
  frame_index = 0;
  max_boundary = 0.0f;
  if (0 < (int)accumulated_weight) {
    current_keyframe = animation_data + 0x1b;
    
    do {
      temp_storage1 = 0x180659e3d;
      blend_result6 = (float)FUN_18065bf60(animation_data, frame_index);
      normalized_angle = *current_keyframe;
      frame_index = frame_index + 1;
      current_keyframe = current_keyframe + 0x4d6;
      max_boundary = max_boundary + blend_result6 * normalized_angle;
    } while (frame_index < (int)accumulated_weight);
  }
  
  // 处理动画混合结果
  if (animation_speed < 1.0f) {
    if (animation_data[0x1854] <= 1.0f && animation_data[0x1854] != 1.0f) {
      accumulated_weight = max_boundary * normalized_angle + animation_data[0xe];
      animation_data[0xe] = accumulated_weight;
      if (1.0f < accumulated_weight) {
        animation_data[0xe] = accumulated_weight - 1.0f;
      }
    }
    else if ((int)accumulated_weight < 1) {
      animation_data[0xe] = 0.0f;
    }
    else {
      if (*(char *)(animation_data + 0x17) == '\0') {
        normalized_angle = 1.0f;
      }
      else {
        normalized_angle = -1.0f;
      }
      
      data_start = *(longlong *)(animation_data + (longlong)(int)accumulated_weight * 0x4d6 + -0x26);
      temp_storage1 = 0x180659ea7;
      data_end = FUN_18065fd40(*(undefined8 *)(data_start + 8));
      keyframe_data = 0x14;
      
      if (0.0f <= (blend_result7 - ABS(animation_progress)) * normalized_angle) {
        keyframe_data = 0x18;
      }
      
      accumulated_weight = *(float *)(keyframe_data + data_end);
      temp_storage1 = 0x180659edd;
      FUN_18065fd40(*(undefined8 *)(data_start + 8));
      animation_data[0xe] = accumulated_weight;
    }
  }
  
  // 计算最终动画结果
  accumulated_weight = blend_result4 * blend_result4 + current_weight * current_weight;
  accumulated_weight = (float)(accumulated_weight <= 1.1754944e-38f) * 1.1754944e-38f + accumulated_weight;
  
  vector_data = rsqrtss(ZEXT416((uint)accumulated_weight), ZEXT416((uint)accumulated_weight));
  normalized_angle = vector_data._0_4_;
  
  if (-0.2f <= blend_result4 * normalized_angle * 0.5f * (3.0f - accumulated_weight * normalized_angle * normalized_angle)) {
    accumulated_weight = 1.0f;
  }
  else {
    accumulated_weight = 0.0f;
  }
  
  animation_data[0x13] = accumulated_weight;
  normalized_angle = animation_progress;
  blend_result3 = blend_result7;
  
  if ((current_weight != 0.0f) || (blend_result4 != 0.0f)) {
    if (0.0f <= animation_progress * current_weight) {
      if (ABS(animation_progress) < ABS(current_weight)) {
        normalized_angle = current_weight;
      }
    }
    else {
      normalized_angle = animation_progress + current_weight;
    }
    
    if (0.0f <= blend_result4 * blend_result7) {
      if (ABS(blend_result7) < ABS(blend_result4)) {
        blend_result3 = blend_result4;
      }
    }
    else {
      blend_result3 = blend_result7 + blend_result4;
    }
  }
  
  temp_storage1 = 0x18065a04d;
  temp_storage3 = temp_storage2;
  normalized_angle = (float)atan2f(-normalized_angle, blend_result3);
  normalized_angle = ABS(normalized_angle);
  
  if (1.5707964f < normalized_angle) {
    normalized_angle = 3.1415927f - normalized_angle;
  }
  
  normalized_angle = normalized_angle * 0.63661975f;
  blend_result3 = (1.0f - blend_weight) * 0.3f;
  
  if (blend_result3 + 0.05f <= normalized_angle) {
    if (0.95f - blend_result3 < normalized_angle) {
      normalized_angle = 1.0f;
    }
  }
  else {
    normalized_angle = 0.0f;
  }
  
  blend_result6 = normalized_angle - animation_data[0x15];
  blend_result5 = ABS(blend_result6);
  blend_result3 = normalized_angle;
  
  if (0.001f <= blend_result5) {
    temp_value1 = current_time;
    if (blend_result6 < 0.0f) {
      temp_value1 = -current_time;
    }
    
    blend_result6 = 0.1f;
    if ((0.1f <= blend_result5) && (blend_result6 = blend_result5, 0.5f <= blend_result5)) {
      blend_result6 = 0.5f;
    }
    
    blend_result6 = temp_value1 * blend_result6 * 12.0f;
    if (ABS(blend_result6) <= blend_result5) {
      blend_result3 = animation_data[0x15] + blend_result6;
    }
  }
  
  animation_data[0x15] = blend_result3;
  
  // 处理动画状态转换
  if ((((blend_result7 <= -0.1f) || (loop_enabled == '\0')) || (reverse_mode != '\0')) || (blend_result4 <= -0.1f)) {
LAB_18065a17c:
    if ((animation_data[0x11] <= 0.0f) || (1.0f <= animation_data[0x11])) {
      animation_data[0x11] = 0.0f;
      animation_data[0x12] = -1.0f;
      goto LAB_18065a2e9;
    }
  }
  else {
    blend_result4 = blend_result7 * blend_result7 + blend_result7 * blend_result7;
    blend_result4 = blend_result4 + blend_result4;
    if (blend_result4 <= 1.0f) {
      blend_result4 = 1.0f;
    }
    if (-blend_result4 <= animation_progress * current_weight) goto LAB_18065a17c;
  }
  
  blend_result4 = animation_data[0x11];
  if (blend_result4 == 0.0f) {
    *(bool *)((longlong)animation_data + 0x5d) = current_weight < 0.0f;
  }
  
  blend_result4 = (*(float *)(*(longlong *)
                        (*(longlong *)(animation_data + (longlong)(int)animation_data[0x18] * 0x4d6 + -0x26) + 8)
                      + 0x188) /
           *(float *)(*(longlong *)
                       (*(longlong *)(animation_data + (longlong)(int)animation_data[0x18] * 0x4d6 + -0x26) + 0x38
                       ) + 0x188)) * max_boundary * current_time + blend_result4;
  
  if (1.0f <= blend_result4) {
    blend_result4 = 1.0f;
  }
  
  animation_data[0x11] = blend_result4;
  
  if (animation_data[0x12] <= 0.0f && animation_data[0x12] != 0.0f) {
    if (*(char *)((longlong)animation_data + 0x5d) == '\0') {
      animation_progress = 1.0f;
    }
    else {
      animation_progress = -1.0f;
    }
    
    if (0.0f <= animation_progress * current_weight) {
      current_weight = blend_result4;
      if (*(char *)((longlong)animation_data + 0x5d) == '\0') {
        temp_storage1 = 0x18065a252;
        current_weight = (float)fmodf(blend_result4 + 0.5f, 0x3f800000);
      }
      
      current_weight = current_weight - animation_data[0xe];
      if (current_weight <= 0.5f) {
        if (current_weight < -0.5f) {
          current_weight = current_weight + 1.0f;
        }
      }
      else {
        current_weight = current_weight + -1.0f;
      }
      
      animation_progress = blend_result4 * blend_result4 * blend_result4 + current_time;
      if (1.0f <= animation_progress) {
        animation_progress = 1.0f;
      }
      
      current_weight = animation_progress * blend_result4 * current_weight + animation_data[0xe];
      animation_data[0xe] = current_weight;
      
      if (0.0f <= current_weight) {
        if (1.0f <= current_weight) {
          animation_data[0xe] = current_weight - 1.0f;
        }
      }
      else {
        animation_data[0xe] = current_weight + 1.0f;
      }
    }
    else {
      animation_data[0x12] = blend_result4 + 0.25f;
    }
  }
  
LAB_18065a2e9:
  normalized_angle = animation_data[0x14];
  blend_result4 = 0.0f;
  temp_value10 = (1.0f - normalized_angle) * (1.0f - animation_speed);
  storage_index = (1.0f - animation_speed) * normalized_angle;
  temp_value3 = (1.0f - accumulated_weight) * temp_value10;
  temp_value9 = (1.0f - normalized_angle) * accumulated_weight * temp_value10;
  temp_value8 = (1.0f - normalized_angle) * temp_value3;
  temp_storage4 = CONCAT44(temp_storage4._4_4_, temp_value9);
  temp_value7 = accumulated_weight * temp_value10 * normalized_angle;
  temp_value3 = temp_value3 * normalized_angle;
  temp_value10 = temp_value10 * normalized_angle;
  temp_value6 = temp_value7 * temp_value2;
  temp_value5 = temp_value3 * temp_value2;
  temp_value4 = (1.0f - temp_value2) * temp_value3;
  temp_value11 = (1.0f - temp_value2) * temp_value7;
  temp_storage3 = CONCAT44(temp_storage3._4_4_, temp_value4);
  
  // 处理动画速度调整
  if ((direction_flag == '\0') || (0.0f < temp_value2)) {
    if (normalized_angle <= 0.0f) {
      accumulated_weight = 3.0f;
    }
    else {
      accumulated_weight = 5.0f;
    }
  }
  else {
    accumulated_weight = 2.0f;
  }
  
  normalized_angle = animation_data[0x184a];
  if (animation_speed <= normalized_angle) {
    normalized_angle = normalized_angle - accumulated_weight * current_time;
    if (normalized_angle <= animation_speed) {
      normalized_angle = animation_speed;
    }
  }
  else {
    normalized_angle = normalized_angle + accumulated_weight * current_time;
    if (animation_speed <= normalized_angle) {
      normalized_angle = animation_speed;
    }
  }
  
  animation_data[0x184a] = normalized_angle;
  animation_data[0x1854] = normalized_angle;
  
  accumulated_weight = animation_data[0x11];
  if (0.2f <= accumulated_weight) {
    normalized_angle = 1.0f;
    if (0.7f < accumulated_weight) {
      normalized_angle = (1.0f - accumulated_weight) * 3.333333f;
    }
  }
  else {
    normalized_angle = accumulated_weight * 5.0f;
  }
  
  if (0.0f < animation_data[0x12]) {
    accumulated_weight = (animation_data[0x12] - accumulated_weight) * 4.0f;
    if (accumulated_weight <= 0.0f) {
      accumulated_weight = 0.0f;
    }
    normalized_angle = normalized_angle * accumulated_weight;
  }
  
  current_keyframe = animation_data + 0x1855;
  frame_index = 1;
  
  do {
    accumulated_weight = *(float *)(((longlong)animation_buffer - (longlong)animation_data) + (longlong)current_keyframe);
    animation_progress = accumulated_weight - current_keyframe[-10];
    blend_result3 = ABS(animation_progress);
    
    if (0.001f <= blend_result3) {
      if (animation_progress < 0.0f) {
        normalized_angle = -1.0f;
      }
      else {
        normalized_angle = 1.0f;
      }
      
      if (0.05f <= blend_result3) {
        if (0.5f <= blend_result3) {
          blend_result3 = 0.5f;
        }
      }
      else {
        blend_result3 = 0.05f;
      }
      
      blend_result3 = blend_result3 * normalized_angle * current_time * 6.0f;
      if (blend_result3 * normalized_angle <= normalized_angle * animation_progress) {
        accumulated_weight = current_keyframe[-10] + blend_result3;
      }
    }
    
    current_keyframe[-10] = accumulated_weight;
    *current_keyframe = accumulated_weight;
    
    if (2 < frame_index) {
      if (frame_index < 7) {
        animation_progress = 1.0f - normalized_angle;
      }
      else {
        animation_progress = normalized_angle;
        if (frame_index == 7) {
          if (*(char *)((longlong)animation_data + 0x5d) != '\0') {
LAB_18065a5be:
            animation_progress = 0.0f;
          }
        }
        else {
          if (frame_index != 8) goto LAB_18065a5d3;
          if (*(char *)((longlong)animation_data + 0x5d) == '\0') goto LAB_18065a5be;
        }
      }
      accumulated_weight = animation_progress * accumulated_weight;
      *current_keyframe = accumulated_weight;
    }
    
LAB_18065a5d3:
    animation_progress = *(float *)((longlong)animation_buffer + (4 - (longlong)animation_data) + (longlong)current_keyframe);
    blend_result3 = animation_progress - current_keyframe[-9];
    normalized_angle = ABS(blend_result3);
    
    if (0.001f <= normalized_angle) {
      if (blend_result3 < 0.0f) {
        max_boundary = -1.0f;
      }
      else {
        max_boundary = 1.0f;
      }
      
      if (0.05f <= normalized_angle) {
        if (0.5f <= normalized_angle) {
          normalized_angle = 0.5f;
        }
      }
      else {
        normalized_angle = 0.05f;
      }
      
      normalized_angle = normalized_angle * max_boundary * current_time * 6.0f;
      if (normalized_angle * max_boundary <= max_boundary * blend_result3) {
        animation_progress = current_keyframe[-9] + normalized_angle;
      }
    }
    
    blend_count = frame_index + 1;
    current_keyframe[-9] = animation_progress;
    current_keyframe[1] = animation_progress;
    
    if (2 < blend_count) {
      if (blend_count < 7) {
        normalized_angle = 1.0f - normalized_angle;
      }
      else {
        normalized_angle = normalized_angle;
        if (blend_count == 7) {
          if (*(char *)((longlong)animation_data + 0x5d) != '\0') {
LAB_18065a686:
            normalized_angle = 0.0f;
          }
        }
        else {
          if (blend_count != 8) goto LAB_18065a69c;
          if (*(char *)((longlong)animation_data + 0x5d) == '\0') goto LAB_18065a686;
        }
      }
      animation_progress = normalized_angle * animation_progress;
      current_keyframe[1] = animation_progress;
    }
    
LAB_18065a69c:
    animation_progress = *(float *)((longlong)animation_buffer + (8 - (longlong)animation_data) + (longlong)current_keyframe);
    normalized_angle = animation_progress - current_keyframe[-8];
    max_boundary = ABS(normalized_angle);
    
    if (0.001f <= max_boundary) {
      if (normalized_angle < 0.0f) {
        blend_result3 = -1.0f;
      }
      else {
        blend_result3 = 1.0f;
      }
      
      if (0.05f <= max_boundary) {
        if (0.5f <= max_boundary) {
          max_boundary = 0.5f;
        }
      }
      else {
        max_boundary = 0.05f;
      }
      
      max_boundary = max_boundary * blend_result3 * current_time * 6.0f;
      if (max_boundary * blend_result3 <= blend_result3 * normalized_angle) {
        animation_progress = current_keyframe[-8] + max_boundary;
      }
    }
    
    blend_count = frame_index + 2;
    current_keyframe[-8] = animation_progress;
    current_keyframe[2] = animation_progress;
    
    if (2 < blend_count) {
      if (blend_count < 7) {
        normalized_angle = 1.0f - normalized_angle;
      }
      else {
        normalized_angle = normalized_angle;
        if (blend_count == 7) {
          if (*(char *)((longlong)animation_data + 0x5d) != '\0') {
LAB_18065a74f:
            normalized_angle = 0.0f;
          }
        }
        else {
          if (blend_count != 8) goto LAB_18065a765;
          if (*(char *)((longlong)animation_data + 0x5d) == '\0') goto LAB_18065a74f;
        }
      }
      animation_progress = normalized_angle * animation_progress;
      current_keyframe[2] = animation_progress;
    }
    
LAB_18065a765:
    frame_index = frame_index + 3;
    blend_result4 = blend_result4 + accumulated_weight + animation_progress + animation_progress;
    current_keyframe = current_keyframe + 3;
    
    if (9 < frame_index) {
      accumulated_weight = animation_data[0x1854];
      accumulated_weight = 1.0f - ((accumulated_weight * 6.0f - 15.0f) * accumulated_weight + 10.0f) * accumulated_weight * accumulated_weight * accumulated_weight;
      
      if (blend_result4 != accumulated_weight) {
        if (blend_result4 <= 0.0f) {
          animation_data[0x1854] = 1.0f;
        }
        else {
          accumulated_weight = accumulated_weight / blend_result4;
          animation_data[0x1855] = animation_data[0x1855] * accumulated_weight;
          animation_data[0x1856] = animation_data[0x1856] * accumulated_weight;
          animation_data[0x1857] = animation_data[0x1857] * accumulated_weight;
          animation_data[0x1858] = animation_data[0x1858] * accumulated_weight;
          animation_data[0x1859] = animation_data[0x1859] * accumulated_weight;
          animation_data[0x185a] = animation_data[0x185a] * accumulated_weight;
          animation_data[0x185b] = animation_data[0x185b] * accumulated_weight;
          animation_data[0x185c] = animation_data[0x185c] * accumulated_weight;
          animation_data[0x185d] = accumulated_weight * animation_data[0x185d];
        }
      }
      
      blend_result4 = temp_value9 - temp_value8;
      animation_progress = ((((temp_value3 + temp_value7) * temp_value2 + temp_value10) - temp_value11) - temp_value4) - temp_value10;
      accumulated_weight = blend_result4 * blend_result4 + animation_progress * animation_progress;
      accumulated_weight = (float)(accumulated_weight <= 1.1754944e-38f) * 1.1754944e-38f + accumulated_weight;
      
      vector_data = rsqrtss(ZEXT416((uint)accumulated_weight), ZEXT416((uint)accumulated_weight));
      normalized_angle = vector_data._0_4_;
      accumulated_weight = normalized_angle * 0.5f * (3.0f - accumulated_weight * normalized_angle * normalized_angle);
      blend_result4 = accumulated_weight * blend_result4;
      accumulated_weight = accumulated_weight * animation_progress;
      temp_storage3 = CONCAT44(blend_result4, accumulated_weight);
      
      if (ABS(accumulated_weight * animation_data[0x185e] + blend_result4 * animation_data[0x185f]) <= 0.999f) {
        animation_progress = animation_data[0x1855] - animation_data[0x1856];
        blend_result3 = (((animation_data[0x1858] + animation_data[0x1857] + animation_data[0x185b]) - animation_data[0x1859]) -
                 animation_data[0x185a]) - animation_data[0x185c];
        accumulated_weight = animation_progress * animation_progress + blend_result3 * blend_result3;
        accumulated_weight = (float)(accumulated_weight <= 1.1754944e-38f) * 1.1754944e-38f + accumulated_weight;
        
        vector_data = rsqrtss(ZEXT416((uint)accumulated_weight), ZEXT416((uint)accumulated_weight));
        normalized_angle = vector_data._0_4_;
        blend_result4 = current_time * 8.0f;
        accumulated_weight = normalized_angle * 0.5f * (3.0f - accumulated_weight * normalized_angle * normalized_angle);
        temp_storage3 = CONCAT44(accumulated_weight * animation_progress * blend_result4 + (1.0f - blend_result4) * animation_data[0x185f],
                              accumulated_weight * blend_result3 * blend_result4 + (1.0f - blend_result4) * animation_data[0x185e]);
        *(undefined8 *)(animation_data + 0x185e) = temp_storage3;
        blend_result4 = animation_data[0x185f];
        normalized_angle = animation_data[0x185e];
        blend_result3 = normalized_angle * normalized_angle + blend_result4 * blend_result4;
        
        vector_data = rsqrtss(ZEXT416((uint)blend_result3), ZEXT416((uint)blend_result3));
        animation_progress = vector_data._0_4_;
        blend_result3 = animation_progress * 0.5f * (3.0f - blend_result3 * animation_progress * animation_progress);
        animation_data[0x185f] = blend_result3 * blend_result4;
        animation_data[0x185e] = blend_result3 * normalized_angle;
      }
      else {
        *(undefined8 *)(animation_data + 0x185e) = temp_storage3;
      }
      
      temp_storage1 = 0x18065aa9f;
      temp_value7 = animation_speed;
      temp_value4 = temp_value11;
      temp_value11 = temp_value10;
      temp_value10 = temp_value10;
      FUN_1808fc050(storage_index ^ (ulonglong)temp_storage);
    }
  } while( true );
}

/*========================================================================================
文件说明
========================================================================================*/

/**
 * 文件功能概述：
 * 该文件实现了UI系统的高级向量处理和动画控制功能，主要包含以下核心模块：
 * 
 * 1. 向量归一化处理模块
 *    - 支持基本向量和高级向量归一化
 *    - 使用优化的快速倒数平方根算法
 *    - 提供缩放因子调整功能
 * 
 * 2. UI动画处理模块
 *    - 复杂的动画数据处理和控制
 *    - 支持关键帧插值和权重计算
 *    - 提供角度标准化和范围限制
 *    - 支持多种动画模式和状态管理
 * 
 * 3. 系统架构特点
 *    - 模块化设计，便于扩展和维护
 *    - 高性能算法，支持实时UI处理
 *    - 完整的错误处理和边界检查
 *    - 灵活的参数配置系统
 * 
 * 主要应用场景：
 * - 游戏UI系统中的动画控制
 * - 用户界面的平滑过渡效果
 * - 复杂的UI元素变换和插值
 * - 实时的UI状态管理和更新
 */