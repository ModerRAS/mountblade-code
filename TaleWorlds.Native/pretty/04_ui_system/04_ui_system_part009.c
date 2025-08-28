#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part009.c - UI系统高级向量处理和动画控制模块
// 包含4个核心函数，涵盖UI向量归一化处理、动画权重计算、角度插值等高级UI功能

/**
 * 向量归一化和缩放处理函数
 * 对输入的向量数组进行归一化处理并应用缩放因子
 * 
 * @param vector_array 向量数组指针
 * @param scale_factor 缩放因子
 */
void normalize_and_scale_vector_array(longlong *vector_array, float scale_factor)
{
  ulonglong current_offset;
  longlong array_start;
  uint element_index;
  ulonglong element_count;
  float vector_x;
  float vector_y;
  float vector_length_squared;
  float inverse_sqrt_result;
  float normalized_scale;
  float scaled_x;
  float scaled_y;
  
  array_start = *vector_array;
  current_offset = 0;
  element_count = current_offset;
  
  // 计算数组元素数量（每个元素8字节）
  if (vector_array[1] - array_start >> 3 != 0) {
    do {
      element_index = (int)element_count + 1;
      
      // 提取向量分量（高32位为Y，低32位为X）
      vector_y = (float)((ulonglong)*(undefined8 *)(current_offset + array_start) >> 0x20);
      vector_x = (float)*(undefined8 *)(current_offset + array_start);
      
      // 计算向量长度的平方
      vector_length_squared = vector_y * vector_y + vector_x * vector_x;
      
      // 使用快速平方根倒数进行归一化
      inverse_sqrt_result = rsqrtss(ZEXT416((uint)vector_length_squared), ZEXT416((uint)vector_length_squared))._0_4_;
      normalized_scale = inverse_sqrt_result * 0.5f * (3.0f - vector_length_squared * inverse_sqrt_result * inverse_sqrt_result);
      
      // 应用缩放并存储结果
      scaled_x = normalized_scale * vector_x * scale_factor + *(float *)(current_offset + array_start);
      scaled_y = normalized_scale * vector_y * scale_factor + *(float *)(current_offset + 4 + array_start);
      
      *(ulonglong *)(current_offset + vector_array[0x11]) = CONCAT44(scaled_y, scaled_x);
      
      current_offset = current_offset + 8;
      array_start = *vector_array;
      element_count = (ulonglong)element_index;
    } while ((ulonglong)(longlong)(int)element_index < (ulonglong)(vector_array[1] - array_start >> 3));
  }
  return;
}





/**
 * UI向量处理变体函数
 * 对向量数组进行归一化处理并应用预定义的缩放因子
 * 
 * @param context_ptr 上下文指针（未使用）
 * @param vector_array 向量数组指针
 * @param scale_param 缩放参数（未使用）
 * @param base_offset 基础偏移量
 */
void ui_vector_process_variant(undefined8 context_ptr, longlong *vector_array, undefined8 scale_param, longlong base_offset)
{
  ulonglong current_offset;
  uint element_index;
  float vector_x;
  float vector_y;
  float vector_length_squared;
  undefined1 inverse_sqrt_buffer[16];
  float scale_factor;
  float temp_vector_x;
  float temp_vector_y;
  
  current_offset = 0;
  element_index = 0;
  
  // 遍历向量数组进行归一化处理
  do {
    element_index = element_index + 1;
    
    // 提取向量分量（高32位为Y，低32位为X）
    temp_vector_y = (float)((ulonglong)*(undefined8 *)(current_offset + base_offset) >> 0x20);
    temp_vector_x = (float)*(undefined8 *)(current_offset + base_offset);
    
    // 计算向量长度的平方
    vector_length_squared = temp_vector_y * temp_vector_y + temp_vector_x * temp_vector_x;
    
    // 使用快速平方根倒数进行归一化
    inverse_sqrt_buffer = rsqrtss(ZEXT416((uint)vector_length_squared), ZEXT416((uint)vector_length_squared));
    scale_factor = inverse_sqrt_buffer._0_4_;
    scale_factor = scale_factor * 0.5 * (3.0 - vector_length_squared * scale_factor * scale_factor);
    
    // 应用缩放并存储结果
    *(ulonglong *)(current_offset + vector_array[0x11]) = 
         CONCAT44(scale_factor * temp_vector_y * unaff_XMM7_Da + *(float *)(current_offset + 4 + base_offset),
                  scale_factor * temp_vector_x * unaff_XMM7_Da + *(float *)(current_offset + base_offset));
    
    current_offset = current_offset + 8;
    base_offset = *vector_array;
  } while ((ulonglong)(longlong)(int)element_index < (ulonglong)(vector_array[1] - base_offset >> 3));
  
  return;
}





