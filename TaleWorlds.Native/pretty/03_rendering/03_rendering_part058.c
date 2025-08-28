#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part058.c - 8 个函数

// 函数: void render_advanced_data_processing_controller(void)
// 渲染系统高级数据处理和渲染控制模块
// 负责处理渲染数据的高级计算、纹理映射和渲染管线控制
void render_advanced_data_processing_controller(void)

{
  code *render_function_ptr;
  int64_t data_offset_1;
  int64_t data_offset_2;
  uint64_t render_context;
  char render_flag;
  int32_t texture_id_1;
  int32_t texture_id_2;
  uint vertex_count;
  int shader_param;
  int64_t render_state_ptr;
  int64_t unaff_RBX;
  uint64_t *vertex_buffer_ptr;
  int64_t camera_matrix_ptr;
  uint64_t render_flags;
  uint material_index;
  int light_param;
  uint64_t *texture_array_ptr;
  int64_t transform_matrix;
  int64_t viewport_width;
  int64_t viewport_height;
  uint64_t depth_buffer_ptr;
  int frame_buffer_id;
  float projection_matrix[16];
  float modelview_matrix[16];
  float texture_coords[8];
  float normal_vector[3];
  float tangent_vector[3];
  float bitangent_vector[3];
  float depth_value;
  float alpha_value;
  float ambient_light;
  float diffuse_light;
  float specular_light;
  float shininess_value;
  float shadow_intensity;
  float fog_density;
  float reflection_coefficient;
  uint64_t render_target;
  uint64_t shader_program;
  uint64_t texture_handle;
  int32_t render_mode;
  float depth_bias;
  int blend_mode;
  float stencil_ref;
  float alpha_test;
  uint color_mask;
  float viewport_scale;
  int64_t uniform_buffer;
  float clip_plane_near;
  float clip_plane_far;
  uint64_t render_state_flags;
  
  // 渲染数据处理变量
  uint64_t render_data_block_1;
  int32_t render_data_block_2;
  float render_scale_factor;
  uint64_t hash_value;
  uint64_t combined_data;
  uint64_t render_param_1;
  uint64_t render_param_2;
  uint64_t render_data_block_3;
  int render_index;
  int render_state_index;
  int64_t render_context_ptr;
  int render_limit;
  int render_max_index;
  int render_index_limit;
  int frame_count;
  
  // 渲染上下文变量
  int64_t render_resource_handle;
  int render_context_id;
  int64_t render_texture_handle;
  char render_context_flag;
  float render_interpolation_value;
  float render_clamped_value;
  
  // 初始化渲染管线状态
  render_flag = FUN_180128040(&texture_handle,&render_mode,1);
  texture_id_2 = (int32_t)((uint64_t)render_target >> 0x20);
  if (render_flag != '\0') {
    *(uint *)(viewport_width + 0x148) = *(uint *)(viewport_width + 0x148) | 1;
  }
  // 获取渲染参数
  ambient_light = *(float *)(camera_matrix_ptr + 0xd0);
  frame_buffer_id = *(int *)(camera_matrix_ptr + 200);
  render_function_ptr = *(code **)(camera_matrix_ptr + 0xb8);
  diffuse_light = *(float *)(camera_matrix_ptr + 0xd8);
  // 计算光照范围
  if ((ambient_light == fog_density) || (diffuse_light == fog_density)) {
    specular_light = -3.4028235e+38; // 最小浮点数
    texture_coords[0] = fog_density;
    if (0 < (int)depth_buffer_ptr) {
      texture_array_ptr = *(uint64_t **)(camera_matrix_ptr + 0xc0);
      render_flags = depth_buffer_ptr;
      do {
        shader_param = 0;
        if (0 < frame_buffer_id) {
          do {
            modelview_matrix[0] = (float)(*render_function_ptr)(*texture_array_ptr,shader_param);
            if (modelview_matrix[0] <= texture_coords[0]) {
              texture_coords[0] = modelview_matrix[0];
            }
            if (specular_light < modelview_matrix[0]) {
              specular_light = modelview_matrix[0];
            }
            shader_param = shader_param + 1;
          } while (shader_param < frame_buffer_id);
        }
        texture_id_2 = (int32_t)((uint64_t)render_target >> 0x20);
        texture_array_ptr = texture_array_ptr + 1;
        render_flags = render_flags - 1;
        transform_matrix = SYSTEM_DATA_MANAGER_A;
        viewport_height = uniform_buffer;
      } while (render_flags != 0);
    }
    // 更新光照参数
    if (fVar25 == unaff_XMM10_Da) {
      *(float *)(unaff_RBP + 0xd0) = fVar18;
      fVar25 = fVar18;
    }
    if (fVar26 == unaff_XMM10_Da) {
      fVar26 = fVar24;
    }
  }
  // 处理渲染数据结构
  render_data_block_1 = *(uint64_t *)(unaff_RBX + 0x1738);
  render_data_block_2 = *(int32_t *)(unaff_RBX + 0x1740);
  render_scale_factor = *(float *)(unaff_RBX + 0x1744) * *(float *)(unaff_RBX + 0x1628);
  hash_value = func_0x000180121e20(&stack0x00000040);
  combined_data = CONCAT44(uVar7,*(int32_t *)(in_R11 + 0x1664));
  FUN_180122960(CONCAT44(render_param_1,render_param_2),render_data_block_3,hash_value,1,
                combined_data);
  render_index = frame_count + -1;
  render_state_index = -1;
  render_context_ptr = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  render_limit = frame_count;
  if ((int)unaff_XMM11_Da < frame_count) {
    render_limit = (int)unaff_XMM11_Da;
  }
  render_max_index = render_limit - 1;
  render_index_limit = render_max_index;
  // 检查渲染状态标志
  if ((*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d07) == '\0') || (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1d06) != '\0'))
  {
    // 验证渲染上下文状态
    if ((((((*(byte *)(render_context_ptr + 0x148) & 1) == 0) ||
          (render_resource_handle = *(int64_t *)(render_context_ptr + 0x3a0), 
           *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b08) != render_resource_handle))
         || ((((render_context_id = *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c), render_context_id != 0 &&
               (render_context_id != *(int *)(render_context_ptr + 0x144))) && 
              (*(char *)(SYSTEM_DATA_MANAGER_A + 0x1b3d) == '\0')
              ) && (render_context_id != *(int *)(render_context_ptr + 0x84))))) ||
        (((((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) != 0 &&
            (render_texture_handle = *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c98) + 0x3a0), 
             render_texture_handle != 0)) &&
           (*(char *)(render_texture_handle + 0xb0) != '\0')) &&
          ((render_texture_handle != render_resource_handle &&
           (((*(uint *)(render_texture_handle + 0xc) >> 0x1b & 1) != 0 ||
            ((*(uint *)(render_texture_handle + 0xc) >> 0x1a & 1) != 0)))))) ||
         ((*(int64_t *)(render_context_ptr + 0x28) != *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1c80) &&
          ((*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78) == 0 ||
           (render_resource_handle != *(int64_t *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1b78) + 0x3a0))))))))) ||
       ((*(byte *)(render_context_ptr + 0x1a8) & 4) != 0)) goto LAB_180299abc;
    if ((*(int *)(render_context_ptr + 0x144) == *(int *)(render_context_ptr + 8)) ||
       (*(int *)(render_context_ptr + 0x144) == *(int *)(render_context_ptr + 0x84))) {
      render_context_flag = *(char *)(render_context_ptr + 0xb1);
      goto joined_r0x0001802999aa;
    }
  }
  else {
    if ((*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) == 0) ||
       (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1ca0) != *(int *)(render_context_ptr + 0x144))) goto LAB_180299abc;
    if (*(int *)(render_context_ptr + 0x144) == *(int *)(render_context_ptr + 8)) {
      render_context_flag = *(char *)(render_context_ptr + 0xb1);
joined_r0x0001802999aa:
      if (render_context_flag != '\0') goto LAB_180299abc;
    }
  }
  // 计算渲染插值参数
  render_interpolation_value = (*(float *)(render_data_block_3 + 0x118) - unaff_XMM12_Da) /
           (unaff_XMM15_Da - unaff_XMM12_Da);
  render_clamped_value = unaff_XMM7_Da;
  if ((unaff_XMM7_Da <= render_interpolation_value) && (render_clamped_value = render_interpolation_value, 0.9999 <= render_interpolation_value)) {
    render_clamped_value = 0.9999;
  }
  render_index = (int)((float)render_index * render_clamped_value);
  render_state_index = render_index;
  FUN_18012e810();
  FUN_18010f010(&unknown_var_728_ptr,render_index);
  if (0 < (int64_t)unaff_R14) {
    puVar10 = *(uint64_t **)(unaff_RBP + 0xc0);
    *(int64_t *)(unaff_RBP + 0xa8) = *(int64_t *)(unaff_RBP + 0xa8) - (int64_t)puVar10;
    lVar15 = *(int64_t *)(unaff_RBP + 0xa8);
    puVar14 = *(uint64_t **)(unaff_RBP + 0xb0);
    do {
      fVar24 = (float)(*pcVar1)(*puVar10,(int64_t)iVar9 % (int64_t)iVar16 & 0xffffffff);
      fVar18 = (float)(*pcVar1)(*puVar10,(int64_t)(iVar9 + 1) % (int64_t)iVar16 & 0xffffffff);
      in_stack_00000040 = *puVar14;
      in_stack_00000048 = *(int32_t *)(puVar14 + 1);
      fStack000000000000004c = *(float *)((int64_t)puVar14 + 0xc);
      uVar27 = *(uint64_t *)(lVar15 + (int64_t)puVar10);
      FUN_18010f0d0(&stack0x00000040,&unknown_var_744_ptr,(double)fVar24,(double)fVar18,uVar27);
      puVar14 = puVar14 + 2;
      puVar10 = puVar10 + 1;
      unaff_R14 = unaff_R14 - 1;
    } while (unaff_R14 != 0);
    iVar16 = *(int *)(unaff_RBP + 200);
    uVar12 = uStack000000000000005c;
  }
  FUN_18012cfe0();
  unaff_R14 = (uint64_t)*(uint *)(unaff_RBP + 0xa0);
  iVar9 = iVar16 + -1;
