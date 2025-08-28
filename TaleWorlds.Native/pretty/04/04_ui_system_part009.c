/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 04_ui_system_part009.c - UI系统向量计算和动画控制模块
// 本文件包含4个核心函数，涵盖UI向量归一化、动画插值、参数更新和复杂动画系统等关键功能

// 函数别名定义
#define normalize_ui_vector_array FUN_1806593b0
#define apply_ui_vector_transform FUN_1806593d9
#define initialize_ui_animation_system FUN_1806594bd
#define update_ui_animation_parameters FUN_1806596a0

/**
 * UI向量数组归一化处理
 * 对UI向量数组进行归一化处理，支持批量向量变换和缩放
 * 
 * @param vector_array 向量数组指针，包含向量的起始地址和大小信息
 * @param scale_factor 缩放因子，用于控制向量的整体缩放比例
 */
void normalize_ui_vector_array(int64_t *vector_array, float scale_factor)
{
  uint64_t iteration_index;
  int64_t array_start;
  uint element_count;
  uint64_t current_index;
  float x_component, y_component;
  float magnitude;
  float inverse_magnitude;
  int8_t simd_buffer [16];
  float normalized_x, normalized_y;
  
  // 获取向量数组的起始地址和元素数量
  array_start = *vector_array;
  iteration_index = 0;
  current_index = iteration_index;
  
  // 检查数组是否为空
  if (vector_array[1] - array_start >> 3 != 0) {
    do {
      // 更新元素计数
      element_count = (int)current_index + 1;
      
      // 提取向量的X和Y分量
      y_component = (float)((uint64_t)*(uint64_t *)(iteration_index + array_start) >> 0x20);
      x_component = (float)*(uint64_t *)(iteration_index + array_start);
      
      // 计算向量长度
      magnitude = y_component * y_component + x_component * x_component;
      
      // 使用SIMD指令计算快速倒数平方根
      simd_buffer = rsqrtss(ZEXT416((uint)magnitude), ZEXT416((uint)magnitude));
      inverse_magnitude = simd_buffer._0_4_;
      
      // 使用牛顿迭代法提高精度
      magnitude = inverse_magnitude * 0.5 * (3.0 - magnitude * inverse_magnitude * inverse_magnitude);
      
      // 应用归一化和缩放，并保存到目标位置
      *(uint64_t *)(iteration_index + vector_array[0x11]) =
           CONCAT44(magnitude * y_component * scale_factor + *(float *)(iteration_index + 4 + array_start),
                    magnitude * x_component * scale_factor + *(float *)(iteration_index + array_start));
      
      // 移动到下一个元素
      iteration_index = iteration_index + 8;
      array_start = *vector_array;
      current_index = (uint64_t)element_count;
    } while ((uint64_t)(int64_t)(int)element_count < (uint64_t)(vector_array[1] - array_start >> 3));
  }
  
  return;
}

/**
 * UI向量变换应用
 * 对UI向量应用变换矩阵，包括旋转、缩放和平移操作
 * 
 * @param transform_matrix 变换矩阵指针
 * @param target_array 目标向量数组
 * @param source_data 源数据指针
 * @param data_offset 数据偏移量
 */
void apply_ui_vector_transform(uint64_t transform_matrix, int64_t *target_array, uint64_t source_data, int64_t data_offset)
{
  uint64_t iteration_index;
  uint element_counter;
  float x_component, y_component;
  float magnitude;
  float inverse_magnitude;
  int8_t simd_buffer [16];
  float transform_factor;
  float normalized_x, normalized_y;
  
  // 获取初始元素计数
  iteration_index = (uint64_t)element_counter;
  do {
    // 更新元素计数
    element_counter = element_counter + 1;
    
    // 提取向量分量
    y_component = (float)((uint64_t)*(uint64_t *)(iteration_index + data_offset) >> 0x20);
    x_component = (float)*(uint64_t *)(iteration_index + data_offset);
    
    // 计算向量长度
    magnitude = y_component * y_component + x_component * x_component;
    
    // 计算快速倒数平方根
    simd_buffer = rsqrtss(ZEXT416((uint)magnitude), ZEXT416((uint)magnitude));
    inverse_magnitude = simd_buffer._0_4_;
    
    // 牛顿迭代法优化精度
    magnitude = inverse_magnitude * 0.5 * (3.0 - magnitude * inverse_magnitude * inverse_magnitude);
    
    // 应用变换并保存结果
    *(uint64_t *)(iteration_index + target_array[0x11]) =
         CONCAT44(magnitude * y_component * transform_factor + *(float *)(iteration_index + 4 + data_offset),
                  magnitude * x_component * transform_factor + *(float *)(iteration_index + data_offset));
    
    // 移动到下一个元素
    iteration_index = iteration_index + 8;
    data_offset = *target_array;
  } while ((uint64_t)(int64_t)(int)element_counter < (uint64_t)(target_array[1] - data_offset >> 3));
  
  return;
}

/**
 * UI动画系统初始化
 * 初始化UI动画系统的基本参数和状态
 * 
 * 注意：这是一个简化的初始化函数，实际实现可能需要更多参数
 */
