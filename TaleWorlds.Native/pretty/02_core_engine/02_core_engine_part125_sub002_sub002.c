#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part125_sub002_sub002.c - 核心引擎渲染处理函数

// 函数: void FUN_18012b523(void)
// 处理游戏对象的渲染和状态更新
void process_entity_rendering(void)

{
  byte *pbVar1;
  int8_t *puVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint uVar8;
  int32_t uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  float *pfVar12;
  uint64_t uVar13;
  int32_t *puVar14;
  longlong lVar15;
  float *pfVar16;
  uint64_t uVar17;
  int8_t uVar18;
  longlong lVar19;
  float *entity_position_ptr;
  longlong entity_context;
  uint64_t entity_flags;
  byte bVar20;
  float *camera_ptr;
  bool bVar21;
  longlong render_context;
  uint render_flags;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float ambient_light;
  float directional_light;
  float specular_light;
  uint64_t in_stack_00000020;
  longlong in_stack_00000040;
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
  
  // 检查实体状态标志
  if (*(char *)(*(longlong *)(render_context + 0x28) + 0x49) == '\0') {
    *(uint64_t *)(*(longlong *)(render_context + 0x28) + 8) = *(uint64_t *)(render_context + 0x40);
    render_context = in_stack_00000040;
  }
  if (*(char *)(*(longlong *)(render_context + 0x28) + 0x4a) == '\0') {
    *(uint64_t *)(*(longlong *)(render_context + 0x28) + 0x10) = *(uint64_t *)(render_context + 0x48);
    render_context = in_stack_00000040;
  }
  
  // 获取实体变换矩阵
  puVar10 = (uint64_t *)get_entity_transform_matrix(*(uint64_t *)(render_context + 0x28));
  uVar13 = puVar10[1];
  *(uint64_t *)(entity_position_ptr + 4) = *puVar10;
  *(uint64_t *)(entity_position_ptr + 6) = uVar13;
  *(uint64_t *)(in_stack_00000040 + 0x34) =
       *(uint64_t *)(*(longlong *)(in_stack_00000040 + 0x28) + 8);
  
  // 计算渲染距离和缩放
  if ((*(float *)(in_stack_00000040 + 0x48) <= directional_light) || ((render_flags & 0x2000040) != 0)) {
    fVar26 = *(float *)(entity_context + 0x19f8) * 16.0;
  }
  else {
    fVar26 = *(float *)(in_stack_00000040 + 0x48) * 0.65;
  }
  *(float *)(in_stack_00000040 + 0x284) = (float)(int)fVar26;
  
  // 初始化渲染状态
  initialize_render_state(*(uint64_t *)(in_stack_00000040 + 0x2e8));
  *(uint *)(*(longlong *)(in_stack_00000040 + 0x2e8) + 0x30) =
       -(uint)(*(char *)(entity_context + 0x16c1) != '\0') & 2 |
       (uint)CONCAT71((int7)((ulonglong)entity_flags >> 8),*(char *)(entity_context + 0x16c0) != '\0');
  lVar11 = *(longlong *)(in_stack_00000040 + 0x2e8);
  *(uint64_t *)(entity_position_ptr + -0x14) =
       *(uint64_t *)(*(longlong *)(*(longlong *)(entity_context + 0x19f0) + 0x58) + 8);
  setup_render_transform(lVar11 + 0x70,entity_position_ptr + -0x14);
  update_render_context(lVar11);
  
  // 设置渲染参数
  if (((render_flags & 0x5000000) == 0x1000000) && (entity_position_ptr[-4] != 3.761582e-37)) {
    pfVar12 = (float *)(*(longlong *)(entity_position_ptr + 8) + 0x228);
    pfVar16 = (float *)(*(longlong *)(entity_position_ptr + 8) + 0x230);
  }
  else {
    pfVar12 = entity_position_ptr + 4;
    pfVar16 = entity_position_ptr + 6;
  }
  setup_render_buffers(pfVar12,pfVar16);
  
  // 检查渲染条件
  if ((((render_flags >> 0x1b & 1) == 0) ||
      (lVar11 = check_visibility_condition(), in_stack_00000040 != lVar11)) ||
     (0 < *(int *)(in_stack_00000040 + 0xdc))) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  
  uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  lVar11 = *(longlong *)(entity_context + 0x1ce0);
  if ((lVar11 == 0) ||
     ((in_stack_00000040 != *(longlong *)(lVar11 + 0x3a0) &&
      (((lVar19 = *(longlong *)(entity_context + 0x1ce8), lVar19 == 0 || (in_stack_00000040 != lVar19))
       || (*(longlong *)(lVar19 + 0x28) == *(longlong *)(lVar11 + 0x28))))))) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  
  // 处理光照和阴影效果
  if ((bVar20 != 0) || (bVar21)) {
    fVar26 = *(float *)(entity_context + 0x1dc8);
    fVar25 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1628);
    pfVar12 = (float *)(GLOBAL_DATA_ADDRESS + 0x1628 + ((ulonglong)bVar20 + 0x3a) * 0x10);
    fVar27 = pfVar12[1];
    fVar22 = pfVar12[2];
    fVar23 = pfVar12[3];
    entity_position_ptr[-0x20] = *pfVar12;
    entity_position_ptr[-0x1f] = fVar27;
    entity_position_ptr[-0x1e] = fVar22;
    entity_position_ptr[-0x1d] = fVar23;
    entity_position_ptr[-0x1d] = fVar23 * fVar26 * fVar25;
    uVar4 = calculate_lighting_value(entity_position_ptr + -0x20);
    in_stack_00000020 = CONCAT44(uVar9,directional_light);
    render_entity_with_lighting(*(uint64_t *)(in_stack_00000040 + 0x2e8),entity_position_ptr + 4,entity_position_ptr + 6,uVar4,
                  in_stack_00000020);
    
    // 处理阴影映射
    if ((bVar21) && (in_stack_00000040 == *(longlong *)(entity_context + 0x1ce0))) {
      calculate_shadow_bounds(in_stack_00000040,entity_position_ptr + -0x18);
      process_shadow_mapping(entity_position_ptr + -0x18);
      uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
      if ((((entity_position_ptr[4] < entity_position_ptr[-0x18]) || (entity_position_ptr[5] < entity_position_ptr[-0x17])) ||
          (entity_position_ptr[-0x16] <= entity_position_ptr[6] && entity_position_ptr[6] != entity_position_ptr[-0x16])) ||
         (entity_position_ptr[-0x15] <= entity_position_ptr[7] && entity_position_ptr[7] != entity_position_ptr[-0x15])) {
        fVar26 = *(float *)(entity_context + 0x1cf4);
        uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
        uVar4 = *(int32_t *)(entity_context + 0x1634);
        fVar27 = *(float *)(GLOBAL_DATA_ADDRESS + 0x19bc);
        fVar22 = *(float *)(GLOBAL_DATA_ADDRESS + 0x19c0);
        fVar23 = *(float *)(GLOBAL_DATA_ADDRESS + 0x19c4);
        fVar25 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1628);
        entity_position_ptr[-0x20] = *(float *)(GLOBAL_DATA_ADDRESS + 0x19b8);
        entity_position_ptr[-0x1f] = fVar27;
        entity_position_ptr[-0x1e] = fVar22;
        entity_position_ptr[-0x1d] = fVar23;
        entity_position_ptr[-0x1d] = fVar23 * fVar26 * 0.25 * fVar25;
        uVar5 = calculate_lighting_value(entity_position_ptr + -0x20);
        in_stack_00000020 = CONCAT44(uVar9,uVar4);
        render_shadow_volume(uVar13,entity_position_ptr + -0x18,entity_position_ptr + -0x16,uVar5,in_stack_00000020);
      }
    }
  }
  
  // 处理实体特殊效果
  uVar9 = in_stack_00000068;
  lVar11 = *(longlong *)(entity_context + 0x1cd8);
  fVar26 = *(float *)(in_stack_00000040 + 0x78);
  fVar25 = *(float *)(in_stack_00000040 + 0x7c);
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(entity_context + 0x1c98);
  }
  if (((char)in_stack_00000068 == '\0') &&
     ((lVar11 == 0 ||
      ((*(longlong *)(in_stack_00000040 + 0x3b0) != *(longlong *)(lVar11 + 0x3b0) &&
       ((*(longlong *)(in_stack_00000040 + 0x408) == 0 ||
        (*(longlong *)(in_stack_00000040 + 0x408) != *(longlong *)(lVar11 + 0x408))))))))) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  
  update_entity_effects(in_stack_00000040,entity_position_ptr + -2);
  uVar4 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  
  // 处理透明度和混合模式
  if (*(char *)(in_stack_00000040 + 0xb2) == '\0') {
    entity_position_ptr[-10] = (float)(render_flags & 0x80);
    if ((render_flags & 0x80) == 0) {
      bVar21 = false;
      if (((*(char *)(entity_context + 0x1dd0) != '\0') &&
          (*(int *)(entity_context + 0x1a90) - *(int *)(entity_context + 0x1e44) < 2)) &&
         ((*(char *)(entity_context + 0xc3) != '\0' &&
          (((*(int *)(entity_context + 0x1df4) != -1 &&
            (iVar7 = strcmp(&GLOBAL_STRING_ADDRESS,entity_context + 0x1df8), iVar7 == 0)) &&
           (bVar21 = false, **(longlong **)(entity_context + 0x1de0) == in_stack_00000040)))))) {
        bVar21 = true;
      }
      lVar11 = GLOBAL_DATA_ADDRESS;
      if ((render_flags & 0x6000000) == 0) {
        lVar19 = 0xc0;
        if (entity_position_ptr[0x16] != 0.0) {
          lVar19 = 0xd0;
        }
      }
      else {
        lVar19 = 0xe0;
      }
      pfVar12 = (float *)(lVar19 + 0x1628 + GLOBAL_DATA_ADDRESS);
      fVar27 = pfVar12[1];
      fVar22 = pfVar12[2];
      fVar23 = pfVar12[3];
      entity_position_ptr[-0x20] = *pfVar12;
      entity_position_ptr[-0x1f] = fVar27;
      entity_position_ptr[-0x1e] = fVar22;
      entity_position_ptr[-0x1d] = fVar23;
      entity_position_ptr[-0x1d] = fVar23 * *(float *)(lVar11 + 0x1628);
      uVar8 = calculate_lighting_value(entity_position_ptr + -0x20);
      if (*(char *)(in_stack_00000040 + 0xae) == '\0') {
        fVar27 = specular_light;
        if (*(int *)(entity_context + 0x1be8) != 0) {
          fVar27 = *(float *)(entity_context + 0x1c38);
        }
        if (bVar21) {
          fVar27 = fVar27 * 0.5;
        }
        if (fVar27 != specular_light) {
          fVar22 = directional_light;
          if ((directional_light <= fVar27) && (fVar22 = fVar27, specular_light <= fVar27)) {
            fVar22 = specular_light;
          }
          uVar8 = (int)(fVar22 * 255.0 + 0.5) << 0x18 | uVar8 & 0xffffff;
        }
      }
      else {
        uVar8 = uVar8 | 0xff000000;
        if (bVar21) {
          *(float *)(*(longlong *)(in_stack_00000040 + 0x28) + 0x6c) =
               *(float *)(*(longlong *)(in_stack_00000040 + 0x28) + 0x6c) * 0.5;
        }
      }
      fVar27 = *(float *)(in_stack_00000040 + 0x48);
      fVar22 = *(float *)(in_stack_00000040 + 0x40);
      uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      entity_position_ptr[0x15] = *(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44);
      entity_position_ptr[0x14] = fVar27 + fVar22;
      fVar22 = (float)calculate_entity_distance(in_stack_00000040);
      fVar27 = *(float *)(in_stack_00000040 + 0x44);
      entity_position_ptr[0x12] = *(float *)(in_stack_00000040 + 0x40);
      in_stack_00000020 = CONCAT44(uVar4,fVar26);
      entity_position_ptr[0x13] = fVar22 + fVar27;
      render_entity_with_alpha(uVar13,entity_position_ptr + 0x12,entity_position_ptr + 0x14,uVar8,in_stack_00000020);
    }
    
    // 处理粒子效果
    uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    bVar21 = false;
    *(int32_t *)(entity_context + 0x1be8) = 0;
    lVar11 = GLOBAL_DATA_ADDRESS;
    if (((render_flags & 1) == 0) && ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
      pfVar12 = (float *)(GLOBAL_DATA_ADDRESS + 0x1628 + ((ulonglong)bVar20 + 0x14) * 0x10);
      fVar27 = pfVar12[1];
      fVar22 = pfVar12[2];
      fVar23 = pfVar12[3];
      entity_position_ptr[-0x20] = *pfVar12;
      entity_position_ptr[-0x1f] = fVar27;
      entity_position_ptr[-0x1e] = fVar22;
      entity_position_ptr[-0x1d] = fVar23;
      entity_position_ptr[-0x1d] = fVar23 * *(float *)(lVar11 + 0x1628);
      calculate_lighting_value(entity_position_ptr + -0x20);
      in_stack_00000020 = CONCAT44(uVar9,fVar26);
      render_particle_effect(*(uint64_t *)(in_stack_00000040 + 0x2e8),entity_position_ptr + -2);
    }
    
    // 处理后期处理效果
    uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if ((render_flags >> 10 & 1) != 0) {
      apply_post_processing(in_stack_00000040,entity_position_ptr + -8);
      uVar13 = calculate_shadow_bounds(in_stack_00000040,entity_position_ptr + -0x18);
      process_post_processing(entity_position_ptr + -8,uVar13);
      lVar11 = GLOBAL_DATA_ADDRESS;
      uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      fVar27 = directional_light;
      if ((render_flags & 1) != 0) {
        fVar27 = fVar26;
      }
      fVar22 = *(float *)(GLOBAL_DATA_ADDRESS + 0x179c);
      fVar23 = *(float *)(GLOBAL_DATA_ADDRESS + 0x17a0);
      fVar24 = *(float *)(GLOBAL_DATA_ADDRESS + 0x17a4);
      entity_position_ptr[-0x20] = *(float *)(GLOBAL_DATA_ADDRESS + 0x1798);
      entity_position_ptr[-0x1f] = fVar22;
      entity_position_ptr[-0x1e] = fVar23;
      entity_position_ptr[-0x1d] = fVar24;
      entity_position_ptr[-0x1d] = fVar24 * *(float *)(lVar11 + 0x1628);
      uVar4 = calculate_lighting_value(entity_position_ptr + -0x20);
      in_stack_00000020 = CONCAT44(uVar9,fVar27);
      render_post_processing_effect(uVar13,entity_position_ptr + -8,entity_position_ptr + -6,uVar4,in_stack_00000020);
      lVar11 = GLOBAL_DATA_ADDRESS;
      uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
      fVar27 = *(float *)(entity_context + 0x1668);
      if ((directional_light < fVar27) &&
         (entity_position_ptr[-5] <
          *(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44))) {
        uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
        fVar22 = *(float *)(GLOBAL_DATA_ADDRESS + 0x171c);
        fVar23 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1720);
        fVar24 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1724);
        entity_position_ptr[-0x20] = *(float *)(GLOBAL_DATA_ADDRESS + 0x1718);
        entity_position_ptr[-0x1f] = fVar22;
        entity_position_ptr[-0x1e] = fVar23;
        entity_position_ptr[-0x1d] = fVar24;
        entity_position_ptr[-0x1d] = fVar24 * *(float *)(lVar11 + 0x1628);
        uVar4 = calculate_lighting_value(entity_position_ptr + -0x20);
        *(uint64_t *)(entity_position_ptr + -0x18) = *(uint64_t *)(entity_position_ptr + -6);
        entity_position_ptr[0x11] = entity_position_ptr[-5];
        entity_position_ptr[0x10] = entity_position_ptr[-8];
        in_stack_00000020 = CONCAT44(uVar9,fVar27);
        render_special_effect(uVar13,entity_position_ptr + 0x10,entity_position_ptr + -0x18,uVar4,in_stack_00000020);
      }
    }
    
    // 处理实体动画和变形
    uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    lVar11 = *(longlong *)(in_stack_00000040 + 0x408);
    if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0xa0) & 0x40) != 0)) {
      fStack0000000000000050 = *(float *)(lVar11 + 0x38);
      fVar27 = *(float *)(entity_context + 0x19f8);
      fStack0000000000000054 = *(float *)(lVar11 + 0x3c);
      entity_position_ptr[-0x20] = fStack0000000000000050;
      entity_position_ptr[-0x1f] = fStack0000000000000054;
      fVar22 = (float)(int)(fVar27 * 0.7);
      fVar27 = (float)(int)(fVar27 * 0.55);
      entity_position_ptr[-0x1e] = fStack0000000000000050 + fVar27;
      entity_position_ptr[-0x1d] = fStack0000000000000054 + fVar27;
      uVar4 = get_entity_shader_params(in_stack_00000040,&GLOBAL_SHADER_ADDRESS,0);
      uVar13 = CONCAT44(uVar9,0x20);
      cVar3 = apply_vertex_shader(entity_position_ptr + -0x20,uVar4,(longlong)&stack0x00000058 + 1,&stack0x00000058,
                            uVar13);
      uVar9 = (int32_t)((ulonglong)uVar13 >> 0x20);
      if (cVar3 != '\0') {
        pbVar1 = (byte *)(*(longlong *)(in_stack_00000040 + 0x408) + 0xa1);
        *pbVar1 = *pbVar1 | 0x10;
      }
      lVar11 = GLOBAL_DATA_ADDRESS;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(*(longlong *)(in_stack_00000040 + 0x408) + 0xa0) & 8) == 0 ||
          (cStack0000000000000059 != '\0')))) {
        lVar19 = (ulonglong)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar19 = 0x17;
      }
      pfVar12 = (float *)(GLOBAL_DATA_ADDRESS + 0x1628 + (lVar19 + 10) * 0x10);
      fVar27 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar24 = pfVar12[3];
      entity_position_ptr[-0x14] = *pfVar12;
      entity_position_ptr[-0x13] = fVar27;
      entity_position_ptr[-0x12] = fVar23;
      entity_position_ptr[-0x11] = fVar24;
      entity_position_ptr[-0x11] = fVar24 * *(float *)(lVar11 + 0x1628);
      uVar4 = calculate_lighting_value(entity_position_ptr + -0x14);
      in_stack_00000020 = CONCAT44(uVar9,uVar4);
      uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      entity_position_ptr[0xe] = fStack0000000000000050;
      fStack0000000000000070 = fStack0000000000000050 + fVar22;
      fStack0000000000000074 = fStack0000000000000054;
      entity_position_ptr[0xf] = fStack0000000000000054 + fVar22;
      render_animated_entity(uVar13,&stack0x00000050,&stack0x00000070,entity_position_ptr + 0xe,in_stack_00000020);
    }
    
    // 处理实体特效
    if (*(char *)(in_stack_00000040 + 0xac) != '\0') {
      activate_entity_effect(0);
    }
    if (*(char *)(in_stack_00000040 + 0xad) != '\0') {
      activate_entity_effect(1);
    }
    
    // 处理多重渲染通道
    uVar4 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if ((render_flags & 2) == 0) {
      lVar11 = 0;
      do {
        uVar9 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
        fVar27 = *(float *)(in_stack_00000040 + 0x40);
        fVar22 = *(float *)(in_stack_00000040 + 0x44);
        lVar19 = *(longlong *)(in_stack_00000040 + 0x2e8);
        fVar27 = ((fVar27 + *(float *)(in_stack_00000040 + 0x48)) - fVar27) * camera_ptr[-2] + fVar27
        ;
        fVar22 = ((fVar22 + *(float *)(in_stack_00000040 + 0x4c)) - fVar22) * camera_ptr[-1] + fVar22
        ;
        if (bVar21) {
          entity_position_ptr[2] = fVar25;
          entity_position_ptr[3] = ambient_light;
          fVar23 = fVar25;
        }
        else {
          fStack0000000000000064 = fVar25;
          fVar23 = ambient_light;
          fStack0000000000000060 = ambient_light;
        }
        pfVar12 = (float *)((longlong)&stack0x00000060 + 4);
        if (bVar21) {
          pfVar12 = entity_position_ptr + 3;
        }
        entity_position_ptr[-4] = fVar23 * *camera_ptr + fVar27;
        entity_position_ptr[-3] = *pfVar12 * camera_ptr[1] + fVar22;
        setup_render_transform(lVar19 + 0x80,entity_position_ptr + -4);
        lVar19 = *(longlong *)(in_stack_00000040 + 0x2e8);
        if (bVar21) {
          entity_position_ptr[0x1c] = ambient_light;
          entity_position_ptr[0x1d] = fVar25;
          fVar23 = ambient_light;
        }
        else {
          entity_position_ptr[-0x1c] = fVar25;
          entity_position_ptr[-0x1b] = ambient_light;
          fVar23 = fVar25;
        }
        pfVar12 = entity_position_ptr + -0x1b;
        if (bVar21) {
          pfVar12 = entity_position_ptr + 0x1d;
        }
        entity_position_ptr[0x18] = fVar23 * *camera_ptr + fVar27;
        entity_position_ptr[0x19] = *pfVar12 * camera_ptr[1] + fVar22;
        setup_render_transform(lVar19 + 0x80,entity_position_ptr + 0x18);
        fVar23 = camera_ptr[1];
        uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
        in_stack_00000020 = CONCAT44(uVar9,camera_ptr[3]);
        entity_position_ptr[-0x14] = (fVar25 + fVar26) * *camera_ptr + fVar27;
        entity_position_ptr[-0x13] = (fVar25 + fVar26) * fVar23 + fVar22;
        render_multi_pass_entity(uVar13,entity_position_ptr + -0x14);
        lVar19 = *(longlong *)(in_stack_00000040 + 0x2e8);
        render_entity_with_shader(lVar19,*(uint64_t *)(lVar19 + 0x88),*(int32_t *)(lVar19 + 0x80),
                      entity_position_ptr[lVar11 + 0x20],in_stack_00000020);
        uVar4 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
        bVar21 = (bool)(bVar21 ^ 1);
        *(int32_t *)(lVar19 + 0x80) = 0;
        lVar11 = lVar11 + 1;
        camera_ptr = camera_ptr + 6;
      } while (lVar11 < *(longlong *)(entity_position_ptr + -0xe));
    }
    
    // 处理最终渲染输出
    lVar11 = GLOBAL_DATA_ADDRESS;
    if ((directional_light < fVar25) && (entity_position_ptr[-10] == 0.0)) {
      lVar19 = *(longlong *)(in_stack_00000040 + 0x2e8);
      fVar27 = *(float *)(GLOBAL_DATA_ADDRESS + 0x171c);
      fVar22 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1720);
      fVar23 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1724);
      entity_position_ptr[0x20] = *(float *)(GLOBAL_DATA_ADDRESS + 0x1718);
      entity_position_ptr[0x21] = fVar27;
      entity_position_ptr[0x22] = fVar22;
      entity_position_ptr[0x23] = fVar23;
      entity_position_ptr[0x23] = fVar23 * *(float *)(lVar11 + 0x1628);
      uVar8 = calculate_lighting_value(entity_position_ptr + 0x20);
      fVar27 = *(float *)(in_stack_00000040 + 0x44);
      fVar22 = *(float *)(in_stack_00000040 + 0x40) + *(float *)(in_stack_00000040 + 0x48);
      fVar23 = fVar27 + *(float *)(in_stack_00000040 + 0x4c);
      if ((uVar8 & 0xff000000) != 0) {
        bVar20 = *(byte *)(lVar19 + 0x30);
        uVar13 = CONCAT44(uVar4,0xf);
        entity_position_ptr[-0x14] = *(float *)(in_stack_00000040 + 0x40) + 0.5;
        entity_position_ptr[-0x13] = fVar27 + 0.5;
        if ((bVar20 & 1) == 0) {
          fVar22 = fVar22 - 0.49;
          fVar23 = fVar23 - 0.49;
        }
        else {
          fVar22 = fVar22 - 0.5;
          fVar23 = fVar23 - 0.5;
        }
        entity_position_ptr[-0xe] = fVar22;
        entity_position_ptr[-0xd] = fVar23;
        render_final_output(lVar19,entity_position_ptr + -0x14,entity_position_ptr + -0xe,fVar26,uVar13);
        uVar4 = (int32_t)((ulonglong)uVar13 >> 0x20);
        apply_final_shading(lVar19,uVar8,1,fVar25);
      }
    }
    
    if (entity_position_ptr[0xc] != -NAN) {
      apply_screen_space_effects(entity_position_ptr + -0x14,in_stack_00000040);
      lVar11 = GLOBAL_DATA_ADDRESS;
      uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      fVar26 = *(float *)(GLOBAL_DATA_ADDRESS + 0x189c);
      fVar27 = *(float *)(GLOBAL_DATA_ADDRESS + 0x18a0);
      fVar22 = *(float *)(GLOBAL_DATA_ADDRESS + 0x18a4);
      entity_position_ptr[-0xe] = *(float *)(GLOBAL_DATA_ADDRESS + 0x1898);
      entity_position_ptr[-0xd] = fVar26;
      entity_position_ptr[-0xc] = fVar27;
      entity_position_ptr[-0xb] = fVar22;
      entity_position_ptr[-0xb] = fVar22 * *(float *)(lVar11 + 0x1628);
      uVar9 = calculate_lighting_value(entity_position_ptr + -0xe);
      if (fVar25 <= specular_light) {
        fVar25 = specular_light;
      }
      uVar17 = CONCAT44(uVar4,fVar25);
      render_screen_space_effect(uVar13,entity_position_ptr + -0x14,entity_position_ptr + -0x12,uVar9,uVar17);
      uVar4 = (int32_t)((ulonglong)uVar17 >> 0x20);
    }
    
    // 处理UI覆盖层
    lVar11 = GLOBAL_DATA_ADDRESS;
    fVar26 = *(float *)(entity_context + 0x1668);
    if (((directional_light < fVar26) && ((render_flags & 1) == 0)) &&
       ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
      uVar13 = *(uint64_t *)(in_stack_00000040 + 0x2e8);
      fVar25 = *(float *)(GLOBAL_DATA_ADDRESS + 0x171c);
      fVar27 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1720);
      fVar22 = *(float *)(GLOBAL_DATA_ADDRESS + 0x1724);
      entity_position_ptr[0x18] = *(float *)(GLOBAL_DATA_ADDRESS + 0x1718);
      entity_position_ptr[0x19] = fVar25;
      entity_position_ptr[0x1a] = fVar27;
      entity_position_ptr[0x1b] = fVar22;
      entity_position_ptr[0x1b] = fVar22 * *(float *)(lVar11 + 0x1628);
      uVar9 = calculate_lighting_value(entity_position_ptr + 0x18);
      fVar25 = *(float *)(entity_context + 0x1638);
      uVar17 = CONCAT44(uVar4,fVar26);
      entity_position_ptr[-0xe] = *entity_position_ptr - fVar25;
      entity_position_ptr[-0xd] = entity_position_ptr[1] - specular_light;
      entity_position_ptr[-0x13] = entity_position_ptr[1] - specular_light;
      entity_position_ptr[-0x14] = entity_position_ptr[-2] + fVar25;
      render_ui_overlay(uVar13,entity_position_ptr + -0x14,entity_position_ptr + -0xe,uVar9,uVar17);
      uVar4 = (int32_t)((ulonglong)uVar17 >> 0x20);
    }
    entity_flags = 0;
    uVar9 = in_stack_00000068;
  }
  else {
    // 处理特殊渲染模式
    uVar5 = *(int32_t *)(entity_context + 0x1668);
    *(int32_t *)(entity_context + 0x1668) = *(int32_t *)(in_stack_00000040 + 0x7c);
    lVar11 = GLOBAL_DATA_ADDRESS;
    if ((bVar20 == 0) || (lVar19 = 0x150, *(char *)(entity_context + 0x1d06) != '\0')) {
      lVar19 = 0x160;
    }
    pfVar12 = (float *)(lVar19 + 0x1628 + GLOBAL_DATA_ADDRESS);
    fVar25 = pfVar12[1];
    fVar27 = pfVar12[2];
    fVar22 = pfVar12[3];
    entity_position_ptr[0x20] = *pfVar12;
    entity_position_ptr[0x21] = fVar25;
    entity_position_ptr[0x22] = fVar27;
    entity_position_ptr[0x23] = fVar22;
    entity_position_ptr[0x23] = fVar22 * *(float *)(lVar11 + 0x1628);
    uVar6 = calculate_lighting_value(entity_position_ptr + 0x20);
    uVar13 = CONCAT44(uVar4,fVar26);
    apply_special_render_mode(*(uint64_t *)(entity_position_ptr + -2),*(uint64_t *)entity_position_ptr,uVar6,1,uVar13);
    uVar4 = (int32_t)((ulonglong)uVar13 >> 0x20);
    *(int32_t *)(entity_context + 0x1668) = uVar5;
  }
  
  // 更新实体状态和位置
  pfVar12 = (float *)(entity_context + 0x1668);
  *(uint64_t *)(in_stack_00000040 + 0x58) = *(uint64_t *)(in_stack_00000040 + 0x50);
  *(float *)(in_stack_00000040 + 0x270) =
       (*(float *)(in_stack_00000040 + 0x40) - *(float *)(in_stack_00000040 + 0x8c)) +
       *(float *)(in_stack_00000040 + 0x70);
  fVar22 = (float)calculate_entity_distance(in_stack_00000040);
  fVar26 = *(float *)(in_stack_00000040 + 0x44);
  fVar25 = *(float *)(in_stack_00000040 + 0x90);
  fVar27 = *(float *)(in_stack_00000040 + 0x74);
  fVar23 = (float)get_current_time();
  *(float *)(in_stack_00000040 + 0x274) = fVar23 + fVar22 + (fVar26 - fVar25) + fVar27;
  fVar26 = *(float *)(in_stack_00000040 + 0x68);
  if (fVar26 == directional_light) {
    fVar26 = *(float *)(in_stack_00000040 + 0x48) - *(float *)(in_stack_00000040 + 0xa4);
  }
  *(float *)(in_stack_00000040 + 0x278) =
       ((*(float *)(in_stack_00000040 + 0x40) - *(float *)(in_stack_00000040 + 0x8c)) -
       *(float *)(in_stack_00000040 + 0x70)) + fVar26;
  fVar26 = *(float *)(in_stack_00000040 + 0x6c);
  if (fVar26 == directional_light) {
    fVar26 = *(float *)(in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0xa8);
  }
  *(float *)(in_stack_00000040 + 0x27c) =
       ((*(float *)(in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x90)) -
       *(float *)(in_stack_00000040 + 0x74)) + fVar26;
  *(float *)(in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0x70) - *(float *)(in_stack_00000040 + 0x8c);
  uVar6 = (int32_t)entity_flags;
  *(int32_t *)(in_stack_00000040 + 0x208) = uVar6;
  *(int32_t *)(in_stack_00000040 + 0x20c) = uVar6;
  get_current_time(in_stack_00000040);
  calculate_entity_distance(in_stack_00000040);
  uVar13 = calculate_screen_position(entity_position_ptr + -0x18,
                               *(float *)(in_stack_00000040 + 0x20c) +
                               *(float *)(in_stack_00000040 + 0x204));
  puVar14 = (int32_t *)calculate_world_position(entity_position_ptr + -0xe,in_stack_00000040 + 0x40,uVar13);
  uVar5 = puVar14[1];
  *(int32_t *)(in_stack_00000040 + 0x110) = *puVar14;
  *(int32_t *)(in_stack_00000040 + 0x114) = uVar5;
  *(uint64_t *)(in_stack_00000040 + 0x100) = *(uint64_t *)(in_stack_00000040 + 0x110);
  *(uint64_t *)(in_stack_00000040 + 0x108) = *(uint64_t *)(in_stack_00000040 + 0x110);
  *(uint64_t *)(in_stack_00000040 + 0x118) = *(uint64_t *)(in_stack_00000040 + 0x110);
  puVar14 = (int32_t *)calculate_screen_position(entity_position_ptr + -0x18);
  uVar5 = puVar14[1];
  *(int32_t *)(in_stack_00000040 + 300) = *puVar14;
  *(int32_t *)(in_stack_00000040 + 0x130) = uVar5;
  *(uint64_t *)(in_stack_00000040 + 0x120) = *(uint64_t *)(in_stack_00000040 + 300);
  *(int32_t *)(in_stack_00000040 + 0x134) = uVar6;
  *(int32_t *)(in_stack_00000040 + 0x128) = uVar6;
  *(int8_t *)(in_stack_00000040 + 0x17c) = 0;
  fVar26 = (float)calculate_entity_priority(in_stack_00000040);
  *(bool *)(in_stack_00000040 + 0x17d) = directional_light < fVar26;
  *(int32_t *)(in_stack_00000040 + 0x174) = *(int32_t *)(in_stack_00000040 + 0x178);
  *(int32_t *)(in_stack_00000040 + 0x178) = uVar6;
  *(int8_t *)(in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x138) = *(float *)(in_stack_00000040 + 0x104) - 9999.0;
  initialize_entity_state(in_stack_00000040 + 0x188,0);
  lVar11 = *(longlong *)(entity_position_ptr + 8);
  *(int32_t *)(in_stack_00000040 + 0x1a0) = 1;
  if (lVar11 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(int32_t *)(lVar11 + 0x1a0);
  }
  *(int32_t *)(in_stack_00000040 + 0x1a4) = uVar5;
  uVar5 = uVar6;
  if (lVar11 != 0) {
    uVar5 = *(int32_t *)(lVar11 + 0x1a8);
  }
  *(int32_t *)(in_stack_00000040 + 0x1a8) = uVar5;
  *(int32_t *)(in_stack_00000040 + 0x1ac) = *(int32_t *)(in_stack_00000040 + 0x284);
  *(int32_t *)(in_stack_00000040 + 0x1b0) = 0xbf800000;
  initialize_entity_state(in_stack_00000040 + 0x1b8,0);
  initialize_entity_state(in_stack_00000040 + 0x1c8,0);
  initialize_entity_state(in_stack_00000040 + 0x1d8,0);
  *(uint64_t *)(in_stack_00000040 + 0x210) = entity_flags;
  *(int32_t *)(in_stack_00000040 + 0x13c) = uVar6;
  *(int32_t *)(in_stack_00000040 + 0x140) = uVar6;
  *(longlong *)(in_stack_00000040 + 0x198) = in_stack_00000040 + 0x2b8;
  initialize_entity_state(in_stack_00000040 + 0x1e8,0);
  setup_entity_shader(in_stack_00000040 + 0x288,3);
  if ((entity_position_ptr[0x16] != 0.0) && (*(int *)(in_stack_00000040 + 0x1a8) != *(int *)(lVar11 + 0x1a8)))
  {
    *(int *)(in_stack_00000040 + 0x1a8) = *(int *)(lVar11 + 0x1a8);
    update_shader_parameters(in_stack_00000040 + 0x1b8,in_stack_00000040 + 0x1a8);
  }
  if (0 < *(int *)(in_stack_00000040 + 0xc4)) {
    *(int *)(in_stack_00000040 + 0xc4) = *(int *)(in_stack_00000040 + 0xc4) + -1;
  }
  if (0 < *(int *)(in_stack_00000040 + 200)) {
    *(int *)(in_stack_00000040 + 200) = *(int *)(in_stack_00000040 + 200) + -1;
  }
  if ((char)uVar9 != '\0') {
    update_entity_animation(in_stack_00000040);
    reset_entity_state(in_stack_00000040,0);
  }
  puVar2 = *(int8_t **)(entity_position_ptr + 10);
  if ((((puVar2 != (int8_t *)0x0) &&
       (lVar19 = *(longlong *)(in_stack_00000040 + 0x28), *(char *)(lVar19 + 0x48) != '\0')) &&
      (lVar15 = get_active_entity(), lVar19 != lVar15)) &&
     (((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)(in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar19 + 0x48) = 0;
    *(int8_t *)(entity_context + 0x1cf8) = 0;
    *puVar2 = 0;
  }
  
  // 处理实体交互和事件
  if (((render_flags & 1) == 0) && ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0)) {
    uVar8 = *(uint *)(in_stack_00000040 + 0x1a8);
    *(uint *)(in_stack_00000040 + 0x1a8) = uVar8 | 0x10;
    *(int32_t *)(in_stack_00000040 + 0x16c) = 1;
    *(int32_t *)(in_stack_00000040 + 0x170) = 2;
    if ((render_flags & 0x20) == 0) {
      uVar9 = get_entity_shader_params(in_stack_00000040,&GLOBAL_SHADER_ADDRESS_2,0);
      cVar3 = check_entity_visibility(uVar9,in_stack_00000040 + 0x40,0);
      if (cVar3 != '\0') {
        *(int8_t *)(in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(longlong *)(entity_position_ptr + 10) != 0) {
      fVar26 = *(float *)(entity_context + 0x19f8) * 0.5;
      uVar13 = calculate_screen_position(entity_position_ptr + -0x18,
                                   ((*(float *)(in_stack_00000040 + 0x48) +
                                    *(float *)(in_stack_00000040 + 0x40)) -
                                   *(float *)(entity_context + 0x165c)) - fVar26,
                                   *(float *)(in_stack_00000040 + 0x44) +
                                   *(float *)(entity_context + 0x1660) + fVar26);
      uVar9 = get_entity_shader_params(in_stack_00000040,&GLOBAL_SHADER_ADDRESS_3,0);
      cVar3 = check_entity_interaction(uVar9,uVar13);
      if (cVar3 != '\0') {
        **(int8_t **)(entity_position_ptr + 10) = 0;
      }
    }
    *(int32_t *)(in_stack_00000040 + 0x16c) = 0;
    *(int32_t *)(in_stack_00000040 + 0x170) = 1;
    *(uint *)(in_stack_00000040 + 0x1a8) = uVar8;
    fVar26 = directional_light;
    if ((render_flags & 0x100000) != 0) {
      uVar13 = CONCAT44(uVar4,0xbf800000);
      pfVar16 = (float *)get_entity_texture_coordinates(entity_position_ptr + -0x18,&GLOBAL_TEXTURE_ADDRESS,0,0,uVar13);
      uVar4 = (int32_t)((ulonglong)uVar13 >> 0x20);
      fVar26 = *pfVar16;
    }
    uVar13 = calculate_screen_position(entity_position_ptr + -0x18);
    uVar17 = get_entity_texture_coordinates(entity_position_ptr + -0xe,*(uint64_t *)(entity_position_ptr + 0x1e),0,1,
                           CONCAT44(uVar4,0xbf800000));
    calculate_world_position(&stack0x00000050,uVar17,uVar13);
    fVar23 = entity_position_ptr[-2];
    fVar25 = entity_position_ptr[-1];
    fVar22 = *entity_position_ptr;
    fVar27 = entity_position_ptr[1];
    entity_position_ptr[-0x1c] = fVar23;
    entity_position_ptr[-0x1b] = fVar25;
    entity_position_ptr[-0x1a] = fVar22;
    entity_position_ptr[-0x19] = fVar27;
    if ((render_flags & 0x20) == 0) {
      fVar24 = *(float *)(entity_context + 0x165c);
      fVar28 = fVar24 + *(float *)(entity_context + 0x19f8) + *(float *)(entity_context + 0x1674);
    }
    else {
      fVar24 = *(float *)(entity_context + 0x165c);
      fVar28 = fVar24;
    }
    lVar19 = *(longlong *)(entity_position_ptr + 10);
    if (lVar19 != 0) {
      fVar24 = fVar24 + *(float *)(entity_context + 0x19f8) + *(float *)(entity_context + 0x1674);
    }
    if (directional_light < *(float *)(entity_context + 0x1644)) {
      fVar24 = (float)get_render_time();
      fVar27 = entity_position_ptr[-0x19];
      fVar22 = entity_position_ptr[-0x1a];
      fVar25 = entity_position_ptr[-0x1b];
      fVar23 = entity_position_ptr[-0x1c];
    }
    entity_position_ptr[-7] = fVar25;
    entity_position_ptr[-5] = fVar27;
    entity_position_ptr[-0x1c] = fVar23 + fVar28;
    entity_position_ptr[-0x1a] = fVar22 - fVar24;
    entity_position_ptr[-8] = fVar23 + fVar28;
    entity_position_ptr[-6] = fVar22 - fVar24;
    if (lVar19 == 0) {
      fVar25 = *(float *)(entity_context + 0x165c);
    }
    else {
      fVar25 = (float)calculate_entity_depth(entity_position_ptr + -2);
      fVar25 = fVar25 - 3.0;
    }
    entity_position_ptr[-6] =
         (*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) - fVar25;
    render_entity_with_transform(entity_position_ptr + -0x1c,entity_position_ptr + -0x1a,*(uint64_t *)(entity_position_ptr + 0x1e),0,
                  &stack0x00000050);
    if ((render_flags & 0x100000) == 0) {
      entity_flags = 0;
    }
    else {
      uVar13 = calculate_screen_position(entity_position_ptr + -0x14,2.0 - fVar26);
      apply_entity_shader(entity_position_ptr + -0x1c);
      update_render_time();
      uVar17 = calculate_screen_position(entity_position_ptr + 0x18);
      calculate_world_position(entity_position_ptr + -0x18,uVar17,uVar13);
      calculate_screen_position(entity_position_ptr + -0xe);
      calculate_screen_position(entity_position_ptr + -0x14);
      uVar13 = calculate_world_position(entity_position_ptr + 0x18,entity_position_ptr + -0x1a,entity_position_ptr + -0xe);
      uVar17 = calculate_world_position(entity_position_ptr + 0x1c,entity_position_ptr + -0x18,entity_position_ptr + -0xe);
      entity_flags = 0;
      render_entity_with_transform(uVar17,uVar13,&GLOBAL_TEXTURE_ADDRESS,0,0);
    }
  }
  
  // 最终渲染状态更新
  *(short *)(in_stack_00000040 + 0x26a) = (short)entity_flags;
  *(short *)(in_stack_00000040 + 0x268) = (short)entity_flags;
  puVar10 = (uint64_t *)calculate_shadow_bounds(in_stack_00000040,entity_position_ptr + 0x20);
  uVar13 = puVar10[1];
  *(uint64_t *)(in_stack_00000040 + 0x238) = *puVar10;
  *(uint64_t *)(in_stack_00000040 + 0x240) = uVar13;
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) {
    fVar26 = (float)calculate_entity_distance();
    *(float *)(in_stack_00000040 + 0x23c) = fVar26 + *(float *)(in_stack_00000040 + 0x23c);
  }
  process_shadow_mapping(in_stack_00000040 + 0x238,in_stack_00000040 + 0x228);
  *(float *)(in_stack_00000040 + 0x248) = entity_position_ptr[-2] + *(float *)(in_stack_00000040 + 0x7c);
  if ((render_flags & 0x401) == 1) {
    pfVar12 = (float *)(in_stack_00000040 + 0x7c);
  }
  fVar26 = *pfVar12;
  fVar25 = (float)get_current_time();
  *(float *)(in_stack_00000040 + 0x24c) = fVar25 + entity_position_ptr[1] + fVar26;
  *(float *)(in_stack_00000040 + 0x250) =
       ((*(float *)(in_stack_00000040 + 0x48) + *(float *)(in_stack_00000040 + 0x40)) -
       *(float *)(in_stack_00000040 + 0xa4)) - *(float *)(in_stack_00000040 + 0x7c);
  *(float *)(in_stack_00000040 + 0x254) =
       ((*(float *)(in_stack_00000040 + 0x4c) + *(float *)(in_stack_00000040 + 0x44)) -
       *(float *)(in_stack_00000040 + 0xa8)) - *(float *)(in_stack_00000040 + 0x7c);
  fVar26 = (float)get_render_time();
  *(float *)(in_stack_00000040 + 600) =
       (float)(int)(fVar26 + *(float *)(in_stack_00000040 + 0x248) + 0.5);
  *(float *)(in_stack_00000040 + 0x25c) = (float)(int)(*(float *)(in_stack_00000040 + 0x24c) + 0.5);
  fVar26 = *(float *)(in_stack_00000040 + 0x250);
  fVar25 = (float)get_render_time();
  *(float *)(in_stack_00000040 + 0x260) = (float)(int)((fVar26 + 0.5) - fVar25);
  *(float *)(in_stack_00000040 + 0x264) = (float)(int)(*(float *)(in_stack_00000040 + 0x254) + 0.5);
  
  // 处理游戏逻辑触发器
  if ((*(byte *)(entity_context + 8) & 0x40) != 0) {
    if ((*(int *)(entity_context + 0x1b2c) == *(int *)(in_stack_00000040 + 0x84)) &&
       (((*(char *)(entity_context + 0xc1) == '\0' || (*(char *)(entity_context + 0x135) != '\0')) &&
        ((*(uint *)(*(longlong *)(in_stack_00000040 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      trigger_game_event();
    }
    if ((((*(char *)(entity_context + 0x1dd0) != '\0') && ((render_flags >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(entity_context + 0x1b78) == 0 ||
         (*(longlong *)(*(longlong *)(entity_context + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == *(longlong *)(in_stack_00000040 + 0x3a0) &&
        ((*(uint *)(in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      trigger_special_event();
    }
  }
  
  // 更新实体可见性状态
  if ((*(byte *)(in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 0x84);
    cVar3 = check_entity_visibility_state(entity_position_ptr + -2);
    fVar26 = entity_position_ptr[-0x10];
    *(uint *)(in_stack_00000040 + 0x148) = (uint)(cVar3 != '\0');
    uVar13 = *(uint64_t *)entity_position_ptr;
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(entity_position_ptr + -2);
    *(uint64_t *)(in_stack_00000040 + 0x154) = uVar13;
  }
  else {
    fVar26 = entity_position_ptr[-0x10];
    *(int32_t *)(in_stack_00000040 + 0x144) = *(int32_t *)(in_stack_00000040 + 8);
    *(int32_t *)(in_stack_00000040 + 0x148) = *(int32_t *)(in_stack_00000040 + 0x41c);
    *(uint64_t *)(in_stack_00000040 + 0x14c) = *(uint64_t *)(in_stack_00000040 + 0x420);
    *(uint64_t *)(in_stack_00000040 + 0x154) = *(uint64_t *)(in_stack_00000040 + 0x428);
  }
  fVar25 = in_stack_00000078;
  if ((render_flags >> 0x1d & 1) == 0) {
    setup_render_buffers(in_stack_00000040 + 600,in_stack_00000040 + 0x260,1);
  }
  if (fVar25 != fVar26) {
    *(int8_t *)(in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0xb8) = *(short *)(in_stack_00000040 + 0xb8) + 1;
  update_render_statistics(entity_context + 0x1bd0);
  
  // 处理实体状态标志
  if (((*(byte *)(in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)(in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  if ((render_flags >> 0x18 & 1) != 0) {
    if (((((render_flags & 0x40) == 0) && (*(int *)(in_stack_00000040 + 0xc4) < 1)) &&
        (*(int *)(in_stack_00000040 + 200) < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x240) < *(float *)(in_stack_00000040 + 0x238) ||
         *(float *)(in_stack_00000040 + 0x240) == *(float *)(in_stack_00000040 + 0x238) ||
        (*(float *)(in_stack_00000040 + 0x244) < *(float *)(in_stack_00000040 + 0x23c) ||
         *(float *)(in_stack_00000040 + 0x244) == *(float *)(in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
    if ((lVar11 != 0) && ((*(char *)(lVar11 + 0xb2) != '\0' || (*(char *)(lVar11 + 0xb6) != '\0'))))
    {
      *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
    }
  }
  if (*(float *)(entity_context + 0x1628) <= directional_light) {
    *(int32_t *)(in_stack_00000040 + 0xd8) = 1;
  }
  
  // 确定最终可见性状态
  if ((*(int *)(in_stack_00000040 + 0xd8) < 1) && (*(int *)(in_stack_00000040 + 0xdc) < 1)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(in_stack_00000040 + 0xb6) = cVar3;
  if (((((*(char *)(in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)(in_stack_00000040 + 0xaf) != '\0')) && (cVar3 == '\0')) ||
      ((0 < *(int *)(in_stack_00000040 + 0xc4) || (0 < *(int *)(in_stack_00000040 + 200))))) ||
     (0 < *(int *)(in_stack_00000040 + 0xdc))) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  *(int8_t *)(in_stack_00000040 + 0xb4) = uVar18;
  
  // 返回到渲染循环
  return_to_render_loop(*(ulonglong *)(entity_position_ptr + 0x24) ^ (ulonglong)&stack0x00000000);
}