LAB_180299abc:
  if (0 < (int)unaff_R14) {
    uVar11 = unaff_R14 & 0xffffffff;
    puVar14 = *(uint64_t **)(unaff_RBP + 0xc0);
    fVar26 = 1.0 / (fVar26 - fVar25);
    in_stack_00000060 = 1.0 / (float)(int)uVar12;
    in_stack_00000058 = fVar26;
    do {
      in_stack_00000040 = uVar11;
      fVar24 = (float)(*pcVar1)(*puVar14,0);
      fVar18 = (fVar24 - fVar25) * fVar26;
      fVar24 = unaff_XMM7_Da;
      if ((unaff_XMM7_Da <= fVar18) && (fVar24 = fVar18, 1.0 <= fVar18)) {
        fVar24 = 1.0;
      }
      lVar15 = *(int64_t *)(unaff_RBP + 0xb0);
      fVar24 = 1.0 - fVar24;
      fStack0000000000000054 = unaff_XMM7_Da;
      uVar7 = func_0x000180121e20(lVar15);
      *(int32_t *)(unaff_RBP + -0x78) = uVar7;
      uVar8 = func_0x000180121e20();
      fVar22 = 1.0 - (float)(uVar8 >> 8 & 0xff) * 0.003921569;
      fVar17 = (float)(uVar8 >> 0x18) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628) * 0.003921569;
      fVar21 = 1.0 - (float)(uVar8 >> 0x10 & 0xff) * 0.003921569;
      fVar23 = 1.0 - (float)(uVar8 & 0xff) * 0.003921569;
      fVar18 = unaff_XMM7_Da;
      if ((unaff_XMM7_Da <= fVar23) && (fVar18 = fVar23, 1.0 <= fVar23)) {
        fVar18 = 1.0;
      }
      fVar23 = unaff_XMM7_Da;
      if ((unaff_XMM7_Da <= fVar22) && (fVar23 = fVar22, 1.0 <= fVar22)) {
        fVar23 = 1.0;
      }
      fVar22 = unaff_XMM7_Da;
      if ((unaff_XMM7_Da <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
        fVar22 = 1.0;
      }
      fVar21 = unaff_XMM7_Da;
      if ((unaff_XMM7_Da <= fVar17) && (fVar21 = fVar17, 1.0 <= fVar17)) {
        fVar21 = 1.0;
      }
      if (0 < (int)uVar12) {
        fVar26 = *(float *)(unaff_RBP + -0x80) - *(float *)(unaff_RBP + 0x98);
        fVar17 = *(float *)(unaff_RBP + -0x7c) - *(float *)(unaff_RBP + 0x90);
        uVar8 = *(uint *)(unaff_RBP + -0x78);
        uVar11 = (uint64_t)uVar12;
        fVar25 = unaff_XMM7_Da;
        do {
          uVar7 = (int32_t)((uint64_t)uVar27 >> 0x20);
          fVar19 = (float)iVar9 * fVar25;
          fVar25 = fVar25 + in_stack_00000060;
          iVar13 = (int)(fVar19 + 0.5);
          fVar19 = (float)(*pcVar1)(*puVar14,(int64_t)(iVar13 + 1) % (int64_t)iVar16 & 0xffffffff)
          ;
          fVar20 = (fVar19 - *(float *)(unaff_RBP + 0xd0)) * in_stack_00000058;
          fVar19 = unaff_XMM7_Da;
          if ((unaff_XMM7_Da <= fVar20) && (fVar19 = fVar20, 1.0 <= fVar20)) {
            fVar19 = 1.0;
          }
          fStack0000000000000074 = fVar24 * fVar17;
          fVar24 = 1.0 - fVar19;
          uVar27 = CONCAT44(uVar7,0x3f800000);
          uVar12 = uVar8;
          if (iStack0000000000000050 == iVar13) {
            uVar12 = (int)(fVar21 * 255.0 + 0.5) << 0x18 |
                     (int)(fVar18 * 255.0 + 0.5) | (int)(fVar23 * 255.0 + 0.5) << 8 |
                     (int)(fVar22 * 255.0 + 0.5) << 0x10;
          }
          fStack0000000000000074 = fStack0000000000000074 + *(float *)(unaff_RBP + 0x90);
          uVar4 = *(uint64_t *)(*(int64_t *)(unaff_RBP + -0x68) + 0x2e8);
          fStack0000000000000070 = fStack0000000000000054 * fVar26 + *(float *)(unaff_RBP + 0x98);
          *(float *)(unaff_RBP + -0x6c) = fVar24 * fVar17 + *(float *)(unaff_RBP + 0x90);
          *(float *)(unaff_RBP + -0x70) = fVar25 * fVar26 + *(float *)(unaff_RBP + 0x98);
          FUN_180293d20(uVar4,&stack0x00000070,unaff_RBP + -0x70,uVar12,uVar27);
          uVar11 = uVar11 - 1;
          fStack0000000000000054 = fVar25;
        } while (uVar11 != 0);
        fVar25 = *(float *)(unaff_RBP + 0xd0);
        lVar15 = *(int64_t *)(unaff_RBP + 0xb0);
        uVar11 = in_stack_00000040;
        fVar26 = in_stack_00000058;
        uVar12 = uStack000000000000005c;
      }
      iVar9 = iVar16 + -1;
      puVar14 = puVar14 + 1;
      *(int64_t *)(unaff_RBP + 0xb0) = lVar15 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    unaff_XMM13_Da = *(float *)(unaff_RBP + -0x74);
    in_stack_00000040 = 0;
  }
  FUN_180122320(CONCAT44(*(int32_t *)(unaff_RBP + 0x90),
                         unaff_XMM13_Da + *(float *)(in_stack_00000068 + 0x1674)),&system_buffer_ptr,0,1
               );
  return;
}





