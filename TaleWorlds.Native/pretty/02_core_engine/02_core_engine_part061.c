#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part061.c - 核心引擎模块第061部分
// 包含4个函数：渲染状态管理、内存清理、渲染资源分配和场景渲染

// 函数: void process_render_state(int64_t render_context, int64_t scene_data)
// 功能：处理渲染状态和场景渲染
void process_render_state(int64_t render_context, int64_t scene_data)

{
  // 渲染状态变量
  int32_t render_flag1;
  int32_t render_flag2;
  ushort texture_index;
  code *render_function;
  int *object_count;
  int32_t shader_param1;
  int32_t shader_param2;
  int32_t shader_param3;
  int32_t shader_param4;
  int32_t shader_param5;
  int32_t shader_param6;
  int32_t shader_param7;
  int32_t shader_param8;
  int32_t shader_param9;
  int32_t shader_param10;
  int32_t shader_param11;
  int32_t shader_param12;
  int32_t shader_param13;
  int32_t shader_param14;
  int32_t shader_param15;
  int32_t shader_param16;
  
  // 场景数据指针
  int64_t scene_data_ptr;
  int64_t *object_array_ptr;
  int64_t *render_queue_ptr;
  uint64_t texture_handle;
  int32_t render_state;
  int64_t *material_ptr;
  int32_t *vertex_buffer_ptr;
  int64_t vertex_count;
  int triangle_count;
  int64_t render_distance;
  int64_t object_offset;
  int32_t *index_buffer_ptr;
  int64_t buffer_size;
  int32_t *texture_coords_ptr;
  uint vertex_index;
  int64_t frame_counter;
  int object_index;
  uint texture_width;
  uint texture_height;
  uint *shader_program_ptr;
  uint render_mode;
  uint64_t matrix_data;
  
  // 栈变量
  int8_t transform_matrix [32];
  code *callback_function;
  int8_t *vertex_data;
  int vertices_processed;
  int triangles_processed;
  int batches_processed;
  uint64_t render_flags;
  int64_t *uniform_buffer;
  int64_t scene_handle;
  int64_t camera_distance;
  int64_t object_handle;
  int64_t *light_buffer;
  uint64_t depth_buffer;
  int64_t *render_target_ptr;
  int32_t blend_mode;
  int16_t cull_mode;
  uint64_t viewport_data;
  int32_t clear_color_r;
  int32_t clear_color_g;
  int32_t clear_color_b;
  int32_t clear_color_a;
  uint viewport_width;
  uint viewport_height;
  uint viewport_x;
  uint viewport_y;
  uint64_t shader_uniforms [16];
  int8_t render_cache [336];
  uint64_t memory_checksum;
  
  // 检查场景数据是否有效
  if (scene_data == 0) {
    return;
  }
  uStack_280 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  lVar17 = (int64_t)*(int *)(param_2 + 0x10);
  lStack_2a8 = param_2;
  lStack_298 = param_1;
  if (*(int *)(param_2 + 0x10) != 0) {
    lVar32 = 0;
    lVar24 = lVar32;
    lVar27 = lVar32;
    lVar29 = lVar32;
    if (1 < lVar17) {
      plVar19 = *(int64_t **)(param_2 + 8);
      lVar26 = (lVar17 - 2U >> 1) + 1;
      lVar24 = lVar26 * 2;
      do {
        lVar27 = lVar27 + *(int *)(*plVar19 + 0x20);
        lVar29 = lVar29 + *(int *)(plVar19[1] + 0x20);
        plVar19 = plVar19 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    if (lVar24 < lVar17) {
      lVar32 = (int64_t)*(int *)(*(int64_t *)(*(int64_t *)(param_2 + 8) + lVar24 * 8) + 0x20);
    }
    if (lVar32 + lVar29 + lVar27 != 0) {
      FUN_180099100(param_1);
      lVar17 = system_message_buffer;
      uVar1 = *(int32_t *)(system_operation_state + 0x17ec);
      uVar2 = *(int32_t *)(system_operation_state + 0x17f0);
      plVar19 = *(int64_t **)(system_message_buffer + 0x1cd8);
      plVar22 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x1d8);
      if (plVar22 == (int64_t *)0x0) {
        plVar22 = (int64_t *)0x0;
      }
      else {
        if (system_main_module_state != 0) {
          *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x340) =
               (int64_t)*(int *)(system_main_module_state + 0x224);
        }
        if (*plVar22 != 0) {
          (**(code **)(*plVar19 + 0x70))(plVar19,*plVar22,1);
          lVar17 = system_message_buffer;
        }
      }
      plVar19[0x1077] = (int64_t)plVar22;
      FUN_18029de40(*(uint64_t *)(lVar17 + 0x1cd8),1);
      *(int32_t *)(param_1 + 0x84) =
           *(int32_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x324);
      *(int32_t *)(param_1 + 0xa4) = 1;
      uStack_270 = 0;
      uStack_26c = 0;
      plStack_278 = (int64_t *)0x10000010001;
      pcStack_2d8 = FUN_180045af0;
      FUN_1808fc838(auStack_238,8,0x10,&SUB_18005d5f0);
      plStack_2b0 = (int64_t *)0x0;
      puStack_2d0 = auStack_1b8;
      FUN_180206da0(puStack_2d0,*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18),&plStack_278,
                    auStack_238);
      pcStack_2d8 = (code *)&uStack_268;
      FUN_1802072b0(pcStack_2d8,*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x18));
      plVar19 = plStack_2b0;
      puVar28 = *(int32_t **)(auStack_238[*(int *)(system_message_buffer + 0x8c)] + 0x10);
      puVar30 = *(int32_t **)(auStack_238[*(int *)(system_message_buffer + 0x80)] + 0x10);
      uVar20 = auStack_238[*(int *)(system_message_buffer + 0x78)];
      puVar23 = *(int32_t **)(uVar20 + 0x10);
      lStack_2a0 = plStack_2b0[2];
      iVar33 = 0;
      iStack_2c8 = 0;
      if (0 < *(int *)(param_2 + 0x10)) {
        lVar17 = 0;
        uStack_2b8 = 0;
        do {
          lVar24 = *(int64_t *)(uStack_2b8 + *(int64_t *)(lStack_2a8 + 8));
          uVar35 = *(uint *)(lVar24 + 0x20);
          uVar31 = 0;
          if (3 < uVar35) {
            do {
              lVar29 = (int64_t)(int)uVar31;
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              *puVar28 = *(int32_t *)(lVar27 + lVar29 * 0x14);
              puVar28[1] = *(int32_t *)(lVar27 + 4 + lVar29 * 0x14);
              puVar28[2] = 0;
              *puVar30 = *(int32_t *)(lVar27 + 8 + lVar29 * 0x14);
              puVar30[1] = *(int32_t *)(lVar27 + 0xc + lVar29 * 0x14);
              *puVar23 = *(int32_t *)(lVar27 + 0x10 + lVar29 * 0x14);
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              puVar28[3] = *(int32_t *)(lVar27 + 0x14 + lVar29 * 0x14);
              puVar28[4] = *(int32_t *)(lVar27 + 0x18 + lVar29 * 0x14);
              puVar28[5] = 0;
              puVar30[2] = *(int32_t *)(lVar27 + 0x1c + lVar29 * 0x14);
              puVar30[3] = *(int32_t *)(lVar27 + 0x20 + lVar29 * 0x14);
              puVar23[1] = *(int32_t *)(lVar27 + 0x24 + lVar29 * 0x14);
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              puVar28[6] = *(int32_t *)(lVar27 + 0x28 + lVar29 * 0x14);
              puVar28[7] = *(int32_t *)(lVar27 + 0x2c + lVar29 * 0x14);
              puVar28[8] = 0;
              puVar30[4] = *(int32_t *)(lVar27 + 0x30 + lVar29 * 0x14);
              puVar30[5] = *(int32_t *)(lVar27 + 0x34 + lVar29 * 0x14);
              puVar23[2] = *(int32_t *)(lVar27 + 0x38 + lVar29 * 0x14);
              lVar27 = *(int64_t *)(lVar24 + 0x28);
              puVar28[9] = *(int32_t *)(lVar27 + 0x3c + lVar29 * 0x14);
              puVar28[10] = *(int32_t *)(lVar27 + 0x40 + lVar29 * 0x14);
              puVar28[0xb] = 0;
              puVar30[6] = *(int32_t *)(lVar27 + 0x44 + lVar29 * 0x14);
              puVar30[7] = *(int32_t *)(lVar27 + 0x48 + lVar29 * 0x14);
              puVar23[3] = *(int32_t *)(lVar27 + 0x4c + lVar29 * 0x14);
              puVar23 = puVar23 + 4;
              puVar30 = puVar30 + 8;
              puVar28 = puVar28 + 0xc;
              uVar31 = uVar31 + 4;
            } while (uVar31 < uVar35 - 3);
          }
          iVar25 = 0;
          for (; uVar31 < uVar35; uVar31 = uVar31 + 1) {
            lVar29 = (int64_t)(int)uVar31;
            lVar27 = *(int64_t *)(lVar24 + 0x28);
            *puVar28 = *(int32_t *)(lVar27 + lVar29 * 0x14);
            puVar28[1] = *(int32_t *)(lVar27 + 4 + lVar29 * 0x14);
            puVar28[2] = 0;
            *puVar30 = *(int32_t *)(lVar27 + 8 + lVar29 * 0x14);
            puVar30[1] = *(int32_t *)(lVar27 + 0xc + lVar29 * 0x14);
            *puVar23 = *(int32_t *)(lVar27 + 0x10 + lVar29 * 0x14);
            puVar23 = puVar23 + 1;
            puVar30 = puVar30 + 2;
            puVar28 = puVar28 + 3;
          }
          if (0 < *(int *)(lVar24 + 0x10)) {
            lVar27 = 0;
            do {
              *(short *)(lStack_2a0 + lVar17 * 2) =
                   *(short *)(lVar27 + *(int64_t *)(lVar24 + 0x18)) + (short)iVar33;
              lVar17 = lVar17 + 1;
              iVar25 = iVar25 + 1;
              lVar27 = lVar27 + 2;
            } while (iVar25 < *(int *)(lVar24 + 0x10));
          }
          iVar33 = iVar33 + *(int *)(lVar24 + 0x20);
          iStack_2c8 = iStack_2c8 + 1;
          uVar20 = uStack_2b8 + 8;
          param_1 = lStack_298;
          uStack_2b8 = uVar20;
        } while (iStack_2c8 < *(int *)(lStack_2a8 + 0x10));
      }
      uVar38 = FUN_180207110(uVar20,*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18),
                             auStack_238);
      FUN_180207400(uVar38,*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x18),&plStack_2b0);
      lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar24 = *(int64_t *)(system_message_buffer + 0x1ca8);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x38);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x1f0);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x210);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x80);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      plVar22 = *(int64_t **)(lVar17 + 0x8400);
      pcVar4 = *(code **)(*plVar22 + 0x238);
      *(int32_t *)(lVar24 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar4)(plVar22,7,1,lVar24 + 0x10);
      lVar24 = system_message_buffer;
      uVar38 = *(uint64_t *)(param_1 + 0x28);
      uVar21 = *(int32_t *)(param_1 + 0x30);
      uVar6 = *(int32_t *)(param_1 + 0x34);
      uVar7 = *(int32_t *)(param_1 + 0x38);
      uVar8 = *(int32_t *)(param_1 + 0x3c);
      uVar9 = *(int32_t *)(param_1 + 0x40);
      uVar10 = *(int32_t *)(param_1 + 0x44);
      uVar11 = *(int32_t *)(param_1 + 0x48);
      uVar12 = *(int32_t *)(param_1 + 0x4c);
      uVar13 = *(int32_t *)(param_1 + 0x50);
      uVar14 = *(int32_t *)(param_1 + 0x54);
      uVar15 = *(int32_t *)(param_1 + 0x58);
      uVar16 = *(int32_t *)(param_1 + 0x5c);
      lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
      *(uint64_t *)(lVar17 + 0x80) = *(uint64_t *)(param_1 + 0x20);
      *(uint64_t *)(lVar17 + 0x88) = uVar38;
      *(int32_t *)(lVar17 + 0x90) = uVar21;
      *(int32_t *)(lVar17 + 0x94) = uVar6;
      *(int32_t *)(lVar17 + 0x98) = uVar7;
      *(int32_t *)(lVar17 + 0x9c) = uVar8;
      *(int32_t *)(lVar17 + 0xa0) = uVar9;
      *(int32_t *)(lVar17 + 0xa4) = uVar10;
      *(int32_t *)(lVar17 + 0xa8) = uVar11;
      *(int32_t *)(lVar17 + 0xac) = uVar12;
      *(int32_t *)(lVar17 + 0xb0) = uVar13;
      *(int32_t *)(lVar17 + 0xb4) = uVar14;
      *(int32_t *)(lVar17 + 0xb8) = uVar15;
      *(int32_t *)(lVar17 + 0xbc) = uVar16;
      lVar17 = *(int64_t *)(lVar24 + 0x1cd8);
      FUN_18029fc10(lVar17,*(uint64_t *)(lVar24 + 0x1ca8),lVar17 + 0x80,0x80);
      iVar33 = 0;
      iStack_2c8 = 0;
      iStack_2c4 = 0;
      uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
      if (0 < *(int *)(lStack_2a8 + 0x10)) {
        lStack_2a0 = 0;
        iVar25 = iVar33;
        do {
          piVar5 = *(int **)(lStack_2a0 + *(int64_t *)(lStack_2a8 + 8));
          iStack_2c0 = 0;
          if (0 < *piVar5) {
            lStack_290 = 0;
            do {
              plVar19 = (int64_t *)0x0;
              puVar36 = (uint *)(*(int64_t *)(piVar5 + 2) + lStack_290);
              if ((*(uint *)(*(int64_t *)(puVar36 + 6) + 0x328) >> 0xd & 1) == 0) {
                FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8));
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                plVar18 = (int64_t *)FUN_18023a940();
                plVar22 = plVar19;
                if (((plVar18 != (int64_t *)0x0) && (plVar22 = plVar18, plVar18[1] == 0)) &&
                   (plVar18[2] == 0)) {
                  plVar22 = (int64_t *)0x0;
                }
                if ((((*(int64_t **)(lVar17 + 0x8438) != plVar22) ||
                     (*(int *)(lVar17 + 0x8838) != -1)) || (*(int *)(lVar17 + 0x8a38) != 0x10)) &&
                   (((plVar22 == (int64_t *)0x0 || (plVar22[1] != 0)) || (plVar22[2] != 0)))) {
                  if (plVar22 != (int64_t *)0x0) {
                    plVar19 = (int64_t *)plVar22[2];
                  }
                  plStack_278 = plVar19;
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x40))
                            (*(int64_t **)(lVar17 + 0x8400),0,1,&plStack_278);
                  *(int64_t **)(lVar17 + 0x8438) = plVar22;
                  *(int32_t *)(lVar17 + 0x8838) = 0xffffffff;
                  *(int32_t *)(lVar17 + 0x8a38) = 0x10;
                  *(int *)(lVar17 + 0x82b4) = *(int *)(lVar17 + 0x82b4) + 1;
                }
              }
              else {
                FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0xa8);
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                plVar18 = (int64_t *)FUN_18023a940();
                plVar22 = plVar19;
                if (((plVar18 != (int64_t *)0x0) && (plVar22 = plVar18, plVar18[1] == 0)) &&
                   (plVar18[2] == 0)) {
                  plVar22 = (int64_t *)0x0;
                }
                if ((((*(int64_t **)(lVar17 + 0x8530) != plVar22) ||
                     (*(int *)(lVar17 + 0x88b4) != -1)) || (*(int *)(lVar17 + 0x8ab4) != 0x10)) &&
                   (((plVar22 == (int64_t *)0x0 || (plVar22[1] != 0)) || (plVar22[2] != 0)))) {
                  if (plVar22 != (int64_t *)0x0) {
                    plVar19 = (int64_t *)plVar22[2];
                  }
                  plStack_288 = plVar19;
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x40))
                            (*(int64_t **)(lVar17 + 0x8400),0x1f,1,&plStack_288);
                  *(int64_t **)(lVar17 + 0x8530) = plVar22;
                  *(int32_t *)(lVar17 + 0x88b4) = 0xffffffff;
                  *(int32_t *)(lVar17 + 0x8ab4) = 0x10;
                  *(int *)(lVar17 + 0x82b4) = *(int *)(lVar17 + 0x82b4) + 1;
                }
                lVar24 = system_message_buffer;
                iVar33 = iVar25 + (iVar25 / 6 + (iVar25 >> 0x1f) +
                                  (int)(((int64_t)iVar25 / 6 + ((int64_t)iVar25 >> 0x3f) &
                                        0xffffffffU) >> 0x1f)) * -6;
                iVar25 = iVar25 + 1;
                *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0xc0) = (float)iVar33;
                lVar17 = *(int64_t *)(lVar24 + 0x1cd8);
                iStack_2c4 = iVar25;
                FUN_18029fc10(lVar17,*(uint64_t *)(lVar24 + 0x1ca8),lVar17 + 0x80,0x80);
              }
              if (*(code **)(puVar36 + 8) == (code *)0x0) {
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                lVar24 = *(int64_t *)(*(int64_t *)(param_1 + 0x10) + 0x18);
                if (*(int64_t *)(lVar17 + 0x8240) != lVar24) {
                  *(int64_t *)(lVar17 + 0x8240) = lVar24;
                  puStack_2d0 = (int8_t *)(lVar24 + 0x220);
                  pcStack_2d8 = (code *)(lVar24 + 0x260);
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x90))
                            (*(int64_t **)(lVar17 + 0x8400),0,*(int32_t *)(lVar24 + 0x188),
                             lVar24 + 0x1a0);
                }
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                lVar24 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x18);
                if (*(int64_t *)(lVar17 + 0x8238) != lVar24) {
                  *(int64_t *)(lVar17 + 0x8238) = lVar24;
                  lVar27 = *(int64_t *)(lVar24 + 0x18);
                  *(int32_t *)(lVar27 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
                  if ((*(byte *)(lVar24 + 4) & 1) == 0) {
                    uVar21 = 0x39;
                    iVar33 = *(int *)(lVar24 + 8) * 2;
                  }
                  else {
                    uVar21 = 0x2a;
                    iVar33 = *(int *)(lVar24 + 8) * 4;
                  }
                  (**(code **)(**(int64_t **)(lVar17 + 0x8400) + 0x98))
                            (*(int64_t **)(lVar17 + 0x8400),*(uint64_t *)(lVar27 + 0x10),uVar21,
                             iVar33);
                }
                uVar35 = (uint)(float)puVar36[1];
                uVar37 = (uint)(float)puVar36[2];
                uVar34 = (uint)(float)puVar36[3];
                uVar31 = (uint)(float)puVar36[4];
                uVar3 = *(ushort *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x32c);
                if ((int)uVar35 < 0) {
                  uVar35 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar35) {
                  uVar35 = (uint)uVar3;
                }
                if ((int)uVar34 < 0) {
                  uVar34 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar34) {
                  uVar34 = (uint)uVar3;
                }
                uVar3 = *(ushort *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x32e);
                if ((int)uVar37 < 0) {
                  uVar37 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar37) {
                  uVar37 = (uint)uVar3;
                }
                if ((int)uVar31 < 0) {
                  uVar31 = 0;
                }
                else if ((int)(uint)uVar3 < (int)uVar31) {
                  uVar31 = (uint)uVar3;
                }
                lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
                uStack_268 = 0;
                uStack_258 = 0;
                uStack_254 = 0x3f800000;
                plVar19 = *(int64_t **)(lVar17 + 0x8400);
                uStack_260 = uVar1;
                uStack_25c = uVar2;
                (**(code **)(*plVar19 + 0x160))(plVar19,1,&uStack_268);
                plVar19 = *(int64_t **)(lVar17 + 0x8400);
                uStack_250 = uVar35;
                uStack_24c = uVar37;
                uStack_248 = uVar34;
                uStack_244 = uVar31;
                (**(code **)(*plVar19 + 0x168))(plVar19,1,&uStack_250);
                param_1 = lStack_298;
                iVar25 = iStack_2c4;
                if (system_memory_2846 == '\0') {
                  plVar19 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
                  (**(code **)(*plVar19 + 0x60))(plVar19,(*puVar36 / 3) * 3,iStack_2c8,0);
                  param_1 = lStack_298;
                  iVar25 = iStack_2c4;
                }
              }
              else {
                (**(code **)(puVar36 + 8))(piVar5,puVar36);
              }
              iStack_2c8 = iStack_2c8 + *puVar36;
              iStack_2c0 = iStack_2c0 + 1;
              lStack_290 = lStack_290 + 0x30;
            } while (iStack_2c0 < *piVar5);
            iVar33 = (int)uStack_2b8;
          }
          iVar33 = iVar33 + 1;
          uStack_2b8 = CONCAT44(uStack_2b8._4_4_,iVar33);
          lStack_2a0 = lStack_2a0 + 8;
          plVar19 = plStack_2b0;
        } while (iVar33 < *(int *)(lStack_2a8 + 0x10));
      }
      plStack_278 = *(int64_t **)(core_system_data_memory + 0x10);
      *(uint64_t *)(core_system_data_memory + 0x10) = 0;
      if (plStack_278 != (int64_t *)0x0) {
        (**(code **)(*plStack_278 + 0x38))();
      }
      (**(code **)(*plVar19 + 0x38))(plVar19);
      FUN_1808fc8a8(auStack_238,8,0x10,FUN_180045af0);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_2f8);
}





