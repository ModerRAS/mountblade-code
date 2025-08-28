#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part124_sub002_sub002.c - 游戏对象渲染更新函数
// 核心引擎模块 - 渲染系统子模块

// 注意：这是一个简化实现，基于原始代码的翻译
// 原始实现：FUN_18012ae5a 函数，约1090行原始代码
// 简化实现：update_game_object_render 函数，保留了核心渲染逻辑
// 主要功能：游戏对象的位置更新、边界框计算、深度测试、纹理处理等
void update_game_object_render(float param_1, float param_2, float param_3, float param_4)

{
  // 局部变量声明
  int *render_counter_ptr;
  byte *object_flags_ptr;
  int8_t *texture_ptr;
  char render_state_flag;
  int32_t render_mode;
  int32_t temp_color1;
  int32_t temp_color2;
  int32_t temp_color3;
  int32_t temp_color4;
  int visibility_check;
  uint object_index;
  float *position_ptr;
  uint64_t *matrix_ptr;
  longlong global_data_ptr;
  int32_t *vertex_ptr;
  longlong camera_ptr;
  float *screen_coords;
  uint64_t transform_matrix;
  int8_t alpha_value;
  float *world_coords;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  byte depth_test_flag;
  float *clip_coords;
  longlong lVar20;
  bool is_visible;
  longlong unaff_R14;
  float unaff_R15D;
  bool in_ZF;
  uint64_t bounding_box;
  ulonglong uVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  float scaled_x_coord;
  float scaled_y_coord;
  float base_y_coord;
  float in_XMM4_Da;
  float temp_float1;
  float temp_float2;
  float temp_float3;
  float unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float depth_value;
  float unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t *render_context;
  longlong object_data_ptr;
  char cStack0000000000000048;
  char cStack0000000000000049;
  float fStack0000000000000050;
  float fStack0000000000000054;
  char cStack0000000000000058;
  char cStack0000000000000059;
  float fStack0000000000000060;
  float fStack0000000000000064;
  int32_t in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  // 初始化坐标计算
  scaled_x_coord = param_1 + unaff_XMM15_Da;
  if (param_1 + unaff_XMM15_Da <= param_2) {
    scaled_x_coord = param_2;
  }
  render_state_flag = *(char *)(unaff_R14 + 0xb2);
  scaled_x_coord = (float)(int)scaled_x_coord;
  *(longlong *)(unaff_RBP + -0xe) = CONCAT71((int7)(unaff_RDI >> 8),!in_ZF) + 1;
  global_data_ptr = _DAT_180c8a9b0;
  
  // 检查是否需要跳过渲染
  if ((((render_state_flag != '\0') || ((*(byte *)(unaff_R14 + 0xc) & 0x42) != 0)) ||
      (0 < *(int *)(unaff_R14 + 0xc4))) ||
     ((0 < *(int *)(unaff_R14 + 200) || (*(char *)(unaff_R14 + 0xb0) == '\0')))) goto LAB_18012b510;
  // 获取渲染配置并计算Y坐标
  render_state_flag = *(char *)(global_data_ptr + 0xcb);
  scaled_y_coord = *(float *)(global_data_ptr + 0x19f8) * in_XMM4_Da;
  base_y_coord = param_3 + unaff_XMM15_Da + *(float *)(global_data_ptr + 0x19f8) * param_4;
  unaff_RBP[2] = (float)(-(uint)(render_state_flag != '\0') & 4);
  if (base_y_coord <= scaled_y_coord) {
    base_y_coord = scaled_y_coord;
  }
  scaled_y_coord = (float)(int)((float)(int)base_y_coord * 0.75);
  base_y_coord = unaff_XMM13_Da;
  if (render_state_flag != '\0') {
    base_y_coord = unaff_XMM11_Da;
    unaff_XMM13_Db = unaff_XMM11_Db;
    unaff_XMM13_Dc = unaff_XMM11_Dc;
    unaff_XMM13_Dd = unaff_XMM11_Dd;
  }
  
  // 初始化边界框为最大值
  fStack0000000000000070 = 3.4028235e+38;  // FLOAT_MAX
  fStack0000000000000074 = 3.4028235e+38;  // FLOAT_MAX
  fStack0000000000000060 = 3.4028235e+38;  // FLOAT_MAX
  fStack0000000000000064 = 3.4028235e+38;  // FLOAT_MAX
  
  // 初始化渲染系统
  FUN_18012e1b0(&UNK_180a064a0);
  lVar20 = 0;
  
  // 主渲染循环
  do {
    render_mode = (int32_t)((ulonglong)render_context >> 0x20);
    _fStack0000000000000050 =
         CONCAT44(*(float *)(unaff_R14 + 0x4c) + *(float *)(unaff_R14 + 0x44),
                  *(float *)(unaff_R14 + 0x40) + *(float *)(unaff_R14 + 0x48));
    func_0x00018011fcd0(unaff_RBP + 0xe, unaff_R14 + 0x40, &stack0x00000050, unaff_R12 + -2);
    
    // 设置变换矩阵
    auVar24._4_4_ = unaff_XMM13_Db;
    auVar24._0_4_ = base_y_coord;
    auVar24._8_4_ = unaff_XMM13_Dc;
    auVar24._12_4_ = unaff_XMM13_Dd;
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = base_y_coord * *unaff_R12;
    
    // 计算变换后的坐标
    temp_float1 = scaled_y_coord * *unaff_R12 + unaff_RBP[0xe];
    temp_float2 = unaff_R12[1];
    temp_float3 = scaled_y_coord * unaff_R12[1] + unaff_RBP[0xf];
    depth_value = unaff_RBP[0xe] - auVar25._0_4_;
    unaff_RBP[-0x1a] = temp_float1;
    temp_float2 = unaff_RBP[0xf] - base_y_coord * temp_float2;
    unaff_RBP[-0x19] = temp_float3;
    unaff_RBP[-0x1c] = depth_value;
    unaff_RBP[-0x1b] = temp_float2;
    
    // 更新边界框
    if (temp_float1 < depth_value) {
      unaff_RBP[-0x1c] = temp_float1;
      unaff_RBP[-0x1a] = depth_value;
    }
    if (temp_float3 < temp_float2) {
      unaff_RBP[-0x1b] = temp_float3;
      unaff_RBP[-0x19] = temp_float2;
    }
    
    // 可见性检查
    object_index = (uint)unaff_RDI;
    temp_color1 = func_0x000180123c50(auVar25._0_8_, (longlong)(int)object_index);
    render_context = (uint64_t *)CONCAT44(render_mode, 0x2020);
    FUN_18010f170(unaff_RBP + -0x1c, temp_color1, &stack0x00000048, (longlong)&stack0x00000048 + 1,
                  render_context);
    
    // 检查是否需要进一步渲染处理
    if (((cStack0000000000000048 == '\0') && (cStack0000000000000049 == '\0')) ||
       (*(uint *)(global_data_ptr + 0x1dcc) = (~object_index & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
      if (object_index == 0) goto LAB_18012b0c8;
      if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
      if (cStack0000000000000048 != '\0') goto LAB_18012b1a3;
    }
    else {
      if ((*(char *)(global_data_ptr + 0x415) == '\0') || (object_index != 0)) {
        // 计算投影变换
        temp_float2 = *unaff_R12;
        temp_float3 = unaff_R12[1];
        unaff_RBP[0x10] = temp_float2 * -scaled_y_coord;
        unaff_RBP[0x11] = temp_float3 * -scaled_y_coord;
        unaff_RBP[0x12] = base_y_coord * temp_float2;
        unaff_RBP[0x13] = base_y_coord * temp_float3;
        position_ptr = (float *)func_0x00018011fcd0(unaff_RBP + 0x1c, unaff_RBP + 0x12, unaff_RBP + 0x10,
                                                   unaff_R12 + -2);
        temp_float2 = (*(float *)(global_data_ptr + 0x118) - *(float *)(global_data_ptr + 0x1b48)) + *position_ptr;
        render_context = (uint64_t *)&stack0x00000060;
        unaff_RBP[0x15] = (*(float *)(global_data_ptr + 0x11c) - *(float *)(global_data_ptr + 0x1b4c)) + position_ptr[1];
        unaff_RBP[0x14] = temp_float2;
        FUN_1801295b0(temp_float2, unaff_RBP + 0x14, unaff_R12 + -2, &stack0x00000070, render_context);
        goto LAB_18012b18f;
      }
      position_ptr = (float *)FUN_180128fd0(unaff_RBP + -0x14);
      fStack0000000000000060 = *position_ptr;
      fStack0000000000000064 = position_ptr[1];
      func_0x000180123e90(0, 0);
LAB_18012b0c8:
      if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
        render_state_flag = (cStack0000000000000048 != '\0') + '\x1e';
      }
      else {
LAB_18012b0d0:
        render_state_flag = ' ';
      }
      temp_float2 = (float)FUN_180121ed0(render_state_flag);
      unaff_RBP[lVar20 + 0x20] = temp_float2;
    }
    unaff_RDI = (ulonglong)(object_index + 1);
    lVar20 = lVar20 + 1;
    unaff_R12 = unaff_R12 + 6;
  } while (lVar20 < *(longlong *)(unaff_RBP + -0xe));
  // 深度测试和渲染状态管理
  base_y_coord = unaff_RBP[2];
  unaff_R12 = (float *)0x180bf66e8;  // 默认渲染参数
  unaff_R15D = unaff_RBP[-10];
  scaled_y_coord = 0.0;
  if (base_y_coord != 0.0) {
    do {
      temp_color1 = (int32_t)((ulonglong)render_context >> 0x20);
      bounding_box = FUN_1801296e0(unaff_RBP + -0x20);
      render_mode = func_0x000180123c50(bounding_box, (longlong)((int)scaled_y_coord + 4));
      render_context = (uint64_t *)CONCAT44(temp_color1, 0x20);
      FUN_18010f170(unaff_RBP + -0x20, render_mode, (longlong)&stack0x00000058 + 1, &stack0x00000058,
                    render_context);
      
      // 检查是否需要渲染深度信息
      if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(global_data_ptr + 0x1b24))) ||
          (cStack0000000000000058 != '\0')) &&
         (*(uint *)(global_data_ptr + 0x1dcc) = ((uint)scaled_y_coord & 1) + 3, cStack0000000000000058 != '\0')) {
        uVar23 = *(ulonglong *)(unaff_R14 + 0x40);
        *(ulonglong *)(unaff_RBP + -10) = uVar23;
        unaff_RBP[0xc] = scaled_y_coord;
        _fStack0000000000000050 = 0;
        
        // 根据深度值选择不同的渲染路径
        if (scaled_y_coord == 0.0) {
LAB_18012b293:
          temp_float2 = (*(float *)(global_data_ptr + 0x11c) - *(float *)(global_data_ptr + 0x1b4c)) + unaff_XMM11_Da;
          uVar23 = (ulonglong)(uint)temp_float2;
          unaff_RBP[-9] = temp_float2;
        }
        else if (scaled_y_coord == 1.4013e-45) {
          _fStack0000000000000050 = 0x3f800000;  // 1.0f
LAB_18012b2d2:
          temp_float2 = (*(float *)(global_data_ptr + 0x118) - *(float *)(global_data_ptr + 0x1b48)) + unaff_XMM11_Da;
          uVar23 = (ulonglong)(uint)temp_float2;
          unaff_RBP[-10] = temp_float2;
        }
        else {
          if (scaled_y_coord == 2.8026e-45) {
            _fStack0000000000000050 = 0x3f80000000000000;  // 1.0
            goto LAB_18012b293;
          }
          if (scaled_y_coord == 4.2039e-45) goto LAB_18012b2d2;
        }
        render_context = (uint64_t *)&stack0x00000060;
        FUN_1801295b0(uVar23, unaff_RBP + -10, &stack0x00000050, &stack0x00000070, render_context);
      }
      scaled_y_coord = (float)((int)scaled_y_coord + 1);
    } while ((int)scaled_y_coord < (int)base_y_coord);
  }
  // 更新渲染计数器
  render_counter_ptr = (int *)(*(longlong *)(global_data_ptr + 0x1af8) + 0x218);
  *render_counter_ptr = *render_counter_ptr + -1;
  
  // 检查是否需要更新对象位置
  if ((*(longlong *)(global_data_ptr + 0x1cd8) != 0) &&
     (*(longlong *)(*(longlong *)(global_data_ptr + 0x1cd8) + 0x3a0) == unaff_R14)) {
    visibility_check = *(int *)(global_data_ptr + 0x1cc0);
    base_y_coord = unaff_XMM13_Da;
    scaled_y_coord = unaff_XMM13_Da;
    
    // 根据可见性检查类型处理坐标更新
    if (visibility_check == 3) {
      if (*(char *)(global_data_ptr + 0x135) == '\0') goto LAB_18012b465;
      render_context =
           (uint64_t *)CONCAT44((int)((ulonglong)render_context >> 0x20), unaff_XMM13_Da);
      position_ptr = (float *)FUN_180131aa0(unaff_RBP + -0x14, 1, 0);
      base_y_coord = *position_ptr;
      scaled_y_coord = position_ptr[1];
      visibility_check = *(int *)(global_data_ptr + 0x1cc0);
    }
    if (visibility_check == 4) {
      render_context =
           (uint64_t *)CONCAT44((int)((ulonglong)render_context >> 0x20), unaff_XMM13_Da);
      position_ptr = (float *)FUN_180131aa0(unaff_RBP + 0x18, 2, 0);
      base_y_coord = *position_ptr;
      scaled_y_coord = position_ptr[1];
    }
    
    // 如果坐标发生变化，更新渲染状态
    if ((base_y_coord != unaff_XMM13_Da) || (scaled_y_coord != unaff_XMM13_Da)) {
      *(int8_t *)(global_data_ptr + 0x1cf8) = 0;
      *(int8_t *)(global_data_ptr + 0x1d07) = 1;
      base_y_coord = (float)FUN_180121ed0(0x20);
      unaff_RBP[0x20] = base_y_coord;
      position_ptr = (float *)FUN_180128fd0(unaff_RBP + -0x18);
      fStack0000000000000060 = *position_ptr;
      fStack0000000000000064 = position_ptr[1];
    }
  }
