#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part085.c - 核心引擎坐标变换与位置更新模块

/**
 * 更新实体位置并进行边界检查
 * @param blend_factor - 混合因子 (0.0-1.0)
 * @param context_ptr - 上下文指针
 */
void update_entity_position_with_bounds_check(float blend_factor, void *context_ptr)
{
    void *engine_context;
    float *offset_vector;
    float original_x, original_y;
    float new_x, new_y;
    float delta_x, delta_y;
    float temp_x, temp_y;
    float bounds_min_x, bounds_min_y;
    float bounds_max_x, bounds_max_y;
    float scale_x, scale_y;
    float offset_magnitude;
    float adjusted_x, adjusted_y;
    char *text_buffer;
    float blend_progress;
    uint32_t flags;
    
    engine_context = get_engine_context();
    
    // 设置上下文状态标志
    set_context_status_flag(engine_context, 0xb1, 1);
    
    // 获取原始位置
    get_entity_position(engine_context, &original_x, &original_y);
    
    // 检查是否启用位置更新
    if (is_position_update_enabled(engine_context)) {
        // 计算偏移向量
        offset_vector = calculate_offset_vector(engine_context, context_ptr);
        
        // 计算新位置
        new_x = original_x + offset_vector[0];
        new_y = original_y + offset_vector[1];
        
        // 计算位置变化量
        delta_x = new_x - original_x;
        delta_y = new_y - original_y;
        
        // 更新位置变化量
        update_position_delta(&delta_x, &delta_y);
        
        // 保存位置信息到上下文
        save_position_context(engine_context, original_x, original_y, new_x, new_y);
        
        // 获取边界信息
        get_entity_bounds(engine_context, &bounds_min_x, &bounds_min_y, &bounds_max_x, &bounds_max_y);
        
        // 边界检查和碰撞检测
        if (is_within_bounds(new_x, new_y, bounds_min_x, bounds_min_y, bounds_max_x, bounds_max_y) ||
            is_force_update_enabled(engine_context)) {
            
            // 执行碰撞检测
            if (perform_collision_detection(&original_x, &new_x, 1)) {
                // 设置碰撞标志
                flags = get_entity_flags(engine_context);
                set_entity_flags(engine_context, flags | 1);
            }
            
            // 标准化混合因子
            if (blend_factor < 0.0f) {
                blend_factor = 0.0f;
            } else if (blend_factor > 1.0f) {
                blend_factor = 1.0f;
            }
            
            // 获取变换参数
            get_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
            
            // 应用变换
            apply_transformation(original_x, original_y, new_x, new_y, scale_x, scale_y);
            
            // 调整偏移量
            offset_magnitude = get_offset_magnitude(engine_context);
            adjusted_x = original_x - offset_magnitude;
            adjusted_y = new_y + offset_magnitude;
            
            // 获取第二组变换参数
            get_secondary_transform_parameters(engine_context, &temp_x, &temp_y, &scale_x, &scale_y);
            
            // 应用混合变换
            if (blend_factor > 0.0f) {
                apply_blended_transform(engine_context, &adjusted_x, &adjusted_y, blend_factor);
            }
            
            // 计算混合进度
            blend_progress = blend_factor * 100.0f + 0.01f;
            
            // 获取动画参数
            get_animation_parameters(engine_context, &temp_x, &temp_y, &scale_x);
            
            // 计算插值位置
            calculate_interpolated_position(&delta_x, &delta_y, scale_x, 0x7f7fffff);
            
            // 计算实际移动距离
            float actual_distance = delta_x;
            if (delta_x > 0.0f) {
                actual_distance = delta_x - scale_x / offset_vector[0];
            }
            
            // 计算步进距离
            float step_distance = (float)((int)(actual_distance + 0.95f));
            
            // 应用位置插值
            if (step_distance > 0.0f) {
                float interpolated_x = (new_x - original_x) * blend_factor + original_x + get_position_offset(engine_context);
                
                // 设置插值参数
                float blend_params[2] = {0.5f, 0.0f};
                
                // 执行位置插值
                if (original_x <= interpolated_x && interpolated_x <= (new_x - step_distance)) {
                    interpolated_x = interpolated_x; // 在有效范围内
                }
                
                // 处理文本缓冲区
                text_buffer = get_text_buffer();
                if (text_buffer != NULL) {
                    // 解析文本指令
                    parse_text_commands(text_buffer);
                }
                
                // 应用位置更新
                if (text_buffer != NULL) {
                    apply_position_update(engine_context, &interpolated_x, &new_y, text_buffer);
                }
            }
        }
    }
    
    // 清理并返回
    cleanup_context(engine_context);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180111c84(void)
void FUN_180111c84(void)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong unaff_RBX;
  char *pcVar5;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 *in_R9;
  longlong lVar6;
  longlong in_R11;
  undefined8 unaff_R14;
  undefined4 uVar7;
  float fVar8;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar9;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  float fVar10;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM11_Da;
  float fVar11;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  float fVar12;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined8 in_stack_00000020;
  undefined8 uVar13;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  
  uVar3 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM9_Dd;
  fVar10 = *(float *)(unaff_RDI + 0x100);
  *(undefined4 *)(in_R11 + -0x78) = unaff_XMM11_Da;
  *(undefined4 *)(in_R11 + -0x74) = unaff_XMM11_Db;
  *(undefined4 *)(in_R11 + -0x70) = unaff_XMM11_Dc;
  *(undefined4 *)(in_R11 + -0x6c) = unaff_XMM11_Dd;
  fVar11 = *(float *)(unaff_RDI + 0x104);
  *(undefined4 *)(in_R11 + -0x88) = unaff_XMM12_Da;
  *(undefined4 *)(in_R11 + -0x84) = unaff_XMM12_Db;
  *(undefined4 *)(in_R11 + -0x80) = unaff_XMM12_Dc;
  *(undefined4 *)(in_R11 + -0x7c) = unaff_XMM12_Dd;
  uVar7 = func_0x00018012d6a0();
  pfVar4 = (float *)FUN_180124550(&stack0x00000058,*in_R9,uVar7,
                                  *(float *)(unaff_RBX + 0x1660) + *(float *)(unaff_RBX + 0x1660) +
                                  *(float *)(unaff_RBX + 0x19f8));
  fVar9 = fVar10 + *pfVar4;
  fVar12 = fVar11 + pfVar4[1];
  in_stack_00000040 = fVar9 - fVar10;
  fStack0000000000000044 = fVar12 - fVar11;
  func_0x000180124080(&stack0x00000040);
  lVar6 = *(longlong *)(unaff_RBX + 0x1af8);
  *(undefined8 *)(lVar6 + 0x144) = 0;
  *(float *)(lVar6 + 0x14c) = fVar10;
  *(float *)(lVar6 + 0x150) = fVar11;
  *(float *)(lVar6 + 0x154) = fVar9;
  *(float *)(lVar6 + 0x158) = fVar12;
  lVar1 = *(longlong *)(unaff_RBX + 0x1af8);
  in_stack_00000048 = fVar10;
  fStack000000000000004c = fVar11;
  in_stack_00000050 = fVar9;
  fStack0000000000000054 = fVar12;
  if (((((*(float *)(lVar1 + 0x22c) <= fVar12 && fVar12 != *(float *)(lVar1 + 0x22c)) &&
        (fVar11 < *(float *)(lVar1 + 0x234))) &&
       (*(float *)(lVar1 + 0x228) <= fVar9 && fVar9 != *(float *)(lVar1 + 0x228))) &&
      (fVar10 < *(float *)(lVar1 + 0x230))) || (*(char *)(unaff_RBX + 0x2e38) != '\0')) {
    in_stack_000000c0 = unaff_XMM10_Da;
    in_stack_000000c8 = unaff_XMM10_Dc;
    cVar2 = FUN_180128040(&stack0x00000048,&stack0x00000050,1);
    if (cVar2 != '\0') {
      *(uint *)(lVar6 + 0x148) = *(uint *)(lVar6 + 0x148) | 1;
    }
    if (0.0 <= unaff_XMM8_Da) {
      if (1.0 <= unaff_XMM8_Da) {
        unaff_XMM8_Da = 1.0;
      }
    }
    else {
      unaff_XMM8_Da = 0.0;
    }
    fStack0000000000000058 = *(float *)(unaff_RBX + 0x1738);
    fStack000000000000005c = *(float *)(unaff_RBX + 0x173c);
    uStack0000000000000060 = *(undefined4 *)(unaff_RBX + 0x1740);
    fStack0000000000000064 = *(float *)(unaff_RBX + 0x1744) * *(float *)(unaff_RBX + 0x1628);
    uVar7 = func_0x000180121e20(&stack0x00000058);
    uVar13 = CONCAT44(uVar3,*(undefined4 *)(unaff_RBX + 0x1664));
    FUN_180122960(CONCAT44(fStack000000000000004c,in_stack_00000048),
                  CONCAT44(fStack0000000000000054,in_stack_00000050),uVar7,1,uVar13);
    uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
    fStack0000000000000054 = -*(float *)(unaff_RBX + 0x1668);
    fVar10 = fVar10 - fStack0000000000000054;
    fVar9 = fVar9 + fStack0000000000000054;
    fVar11 = fVar11 - fStack0000000000000054;
    fStack0000000000000054 = fVar12 + fStack0000000000000054;
    fStack0000000000000058 = *(float *)(_DAT_180c8a9b0 + 0x1968);
    fStack000000000000005c = *(float *)(_DAT_180c8a9b0 + 0x196c);
    uStack0000000000000060 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1970);
    fStack0000000000000064 =
         *(float *)(_DAT_180c8a9b0 + 0x1974) * *(float *)(_DAT_180c8a9b0 + 0x1628);
    in_stack_00000048 = fVar10;
    fStack000000000000004c = fVar11;
    in_stack_00000050 = fVar9;
    if (unaff_XMM8_Da != 0.0) {
      uVar3 = func_0x000180121e20(&stack0x00000058);
      uVar13 = CONCAT44(uVar7,*(undefined4 *)(unaff_RBX + 0x1664));
      FUN_180298260(*(undefined8 *)(unaff_RDI + 0x2e8),&stack0x00000048,uVar3,unaff_XMM8_Da,uVar13);
      uVar7 = (undefined4)((ulonglong)uVar13 >> 0x20);
    }
    FUN_180121200(&stack0x00000070,0x20,&UNK_180a06340,(double)(unaff_XMM8_Da * 100.0 + 0.01));
    lVar6 = _DAT_180c8a9b0;
    pfVar4 = *(float **)(_DAT_180c8a9b0 + 0x19f0);
    fVar12 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
    FUN_180297340(pfVar4,&stack0x00000040,fVar12,0x7f7fffff,CONCAT44(uVar7,0xbf800000));
    fVar8 = in_stack_00000040;
    if (0.0 < in_stack_00000040) {
      fVar8 = in_stack_00000040 - fVar12 / *pfVar4;
    }
    fStack000000000000005c = fStack0000000000000044;
    fStack0000000000000058 = (float)(int)(fVar8 + 0.95);
    if (0.0 < fStack0000000000000058) {
      fVar12 = (fVar9 - fVar10) * unaff_XMM8_Da + fVar10 + *(float *)(unaff_RBX + 0x166c);
      uStack000000000000006c = 0x3f000000;
      uStack0000000000000068 = 0;
      in_stack_00000040 = fVar10;
      if ((fVar10 <= fVar12) &&
         (in_stack_00000040 = (fVar9 - fStack0000000000000058) - *(float *)(unaff_RBX + 0x1674),
         fVar12 <= in_stack_00000040)) {
        in_stack_00000040 = fVar12;
      }
      pcVar5 = &stack0x00000070;
      if (&stack0x00000000 != (undefined1 *)0xffffffffffffff8f) {
        do {
          if ((*pcVar5 == '\0') || ((*pcVar5 == '#' && (pcVar5[1] == '#')))) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 != (char *)0xffffffffffffffff);
      }
      fStack0000000000000044 = fVar11;
      if (((int)pcVar5 != (int)&stack0x00000070) &&
         (FUN_1801224c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x1af8) + 0x2e8),&stack0x00000040,
                        &stack0x00000050,&stack0x00000070,pcVar5), *(char *)(lVar6 + 0x2e38) != '\0'
         )) {
        FUN_18013c800(&stack0x00000040,&stack0x00000070,pcVar5);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x70) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180111d99(void)