// 函数: void cleanup_render_memory(uint64_t memory_block)
// 功能：清理渲染内存资源
void cleanup_render_memory(uint64_t memory_block)

{
  FUN_1808fc8a8(memory_block,8,0x10,FUN_180045af0,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: void * allocate_render_resources(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能：分配渲染资源
void *
allocate_render_resources(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  void *resource_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < core_system_config_memory) {
    SystemInitializer(&system_memory_9210);
    if (core_system_config_memory == -1) {
      core_system_config_memory = &system_data_buffer_ptr;
      core_system_config_memory = 0;
      core_system_config_memory = (void *)0x0;
      core_system_config_memory = 0;
      FUN_1808fc820(FUN_1809419e0);
      FUN_1808fcb30(&system_memory_9210);
    }
  }
  FUN_1801717e0(*(uint64_t *)(system_main_module_state + 8),&system_memory_9218,param_3,param_4,cleanup_flag);
  resource_ptr = &system_buffer_ptr;
  if (core_system_config_memory != (void *)0x0) {
    resource_ptr = core_system_config_memory;
  }
  return resource_ptr;
}



// 函数: int8_t render_scene_objects(uint64_t param_1, int64_t render_context, uint64_t param_3, uint64_t *param_4)
// 功能：渲染场景对象
int8_t render_scene_objects(uint64_t param_1, int64_t render_context, uint64_t param_3, uint64_t *param_4)

{
  int8_t uVar1;
  uint64_t uVar2;
  void *puVar3;
  uint uVar4;
  uint64_t uStackX_8;
  int32_t uStackX_10;
  float fStackX_14;
  uint64_t uStackX_18;
  uint64_t *puStackX_20;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  
  uStackX_8 = param_1;
  uStackX_18 = param_3;
  puStackX_20 = param_4;
  uVar2 = func_0x000180220c90(*(int32_t *)(param_2 + 0x324));
  FUN_18012e3b0();
  puVar3 = &system_buffer_ptr;
  if ((void *)param_4[1] != (void *)0x0) {
    puVar3 = (void *)param_4[1];
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x32e);
  FUN_18010f010(&unknown_var_2320_ptr,puVar3,uVar2,*(int16_t *)(param_2 + 0x32c),uVar4);
  uStack_40 = 0x3f8000003f800000;
  uStack_38 = 0x3f8000003f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  uStackX_18 = 0x3f8000003f800000;
  uStackX_8 = 0;
  fStackX_14 = ((float)*(ushort *)(param_2 + 0x32e) * 256.0) / (float)*(ushort *)(param_2 + 0x32c);
  uStackX_10 = 0x43800000;
  uVar1 = FUN_180110ca0(param_2,&uStackX_10,&uStackX_8,&uStackX_18,uVar4,&uStack_30,&uStack_40);
  FUN_18012e4e0();
  *param_4 = &system_data_buffer_ptr;
  if (param_4[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_4[1] = 0;
  *(int32_t *)(param_4 + 3) = 0;
  *param_4 = &system_state_ptr;
  return uVar1;
}





// 函数: void emergency_cleanup(void)
// 功能：紧急清理函数
void emergency_cleanup(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void process_scene_rendering(uint64_t render_target, uint64_t camera_data, int64_t scene_objects, int64_t render_queue,
void process_scene_rendering(uint64_t render_target, uint64_t camera_data, int64_t scene_objects, int64_t render_queue,
                  int64_t render_params)

{
  int64_t *plVar1;
  double *pdVar2;
  double dVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  char *pcVar9;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  uint uVar14;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  void *puVar19;
  float fVar20;
  char *pcVar10;
  uint64_t uVar15;
  
  iVar13 = 0;
  plVar12 = *(int64_t **)(param_5 + 0x48);
  if (*(int64_t *)(param_5 + 0x50) - (int64_t)plVar12 >> 3 != 0) {
    lVar5 = 0;
    do {
      fVar20 = (float)FUN_18009ae50(param_2,*(uint64_t *)(lVar5 + *(int64_t *)(param_5 + 0x48)));
      iVar13 = iVar13 + 1;
      *(double *)(*(int64_t *)(lVar5 + *(int64_t *)(param_5 + 0x48)) + 0x40) = (double)fVar20;
      plVar12 = *(int64_t **)(param_5 + 0x48);
      lVar5 = lVar5 + 8;
    } while ((uint64_t)(int64_t)iVar13 <
             (uint64_t)(*(int64_t *)(param_5 + 0x50) - (int64_t)plVar12 >> 3));
  }
  plVar4 = *(int64_t **)(param_5 + 0x50);
  if (plVar12 != plVar4) {
    iVar13 = 0;
    lVar16 = (int64_t)plVar4 - (int64_t)plVar12 >> 3;
    for (lVar5 = lVar16; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar13 = iVar13 + 1;
    }
    FUN_18009d630(plVar12,plVar4,(int64_t)(iVar13 + -1) * 2,0);
    plVar18 = plVar12;
    if (lVar16 < 0x1d) {
      while (plVar18 = plVar18 + 1, plVar18 != plVar4) {
        lVar5 = *plVar18;
        plVar11 = plVar18;
        if (plVar18 != plVar12) {
          dVar3 = *(double *)(lVar5 + 0x40);
          plVar7 = plVar18;
          do {
            plVar6 = plVar7 + -1;
            plVar7 = plVar7 + -1;
            pdVar2 = (double *)(*plVar6 + 0x40);
            if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
            *plVar11 = *plVar6;
            plVar11 = plVar11 + -1;
          } while (plVar7 != plVar12);
        }
        *plVar11 = lVar5;
      }
    }
    else {
      plVar18 = plVar12 + 0x1c;
      plVar11 = plVar12;
      if (plVar12 != plVar18) {
        while (plVar11 = plVar11 + 1, plVar11 != plVar18) {
          lVar5 = *plVar11;
          plVar7 = plVar11;
          if (plVar11 != plVar12) {
            dVar3 = *(double *)(lVar5 + 0x40);
            plVar6 = plVar11;
            do {
              plVar1 = plVar6 + -1;
              plVar6 = plVar6 + -1;
              pdVar2 = (double *)(*plVar1 + 0x40);
              if (dVar3 < *pdVar2 || dVar3 == *pdVar2) break;
              *plVar7 = *plVar1;
              plVar7 = plVar7 + -1;
            } while (plVar6 != plVar12);
          }
          *plVar7 = lVar5;
        }
      }
      for (; plVar18 != plVar4; plVar18 = plVar18 + 1) {
        lVar5 = *plVar18;
        lVar16 = plVar18[-1];
        dVar3 = *(double *)(lVar5 + 0x40);
        plVar12 = plVar18 + -1;
        plVar11 = plVar18;
        plVar7 = plVar18;
        if (*(double *)(lVar16 + 0x40) <= dVar3 && dVar3 != *(double *)(lVar16 + 0x40)) {
          do {
            plVar11 = plVar12;
            *plVar7 = lVar16;
            lVar16 = plVar11[-1];
            plVar12 = plVar11 + -1;
            plVar7 = plVar11;
          } while (*(double *)(lVar16 + 0x40) <= dVar3 && dVar3 != *(double *)(lVar16 + 0x40));
        }
        *plVar11 = lVar5;
      }
    }
  }
  puVar8 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
  uVar15 = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[4] = 0;
  *(int32_t *)(puVar8 + 5) = 1;
  puVar8[6] = 0;
  puVar8[8] = 0;
  pcVar9 = "scope";
  do {
    pcVar10 = pcVar9;
    pcVar9 = pcVar10 + 1;
  } while (*pcVar9 != '\0');
  *puVar8 = &unknown_var_2340_ptr;
  puVar8[2] = pcVar10 + -0x180a01603;
  puVar19 = &system_buffer_ptr;
  if (*(void **)(param_5 + 8) != (void *)0x0) {
    puVar19 = *(void **)(param_5 + 8);
  }
  FUN_180630b20(param_3,puVar8,&unknown_var_2332_ptr,puVar19);
  FUN_180630e10(param_3,puVar8,&unknown_var_2352_ptr,*(double *)(param_5 + 0x40) * 1000.0);
  uVar17 = uVar15;
  if (*(int64_t *)(param_5 + 0x50) - *(int64_t *)(param_5 + 0x48) >> 3 != 0) {
    do {
      FUN_18009a4b0(param_1,param_2,param_3,puVar8,
                    *(uint64_t *)(uVar17 + *(int64_t *)(param_5 + 0x48)));
      uVar14 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar14;
      uVar17 = uVar17 + 8;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)(*(int64_t *)(param_5 + 0x50) - *(int64_t *)(param_5 + 0x48) >> 3));
  }
  if (*(int64_t *)(param_4 + 0x30) == 0) {
    puVar8[10] = 0;
    *(uint64_t **)(param_4 + 0x30) = puVar8;
  }
  else {
    puVar8[10] = *(uint64_t *)(param_4 + 0x38);
    *(uint64_t **)(*(int64_t *)(param_4 + 0x38) + 0x58) = puVar8;
  }
  *(uint64_t **)(param_4 + 0x38) = puVar8;
  puVar8[4] = param_4;
  puVar8[0xb] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



