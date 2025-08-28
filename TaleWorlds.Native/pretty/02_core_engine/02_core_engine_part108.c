#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part108.c - 6 个函数

// 函数: void set_render_context(int context_id, longlong context_ptr)
// 设置渲染上下文，将指定的上下文ID和指针关联到全局状态中
void set_render_context(int context_id, longlong context_ptr)
{
  float *position_ptr;
  float offset_x;
  float offset_y;
  float width;
  float height;
  float base_x;
  float base_y;
  int layout_index;
  longlong global_context;
  
  global_context = global_render_context;
  layout_index = *(int *)(context_ptr + 0x16c);
  if (*(longlong *)(global_render_context + 0x1c98) != context_ptr) {
    *(int8_t *)(global_render_context + 0x1d09) = 0;
  }
  *(int *)(global_context + 0x1ca0) = context_id;
  *(longlong *)(global_context + 0x1c98) = context_ptr;
  *(int *)(global_context + 0x1cfc) = layout_index;
  *(int *)(context_ptr + 0x3c8 + (longlong)layout_index * 4) = context_id;
  if (*(int *)(context_ptr + 0x144) == context_id) {
    offset_x = *(float *)(context_ptr + 0x150);
    offset_y = *(float *)(context_ptr + 0x44);
    width = *(float *)(context_ptr + 0x154);
    height = *(float *)(context_ptr + 0x40);
    base_x = *(float *)(context_ptr + 0x158);
    base_y = *(float *)(context_ptr + 0x44);
    position_ptr = (float *)(context_ptr + ((longlong)layout_index + 0x3d) * 0x10);
    *position_ptr = *(float *)(context_ptr + 0x14c) - *(float *)(context_ptr + 0x40);
    position_ptr[1] = offset_x - offset_y;
    position_ptr[2] = width - height;
    position_ptr[3] = base_x - base_y;
  }
  if (*(int *)(global_context + 0x1b60) == 2) {
    *(int8_t *)(global_context + 0x1d07) = 1;
    return;
  }
  *(int8_t *)(global_context + 0x1d06) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: ulonglong setup_render_parameters(float *position_params, int render_flags, float *override_params)
// 设置渲染参数，包括位置、渲染标志和可能的覆盖参数
ulonglong setup_render_parameters(float *position_params, int render_flags, float *override_params)
{
  longlong render_context;
  longlong context_data;
  uint64_t position_data;
  uint64_t size_data;
  longlong global_context;
  char render_status;
  float *final_params;
  ulonglong result;
  
  global_context = global_render_context;
  render_context = *(longlong *)(global_render_context + 0x1af8);
  if (((render_flags != 0) &&
      (((*(uint *)(render_context + 0x178) = *(uint *)(render_context + 0x178) | *(uint *)(render_context + 0x170),
        *(int *)(global_context + 0x1ca0) == render_flags || (*(char *)(global_context + 0x1d08) != '\0')) &&
       (context_data = *(longlong *)(global_context + 0x1c98),
       *(longlong *)(context_data + 0x3b8) == *(longlong *)(render_context + 0x3b8))))) &&
     ((render_context == context_data || (((*(uint *)(context_data + 0xc) | *(uint *)(render_context + 0xc)) >> 0x17 & 1) != 0)))) {
    final_params = position_params;
    if (override_params != (float *)0x0) {
      final_params = override_params;
    }
    update_render_state(render_context, final_params, render_flags);
  }
  *(int *)(render_context + 0x144) = render_flags;
  position_data = *(uint64_t *)position_params;
  size_data = *(uint64_t *)(position_params + 2);
  *(int32_t *)(render_context + 0x148) = 0;
  *(uint64_t *)(render_context + 0x14c) = position_data;
  *(uint64_t *)(render_context + 0x154) = size_data;
  context_data = *(longlong *)(global_context + 0x1af8);
  final_params = (float *)(context_data + 0x228);
  if ((((*(float *)(context_data + 0x22c) <= position_params[3] && position_params[3] != *(float *)(context_data + 0x22c)) &&
       (position_params[1] < *(float *)(context_data + 0x234))) &&
      ((*final_params <= position_params[2] && position_params[2] != *final_params && (*position_params < *(float *)(context_data + 0x230)))))
     || (((render_flags != 0 && (render_flags == *(int *)(global_context + 0x1b2c))) ||
         (*(char *)(global_context + 0x2e38) != '\0')))) {
    result = 1;
    render_status = validate_render_parameters(position_params, position_params + 2, 1);
    if (render_status != '\0') {
      *(uint *)(render_context + 0x148) = *(uint *)(render_context + 0x148) | 1;
    }
    result = result & 0xff;
  }
  else {
    result = (ulonglong)final_params & 0xffffffffffffff00;
  }
  return result;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: ulonglong validate_render_flags(uint render_flags)
// 验证渲染标志，检查渲染状态和上下文信息以确定是否可以执行渲染操作
ulonglong validate_render_flags(uint render_flags)
{
  uint current_flags;
  ulonglong result;
  longlong render_context;
  bool context_match;
  
  result = (ulonglong)render_flags;
  render_context = *(longlong *)(global_render_context + 0x1af8);
  
  // 检查渲染状态是否允许执行渲染操作
  if ((*(char *)(global_render_context + 0x1d07) == '\0') || 
      (*(char *)(global_render_context + 0x1d06) != '\0')) {
    
    // 检查渲染上下文状态
    if (((*(byte *)(render_context + 0x148) & 1) == 0) ||
        ((result = *(ulonglong *)(render_context + 0x3a0), 
          *(ulonglong *)(global_render_context + 0x1b08) != result && 
          ((render_flags & 0x40) == 0)))) {
      goto validation_failed;
    }
    
    // 检查渲染标志匹配
    if ((render_flags & 0x20) == 0) {
      current_flags = *(uint *)(global_render_context + 0x1b2c);
      result = (ulonglong)current_flags;
      if ((((current_flags != 0) && (current_flags != *(uint *)(render_context + 0x144))) &&
          (*(char *)(global_render_context + 0x1b3d) == '\0')) && 
          (current_flags != *(uint *)(render_context + 0x84))) {
        goto validation_failed;
      }
    }
    
    // 执行渲染验证函数
    result = func_0x000180124000(render_context, (ulonglong)render_flags);
    if (((char)result == '\0') || 
        (((*(byte *)(render_context + 0x1a8) & 4) != 0 && (-1 < (char)render_flags)))) {
      goto validation_failed;
    }
    
    // 检查上下文标志匹配
    current_flags = *(uint *)(render_context + 0x144);
    result = (ulonglong)current_flags;
    if (current_flags != *(uint *)(render_context + 8)) {
      context_match = current_flags == *(uint *)(render_context + 0x84);
      goto check_context;
    }
  }
  else {
    // 检查全局渲染上下文
    if (*(uint *)(global_render_context + 0x1ca0) == 0) {
      goto validation_failed;
    }
    current_flags = *(uint *)(render_context + 0x144);
    result = (ulonglong)current_flags;
    if (*(uint *)(global_render_context + 0x1ca0) != current_flags) {
      goto validation_failed;
    }
    context_match = current_flags == *(uint *)(render_context + 8);
  check_context:
    if (!context_match) {
      goto validation_failed;
    }
  }
  
  // 检查渲染上下文状态
  if (*(char *)(render_context + 0xb1) != '\0') {
validation_failed:
    return result & 0xffffffffffffff00;
  }
  
  return CONCAT71((int7)(result >> 8), 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int setup_render_context(longlong context_data, int context_id)
// 设置渲染上下文，验证上下文数据并配置渲染参数
int setup_render_context(longlong context_data, int context_id)
{
  longlong render_context;
  char setup_result;
  longlong global_context;
  
  // 检查上下文ID匹配和渲染状态
  if ((((*(int *)(global_render_context + 0x1b18) == 0) || 
       (*(int *)(global_render_context + 0x1b18) == context_id)) ||
      (*(char *)(global_render_context + 0x1b1c) != '\0')) &&
     (render_context = *(longlong *)(global_render_context + 0x1af8),
     *(longlong *)(global_render_context + 0x1b00) == render_context)) {
    
    // 检查渲染标志匹配
    if (((*(int *)(global_render_context + 0x1b2c) == 0) || 
         (*(int *)(global_render_context + 0x1b2c) == context_id)) ||
        (*(char *)(global_render_context + 0x1b3d) != '\0')) {
      
      global_context = global_render_context;
      setup_result = FUN_180128040(context_data, context_data + 8, 1);
      if ((setup_result != '\0') && 
          (*(char *)(global_context + 0x1d07) == '\0')) {
        
        setup_result = func_0x000180124000(render_context, 0);
        if ((setup_result != '\0') && 
            ((*(byte *)(render_context + 0x1a8) & 4) == 0)) {
          
          // 设置上下文参数
          *(int *)(global_context + 0x1b18) = context_id;
          *(int8_t *)(global_context + 0x1b1c) = 0;
          
          // 更新上下文相关数据
          if ((context_id != 0) && 
              (*(int *)(global_context + 0x1b20) != context_id)) {
            *(uint64_t *)(global_context + 0x1b24) = 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int update_render_counter(longlong render_context, int counter_id, char update_flag)
// 更新渲染计数器，管理渲染状态和计数器信息
int update_render_counter(longlong render_context, int counter_id, char update_flag)
{
  char validation_result;
  int counter_value;
  int max_counter;
  longlong global_context;
  uint render_flags;
  
  global_context = global_render_context;
  counter_value = *(int *)(render_context + 0x3f0) + 1;
  *(int *)(render_context + 0x3f0) = counter_value;
  render_flags = *(uint *)(render_context + 0x1a8) & 5;
  
  // 根据渲染标志更新计数器
  if (render_flags == 0) {
    *(int *)(render_context + 0x3f4) = *(int *)(render_context + 0x3f4) + 1;
  }
  
  // 检查是否需要更新特殊渲染参数
  if (((((update_flag != '\0') && 
       (*(int *)(global_context + 0x1b2c) == counter_id)) &&
      (*(int *)(render_context + 0x400) == 0x7fffffff)) &&
     ((*(int *)(render_context + 0x404) == 0x7fffffff && 
       (*(char *)(global_context + 0x134) == '\0')))) &&
    (-1 < *(int *)(global_context + 0x3c))) {
    
    validation_result = func_0x0001801281d0(*(int *)(global_context + 0x3c), 1);
    if (validation_result != '\0') {
      if (*(char *)(global_context + 0x135) == '\0') {
        max_counter = 1;
      }
      else {
        max_counter = (render_flags != 0) - 1;
      }
      *(int *)(render_context + 0x404) = max_counter + *(int *)(render_context + 0x3f4);
    }
  }
  
  // 检查计数器状态
  if (counter_value != *(int *)(render_context + 0x3f8)) {
    if ((render_flags != 0) || 
        (*(int *)(render_context + 0x3f4) != *(int *)(render_context + 0x3fc))) {
      return 0;
    }
    *(int *)(global_context + 0x1cb4) = counter_id;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t *calculate_render_offset(uint64_t *position_ptr, uint64_t size_data, int32_t x_param, int32_t y_param)
// 计算渲染偏移量，根据位置和尺寸参数调整渲染坐标
uint64_t *calculate_render_offset(uint64_t *position_ptr, uint64_t size_data, int32_t x_param, int32_t y_param)
{
  int index;
  longlong render_context;
  longlong layout_data;
  float y_offset;
  uint64_t result;
  int layout_index;
  float x_offset;
  float height;
  uint64_t uStackX_8;
  
  height = 0.0;
  uStackX_8._4_4_ = (float)((ulonglong)size_data >> 0x20);
  y_offset = uStackX_8._4_4_;
  x_offset = 0.0;
  uStackX_8._0_4_ = (float)size_data;
  
  // 检查是否需要调整负坐标
  if (((float)uStackX_8 < 0.0) || (uStackX_8._4_4_ < 0.0)) {
    render_context = *(longlong *)(global_render_context + 0x1af8);
    layout_data = *(longlong *)(render_context + 0x210);
    x_offset = *(float *)(render_context + 0x278) - *(float *)(render_context + 0x40);
    
    // 计算布局偏移
    if (layout_data != 0) {
      index = *(int *)(layout_data + 0xc) + 1;
      layout_index = *(int *)(layout_data + 0xc);
      if (-1 < index) {
        layout_index = index;
      }
      x_offset = ((*(float *)(layout_data + 0x18) - *(float *)(layout_data + 0x14)) *
               *(float *)((longlong)layout_index * 0x1c + *(longlong *)(layout_data + 0x38)) +
              *(float *)(layout_data + 0x14)) - *(float *)(render_context + 0x70);
    }
    x_offset = x_offset + *(float *)(render_context + 0x40);
    height = (*(float *)(render_context + 0x27c) - *(float *)(render_context + 0x44)) + *(float *)(render_context + 0x44);
  }
  
  result = size_data;
  
  // 调整X坐标
  if ((float)uStackX_8 <= 0.0) {
    if ((float)uStackX_8 == 0.0) {
      uStackX_8 = CONCAT44(uStackX_8._4_4_, x_param);
      result = uStackX_8;
    }
    else {
      x_offset = x_offset - *(float *)(*(longlong *)(global_render_context + 0x1af8) + 0x100);
      if (x_offset <= 4.0) {
        x_offset = 4.0;
      }
      uStackX_8 = CONCAT44(uStackX_8._4_4_, (float)uStackX_8 + x_offset);
      result = uStackX_8;
    }
  }
  
  uStackX_8 = result;
  
  // 调整Y坐标
  if (y_offset <= 0.0) {
    if (y_offset != 0.0) {
      height = height - *(float *)(*(longlong *)(global_render_context + 0x1af8) + 0x104);
      if (height <= 4.0) {
        height = 4.0;
      }
      *position_ptr = CONCAT44(y_offset + height, (int)uStackX_8);
      return position_ptr;
    }
    uStackX_8 = CONCAT44(y_param, (int)uStackX_8);
  }
  
  *position_ptr = uStackX_8;
  return position_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180124730(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  uint64_t uStackX_8;
  longlong lStackX_10;
  uint64_t *puStackX_18;
  longlong lStackX_20;
  
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
  }
  uStackX_8 = param_1;
  lStackX_10 = func_0x000180120ce0(0x3c58,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  puStackX_18 = &uStackX_8;
  lStackX_20 = lStackX_10;
  if (lStackX_10 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18011ff60(lStackX_10);
  }
  if (_DAT_180c8a9b0 == 0) {
    _DAT_180c8a9b0 = lVar1;
  }
  FUN_1801260f0(lVar1);
  return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801247c0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  int8_t auStackX_8 [8];
  longlong lStackX_10;
  int8_t *puStackX_18;
  longlong lStackX_20;
  
  lVar1 = _DAT_180c8a9b0;
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    lStackX_10 = func_0x000180120ce0(0xa8,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
    puStackX_18 = auStackX_8;
    lStackX_20 = lStackX_10;
    if (lStackX_10 != 0) {
      lVar2 = FUN_18011fa30(lStackX_10,lVar1 + 0x1a00);
    }
    *(longlong *)(param_1 + 0x80) = lVar2;
    *(void **)(lVar2 + 0x40) = &UNK_180a06468;
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(lVar1 + 0x1a90)) {
    FUN_180291500(*(uint64_t *)(param_1 + 0x80));
    FUN_180291c70(*(uint64_t *)(param_1 + 0x80),*(uint64_t *)(*(longlong *)(lVar1 + 0xa0) + 8));
    FUN_180291b40(*(uint64_t *)(param_1 + 0x80),*(uint64_t *)(param_1 + 8),
                  CONCAT44(*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14),
                           *(float *)(param_1 + 8) + *(float *)(param_1 + 0x10)),0);
    *(uint *)(*(longlong *)(param_1 + 0x80) + 0x30) =
         -(uint)(*(char *)(lVar1 + 0x16c1) != '\0') & 2 | (uint)(*(char *)(lVar1 + 0x16c0) != '\0');
    *(int32_t *)(param_1 + 0x58) = *(int32_t *)(lVar1 + 0x1a90);
  }
  return *(uint64_t *)(param_1 + 0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801248f0(longlong param_1)
void FUN_1801248f0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = _DAT_180c8a9b0;
  FUN_18012d2e0();
  func_0x000180123e90(*(int32_t *)(param_1 + 0x84),param_1);
  *(int8_t *)(lVar2 + 0x1d06) = 1;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x3a0) + 0x44);
  *(float *)(lVar2 + 0x1b48) =
       *(float *)(lVar2 + 0x118) - *(float *)(*(longlong *)(param_1 + 0x3a0) + 0x40);
  *(float *)(lVar2 + 0x1b4c) = *(float *)(lVar2 + 0x11c) - fVar1;
  if (((*(byte *)(param_1 + 0xc) & 4) == 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x3a0) + 0xc) & 4) == 0)) {
    *(longlong *)(lVar2 + 0x1b78) = param_1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180124980(void)
void FUN_180124980(void)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint64_t unaff_RDI;
  longlong lVar8;
  float fVar9;
  float fVar10;
  uint64_t uStackX_8;
  
  lVar5 = _DAT_180c8a9b0;
  lVar8 = *(longlong *)(_DAT_180c8a9b0 + 0x1b78);
  if (lVar8 == 0) {
    if ((*(longlong *)(_DAT_180c8a9b0 + 0x1b50) != 0) &&
       (iVar7 = *(int *)(_DAT_180c8a9b0 + 0x1b2c),
       *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b50) + 0x84) == iVar7)) {
      *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar7;
      if (*(int *)(lVar5 + 0x1b30) == iVar7) {
        *(int8_t *)(lVar5 + 0x1b3f) = 1;
      }
      if (*(char *)(lVar5 + 0x120) == '\0') {
        *(bool *)(lVar5 + 0x1b3c) = iVar7 != 0;
        if (iVar7 != 0) {
          *(int32_t *)(lVar5 + 0x1b38) = 0;
          *(int8_t *)(lVar5 + 0x1b3e) = 0;
        }
        *(int32_t *)(lVar5 + 0x1b2c) = 0;
        *(int32_t *)(lVar5 + 0x1b44) = 0;
        *(int8_t *)(lVar5 + 0x1b3d) = 0;
        *(uint64_t *)(lVar5 + 0x1b50) = 0;
      }
    }
    return;
  }
  piVar2 = (int *)(_DAT_180c8a9b0 + 0x1b2c);
  *(int *)(_DAT_180c8a9b0 + 0x1b34) = *piVar2;
  if (*(int *)(lVar5 + 0x1b30) == *piVar2) {
    *(int8_t *)(lVar5 + 0x1b3f) = 1;
  }
  lVar8 = *(longlong *)(lVar8 + 0x3a0);
  if (((*(char *)(lVar5 + 0x120) != '\0') && (-256000.0 <= *(float *)(lVar5 + 0x118))) &&
     (-256000.0 <= *(float *)(lVar5 + 0x11c))) {
    fVar10 = *(float *)(lVar5 + 0x118) - *(float *)(lVar5 + 0x1b48);
    fVar9 = *(float *)(lVar5 + 0x11c) - *(float *)(lVar5 + 0x1b4c);
    uStackX_8 = CONCAT44(fVar9,fVar10);
    if ((fVar10 != *(float *)(lVar8 + 0x40)) || (fVar9 != *(float *)(lVar8 + 0x44))) {
      if (((*(uint *)(lVar8 + 0xc) & 0x100) == 0) && (*(float *)(lVar5 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar5 + 0x2e04) = *(int32_t *)(lVar5 + 0x1c);
      }
      func_0x00018012ddc0(lVar8,&uStackX_8,1);
      if (*(char *)(lVar8 + 0xae) != '\0') {
        *(uint64_t *)(*(longlong *)(lVar8 + 0x28) + 8) = uStackX_8;
      }
    }
    lVar3 = _DAT_180c8a9b0;
    lVar8 = *(longlong *)(lVar5 + 0x1b78);
    uVar4 = 0;
    if (*(longlong *)(_DAT_180c8a9b0 + 0x1c98) != lVar8) {
      *(longlong *)(_DAT_180c8a9b0 + 0x1c98) = lVar8;
      if ((lVar8 != 0) && (*(char *)(lVar3 + 0x1d07) != '\0')) {
        *(int8_t *)(lVar3 + 0x1d05) = 1;
      }
      *(int8_t *)(lVar3 + 0x1d09) = 0;
      if (lVar8 != 0) {
        uVar4 = *(int32_t *)(lVar8 + 0x3c8);
      }
      *(int32_t *)(lVar3 + 0x1ca0) = uVar4;
      *(int8_t *)(lVar3 + 0x1d04) = 0;
      *(int32_t *)(lVar3 + 0x1cfc) = 0;
    }
    if (lVar8 != 0) {
      if ((*(longlong *)(lVar8 + 0x408) != 0) &&
         (lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x408) + 0x30), lVar5 != 0)) {
        *(int32_t *)(lVar5 + 0x18) = *(int32_t *)(lVar8 + 8);
        lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0x408) + 0x30);
        *(int32_t *)(lVar5 + 0x14) = *(int32_t *)(lVar5 + 0x18);
      }
      if (*(longlong *)(lVar8 + 0x3a0) != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x3a0);
      }
      if (((((*(uint *)(lVar8 + 0xc) & 0x4000000) != 0) && (*(int *)(lVar3 + 0x1b2c) != 0)) &&
          (*(longlong *)(lVar3 + 0x1b50) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x1b50) + 0x3a0) != lVar8)) {
        *(int16_t *)(lVar3 + 0x1b3c) = 1;
        *(int32_t *)(lVar3 + 0x1b38) = 0;
        *(int8_t *)(lVar3 + 0x1b3e) = 0;
        *(int32_t *)(lVar3 + 0x1b2c) = 0;
        *(int32_t *)(lVar3 + 0x1b44) = 0;
        *(uint64_t *)(lVar3 + 0x1b50) = 0;
      }
      if ((*(longlong *)
            (*(longlong *)(lVar3 + 0x1ab8) + -8 + (longlong)*(int *)(lVar3 + 0x1ab0) * 8) != lVar8)
         && (iVar7 = *(int *)(lVar3 + 0x1ab0) + -2, -1 < iVar7)) {
        lVar5 = (longlong)iVar7;
        plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x1ab8) + lVar5 * 8);
        do {
          if (*plVar6 == lVar8) {
                    // WARNING: Subroutine does not return
            memmove(*(longlong *)(lVar3 + 0x1ab8) + (longlong)iVar7 * 8,
                    *(longlong *)(lVar3 + 0x1ab8) + (longlong)(iVar7 + 1) * 8,
                    (longlong)((*(int *)(lVar3 + 0x1ab0) - iVar7) + -1) << 3,(longlong)iVar7,
                    unaff_RDI);
          }
          iVar7 = iVar7 + -1;
          plVar6 = plVar6 + -1;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
      if ((*(uint *)(lVar8 + 0xc) & 0x2000) == 0) {
        FUN_18012d230(lVar8);
      }
    }
    return;
  }
  if ((*(uint *)(lVar5 + 0x19e8) & 0x400) != 0) {
    FUN_18012fbd0(lVar8,*(uint64_t *)(lVar5 + 0x1c80));
  }
  if ((*(char *)(lVar5 + 0x1dd0) == '\0') || (*(int *)(lVar5 + 0x1e40) == 0)) {
    *(uint64_t *)(lVar5 + 0x1c80) = *(uint64_t *)(lVar8 + 0x28);
  }
  puVar1 = (uint *)(*(longlong *)(lVar8 + 0x28) + 4);
  *puVar1 = *puVar1 & 0xfffffff7;
  *(bool *)(lVar5 + 0x1b3c) = *(int *)(lVar5 + 0x1b2c) != 0;
  if (*(int *)(lVar5 + 0x1b2c) != 0) {
    *(int32_t *)(lVar5 + 0x1b38) = 0;
    *(int8_t *)(lVar5 + 0x1b3e) = 0;
  }
  *(int32_t *)(lVar5 + 0x1b2c) = 0;
  *(int32_t *)(lVar5 + 0x1b44) = 0;
  *(int8_t *)(lVar5 + 0x1b3d) = 0;
  *(uint64_t *)(lVar5 + 0x1b50) = 0;
  *(uint64_t *)(lVar5 + 0x1b78) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180124b90(void)
void FUN_180124b90(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  
  lVar8 = _DAT_180c8a9b0;
  if (((*(int *)(_DAT_180c8a9b0 + 0x1b2c) == 0) && (*(int *)(_DAT_180c8a9b0 + 0x1b18) == 0)) &&
     ((lVar5 = *(longlong *)(_DAT_180c8a9b0 + 0x1c98), lVar5 == 0 ||
      (*(char *)(lVar5 + 0xb5) == '\0')))) {
    if (*(char *)(_DAT_180c8a9b0 + 0x410) != '\0') {
      if (*(longlong *)(_DAT_180c8a9b0 + 0x1b08) == 0) {
        if ((lVar5 != 0) && (lVar5 = func_0x00018012ea90(), lVar5 == 0)) {
          *(uint64_t *)(lVar8 + 0x1c98) = 0;
          *(int8_t *)(lVar8 + 0x1d09) = 0;
          *(int32_t *)(lVar8 + 0x1ca0) = 0;
          *(int8_t *)(lVar8 + 0x1d04) = 0;
          *(int32_t *)(lVar8 + 0x1cfc) = 0;
        }
      }
      else {
        FUN_1801248f0(*(uint64_t *)(_DAT_180c8a9b0 + 0x1b00));
        if (*(char *)(lVar8 + 0xcc) != '\0') {
          lVar5 = *(longlong *)(lVar8 + 0x1b08);
          uVar9 = *(uint *)(lVar5 + 0xc) & 1;
          if ((uVar9 == 0) ||
             ((*(byte *)(*(longlong *)(*(longlong *)(lVar8 + 0x1b00) + 0x3a8) + 0x432) & 1) != 0)) {
            if (uVar9 == 0) {
              fVar13 = *(float *)(lVar8 + 0x19fc) * *(float *)(lVar5 + 0x2d8) *
                       *(float *)(lVar5 + 0x2dc) +
                       *(float *)(lVar8 + 0x1660) + *(float *)(lVar8 + 0x1660);
            }
            else {
              fVar13 = 0.0;
            }
            if ((((*(float *)(lVar8 + 0x3bc) < *(float *)(lVar5 + 0x40)) ||
                 (*(float *)(lVar8 + 0x3c0) < *(float *)(lVar5 + 0x44))) ||
                (*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x50) <= *(float *)(lVar8 + 0x3bc)))
               || (fVar13 + *(float *)(lVar5 + 0x44) <= *(float *)(lVar8 + 0x3c0))) {
              *(uint64_t *)(lVar8 + 0x1b78) = 0;
            }
          }
        }
      }
    }
    if (*(char *)(lVar8 + 0x411) != '\0') {
      lVar5 = func_0x00018012ea90();
      lVar3 = _DAT_180c8a9b0;
      bVar12 = lVar5 == 0;
      iVar4 = *(int *)(lVar8 + 0x1aa0) + -1;
      if (-1 < iVar4) {
        lVar10 = (longlong)iVar4;
        do {
          if (bVar12) goto LAB_180124d2b;
          lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x1aa8) + lVar10 * 8);
          if (lVar1 == lVar5) goto LAB_180124d32;
          if (lVar1 == *(longlong *)(lVar8 + 0x1b00)) {
            bVar12 = true;
          }
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
      if (bVar12) {
LAB_180124d2b:
        lVar5 = *(longlong *)(lVar8 + 0x1b00);
      }
LAB_180124d32:
      iVar4 = *(int *)(_DAT_180c8a9b0 + 0x1bb0);
      if (iVar4 != 0) {
        iVar7 = 0;
        if ((lVar5 != 0) && (iVar7 = 0, 0 < iVar4)) {
          lVar8 = 0;
          plVar11 = (longlong *)(*(longlong *)(_DAT_180c8a9b0 + 0x1bb8) + 8);
          iVar7 = 0;
          do {
            if ((*plVar11 != 0) && ((*(uint *)(*plVar11 + 0xc) & 0x1000000) == 0)) {
              bVar12 = false;
              plVar6 = plVar11;
              lVar10 = lVar8;
              if (iVar4 <= lVar8) break;
              do {
                if (bVar12) goto LAB_18012edb4;
                if ((*plVar6 != 0) &&
                   (*(longlong *)(*plVar6 + 0x3a0) == *(longlong *)(lVar5 + 0x3a0))) {
                  bVar12 = true;
                }
                lVar10 = lVar10 + 1;
                plVar6 = plVar6 + 6;
              } while (lVar10 < iVar4);
              if (!bVar12) break;
            }
LAB_18012edb4:
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 1;
            plVar11 = plVar11 + 6;
          } while (iVar7 < iVar4);
        }
        if (iVar7 < iVar4) {
          iVar4 = *(int *)(_DAT_180c8a9b0 + 0x1bb4);
          if (iVar4 < iVar7) {
            if (iVar4 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar4 / 2 + iVar4;
            }
            iVar2 = iVar7;
            if (iVar7 < iVar4) {
              iVar2 = iVar4;
            }
            FUN_18013e760(_DAT_180c8a9b0 + 0x1bb0,iVar2);
          }
          *(int *)(lVar3 + 0x1bb0) = iVar7;
        }
      }
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180124e30(void)
void FUN_180124e30(void)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  float *pfVar5;
  char *pcVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fStackX_8;
  float fStackX_c;
  float afStackX_10 [3];
  float fStackX_1c;
  float afStackX_20 [2];
  
  lVar2 = _DAT_180c8a9b0;
  pfVar1 = (float *)(_DAT_180c8a9b0 + 0x118);
  if ((-256000.0 <= *pfVar1) && (pfVar8 = (float *)(_DAT_180c8a9b0 + 0x11c), -256000.0 <= *pfVar8))
  {
    fVar9 = (float)(int)*pfVar1;
    *(float *)(_DAT_180c8a9b0 + 0x1b6c) = fVar9;
    *pfVar1 = fVar9;
    fVar9 = (float)(int)*pfVar8;
    *(float *)(lVar2 + 0x1b70) = fVar9;
    *(float *)(lVar2 + 0x11c) = fVar9;
  }
  if ((-256000.0 < *(float *)(lVar2 + 0x118) || *(float *)(lVar2 + 0x118) == -256000.0) &&
     (-256000.0 < *(float *)(lVar2 + 0x11c) || *(float *)(lVar2 + 0x11c) == -256000.0)) {
    pfVar8 = (float *)(lVar2 + 0x3b4);
    pfVar4 = pfVar8;
    if (pfVar8 == (float *)0x0) {
      pfVar4 = (float *)(lVar2 + 0x118);
    }
    if ((-256000.0 < *pfVar4 || *pfVar4 == -256000.0) &&
       (-256000.0 < pfVar4[1] || pfVar4[1] == -256000.0)) {
      fVar9 = *pfVar1 - *pfVar8;
      fVar10 = *(float *)(lVar2 + 0x11c) - *(float *)(lVar2 + 0x3b8);
      goto LAB_180124eff;
    }
  }
  fVar9 = 0.0;
  fVar10 = 0.0;
LAB_180124eff:
  *(float *)(lVar2 + 0x3ac) = fVar9;
  *(float *)(lVar2 + 0x3b0) = fVar10;
  if ((*(float *)(lVar2 + 0x3ac) != 0.0) || (fVar10 != 0.0)) {
    *(int8_t *)(lVar2 + 0x1d07) = 0;
  }
  pcVar6 = (char *)(lVar2 + 0x120);
  pfVar8 = (float *)(lVar2 + 0x424);
  pfVar4 = (float *)(lVar2 + 0x3c0);
  lVar7 = 5;
  *(uint64_t *)(lVar2 + 0x3b4) = *(uint64_t *)pfVar1;
  do {
    cVar3 = '\x01';
    if ((*pcVar6 == '\0') || (0.0 < *pfVar8 || *pfVar8 == 0.0)) {
      cVar3 = '\0';
    }
    pcVar6[0x2f0] = cVar3;
    if ((*pcVar6 != '\0') || (*pfVar8 <= 0.0 && *pfVar8 != 0.0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    pcVar6[0x2fa] = cVar3;
    fVar9 = *pfVar8;
    pfVar8[5] = fVar9;
    if (*pcVar6 == '\0') {
      fVar9 = -1.0;
    }
    else if (0.0 <= fVar9) {
      fVar9 = fVar9 + *(float *)(lVar2 + 0x18);
    }
    else {
      fVar9 = 0.0;
    }
    *pfVar8 = fVar9;
    pcVar6[0x2f5] = '\0';
    if (pcVar6[0x2f0] == '\0') {
      if (*pcVar6 != '\0') {
        if ((*(float *)(lVar2 + 0x118) <= -256000.0 && *(float *)(lVar2 + 0x118) != -256000.0) ||
           (*(float *)(lVar2 + 0x11c) <= -256000.0 && *(float *)(lVar2 + 0x11c) != -256000.0)) {
          afStackX_20[0] = 0.0;
          afStackX_20[1] = 0.0;
          pfVar5 = afStackX_20;
        }
        else {
          pfVar5 = afStackX_10 + 2;
          afStackX_10[2] = *pfVar1 - pfVar4[-1];
          fStackX_1c = *(float *)(lVar2 + 0x11c) - *pfVar4;
        }
        fVar9 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar11 = fVar10 * fVar10 + fVar9 * fVar9;
        if (fVar11 <= pfVar8[0x14]) {
          fVar11 = pfVar8[0x14];
        }
        pfVar8[0x14] = fVar11;
        fVar11 = ABS(fVar9);
        if (ABS(fVar9) <= pfVar4[0x23]) {
          fVar11 = pfVar4[0x23];
        }
        fVar9 = ABS(fVar10);
        if (ABS(fVar10) <= pfVar4[0x24]) {
          fVar9 = pfVar4[0x24];
        }
        pfVar4[0x23] = fVar11;
        pfVar4[0x24] = fVar9;
      }
    }
    else {
      dVar12 = *(double *)(lVar2 + 0x1a88);
      if ((float)(dVar12 - *(double *)(pfVar4 + 10)) < *(float *)(lVar2 + 0x30)) {
        if ((*(float *)(lVar2 + 0x118) <= -256000.0 && *(float *)(lVar2 + 0x118) != -256000.0) ||
           (*(float *)(lVar2 + 0x11c) <= -256000.0 && *(float *)(lVar2 + 0x11c) != -256000.0)) {
          afStackX_10[0] = 0.0;
          afStackX_10[1] = 0.0;
          pfVar5 = afStackX_10;
        }
        else {
          pfVar5 = &fStackX_8;
          fStackX_8 = *pfVar1 - pfVar4[-1];
          fStackX_c = *(float *)(lVar2 + 0x11c) - *pfVar4;
        }
        dVar12 = -3.4028234663852886e+38;
        cVar3 = pcVar6[0x2f5];
        if (pfVar5[1] * pfVar5[1] + *pfVar5 * *pfVar5 <
            *(float *)(lVar2 + 0x34) * *(float *)(lVar2 + 0x34)) {
          cVar3 = '\x01';
        }
        pcVar6[0x2f5] = cVar3;
      }
      *(double *)(pfVar4 + 10) = dVar12;
      *(uint64_t *)(pfVar4 + -1) = *(uint64_t *)pfVar1;
      pfVar4[0x23] = 0.0;
      pfVar4[0x24] = 0.0;
      pfVar8[0x14] = 0.0;
    }
    if (pcVar6[0x2f0] != '\0') {
      *(int8_t *)(lVar2 + 0x1d07) = 0;
    }
    pfVar8 = pfVar8 + 1;
    pcVar6 = pcVar6 + 1;
    pfVar4 = pfVar4 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180125180(void)
void FUN_180125180(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = _DAT_180c8a9b0;
  lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1b00);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0xb2) == '\0')) &&
     ((fVar6 = *(float *)(_DAT_180c8a9b0 + 0x128), fVar6 != 0.0 ||
      (*(float *)(_DAT_180c8a9b0 + 300) != 0.0)))) {
    uVar5 = *(uint *)(lVar1 + 0xc);
    lVar3 = lVar1;
    while ((((uVar5 >> 0x18 & 1) != 0 && ((uVar5 & 0x218) == 0x10)) &&
           (lVar2 = *(longlong *)(lVar3 + 0x398), lVar2 != 0))) {
      uVar5 = *(uint *)(lVar2 + 0xc);
      lVar3 = lVar2;
    }
    uVar5 = *(uint *)(lVar3 + 0xc) & 0x210;
    if (fVar6 != 0.0) {
      if (*(char *)(_DAT_180c8a9b0 + 0x134) == '\0') {
        if (uVar5 == 0) {
          fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                  *(float *)(lVar3 + 0x2dc) * 5.0;
          fVar8 = *(float *)(lVar3 + 0x90);
          fVar9 = (*(float *)(lVar3 + 0x27c) - *(float *)(lVar3 + 0x274)) * 0.67 +
                  *(float *)(lVar3 + 0x74) * 1.34;
          if (fVar7 <= fVar9) {
            fVar9 = fVar7;
          }
          fVar6 = fVar8 - (float)(int)fVar9 * fVar6;
          *(float *)(lVar3 + 0x90) = fVar6;
          *(float *)(lVar3 + 0x11c) = (fVar8 + *(float *)(lVar3 + 0x11c)) - fVar6;
        }
      }
      else if (*(char *)(_DAT_180c8a9b0 + 0xac) != '\0') {
        fVar8 = *(float *)(lVar1 + 0x2d8);
        fVar9 = fVar6 * 0.1 + fVar8;
        fVar6 = 0.5;
        if ((0.5 <= fVar9) && (fVar6 = fVar9, 2.5 <= fVar9)) {
          fVar6 = 2.5;
        }
        *(float *)(lVar1 + 0x2d8) = fVar6;
        fVar9 = *(float *)(lVar4 + 0x11c);
        fVar6 = fVar6 / fVar8;
        *(float *)(lVar1 + 0x40) =
             ((*(float *)(lVar4 + 0x118) - *(float *)(lVar1 + 0x40)) *
             *(float *)(lVar1 + 0x48) * (1.0 - fVar6)) / *(float *)(lVar1 + 0x48) +
             *(float *)(lVar1 + 0x40);
        *(float *)(lVar1 + 0x44) =
             (*(float *)(lVar1 + 0x4c) * (1.0 - fVar6) * (fVar9 - *(float *)(lVar1 + 0x44))) /
             *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x44);
        *(float *)(lVar1 + 0x48) = fVar6 * *(float *)(lVar1 + 0x48);
        *(float *)(lVar1 + 0x4c) = fVar6 * *(float *)(lVar1 + 0x4c);
        *(float *)(lVar1 + 0x54) = fVar6 * *(float *)(lVar1 + 0x54);
        *(float *)(lVar1 + 0x50) = fVar6 * *(float *)(lVar1 + 0x50);
      }
    }
    if (((*(float *)(lVar4 + 300) != 0.0) && (uVar5 == 0)) && (*(char *)(lVar4 + 0x134) == '\0')) {
      fVar6 = *(float *)(lVar3 + 0x8c);
      fVar8 = fVar6 - *(float *)(lVar4 + 0x19fc) * *(float *)(lVar3 + 0x2d8) *
                      *(float *)(lVar3 + 0x2dc) * *(float *)(lVar4 + 300);
      *(float *)(lVar3 + 0x8c) = fVar8;
      *(float *)(lVar3 + 0x118) = (fVar6 + *(float *)(lVar3 + 0x118)) - fVar8;
    }
  }
  return;
}