void FUN_180111d99(void)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong unaff_RBX;
  char *pcVar5;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R10;
  undefined4 unaff_R14D;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar9;
  float unaff_XMM11_Da;
  float fVar10;
  float unaff_XMM12_Da;
  undefined8 in_stack_00000020;
  undefined4 uVar12;
  undefined8 uVar11;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  undefined4 in_stack_00000060;
  float fStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  uVar12 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  cVar3 = FUN_180128040(&stack0x00000048,&stack0x00000050,1);
  if (cVar3 != '\0') {
    *(uint *)(in_R10 + 0x148) = *(uint *)(in_R10 + 0x148) | 1;
  }
  if (0.0 <= unaff_XMM8_Da) {
    if (1.0 <= unaff_XMM8_Da) {
      unaff_XMM8_Da = 1.0;
    }
  }
  else {
    unaff_XMM8_Da = 0.0;
  }
  in_stack_00000058 = *(float *)(unaff_RBX + 0x1738);
  fStack000000000000005c = *(float *)(unaff_RBX + 0x173c);
  in_stack_00000060 = *(undefined4 *)(unaff_RBX + 0x1740);
  fStack0000000000000064 = *(float *)(unaff_RBX + 0x1744) * *(float *)(unaff_RBX + 0x1628);
  uVar4 = func_0x000180121e20(&stack0x00000058);
  uVar11 = CONCAT44(uVar12,*(undefined4 *)(unaff_RBX + 0x1664));
  FUN_180122960(CONCAT44(fStack000000000000004c,fStack0000000000000048),
                CONCAT44(fStack0000000000000054,fStack0000000000000050),uVar4,1,uVar11);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  fStack0000000000000054 = -*(float *)(unaff_RBX + 0x1668);
  fVar9 = unaff_XMM9_Da - fStack0000000000000054;
  fVar8 = unaff_XMM7_Da + fStack0000000000000054;
  fVar10 = unaff_XMM11_Da - fStack0000000000000054;
  fStack0000000000000054 = unaff_XMM12_Da + fStack0000000000000054;
  in_stack_00000058 = *(float *)(_DAT_180c8a9b0 + 0x1968);
  fStack000000000000005c = *(float *)(_DAT_180c8a9b0 + 0x196c);
  in_stack_00000060 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1970);
  fStack0000000000000064 = *(float *)(_DAT_180c8a9b0 + 0x1974) * *(float *)(_DAT_180c8a9b0 + 0x1628)
  ;
  fStack0000000000000048 = fVar9;
  fStack000000000000004c = fVar10;
  fStack0000000000000050 = fVar8;
  if (unaff_XMM8_Da != 0.0) {
    uVar4 = func_0x000180121e20(&stack0x00000058);
    uVar11 = CONCAT44(uVar12,*(undefined4 *)(unaff_RBX + 0x1664));
    FUN_180298260(*(undefined8 *)(unaff_RDI + 0x2e8),&stack0x00000048,uVar4,unaff_XMM8_Da,uVar11);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  FUN_180121200(&stack0x00000070,0x20,&UNK_180a06340,(double)(unaff_XMM8_Da * 100.0 + 0.01));
  lVar2 = _DAT_180c8a9b0;
  pfVar1 = *(float **)(_DAT_180c8a9b0 + 0x19f0);
  fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
  FUN_180297340(pfVar1,&stack0x00000040,fVar7,0x7f7fffff,CONCAT44(uVar12,0xbf800000));
  fVar6 = fStack0000000000000040;
  if (0.0 < fStack0000000000000040) {
    fVar6 = fStack0000000000000040 - fVar7 / *pfVar1;
  }
  fStack000000000000005c = fStack0000000000000044;
  in_stack_00000058 = (float)(int)(fVar6 + 0.95);
  if (0.0 < in_stack_00000058) {
    fVar7 = (fVar8 - fVar9) * unaff_XMM8_Da + fVar9 + *(float *)(unaff_RBX + 0x166c);
    uStack000000000000006c = 0x3f000000;
    fStack0000000000000040 = fVar9;
    if ((fVar9 <= fVar7) &&
       (fStack0000000000000040 = (fVar8 - in_stack_00000058) - *(float *)(unaff_RBX + 0x1674),
       fVar7 <= fStack0000000000000040)) {
      fStack0000000000000040 = fVar7;
    }
    pcVar5 = &stack0x00000070;
    if (&stack0x00000000 != (undefined1 *)0xffffffffffffff8f) {
      while (*pcVar5 != '\0') {
        if (((*pcVar5 == '#') && (pcVar5[1] == '#')) ||
           (pcVar5 = pcVar5 + 1, pcVar5 == (char *)0xffffffffffffffff)) break;
      }
    }
    fStack0000000000000044 = fVar10;
    uStack0000000000000068 = unaff_R14D;
    if (((int)pcVar5 != (int)&stack0x00000070) &&
       (FUN_1801224c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x1af8) + 0x2e8),&stack0x00000040,
                      &stack0x00000050,&stack0x00000070,pcVar5),
       *(char *)(lVar2 + 0x2e38) != (char)unaff_R14D)) {
      FUN_18013c800(&stack0x00000040,&stack0x00000070,pcVar5);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180111fb3(undefined8 param_1,float param_2)
void FUN_180111fb3(undefined8 param_1,float param_2)

{
  longlong unaff_RBX;
  char *pcVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char unaff_R14B;
  float unaff_XMM6_Da;
  float fVar2;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float fStack0000000000000040;
  undefined4 uStack000000000000006c;
  
  fVar2 = unaff_XMM6_Da + *(float *)(unaff_RBX + 0x166c);
  uStack000000000000006c = 0x3f000000;
  fStack0000000000000040 = unaff_XMM9_Da;
  if ((unaff_XMM9_Da <= fVar2) &&
     (fStack0000000000000040 = (unaff_XMM7_Da - param_2) - *(float *)(unaff_RBX + 0x1674),
     fVar2 <= fStack0000000000000040)) {
    fStack0000000000000040 = fVar2;
  }
  pcVar1 = &stack0x00000070;
  if (&stack0x00000000 != (undefined1 *)0xffffffffffffff8f) {
    while (*pcVar1 != '\0') {
      if (((*pcVar1 == '#') && (pcVar1[1] == '#')) ||
         (pcVar1 = pcVar1 + 1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (((int)pcVar1 != (int)&stack0x00000070) &&
     (FUN_1801224c0(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x2e8),&stack0x00000040,
                    &stack0x00000050,&stack0x00000070,pcVar1),
     *(char *)(unaff_RDI + 0x2e38) != unaff_R14B)) {
    FUN_18013c800(&stack0x00000040,&stack0x00000070,pcVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x70) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_1801120bb(void)
void FUN_1801120bb(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x70) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801120e0(float *param_1)
void FUN_1801120e0(float *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fStackX_10;
  float fStackX_14;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar5 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar6 = *(longlong *)(lVar5 + 0x1af8);
  if (*(char *)(lVar6 + 0xb4) == '\0') {
    fVar1 = *(float *)(lVar6 + 0x100);
    fVar8 = fVar1 + *param_1;
    fVar2 = *(float *)(lVar6 + 0x104);
    fVar7 = fVar2 + param_1[1];
    fStackX_10 = fVar8 - fVar1;
    fStackX_14 = fVar7 - fVar2;
    func_0x000180124080(&fStackX_10,0);
    lVar6 = *(longlong *)(lVar5 + 0x1af8);
    *(undefined8 *)(lVar6 + 0x144) = 0;
    *(float *)(lVar6 + 0x14c) = fVar1;
    *(float *)(lVar6 + 0x150) = fVar2;
    *(float *)(lVar6 + 0x154) = fVar8;
    *(float *)(lVar6 + 0x158) = fVar7;
    lVar3 = *(longlong *)(lVar5 + 0x1af8);
    if ((((((*(float *)(lVar3 + 0x22c) <= fVar7 && fVar7 != *(float *)(lVar3 + 0x22c)) &&
           (fVar2 < *(float *)(lVar3 + 0x234))) &&
          (*(float *)(lVar3 + 0x228) <= fVar8 && fVar8 != *(float *)(lVar3 + 0x228))) &&
         (fVar1 < *(float *)(lVar3 + 0x230))) || (*(char *)(lVar5 + 0x2e38) != '\0')) &&
       (fStack_48 = fVar1, fStack_44 = fVar2, fStack_40 = fVar8, fStack_3c = fVar7,
       cVar4 = FUN_180128040(&fStack_48,&fStack_40,1), cVar4 != '\0')) {
      *(uint *)(lVar6 + 0x148) = *(uint *)(lVar6 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_18011210d(float *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
void FUN_18011210d(float *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong in_RAX;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fStackX_20;
  float fStackX_24;
  float fStack000000000000002c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar1 = *(float *)(in_RAX + 0x100);
  fVar7 = fVar1 + *param_1;
  fVar2 = *(float *)(in_RAX + 0x104);
  fVar6 = fVar2 + param_1[1];
  fStack0000000000000078 = fVar7 - fVar1;
  fStack000000000000007c = fVar6 - fVar2;
  func_0x000180124080(&stack0x00000078,0);
  lVar5 = *(longlong *)(param_4 + 0x1af8);
  *(undefined8 *)(lVar5 + 0x144) = 0;
  *(float *)(lVar5 + 0x14c) = fVar1;
  *(float *)(lVar5 + 0x150) = fVar2;
  *(float *)(lVar5 + 0x154) = fVar7;
  *(float *)(lVar5 + 0x158) = fVar6;
  lVar3 = *(longlong *)(param_4 + 0x1af8);
  if (((((*(float *)(lVar3 + 0x22c) <= fVar6 && fVar6 != *(float *)(lVar3 + 0x22c)) &&
        (fVar2 < *(float *)(lVar3 + 0x234))) &&
       (*(float *)(lVar3 + 0x228) <= fVar7 && fVar7 != *(float *)(lVar3 + 0x228))) &&
      (fVar1 < *(float *)(lVar3 + 0x230))) || (*(char *)(param_4 + 0x2e38) != '\0')) {
    fStackX_20 = fVar1;
    fStackX_24 = fVar2;
    param_5 = fVar7;
    fStack000000000000002c = fVar6;
    cVar4 = FUN_180128040(&fStackX_20,&param_5,1);
    if (cVar4 != '\0') {
      *(uint *)(lVar5 + 0x148) = *(uint *)(lVar5 + 0x148) | 1;
    }
  }
  return;
}





// 函数: void FUN_180112207(void)
void FUN_180112207(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180112280(void)
void FUN_180112280(void)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStackX_8;
  float fStackX_10;
  float fStackX_14;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  lVar4 = _DAT_180c8a9b0;
  *(undefined1 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0xb1) = 1;
  lVar9 = *(longlong *)(lVar4 + 0x1af8);
  if (*(char *)(lVar9 + 0xb4) == '\0') {
    if (*(int *)(lVar9 + 0x1a0) == 0) {
      *(undefined1 *)(lVar9 + 0xb1) = 1;
      lVar9 = *(longlong *)(lVar4 + 0x1af8);
      if (*(char *)(lVar9 + 0xb4) == '\0') {
        pfVar1 = (float *)(lVar9 + 0x100);
        fVar14 = *pfVar1;
        fVar16 = *(float *)(lVar9 + 0x104);
        fVar12 = *pfVar1;
        uVar3 = *(undefined4 *)(lVar9 + 0x104);
        fVar2 = *pfVar1;
        uVar6 = *(undefined4 *)(lVar9 + 0x104);
        fVar17 = fVar16 + *(float *)(lVar9 + 0x124);
        fVar15 = fVar14 + 1.0;
        uStackX_8 = (ulonglong)(uint)(fVar15 - fVar14);
        lVar7 = lVar4;
        fVar11 = fVar15;
        fVar13 = fVar17;
        func_0x000180124080(&uStackX_8,0);
        lVar8 = *(longlong *)(lVar7 + 0x1af8);
        *(undefined8 *)(lVar8 + 0x144) = 0;
        *(float *)(lVar8 + 0x14c) = fVar2;
        *(undefined4 *)(lVar8 + 0x150) = uVar6;
        *(float *)(lVar8 + 0x154) = fVar11;
        *(float *)(lVar8 + 0x158) = fVar13;
        lVar10 = *(longlong *)(lVar7 + 0x1af8);
        if ((((*(float *)(lVar10 + 0x22c) <= fVar17 && fVar17 != *(float *)(lVar10 + 0x22c)) &&
             (fVar16 < *(float *)(lVar10 + 0x234))) &&
            ((*(float *)(lVar10 + 0x228) <= fVar15 && fVar15 != *(float *)(lVar10 + 0x228) &&
             (fVar14 < *(float *)(lVar10 + 0x230))))) || (*(char *)(lVar7 + 0x2e38) != '\0')) {
          fStack_78 = fVar12;
          fStack_74 = (float)uVar3;
          fStack_70 = fVar11;
          fStack_6c = fVar13;
          cVar5 = FUN_180128040(&fStack_78,&fStack_70,1);
          if (cVar5 != '\0') {
            *(uint *)(lVar8 + 0x148) = *(uint *)(lVar8 + 0x148) | 1;
          }
          fStack_78 = *(float *)(lVar7 + 0x1878);
          fStack_74 = *(float *)(lVar7 + 0x187c);
          fStack_70 = *(float *)(lVar7 + 0x1880);
          fStack_6c = *(float *)(lVar7 + 0x1884) * *(float *)(lVar7 + 0x1628);
          uStackX_8 = CONCAT44(fVar17,fVar14);
          fStackX_10 = fVar14;
          fStackX_14 = fVar16;
          uVar6 = func_0x000180121e20(&fStack_78);
          FUN_180293d20(*(undefined8 *)(lVar9 + 0x2e8),&fStackX_10,&uStackX_8,uVar6,0x3f800000);
          if (*(char *)(lVar4 + 0x2e38) != '\0') {
            FUN_18013c760(&UNK_180a0634c);
          }
        }
      }
    }
    else {
      lVar8 = lVar4;
      if (*(longlong *)(lVar9 + 0x210) != 0) {
        FUN_180126d80();
        lVar8 = _DAT_180c8a9b0;
      }
      fVar14 = *(float *)(lVar9 + 0x40);
      fVar16 = fVar14 + *(float *)(lVar9 + 0x48);
      if (*(int *)(lVar9 + 0x1e8) != 0) {
        fVar14 = fVar14 + *(float *)(lVar9 + 0x204);
      }
      fVar2 = *(float *)(lVar9 + 0x104);
      uStackX_8 = 0;
      fVar13 = fVar2 + 1.0;
      fVar12 = fVar16;
      fVar11 = fVar13;
      func_0x000180124080(&uStackX_8,0);
      lVar10 = *(longlong *)(lVar8 + 0x1af8);
      *(undefined8 *)(lVar10 + 0x144) = 0;
      *(float *)(lVar10 + 0x14c) = fVar14;
      *(float *)(lVar10 + 0x150) = fVar2;
      *(float *)(lVar10 + 0x154) = fVar12;
      *(float *)(lVar10 + 0x158) = fVar11;
      lVar7 = *(longlong *)(lVar8 + 0x1af8);
      fStack_78 = fVar14;
      fStack_74 = fVar2;
      fStack_70 = fVar12;
      fStack_6c = fVar11;
      if (((((*(float *)(lVar7 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar7 + 0x22c)) &&
            (fVar2 < *(float *)(lVar7 + 0x234))) &&
           (*(float *)(lVar7 + 0x228) <= fVar16 && fVar16 != *(float *)(lVar7 + 0x228))) &&
          (fVar14 < *(float *)(lVar7 + 0x230))) || (*(char *)(lVar8 + 0x2e38) != '\0')) {
        cVar5 = FUN_180128040(&fStack_78,&fStack_70,1);
        if (cVar5 != '\0') {
          *(uint *)(lVar10 + 0x148) = *(uint *)(lVar10 + 0x148) | 1;
        }
        uStack_68 = *(undefined4 *)(lVar8 + 0x1878);
        uStack_64 = *(undefined4 *)(lVar8 + 0x187c);
        uStack_60 = *(undefined4 *)(lVar8 + 0x1880);
        fStack_5c = *(float *)(lVar8 + 0x1884) * *(float *)(lVar8 + 0x1628);
        uStackX_8 = CONCAT44(fVar2,fVar16);
        uVar6 = func_0x000180121e20(&uStack_68);
        FUN_180293d20(*(undefined8 *)(lVar9 + 0x2e8),&fStack_78,&uStackX_8,uVar6,0x3f800000);
        if (*(char *)(lVar4 + 0x2e38) != '\0') {
          FUN_18013c800(&fStack_78,&UNK_180a06350,0);
        }
        if (*(longlong *)(lVar9 + 0x210) != 0) {
          FUN_180134400();
          *(undefined4 *)(*(longlong *)(lVar9 + 0x210) + 0x1c) = *(undefined4 *)(lVar9 + 0x104);
        }
      }
      else if (*(longlong *)(lVar9 + 0x210) != 0) {
        FUN_180134400();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