// 函数: void render_empty_function_1(void)
// 渲染系统空函数1 - 占位符函数
void render_empty_function_1(void)

{
  return;
}





// 函数: void render_empty_function_2(void)
// 渲染系统空函数2 - 占位符函数
void render_empty_function_2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void render_resource_manager_process(int64_t resource_pool,int64_t context_id,int64_t *resource_data,int8_t *status_flag)
// 渲染资源管理器处理函数 - 管理渲染资源的分配、释放和状态跟踪
void render_resource_manager_process(int64_t resource_pool,int64_t context_id,int64_t *resource_data,int8_t *status_flag)

{
  int64_t **resource_pool_ptr;
  int resource_type;
  int64_t resource_handle;
  bool is_critical;
  char operation_status;
  uint resource_flags;
  int mutex_result;
  uint64_t resource_hash;
  int64_t table_size;
  int64_t bucket_index;
  int64_t *hash_entry;
  void *resource_data_ptr;
  char cache_status;
  uint resource_size;
  uint64_t texture_handle;
  int8_t resource_buffer[32];
  char key_buffer[8];
  int64_t *resource_entry;
  int64_t **global_pool_ptr;
  int8_t lock_acquired;
  int8_t *status_output;
  int64_t *current_resource;
  uint64_t resource_key;
  uint64_t resource_metadata;
  int64_t temp_array[12];
  int8_t texture_data[32];
  int8_t shader_data[32];
  int32_t texture_width;
  int32_t texture_height;
  uint resource_format;
  int64_t *vertex_buffer;
  int8_t mesh_data[96];
  int8_t material_data[32];
  int8_t light_data[32];
  int32_t light_intensity;
  int32_t light_color;
  uint light_type;
  uint64_t resource_id;
  
  // 初始化资源管理器状态
  resource_metadata = 0xfffffffffffffffe;
  resource_id = GET_SECURITY_COOKIE() ^ (uint64_t)resource_buffer;
  status_output = status_flag;
  vertex_buffer = resource_data;
  resource_hash = FUN_180241250(*resource_data);
  resource_data[1] = resource_data[1] & ~resource_hash;
  resource_handle = *resource_data;
  resource_type = (int)resource_data[3];
  acStack_208[0] = '\0';
  pplStack_1f8 = (int64_t **)0x180c91dc8;
  uStack_1f0 = 1;
  AcquireSRWLockShared(0x180c91dc8);
  plStack_1d8 = (int64_t *)param_3[1];
  uVar8 = param_3[2];
  lVar10 = *(int64_t *)(param_1 + 8);
  plVar11 = *(int64_t **)
             (lVar10 + (((uVar8 & 0xffffffff) + (int64_t)plStack_1d8) %
                       (uint64_t)*(uint *)(param_1 + 0x10)) * 8);
  if (plVar11 != (int64_t *)0x0) {
    uStack_1d0._4_2_ = (short)(uVar8 >> 0x20);
    do {
      if ((((int64_t *)*plVar11 == plStack_1d8) && ((int)plVar11[1] == (int)uVar8)) &&
         (*(short *)((int64_t)plVar11 + 0xc) == uStack_1d0._4_2_)) {
        lVar9 = *(int64_t *)(param_1 + 0x10);
        goto LAB_180299f92;
      }
      plVar11 = (int64_t *)plVar11[3];
    } while (plVar11 != (int64_t *)0x0);
  }
  lVar9 = *(int64_t *)(param_1 + 0x10);
  plVar11 = *(int64_t **)(lVar10 + lVar9 * 8);
LAB_180299f92:
  if (plVar11 == *(int64_t **)(lVar10 + lVar9 * 8)) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar11[2];
  }
  uStack_1d0 = uVar8;
  ReleaseSRWLockShared(0x180c91dc8);
  cVar13 = '\0';
  if (lVar10 == 0) {
    pplStack_1f8 = (int64_t **)0x180c91dc8;
    uStack_1f0 = 0;
    AcquireSRWLockExclusive(0x180c91dc8);
    uStack_1f0 = 1;
    plStack_1d8 = (int64_t *)param_3[1];
    uStack_1d0 = param_3[2];
    lVar10 = FUN_18029a790(param_1,&plStack_1d8,acStack_208);
    ReleaseSRWLockExclusive(0x180c91dc8);
    cVar13 = acStack_208[0];
  }
  *puStack_1e8 = 0;
  if (*(char *)(lVar10 + 0x81) == '\0') {
    if (cVar13 != '\0') {
      uVar6 = *(uint *)(lVar3 + 0x1588) >> 6;
      *(byte *)(lVar10 + 0x80) = (byte)uVar6 & 1;
      uVar14 = 0x11;
      if ((uVar6 & 1) != 0) {
        uVar14 = 0x20;
      }
      uVar8 = *(uint64_t *)(lVar3 + 0x15c0);
      if (uVar8 == 0xffffffffffffffff) {
        FUN_180240b30(lVar3);
        uVar8 = *(uint64_t *)(lVar3 + 0x15c0);
      }
      if ((*(int *)(SYSTEM_STATE_MANAGER + 0xa80) != 0) && ((param_3[1] & uVar8 & 0xffffffff) != 0)) {
        uVar14 = uVar14 | 6;
      }
      uVar6 = *(uint *)(lVar3 + 0x1588);
      FUN_1801eb9b0(auStack_108);
      uVar15 = FUN_18029a300(auStack_108,param_3);
      uStack_60 = uVar14 | 8;
      if ((uVar6 >> 9 & 1) == 0) {
        uStack_60 = uVar14;
      }
      if ((*(int *)(system_module_state + 0x620) == 0) &&
         (*(char *)((int64_t)system_global_data_ptr + 10) == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      cVar5 = FUN_1801d8920(uVar15,auStack_108);
      if ((cVar5 == '\0') && (system_memory_2846 == '\0')) {
        puVar12 = &system_buffer_ptr;
        if (*(void **)(*param_3 + 0x18) != (void *)0x0) {
          puVar12 = *(void **)(*param_3 + 0x18);
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(system_message_context,&unknown_var_776_ptr,puVar12);
      }
      if ((iVar2 == 2) || (*system_global_data_ptr != 0)) {
        pplVar1 = (int64_t **)(lVar10 + 0x30);
        pplStack_1f8 = pplVar1;
        iVar7 = _Mtx_lock(pplVar1);
        if (iVar7 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar7);
        }
        plStack_1d8 = alStack_1c0;
        FUN_18009e8e0(alStack_1c0,auStack_108);
        FUN_180627ae0(auStack_160,auStack_a8);
        uVar15 = FUN_180627ae0(auStack_140,auStack_88);
        uStack_120 = uStack_68;
        uStack_11c = uStack_64;
        uStack_118 = uStack_60;
        FUN_1801c8b50(uVar15,lVar10,alStack_1c0);
        iVar7 = _Mtx_unlock(pplVar1);
        if (iVar7 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar7);
        }
      }
      else {
        uVar15 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,3);
        plVar11 = (int64_t *)FUN_18041bf60(uVar15,lVar10,auStack_108);
        plStack_1d8 = plVar11;
        if (plVar11 != (int64_t *)0x0) {
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        uVar15 = system_context_ptr;
        pplStack_1f8 = &plStack_200;
        plStack_200 = plVar11;
        if (bVar4) {
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x28))(plVar11);
          }
          FUN_18005e110(uVar15,&plStack_200);
        }
        else {
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x28))(plVar11);
          }
          FUN_18005e450(uVar15,&plStack_200);
        }
        if (plVar11 != (int64_t *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11);
        }
      }
      FUN_1801c92a0(auStack_108);
    }
    if (iVar2 == 0) {
      *puStack_1e8 = 1;
      if (param_2 != 0) {
        *(int *)(param_2 + 0x124ec) = *(int *)(param_2 + 0x124ec) + 1;
      }
      FUN_18009e960(param_3);
      goto LAB_18029a2da;
    }
    if (iVar2 == 1) {
      if (param_2 != 0) {
        *(int *)(param_2 + 0x124ec) = *(int *)(param_2 + 0x124ec) + 1;
      }
    }
    else if (((iVar2 == 2) && (cVar13 == '\0')) && (*(char *)(lVar10 + 0x81) == '\0')) {
      FUN_1801d7510(system_global_data_ptr);
    }
  }
  FUN_18009e960(param_3);
