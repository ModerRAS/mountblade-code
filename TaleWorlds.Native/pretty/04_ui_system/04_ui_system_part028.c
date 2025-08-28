#include "TaleWorlds.Native.Split.h"

/**
 * UI系统高级渲染批处理和队列管理模块
 * 
 * 本文件包含1个核心函数，主要用于UI系统的高级渲染批处理、队列管理、
 * 数据缓冲区、内存管理、渲染状态控制、纹理和材质处理、性能优化和资源管理等功能。
 * 
 * 主要功能：
 * - UI渲染批处理和队列管理
 * - 数据缓冲区和内存管理
 * - 渲染状态控制和同步
 * - 纹理和材质处理
 * - 性能优化和资源管理
 * - 信号量控制和线程同步
 */

// 常量定义
#define UI_RESOURCE_BLOCK_SIZE 0x30
#define UI_TEXTURE_STRIDE 0x10
#define UI_VERTEX_STRIDE 8
#define UI_BATCH_SIZE 0x80
#define UI_FLAG_MASK 0x1f
#define UI_TEXTURE_FLAG 0x81
#define UI_SEMAPHORE_COUNT 1

// 函数别名定义
#define ui_system_advanced_render_batch_processor FUN_18066f810

/**
 * UI系统高级渲染批处理器函数
 * 
 * 该函数负责UI系统的高级渲染批处理、队列管理、数据缓冲区操作、
 * 内存管理、渲染状态控制、纹理和材质处理、性能优化和资源管理。
 * 主要功能包括：
 * 1. 渲染批处理和队列管理
 * 2. 数据缓冲区和内存管理
 * 3. 渲染状态控制和同步
 * 4. 纹理和材质处理
 * 5. 性能优化和资源管理
 * 6. 信号量控制和线程同步
 * 
 * @param ui_context UI系统上下文指针
 * @param render_context 渲染上下文指针
 * @param batch_index 批处理索引
 */
void ui_system_advanced_render_batch_processor(longlong ui_context, longlong render_context, int batch_index)