LAB_18012b465:
  
  // 更新边界框坐标
  global_data_ptr = _DAT_180c8a9b0;
  if ((fStack0000000000000060 != unaff_XMM14_Da) &&
     ((fStack0000000000000060 != *(float *)(unaff_R14 + 0x50) ||
      (fStack0000000000000064 != *(float *)(unaff_R14 + 0x54))))) {
    *(float *)(unaff_R14 + 0x50) = fStack0000000000000060;
    *(float *)(unaff_R14 + 0x54) = fStack0000000000000064;
    if (((*(uint *)(unaff_R14 + 0xc) & 0x100) == 0) &&
       (*(float *)(global_data_ptr + 0x2e04) <= unaff_XMM13_Da)) {
      *(int32_t *)(global_data_ptr + 0x2e04) = *(int32_t *)(global_data_ptr + 0x1c);
    }
  }
  
  // 更新渲染区域坐标
  global_data_ptr = _DAT_180c8a9b0;
  if (fStack0000000000000070 != unaff_XMM14_Da) {
    *(float *)(unaff_R14 + 0x40) = (float)(int)fStack0000000000000070;
    *(float *)(unaff_R14 + 0x44) = (float)(int)fStack0000000000000074;
    if (((*(uint *)(unaff_R14 + 0xc) & 0x100) == 0) &&
       (*(float *)(global_data_ptr + 0x2e04) <= unaff_XMM13_Da)) {
      *(int32_t *)(global_data_ptr + 0x2e04) = *(int32_t *)(global_data_ptr + 0x1c);
    }
  }
  
  // 重置索引并更新对象位置
  unaff_RDI = 0;
  *(uint64_t *)(unaff_R14 + 0x48) = *(uint64_t *)(unaff_R14 + 0x50);
  unaff_R14 = object_data_ptr;