LAB_18029a2da:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_228);
}



uint64_t *
render_data_structure_copy(uint64_t *dest_buffer,uint64_t *src_buffer,uint64_t param_3,uint64_t param_4)
// 渲染数据结构复制函数 - 在渲染系统之间复制数据结构

{
  int64_t *src_resource;
  int64_t *dest_resource;
  int32_t texture_id;
  int32_t shader_id;
  int32_t material_id;
  uint64_t copy_flags;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = *param_2;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar4 = *(int32_t *)(param_2 + 2);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x14);
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((int64_t)param_1 + 0xc) = uVar3;
  *(int32_t *)(param_1 + 2) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x14) = uVar5;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 3);
  plVar1 = (int64_t *)param_2[4];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[4];
  param_1[4] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  FUN_180627be0(param_1 + 5,param_2 + 5,param_3,param_4,uVar6);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x4c);
  uVar4 = *(int32_t *)(param_2 + 10);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x54);
  *(int32_t *)(param_1 + 9) = *(int32_t *)(param_2 + 9);
  *(int32_t *)((int64_t)param_1 + 0x4c) = uVar3;
  *(int32_t *)(param_1 + 10) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x54) = uVar5;
  plVar1 = (int64_t *)param_2[0xb];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[0xb];
  param_1[0xb] = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