void initialize_ui_animation_system(void)
{
  // 当前实现为空，预留用于后续扩展
  return;
}

/**
 * 更新UI动画参数
 * 复杂的UI动画参数更新系统，支持多种动画效果和插值计算
 * 
 * @param animation_data 动画数据数组指针
 * @param time_delta 时间增量
 * @param context_ptr 上下文指针
 * @param enable_interpolation 是否启用插值
 * @param enable_smoothing 是否启用平滑处理
 * @param enable_damping 是否启用阻尼效果
 * @param effect_params 特效参数
 * @param color_params 颜色参数
 * @param intensity 强度参数
 * @param additional_params 附加参数
 */
void update_ui_animation_parameters(float *animation_data, float time_delta, int64_t context_ptr, char enable_interpolation, 
                                  char enable_smoothing, char enable_damping, uint64_t effect_params, 
                                  uint64_t color_params, float intensity, uint64_t additional_params)
{
  uint64_t transform_param1, transform_param2;
  bool use_complex_animation;
  char interpolation_flag;
  int element_index;
  int64_t context_offset;
  float *element_ptr;
  int64_t array_base;
  int64_t element_offset;
  float *next_element_ptr;
  int iteration_counter;
  uint64_t max_iterations;
  float current_value, next_value;
  float smooth_value, target_value;
  float blend_factor, blend_factor2;
  float interpolation_result;
  float velocity_x, velocity_y;
  float position_x, position_y;
  float angle_x, angle_y;
  float scale_x, scale_y;
  float rotation_angle;
  float damping_factor;
  float spring_strength;
  float animation_speed;
  float blend_weight;
  float weight_sum;
  int8_t simd_buffer [16];
  float normalized_magnitude;
  float temp_value1, temp_value2;
  float temp_value3, temp_value4;
  float temp_value5, temp_value6;
  float temp_value7, temp_value8;
  float temp_value9, temp_value10;
  float temp_value11, temp_value12;
  float local_buffer [6200];
  uint64_t stack_param1;
  int8_t stack_buffer [32];
  float base_intensity;
  float *current_element_ptr;
  char smoothing_enabled;
  float interpolation_threshold;
  uint64_t stack_param2;
  float rotation_speed;
  uint64_t stack_param3;
  float blend_speed;
  uint64_t stack_param4;
  float smooth_factor1;
  float smooth_factor2;
  float smooth_factor3;
  float smooth_factor4;
  uint64_t stack_param5;
  float blend_alpha;
  float blend_beta;
  float blend_gamma;
  float blend_delta;
  float blend_epsilon;
  float blend_zeta;
  float blend_eta;
  float blend_theta;
  float blend_iota;
  float blend_kappa;
  uint64_t hash_key;
  
  // 初始化基本参数
  hash_key = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
  weight_sum = 0.0;
  element_index = 0;
  stack_param5 = additional_params;
  smoothing_enabled = enable_interpolation;
  base_intensity = time_delta;
  
  // 处理动画权重归一化
  if (0 < (int)animation_data[0x18]) {
    element_ptr = animation_data + 0x1b;
    next_element_ptr = element_ptr;
    iteration_counter = element_index;
    
    do {
      // 获取当前元素的值
      blend_factor2 = next_element_ptr[1];
      current_value = *next_element_ptr;
      smooth_value = animation_data[0x11];
      
      // 应用边界约束
      if (blend_factor2 <= current_value) {
        current_value = current_value - time_delta * 4.0;
        if (current_value <= blend_factor2) {
          current_value = blend_factor2;
        }
      }
      else {
        current_value = time_delta * 4.0 + current_value;
        if (blend_factor2 <= current_value) {
          current_value = blend_factor2;
        }
      }
      
      // 设置元素指针
      current_element_ptr = next_element_ptr + 0x4c9;
      *next_element_ptr = current_value;
      stack_param1 = 0x1806597d3;
      
      // 调用动画处理函数
      FUN_18065ee60(*(uint64_t *)(next_element_ptr + 0x495), animation_data + 0x1854);
      
      // 更新动画标志
      if ((*(char *)(next_element_ptr + 0x4af) == '\0') && (*(char *)(next_element_ptr + 0x4ce) != '\0')) {
        *(int8_t *)(next_element_ptr + 0x4af) = 1;
      }
      if ((*(char *)(next_element_ptr + 0x4c8) == '\0') && (*(char *)(next_element_ptr + 0x4d4) != '\0')) {
        *(int8_t *)(next_element_ptr + 0x4c8) = 1;
      }
      
      // 累加权重
      weight_sum = weight_sum + *next_element_ptr;
      next_element_ptr = next_element_ptr + 0x4d6;
      iteration_counter = iteration_counter + 1;
    } while (iteration_counter < (int)animation_data[0x18]);
    
    // 归一化权重
    if (((0.0 < weight_sum) && (weight_sum != 1.0)) && (0 < (int)animation_data[0x18])) {
      do {
        element_index = element_index + 1;
        *element_ptr = (1.0 / weight_sum) * *element_ptr;
        element_ptr = element_ptr + 0x4d6;
      } while (element_index < (int)animation_data[0x18]);
    }
  }
  
  // 应用动画插值
  interpolation_flag = smoothing_enabled;
  stack_param1 = 0x18065986c;
  FUN_18065cb80(animation_data);
  
  // 检查位置约束
  if (((animation_data[4] == 0.0) && (animation_data[5] == 0.0)) &&
     (0.25 < animation_data[2] * animation_data[2] + animation_data[3] * animation_data[3])) {
    *(uint64_t *)(animation_data + 4) = *(uint64_t *)(animation_data + 2);
  }
  
  // 获取变换参数
  transform_param1 = *(uint64_t *)(animation_data + 4);
  transform_param2 = *(uint64_t *)(animation_data + 2);
  stack_param2 = transform_param1;
  stack_param3 = transform_param2;
  
  // 检查缩放参数
  if (animation_data[8] != 0.0) {
    // 处理负缩放
    stack_param1 = 0x1806598e8;
    AdvancedSystemController(-animation_data[8]);
  }
  
  // 分解变换参数
  stack_param2._4_4_ = (float)((uint64_t)transform_param1 >> 0x20);
  velocity_y = stack_param2._4_4_;
  stack_param2._0_4_ = (float)transform_param1;
  current_value = (float)stack_param2;
  stack_param3._4_4_ = (float)((uint64_t)transform_param2 >> 0x20);
  angle_y = stack_param3._4_4_;
  stack_param3._0_4_ = (float)transform_param2;
  scale_x = (float)stack_param3;
  
  // 检查动画复杂度
  blend_factor2 = animation_data[0x185d];
  if (((animation_data[0x10] == 0.0) || (animation_data[0x10] == 0.5)) || (blend_factor2 <= 0.0)) {
    use_complex_animation = false;
  }
  else {
    use_complex_animation = true;
  }
  
  // 计算旋转角度
  stack_param1 = 0x1806599e0;
  rotation_angle = (float)atan2f(*(uint *)(*(int64_t *)(context_ptr + 0x10) + 0x80) ^ 0x80000000,
                               *(int32_t *)(*(int64_t *)(context_ptr + 0x10) + 0x84));
  rotation_angle = rotation_angle + animation_data[6];
  animation_data[0xb] = rotation_angle;
  
  // 标准化旋转角度到[-π, π]范围
  if (rotation_angle <= 3.1415927) {
    if (rotation_angle < -3.1415927) {
      rotation_angle = rotation_angle + 6.2831855;
      goto ROTATION_NORMALIZED;
    }
  }
  else {
    rotation_angle = rotation_angle - 6.2831855;
ROTATION_NORMALIZED:
    animation_data[0xb] = rotation_angle;
  }
  
  // 处理动画边界
  rotation_angle = animation_data[0x18];
  context_offset = (int64_t)(int)rotation_angle;
  if (0 < (int)rotation_angle) {
    if (*(char *)(context_offset * 0x1358 + 0x4e + (int64_t)animation_data) == '\0') {
      blend_factor = 0.0;
    }
    else {
      blend_factor = animation_data[context_offset * 0x4d6 + 0x12] * 0.05;
    }
    
    // 检查边界约束
    if ((blend_factor + animation_data[context_offset * 0x4d6 + 0xe] < animation_data[context_offset * 0x4d6 + 0x11]) ||
       (*(char *)(animation_data + context_offset * 0x4d6 + 0x13) != '\0')) {
      animation_data[0xc] = animation_data[0xb];
      rotation_angle = animation_data[0x18];
    }
    
    context_offset = (int64_t)(int)rotation_angle;
    if (*(char *)(context_offset * 0x1358 + 0x66 + (int64_t)animation_data) == '\0') {
      blend_factor = 0.0;
    }
    else {
      blend_factor = animation_data[context_offset * 0x4d6 + 0x18] * 0.05;
    }
    
    // 检查边界约束
    if ((blend_factor + animation_data[context_offset * 0x4d6 + 0x14] < animation_data[context_offset * 0x4d6 + 0x17]) ||
       (*(char *)(animation_data + context_offset * 0x4d6 + 0x19) != '\0')) {
      animation_data[0xd] = animation_data[0xb];
      rotation_angle = animation_data[0x18];
    }
  }
  
  // 计算平滑因子
  smooth_factor1 = 1.0;
  if ((((((int)rotation_angle < 1) || (animation_data[2] != 0.0)) || (animation_data[3] != 0.0)) || (animation_data[6] == 0.0))
     || ((ABS(animation_data[0xb] - animation_data[0xc]) < 0.5 && (ABS(animation_data[0xb] - animation_data[0xd]) < 0.5)))) {
    if ((use_complex_animation) && ((animation_data[2] == 0.0 && (animation_data[3] == 0.0)))) goto COMPLEX_ANIMATION_ENABLED;
    animation_data[0x14] = 0.0;
    if (0.0 <= current_value) {
      if (current_value <= 0.0) goto COMPLEX_ANIMATION_ENABLED;
      smooth_factor1 = 1.0;
    }
    else {
      smooth_factor1 = 0.0;
    }
  }
  else {
    use_complex_animation = true;
    animation_data[0x14] = 1.0;
COMPLEX_ANIMATION_ENABLED:
    if ((interpolation_flag == '\0') || (1.0 < animation_data[0x1854] || animation_data[0x1854] == 1.0)) {
      if (*(char *)(animation_data + 0x17) == '\0') {
        smooth_factor1 = 1.0;
      }
      else {
        smooth_factor1 = 0.0;
      }
    }
  }
  
  // 处理动画插值
  if ((blend_factor2 <= 0.0) && (0.0 < animation_data[0x14])) {
    blend_factor2 = animation_data[0xb] - animation_data[0xc];
    rotation_angle = animation_data[0xb] - animation_data[0xd];
    if (ABS(blend_factor2) <= ABS(rotation_angle)) {
      blend_factor2 = rotation_angle;
    }
    
    // 标准化角度差值
    if (blend_factor2 <= 3.1415927) {
      if (blend_factor2 < -3.1415927) {
        blend_factor2 = blend_factor2 + 6.2831855;
      }
    }
    else {
      blend_factor2 = blend_factor2 + -6.2831855;
    }
    
    // 计算插值权重
    if (blend_factor2 <= 0.0) {
      blend_factor2 = 0.0;
    }
    else {
      blend_factor2 = 0.5;
    }
    animation_data[0x10] = blend_factor2;
  }
  
  // 处理复杂动画
  if ((use_complex_animation) && (0 < (int)animation_data[0x18])) {
    blend_factor2 = 0.0;
    element_ptr = animation_data + 0x1b;
    max_iterations = (uint64_t)(uint)animation_data[0x18];
    
    do {
      next_element_ptr = element_ptr + 0x495;
      rotation_angle = *element_ptr;
      element_ptr = element_ptr + 0x4d6;
      blend_factor2 = blend_factor2 + *(float *)(*(int64_t *)(*(int64_t *)next_element_ptr + 0x48) + 0x188) * rotation_angle;
      max_iterations = max_iterations - 1;
    } while (max_iterations != 0);
    
    rotation_angle = animation_data[0x10];
    blend_factor2 = (base_intensity * animation_data[7]) / blend_factor2 + rotation_angle;
    animation_data[0x10] = blend_factor2;
    
    // 检查动画过渡
    if (blend_factor2 <= 1.0) {
      if ((((rotation_angle <= 0.5) && (0.5 < blend_factor2)) && (ABS(animation_data[0xb] - animation_data[0xc]) < 0.5)) &&
         (ABS(animation_data[0xb] - animation_data[0xd]) < 0.5)) {
        animation_data[0x10] = 0.5;
      }
    }
    else if ((0.5 <= ABS(animation_data[0xb] - animation_data[0xc])) || (0.5 <= ABS(animation_data[0xb] - animation_data[0xd])))
    {
      animation_data[0x10] = blend_factor2 - 1.0;
    }
    else {
      animation_data[0x10] = 0.0;
    }
  }
  
  // 计算动画权重
  blend_factor2 = 1.0;
  if ((((enable_smoothing != '\0') || (enable_damping != '\0')) && ((animation_data[2] != 0.0 || (animation_data[3] != 0.0)))) ||
     (((animation_data[4] != 0.0 || (animation_data[5] != 0.0)) || (0.0 < animation_data[0x14])))) {
    blend_factor2 = 0.0;
  }
  
  // 更新动画位置
  blend_speed = base_intensity + base_intensity;
  blend_factor = *animation_data - animation_data[1];
  rotation_angle = blend_factor;
  if ((blend_speed < ABS(blend_factor)) && (rotation_angle = blend_speed, blend_factor < 0.0)) {
    rotation_angle = -blend_speed;
  }
  animation_data[1] = animation_data[1] + rotation_angle;
  stack_param1 = 0x180659d72;
  
  // 计算动画速度
  blend_factor = (float)FUN_18065c070(animation_data, context_ptr, stack_param5);
  rotation_angle = base_intensity;
  if (blend_factor <= 0.75) {
    blend_factor = 0.75;
  }
  blend_speed = blend_factor - animation_data[0x16];
  if (0.001 <= ABS(blend_speed)) {
    blend_factor = blend_speed * base_intensity + animation_data[0x16];
  }
  animation_data[0x16] = blend_factor;
  
  // 处理动画时间
  if ((weight_sum <= 0.0) || (animation_data[0x1854] <= 0.0)) {
    animation_data[0xf] = 0.0;
  }
  else {
    weight_sum = 0.0;
    if (0 < (int)animation_data[0x18]) {
      element_ptr = animation_data + 0x1b;
      max_iterations = (uint64_t)(uint)animation_data[0x18];
      do {
        next_element_ptr = element_ptr + 0x495;
        blend_factor = *element_ptr;
        element_ptr = element_ptr + 0x4d6;
        weight_sum = weight_sum + *(float *)(**(int64_t **)next_element_ptr + 0x188) * blend_factor;
        max_iterations = max_iterations - 1;
      } while (max_iterations != 0);
    }
    stack_param1 = 0x180659e10;
    weight_sum = (float)fmodf(base_intensity / weight_sum + animation_data[0xf], 0x3f800000);
    animation_data[0xf] = weight_sum;
  }
  
  // 处理动画混合
  weight_sum = animation_data[0x18];
  element_index = 0;
  blend_factor = 0.0;
  if (0 < (int)weight_sum) {
    element_ptr = animation_data + 0x1b;
    do {
      stack_param1 = 0x180659e3d;
      blend_speed = (float)FUN_18065bf60(animation_data, element_index);
      blend_speed2 = *element_ptr;
      element_index = element_index + 1;
      element_ptr = element_ptr + 0x4d6;
      blend_factor = blend_factor + blend_speed * blend_speed2;
    } while (element_index < (int)weight_sum);
  }
  
  // 应用动画效果
  if (blend_factor2 < 1.0) {
    if (animation_data[0x1854] <= 1.0 && animation_data[0x1854] != 1.0) {
      weight_sum = blend_factor * rotation_angle + animation_data[0xe];
      animation_data[0xe] = weight_sum;
      if (1.0 < weight_sum) {
        animation_data[0xe] = weight_sum - 1.0;
      }
    }
    else if ((int)weight_sum < 1) {
      animation_data[0xe] = 0.0;
    }
    else {
      if (*(char *)(animation_data + 0x17) == '\0') {
        rotation_angle = 1.0;
      }
      else {
        rotation_angle = -1.0;
      }
      context_offset = *(int64_t *)(animation_data + (int64_t)(int)weight_sum * 0x4d6 + -0x26);
      stack_param1 = 0x180659ea7;
      array_base = FUN_18065fd40(*(uint64_t *)(context_offset + 8));
      element_offset = 0x14;
      if (0.0 <= (angle_y - ABS(scale_x)) * rotation_angle) {
        element_offset = 0x18;
      }
      weight_sum = *(float *)(element_offset + array_base);
      stack_param1 = 0x180659edd;
      FUN_18065fd40(*(uint64_t *)(context_offset + 8));
      animation_data[0xe] = weight_sum;
    }
  }
  
  // 计算归一化因子
  weight_sum = velocity_y * velocity_y + current_value * current_value;
  weight_sum = (float)(weight_sum <= 1.1754944e-38) * 1.1754944e-38 + weight_sum;
  simd_buffer = rsqrtss(ZEXT416((uint)weight_sum), ZEXT416((uint)weight_sum));
  rotation_angle = simd_buffer._0_4_;
  if (-0.2 <= velocity_y * rotation_angle * 0.5 * (3.0 - weight_sum * rotation_angle * rotation_angle)) {
    weight_sum = 1.0;
  }
  else {
    weight_sum = 0.0;
  }
  animation_data[0x13] = weight_sum;
  
  // 处理向量运算
  rotation_angle = scale_x;
  blend_speed = angle_y;
  if ((current_value != 0.0) || (velocity_y != 0.0)) {
    if (0.0 <= scale_x * current_value) {
      if (ABS(scale_x) < ABS(current_value)) {
        rotation_angle = current_value;
      }
    }
    else {
      rotation_angle = scale_x + current_value;
    }
    if (0.0 <= velocity_y * angle_y) {
      if (ABS(angle_y) < ABS(velocity_y)) {
        blend_speed = velocity_y;
      }
    }
    else {
      blend_speed = angle_y + velocity_y;
    }
  }
  
  // 计算动画角度
  stack_param1 = 0x18065a04d;
  stack_param2 = transform_param2;
  rotation_angle = (float)atan2f(-rotation_angle, blend_speed);
  rotation_angle = ABS(rotation_angle);
  if (1.5707964 < rotation_angle) {
    rotation_angle = 3.1415927 - rotation_angle;
  }
  rotation_angle = rotation_angle * 0.63661975;
  blend_speed = (1.0 - intensity) * 0.3;
  if (blend_speed + 0.05 <= rotation_angle) {
    if (0.95 - blend_speed < rotation_angle) {
      rotation_angle = 1.0;
    }
  }
  else {
    rotation_angle = 0.0;
  }
  
  // 更新动画参数
  blend_speed = rotation_angle - animation_data[0x15];
  normalized_magnitude = ABS(blend_speed);
  blend_factor2 = rotation_angle;
  if (0.001 <= normalized_magnitude) {
    spring_strength = base_intensity;
    if (blend_speed < 0.0) {
      spring_strength = -base_intensity;
    }
    damping_factor = 0.1;
    if ((0.1 <= normalized_magnitude) && (damping_factor = normalized_magnitude, 0.5 <= normalized_magnitude)) {
      damping_factor = 0.5;
    }
    damping_factor = spring_strength * damping_factor * 12.0;
    if (ABS(damping_factor) <= normalized_magnitude) {
      blend_factor2 = animation_data[0x15] + damping_factor;
    }
  }
  animation_data[0x15] = blend_factor2;
  
  // 处理动画边界条件
  if ((((angle_y <= -0.1) || (enable_damping == '\0')) || (enable_smoothing != '\0')) || (velocity_y <= -0.1)) {
ANIMATION_BOUNDARY_CHECK:
    if ((animation_data[0x11] <= 0.0) || (1.0 <= animation_data[0x11])) {
      animation_data[0x11] = 0.0;
      animation_data[0x12] = -1.0;
      goto FINAL_ANIMATION_UPDATE;
    }
  }
  else {
    velocity_y = angle_y * angle_y + angle_y * angle_y;
    velocity_y = velocity_y + velocity_y;
    if (velocity_y <= 1.0) {
      velocity_y = 1.0;
    }
    if (-velocity_y <= scale_x * current_value) goto ANIMATION_BOUNDARY_CHECK;
  }
  
  // 更新动画进度
  velocity_y = animation_data[0x11];
  if (velocity_y == 0.0) {
    *(bool *)((int64_t)animation_data + 0x5d) = current_value < 0.0;
  }
  velocity_y = (*(float *)(*(int64_t *)
                        (*(int64_t *)(animation_data + (int64_t)(int)animation_data[0x18] * 0x4d6 + -0x26) + 8)
                      + 0x188) /
           *(float *)(*(int64_t *)
                       (*(int64_t *)(animation_data + (int64_t)(int)animation_data[0x18] * 0x4d6 + -0x26) + 0x38
                       ) + 0x188)) * blend_factor * base_intensity + velocity_y;
  if (1.0 <= velocity_y) {
    velocity_y = 1.0;
  }
  animation_data[0x11] = velocity_y;
  
  // 处理动画循环
  if (animation_data[0x12] <= 0.0 && animation_data[0x12] != 0.0) {
    if (*(char *)((int64_t)animation_data + 0x5d) == '\0') {
      scale_x = 1.0;
    }
    else {
      scale_x = -1.0;
    }
    if (0.0 <= scale_x * current_value) {
      current_value = velocity_y;
      if (*(char *)((int64_t)animation_data + 0x5d) == '\0') {
        stack_param1 = 0x18065a252;
        current_value = (float)fmodf(velocity_y + 0.5, 0x3f800000);
      }
      current_value = current_value - animation_data[0xe];
      if (current_value <= 0.5) {
        if (current_value < -0.5) {
          current_value = current_value + 1.0;
        }
      }
      else {
        current_value = current_value + -1.0;
      }
      scale_x = velocity_y * velocity_y * velocity_y + base_intensity;
      if (1.0 <= scale_x) {
        scale_x = 1.0;
      }
      current_value = scale_x * velocity_y * current_value + animation_data[0xe];
      animation_data[0xe] = current_value;
      if (0.0 <= current_value) {
        if (1.0 <= current_value) {
          animation_data[0xe] = current_value - 1.0;
        }
      }
      else {
        animation_data[0xe] = current_value + 1.0;
      }
    }
    else {
      animation_data[0x12] = velocity_y + 0.25;
    }
  }
  
FINAL_ANIMATION_UPDATE:
  // 最终动画参数更新
  current_value = animation_data[0x14];
  velocity_y = 0.0;
  smooth_factor4 = (1.0 - current_value) * (1.0 - blend_factor2);
  smooth_factor3 = (1.0 - blend_factor2) * current_value;
  smooth_factor2 = (1.0 - weight_sum) * smooth_factor4;
  blend_beta = (1.0 - blend_factor2) * weight_sum * smooth_factor4;
  smooth_factor1 = (1.0 - blend_factor2) * smooth_factor2;
  stack_param3 = CONCAT44(stack_param3._4_4_, blend_beta);
  blend_alpha = weight_sum * smooth_factor4 * blend_factor2;
  smooth_factor2 = smooth_factor2 * blend_factor2;
  smooth_factor4 = smooth_factor4 * blend_factor2;
  blend_delta = blend_alpha * smooth_factor1;
  blend_gamma = smooth_factor2 * smooth_factor1;
  smooth_factor3 = (1.0 - smooth_factor1) * smooth_factor2;
  smooth_factor4 = (1.0 - smooth_factor1) * blend_alpha;
  stack_param5 = CONCAT44(stack_param5._4_4_, smooth_factor3);
  
  // 处理动画速度控制
  if ((smoothing_enabled == '\0') || (0.0 < smooth_factor1)) {
    if (current_value <= 0.0) {
      weight_sum = 3.0;
    }
    else {
      weight_sum = 5.0;
    }
  }
  else {
    weight_sum = 2.0;
  }
  
  // 更新动画时间参数
  current_value = animation_data[0x184a];
  if (blend_factor2 <= current_value) {
    current_value = current_value - weight_sum * base_intensity;
    if (current_value <= blend_factor2) {
      current_value = blend_factor2;
    }
  }
  else {
    current_value = current_value + weight_sum * base_intensity;
    if (blend_factor2 <= current_value) {
      current_value = blend_factor2;
    }
  }
  animation_data[0x184a] = current_value;
  animation_data[0x1854] = current_value;
  
  // 计算动画强度
  weight_sum = animation_data[0x11];
  if (0.2 <= weight_sum) {
    current_value = 1.0;
    if (0.7 < weight_sum) {
      current_value = (1.0 - weight_sum) * 3.333333;
    }
  }
  else {
    current_value = weight_sum * 5.0;
  }
  
  // 处理动画阻尼
  if (0.0 < animation_data[0x12]) {
    weight_sum = (animation_data[0x12] - weight_sum) * 4.0;
    if (weight_sum <= 0.0) {
      weight_sum = 0.0;
    }
    current_value = current_value * weight_sum;
  }
  
  // 更新动画参数数组
  element_ptr = animation_data + 0x1855;
  element_index = 1;
  do {
    weight_sum = *(float *)(((int64_t)local_buffer - (int64_t)animation_data) + (int64_t)element_ptr);
    scale_x = weight_sum - element_ptr[-10];
    angle_y = ABS(scale_x);
    if (0.001 <= angle_y) {
      if (scale_x < 0.0) {
        rotation_angle = -1.0;
      }
      else {
        rotation_angle = 1.0;
      }
      if (0.05 <= angle_y) {
        if (0.5 <= angle_y) {
          angle_y = 0.5;
        }
      }
      else {
        angle_y = 0.05;
      }
      angle_y = angle_y * rotation_angle * base_intensity * 6.0;
      if (angle_y * rotation_angle <= rotation_angle * scale_x) {
        weight_sum = element_ptr[-10] + angle_y;
      }
    }
    element_ptr[-10] = weight_sum;
    *element_ptr = weight_sum;
    
    // 应用动画权重
    if (2 < element_index) {
      if (element_index < 7) {
        scale_x = 1.0 - current_value;
      }
      else {
        scale_x = current_value;
        if (element_index == 7) {
          if (*(char *)((int64_t)animation_data + 0x5d) != '\0') {
WEIGHT_ADJUSTMENT:
            scale_x = 0.0;
          }
        }
        else {
          if (element_index != 8) goto WEIGHT_PROCESSING;
          if (*(char *)((int64_t)animation_data + 0x5d) == '\0') goto WEIGHT_ADJUSTMENT;
        }
      }
      weight_sum = scale_x * weight_sum;
      *element_ptr = weight_sum;
    }
    
WEIGHT_PROCESSING:
    scale_x = *(float *)((int64_t)local_buffer + (4 - (int64_t)animation_data) + (int64_t)element_ptr);
    angle_y = scale_x - element_ptr[-9];
    rotation_angle = ABS(angle_y);
    if (0.001 <= rotation_angle) {
      if (angle_y < 0.0) {
        blend_speed = -1.0;
      }
      else {
        blend_speed = 1.0;
      }
      if (0.05 <= rotation_angle) {
        if (0.5 <= rotation_angle) {
          rotation_angle = 0.5;
        }
      }
      else {
        rotation_angle = 0.05;
      }
      rotation_angle = rotation_angle * blend_speed * base_intensity * 6.0;
      if (rotation_angle * blend_speed <= blend_speed * angle_y) {
        scale_x = element_ptr[-9] + rotation_angle;
      }
    }
    
    iteration_counter = element_index + 1;
    element_ptr[-9] = scale_x;
    element_ptr[1] = scale_x;
    
    // 应用权重调整
    if (2 < iteration_counter) {
      if (iteration_counter < 7) {
        angle_y = 1.0 - current_value;
      }
      else {
        angle_y = current_value;
        if (iteration_counter == 7) {
          if (*(char *)((int64_t)animation_data + 0x5d) != '\0') {
WEIGHT_ADJUSTMENT_SECOND:
            angle_y = 0.0;
          }
        }
        else {
          if (iteration_counter != 8) goto SECOND_WEIGHT_PROCESSING;
          if (*(char *)((int64_t)animation_data + 0x5d) == '\0') goto WEIGHT_ADJUSTMENT_SECOND;
        }
      }
      scale_x = angle_y * scale_x;
      element_ptr[1] = scale_x;
    }
    
SECOND_WEIGHT_PROCESSING:
    scale_x = *(float *)((int64_t)local_buffer + (8 - (int64_t)animation_data) + (int64_t)element_ptr);
    rotation_angle = scale_x - element_ptr[-8];
    blend_speed = ABS(rotation_angle);
    if (0.001 <= blend_speed) {
      if (rotation_angle < 0.0) {
        blend_speed2 = -1.0;
      }
      else {
        blend_speed2 = 1.0;
      }
      if (0.05 <= blend_speed) {
        if (0.5 <= blend_speed) {
          blend_speed = 0.5;
        }
      }
      else {
        blend_speed = 0.05;
      }
      blend_speed = blend_speed * blend_speed2 * base_intensity * 6.0;
      if (blend_speed * blend_speed2 <= blend_speed2 * rotation_angle) {
        scale_x = element_ptr[-8] + blend_speed;
      }
    }
    
    iteration_counter = element_index + 2;
    element_ptr[-8] = scale_x;
    element_ptr[2] = scale_x;
    
    // 应用最终权重
    if (2 < iteration_counter) {
      if (iteration_counter < 7) {
        rotation_angle = 1.0 - current_value;
      }
      else {
        rotation_angle = current_value;
        if (iteration_counter == 7) {
          if (*(char *)((int64_t)animation_data + 0x5d) != '\0') {
FINAL_WEIGHT_ADJUSTMENT:
            rotation_angle = 0.0;
          }
        }
        else {
          if (iteration_counter != 8) goto FINAL_WEIGHT_PROCESSING;
          if (*(char *)((int64_t)animation_data + 0x5d) == '\0') goto FINAL_WEIGHT_ADJUSTMENT;
        }
      }
      scale_x = rotation_angle * scale_x;
      element_ptr[2] = scale_x;
    }
    
FINAL_WEIGHT_PROCESSING:
    element_index = element_index + 3;
    velocity_y = velocity_y + weight_sum + scale_x + angle_y;
    element_ptr = element_ptr + 3;
    
    // 检查是否完成所有参数更新
    if (9 < element_index) {
      weight_sum = animation_data[0x1854];
      weight_sum = 1.0 - ((weight_sum * 6.0 - 15.0) * weight_sum + 10.0) * weight_sum * weight_sum * weight_sum;
      if (velocity_y != weight_sum) {
        if (velocity_y <= 0.0) {
          animation_data[0x1854] = 1.0;
        }
        else {
          weight_sum = weight_sum / velocity_y;
          animation_data[0x1855] = animation_data[0x1855] * weight_sum;
          animation_data[0x1856] = animation_data[0x1856] * weight_sum;
          animation_data[0x1857] = animation_data[0x1857] * weight_sum;
          animation_data[0x1858] = animation_data[0x1858] * weight_sum;
          animation_data[0x1859] = animation_data[0x1859] * weight_sum;
          animation_data[0x185a] = animation_data[0x185a] * weight_sum;
          animation_data[0x185b] = animation_data[0x185b] * weight_sum;
          animation_data[0x185c] = animation_data[0x185c] * weight_sum;
          animation_data[0x185d] = weight_sum * animation_data[0x185d];
        }
      }
      
      // 计算最终变换参数
      velocity_y = blend_beta - smooth_factor1;
      scale_x = ((((smooth_factor2 + blend_alpha) * smooth_factor1 + smooth_factor4) - smooth_factor4) - smooth_factor3) -
               smooth_factor4;
      weight_sum = velocity_y * velocity_y + scale_x * scale_x;
      weight_sum = (float)(weight_sum <= 1.1754944e-38) * 1.1754944e-38 + weight_sum;
      simd_buffer = rsqrtss(ZEXT416((uint)weight_sum), ZEXT416((uint)weight_sum));
      current_value = simd_buffer._0_4_;
      weight_sum = current_value * 0.5 * (3.0 - weight_sum * current_value * current_value);
      velocity_y = weight_sum * velocity_y;
      weight_sum = weight_sum * scale_x;
      stack_param2 = CONCAT44(velocity_y, weight_sum);
      
      // 检查变换有效性
      if (ABS(weight_sum * animation_data[0x185e] + velocity_y * animation_data[0x185f]) <= 0.999) {
        scale_x = animation_data[0x1855] - animation_data[0x1856];
        angle_y = (((animation_data[0x1858] + animation_data[0x1857] + animation_data[0x185b]) - animation_data[0x1859]) -
                 animation_data[0x185a]) - animation_data[0x185c];
        weight_sum = scale_x * scale_x + angle_y * angle_y;
        weight_sum = (float)(weight_sum <= 1.1754944e-38) * 1.1754944e-38 + weight_sum;
        simd_buffer = rsqrtss(ZEXT416((uint)weight_sum), ZEXT416((uint)weight_sum));
        current_value = simd_buffer._0_4_;
        blend_speed = base_intensity * 8.0;
        weight_sum = current_value * 0.5 * (3.0 - weight_sum * current_value * current_value);
        stack_param2 = CONCAT44(weight_sum * scale_x * blend_speed + (1.0 - blend_speed) * animation_data[0x185f],
                              weight_sum * angle_y * blend_speed + (1.0 - blend_speed) * animation_data[0x185e]);
        *(uint64_t *)(animation_data + 0x185e) = stack_param2;
        weight_sum = animation_data[0x185f];
        current_value = animation_data[0x185e];
        velocity_y = current_value * current_value + weight_sum * weight_sum;
        simd_buffer = rsqrtss(ZEXT416((uint)velocity_y), ZEXT416((uint)velocity_y));
        scale_x = simd_buffer._0_4_;
        velocity_y = scale_x * 0.5 * (3.0 - velocity_y * scale_x * scale_x);
        animation_data[0x185f] = velocity_y * weight_sum;
        animation_data[0x185e] = velocity_y * current_value;
      }
      else {
        *(uint64_t *)(animation_data + 0x185e) = stack_param2;
      }
      
      // 返回最终结果
      stack_param1 = 0x18065aa9f;
      blend_alpha = blend_factor2;
      blend_gamma = smooth_factor4;
      smooth_factor3 = smooth_factor4;
      smooth_factor4 = smooth_factor4;
      SystemSecurityChecker(hash_key ^ (uint64_t)stack_buffer);
    }
  } while( true );
}