LAB_18012b510:
  // 纹理和材质处理
  if (*(char *)(unaff_R14 + 0xae) != '\0') {
    // 更新纹理坐标
    if (*(char *)(*(longlong *)(unaff_R14 + 0x28) + 0x49) == '\0') {
      *(uint64_t *)(*(longlong *)(unaff_R14 + 0x28) + 8) = *(uint64_t *)(unaff_R14 + 0x40);
      unaff_R14 = object_data_ptr;
    }
    if (*(char *)(*(longlong *)(unaff_R14 + 0x28) + 0x4a) == '\0') {
      *(uint64_t *)(*(longlong *)(unaff_R14 + 0x28) + 0x10) = *(uint64_t *)(unaff_R14 + 0x48);
      unaff_R14 = object_data_ptr;
    }
    
    // 获取材质信息
    matrix_ptr = (uint64_t *)func_0x00018011feb0(*(uint64_t *)(unaff_R14 + 0x28));
    bounding_box = matrix_ptr[1];
    *(uint64_t *)(unaff_RBP + 4) = *matrix_ptr;
    *(uint64_t *)(unaff_RBP + 6) = bounding_box;
    unaff_R14 = object_data_ptr;
  }
  
  // 更新对象变换矩阵
  *(uint64_t *)(unaff_R14 + 0x34) = *(uint64_t *)(*(longlong *)(unaff_R14 + 0x28) + 8);
  
  // 计算缩放因子
  if ((*(float *)(object_data_ptr + 0x48) <= unaff_XMM13_Da) ||
     (((uint)unaff_R15D & 0x2000040) != 0)) {
    base_y_coord = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    base_y_coord = *(float *)(object_data_ptr + 0x48) * 0.65;
  }
  *(float *)(object_data_ptr + 0x284) = (float)(int)base_y_coord;
  
  // 初始化渲染目标
  FUN_180291500(*(uint64_t *)(object_data_ptr + 0x2e8));
  
  // 设置渲染标志
  *(uint *)(*(longlong *)(object_data_ptr + 0x2e8) + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)CONCAT71((int7)(unaff_RDI >> 8), *(char *)(unaff_RSI + 0x16c0) != '\0');
  
  // 设置渲染参数
  global_data_ptr = *(longlong *)(object_data_ptr + 0x2e8);
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  FUN_18011d9a0(global_data_ptr + 0x70, unaff_RBP + -0x14);
  FUN_180291a50(global_data_ptr);
  
  // 选择渲染缓冲区
  if ((((uint)unaff_R15D & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    position_ptr = (float *)(*(longlong *)(unaff_RBP + 8) + 0x228);
    screen_coords = (float *)(*(longlong *)(unaff_RBP + 8) + 0x230);
  }
  else {
    position_ptr = unaff_RBP + 4;
    screen_coords = unaff_RBP + 6;
  }
  FUN_180126d10(position_ptr, screen_coords);
  
  // 检查是否需要深度测试
  if (((((uint)unaff_R15D >> 0x1b & 1) == 0) ||
      (global_data_ptr = func_0x00018012ea90(), object_data_ptr != global_data_ptr)) ||
     (0 < *(int *)(object_data_ptr + 0xdc))) {
    depth_test_flag = 0;
  }
  else {
    depth_test_flag = 1;
  }
  // 检查对象可见性和渲染条件
  render_mode = (int32_t)((ulonglong)render_context >> 0x20);
  global_data_ptr = *(longlong *)(unaff_RSI + 0x1ce0);
  if ((global_data_ptr == 0) ||
     ((object_data_ptr != *(longlong *)(global_data_ptr + 0x3a0) &&
      (((lVar20 = *(longlong *)(unaff_RSI + 0x1ce8), lVar20 == 0 || (object_data_ptr != lVar20))
       || (*(longlong *)(lVar20 + 0x28) == *(longlong *)(global_data_ptr + 0x28))))))) {
    is_visible = false;
  }
  else {
    is_visible = true;
  }
  
  // 如果对象可见，执行渲染
  if ((depth_test_flag != 0) || (is_visible)) {
    base_y_coord = *(float *)(unaff_RSI + 0x1dc8);
    scaled_y_coord = *(float *)(_DAT_180c8a9b0 + 0x1628);
    position_ptr = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)depth_test_flag + 0x3a) * 0x10);
    temp_float2 = position_ptr[1];
    temp_float3 = position_ptr[2];
    temp_float1 = position_ptr[3];
    unaff_RBP[-0x20] = *position_ptr;
    unaff_RBP[-0x1f] = temp_float2;
    unaff_RBP[-0x1e] = temp_float3;
    unaff_RBP[-0x1d] = temp_float1;
    unaff_RBP[-0x1d] = temp_float1 * base_y_coord * scaled_y_coord;
    temp_color1 = func_0x000180121e20(unaff_RBP + -0x20);
    render_context = (uint64_t *)CONCAT44(render_mode, unaff_XMM13_Da);
    FUN_180293f50(*(uint64_t *)(object_data_ptr + 0x2e8), unaff_RBP + 4, unaff_RBP + 6, temp_color1,
                  render_context);
    
    // 如果是主要可见对象，执行额外渲染
    if ((is_visible) && (object_data_ptr == *(longlong *)(unaff_RSI + 0x1ce0))) {
      func_0x00018010e720(object_data_ptr, unaff_RBP + -0x18);
      func_0x00018010e610(unaff_RBP + -0x18);
      render_mode = (int32_t)((ulonglong)render_context >> 0x20);
      
      // 检查边界框是否在视锥体内
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        base_y_coord = *(float *)(unaff_RSI + 0x1cf4);
        bounding_box = *(uint64_t *)(object_data_ptr + 0x2e8);
        temp_color1 = *(int32_t *)(unaff_RSI + 0x1634);
        temp_float2 = *(float *)(_DAT_180c8a9b0 + 0x19bc);
        temp_float3 = *(float *)(_DAT_180c8a9b0 + 0x19c0);
        temp_float1 = *(float *)(_DAT_180c8a9b0 + 0x19c4);
        scaled_y_coord = *(float *)(_DAT_180c8a9b0 + 0x1628);
        unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x19b8);
        unaff_RBP[-0x1f] = temp_float2;
        unaff_RBP[-0x1e] = temp_float3;
        unaff_RBP[-0x1d] = temp_float1;
        unaff_RBP[-0x1d] = temp_float1 * base_y_coord * 0.25 * scaled_y_coord;
        temp_color2 = func_0x000180121e20(unaff_RBP + -0x20);
        render_context = (uint64_t *)CONCAT44(render_mode, temp_color1);
        FUN_180293f50(bounding_box, unaff_RBP + -0x18, unaff_RBP + -0x16, temp_color2, render_context);
      }
    }
  }
  uVar6 = in_stack_00000068;
  lVar13 = *(longlong *)(unaff_RSI + 0x1cd8);
  fVar27 = *(float *)(in_stack_00000040 + 0x78);
  fVar26 = *(float *)(in_stack_00000040 + 0x7c);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(unaff_RSI + 0x1c98);
  }
  if (((char)in_stack_00000068 == '\0') &&
     ((lVar13 == 0 ||
      ((*(longlong *)(in_stack_00000040 + 0x3b0) != *(longlong *)(lVar13 + 0x3b0) &&
       ((*(longlong *)(in_stack_00000040 + 0x408) == 0 ||
        (*(longlong *)(in_stack_00000040 + 0x408) != *(longlong *)(lVar13 + 0x408))))))))) {
    bVar19 = 0;
  }
  else {
    bVar19 = 1;
  }
  func_0x000180120c80(in_stack_00000040,unaff_RBP + -2);
  uVar5 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  if (*(char *)(in_stack_00000040 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)unaff_R15D & 0x80);
    if ((float)((uint)unaff_R15D & 0x80) == 0.0) {
      bVar21 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar9 = strcmp(&UNK_180a06400,unaff_RSI + 0x1df8), iVar9 == 0)) &&
           (bVar21 = false, **(longlong **)(unaff_RSI + 0x1de0) == in_stack_00000040)))))) {
        bVar21 = true;
      }
      lVar13 = _DAT_180c8a9b0;
      if (((uint)unaff_R15D & 0x6000000) == 0) {
        lVar20 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar20 = 0xd0;
        }
      }
      else {
        lVar20 = 0xe0;
      }
      pfVar11 = (float *)(lVar20 + 0x1628 + _DAT_180c8a9b0);
      fVar30 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar29 = pfVar11[3];
      unaff_RBP[-0x20] = *pfVar11;
      unaff_RBP[-0x1f] = fVar30;
      unaff_RBP[-0x1e] = fVar28;
      unaff_RBP[-0x1d] = fVar29;
      unaff_RBP[-0x1d] = fVar29 * *(float *)(lVar13 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + -0x20);
      if (*(char *)(in_stack_00000040 + 0xae) == '\0') {
        fVar30 = unaff_XMM15_Da;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar30 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar21) {
          fVar30 = fVar30 * 0.5;
        }
        if (fVar30 != unaff_XMM15_Da) {
          fVar28 = unaff_XMM13_Da;
          if ((unaff_XMM13_Da <= fVar30) && (fVar28 = fVar30, unaff_XMM15_Da <= fVar30)) {
            fVar28 = unaff_XMM15_Da;
          }
          uVar10 = (int)(fVar28 * 255.0 + 0.5) << 0x18 | uVar10 & 0xffffff;
        }
      }
      else {
        uVar10 = uVar10 | 0xff000000;
        if (bVar21) {
          *(float *)(*(longlong *)(in_stack_00000040 + 0x28) + 0x6c) =
               *(float *)(*(longlong *)(in_stack_00000040 + 0x28) + 0x6c) * 0.5;
        }
      }
      fVar30 = *(float *)(in_stack_00000040 + 0x48);
      fVar28 = *(float *)(in_stack_00000040 + 0x40);
      uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      unaff_RBP[0x15] = *(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44);
      unaff_RBP[0x14] = fVar30 + fVar28;
      fVar28 = (float)func_0x00018010e760(in_stack_00000040);
      fVar30 = *(float *)(in_stack_00000040 + 0x44);
      unaff_RBP[0x12] = *(float *)(in_stack_00000040 + 0x40);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar5,fVar27);
      unaff_RBP[0x13] = fVar28 + fVar30;
      FUN_180293f50(uVar22,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar10,in_stack_00000020);
    }
    uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    bVar21 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar13 = _DAT_180c8a9b0;
    if ((((uint)unaff_R15D & 1) == 0) && ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
      pfVar11 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar19 + 0x14) * 0x10);
      fVar30 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar29 = pfVar11[3];
      unaff_RBP[-0x20] = *pfVar11;
      unaff_RBP[-0x1f] = fVar30;
      unaff_RBP[-0x1e] = fVar28;
      unaff_RBP[-0x1d] = fVar29;
      unaff_RBP[-0x1d] = fVar29 * *(float *)(lVar13 + 0x1628);
      func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar6,fVar27);
      FUN_180293f50(*(uint64_t *)(in_stack_00000040 + 0x2e8),unaff_RBP + -2);
    }
    uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if (((uint)unaff_R15D >> 10 & 1) != 0) {
      func_0x00018010e7f0(in_stack_00000040,unaff_RBP + -8);
      uVar22 = func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e690(unaff_RBP + -8,uVar22);
      lVar13 = _DAT_180c8a9b0;
      uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      fVar30 = unaff_XMM13_Da;
      if (((uint)unaff_R15D & 1) != 0) {
        fVar30 = fVar27;
      }
      fVar28 = *(float *)(_DAT_180c8a9b0 + 0x179c);
      fVar29 = *(float *)(_DAT_180c8a9b0 + 0x17a0);
      fVar31 = *(float *)(_DAT_180c8a9b0 + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x1798);
      unaff_RBP[-0x1f] = fVar28;
      unaff_RBP[-0x1e] = fVar29;
      unaff_RBP[-0x1d] = fVar31;
      unaff_RBP[-0x1d] = fVar31 * *(float *)(lVar13 + 0x1628);
      uVar5 = func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar6,fVar30);
      FUN_180293f50(uVar22,unaff_RBP + -8,unaff_RBP + -6,uVar5,in_stack_00000020);
      lVar13 = _DAT_180c8a9b0;
      uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
      fVar30 = *(float *)(unaff_RSI + 0x1668);
      if ((unaff_XMM13_Da < fVar30) &&
         (unaff_RBP[-5] <
          *(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44))) {
        uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
        fVar28 = *(float *)(_DAT_180c8a9b0 + 0x171c);
        fVar29 = *(float *)(_DAT_180c8a9b0 + 0x1720);
        fVar31 = *(float *)(_DAT_180c8a9b0 + 0x1724);
        unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x1718);
        unaff_RBP[-0x1f] = fVar28;
        unaff_RBP[-0x1e] = fVar29;
        unaff_RBP[-0x1d] = fVar31;
        unaff_RBP[-0x1d] = fVar31 * *(float *)(lVar13 + 0x1628);
        uVar5 = func_0x000180121e20(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar6,fVar30);
        FUN_180293d20(uVar22,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar5,in_stack_00000020);
      }
    }
    uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    lVar13 = *(longlong *)(in_stack_00000040 + 0x408);
    if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0xa0) & 0x40) != 0)) {
      fVar30 = *(float *)(lVar13 + 0x38);
      fVar28 = *(float *)(unaff_RSI + 0x19f8);
      fVar29 = *(float *)(lVar13 + 0x3c);
      _fStack0000000000000050 = *(uint64_t *)(lVar13 + 0x38);
      unaff_RBP[-0x20] = fVar30;
      unaff_RBP[-0x1f] = fVar29;
      fVar31 = (float)(int)(fVar28 * 0.7);
      fVar28 = (float)(int)(fVar28 * 0.55);
      unaff_RBP[-0x1e] = fVar30 + fVar28;
      unaff_RBP[-0x1d] = fVar29 + fVar28;
      uVar5 = FUN_180123c00(in_stack_00000040,&UNK_180a064c0,0);
      uVar22 = CONCAT44(uVar6,0x20);
      cVar4 = FUN_18010f170(unaff_RBP + -0x20,uVar5,(longlong)&stack0x00000058 + 1,&stack0x00000058,
                            uVar22);
      uVar6 = (int32_t)((ulonglong)uVar22 >> 0x20);
      if (cVar4 != '\0') {
        pbVar2 = (byte *)(*(longlong *)(in_stack_00000040 + 0x408) + 0xa1);
        *pbVar2 = *pbVar2 | 0x10;
      }
      lVar13 = _DAT_180c8a9b0;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(*(longlong *)(in_stack_00000040 + 0x408) + 0xa0) & 8) == 0 ||
          (cStack0000000000000059 != '\0')))) {
        lVar20 = (ulonglong)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar20 = 0x17;
      }
      pfVar11 = (float *)(_DAT_180c8a9b0 + 0x1628 + (lVar20 + 10) * 0x10);
      fVar30 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar29 = pfVar11[3];
      unaff_RBP[-0x14] = *pfVar11;
      unaff_RBP[-0x13] = fVar30;
      unaff_RBP[-0x12] = fVar28;
      unaff_RBP[-0x11] = fVar29;
      unaff_RBP[-0x11] = fVar29 * *(float *)(lVar13 + 0x1628);
      uVar5 = func_0x000180121e20(unaff_RBP + -0x14);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar6,uVar5);
      uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      unaff_RBP[0xe] = fStack0000000000000050;
      fStack0000000000000070 = fStack0000000000000050 + fVar31;
      fStack0000000000000074 = fStack0000000000000054;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar31;
      FUN_1802940f0(uVar22,&stack0x00000050,&stack0x00000070,unaff_RBP + 0xe,in_stack_00000020);
    }
    if (*(char *)(in_stack_00000040 + 0xac) != '\0') {
      FUN_180110540(0);
    }
    if (*(char *)(in_stack_00000040 + 0xad) != '\0') {
      FUN_180110540(1);
    }
    uVar5 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if (((uint)unaff_R15D & 2) == 0) {
      lVar13 = 0;
      do {
        uVar6 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
        fVar30 = *(float *)(in_stack_00000040 + 0x40);
        fVar28 = *(float *)(in_stack_00000040 + 0x44);
        lVar20 = *(longlong *)(in_stack_00000040 + 0x2e8);
        fVar30 = ((fVar30 + *(float *)(in_stack_00000040 + 0x48)) - fVar30) * unaff_R12[-2] + fVar30
        ;
        fVar28 = ((fVar28 + *(float *)(in_stack_00000040 + 0x4c)) - fVar28) * unaff_R12[-1] + fVar28
        ;
        if (bVar21) {
          unaff_RBP[2] = fVar26;
          unaff_RBP[3] = fVar32;
          fVar29 = fVar26;
        }
        else {
          fStack0000000000000064 = fVar26;
          fStack0000000000000060 = fVar32;
          fVar29 = fVar32;
        }
        pfVar11 = (float *)((longlong)&stack0x00000060 + 4);
        if (bVar21) {
          pfVar11 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar29 * *unaff_R12 + fVar30;
        unaff_RBP[-3] = *pfVar11 * unaff_R12[1] + fVar28;
        FUN_18011d9a0(lVar20 + 0x80,unaff_RBP + -4);
        lVar20 = *(longlong *)(in_stack_00000040 + 0x2e8);
        if (bVar21) {
          unaff_RBP[0x1c] = fVar32;
          unaff_RBP[0x1d] = fVar26;
          fVar29 = fVar32;
        }
        else {
          unaff_RBP[-0x1c] = fVar26;
          unaff_RBP[-0x1b] = fVar32;
          fVar29 = fVar26;
        }
        pfVar11 = unaff_RBP + -0x1b;
        if (bVar21) {
          pfVar11 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar29 * *unaff_R12 + fVar30;
        unaff_RBP[0x19] = *pfVar11 * unaff_R12[1] + fVar28;
        FUN_18011d9a0(lVar20 + 0x80,unaff_RBP + 0x18);
        fVar29 = unaff_R12[1];
        uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar6,unaff_R12[3]);
        unaff_RBP[-0x14] = (fVar26 + fVar27) * *unaff_R12 + fVar30;
        unaff_RBP[-0x13] = (fVar26 + fVar27) * fVar29 + fVar28;
        FUN_180293730(uVar22,unaff_RBP + -0x14);
        lVar20 = *(longlong *)(in_stack_00000040 + 0x2e8);
        FUN_180293190(lVar20,*(uint64_t *)(lVar20 + 0x88),*(int32_t *)(lVar20 + 0x80),
                      unaff_RBP[lVar13 + 0x20],in_stack_00000020);
        uVar5 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
        bVar21 = (bool)(bVar21 ^ 1);
        *(int32_t *)(lVar20 + 0x80) = 0;
        lVar13 = lVar13 + 1;
        unaff_R12 = unaff_R12 + 6;
      } while (lVar13 < *(longlong *)(unaff_RBP + -0xe));
    }
    lVar13 = _DAT_180c8a9b0;
    if ((unaff_XMM13_Da < fVar26) && (unaff_RBP[-10] == 0.0)) {
      lVar20 = *(longlong *)(in_stack_00000040 + 0x2e8);
      fVar30 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      fVar28 = *(float *)(_DAT_180c8a9b0 + 0x1720);
      fVar29 = *(float *)(_DAT_180c8a9b0 + 0x1724);
      unaff_RBP[0x20] = *(float *)(_DAT_180c8a9b0 + 0x1718);
      unaff_RBP[0x21] = fVar30;
      unaff_RBP[0x22] = fVar28;
      unaff_RBP[0x23] = fVar29;
      unaff_RBP[0x23] = fVar29 * *(float *)(lVar13 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + 0x20);
      fVar30 = *(float *)(in_stack_00000040 + 0x44);
      fVar28 = *(float *)(in_stack_00000040 + 0x40) + *(float *)(in_stack_00000040 + 0x48);
      fVar29 = fVar30 + *(float *)(in_stack_00000040 + 0x4c);
      if ((uVar10 & 0xff000000) != 0) {
        bVar19 = *(byte *)(lVar20 + 0x30);
        uVar22 = CONCAT44(uVar5,0xf);
        unaff_RBP[-0x14] = *(float *)(in_stack_00000040 + 0x40) + 0.5;
        unaff_RBP[-0x13] = fVar30 + 0.5;
        if ((bVar19 & 1) == 0) {
          fVar28 = fVar28 - 0.49;
          fVar29 = fVar29 - 0.49;
        }
        else {
          fVar28 = fVar28 - 0.5;
          fVar29 = fVar29 - 0.5;
        }
        unaff_RBP[-0xe] = fVar28;
        unaff_RBP[-0xd] = fVar29;
        FUN_1802939e0(lVar20,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar27,uVar22);
        uVar5 = (int32_t)((ulonglong)uVar22 >> 0x20);
        FUN_18010e4e0(lVar20,uVar10,1,fVar26);
      }
    }
    if (unaff_RBP[0xc] != -NAN) {
      uVar22 = CONCAT44(uVar5,unaff_XMM13_Da);
      FUN_1801296e0(unaff_RBP + -0x14,in_stack_00000040,unaff_RBP[0xc],fVar32,uVar22);
      lVar13 = _DAT_180c8a9b0;
      uVar5 = (int32_t)((ulonglong)uVar22 >> 0x20);
      uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      fVar32 = *(float *)(_DAT_180c8a9b0 + 0x189c);
      fVar27 = *(float *)(_DAT_180c8a9b0 + 0x18a0);
      fVar30 = *(float *)(_DAT_180c8a9b0 + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(_DAT_180c8a9b0 + 0x1898);
      unaff_RBP[-0xd] = fVar32;
      unaff_RBP[-0xc] = fVar27;
      unaff_RBP[-0xb] = fVar30;
      unaff_RBP[-0xb] = fVar30 * *(float *)(lVar13 + 0x1628);
      uVar6 = func_0x000180121e20(unaff_RBP + -0xe);
      if (fVar26 <= unaff_XMM15_Da) {
        fVar26 = unaff_XMM15_Da;
      }
      uVar17 = CONCAT44(uVar5,fVar26);
      FUN_180293d20(uVar22,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar6,uVar17);
      uVar5 = (int32_t)((ulonglong)uVar17 >> 0x20);
    }
    lVar13 = _DAT_180c8a9b0;
    fVar32 = *(float *)(unaff_RSI + 0x1668);
    if (((unaff_XMM13_Da < fVar32) && (((uint)unaff_R15D & 1) == 0)) &&
       ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
      uVar22 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      fVar27 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      fVar26 = *(float *)(_DAT_180c8a9b0 + 0x1720);
      fVar30 = *(float *)(_DAT_180c8a9b0 + 0x1724);
      unaff_RBP[0x18] = *(float *)(_DAT_180c8a9b0 + 0x1718);
      unaff_RBP[0x19] = fVar27;
      unaff_RBP[0x1a] = fVar26;
      unaff_RBP[0x1b] = fVar30;
      unaff_RBP[0x1b] = fVar30 * *(float *)(lVar13 + 0x1628);
      uVar6 = func_0x000180121e20(unaff_RBP + 0x18);
      fVar27 = *(float *)(unaff_RSI + 0x1638);
      uVar17 = CONCAT44(uVar5,fVar32);
      unaff_RBP[-0xe] = *unaff_RBP - fVar27;
      unaff_RBP[-0xd] = unaff_RBP[1] - unaff_XMM15_Da;
      unaff_RBP[-0x13] = unaff_RBP[1] - unaff_XMM15_Da;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar27;
      FUN_180293d20(uVar22,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar6,uVar17);
      uVar5 = (int32_t)((ulonglong)uVar17 >> 0x20);
    }
    unaff_RDI = 0;
    uVar6 = in_stack_00000068;
  }
  else {
    uVar7 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)(in_stack_00000040 + 0x7c);
    lVar13 = _DAT_180c8a9b0;
    if ((bVar19 == 0) || (lVar20 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar20 = 0x160;
    }
    pfVar11 = (float *)(lVar20 + 0x1628 + _DAT_180c8a9b0);
    fVar32 = pfVar11[1];
    fVar26 = pfVar11[2];
    fVar30 = pfVar11[3];
    unaff_RBP[0x20] = *pfVar11;
    unaff_RBP[0x21] = fVar32;
    unaff_RBP[0x22] = fVar26;
    unaff_RBP[0x23] = fVar30;
    unaff_RBP[0x23] = fVar30 * *(float *)(lVar13 + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + 0x20);
    uVar22 = CONCAT44(uVar5,fVar27);
    FUN_180122960(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar8,1,uVar22);
    uVar5 = (int32_t)((ulonglong)uVar22 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar7;
  }
  pfVar11 = (float *)(unaff_RSI + 0x1668);
  *(uint64_t *)(in_stack_00000040 + 0x58) = *(uint64_t *)(in_stack_00000040 + 0x50);
  *(float *)(in_stack_00000040 + 0x270) =
       (*(float *)(in_stack_00000040 + 0x40) - *(float *)(in_stack_00000040 + 0x8c)) +
       *(float *)(in_stack_00000040 + 0x70);
  fVar30 = (float)func_0x00018010e760(in_stack_00000040);
  fVar32 = *(float *)(in_stack_00000040 + 0x44);
  fVar27 = *(float *)(in_stack_00000040 + 0x90);
  fVar26 = *(float *)(in_stack_00000040 + 0x74);
  fVar28 = (float)func_0x00018010e7a0();
  *(float *)(in_stack_00000040 + 0x274) = fVar28 + fVar30 + (fVar32 - fVar27) + fVar26;
  fVar32 = *(float *)(in_stack_00000040 + 0x68);
  if (fVar32 == unaff_XMM13_Da) {
    fVar32 = *(float *)(in_stack_00000040 + 0x48) - *(float *)(in_stack_00000040 + 0xa4);
  }
  *(float *)(in_stack_00000040 + 0x278) =
       ((*(float *)(in_stack_00000040 + 0x40) - *(float *)(in_stack_00000040 + 0x8c)) -
       *(float *)(in_stack_00000040 + 0x70)) + fVar32;
  fVar32 = *(float *)(in_stack_00000040 + 0x6c);
  if (fVar32 == unaff_XMM13_Da) {
    fVar32 = *(float *)(in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0xa8);
  }
  *(float *)(in_stack_00000040 + 0x27c) =
       ((*(float *)(in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x90)) -
       *(float *)(in_stack_00000040 + 0x74)) + fVar32;
  *(float *)(in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0x70) - *(float *)(in_stack_00000040 + 0x8c);
  uVar8 = (int32_t)unaff_RDI;
  *(int32_t *)(in_stack_00000040 + 0x208) = uVar8;
  *(int32_t *)(in_stack_00000040 + 0x20c) = uVar8;
  func_0x00018010e7a0(in_stack_00000040);
  func_0x00018010e760(in_stack_00000040);
  uVar22 = func_0x00018004ba20(unaff_RBP + -0x18,
                               *(float *)(in_stack_00000040 + 0x20c) +
                               *(float *)(in_stack_00000040 + 0x204));
  puVar14 = (int32_t *)func_0x00018011fbf0(unaff_RBP + -0xe,in_stack_00000040 + 0x40,uVar22);
  uVar7 = puVar14[1];
  *(int32_t *)(in_stack_00000040 + 0x110) = *puVar14;
  *(int32_t *)(in_stack_00000040 + 0x114) = uVar7;
  *(uint64_t *)(in_stack_00000040 + 0x100) = *(uint64_t *)(in_stack_00000040 + 0x110);
  *(uint64_t *)(in_stack_00000040 + 0x108) = *(uint64_t *)(in_stack_00000040 + 0x110);
  *(uint64_t *)(in_stack_00000040 + 0x118) = *(uint64_t *)(in_stack_00000040 + 0x110);
  puVar14 = (int32_t *)func_0x00018004ba20(unaff_RBP + -0x18);
  uVar7 = puVar14[1];
  *(int32_t *)(in_stack_00000040 + 300) = *puVar14;
  *(int32_t *)(in_stack_00000040 + 0x130) = uVar7;
  *(uint64_t *)(in_stack_00000040 + 0x120) = *(uint64_t *)(in_stack_00000040 + 300);
  *(int32_t *)(in_stack_00000040 + 0x134) = uVar8;
  *(int32_t *)(in_stack_00000040 + 0x128) = uVar8;
  *(int8_t *)(in_stack_00000040 + 0x17c) = 0;
  fVar32 = (float)func_0x0001801293c0(in_stack_00000040);
  *(bool *)(in_stack_00000040 + 0x17d) = unaff_XMM13_Da < fVar32;
  *(int32_t *)(in_stack_00000040 + 0x174) = *(int32_t *)(in_stack_00000040 + 0x178);
  *(int32_t *)(in_stack_00000040 + 0x178) = uVar8;
  *(int8_t *)(in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x138) = *(float *)(in_stack_00000040 + 0x104) - 9999.0;
  FUN_18013e200(in_stack_00000040 + 0x188,0);
  lVar13 = *(longlong *)(unaff_RBP + 8);
  *(int32_t *)(in_stack_00000040 + 0x1a0) = 1;
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(int32_t *)(lVar13 + 0x1a0);
  }
  *(int32_t *)(in_stack_00000040 + 0x1a4) = uVar7;
  uVar7 = uVar8;
  if (lVar13 != 0) {
    uVar7 = *(int32_t *)(lVar13 + 0x1a8);
  }
  *(int32_t *)(in_stack_00000040 + 0x1a8) = uVar7;
  *(int32_t *)(in_stack_00000040 + 0x1ac) = *(int32_t *)(in_stack_00000040 + 0x284);
  *(int32_t *)(in_stack_00000040 + 0x1b0) = 0xbf800000;
  FUN_18013e340(in_stack_00000040 + 0x1b8,0);
  FUN_18013e2f0(in_stack_00000040 + 0x1c8,0);
  FUN_18013e2f0(in_stack_00000040 + 0x1d8,0);
  *(ulonglong *)(in_stack_00000040 + 0x210) = unaff_RDI;
  *(int32_t *)(in_stack_00000040 + 0x13c) = uVar8;
  *(int32_t *)(in_stack_00000040 + 0x140) = uVar8;
  *(longlong *)(in_stack_00000040 + 0x198) = in_stack_00000040 + 0x2b8;
  FUN_18013db40(in_stack_00000040 + 0x1e8,0);
  func_0x00018011a9d0(in_stack_00000040 + 0x288,3);
  if ((unaff_RBP[0x16] != 0.0) && (*(int *)(in_stack_00000040 + 0x1a8) != *(int *)(lVar13 + 0x1a8)))
  {
    *(int *)(in_stack_00000040 + 0x1a8) = *(int *)(lVar13 + 0x1a8);
    FUN_18011d940(in_stack_00000040 + 0x1b8,in_stack_00000040 + 0x1a8);
  }
  if (0 < *(int *)(in_stack_00000040 + 0xc4)) {
    *(int *)(in_stack_00000040 + 0xc4) = *(int *)(in_stack_00000040 + 0xc4) + -1;
  }
  if (0 < *(int *)(in_stack_00000040 + 200)) {
    *(int *)(in_stack_00000040 + 200) = *(int *)(in_stack_00000040 + 200) + -1;
  }
  if ((char)uVar6 != '\0') {
    FUN_18012d2e0(in_stack_00000040);
    func_0x000180131810(in_stack_00000040,0);
  }
  puVar3 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar3 != (int8_t *)0x0) &&
       (lVar20 = *(longlong *)(in_stack_00000040 + 0x28), *(char *)(lVar20 + 0x48) != '\0')) &&
      (lVar15 = func_0x00018012fae0(), lVar20 != lVar15)) &&
     (((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)(in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar20 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar3 = 0;
  }
  if ((((uint)unaff_R15D & 1) == 0) && ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
    uVar10 = *(uint *)(in_stack_00000040 + 0x1a8);
    *(uint *)(in_stack_00000040 + 0x1a8) = uVar10 | 0x10;
    *(int32_t *)(in_stack_00000040 + 0x16c) = 1;
    *(int32_t *)(in_stack_00000040 + 0x170) = 2;
    if (((uint)unaff_R15D & 0x20) == 0) {
      uVar6 = FUN_180123c00(in_stack_00000040,&UNK_180a064b0,0);
      cVar4 = FUN_180110000(uVar6,in_stack_00000040 + 0x40,0);
      if (cVar4 != '\0') {
        *(int8_t *)(in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(longlong *)(unaff_RBP + 10) != 0) {
      fVar32 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar22 = func_0x00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(in_stack_00000040 + 0x48) +
                                    *(float *)(in_stack_00000040 + 0x40)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar32,
                                   *(float *)(in_stack_00000040 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar32);
      uVar6 = FUN_180123c00(in_stack_00000040,&UNK_180a064d0,0);
      cVar4 = FUN_18010fd40(uVar6,uVar22);
      if (cVar4 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)(in_stack_00000040 + 0x16c) = 0;
    *(int32_t *)(in_stack_00000040 + 0x170) = 1;
    *(uint *)(in_stack_00000040 + 0x1a8) = uVar10;
    fVar32 = unaff_XMM13_Da;
    if (((uint)unaff_R15D & 0x100000) != 0) {
      uVar22 = CONCAT44(uVar5,0xbf800000);
      pfVar16 = (float *)FUN_180127c60(unaff_RBP + -0x18,&system_state_df28,0,0,uVar22);
      uVar5 = (int32_t)((ulonglong)uVar22 >> 0x20);
      fVar32 = *pfVar16;
    }
    uVar22 = func_0x00018004ba20(unaff_RBP + -0x18);
    uVar17 = FUN_180127c60(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar5,0xbf800000));
    func_0x00018011fbf0(&stack0x00000050,uVar17,uVar22);
    fVar28 = unaff_RBP[-2];
    fVar27 = unaff_RBP[-1];
    fVar30 = *unaff_RBP;
    fVar26 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar28;
    unaff_RBP[-0x1b] = fVar27;
    unaff_RBP[-0x1a] = fVar30;
    unaff_RBP[-0x19] = fVar26;
    if (((uint)unaff_R15D & 0x20) == 0) {
      fVar29 = *(float *)(unaff_RSI + 0x165c);
      fVar31 = fVar29 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar29 = *(float *)(unaff_RSI + 0x165c);
      fVar31 = fVar29;
    }
    lVar20 = *(longlong *)(unaff_RBP + 10);
    if (lVar20 != 0) {
      fVar29 = fVar29 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar29 = (float)func_0x00018013e9f0();
      fVar26 = unaff_RBP[-0x19];
      fVar30 = unaff_RBP[-0x1a];
      fVar27 = unaff_RBP[-0x1b];
      fVar28 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar27;
    unaff_RBP[-5] = fVar26;
    unaff_RBP[-0x1c] = fVar28 + fVar31;
    unaff_RBP[-0x1a] = fVar30 - fVar29;
    unaff_RBP[-8] = fVar28 + fVar31;
    unaff_RBP[-6] = fVar30 - fVar29;
    if (lVar20 == 0) {
      fVar27 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar27 = (float)func_0x00018010e5a0(unaff_RBP + -2);
      fVar27 = fVar27 - 3.0;
    }
    unaff_RBP[-6] =
         (*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) - fVar27;
    FUN_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &stack0x00000050);
    if (((uint)unaff_R15D & 0x100000) == 0) {
      unaff_RDI = 0;
    }
    else {
      uVar22 = func_0x00018004ba20(unaff_RBP + -0x14,2.0 - fVar32);
      func_0x00018010e590(unaff_RBP + -0x1c);
      func_0x00018013e900();
      uVar17 = func_0x00018004ba20(unaff_RBP + 0x18);
      func_0x00018011fbf0(unaff_RBP + -0x18,uVar17,uVar22);
      func_0x00018004ba20(unaff_RBP + -0xe);
      func_0x00018004ba20(unaff_RBP + -0x14);
      uVar22 = func_0x00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar17 = func_0x00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      unaff_RDI = 0;
      FUN_180122890(uVar17,uVar22,&system_state_df28,0,0);
    }
  }
  *(short *)(in_stack_00000040 + 0x26a) = (short)unaff_RDI;
  *(short *)(in_stack_00000040 + 0x268) = (short)unaff_RDI;
  puVar12 = (uint64_t *)func_0x00018010e720(in_stack_00000040,unaff_RBP + 0x20);
  uVar22 = puVar12[1];
  *(uint64_t *)(in_stack_00000040 + 0x238) = *puVar12;
  *(uint64_t *)(in_stack_00000040 + 0x240) = uVar22;
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) {
    fVar32 = (float)func_0x00018010e760();
    *(float *)(in_stack_00000040 + 0x23c) = fVar32 + *(float *)(in_stack_00000040 + 0x23c);
  }
  func_0x00018010e690(in_stack_00000040 + 0x238,in_stack_00000040 + 0x228);
  *(float *)(in_stack_00000040 + 0x248) = unaff_RBP[-2] + *(float *)(in_stack_00000040 + 0x7c);
  if (((uint)unaff_R15D & 0x401) == 1) {
    pfVar11 = (float *)(in_stack_00000040 + 0x7c);
  }
  fVar32 = *pfVar11;
  fVar27 = (float)func_0x00018010e7a0();
  *(float *)(in_stack_00000040 + 0x24c) = fVar27 + unaff_RBP[1] + fVar32;
  *(float *)(in_stack_00000040 + 0x250) =
       ((*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) -
       *(float *)(in_stack_00000040 + 0xa4)) - *(float *)(in_stack_00000040 + 0x7c);
  *(float *)(in_stack_00000040 + 0x254) =
       ((*(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44)) -
       *(float *)(in_stack_00000040 + 0xa8)) - *(float *)(in_stack_00000040 + 0x7c);
  fVar32 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 600) =
       (float)(int)(fVar32 + *(float *)(in_stack_00000040 + 0x248) + 0.5);
  *(float *)(in_stack_00000040 + 0x25c) = (float)(int)(*(float *)(in_stack_00000040 + 0x24c) + 0.5);
  fVar32 = *(float *)(in_stack_00000040 + 0x250);
  fVar27 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x260) = (float)(int)((fVar32 + 0.5) - fVar27);
  *(float *)(in_stack_00000040 + 0x264) = (float)(int)(*(float *)(in_stack_00000040 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(in_stack_00000040 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(*(longlong *)(in_stack_00000040 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)unaff_R15D >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(unaff_RSI + 0x1b78) == 0 ||
         (*(longlong *)(*(longlong *)(unaff_RSI + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == *(longlong *)(in_stack_00000040 + 0x3a0) &&
        ((*(uint *)(in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 0x84);
    cVar4 = FUN_180128040(unaff_RBP + -2);
    fVar32 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x148) = (uint)(cVar4 != '\0');
    uVar22 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)(in_stack_00000040 + 0x154) = uVar22;
  }
  else {
    fVar32 = unaff_RBP[-0x10];
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 8);
    *(int32_t *)(in_stack_00000040 + 0x148) = *(int32_t *)(in_stack_00000040 + 0x41c);
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(in_stack_00000040 + 0x420);
    *(uint64_t *)(in_stack_00000040 + 0x154) = *(uint64_t *)(in_stack_00000040 + 0x428);
  }
  fVar27 = in_stack_00000078;
  if (((uint)unaff_R15D >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 600,in_stack_00000040 + 0x260,1);
  }
  if (fVar27 != fVar32) {
    *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if (((uint)unaff_R15D >> 0x18 & 1) != 0) {
    if ((((((uint)unaff_R15D & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((lVar13 != 0) && ((*(char *)(lVar13 + 0xb2) != '\0' || (*(char *)(lVar13 + 0xb6) != '\0'))))
    {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar4;
  if (((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar4 == '\0')) ||
      ((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))))) ||
     (0 < *(int *)(in_stack_00000040 + 0xdc))) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar18;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x24) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





