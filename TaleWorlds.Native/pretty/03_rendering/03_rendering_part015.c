#include "TaleWorlds.Native.Split.h"

// 03_rendering_part015.c - 5 个函数

// 函数: void FUN_180276ade(longlong param_1)
// 渲染对象矩阵变换和可见性检查
void render_object_matrix_transform(longlong render_context)

{
  uint *buffer_lock;                // 缓冲区锁指针
  uint64_t *buffer_data;          // 缓冲区数据指针
  float projection_matrix[16];      // 投影矩阵
  float view_matrix[16];            // 视图矩阵
  float model_matrix[16];           // 模型矩阵
  uint lock_state;                  // 锁状态
  longlong buffer_base;             // 缓冲区基地址
  float bounding_box_min[3];        // 边界框最小值
  float bounding_box_max[3];        // 边界框最大值
  float vertex_positions[8];         // 顶点位置数组
  float frustum_planes[6][4];       // 视锥体平面
  float transformed_vertices[8];    // 变换后的顶点
  float screen_coords[2];           // 屏幕坐标
  float depth_values[2];            // 深度值
  uint64_t matrix_data_1;         // 矩阵数据1
  uint64_t matrix_data_2;         // 矩阵数据2
  int32_t shader_id;             // 着色器ID
  longlong current_renderer;        // 当前渲染器
  float *render_matrix;             // 渲染矩阵指针
  longlong render_state;            // 渲染状态
  uint64_t *render_context;       // 渲染上下文
  float *view_matrix_ptr;           // 视图矩阵指针
  float *object_matrix;             // 对象矩阵
  longlong render_slot_index;       // 渲染槽索引
  longlong render_params;           // 渲染参数
  char render_flags;                // 渲染标志
  longlong texture_manager;         // 纹理管理器
  longlong render_object;           // 渲染对象
  float distance_values[16];        // 距离值数组
  float scale_factors[8];           // 缩放因子数组
  float rotation_angles[8];         // 旋转角度数组
  float transform_matrix[16];      // 变换矩阵
  float clip_coords[8];             // 裁剪坐标
  float screen_bounds[4];           // 屏幕边界
  float depth_bounds[2];            // 深度边界
  int32_t frustum_plane_1[4];    // 视锥体平面1
  float intersection_result_1;      // 相交结果1
  int32_t frustum_plane_2[4];    // 视锥体平面2
  float intersection_result_2;      // 相交结果2
  int32_t frustum_plane_3[4];    // 视锥体平面3
  float intersection_result_3;      // 相交结果3
  int32_t frustum_plane_4[4];    // 视锥体平面4
  int32_t frustum_plane_5[4];    // 视锥体平面5
  int32_t frustum_plane_6[4];    // 视锥体平面6
  float viewport_x;                 // 视口X坐标
  float viewport_y;                 // 视口Y坐标
  float viewport_width;             // 视口宽度
  float viewport_height;            // 视口高度
  float clip_space_x;               // 裁剪空间X
  float clip_space_y;               // 裁剪空间Y
  float clip_space_z;               // 裁剪空间Z
  float clip_space_w;               // 裁剪空间W
  int32_t render_target_1;       // 渲染目标1
  int32_t render_target_2;       // 渲染目标2
  uint64_t render_data_1;         // 渲染数据1
  uint64_t render_data_2;         // 渲染数据2
  float render_depth;               // 渲染深度
  float render_depth_far;           // 远平面深度
  float depth_range;                // 深度范围
  int32_t cull_mode;             // 剔除模式
  int32_t blend_mode;            // 混合模式
  int32_t stencil_mode;          // 模板模式
  float screen_x;                   // 屏幕X坐标
  float screen_y;                   // 屏幕Y坐标
  float screen_depth;               // 屏幕深度
  float object_depth;               // 对象深度
  int32_t visibility_flag;      // 可见性标志
  
  // 保存视锥体平面数据到渲染参数
  *(float *)(render_params + -0x58) = frustum_plane_1[0];
  *(float *)(render_params + -0x54) = frustum_plane_1[1];
  *(float *)(render_params + -0x50) = frustum_plane_1[2];
  *(float *)(render_params + -0x4c) = frustum_plane_1[3];
  *(float *)(render_params + -0x68) = frustum_plane_2[0];
  *(float *)(render_params + -100) = frustum_plane_2[1];
  *(float *)(render_params + -0x60) = frustum_plane_2[2];
  *(float *)(render_params + -0x5c) = frustum_plane_2[3];
  *(float *)(render_params + -0x78) = frustum_plane_3[0];
  *(float *)(render_params + -0x74) = frustum_plane_3[1];
  *(float *)(render_params + -0x70) = frustum_plane_3[2];
  *(float *)(render_params + -0x6c) = frustum_plane_3[3];
  // 获取投影矩阵
  if (current_renderer == render_context) {
    render_matrix = (float *)(render_state + 0x330);
  }
  else {
    render_matrix = (float *)(**(code **)(current_renderer + 0x158))();
  }
  fVar27 = *(float *)(unaff_R15 + 0x70);
  fVar28 = *(float *)(unaff_R15 + 0x74);
  fVar29 = *(float *)(unaff_R15 + 0x78);
  fVar10 = *(float *)(unaff_R15 + 0x7c);
  fVar11 = *(float *)(unaff_R15 + 0x80);
  fVar12 = *(float *)(unaff_R15 + 0x84);
  fVar13 = *(float *)(unaff_R15 + 0x88);
  fVar14 = *(float *)(unaff_R15 + 0x8c);
  fVar15 = *(float *)(unaff_R15 + 0x90);
  fVar16 = *(float *)(unaff_R15 + 0x94);
  fVar17 = *(float *)(unaff_R15 + 0x98);
  fVar18 = *(float *)(unaff_R15 + 0x9c);
  fVar24 = pfVar22[1];
  fVar26 = *pfVar22;
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[5];
  fVar25 = pfVar22[9];
  fVar4 = pfVar22[0xd];
  fVar5 = pfVar22[4];
  fVar39 = fVar24 * fVar11 + fVar26 * fVar27 + fVar31 * fVar15;
  fVar40 = fVar24 * fVar12 + fVar26 * fVar28 + fVar31 * fVar16;
  fVar41 = fVar24 * fVar13 + fVar26 * fVar29 + fVar31 * fVar17;
  fVar6 = pfVar22[6];
  fVar30 = unaff_RDI[1];
  fVar7 = pfVar22[8];
  fVar36 = fVar3 * fVar11 + fVar5 * fVar27 + fVar6 * fVar15;
  fVar37 = fVar3 * fVar12 + fVar5 * fVar28 + fVar6 * fVar16;
  fVar38 = fVar3 * fVar13 + fVar5 * fVar29 + fVar6 * fVar17;
  *(float *)(unaff_RBP + -0xc) = fVar39;
  *(float *)((longlong)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((longlong)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
  fVar24 = pfVar22[10];
  fVar26 = pfVar22[0xc];
  fVar31 = unaff_RDI[2];
  fVar32 = fVar25 * fVar11 + fVar7 * fVar27 + fVar24 * fVar15;
  fVar33 = fVar25 * fVar12 + fVar7 * fVar28 + fVar24 * fVar16;
  fVar34 = fVar25 * fVar13 + fVar7 * fVar29 + fVar24 * fVar17;
  fVar35 = fVar25 * fVar14 + fVar7 * fVar10 + fVar24 * fVar18;
  fVar24 = pfVar22[0xe];
  fVar7 = *(float *)(unaff_R15 + 0xac);
  fVar25 = *unaff_RDI;
  fVar27 = fVar4 * fVar11 + fVar26 * fVar27 + fVar24 * fVar15 + *(float *)(unaff_R15 + 0xa0);
  fVar28 = fVar4 * fVar12 + fVar26 * fVar28 + fVar24 * fVar16 + *(float *)(unaff_R15 + 0xa4);
  fVar29 = fVar4 * fVar13 + fVar26 * fVar29 + fVar24 * fVar17 + *(float *)(unaff_R15 + 0xa8);
  *(float *)(unaff_RBP + -10) = fVar36;
  *(float *)((longlong)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((longlong)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((longlong)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((longlong)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((longlong)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((longlong)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  in_stack_00000030 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  in_stack_00000038 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  in_stack_00000040 = CONCAT44(fStack0000000000000034,in_stack_00000030);
  in_stack_00000048 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,in_stack_00000038);
  lVar23 = (longlong)unaff_R12B * 0x100;
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[3];
  unaff_RBP[8] = uVar19;
  unaff_RBP[9] = uVar20;
  *(float *)(unaff_RBP + 10) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((longlong)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  in_stack_00000030 = in_stack_00000030 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((longlong)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((longlong)unaff_RBP + -4) = fVar3;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000003c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  in_stack_00000038 = in_stack_00000038 - fVar31;
  FUN_180285b40(unaff_RBP + -4,&fStackX_20,&stack0x00000030);
  in_stack_00000048 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((longlong)unaff_RBP + -0x2c);
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
  in_stack_00000060 = fVar31 * fVar39 + fVar24 * fVar40 + fVar26 * fVar41;
  fStack0000000000000064 = fVar31 * fVar36 + fVar24 * fVar37 + fVar26 * fVar38;
  in_stack_00000068 = fVar31 * fVar32 + fVar24 * fVar33 + fVar26 * fVar34;
  fStack000000000000006c = fVar31 * fVar35 + fVar24 * fVar35 + fVar26 * fVar35;
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  in_stack_00000058 = pfVar22[2];
  fVar31 = pfVar22[3];
  unaff_RBP[0xc] = uVar19;
  unaff_RBP[0xd] = uVar20;
  *(float *)(unaff_RBP + 0xe) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  in_stack_00000050 = in_stack_00000060 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x1c) = fVar31;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000005c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar26;
  in_stack_00000058 = in_stack_00000068 - in_stack_00000058;
  FUN_180285b40(fVar26,&stack0x00000070,&stack0x00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= fStack0000000000000028)) &&
      (fStack0000000000000028 < *(float *)(unaff_RBX + 0x22c) ||
       fStack0000000000000028 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar21 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = uStack0000000000000070;
    *(int32_t *)((longlong)unaff_RBP + 0x34) = uStack0000000000000074;
    *(int32_t *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((longlong)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((longlong)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(int32_t *)((longlong)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276d52(uint64_t param_1,longlong param_2,uint64_t param_3,longlong param_4,
// 渲染参数处理和边界检查
void render_parameter_processor(uint64_t render_system, longlong render_data, uint64_t texture_handle, longlong resource_pool, float depth_value)

{
  uint *puVar1;
  uint64_t *puVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int32_t uVar10;
  longlong unaff_RBX;
  uint64_t *unaff_RBP;
  int32_t unaff_EDI;
  longlong unaff_R14;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  
  do {
    LOCK();
    puVar1 = (uint *)(param_4 + param_2);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar4 & 1) != 0);
  puVar2 = (uint64_t *)(param_4 + 4 + param_2);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  pfVar3 = (float *)(param_4 + 0x14 + param_2);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fStack0000000000000058 = pfVar3[2];
  fVar7 = pfVar3[3];
  unaff_RBP[0xc] = uVar8;
  unaff_RBP[0xd] = uVar9;
  *(float *)(unaff_RBP + 0xe) = fVar5;
  *(float *)((longlong)unaff_RBP + 0x74) = fVar6;
  *(float *)(unaff_RBP + 0xf) = fStack0000000000000058;
  *(float *)((longlong)unaff_RBP + 0x7c) = fVar7;
  *unaff_RBP = uVar8;
  unaff_RBP[1] = uVar9;
  fStack0000000000000050 = fStack0000000000000060 - fVar5;
  *(float *)(unaff_RBP + 2) = fVar5;
  *(float *)((longlong)unaff_RBP + 0x14) = fVar6;
  *(float *)(unaff_RBP + 3) = fStack0000000000000058;
  *(float *)((longlong)unaff_RBP + 0x1c) = fVar7;
  *(int32_t *)(param_4 + param_2) = unaff_EDI;
  uStack000000000000005c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar6;
  fStack0000000000000058 = in_stack_00000068 - fStack0000000000000058;
  FUN_180285b40(fVar6,&stack0x00000070,&stack0x00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= param_5)) &&
      (param_5 < *(float *)(unaff_RBX + 0x22c) || param_5 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar10 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar10;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = unaff_EDI;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = uStack0000000000000070;
    *(int32_t *)((longlong)unaff_RBP + 0x34) = uStack0000000000000074;
    *(int32_t *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((longlong)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((longlong)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = param_5;
    *(int32_t *)((longlong)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276eef(void)
// 渲染堆栈清理函数
void render_stack_cleanup(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x80) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276f1a(void)
// 渲染对象深度计算和可见性测试
void render_object_depth_test(void)

{
  uint *puVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int32_t uVar21;
  longlong in_RAX;
  float *pfVar22;
  longlong unaff_RBX;
  uint64_t *unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  longlong lVar23;
  char unaff_R12B;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  int32_t uStack0000000000000070;
  int32_t uStack0000000000000074;
  int32_t in_stack_00000078;
  
  pfVar22 = (float *)(**(code **)(in_RAX + 0x158))();
  fVar27 = *(float *)(unaff_R15 + 0x70);
  fVar28 = *(float *)(unaff_R15 + 0x74);
  fVar29 = *(float *)(unaff_R15 + 0x78);
  fVar10 = *(float *)(unaff_R15 + 0x7c);
  fVar11 = *(float *)(unaff_R15 + 0x80);
  fVar12 = *(float *)(unaff_R15 + 0x84);
  fVar13 = *(float *)(unaff_R15 + 0x88);
  fVar14 = *(float *)(unaff_R15 + 0x8c);
  fVar15 = *(float *)(unaff_R15 + 0x90);
  fVar16 = *(float *)(unaff_R15 + 0x94);
  fVar17 = *(float *)(unaff_R15 + 0x98);
  fVar18 = *(float *)(unaff_R15 + 0x9c);
  fVar24 = pfVar22[1];
  fVar26 = *pfVar22;
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[5];
  fVar25 = pfVar22[9];
  fVar4 = pfVar22[0xd];
  fVar5 = pfVar22[4];
  fVar39 = fVar24 * fVar11 + fVar26 * fVar27 + fVar31 * fVar15;
  fVar40 = fVar24 * fVar12 + fVar26 * fVar28 + fVar31 * fVar16;
  fVar41 = fVar24 * fVar13 + fVar26 * fVar29 + fVar31 * fVar17;
  fVar6 = pfVar22[6];
  fVar30 = unaff_RDI[1];
  fVar7 = pfVar22[8];
  fVar36 = fVar3 * fVar11 + fVar5 * fVar27 + fVar6 * fVar15;
  fVar37 = fVar3 * fVar12 + fVar5 * fVar28 + fVar6 * fVar16;
  fVar38 = fVar3 * fVar13 + fVar5 * fVar29 + fVar6 * fVar17;
  *(float *)(unaff_RBP + -0xc) = fVar39;
  *(float *)((longlong)unaff_RBP + -0x5c) = fVar40;
  *(float *)(unaff_RBP + -0xb) = fVar41;
  *(float *)((longlong)unaff_RBP + -0x54) = fVar24 * fVar14 + fVar26 * fVar10 + fVar31 * fVar18;
  fVar24 = pfVar22[10];
  fVar26 = pfVar22[0xc];
  fVar31 = unaff_RDI[2];
  fVar32 = fVar25 * fVar11 + fVar7 * fVar27 + fVar24 * fVar15;
  fVar33 = fVar25 * fVar12 + fVar7 * fVar28 + fVar24 * fVar16;
  fVar34 = fVar25 * fVar13 + fVar7 * fVar29 + fVar24 * fVar17;
  fVar35 = fVar25 * fVar14 + fVar7 * fVar10 + fVar24 * fVar18;
  fVar24 = pfVar22[0xe];
  fVar7 = *(float *)(unaff_R15 + 0xac);
  fVar25 = *unaff_RDI;
  fVar27 = fVar4 * fVar11 + fVar26 * fVar27 + fVar24 * fVar15 + *(float *)(unaff_R15 + 0xa0);
  fVar28 = fVar4 * fVar12 + fVar26 * fVar28 + fVar24 * fVar16 + *(float *)(unaff_R15 + 0xa4);
  fVar29 = fVar4 * fVar13 + fVar26 * fVar29 + fVar24 * fVar17 + *(float *)(unaff_R15 + 0xa8);
  *(float *)(unaff_RBP + -10) = fVar36;
  *(float *)((longlong)unaff_RBP + -0x4c) = fVar37;
  *(float *)(unaff_RBP + -9) = fVar38;
  *(float *)((longlong)unaff_RBP + -0x44) = fVar3 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18;
  *(float *)(unaff_RBP + -8) = fVar32;
  *(float *)((longlong)unaff_RBP + -0x3c) = fVar33;
  *(float *)(unaff_RBP + -7) = fVar34;
  *(float *)((longlong)unaff_RBP + -0x34) = fVar35;
  fVar25 = fVar25 - fVar27;
  *(float *)(unaff_RBP + -6) = fVar27;
  *(float *)((longlong)unaff_RBP + -0x2c) = fVar28;
  *(float *)(unaff_RBP + -5) = fVar29;
  *(float *)((longlong)unaff_RBP + -0x24) =
       fVar4 * fVar14 + fVar26 * fVar10 + fVar24 * fVar18 + fVar7;
  fVar30 = fVar30 - fVar28;
  fVar31 = fVar31 - fVar29;
  in_stack_00000030 = fVar25 * fVar39 + fVar30 * fVar40 + fVar31 * fVar41;
  fStack0000000000000034 = fVar25 * fVar36 + fVar30 * fVar37 + fVar31 * fVar38;
  in_stack_00000038 = fVar25 * fVar32 + fVar30 * fVar33 + fVar31 * fVar34;
  in_stack_00000040 = CONCAT44(fStack0000000000000034,in_stack_00000030);
  in_stack_00000048 =
       CONCAT44(fVar25 * fVar35 + fVar30 * fVar35 + fVar31 * fVar35,in_stack_00000038);
  lVar23 = (longlong)unaff_R12B * 0x100;
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  fVar31 = pfVar22[2];
  fVar3 = pfVar22[3];
  unaff_RBP[8] = uVar19;
  unaff_RBP[9] = uVar20;
  *(float *)(unaff_RBP + 10) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x54) = fVar26;
  *(float *)(unaff_RBP + 0xb) = fVar31;
  *(float *)((longlong)unaff_RBP + 0x5c) = fVar3;
  unaff_RBP[-4] = uVar19;
  unaff_RBP[-3] = uVar20;
  in_stack_00000030 = in_stack_00000030 - fVar24;
  *(float *)(unaff_RBP + -2) = fVar24;
  *(float *)((longlong)unaff_RBP + -0xc) = fVar26;
  *(float *)(unaff_RBP + -1) = fVar31;
  *(float *)((longlong)unaff_RBP + -4) = fVar3;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000003c = 0x7f7fffff;
  fStack0000000000000034 = fStack0000000000000034 - fVar26;
  in_stack_00000038 = in_stack_00000038 - fVar31;
  FUN_180285b40(unaff_RBP + -4,&fStackX_20,&stack0x00000030);
  in_stack_00000048 = _fStack0000000000000028;
  fVar31 = *unaff_RSI - *(float *)(unaff_RBP + -6);
  fVar26 = unaff_RSI[2] - *(float *)(unaff_RBP + -5);
  fVar24 = unaff_RSI[1] - *(float *)((longlong)unaff_RBP + -0x2c);
  lVar9 = *(longlong *)(*(longlong *)(unaff_R15 + 0x260) + 0x18);
  in_stack_00000060 = fVar31 * fVar39 + fVar24 * fVar40 + fVar26 * fVar41;
  fStack0000000000000064 = fVar31 * fVar36 + fVar24 * fVar37 + fVar26 * fVar38;
  in_stack_00000068 = fVar31 * fVar32 + fVar24 * fVar33 + fVar26 * fVar34;
  fStack000000000000006c = fVar31 * fVar35 + fVar24 * fVar35 + fVar26 * fVar35;
  do {
    LOCK();
    puVar1 = (uint *)(lVar23 + lVar9);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
  } while ((uVar8 & 1) != 0);
  puVar2 = (uint64_t *)(lVar23 + 4 + lVar9);
  uVar19 = *puVar2;
  uVar20 = puVar2[1];
  pfVar22 = (float *)(lVar23 + 0x14 + lVar9);
  fVar24 = *pfVar22;
  fVar26 = pfVar22[1];
  in_stack_00000058 = pfVar22[2];
  fVar31 = pfVar22[3];
  unaff_RBP[0xc] = uVar19;
  unaff_RBP[0xd] = uVar20;
  *(float *)(unaff_RBP + 0xe) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x74) = fVar26;
  *(float *)(unaff_RBP + 0xf) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x7c) = fVar31;
  *unaff_RBP = uVar19;
  unaff_RBP[1] = uVar20;
  in_stack_00000050 = in_stack_00000060 - fVar24;
  *(float *)(unaff_RBP + 2) = fVar24;
  *(float *)((longlong)unaff_RBP + 0x14) = fVar26;
  *(float *)(unaff_RBP + 3) = in_stack_00000058;
  *(float *)((longlong)unaff_RBP + 0x1c) = fVar31;
  *(int32_t *)(lVar23 + lVar9) = 0;
  uStack000000000000005c = 0x7f7fffff;
  fStack0000000000000054 = fStack0000000000000064 - fVar26;
  in_stack_00000058 = in_stack_00000068 - in_stack_00000058;
  FUN_180285b40(fVar26,&stack0x00000070,&stack0x00000050);
  if ((((*(float *)(unaff_RBX + 0x214) <= fStackX_20) &&
       (fStackX_20 < *(float *)(unaff_RBX + 0x224) || fStackX_20 == *(float *)(unaff_RBX + 0x224)))
      && (*(float *)(unaff_RBX + 0x218) <= fStackX_24)) &&
     (((fStackX_24 < *(float *)(unaff_RBX + 0x228) || fStackX_24 == *(float *)(unaff_RBX + 0x228) &&
       (*(float *)(unaff_RBX + 0x21c) <= fStack0000000000000028)) &&
      (fStack0000000000000028 < *(float *)(unaff_RBX + 0x22c) ||
       fStack0000000000000028 == *(float *)(unaff_RBX + 0x22c))))) {
    if (*(int *)(unaff_RBX + 0x318) == -1) {
      *(int32_t *)(unaff_RBX + 0x314) = *(int32_t *)(unaff_RBP + 0x26);
      uVar21 = FUN_1801b9a40(unaff_R14 + 0x1218);
      *(int32_t *)(unaff_RBX + 0x318) = uVar21;
      LOCK();
      *(int32_t *)(unaff_RBX + 0x310) = 0;
      UNLOCK();
    }
    *(int32_t *)(unaff_RBP + 6) = uStack0000000000000070;
    *(int32_t *)((longlong)unaff_RBP + 0x34) = uStack0000000000000074;
    *(int32_t *)(unaff_RBP + 7) = in_stack_00000078;
    *(float *)((longlong)unaff_RBP + 0x3c) = (float)*(int *)(unaff_RBP + 0x27);
    *(float *)(unaff_RBP + 4) = fStackX_20;
    *(float *)((longlong)unaff_RBP + 0x24) = fStackX_24;
    *(float *)(unaff_RBP + 5) = fStack0000000000000028;
    *(int32_t *)((longlong)unaff_RBP + 0x2c) = 0x3e19999a;
    FUN_18020a7b0(unaff_RBX + 0x308,uStack0000000000000074,unaff_RBP + 4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(unaff_RBP[0x10] ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180276f30(longlong param_1,uint64_t *param_2,char param_3)
// 渲染边界框计算和碰撞检测
void render_bounding_box_calculation(longlong render_object, uint64_t *bounding_box, char include_children)

{
  longlong object_end_ptr;           // 对象数据结束指针
  uint64_t bounding_box_data;     // 边界框数据
  longlong object_start_ptr;        // 对象数据开始指针
  longlong *object_iterator;        // 对象迭代器
  float bounding_sphere_radius;     // 边界球半径
  float matrix_scale;               // 矩阵缩放值
  float min_distance;               // 最小距离
  float transformed_x;               // 变换后的X坐标
  float transformed_y;               // 变换后的Y坐标
  float transformed_z;               // 变换后的Z坐标
  float magnitude_squared;         // 平方值
  int8_t transform_stack [224]; // 变换堆栈
  
  // 获取对象的开始和结束指针
  object_end_ptr = *(longlong *)(render_object + 0x40);
  object_start_ptr = *(longlong *)(render_object + 0x38);
  *(int32_t *)(bounding_box + 6) = 0;
  // 如果对象为空，初始化边界框为零
  if (object_end_ptr - object_start_ptr >> 4 == 0) {
    *bounding_box = 0;
    bounding_box[1] = 0;
    bounding_box[2] = 0;
    bounding_box[3] = 0;
    bounding_box[4] = 0;
    bounding_box[5] = 0;
  }
  else {
    // 初始化边界框为最大/最小值
    *bounding_box = 0x4cbebc204cbebc20;  // 最小值
    bounding_box[1] = 0x7f7fffff4cbebc20; // 最大值
    *(int32_t *)(bounding_box + 4) = 0;
    *(int32_t *)((longlong)bounding_box + 0x24) = 0;
    *(int32_t *)(bounding_box + 5) = 0;
    *(int32_t *)((longlong)bounding_box + 0x2c) = 0x7f7fffff;
    bounding_box[2] = 0xccbebc20ccbebc20; // 最小值
    bounding_box[3] = 0x7f7fffffccbebc20; // 最大值
    // 遍历所有子对象并计算边界框
    object_iterator = *(longlong **)(render_object + 0x38);
    if (object_iterator < *(longlong **)(render_object + 0x40)) {
      do {
        longlong child_object = *object_iterator;
        if (include_children != '\0') {
          Render_UpdateObjectTransform(child_object);
        }
        // 获取对象的变换矩阵
        if (((*(byte *)(child_object + 0x100) & 0x20) == 0) || (*(longlong *)(render_object + 0x28) == 0)) {
          object_start_ptr = child_object + 0x120;
        }
        else {
          object_start_ptr = Render_GetTransformMatrix(child_object + 0x120, transform_stack, *(longlong *)(render_object + 0x28) + 0x70);
        }
        // 合并子对象的边界框
        Render_MergeBoundingBox(bounding_box, child_object + 0x274, object_start_ptr);
        object_iterator = object_iterator + 2;
      } while (object_iterator < *(longlong **)(render_object + 0x40));
    }
    // 如果只有一个对象且没有特殊标志，直接使用其边界框
    if (((*(longlong *)(render_object + 0x40) - (longlong)*(longlong **)(render_object + 0x38) &
         0xfffffffffffffff0U) == 0x10) &&
       (longlong single_object = **(longlong **)(render_object + 0x38), (*(uint *)(single_object + 0x100) & 0x4000000) == 0)) {
      bounding_box_data = *(uint64_t *)(single_object + 0x29c);
      bounding_box[4] = *(uint64_t *)(single_object + 0x294);
      bounding_box[5] = bounding_box_data;
      *(int32_t *)(bounding_box + 6) = *(int32_t *)(**(longlong **)(render_object + 0x38) + 0x2a4);
    }
    else {
      // 计算复杂的边界球半径
      Render_InitBoundingBox(bounding_box);
      object_iterator = *(longlong **)(render_object + 0x38);
      min_distance = 0.0;
      if (object_iterator < *(longlong **)(render_object + 0x40)) {
        do {
          longlong current_object = *object_iterator;
          if ((*(uint *)(current_object + 0x100) & 0x4000000) == 0) {
            // 直接使用边界框数据
            transformed_x = *(float *)(current_object + 0x294);
            transformed_y = *(float *)(current_object + 0x298);
            transformed_z = *(float *)(current_object + 0x29c);
            bounding_sphere_radius = *(float *)(current_object + 0x2a4);
          }
          else {
            // 计算变换后的边界球半径
            bounding_sphere_radius = *(float *)(current_object + 0x298);
            transformed_z = *(float *)(current_object + 0x294);
            matrix_scale = *(float *)(current_object + 0x29c);
            transformed_x = *(float *)(current_object + 0x130) * bounding_sphere_radius + *(float *)(current_object + 0x120) * transformed_z +
                    *(float *)(current_object + 0x140) * matrix_scale + *(float *)(current_object + 0x150);
            transformed_y = *(float *)(current_object + 0x134) * bounding_sphere_radius + *(float *)(current_object + 0x124) * transformed_z +
                    *(float *)(current_object + 0x144) * matrix_scale + *(float *)(current_object + 0x154);
            transformed_z = *(float *)(current_object + 0x138) * bounding_sphere_radius + *(float *)(current_object + 0x128) * transformed_z +
                     *(float *)(current_object + 0x148) * matrix_scale + *(float *)(current_object + 0x158);
            // 计算矩阵的缩放因子
            bounding_sphere_radius = *(float *)(current_object + 0x140) * *(float *)(current_object + 0x140) +
                    *(float *)(current_object + 0x144) * *(float *)(current_object + 0x144) +
                    *(float *)(current_object + 0x148) * *(float *)(current_object + 0x148);
            matrix_scale = *(float *)(current_object + 0x130) * *(float *)(current_object + 0x130) +
                    *(float *)(current_object + 0x134) * *(float *)(current_object + 0x134) +
                    *(float *)(current_object + 0x138) * *(float *)(current_object + 0x138);
            magnitude_squared = *(float *)(current_object + 0x120) * *(float *)(current_object + 0x120) +
                     *(float *)(current_object + 0x124) * *(float *)(current_object + 0x124) +
                     *(float *)(current_object + 0x128) * *(float *)(current_object + 0x128);
            // 选择最大的缩放因子
            if (magnitude_squared <= matrix_scale) {
              if (bounding_sphere_radius <= matrix_scale) {
                bounding_sphere_radius = matrix_scale;
              }
            }
            else if (bounding_sphere_radius <= magnitude_squared) {
              bounding_sphere_radius = magnitude_squared;
            }
            // 计算最终的边界球半径
            if ((bounding_sphere_radius - 1.0 <= -1e-06) || (1e-06 <= bounding_sphere_radius - 1.0)) {
              bounding_sphere_radius = SQRT(bounding_sphere_radius) * *(float *)(current_object + 0x2a4);
            }
            else {
              bounding_sphere_radius = *(float *)(current_object + 0x2a4) * 1.0;
            }
          }
          // 计算距离平方
          transformed_y = *(float *)((longlong)bounding_box + 0x24) - transformed_y;
          transformed_y = transformed_y * transformed_y +
                  (*(float *)(bounding_box + 4) - transformed_x) * (*(float *)(bounding_box + 4) - transformed_x) +
                  (*(float *)(bounding_box + 5) - transformed_z) * (*(float *)(bounding_box + 5) - transformed_z);
          transformed_x = min_distance - bounding_sphere_radius;
          if (transformed_x <= 0.0) {
            transformed_x = 0.0;
          }
          // 更新最小距离
          if (transformed_x * transformed_x < transformed_y) {
            min_distance = SQRT(transformed_y) + bounding_sphere_radius;
          }
          object_iterator = object_iterator + 2;
        } while (object_iterator < *(longlong **)(render_object + 0x40));
        // 更新边界框的距离值
        if ((0.0 < min_distance) && (min_distance < *(float *)(bounding_box + 6) || min_distance == *(float *)(bounding_box + 6)))
        {
          *(float *)(bounding_box + 6) = min_distance;
        }
      }
    }
  }
  return;
}





