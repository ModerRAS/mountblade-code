#include "TaleWorlds.Native.Split.h"

// 03_rendering_part080.c - 3 个函数

// 函数: void rendering_system_process_render_data(void)
// 渲染系统数据处理函数
// 处理渲染对象的坐标变换、颜色计算和渲染参数设置
void rendering_system_process_render_data(void)

{
  uint render_flags;
  ushort coord_x;
  ushort coord_y;
  ushort prev_coord_x;
  ushort prev_coord_y;
  longlong render_context;
  int render_param;
  int texture_id;
  ulonglong color_data;
  byte alpha_value;
  int vertex_count;
  undefined4 render_mode;
  longlong object_ptr;
  longlong scene_ptr;
  char render_state;
  int frame_counter;
  undefined4 render_flags_ext;
  byte visibility_flag;
  int index_offset;
  longlong shader_ptr;
  float position_x;
  undefined8 matrix_data;
  undefined1 transform_matrix[16];
  undefined1 color_matrix[16];
  undefined1 projection_matrix[16];
  undefined1 view_matrix[16];
  float depth_value;
  undefined1 normal_matrix[16];
  undefined1 texture_matrix[16];
  undefined1 light_matrix[16];
  ulonglong vertex_buffer;
  undefined1 shadow_matrix[16];
  undefined1 fog_matrix[16];
  float rotation_angle;
  float camera_distance;
  uint material_flags;
  float scale_factor;
  float blend_factor;
  float opacity;
  undefined4 blend_mode;
  undefined4 color_r;
  undefined4 color_g;
  undefined4 color_b;
  float position_y;
  float position_z;
  float light_intensity;
  undefined2 texture_coord;
  float world_x;
  int render_pass;
  float screen_x;
  undefined4 screen_flags;
  undefined8 viewport_data;
  float world_y;
  float world_z;
  int pixel_x;
  undefined1 render_opcode;
  float clip_x;
  float clip_y;
  int pixel_y;
  int pixel_z;
  undefined8 transform_result;
  undefined8 extraout_XMM0_Qb;
  undefined1 final_matrix[16];
  
  fVar15 = (float)*(byte *)(unaff_RBP + 0xa9) * unaff_XMM10_Da;
  if (unaff_XMM12_Da <= (float)in_EAX * unaff_XMM10_Da) {
    unaff_XMM14_Da = (float)in_EAX * unaff_XMM10_Da;
  }
  fVar30 = unaff_XMM12_Da;
  if (unaff_XMM12_Da <= fVar15) {
    fVar30 = fVar15;
    unaff_XMM12_Db = 0;
    unaff_XMM12_Dc = 0;
    unaff_XMM12_Dd = 0;
  }
  fVar31 = (float)*(byte *)(unaff_RBP + -0x5c) * unaff_XMM10_Da;
  fVar15 = (float)*(byte *)(unaff_RBP + -0x5b) * unaff_XMM10_Da;
  fVar32 = (fVar31 + fVar31) - unaff_XMM11_Da;
  fVar31 = unaff_XMM11_Da - (fVar15 + fVar15);
  *(float *)(unaff_RBP + -0x78) = fVar31;
  fVar15 = (float)*(byte *)(unaff_RBP + -0x5a) * unaff_XMM10_Da;
  fStack0000000000000028 = (fVar15 + fVar15) - unaff_XMM11_Da;
  fVar15 = (float)*(byte *)(unaff_RBP + -0x59) * unaff_XMM10_Da;
  _fStack0000000000000058 = CONCAT44(fStack000000000000005c,unaff_XMM11_Da - (fVar15 + fVar15));
  _fStack0000000000000048 =
       CONCAT44(uStack000000000000004c,(float)*(byte *)(unaff_RBP + -0x58) * unaff_XMM10_Da);
  bVar9 = (byte)(*(uint *)(unaff_RBP + -0x60) >> 0x14) & unaff_R14B;
  fVar15 = (float)*(byte *)(unaff_RBP + -0x57) * unaff_XMM10_Da;
  uVar16 = FUN_1803109a0(fVar15,0xf0,(byte)(*(uint *)(unaff_RBP + -0x60) >> 4) & unaff_R14B);
  uVar16 = FUN_1803109a0(uVar16,0xf1,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0xe),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 6) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf2,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0xf),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 7) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf3,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0xd),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 5) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf6,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0x17),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 0xf) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf4,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0x14),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 0xc) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf5,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0x16),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 0xe) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf7,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0x15),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 0xd) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xfa,bVar9);
  uVar16 = FUN_1803109a0(uVar16,0xfb,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0xb),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 3) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf8,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0x12),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 10) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xf9,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 0x13),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 0xb) & unaff_R14B));
  uVar16 = FUN_1803109a0(uVar16,0xfc,
                         CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 9),
                                  (byte)(*(uint *)(unaff_RBP + -0x60) >> 1) & unaff_R14B));
  FUN_1803109a0(uVar16,0xfd,
                CONCAT31((uint3)(*(uint *)(unaff_RBP + -0x60) >> 10),
                         (byte)(*(uint *)(unaff_RBP + -0x60) >> 2) & unaff_R14B));
  if (fStack0000000000000048 <= unaff_XMM12_Da) {
    in_stack_00000050 = 0;
  }
  else {
    in_stack_00000050 = CONCAT44(unaff_R13D,fStack0000000000000048);
    _fStack0000000000000048 = in_stack_00000050;
  }
  _fStack0000000000000048 = CONCAT14(0xfe,fStack0000000000000048);
  FUN_180310a00();
  if (fVar15 <= unaff_XMM12_Da) {
    in_stack_00000050 = 0;
  }
  else {
    _fStack0000000000000048 = CONCAT44(unaff_R13D,fVar15);
    in_stack_00000050 = _fStack0000000000000048;
  }
  _fStack0000000000000048 = CONCAT14(0xff,fStack0000000000000048);
  FUN_180310a00();
  uVar33 = (undefined2)((uint)fVar15 >> 0x10);
  iVar7 = *(int *)(_DAT_180c86920 + 0x2300);
  cVar12 = (char)unaff_R13D;
  if (*(byte *)(unaff_RBP + -0x2c) < unaff_R14B) {
    if ((((*(float *)(unaff_RSI + 0x68) != unaff_XMM7_Da) && (*(float *)(unaff_RSI + 0x68) <= 0.2))
        && (*(char *)(unaff_RSI + 0x7c) == cVar12)) &&
       (fVar15 = *(float *)(unaff_RSI + 0x74) - *(float *)(unaff_RSI + 0x6c),
       fVar22 = *(float *)(unaff_RSI + 0x78) - *(float *)(unaff_RSI + 0x70),
       fVar15 = SQRT(fVar15 * fVar15 + fVar22 * fVar22), fVar15 <= 35.0)) {
      _fStack0000000000000048 = 0x3f800000;
      _fStack0000000000000070 = 0x3f800000;
      uStack000000000000006c = 0xe7;
      FUN_180310a00(fVar15,&stack0x00000068);
    }
    _fStack0000000000000070 = 0;
    uStack000000000000006c = 0xe7;
    FUN_180310a00();
    *(char *)(unaff_RSI + 0x7c) = cVar12;
    *(undefined4 *)(unaff_RSI + 0x68) = 0xbf800000;
    *(undefined8 *)(unaff_RSI + 0x6c) = 0;
    *(undefined8 *)(unaff_RSI + 0x74) = 0;
    bVar9 = 0;
  }
  else {
    if (bVar9 != 0) {
      *(byte *)(unaff_RSI + 0x7c) = unaff_R14B;
    }
    if (*(float *)(unaff_RSI + 0x68) == unaff_XMM7_Da) {
      fVar15 = 0.0;
      _fStack0000000000000048 =
           CONCAT44((float)*(ushort *)(unaff_RBP + -0x22),(float)*(ushort *)(unaff_RBP + -0x24));
      *(undefined8 *)(unaff_RSI + 0x6c) = _fStack0000000000000048;
    }
    else {
      fVar15 = *(float *)(unaff_RSI + 0x68) + _DAT_180bf3ff8;
    }
    *(float *)(unaff_RSI + 0x68) = fVar15;
    in_stack_00000050 = 0;
    _fStack0000000000000048 = CONCAT14(0xe7,fStack0000000000000048);
    FUN_180310a00();
    _fStack0000000000000048 =
         CONCAT44((float)*(ushort *)(unaff_RBP + -0x22),(float)*(ushort *)(unaff_RBP + -0x24));
    *(undefined8 *)(unaff_RSI + 0x74) = _fStack0000000000000048;
    bVar9 = unaff_R14B;
  }
  *(byte *)(unaff_RSI + 0x7d) = bVar9;
  lVar14 = _DAT_180c868d0;
  fVar15 = fVar32 * fVar32 + fVar31 * fVar31;
  if (unaff_XMM14_Da * unaff_XMM14_Da <= fVar15) {
    fVar31 = (float)DAT_180a401f0;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = CONCAT44(0,fVar15);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = CONCAT44(0,fVar15);
    auVar23 = rsqrtss(auVar27,auVar23);
    fVar32 = auVar23._0_4_;
    atan2f();
    fVar31 = (fVar32 * 0.5 * (fVar31 - fVar15 * fVar32 * fVar32) * fVar15 - unaff_XMM14_Da) /
             (unaff_XMM11_Da - unaff_XMM14_Da);
    fVar15 = (float)sinf();
    fVar32 = (float)((uint)(fVar15 * fVar31) ^ unaff_XMM9_Da);
    fVar15 = unaff_XMM7_Da;
    if ((unaff_XMM7_Da <= fVar32) && (fVar15 = fVar32, unaff_XMM11_Da <= fVar32)) {
      fVar15 = unaff_XMM11_Da;
    }
    fVar32 = (float)cosf();
    fVar32 = fVar32 * fVar31;
    fVar31 = unaff_XMM7_Da;
    if ((unaff_XMM7_Da <= fVar32) && (fVar31 = fVar32, unaff_XMM11_Da <= fVar32)) {
      fVar31 = unaff_XMM11_Da;
    }
    *(float *)(unaff_RBP + -0x78) = fVar15;
    *(float *)(unaff_RBP + -0x74) = fVar31;
    uVar16 = *(undefined8 *)(unaff_RBP + -0x78);
    *(char *)(lVar14 + 0x2028) = cVar12;
  }
  else {
    uVar16 = 0;
  }
  lVar6 = _DAT_180c86920;
  uVar11 = *(undefined4 *)(unaff_RBP + -0x34);
  *(undefined4 *)(unaff_RSI + 0x338) = *(undefined4 *)(unaff_RBP + -0x38);
  *(undefined4 *)(unaff_RSI + 0x340) = *(undefined4 *)(unaff_RBP + -0x30);
  *(undefined4 *)(unaff_RSI + 0x33c) = uVar11;
  *(undefined8 *)(unaff_RBP + -0x78) = uVar16;
  if (*(int *)(lVar6 + 0x2530) != unaff_R13D) {
    if (*(byte *)(unaff_RBP + -0x2c) < unaff_R14B) {
      *(int *)(unaff_RSI + 0x334) = unaff_R13D;
    }
    else {
      uVar2 = *(ushort *)(unaff_RBP + -0x24);
      uVar3 = *(ushort *)(unaff_RBP + -0x22);
      uVar4 = *(ushort *)(unaff_RSI + 0x334);
      uVar5 = *(ushort *)(unaff_RSI + 0x336);
      *(short *)(unaff_RSI + 0x334) = (short)(int)(float)uVar2;
      fVar31 = (float)uVar2 - (float)uVar4;
      fVar15 = (float)uVar3 - (float)uVar5;
      *(short *)(unaff_RSI + 0x336) = (short)(int)(float)uVar3;
      if ((((float)uVar4 != unaff_XMM8_Da) || ((float)uVar5 != unaff_XMM8_Da)) &&
         ((0.5 <= ABS(fVar31) || (0.5 <= ABS(fVar15))))) {
        iVar10 = (int)fVar31;
        _fStack0000000000000070 = CONCAT44(unaff_000000ac,unaff_R13D);
        iVar13 = (int)fVar15;
        iStack0000000000000068 = unaff_R13D;
        iStack0000000000000078 = iVar10;
        iStack000000000000007c = iVar13;
        FUN_1801edeb0();
        lVar14 = _DAT_180c868d0;
        if (*(char *)(_DAT_180c86950 + 0x1609) != cVar12) {
          _fStack0000000000000048 = CONCAT44(iVar13,iVar10);
          FUN_180174080(*(undefined8 *)(_DAT_180c86870 + 8),_fStack0000000000000048);
          lVar14 = _DAT_180c868d0;
        }
      }
      *(char *)(lVar14 + 0x2028) = cVar12;
    }
  }
  fVar15 = fStack0000000000000028 * fStack0000000000000028 +
           fStack0000000000000058 * fStack0000000000000058;
  auVar18._4_4_ = unaff_XMM12_Db;
  auVar18._0_4_ = fVar30;
  auVar18._8_4_ = unaff_XMM12_Dc;
  auVar18._12_4_ = unaff_XMM12_Dd;
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = fVar30 * fVar30;
  uVar17 = auVar19._0_8_;
  if (auVar19._0_4_ <= fVar15) {
    auVar23 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar31 = auVar23._0_4_;
    atan2f();
    fVar30 = (fVar31 * 0.5 * (3.0 - fVar15 * fVar31 * fVar31) * fVar15 - fVar30) /
             (unaff_XMM11_Da - fVar30);
    fVar15 = (float)sinf();
    fVar31 = (float)((uint)(fVar15 * fVar30) ^ unaff_XMM9_Da);
    fVar15 = unaff_XMM7_Da;
    if ((unaff_XMM7_Da <= fVar31) && (fVar15 = fVar31, unaff_XMM11_Da <= fVar31)) {
      fVar15 = unaff_XMM11_Da;
    }
    auVar20._0_8_ = cosf();
    auVar20._8_8_ = extraout_XMM0_Qb;
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = (float)auVar20._0_8_ * fVar30;
    uVar17 = auVar21._0_8_;
    if ((unaff_XMM7_Da <= auVar21._0_4_) &&
       (unaff_XMM7_Da = auVar21._0_4_, unaff_XMM11_Da <= auVar21._0_4_)) {
      unaff_XMM7_Da = unaff_XMM11_Da;
    }
    *(char *)(lVar14 + 0x2028) = cVar12;
  }
  else {
    fVar15 = 0.0;
    unaff_XMM7_Da = 0.0;
  }
  if (*(int *)(unaff_RBP + -0x60) != unaff_R13D) {
    *(char *)(lVar14 + 0x2028) = cVar12;
  }
  uStack000000000000006c = 0xde;
  _fStack0000000000000070 = uVar16;
  fStack0000000000000058 = fVar15;
  fStack000000000000005c = unaff_XMM7_Da;
  uVar16 = FUN_180310a00(uVar17,&stack0x00000068);
  uStack000000000000006c = 0xdf;
  fStack0000000000000070 = fVar15;
  fStack0000000000000074 = unaff_XMM7_Da;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  uVar1 = *(uint *)(unaff_RBP + -0x74);
  _fStack0000000000000070 = CONCAT44(unaff_R13D,uVar1);
  uStack000000000000006c = 0xe8;
  fStack0000000000000028 = (float)uVar1;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  fStack0000000000000028 = (float)(uVar1 ^ unaff_XMM9_Da);
  _fStack0000000000000070 = CONCAT44(unaff_R13D,fStack0000000000000028);
  uStack000000000000006c = 0xe9;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  uVar1 = *(uint *)(unaff_RBP + -0x78);
  _fStack0000000000000070 = CONCAT44(unaff_R13D,uVar1);
  uStack000000000000006c = 0xeb;
  fStack0000000000000028 = (float)uVar1;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  fStack0000000000000028 = (float)(uVar1 ^ unaff_XMM9_Da);
  _fStack0000000000000070 = CONCAT44(unaff_R13D,fStack0000000000000028);
  uStack000000000000006c = 0xea;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  fVar15 = fStack000000000000005c;
  fStack0000000000000028 = fStack000000000000005c;
  _fStack0000000000000070 = CONCAT44(unaff_R13D,fStack000000000000005c);
  uStack000000000000006c = 0xec;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  fStack0000000000000028 = (float)((uint)fVar15 ^ unaff_XMM9_Da);
  _fStack0000000000000070 = CONCAT44(unaff_R13D,fStack0000000000000028);
  uStack000000000000006c = 0xed;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  fVar15 = fStack0000000000000058;
  _fStack0000000000000058 = CONCAT44(unaff_R13D,fStack0000000000000058);
  _fStack0000000000000070 = _fStack0000000000000058;
  uStack000000000000006c = 0xef;
  uVar16 = FUN_180310a00(uVar16,&stack0x00000068);
  _fStack0000000000000058 = CONCAT44(unaff_R13D,(uint)fVar15 ^ unaff_XMM9_Da);
  _fStack0000000000000070 = _fStack0000000000000058;
  uStack000000000000006c = 0xee;
  FUN_180310a00(uVar16,&stack0x00000068);
  fVar15 = _DAT_180bf3ff8;
  uVar8 = 0;
  uVar26 = 0;
  if (*(char *)(unaff_RSI + 0x80) != cVar12) {
    uVar8 = (ulonglong)*(uint *)(unaff_RSI + 0x88);
    uVar26 = (ulonglong)*(uint *)(unaff_RSI + 0x84);
  }
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar26;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  bVar9 = *(byte *)(unaff_RSI + 0x7f);
  if (*(byte *)(unaff_RSI + 0x7f) != 0) {
    *(char *)(unaff_RSI + 0x7f) = cVar12;
    bVar9 = 0;
    if (*(byte *)(unaff_RSI + 400) < *(byte *)(unaff_RSI + 0x8c)) {
      uVar8 = (ulonglong)*(byte *)(unaff_RSI + 400);
      auVar24 = ZEXT416(*(uint *)(unaff_RSI + 0x90 + uVar8 * 4));
      *(float *)(unaff_RSI + 0x110 + uVar8 * 4) = *(float *)(unaff_RSI + 0x110 + uVar8 * 4) - fVar15
      ;
      if (*(float *)(unaff_RSI + 0x110 + (ulonglong)*(byte *)(unaff_RSI + 400) * 4) <= unaff_XMM8_Da
         ) {
        *(byte *)(unaff_RSI + 400) = *(byte *)(unaff_RSI + 400) + 1;
      }
      *(byte *)(unaff_RSI + 0x7f) = unaff_R14B;
      bVar9 = unaff_R14B;
    }
    if (*(byte *)(unaff_RSI + 0x191) < *(byte *)(unaff_RSI + 0x8d)) {
      uVar8 = (ulonglong)*(byte *)(unaff_RSI + 0x191);
      auVar28 = ZEXT416(*(uint *)(unaff_RSI + 0xd0 + uVar8 * 4));
      *(float *)(unaff_RSI + 0x150 + uVar8 * 4) = *(float *)(unaff_RSI + 0x150 + uVar8 * 4) - fVar15
      ;
      if (*(float *)(unaff_RSI + 0x150 + (ulonglong)*(byte *)(unaff_RSI + 0x191) * 4) <=
          unaff_XMM8_Da) {
        *(byte *)(unaff_RSI + 0x191) = *(byte *)(unaff_RSI + 0x191) + 1;
      }
      *(byte *)(unaff_RSI + 0x7f) = unaff_R14B;
      bVar9 = unaff_R14B;
    }
  }
  if ((iVar7 != 0) && ((*(char *)(unaff_RSI + 0x80) != cVar12 || (bVar9 != 0)))) {
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = auVar24._0_4_ * 255.0;
    auVar29._4_12_ = auVar28._4_12_;
    auVar29._0_4_ = auVar28._0_4_ * 255.0;
    FUN_1808eecf0(*(undefined4 *)(unaff_RSI + 0x330),&stack0x00000020,auVar25._0_8_,auVar29._0_8_,
                  CONCAT22(uVar33,CONCAT11((char)(int)auVar29._0_4_,(char)(int)auVar25._0_4_)));
    fVar15 = _DAT_180bf3ff8;
  }
  if (*(char *)(unaff_RSI + 0x192) == cVar12) {
    uVar11 = 4;
    *(undefined4 *)(unaff_RSI + 100) = 4;
    iVar7 = FUN_1808ee530(*(undefined4 *)(unaff_RSI + 0x330),&stack0x00000038);
    if ((iVar7 == 0) && (in_stack_00000038 != 0)) {
      if (in_stack_00000038 == 1) {
        uVar11 = 2;
      }
      *(undefined4 *)(unaff_RSI + 100) = uVar11;
    }
    *(undefined1 *)(unaff_RSI + 0x7e) = 1;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xc0) ^ (ulonglong)&stack0x00000000);
  }
  bVar9 = *(byte *)(unaff_RSI + 0x318);
  *(char *)(unaff_RSI + 0x192) = cVar12;
  if (bVar9 < *(byte *)(unaff_RSI + 0x194)) {
    *(float *)(unaff_RSI + 0x298 + (ulonglong)bVar9 * 4) =
         *(float *)(unaff_RSI + 0x298 + (ulonglong)bVar9 * 4) - fVar15;
    if (*(float *)(unaff_RSI + 0x298 + (ulonglong)*(byte *)(unaff_RSI + 0x318) * 4) <= unaff_XMM8_Da
       ) {
      *(byte *)(unaff_RSI + 0x318) = *(byte *)(unaff_RSI + 0x318) + 1;
    }
    *(byte *)(unaff_RSI + 0x192) = unaff_R14B;
  }
  bVar9 = *(byte *)(unaff_RSI + 0x319);
  if (bVar9 < *(byte *)(unaff_RSI + 0x195)) {
    *(float *)(unaff_RSI + 0x2d8 + (ulonglong)bVar9 * 4) =
         *(float *)(unaff_RSI + 0x2d8 + (ulonglong)bVar9 * 4) - fVar15;
    if (*(float *)(unaff_RSI + 0x2d8 + (ulonglong)*(byte *)(unaff_RSI + 0x319) * 4) <= unaff_XMM8_Da
       ) {
      *(byte *)(unaff_RSI + 0x319) = *(byte *)(unaff_RSI + 0x319) + 1;
    }
    *(byte *)(unaff_RSI + 0x192) = unaff_R14B;
  }
                    // WARNING: Subroutine does not return
  memset(unaff_RBP + 0x20,0,0x78);
}