uint64_t * render_mutex_initialize(uint64_t *mutex_data)
// 渲染互斥锁初始化函数 - 初始化渲染线程同步所需的互斥锁

{
  // 初始化互斥锁结构
  _Mtx_init_in_situ();
  mutex_data[0x11] = &system_state_ptr;
  mutex_data[0x12] = 0;
  *(int32_t *)(mutex_data + 0x13) = 0;
  mutex_data[0x11] = &unknown_var_3432_ptr;
  mutex_data[0x12] = mutex_data + 0x14;
  *(int32_t *)(mutex_data + 0x13) = 0;
  *(int8_t *)(mutex_data + 0x14) = 0;
  *(int16_t *)(mutex_data + 0x10) = 0;
  *mutex_data = 0;
  mutex_data[1] = 0;
  mutex_data[2] = 0;
  mutex_data[3] = 0;
  mutex_data[4] = 0;
  mutex_data[5] = 0;
  return mutex_data;
}





// 函数: void render_memory_cleanup(int64_t *memory_pool)
// 渲染内存清理函数 - 清理渲染系统分配的内存资源
void render_memory_cleanup(int64_t *memory_pool)

{
  int64_t memory_block;
  
  // 清理纹理内存块
  memory_block = *memory_pool;
  if (memory_block != 0) {
    *(uint64_t *)(memory_block + 0x28) = 0xdeadbeef;
    *(int32_t *)(memory_block + 0x10) = 0;
    *(uint64_t *)(memory_block + 0x18) = 0;
    memset(memory_block + 0x48,0,0x70);
  }
  // 清理着色器内存块
  memory_block = memory_pool[1];
  if (memory_block != 0) {
    *(uint64_t *)(memory_block + 0x28) = 0xdeadbeef;
    *(int32_t *)(memory_block + 0x10) = 0;
    *(uint64_t *)(memory_block + 0x18) = 0;
    memset(memory_block + 0x48,0,0x70);
  }
  // 清理材质内存块
  memory_block = memory_pool[2];
  if (memory_block != 0) {
    *(uint64_t *)(memory_block + 0x28) = 0xdeadbeef;
    *(int32_t *)(memory_block + 0x10) = 0;
    *(uint64_t *)(memory_block + 0x18) = 0;
    memset(memory_block + 0x48,0,0x70);
  }
  // 清理顶点缓冲区内存块
  memory_block = memory_pool[5];
  if (memory_block != 0) {
    *(uint64_t *)(memory_block + 0x28) = 0xdeadbeef;
    *(int32_t *)(memory_block + 0x10) = 0;
    *(uint64_t *)(memory_block + 0x18) = 0;
    memset(memory_block + 0x48,0,0x70);
  }
  // 清理索引缓冲区内存块
  memory_block = memory_pool[4];
  if (memory_block != 0) {
    *(uint64_t *)(memory_block + 0x28) = 0xdeadbeef;
    *(int32_t *)(memory_block + 0x10) = 0;
    *(uint64_t *)(memory_block + 0x18) = 0;
    memset(memory_block + 0x48,0,0x70);
  }
  // 清理帧缓冲区内存块
  memory_block = memory_pool[3];
  if (memory_block != 0) {
    *(uint64_t *)(memory_block + 0x28) = 0xdeadbeef;
    *(int32_t *)(memory_block + 0x10) = 0;
    *(uint64_t *)(memory_block + 0x18) = 0;
    memset(memory_block + 0x48,0,0x70);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *param_1 = 0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[2] = 0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[4] = 0;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(int8_t *)((int64_t)param_1 + 0x81) = 0;
  param_1[3] = 0;
  return;
}



uint64_t render_cache_clear(int64_t cache_manager)
// 渲染缓存清理函数 - 清理渲染系统的各种缓存

{
  int64_t *cache_ptr;
  uint64_t cache_index;
  int64_t cache_entry;
  int64_t *cache_bucket;
  int64_t cache_size;
  uint64_t bucket_count;
  
  AcquireSRWLockExclusive(0x180c91dc8);
  plVar1 = *(int64_t **)(param_1 + 8);
  lVar5 = *plVar1;
  plVar4 = plVar1;
  if (lVar5 == 0) {
    plVar4 = plVar1 + 1;
    lVar5 = *plVar4;
    while (lVar5 == 0) {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
    }
  }
  if (lVar5 != plVar1[*(int64_t *)(param_1 + 0x10)]) {
    do {
      if (*(int64_t *)(lVar5 + 0x10) != 0) {
        FUN_18029a450();
      }
      lVar5 = *(int64_t *)(lVar5 + 0x18);
      while (lVar5 == 0) {
        plVar4 = plVar4 + 1;
        lVar5 = *plVar4;
      }
    } while (lVar5 != *(int64_t *)(*(int64_t *)(param_1 + 8) + *(int64_t *)(param_1 + 0x10) * 8))
    ;
  }
  uVar6 = 0;
  *(uint64_t *)(param_1 + 0x20) = 0x400000003f800000;
  *(int32_t *)(param_1 + 0x28) = 0;
  lVar5 = *(int64_t *)(param_1 + 8);
  *(void **)(param_1 + 8) = &system_memory_0000;
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (uVar2 != 0) {
    do {
      lVar3 = *(int64_t *)(lVar5 + uVar6 * 8);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar3);
      }
      *(uint64_t *)(lVar5 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  if ((1 < uVar2) && (lVar5 != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar5);
  }
  ReleaseSRWLockExclusive(0x180c91dc8);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t render_hash_table_lookup(int64_t hash_table,int64_t *key_data,int8_t *found_flag)
// 渲染哈希表查找函数 - 在哈希表中查找指定的键值

{
  uint table_size;
  int64_t *hash_entry;
  uint64_t memory_pool;
  int64_t table_base;
  int64_t bucket_index;
  int64_t temp_array[4];
  
  uVar3 = system_memory_pool_ptr;
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  plVar2 = *(int64_t **)
            (lVar4 + (((uint64_t)*(uint *)(param_2 + 1) + *param_2) % (uint64_t)uVar1) * 8);
  do {
    if (plVar2 == (int64_t *)0x0) {
      lVar5 = *(int64_t *)(param_1 + 0x10);
      plVar2 = *(int64_t **)(lVar4 + lVar5 * 8);
LAB_18029a7f6:
      if (plVar2 == *(int64_t **)(lVar4 + lVar5 * 8)) {
        *param_3 = 1;
        uVar3 = FUN_18062b1e0(uVar3,0x120,8,CONCAT71((uint7)(uint3)(uVar1 >> 8),0x11));
        lVar4 = FUN_18029a3c0(uVar3);
        FUN_18029a870(param_1,alStack_28);
        *(int64_t *)(alStack_28[0] + 0x10) = lVar4;
      }
      else {
        *param_3 = 0;
        lVar4 = plVar2[2];
      }
      return lVar4;
    }
    if (((*plVar2 == *param_2) && (*(uint *)(plVar2 + 1) == *(uint *)(param_2 + 1))) &&
       (*(short *)((int64_t)plVar2 + 0xc) == *(short *)((int64_t)param_2 + 0xc))) {
      lVar5 = *(int64_t *)(param_1 + 0x10);
      goto LAB_18029a7f6;
    }
    plVar2 = (int64_t *)plVar2[3];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
render_hash_table_insert(int64_t hash_table,uint64_t *result_buffer,uint64_t param_3,int64_t *key_data,
             uint64_t hash_value)
// 渲染哈希表插入函数 - 向哈希表中插入新的键值对

{
  int64_t table_base;
  uint64_t bucket_index;
  int32_t key_part1;
  int32_t key_part2;
  int32_t *new_entry;
  uint64_t entry_data;
  int64_t *existing_entry;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  plVar7 = *(int64_t **)(lVar1 + uVar2 * 8);
  if (plVar7 != (int64_t *)0x0) {
    do {
      if (((*plVar7 == *param_4) && ((int)plVar7[1] == (int)param_4[1])) &&
         (*(short *)((int64_t)plVar7 + 0xc) == *(short *)((int64_t)param_4 + 0xc))) {
        *param_2 = plVar7;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar7 = (int64_t *)plVar7[3];
    } while (plVar7 != (int64_t *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  puVar5 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x20,*(int8_t *)(param_1 + 0x2c));
  uVar3 = *(int32_t *)((int64_t)param_4 + 4);
  lVar1 = param_4[1];
  uVar4 = *(int32_t *)((int64_t)param_4 + 0xc);
  *puVar5 = (int)*param_4;
  puVar5[1] = uVar3;
  puVar5[2] = (int)lVar1;
  puVar5[3] = uVar4;
  *(uint64_t *)(puVar5 + 4) = 0;
  *(uint64_t *)(puVar5 + 6) = 0;
  if ((char)param_5 != '\0') {
    uVar6 = FUN_18062b1e0(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar6,0,(uint64_t)param_5._4_4_ * 8);
  }
  *(uint64_t *)(puVar5 + 6) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int32_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = puVar5;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = puVar5;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void render_hash_table_add(uint64_t hash_table,uint64_t result_buffer,uint64_t param_3,uint64_t param_4)
// 渲染哈希表添加函数 - 添加新的条目到哈希表
void render_hash_table_add(uint64_t hash_table,uint64_t result_buffer,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  int32_t *unaff_RBX;
  int64_t unaff_RDI;
  int32_t in_R10D;
  int64_t unaff_R12;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,in_R10D,param_4,1);
  puVar5 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x20,*(int8_t *)(unaff_RDI + 0x2c));
  uVar2 = unaff_RBX[1];
  uVar3 = unaff_RBX[2];
  uVar4 = unaff_RBX[3];
  *puVar5 = *unaff_RBX;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(uint64_t *)(puVar5 + 4) = 0;
  *(uint64_t *)(puVar5 + 6) = 0;
  if (cStack0000000000000080 != '\0') {
    uVar6 = FUN_18062b1e0(system_memory_pool_ptr,(uint64_t)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar6,0,(uint64_t)uStack0000000000000084 * 8);
  }
  *(uint64_t *)(puVar5 + 6) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R12 * 8);
  *(int32_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R12 * 8) = puVar5;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar5;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void render_pointer_assign(uint64_t target_ptr,uint64_t source_ptr,uint64_t param_3)
// 渲染指针赋值函数 - 为渲染相关的指针结构赋值
void render_pointer_assign(uint64_t target_ptr,uint64_t source_ptr,uint64_t param_3)

{
  uint64_t *unaff_R15;
  
  *unaff_R15 = param_1;
  unaff_R15[1] = param_3;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void render_hash_table_resize(uint64_t new_size)
// 渲染哈希表调整大小函数 - 调整哈希表的大小以优化性能
void render_hash_table_resize(uint64_t new_size)

{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R13 + 0x18) = *(uint64_t *)(unaff_R14 + unaff_R12 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R12 * 8) = unaff_R13;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R13;
  unaff_R15[1] = lVar1 + unaff_R12 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