{
    // 变量声明和初始化
    undefined4 *texture_data_ptr;
    undefined4 *vertex_data_ptr;
    longlong resource_offset;
    byte texture_flag;
    int current_index;
    undefined8 *render_data_ptr;
    undefined1 *texture_ptr;
    undefined1 *vertex_ptr;
    byte *data_buffer;
    undefined4 texture_width;
    undefined4 texture_height;
    undefined4 texture_depth;
    uint texture_count;
    int *index_buffer;
    undefined1 *flag_ptr;
    longlong buffer_offset;
    uint vertex_stride;
    longlong texture_base;
    ulonglong resource_key;
    longlong index_offset;
    ulonglong buffer_size;
    ulonglong vertex_size;
    ulonglong texture_size;
    uint batch_counter;
    
    // 栈变量声明
    undefined1 stack_buffer[32];
    uint stack_texture_count;
    longlong *stack_ptr;
    longlong stack_offset;
    int stack_index;
    int stack_batch;
    int stack_limit;
    int stack_counter;
    int stack_flag;
    uint stack_value;
    int stack_temp;
    uint stack_size;
    uint stack_param;
    int stack_loop;
    int stack_iter;
    longlong stack_pos;
    longlong stack_base;
    ulonglong stack_buffer1;
    ulonglong stack_buffer2;
    int *stack_buffer_ptr;
    int *stack_index_ptr;
    longlong stack_data;
    longlong stack_resource;
    longlong stack_vertex;
    longlong stack_texture;
    longlong stack_memory;
    longlong stack_context;
    longlong stack_state;
    uint stack_flags[4];
    longlong stack_array[6];
    undefined8 stack_param1;
    undefined8 stack_param2;
    undefined8 stack_param3;
    undefined8 stack_param4;
    undefined8 stack_param5;
    undefined8 stack_param6;
    ulonglong stack_security;
    
    // 安全检查和初始化
    stack_security = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    current_index = *(int *)(ui_context + 0x43a4);
    stack_vertex = *(longlong *)(ui_context + 0x12a0);
    stack_limit = *(int *)(ui_context + 0x1e78) + current_index;
    texture_count = (ulonglong)(int)*(uint *)(stack_vertex + 0x10);
    stack_texture_count = *(uint *)(stack_vertex + 0x24);
    vertex_size = (ulonglong)(int)stack_texture_count;
    index_buffer = *(int **)(ui_context + 0x12a8);
    stack_flag = 1 << ((byte)*(undefined4 *)(ui_context + 0x34e4) & UI_FLAG_MASK);
    
    // 加载纹理数据
    stack_array[3] = *(undefined8 *)(index_buffer + 0xe);
    stack_array[4] = *(undefined8 *)(index_buffer + 0x10);
    stack_array[5] = *(undefined8 *)(index_buffer + 0x12);
    resource_offset = *(longlong *)(ui_context + 0x12b0);
    stack_flags[1] = index_buffer[0x22];
    stack_param = *(uint *)(stack_vertex + 0x10);
    stack_param1 = *(undefined8 *)(resource_offset + 0x38);
    stack_param2 = *(undefined8 *)(resource_offset + 0x40);
    stack_param3 = *(undefined8 *)(resource_offset + 0x48);
    stack_memory = *(longlong *)(ui_context + 0x12b8);
    stack_flags[2] = *(undefined4 *)(resource_offset + 0x88);
    stack_flags[0] = 0;
    stack_param4 = *(undefined8 *)(stack_memory + 0x38);
    stack_param5 = *(undefined8 *)(stack_memory + 0x40);
    stack_param6 = *(undefined8 *)(stack_memory + 0x48);
    stack_flags[3] = *(undefined4 *)(stack_memory + 0x88);
    stack_data = *(longlong *)(stack_vertex + 0x38);
    stack_resource = *(longlong *)(stack_vertex + 0x40);
    stack_texture = *(longlong *)(stack_vertex + 0x48);
    
    // 初始化渲染上下文
    *(uint *)(render_context + 0xf10) = (uint)(batch_index != 0);
    stack_batch = batch_index;
  if (param_3 < *(int *)(param_1 + 0x1e74)) {
    uStack_120 = uVar21;
    uStack_118 = uVar19;
    uVar22 = uVar21;
    do {
      iStack_134 = iStack_15c;
      *(longlong *)(param_2 + 0xfb8) =
           ((longlong)(iStack_15c % iStack_138) + 0x15c) * 0x30 + param_1;
      if (iStack_15c < 1) {
        piStack_110 = &iStack_144;
      }
      else {
        piStack_110 = (int *)(*(longlong *)(param_1 + 0x43a8) + (longlong)(iStack_15c + -1) * 4);
      }
      lStack_168 = (longlong)iStack_15c;
      piStack_108 = (int *)(*(longlong *)(param_1 + 0x43a8) + lStack_168 * 4);
      *(undefined8 *)(param_2 + 0xf50) = *(undefined8 *)(param_1 + 0x2c18);
      puVar6 = *(undefined8 **)(param_2 + 0xf58);
      iStack_154 = iStack_15c * (int)uVar22 * 0x10;
      iStack_150 = iStack_15c * (int)uVar19 * 8;
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)(param_2 + 0xf14) = 0;
      *(int *)(param_2 + 0xf8c) = iStack_15c * -0x80;
      *(int *)(param_2 + 0xf90) = ((*(int *)(param_1 + 0x1e74) - iStack_15c) + -1) * 0x80;
      if (*(int *)(param_1 + 0x2be0) == 0) {
        *(longlong *)(param_2 + 0xf18) = iStack_154 + lStack_100;
        *(longlong *)(param_2 + 0xf20) = lStack_f8 + iStack_150;
        *(longlong *)(param_2 + 0xf28) = lStack_f0 + iStack_150;
        *(longlong *)(param_2 + 0xf30) = *(longlong *)(param_2 + 0xf18) + -1;
        *(longlong *)(param_2 + 0xf38) = *(longlong *)(param_2 + 0xf20) + -1;
        puVar7 = *(undefined1 **)(param_2 + 0xf38);
        *(longlong *)(param_2 + 0xf40) = *(longlong *)(param_2 + 0xf28) + -1;
        puVar8 = *(undefined1 **)(param_2 + 0xf40);
        *(longlong *)(param_2 + 0xf18) =
             *(longlong *)(param_2 + 0xf18) - (longlong)*(int *)(param_2 + 0xe80);
        lVar20 = 0x10;
        *(longlong *)(param_2 + 0xf20) =
             *(longlong *)(param_2 + 0xf20) - (longlong)*(int *)(param_2 + 0xe94);
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(param_2 + 0xf28) - (longlong)*(int *)(param_2 + 0xe94);
        *(undefined4 *)(param_2 + 0xf48) = *(undefined4 *)(param_2 + 0xe80);
        *(undefined4 *)(param_2 + 0xf4c) = *(undefined4 *)(param_2 + 0xe94);
        lVar18 = (longlong)*(int *)(param_2 + 0xe94);
        puVar15 = *(undefined1 **)(param_2 + 0xf30);
        iVar5 = *(int *)(param_2 + 0xe80);
        do {
          *puVar15 = 0x81;
          puVar15 = puVar15 + iVar5;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        *puVar7 = 0x81;
        puVar7[lVar18] = 0x81;
        puVar7[lVar18 * 2] = 0x81;
        puVar7[lVar18 * 3] = 0x81;
        puVar7[lVar18 * 4] = 0x81;
        puVar7[lVar18 * 5] = 0x81;
        puVar7[lVar18 * 6] = 0x81;
        puVar7[lVar18 * 7] = 0x81;
        *puVar8 = 0x81;
        puVar8[lVar18] = 0x81;
        puVar8[lVar18 * 2] = 0x81;
        puVar8[lVar18 * 3] = 0x81;
        puVar8[lVar18 * 4] = 0x81;
        puVar8[lVar18 * 5] = 0x81;
        puVar8[lVar18 * 6] = 0x81;
        puVar8[lVar18 * 7] = 0x81;
      }
      else {
        *(longlong *)(param_2 + 0xf18) =
             *(longlong *)(*(longlong *)(param_1 + 0x43b0) + lStack_168 * 8) + 0x20;
        *(longlong *)(param_2 + 0xf20) =
             *(longlong *)(*(longlong *)(param_1 + 0x43b8) + lStack_168 * 8) + 0x10;
        *(longlong *)(param_2 + 0xf28) =
             *(longlong *)(*(longlong *)(param_1 + 0x43c0) + lStack_168 * 8) + 0x10;
        *(undefined8 *)(param_2 + 0xf30) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8);
        *(undefined8 *)(param_2 + 0xf38) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8);
        *(undefined8 *)(param_2 + 0xf40) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8);
        *(undefined4 *)(param_2 + 0xf48) = 1;
        *(undefined4 *)(param_2 + 0xf4c) = 1;
      }
      uVar17 = 0;
      if (0 < *(int *)(param_1 + 0x1e78)) {
        lStack_128 = 0x10;
        iStack_14c = 0;
        lStack_130 = 0x20;
        do {
          piVar14 = piStack_110;
          iVar5 = iStack_160;
          *piStack_108 = uVar17 - 1;
          if (((uVar17 & iStack_160 - 1U) == 0) && (*piStack_110 - iStack_160 < (int)uVar17)) {
            do {
              Sleep(0);
            } while (*piVar14 - iVar5 < (int)uVar17);
            uVar21 = (ulonglong)(int)uVar22;
          }
          lVar20 = *(longlong *)(param_2 + 0xf00);
          lVar18 = (longlong)iStack_150;
          *(int *)(param_2 + 0xf84) = iStack_14c;
          iVar5 = *(int *)(param_1 + 0x1e78);
          *(longlong *)(param_2 + 0xea8) = lStack_100 + iStack_154;
          *(longlong *)(param_2 + 0xeb0) = lStack_f8 + lVar18;
          *(uint *)(param_2 + 0xf88) = ((iVar5 - uVar17) + -1) * 0x80;
          *(longlong *)(param_2 + 0xeb8) = lStack_f0 + lVar18;
          *(longlong *)(param_2 + 0xe18) =
               alStack_a8[(ulonglong)*(byte *)(lVar20 + 2) * 3] + (longlong)iStack_154;
          *(longlong *)(param_2 + 0xe20) =
               alStack_a8[(ulonglong)*(byte *)(lVar20 + 2) * 3 + 1] + lVar18;
          *(longlong *)(param_2 + 0xe28) =
               alStack_a8[(ulonglong)*(byte *)(lVar20 + 2) * 3 + 2] + lVar18;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) | auStack_b8[*(byte *)(lVar20 + 2)];
          FUN_18066f3e0(param_1,param_2,0);
          uVar13 = uStack_148;
          *(undefined4 *)(param_2 + 0xf14) = 1;
          *(uint *)(param_2 + 0xfc0) =
               *(uint *)(param_2 + 0xfc0) |
               (uint)(*(int *)(*(longlong *)(param_2 + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
          *(longlong *)(param_2 + 0xf18) = *(longlong *)(param_2 + 0xf18) + 0x10;
          *(longlong *)(param_2 + 0xf20) = *(longlong *)(param_2 + 0xf20) + 8;
          *(longlong *)(param_2 + 0xf28) = *(longlong *)(param_2 + 0xf28) + 8;
          if (*(int *)(param_1 + 0x2be0) == 0) {
            *(longlong *)(param_2 + 0xf30) = *(longlong *)(param_2 + 0xf30) + 0x10;
            *(longlong *)(param_2 + 0xf38) = *(longlong *)(param_2 + 0xf38) + 8;
            *(longlong *)(param_2 + 0xf40) = *(longlong *)(param_2 + 0xf40) + 8;
            if (*(int *)(param_1 + 0x2be0) != 0) goto LAB_18066fdc2;
          }
          else {
LAB_18066fdc2:
            pbVar9 = *(byte **)(param_2 + 0xf00);
            bVar4 = *pbVar9;
            if (((bVar4 == 4) || (bVar4 == 9)) || (iStack_158 = 1, pbVar9[9] == 0)) {
              iStack_158 = 0;
            }
            bVar4 = *(byte *)((ulonglong)*(byte *)((ulonglong)bVar4 + 0xd00 + param_1 + 0x1ed0) +
                              param_1 + 0x1ed0 + 0xc40 +
                             ((ulonglong)pbVar9[2] + (ulonglong)pbVar9[0xb] * 4) * 4);
            uStack_140 = (uint)bVar4;
            if (iStack_15c != *(int *)(param_1 + 0x1e74) + -1) {
              puVar1 = (undefined4 *)(uVar21 * 0xf + *(longlong *)(param_2 + 0xea8));
              uVar10 = puVar1[1];
              uVar11 = puVar1[2];
              uVar12 = puVar1[3];
              puVar2 = (undefined4 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x43b0) + 8 + lStack_168 * 8) +
                       lStack_130);
              *puVar2 = *puVar1;
              puVar2[1] = uVar10;
              puVar2[2] = uVar11;
              puVar2[3] = uVar12;
              *(undefined8 *)
               (lStack_128 + *(longlong *)(*(longlong *)(param_1 + 0x43b8) + 8 + lStack_168 * 8)) =
                   *(undefined8 *)(uStack_118 * 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined8 *)
               (lStack_128 + *(longlong *)(*(longlong *)(param_1 + 0x43c0) + 8 + lStack_168 * 8)) =
                   *(undefined8 *)(uStack_118 * 7 + *(longlong *)(param_2 + 0xeb8));
            }
            if ((uVar17 != *(int *)(param_1 + 0x1e78) - 1U) &&
               (*(char *)(*(longlong *)(param_2 + 0xf00) + 0x4e) == '\0')) {
              lVar18 = 0;
              lVar20 = uStack_120 * 2;
              do {
                lVar16 = lVar20 + uStack_120;
                *(undefined1 *)
                 (lVar18 + *(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8)) =
                     *(undefined1 *)
                      (lVar20 + uStack_120 * -2 + 0xf + *(longlong *)(param_2 + 0xea8));
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8) + 1 + lVar18) =
                     *(undefined1 *)((*(longlong *)(param_2 + 0xea8) + lVar20 + 0xf) - uStack_120);
                lVar3 = lVar20 + 0xf;
                lVar20 = lVar20 + uStack_120 * 4;
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8) + 2 + lVar18) =
                     *(undefined1 *)(lVar3 + *(longlong *)(param_2 + 0xea8));
                *(undefined1 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x43c8) + lStack_168 * 8) + 3 + lVar18) =
                     *(undefined1 *)(lVar16 + 0xf + *(longlong *)(param_2 + 0xea8));
                lVar18 = lVar18 + 4;
              } while (lVar18 < 0x10);
              **(undefined1 **)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb0) + 7);
              **(undefined1 **)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 1) =
                   *(undefined1 *)(uStack_118 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 1) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 2) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb0) + 7 + uStack_118 * 2);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 2) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 2);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 3) =
                   *(undefined1 *)(uStack_118 * 3 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 3) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 3);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 4) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb0) + 7 + uStack_118 * 4);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 4) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 4);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 5) =
                   *(undefined1 *)(uStack_118 * 5 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 5) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 5);
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 6) =
                   *(undefined1 *)(uStack_118 * 6 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 6) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 6);
              uVar22 = (ulonglong)uStack_13c;
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d0) + lStack_168 * 8) + 7) =
                   *(undefined1 *)(uStack_118 * 7 + 7 + *(longlong *)(param_2 + 0xeb0));
              *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x43d8) + lStack_168 * 8) + 7) =
                   *(undefined1 *)(*(longlong *)(param_2 + 0xeb8) + 7 + uStack_118 * 7);
            }
            uVar23 = (uint)bVar4;
            lVar20 = param_1 + 0x1ed0;
            if (uVar23 != 0) {
              if (*(int *)(param_1 + 0x1ec0) == 0) {
                lVar18 = (longlong)(int)uVar23;
                lStack_d8 = lVar18 * 0x10 + lVar20;
                lStack_d0 = (lVar18 + 0x40) * 0x10 + lVar20;
                lStack_c8 = (lVar18 + 0x80) * 0x10 + lVar20;
                lStack_c0 = ((ulonglong)
                             *(byte *)(((longlong)*(int *)(param_1 + 0x1e64) + 0x32) * 0x40 + lVar18
                                      + lVar20) + 0xc0) * 0x10 + lVar20;
                if (0 < (int)uVar17) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uStack_148;
                  FUN_18069cb40(*(undefined8 *)(param_2 + 0xea8),*(undefined8 *)(param_2 + 0xeb0),
                                *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
                iVar5 = iStack_158;
                if (iStack_158 == 0) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uVar13;
                  FUN_18069ca00(*(undefined8 *)(param_2 + 0xea8),*(undefined8 *)(param_2 + 0xeb0),
                                *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
                if (0 < lStack_168) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uVar13;
                  FUN_18069cad0(*(undefined8 *)(param_2 + 0xea8),*(undefined8 *)(param_2 + 0xeb0),
                                *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
                if (iVar5 == 0) {
                  plStack_170 = &lStack_d8;
                  uStack_178 = uVar13;
                  FUN_18069c900(*(undefined8 *)(param_2 + 0xea8),*(undefined8 *)(param_2 + 0xeb0),
                                *(undefined8 *)(param_2 + 0xeb8),uVar22 & 0xffffffff);
                }
              }
              else {
                if (0 < (int)uVar17) {
                  func_0x00018001c253(*(undefined8 *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                      (longlong)(int)uVar23 * 0x10 + lVar20);
                }
                iVar5 = iStack_158;
                if (iStack_158 == 0) {
                  FUN_18069ca80(*(undefined8 *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                ((longlong)(int)uVar23 + 0x40) * 0x10 + lVar20);
                }
                if (0 < lStack_168) {
                  func_0x00018001c10b(*(undefined8 *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                      (longlong)(int)uVar23 * 0x10 + lVar20);
                }
                if (iVar5 == 0) {
                  FUN_18069c990(*(undefined8 *)(param_2 + 0xea8),uVar22 & 0xffffffff,
                                ((longlong)(int)uVar23 + 0x40) * 0x10 + lVar20);
                }
              }
            }
          }
          uVar17 = uVar17 + 1;
          iStack_14c = iStack_14c + -0x80;
          iStack_154 = iStack_154 + 0x10;
          iStack_150 = iStack_150 + 8;
          *(longlong *)(param_2 + 0xf00) = *(longlong *)(param_2 + 0xf00) + 0x4c;
          *(longlong *)(param_2 + 0xf50) = *(longlong *)(param_2 + 0xf50) + 9;
          lStack_130 = lStack_130 + 0x10;
          lStack_128 = lStack_128 + 8;
          uVar21 = (ulonglong)(int)uVar22;
        } while ((int)uVar17 < *(int *)(param_1 + 0x1e78));
        uVar21 = (ulonglong)(int)uVar22;
      }
      if (*(int *)(param_1 + 0x2be0) == 0) {
        func_0x00018069cbd0(lStack_e0,*(longlong *)(param_2 + 0xea8) + 0x10,
                            *(longlong *)(param_2 + 0xeb0) + 8,*(longlong *)(param_2 + 0xeb8) + 8);
      }
      else if (iStack_15c != *(int *)(param_1 + 0x1e74) + -1) {
        lVar20 = 0;
        iVar5 = *piStack_e8;
        lVar18 = (longlong)((iVar5 >> 1) + 0x10);
        do {
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x43b0) + 8 + lStack_168 * 8) +
                   (longlong)(iVar5 + 0x20);
          *(undefined1 *)(lVar16 + lVar20) = *(undefined1 *)(lVar16 + -1);
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x43b8) + 8 + lStack_168 * 8) + lVar18;
          *(undefined1 *)(lVar16 + lVar20) = *(undefined1 *)(lVar16 + -1);
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x43c0) + 8 + lStack_168 * 8) + lVar18;
          *(undefined1 *)(lVar16 + lVar20) = *(undefined1 *)(lVar16 + -1);
          lVar20 = lVar20 + 1;
        } while (lVar20 < 4);
      }
      uVar19 = (ulonglong)uStack_148;
      *piStack_108 = uVar17 + iStack_160;
      *(longlong *)(param_2 + 0xf00) = *(longlong *)(param_2 + 0xf00) + 0x4c;
      *(undefined4 *)(param_2 + 0xf10) = 1;
      *(longlong *)(param_2 + 0xf00) =
           *(longlong *)(param_2 + 0xf00) +
           (ulonglong)(uint)(*(int *)(param_2 + 0xf08) * *(int *)(param_1 + 0x438c)) * 0x4c;
      iStack_15c = iStack_15c + 1 + *(int *)(param_1 + 0x438c);
      param_3 = iStack_134;
    } while (iStack_15c < *(int *)(param_1 + 0x1e74));
  }
  if (param_3 == *(int *)(param_1 + 0x1e74) + -1) {
    ReleaseSemaphore(*(undefined8 *)(param_1 + 0x4400),1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}