// 函数: void rendering_system_finalize_render_process(void)
// 渲染系统最终处理函数
// 完成渲染流程的最后步骤，设置渲染状态并清理资源
void rendering_system_finalize_render_process(void)

{
  undefined4 render_result;
  longlong render_context;
  longlong scene_object;
  undefined4 render_flags;
  int render_mode;
  
  // 根据渲染模式设置最终结果
  if (render_mode != 0) {
    if (render_mode == 1) {
      render_result = render_flags;
    }
    *(undefined4 *)(scene_object + 100) = render_result;
  }
  
  // 标记渲染完成并执行最终清理
  *(undefined1 *)(scene_object + 0x7e) = 1;
                    // WARNING: Subroutine does not return
  rendering_system_cleanup_render_context(*(ulonglong *)(render_context + 0xc0) ^ (ulonglong)&render_mode);
}





// 函数: void rendering_system_set_render_parameter(undefined4 param_1,undefined1 param_2,char param_3)
// 渲染系统参数设置函数
// 设置渲染参数，包括透明度、混合模式等渲染状态
void rendering_system_set_render_parameter(undefined4 param_1,undefined1 param_2,char param_3)

{
  undefined1 render_stack[4];
  undefined1 parameter_type;
  undefined8 parameter_value;
  
  parameter_type = param_2;
  if (param_3 != '\0') {
    parameter_value = 0x3f800000;  // 1.0f - 完全不透明
    rendering_system_execute_render_command(0x3f800000,render_stack);
    return;
  }
  parameter_value = 0;  // 0.0f - 完全透明
  rendering_system_execute_render_command(param_1,render_stack);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