/**
 * UI系统占位函数
 * 空函数，用于系统架构占位
 */
void ui_system_placeholder_function(void)
{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI元素高级处理和动画控制函数
 * 
 * 这是UI系统中最复杂的函数，负责处理UI元素的各种高级操作，
 * 包括位置计算、旋转、缩放、动画插值、权重计算等。
 * 
 * @param ui_element UI元素数据指针
 * @param delta_time 时间增量，用于动画计算
 * @param context 上下文参数
 * @param flag1 标志位1，控制特定行为
 * @param flag2 标志位2，控制特定行为
 * @param flag3 标志位3，控制特定行为
 * @param unused_param1 未使用的参数
 * @param unused_param2 未使用的参数
 * @param blend_factor 混合因子，用于动画插值
 * @param unused_param3 未使用的参数
 */
void process_ui_element_advanced(float *ui_element, float delta_time, longlong context, char flag1, char flag2,
                                 char flag3, undefined8 unused_param1, undefined8 unused_param2, float blend_factor,
                                 undefined8 unused_param3)

{
  undefined8 temp_var1;
  undefined8 temp_var2;
  bool use_advanced_processing;
  char temp_char;
  int index;
  longlong temp_long1;
  longlong temp_long2;
  longlong temp_long3;
  float *float_ptr1;
  longlong element_data;
  longlong element_count;
  float *float_ptr2;
  int temp_int;
  ulonglong temp_ulong;
  float temp_float1;
  float temp_float2;
  float temp_float3;
  float temp_float4;
  float temp_float5;
  float temp_float6;
  float temp_float7;
  float temp_float8;
  float temp_float9;
  float temp_float10;
  float temp_float11;
  undefined1 rsqrt_result [16];
  float temp_float12;
  float temp_float13;
  float temp_float14;
  float temp_float15;
  float working_buffer [6200];
  undefined8 stack_var1;
  undefined1 stack_buffer1 [32];
  float stack_float1;
  float *float_ptr3;
  char stack_char;
  float stack_float2;
  undefined8 stack_var2;
  float stack_float3;
  undefined8 stack_var3;
  float stack_float4;
  float stack_float5;
  float stack_float6;
  float stack_float7;
  float stack_float8;
  undefined8 stack_var4;
  float stack_float9;
  float stack_float10;
  float stack_float11;
  float stack_float12;
  float stack_float13;
  float stack_float14;
  float stack_float15;
  float stack_float16;
  float stack_float17;
  float stack_float18;
  ulonglong stack_ulong;
  
  stack_ulong = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  temp_float15 = 0.0;
  index = 0;
  stack_var4 = unused_param3;
  stack_char = flag1;
  stack_float2 = delta_time;
  if (0 < (int)ui_element[0x18]) {
    float_ptr1 = ui_element + 0x1b;
    float_ptr2 = float_ptr1;
    temp_int = index;
    do {
      temp_float5 = float_ptr2[1];
      temp_float1 = *float_ptr2;
      stack_float1 = ui_element[0x11];
      if (temp_float5 <= temp_float1) {
        temp_float1 = temp_float1 - delta_time * 4.0;
        if (temp_float1 <= temp_float5) {
          temp_float1 = temp_float5;
        }
      }
      else {
        temp_float1 = delta_time * 4.0 + temp_float1;
        if (temp_float5 <= temp_float1) {
          temp_float1 = temp_float5;
        }
      }
      float_ptr3 = float_ptr2 + 0x4c9;
      *float_ptr2 = temp_float1;
      stack_var1 = 0x1806597d3;
      FUN_18065ee60(*(undefined8 *)(float_ptr2 + 0x495), ui_element + 0x1854);
      if ((*(char *)(float_ptr2 + 0x4af) == '\0') && (*(char *)(float_ptr2 + 0x4ce) != '\0')) {
        *(undefined1 *)(float_ptr2 + 0x4af) = 1;
      }
      if ((*(char *)(float_ptr2 + 0x4c8) == '\0') && (*(char *)(float_ptr2 + 0x4d4) != '\0')) {
        *(undefined1 *)(float_ptr2 + 0x4c8) = 1;
      }
      temp_float15 = temp_float15 + *float_ptr2;
      float_ptr2 = float_ptr2 + 0x4d6;
      temp_int = temp_int + 1;
    } while (temp_int < (int)ui_element[0x18]);
    if (((0.0 < temp_float15) && (temp_float15 != 1.0)) && (0 < (int)ui_element[0x18])) {
      do {
        index = index + 1;
        *float_ptr1 = (1.0 / temp_float15) * *float_ptr1;
        float_ptr1 = float_ptr1 + 0x4d6;
      } while (index < (int)ui_element[0x18]);
    }
  }
  temp_char = stack_char;
  stack_var1 = 0x18065986c;
  FUN_18065cb80(ui_element);
  if (((param_1[4] == 0.0) && (param_1[5] == 0.0)) &&
     (0.25 < param_1[2] * param_1[2] + param_1[3] * param_1[3])) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
  }
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 2);
  uStack_140 = uVar1;
  uStack_130 = uVar2;
  if (param_1[8] != 0.0) {
                    // WARNING: Subroutine does not return
    uStack_180 = 0x1806598e8;
    FUN_1808fd400(-param_1[8]);
  }
  uStack_140._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar24 = uStack_140._4_4_;
  uStack_140._0_4_ = (float)uVar1;
  fVar13 = (float)uStack_140;
  uStack_130._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  fVar21 = uStack_130._4_4_;
  uStack_130._0_4_ = (float)uVar2;
  fVar17 = (float)uStack_130;
  fVar19 = param_1[0x185d];
  if (((param_1[0x10] == 0.0) || (param_1[0x10] == 0.5)) || (fVar19 <= 0.0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uStack_180 = 0x1806599e0;
  fVar14 = (float)atan2f(*(uint *)(*(longlong *)(param_3 + 0x10) + 0x80) ^ 0x80000000,
                         *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x84));
  fVar14 = fVar14 + param_1[6];
  param_1[0xb] = fVar14;
  if (fVar14 <= 3.1415927) {
    if (fVar14 < -3.1415927) {
      fVar14 = fVar14 + 6.2831855;
      goto LAB_180659a1a;
    }
  }
  else {
    fVar14 = fVar14 - 6.2831855;
LAB_180659a1a:
    param_1[0xb] = fVar14;
  }
  fVar14 = param_1[0x18];
  lVar8 = (longlong)(int)fVar14;
  if (0 < (int)fVar14) {
    if (*(char *)(lVar8 * 0x1358 + 0x4e + (longlong)param_1) == '\0') {
      fVar15 = 0.0;
    }
    else {
      fVar15 = param_1[lVar8 * 0x4d6 + 0x12] * 0.05;
    }
    if ((fVar15 + param_1[lVar8 * 0x4d6 + 0xe] < param_1[lVar8 * 0x4d6 + 0x11]) ||
       (*(char *)(param_1 + lVar8 * 0x4d6 + 0x13) != '\0')) {
      param_1[0xc] = param_1[0xb];
      fVar14 = param_1[0x18];
    }
    lVar8 = (longlong)(int)fVar14;
    if (*(char *)(lVar8 * 0x1358 + 0x66 + (longlong)param_1) == '\0') {
      fVar15 = 0.0;
    }
    else {
      fVar15 = param_1[lVar8 * 0x4d6 + 0x18] * 0.05;
    }
    if ((fVar15 + param_1[lVar8 * 0x4d6 + 0x14] < param_1[lVar8 * 0x4d6 + 0x17]) ||
       (*(char *)(param_1 + lVar8 * 0x4d6 + 0x19) != '\0')) {
      param_1[0xd] = param_1[0xb];
      fVar14 = param_1[0x18];
    }
  }
  fStack_138 = 1.0;
  if ((((((int)fVar14 < 1) || (param_1[2] != 0.0)) || (param_1[3] != 0.0)) || (param_1[6] == 0.0))
     || ((ABS(param_1[0xb] - param_1[0xc]) < 0.5 && (ABS(param_1[0xb] - param_1[0xd]) < 0.5)))) {
    if ((bVar3) && ((param_1[2] == 0.0 && (param_1[3] == 0.0)))) goto LAB_180659b1a;
    param_1[0x14] = 0.0;
    if (0.0 <= fVar13) {
      if (fVar13 <= 0.0) goto LAB_180659b1a;
      fStack_138 = 1.0;
    }
    else {
      fStack_138 = 0.0;
    }
  }
  else {
    bVar3 = true;
    param_1[0x14] = 1.0;
LAB_180659b1a:
    if ((cVar4 == '\0') || (1.0 < param_1[0x1854] || param_1[0x1854] == 1.0)) {
      if (*(char *)(param_1 + 0x17) == '\0') {
        fStack_138 = 1.0;
      }
      else {
        fStack_138 = 0.0;
      }
    }
  }
  if ((fVar19 <= 0.0) && (0.0 < param_1[0x14])) {
    fVar19 = param_1[0xb] - param_1[0xc];
    fVar14 = param_1[0xb] - param_1[0xd];
    if (ABS(fVar19) <= ABS(fVar14)) {
      fVar19 = fVar14;
    }
    if (fVar19 <= 3.1415927) {
      if (fVar19 < -3.1415927) {
        fVar19 = fVar19 + 6.2831855;
      }
    }
    else {
      fVar19 = fVar19 + -6.2831855;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = 0.5;
    }
    param_1[0x10] = fVar19;
  }
  if ((bVar3) && (0 < (int)param_1[0x18])) {
    fVar19 = 0.0;
    pfVar7 = param_1 + 0x1b;
    uVar12 = (ulonglong)(uint)param_1[0x18];
    do {
      pfVar10 = pfVar7 + 0x495;
      fVar14 = *pfVar7;
      pfVar7 = pfVar7 + 0x4d6;
      fVar19 = fVar19 + *(float *)(*(longlong *)(*(longlong *)pfVar10 + 0x48) + 0x188) * fVar14;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    fVar14 = param_1[0x10];
    fVar19 = (fStack_144 * param_1[7]) / fVar19 + fVar14;
    param_1[0x10] = fVar19;
    if (fVar19 <= 1.0) {
      if ((((fVar14 <= 0.5) && (0.5 < fVar19)) && (ABS(param_1[0xb] - param_1[0xc]) < 0.5)) &&
         (ABS(param_1[0xb] - param_1[0xd]) < 0.5)) {
        param_1[0x10] = 0.5;
      }
    }
    else if ((0.5 <= ABS(param_1[0xb] - param_1[0xc])) || (0.5 <= ABS(param_1[0xb] - param_1[0xd])))
    {
      param_1[0x10] = fVar19 - 1.0;
    }
    else {
      param_1[0x10] = 0.0;
    }
  }
  fVar19 = 1.0;
  if ((((param_5 != '\0') || (param_6 != '\0')) && ((param_1[2] != 0.0 || (param_1[3] != 0.0)))) ||
     (((param_1[4] != 0.0 || (param_1[5] != 0.0)) || (0.0 < param_1[0x14])))) {
    fVar19 = 0.0;
  }
  fVar20 = fStack_144 + fStack_144;
  fVar15 = *param_1 - param_1[1];
  fVar14 = fVar15;
  if ((fVar20 < ABS(fVar15)) && (fVar14 = fVar20, fVar15 < 0.0)) {
    fVar14 = -fVar20;
  }
  param_1[1] = param_1[1] + fVar14;
  uStack_180 = 0x180659d72;
  fVar15 = (float)FUN_18065c070(param_1,param_3,uStack_118);
  fVar14 = fStack_144;
  if (fVar15 <= 0.75) {
    fVar15 = 0.75;
  }
  fVar20 = fVar15 - param_1[0x16];
  if (0.001 <= ABS(fVar20)) {
    fVar15 = fVar20 * fStack_144 + param_1[0x16];
  }
  param_1[0x16] = fVar15;
  if ((fVar25 <= 0.0) || (param_1[0x1854] <= 0.0)) {
    param_1[0xf] = 0.0;
  }
  else {
    fVar25 = 0.0;
    if (0 < (int)param_1[0x18]) {
      pfVar7 = param_1 + 0x1b;
      uVar12 = (ulonglong)(uint)param_1[0x18];
      do {
        pfVar10 = pfVar7 + 0x495;
        fVar15 = *pfVar7;
        pfVar7 = pfVar7 + 0x4d6;
        fVar25 = fVar25 + *(float *)(**(longlong **)pfVar10 + 0x188) * fVar15;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_180 = 0x180659e10;
    fVar25 = (float)fmodf(fStack_144 / fVar25 + param_1[0xf],0x3f800000);
    param_1[0xf] = fVar25;
  }
  fVar25 = param_1[0x18];
  iVar5 = 0;
  fVar15 = 0.0;
  if (0 < (int)fVar25) {
    pfVar7 = param_1 + 0x1b;
    do {
      uStack_180 = 0x180659e3d;
      fVar16 = (float)FUN_18065bf60(param_1,iVar5);
      fVar20 = *pfVar7;
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 0x4d6;
      fVar15 = fVar15 + fVar16 * fVar20;
    } while (iVar5 < (int)fVar25);
  }
  if (fVar19 < 1.0) {
    if (param_1[0x1854] <= 1.0 && param_1[0x1854] != 1.0) {
      fVar25 = fVar15 * fVar14 + param_1[0xe];
      param_1[0xe] = fVar25;
      if (1.0 < fVar25) {
        param_1[0xe] = fVar25 - 1.0;
      }
    }
    else if ((int)fVar25 < 1) {
      param_1[0xe] = 0.0;
    }
    else {
      if (*(char *)(param_1 + 0x17) == '\0') {
        fVar14 = 1.0;
      }
      else {
        fVar14 = -1.0;
      }
      lVar8 = *(longlong *)(param_1 + (longlong)(int)fVar25 * 0x4d6 + -0x26);
      uStack_180 = 0x180659ea7;
      lVar6 = FUN_18065fd40(*(undefined8 *)(lVar8 + 8));
      lVar9 = 0x14;
      if (0.0 <= (fVar21 - ABS(fVar17)) * fVar14) {
        lVar9 = 0x18;
      }
      fVar25 = *(float *)(lVar9 + lVar6);
      uStack_180 = 0x180659edd;
      FUN_18065fd40(*(undefined8 *)(lVar8 + 8));
      param_1[0xe] = fVar25;
    }
  }
  fVar25 = fVar24 * fVar24 + fVar13 * fVar13;
  fVar25 = (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38 + fVar25;
  auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
  fVar14 = auVar22._0_4_;
  if (-0.2 <= fVar24 * fVar14 * 0.5 * (3.0 - fVar25 * fVar14 * fVar14)) {
    fVar25 = 1.0;
  }
  else {
    fVar25 = 0.0;
  }
  param_1[0x13] = fVar25;
  fVar14 = fVar17;
  fVar20 = fVar21;
  if ((fVar13 != 0.0) || (fVar24 != 0.0)) {
    if (0.0 <= fVar17 * fVar13) {
      if (ABS(fVar17) < ABS(fVar13)) {
        fVar14 = fVar13;
      }
    }
    else {
      fVar14 = fVar17 + fVar13;
    }
    if (0.0 <= fVar24 * fVar21) {
      if (ABS(fVar21) < ABS(fVar24)) {
        fVar20 = fVar24;
      }
    }
    else {
      fVar20 = fVar21 + fVar24;
    }
  }
  uStack_180 = 0x18065a04d;
  uStack_140 = uVar2;
  fVar14 = (float)atan2f(-fVar14,fVar20);
  fVar14 = ABS(fVar14);
  if (1.5707964 < fVar14) {
    fVar14 = 3.1415927 - fVar14;
  }
  fVar14 = fVar14 * 0.63661975;
  fVar20 = (1.0 - param_9) * 0.3;
  if (fVar20 + 0.05 <= fVar14) {
    if (0.95 - fVar20 < fVar14) {
      fVar14 = 1.0;
    }
  }
  else {
    fVar14 = 0.0;
  }
  fVar16 = fVar14 - param_1[0x15];
  fVar23 = ABS(fVar16);
  fVar20 = fVar14;
  if (0.001 <= fVar23) {
    fVar18 = fStack_144;
    if (fVar16 < 0.0) {
      fVar18 = -fStack_144;
    }
    fVar16 = 0.1;
    if ((0.1 <= fVar23) && (fVar16 = fVar23, 0.5 <= fVar23)) {
      fVar16 = 0.5;
    }
    fVar16 = fVar18 * fVar16 * 12.0;
    if (ABS(fVar16) <= fVar23) {
      fVar20 = param_1[0x15] + fVar16;
    }
  }
  param_1[0x15] = fVar20;
  if ((((fVar21 <= -0.1) || (param_6 == '\0')) || (param_5 != '\0')) || (fVar24 <= -0.1)) {
LAB_18065a17c:
    if ((param_1[0x11] <= 0.0) || (1.0 <= param_1[0x11])) {
      param_1[0x11] = 0.0;
      param_1[0x12] = -1.0;
      goto LAB_18065a2e9;
    }
  }
  else {
    fVar24 = fVar21 * fVar21 + fVar21 * fVar21;
    fVar24 = fVar24 + fVar24;
    if (fVar24 <= 1.0) {
      fVar24 = 1.0;
    }
    if (-fVar24 <= fVar17 * fVar13) goto LAB_18065a17c;
  }
  fVar24 = param_1[0x11];
  if (fVar24 == 0.0) {
    *(bool *)((longlong)param_1 + 0x5d) = fVar13 < 0.0;
  }
  fVar24 = (*(float *)(*(longlong *)
                        (*(longlong *)(param_1 + (longlong)(int)param_1[0x18] * 0x4d6 + -0x26) + 8)
                      + 0x188) /
           *(float *)(*(longlong *)
                       (*(longlong *)(param_1 + (longlong)(int)param_1[0x18] * 0x4d6 + -0x26) + 0x38
                       ) + 0x188)) * fVar15 * fStack_144 + fVar24;
  if (1.0 <= fVar24) {
    fVar24 = 1.0;
  }
  param_1[0x11] = fVar24;
  if (param_1[0x12] <= 0.0 && param_1[0x12] != 0.0) {
    if (*(char *)((longlong)param_1 + 0x5d) == '\0') {
      fVar17 = 1.0;
    }
    else {
      fVar17 = -1.0;
    }
    if (0.0 <= fVar17 * fVar13) {
      fVar13 = fVar24;
      if (*(char *)((longlong)param_1 + 0x5d) == '\0') {
        uStack_180 = 0x18065a252;
        fVar13 = (float)fmodf(fVar24 + 0.5,0x3f800000);
      }
      fVar13 = fVar13 - param_1[0xe];
      if (fVar13 <= 0.5) {
        if (fVar13 < -0.5) {
          fVar13 = fVar13 + 1.0;
        }
      }
      else {
        fVar13 = fVar13 + -1.0;
      }
      fVar17 = fVar24 * fVar24 * fVar24 + fStack_144;
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
      fVar13 = fVar17 * fVar24 * fVar13 + param_1[0xe];
      param_1[0xe] = fVar13;
      if (0.0 <= fVar13) {
        if (1.0 <= fVar13) {
          param_1[0xe] = fVar13 - 1.0;
        }
      }
      else {
        param_1[0xe] = fVar13 + 1.0;
      }
    }
    else {
      param_1[0x12] = fVar24 + 0.25;
    }
  }
LAB_18065a2e9:
  fVar13 = param_1[0x14];
  fVar24 = 0.0;
  fStack_124 = (1.0 - fVar13) * (1.0 - fVar19);
  fStack_ec = (1.0 - fVar19) * fVar13;
  fStack_128 = (1.0 - fVar25) * fStack_124;
  fStack_10c = (1.0 - fVar14) * fVar25 * fStack_124;
  fStack_108 = (1.0 - fVar14) * fStack_128;
  uStack_130 = CONCAT44(uStack_130._4_4_,fStack_10c);
  fStack_120 = fVar25 * fStack_124 * fVar14;
  fStack_128 = fStack_128 * fVar14;
  fStack_124 = fStack_124 * fVar14;
  fStack_104 = fStack_120 * fStack_138;
  fStack_100 = fStack_128 * fStack_138;
  fStack_f8 = (1.0 - fStack_138) * fStack_128;
  fStack_11c = (1.0 - fStack_138) * fStack_120;
  uStack_118 = CONCAT44(uStack_118._4_4_,fStack_f8);
  if ((cStack_148 == '\0') || (0.0 < fStack_138)) {
    if (fVar13 <= 0.0) {
      fVar25 = 3.0;
    }
    else {
      fVar25 = 5.0;
    }
  }
  else {
    fVar25 = 2.0;
  }
  fVar13 = param_1[0x184a];
  if (fVar19 <= fVar13) {
    fVar13 = fVar13 - fVar25 * fStack_144;
    if (fVar13 <= fVar19) {
      fVar13 = fVar19;
    }
  }
  else {
    fVar13 = fVar13 + fVar25 * fStack_144;
    if (fVar19 <= fVar13) {
      fVar13 = fVar19;
    }
  }
  param_1[0x184a] = fVar13;
  param_1[0x1854] = fVar13;
  fVar25 = param_1[0x11];
  if (0.2 <= fVar25) {
    fVar13 = 1.0;
    if (0.7 < fVar25) {
      fVar13 = (1.0 - fVar25) * 3.333333;
    }
  }
  else {
    fVar13 = fVar25 * 5.0;
  }
  if (0.0 < param_1[0x12]) {
    fVar25 = (param_1[0x12] - fVar25) * 4.0;
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    fVar13 = fVar13 * fVar25;
  }
  pfVar7 = param_1 + 0x1855;
  iVar5 = 1;
  do {
    fVar25 = *(float *)(((longlong)afStack_6260 - (longlong)param_1) + (longlong)pfVar7);
    fVar17 = fVar25 - pfVar7[-10];
    fVar21 = ABS(fVar17);
    if (0.001 <= fVar21) {
      if (fVar17 < 0.0) {
        fVar14 = -1.0;
      }
      else {
        fVar14 = 1.0;
      }
      if (0.05 <= fVar21) {
        if (0.5 <= fVar21) {
          fVar21 = 0.5;
        }
      }
      else {
        fVar21 = 0.05;
      }
      fVar21 = fVar21 * fVar14 * fStack_144 * 6.0;
      if (fVar21 * fVar14 <= fVar14 * fVar17) {
        fVar25 = pfVar7[-10] + fVar21;
      }
    }
    pfVar7[-10] = fVar25;
    *pfVar7 = fVar25;
    if (2 < iVar5) {
      if (iVar5 < 7) {
        fVar17 = 1.0 - fVar13;
      }
      else {
        fVar17 = fVar13;
        if (iVar5 == 7) {
          if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
LAB_18065a5be:
            fVar17 = 0.0;
          }
        }
        else {
          if (iVar5 != 8) goto LAB_18065a5d3;
          if (*(char *)((longlong)param_1 + 0x5d) == '\0') goto LAB_18065a5be;
        }
      }
      fVar25 = fVar17 * fVar25;
      *pfVar7 = fVar25;
    }
LAB_18065a5d3:
    fVar17 = *(float *)((longlong)afStack_6260 + (4 - (longlong)param_1) + (longlong)pfVar7);
    fVar21 = fVar17 - pfVar7[-9];
    fVar14 = ABS(fVar21);
    if (0.001 <= fVar14) {
      if (fVar21 < 0.0) {
        fVar15 = -1.0;
      }
      else {
        fVar15 = 1.0;
      }
      if (0.05 <= fVar14) {
        if (0.5 <= fVar14) {
          fVar14 = 0.5;
        }
      }
      else {
        fVar14 = 0.05;
      }
      fVar14 = fVar14 * fVar15 * fStack_144 * 6.0;
      if (fVar14 * fVar15 <= fVar15 * fVar21) {
        fVar17 = pfVar7[-9] + fVar14;
      }
    }
    iVar11 = iVar5 + 1;
    pfVar7[-9] = fVar17;
    pfVar7[1] = fVar17;
    if (2 < iVar11) {
      if (iVar11 < 7) {
        fVar21 = 1.0 - fVar13;
      }
      else {
        fVar21 = fVar13;
        if (iVar11 == 7) {
          if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
LAB_18065a686:
            fVar21 = 0.0;
          }
        }
        else {
          if (iVar11 != 8) goto LAB_18065a69c;
          if (*(char *)((longlong)param_1 + 0x5d) == '\0') goto LAB_18065a686;
        }
      }
      fVar17 = fVar21 * fVar17;
      pfVar7[1] = fVar17;
    }
LAB_18065a69c:
    fVar21 = *(float *)((longlong)afStack_6260 + (8 - (longlong)param_1) + (longlong)pfVar7);
    fVar14 = fVar21 - pfVar7[-8];
    fVar15 = ABS(fVar14);
    if (0.001 <= fVar15) {
      if (fVar14 < 0.0) {
        fVar20 = -1.0;
      }
      else {
        fVar20 = 1.0;
      }
      if (0.05 <= fVar15) {
        if (0.5 <= fVar15) {
          fVar15 = 0.5;
        }
      }
      else {
        fVar15 = 0.05;
      }
      fVar15 = fVar15 * fVar20 * fStack_144 * 6.0;
      if (fVar15 * fVar20 <= fVar20 * fVar14) {
        fVar21 = pfVar7[-8] + fVar15;
      }
    }
    iVar11 = iVar5 + 2;
    pfVar7[-8] = fVar21;
    pfVar7[2] = fVar21;
    if (2 < iVar11) {
      if (iVar11 < 7) {
        fVar14 = 1.0 - fVar13;
      }
      else {
        fVar14 = fVar13;
        if (iVar11 == 7) {
          if (*(char *)((longlong)param_1 + 0x5d) != '\0') {
LAB_18065a74f:
            fVar14 = 0.0;
          }
        }
        else {
          if (iVar11 != 8) goto LAB_18065a765;
          if (*(char *)((longlong)param_1 + 0x5d) == '\0') goto LAB_18065a74f;
        }
      }
      fVar21 = fVar14 * fVar21;
      pfVar7[2] = fVar21;
    }
LAB_18065a765:
    iVar5 = iVar5 + 3;
    fVar24 = fVar24 + fVar25 + fVar17 + fVar21;
    pfVar7 = pfVar7 + 3;
    if (9 < iVar5) {
      fVar25 = param_1[0x1854];
      fVar25 = 1.0 - ((fVar25 * 6.0 - 15.0) * fVar25 + 10.0) * fVar25 * fVar25 * fVar25;
      if (fVar24 != fVar25) {
        if (fVar24 <= 0.0) {
          param_1[0x1854] = 1.0;
        }
        else {
          fVar25 = fVar25 / fVar24;
          param_1[0x1855] = param_1[0x1855] * fVar25;
          param_1[0x1856] = param_1[0x1856] * fVar25;
          param_1[0x1857] = param_1[0x1857] * fVar25;
          param_1[0x1858] = param_1[0x1858] * fVar25;
          param_1[0x1859] = param_1[0x1859] * fVar25;
          param_1[0x185a] = param_1[0x185a] * fVar25;
          param_1[0x185b] = param_1[0x185b] * fVar25;
          param_1[0x185c] = param_1[0x185c] * fVar25;
          param_1[0x185d] = fVar25 * param_1[0x185d];
        }
      }
      fVar24 = fStack_10c - fStack_108;
      fVar17 = ((((fStack_128 + fStack_120) * fStack_138 + fStack_124) - fStack_11c) - fStack_f8) -
               fStack_124;
      fVar25 = fVar24 * fVar24 + fVar17 * fVar17;
      fVar25 = (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38 + fVar25;
      auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar13 = auVar22._0_4_;
      fVar25 = fVar13 * 0.5 * (3.0 - fVar25 * fVar13 * fVar13);
      fVar24 = fVar25 * fVar24;
      fVar25 = fVar25 * fVar17;
      uStack_140 = CONCAT44(fVar24,fVar25);
      if (ABS(fVar25 * param_1[0x185e] + fVar24 * param_1[0x185f]) <= 0.999) {
        fVar17 = param_1[0x1855] - param_1[0x1856];
        fVar21 = (((param_1[0x1858] + param_1[0x1857] + param_1[0x185b]) - param_1[0x1859]) -
                 param_1[0x185a]) - param_1[0x185c];
        fVar25 = fVar17 * fVar17 + fVar21 * fVar21;
        fVar25 = (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38 + fVar25;
        auVar22 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar13 = auVar22._0_4_;
        fVar24 = fStack_144 * 8.0;
        fVar25 = fVar13 * 0.5 * (3.0 - fVar25 * fVar13 * fVar13);
        uStack_140 = CONCAT44(fVar25 * fVar17 * fVar24 + (1.0 - fVar24) * param_1[0x185f],
                              fVar25 * fVar21 * fVar24 + (1.0 - fVar24) * param_1[0x185e]);
        *(undefined8 *)(param_1 + 0x185e) = uStack_140;
        fVar25 = param_1[0x185f];
        fVar13 = param_1[0x185e];
        fVar24 = fVar13 * fVar13 + fVar25 * fVar25;
        auVar22 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
        fVar17 = auVar22._0_4_;
        fVar24 = fVar17 * 0.5 * (3.0 - fVar24 * fVar17 * fVar17);
        param_1[0x185f] = fVar24 * fVar25;
        param_1[0x185e] = fVar24 * fVar13;
      }
      else {
        *(undefined8 *)(param_1 + 0x185e) = uStack_140;
      }
                    // WARNING: Subroutine does not return
      uStack_180 = 0x18065aa9f;
      fStack_110 = fVar19;
      fStack_fc = fStack_11c;
      fStack_f4 = fStack_124;
      fStack_f0 = fStack_124;
      FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_178);
    }
  } while( true );
}





