#include "TaleWorlds.Native.Split.h"

// 03_rendering_part029.c - 渲染系统材质处理和比较模块
// 包含5个核心函数，涵盖渲染材质处理、数据比较、资源清理和渲染状态管理等功能

// 渲染材质处理函数 - 根据渲染标志处理材质数据和应用变换
void process_rendering_materials(longlong *render_context, longlong material_data, 
                                longlong source_data, longlong target_data, 
                                uint render_flags)
                  )

{
  undefined8 transform_matrix1;
  undefined4 *material_colors;
  longlong data_offset;
  uint material_index;
  ulonglong texture_hash;
  uint render_state;
  longlong buffer_ptr;
  undefined4 color_r1, color_g1, color_b1, color_a1;
  undefined4 color_r2, color_g2, color_b2, color_a2;
  undefined4 color_r3, color_g3, color_b3, color_a3;
  undefined4 color_r4, color_g4, color_b4, color_a4;
  undefined4 color_r5, color_g5, color_b5, color_a5;
  undefined4 color_r6, color_g6, color_b6, color_a6;
  longlong *texture_handles[2];
  undefined4 tex_coord_u1, tex_coord_v1;
  undefined4 tex_coord_u2, tex_coord_v2;
  undefined4 tex_coord_u3, tex_coord_v3;
  undefined4 tex_coord_u4, tex_coord_v4;
  undefined4 tex_coord_u5, tex_coord_v5;
  undefined4 tex_coord_u6, tex_coord_v6;
  undefined4 tex_coord_u7, tex_coord_v7;
  undefined4 tex_coord_u8, tex_coord_v8;
  undefined4 tex_coord_u9, tex_coord_v9;
  undefined4 tex_coord_u10, tex_coord_v10;
  undefined4 tex_coord_u11, tex_coord_v11;
  undefined4 tex_coord_u12, tex_coord_v12;
  undefined4 tex_coord_u13, tex_coord_v13;
  undefined4 tex_coord_u14, tex_coord_v14;
  undefined4 tex_coord_u15, tex_coord_v15;
  undefined4 tex_coord_u16, tex_coord_v16;
  undefined1 blend_params[64];
  
  // 检查是否启用了材质处理标志
  if ((render_flags >> 2 & 1) == 0) {
    // 检查是否启用了基础材质或高级材质标志
    if ((render_flags & 10) != 0) {
      // 从源数据复制变换矩阵到渲染上下文
      transform_matrix1 = *(undefined8 *)(source_data + 0x60);
      *(undefined8 *)((longlong)render_context + 0x214) = *(undefined8 *)(source_data + 0x58);
      *(undefined8 *)((longlong)render_context + 0x21c) = transform_matrix1;
      transform_matrix1 = *(undefined8 *)(source_data + 0x70);
      *(undefined8 *)((longlong)render_context + 0x224) = *(undefined8 *)(source_data + 0x68);
      *(undefined8 *)((longlong)render_context + 0x22c) = transform_matrix1;
      transform_matrix1 = *(undefined8 *)(source_data + 0x80);
      *(undefined8 *)((longlong)render_context + 0x234) = *(undefined8 *)(source_data + 0x78);
      *(undefined8 *)((longlong)render_context + 0x23c) = transform_matrix1;
      *(undefined4 *)((longlong)render_context + 0x244) = *(undefined4 *)(source_data + 0x88);
      
      // 从源数据提取材质颜色
      color_r1 = *(undefined4 *)(source_data + 0x18);
      color_g1 = *(undefined4 *)(source_data + 0x1c);
      color_b1 = *(undefined4 *)(source_data + 0x20);
      color_a1 = *(undefined4 *)(source_data + 0x24);
      color_r2 = *(undefined4 *)(source_data + 0x28);
      color_g2 = *(undefined4 *)(source_data + 0x2c);
      color_b2 = *(undefined4 *)(source_data + 0x30);
      color_a2 = *(undefined4 *)(source_data + 0x34);
      color_r3 = *(undefined4 *)(source_data + 0x38);
      color_g3 = *(undefined4 *)(source_data + 0x3c);
      color_b3 = *(undefined4 *)(source_data + 0x40);
      color_a3 = *(undefined4 *)(source_data + 0x44);
      color_r4 = *(undefined4 *)(source_data + 0x48);
      color_g4 = *(undefined4 *)(source_data + 0x4c);
      color_b4 = *(undefined4 *)(source_data + 0x50);
      color_a4 = *(undefined4 *)(source_data + 0x54);
      // 将颜色数据存储到栈中用于后续处理
      tex_coord_u1 = color_r1;
      tex_coord_v1 = color_g1;
      tex_coord_u2 = color_b1;
      tex_coord_v2 = color_a1;
      tex_coord_u3 = color_r2;
      tex_coord_v3 = color_g2;
      tex_coord_u4 = color_b2;
      tex_coord_v4 = color_a2;
      tex_coord_u5 = color_r3;
      tex_coord_v5 = color_g3;
      tex_coord_u6 = color_b3;
      tex_coord_v6 = color_a3;
      tex_coord_u7 = color_r4;
      tex_coord_v7 = color_g4;
      tex_coord_u8 = color_b4;
      tex_coord_v8 = color_a4;
      
      // 如果存在目标数据，则处理材质颜色
      if (target_data != 0) {
        material_colors = (undefined4 *)
                 process_material_colors(render_flags & 10, blend_params, &tex_coord_u1, target_data + 0x18,
                               1.0 - (*(float *)(material_data + 0x13c) - *(float *)(material_data + 0x144)) /
                                     *(float *)(material_data + 0x13c));
        color_r1 = *material_colors;
        color_g1 = material_colors[1];
        color_b1 = material_colors[2];
        color_a1 = material_colors[3];
        color_r2 = material_colors[4];
        color_g2 = material_colors[5];
        color_b2 = material_colors[6];
        color_a2 = material_colors[7];
        color_r3 = material_colors[8];
        color_g3 = material_colors[9];
        color_b3 = material_colors[10];
        color_a3 = material_colors[11];
        color_r4 = material_colors[12];
        color_g4 = material_colors[13];
        color_b4 = material_colors[14];
        color_a4 = material_colors[15];
      }
      *(undefined4 *)(param_1 + 0x66) = uVar8;
      *(undefined4 *)((longlong)param_1 + 0x334) = uVar9;
      *(undefined4 *)(param_1 + 0x67) = uVar10;
      *(undefined4 *)((longlong)param_1 + 0x33c) = uVar11;
      *(undefined4 *)(param_1 + 0x68) = uVar12;
      *(undefined4 *)((longlong)param_1 + 0x344) = uVar13;
      *(undefined4 *)(param_1 + 0x69) = uVar14;
      *(undefined4 *)((longlong)param_1 + 0x34c) = uVar15;
      *(undefined4 *)(param_1 + 0x6a) = uVar16;
      *(undefined4 *)((longlong)param_1 + 0x354) = uVar17;
      *(undefined4 *)(param_1 + 0x6b) = uVar18;
      *(undefined4 *)((longlong)param_1 + 0x35c) = uVar19;
      *(undefined4 *)(param_1 + 0x6c) = uVar20;
      *(undefined4 *)((longlong)param_1 + 0x364) = uVar21;
      *(undefined4 *)(param_1 + 0x6d) = uVar22;
      *(undefined4 *)((longlong)param_1 + 0x36c) = uVar23;
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_3 + 0x14);
      uVar4 = 0;
      uVar6 = (uint)(param_1[8] - param_1[7] >> 4);
      if (uVar6 != 0) {
        lVar7 = 0;
        do {
          uVar5 = (ulonglong)uVar4;
          if ((ulonglong)((*(longlong *)(param_3 + 0x98) - *(longlong *)(param_3 + 0x90)) / 0x1a0)
              <= uVar5) break;
          if ((param_4 == 0) ||
             ((ulonglong)((*(longlong *)(param_4 + 0x98) - *(longlong *)(param_4 + 0x90)) / 0x1a0)
              <= uVar5)) {
            lVar3 = 0;
          }
          else {
            lVar3 = uVar5 * 0x1a0 + *(longlong *)(param_4 + 0x90);
          }
          FUN_1803269f0(*(longlong *)(param_3 + 0x90) + uVar5 * 0x1a0,param_2,
                        *(undefined8 *)(lVar7 + param_1[7]),param_5,lVar3);
          uVar4 = uVar4 + 1;
          lVar7 = lVar7 + 0x10;
        } while (uVar4 < uVar6);
      }
      (**(code **)(*param_1 + 0xf8))(param_1,param_3 + 0x1b8);
    }
    if (((param_5 >> 4 & 1) != 0) && (0 < *(int *)(param_3 + 0x170))) {
      aplStackX_18[0] = (longlong *)0x0;
      FUN_1803276a0(param_2,aplStackX_18,param_3 + 0x160);
      if (aplStackX_18[0] != (longlong *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180281770(undefined8 *param_1,undefined8 param_2)
void FUN_180281770(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  bool bVar19;
  undefined1 auStack_538 [32];
  uint uStack_518;
  undefined **ppuStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  uint uStack_4f0;
  undefined4 uStack_4e8;
  longlong lStack_4e0;
  undefined8 uStack_4d8;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined4 uStack_4b8;
  undefined auStack_4b0 [136];
  undefined *puStack_428;
  undefined *puStack_420;
  undefined4 uStack_418;
  undefined1 auStack_410 [136];
  undefined *apuStack_388 [34];
  undefined *puStack_278;
  longlong lStack_270;
  undefined4 uStack_260;
  longlong alStack_258 [4];
  longlong alStack_238 [4];
  longlong alStack_218 [6];
  undefined *apuStack_1e8 [34];
  undefined *puStack_d8;
  longlong lStack_d0;
  undefined4 uStack_c0;
  longlong alStack_b8 [4];
  longlong alStack_98 [4];
  longlong alStack_78 [6];
  ulonglong uStack_48;
  
  uStack_4d8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_538;
  lVar9 = 0;
  uStack_518 = 0;
  uStack_508 = param_2;
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x1c8,8,3);
  lVar7 = FUN_180339110(uVar6);
  lStack_4e0 = lVar7;
  FUN_180627ae0(&puStack_500,param_1 + 0x3e);
  while ((0 < (int)uStack_4f0 && (lVar8 = strstr(puStack_4f8,&DAT_180a0ff10), lVar8 != 0))) {
    iVar15 = 6;
    iVar5 = (int)lVar8 - (int)puStack_4f8;
    if (uStack_4f0 < iVar5 + 6U) {
      iVar15 = uStack_4f0 - iVar5;
    }
    uVar14 = iVar5 + iVar15;
    if (uVar14 < uStack_4f0) {
      lVar8 = (longlong)(int)uVar14;
      do {
        puStack_4f8[lVar8 - iVar15] = puStack_4f8[lVar8];
        uVar14 = uVar14 + 1;
        lVar8 = lVar8 + 1;
      } while (uVar14 < uStack_4f0);
    }
    uStack_4f0 = uStack_4f0 - iVar15;
    puStack_4f8[uStack_4f0] = 0;
  }
  *(undefined4 *)(lVar7 + 0x10) = 0;
  puVar11 = &DAT_18098bc73;
  if (puStack_4f8 != (undefined *)0x0) {
    puVar11 = puStack_4f8;
  }
  (**(code **)(*(longlong *)(lVar7 + 0xb0) + 0x10))((longlong *)(lVar7 + 0xb0),puVar11);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x21c);
  *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)((longlong)param_1 + 0x214);
  *(undefined8 *)(lVar7 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x22c);
  *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)((longlong)param_1 + 0x224);
  *(undefined8 *)(lVar7 + 0x70) = uVar6;
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x23c);
  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)((longlong)param_1 + 0x234);
  *(undefined8 *)(lVar7 + 0x80) = uVar6;
  *(undefined4 *)(lVar7 + 0x88) = *(undefined4 *)((longlong)param_1 + 0x244);
  uVar6 = param_1[0x67];
  *(undefined8 *)(lVar7 + 0x18) = param_1[0x66];
  *(undefined8 *)(lVar7 + 0x20) = uVar6;
  uVar6 = param_1[0x69];
  *(undefined8 *)(lVar7 + 0x28) = param_1[0x68];
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x354);
  uVar2 = *(undefined4 *)(param_1 + 0x6b);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x35c);
  *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(param_1 + 0x6a);
  *(undefined4 *)(lVar7 + 0x3c) = uVar1;
  *(undefined4 *)(lVar7 + 0x40) = uVar2;
  *(undefined4 *)(lVar7 + 0x44) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x364);
  uVar2 = *(undefined4 *)(param_1 + 0x6d);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x36c);
  *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(lVar7 + 0x4c) = uVar1;
  *(undefined4 *)(lVar7 + 0x50) = uVar2;
  *(undefined4 *)(lVar7 + 0x54) = uVar3;
  *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)(param_1 + 0x42);
  if (param_1[0x77] == 0) {
    puStack_428 = &UNK_1809fcc28;
    puStack_420 = auStack_410;
    auStack_410[0] = 0;
    uStack_418 = 0;
    strcpy_s(auStack_410,0x80);
    uVar14 = 1;
    uStack_518 = 1;
    puVar11 = puStack_420;
  }
  else {
    puStack_4c8 = &UNK_1809fcc28;
    puStack_4c0 = auStack_4b0;
    auStack_4b0[0] = 0;
    uStack_4b8 = *(undefined4 *)(param_1[0x77] + 0x20);
    strcpy_s(auStack_4b0,0x80);
    uVar14 = 2;
    uStack_518 = 2;
    puVar11 = puStack_4c0;
  }
  puVar18 = &DAT_18098bc73;
  if (puVar11 != (undefined *)0x0) {
    puVar18 = puVar11;
  }
  (**(code **)(*(longlong *)(lVar7 + 0x160) + 0x10))((longlong *)(lVar7 + 0x160),puVar18);
  if ((uVar14 & 2) != 0) {
    uStack_518 = uVar14 & 0xfffffffd;
    puStack_4c8 = &UNK_18098bcb0;
    uVar14 = uStack_518;
  }
  if ((uVar14 & 1) != 0) {
    uStack_518 = uVar14 & 0xfffffffe;
    puStack_428 = &UNK_18098bcb0;
  }
  *(undefined4 *)(lVar7 + 0x8c) = 0;
  if ((undefined *)*param_1 == &UNK_180a169b8) {
    if ((param_1[8] - (longlong)param_1[7] & 0xfffffffffffffff0U) != 0) {
      lVar9 = *(longlong *)param_1[7];
    }
  }
  else {
    lVar9 = (**(code **)((undefined *)*param_1 + 0x178))(param_1);
  }
  lVar8 = *(longlong *)(lVar9 + 0x1b0);
  if (*(longlong *)(lVar9 + 0x1b0) == 0) {
    lVar8 = lVar9;
  }
  *(undefined4 *)(lVar7 + 0x1b8) = *(undefined4 *)(lVar8 + 0x2d8);
  bVar19 = 0 < (int)uStack_4f0;
  if (0 < (int)uStack_4f0) {
    lVar9 = FUN_1800b6de0(_DAT_180c86930,&puStack_500);
    if ((bVar19) && (lVar9 != 0)) {
      bVar19 = true;
      iVar5 = (int)(*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38) >> 4);
      if (0 < iVar5) {
        lVar8 = 0;
        plVar12 = (longlong *)param_1[7];
        lVar9 = *(longlong *)(lVar9 + 0x38) - (longlong)plVar12;
        do {
          lVar16 = *(longlong *)(lVar9 + (longlong)plVar12);
          lVar10 = *(longlong *)(lVar16 + 0x1b0);
          if (lVar10 == 0) {
            lVar10 = lVar16;
          }
          if (((*(longlong *)(*plVar12 + 0x1b0) != 0) || (lVar10 != 0)) ||
             (*(float *)(*plVar12 + 0x2dc) != 0.0)) goto LAB_180281d06;
          lVar8 = lVar8 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar8 < iVar5);
      }
      param_2 = uStack_508;
      if (0 < iVar5 + -1) {
        lVar9 = 0;
        lVar8 = 0;
        do {
          FUN_180274db0(apuStack_1e8);
          FUN_180274db0(apuStack_388);
          FUN_1803263e0(apuStack_1e8,uStack_508,*(undefined8 *)(lVar8 + param_1[7]));
          FUN_1803263e0(apuStack_388,uStack_508,*(undefined8 *)(lVar8 + 0x10 + param_1[7]));
          cVar4 = FUN_180327250(apuStack_1e8,apuStack_388);
          if (cVar4 != '\0') {
            bVar19 = false;
            FUN_180281e80(apuStack_388);
            FUN_180281e80(apuStack_1e8);
            param_2 = uStack_508;
            break;
          }
          ppuStack_510 = (undefined **)alStack_218;
          if (alStack_218[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (undefined **)alStack_238;
          if (alStack_238[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (undefined **)alStack_258;
          if (alStack_258[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = &puStack_278;
          puStack_278 = &UNK_180a3c3e0;
          if (lStack_270 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_270 = 0;
          uStack_260 = 0;
          puStack_278 = &UNK_18098bcb0;
          apuStack_388[0] = &UNK_18098bcb0;
          ppuStack_510 = (undefined **)alStack_78;
          if (alStack_78[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (undefined **)alStack_98;
          if (alStack_98[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = (undefined **)alStack_b8;
          if (alStack_b8[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          ppuStack_510 = &puStack_d8;
          puStack_d8 = &UNK_180a3c3e0;
          if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_d0 = 0;
          uStack_c0 = 0;
          puStack_d8 = &UNK_18098bcb0;
          ppuStack_510 = apuStack_1e8;
          apuStack_1e8[0] = &UNK_18098bcb0;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
          param_2 = uStack_508;
        } while (lVar9 < iVar5 + -1);
      }
    }
    else {
LAB_180281d06:
      bVar19 = false;
    }
  }
  plVar12 = (longlong *)(lVar7 + 0x90);
  FUN_180284720(plVar12);
  *(bool *)(lVar7 + 0x1c4) = bVar19;
  if (bVar19 == false) {
    uVar13 = (longlong)(param_1[8] - param_1[7]) >> 4;
    uVar17 = uVar13 & 0xffffffff;
    FUN_180284580(plVar12,uVar13 & 0xffffffff);
    uVar6 = uStack_508;
    lVar7 = lStack_4e0;
    if ((int)uVar13 != 0) {
      lVar8 = 0;
      lVar9 = 0;
      lVar16 = 0;
      do {
        FUN_1803263e0(*plVar12 + lVar16,uVar6,*(undefined8 *)(lVar9 + param_1[7]));
        *(undefined4 *)(lVar8 + 0x58 + *plVar12) = *(undefined4 *)(lVar9 + 8 + param_1[7]);
        lVar16 = lVar16 + 0x1a0;
        lVar9 = lVar9 + 0x10;
        lVar8 = lVar8 + 0x1a0;
        uVar17 = uVar17 - 1;
        lVar7 = lStack_4e0;
      } while (uVar17 != 0);
    }
  }
  else if ((longlong)(param_1[8] - param_1[7]) >> 4 != 0) {
    FUN_180284580(plVar12,1);
    FUN_1803263e0(*plVar12,param_2,*(undefined8 *)param_1[7]);
  }
  *(undefined4 *)(lVar7 + 0x1bc) = *(undefined4 *)(param_1 + 99);
  *(undefined4 *)(lVar7 + 0x1c0) = *(undefined4 *)(param_1 + 0x62);
  puStack_500 = &UNK_180a3c3e0;
  if (puStack_4f8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_4f8 = (undefined *)0x0;
  uStack_4e8 = 0;
  puStack_500 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_538);
}





// 函数: void FUN_180281e80(undefined8 *param_1)
void FUN_180281e80(undefined8 *param_1)

{
  if (param_1[0x2e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x26] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x22] = &UNK_180a3c3e0;
  if (param_1[0x23] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  return;
}



bool FUN_180281f40(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  lVar9 = param_3;
  cVar3 = func_0x000180274d30(param_2 + 0x58,param_3 + 0x58);
  if (cVar3 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  fVar13 = 0.0001;
  cVar4 = func_0x000180285f10(param_2 + 0x18,lVar9 + 0x18);
  if (cVar4 == '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  bVar11 = *(int *)(param_2 + 0x14) != *(int *)(lVar9 + 0x14);
  if (bVar11) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
  }
  bVar11 = bVar11 || (cVar4 == '\0' || cVar3 == '\0');
  iVar8 = *(int *)(param_2 + 0x170);
  iVar7 = *(int *)(lVar9 + 0x170);
  if (iVar8 == iVar7) {
    if (iVar8 != 0) {
      pbVar5 = *(byte **)(param_2 + 0x168);
      lVar9 = *(longlong *)(lVar9 + 0x168) - (longlong)pbVar5;
      do {
        pbVar1 = pbVar5 + lVar9;
        iVar7 = (uint)*pbVar5 - (uint)*pbVar1;
        if (iVar7 != 0) break;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar1 != 0);
    }
LAB_180281fed:
    if (iVar7 == 0) goto LAB_180281ff6;
  }
  else if (iVar8 == 0) goto LAB_180281fed;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
  bVar11 = true;
LAB_180281ff6:
  fVar12 = *(float *)(param_2 + 0x1b8) - *(float *)(param_3 + 0x1b8);
  if ((fVar12 <= -0.0001) || (fVar13 <= fVar12)) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    bVar11 = true;
  }
  lVar9 = *(longlong *)(param_2 + 0x90);
  lVar6 = *(longlong *)(param_2 + 0x98) - lVar9;
  lVar2 = lVar6 >> 0x3f;
  lVar6 = lVar6 / 0x1a0 + lVar2;
  if ((lVar6 - lVar2 == (*(longlong *)(param_3 + 0x98) - *(longlong *)(param_3 + 0x90)) / 0x1a0) &&
     (iVar8 = 0, lVar6 != lVar2)) {
    uVar10 = 0;
    do {
      cVar3 = FUN_180327250(uVar10 * 0x1a0 + lVar9,*(longlong *)(param_3 + 0x90) + uVar10 * 0x1a0);
      if (cVar3 != '\0') {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
        bVar11 = true;
      }
      lVar9 = *(longlong *)(param_2 + 0x90);
      iVar8 = iVar8 + 1;
      uVar10 = (ulonglong)iVar8;
    } while (uVar10 < (ulonglong)((*(longlong *)(param_2 + 0x98) - lVar9) / 0x1a0));
  }
  return bVar11;
}



undefined1 FUN_180282078(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong unaff_RBX;
  int iVar3;
  longlong unaff_RSI;
  undefined1 unaff_DIL;
  ulonglong uVar4;
  longlong unaff_R14;
  
  iVar3 = 0;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      cVar1 = FUN_180327250(uVar4 * 0x1a0 + param_4,*(longlong *)(unaff_RSI + 0x90) + uVar4 * 0x1a0)
      ;
      if (cVar1 != '\0') {
        *(uint *)(unaff_RBX + 0x10) = *(uint *)(unaff_RBX + 0x10) | 8;
        unaff_DIL = 1;
      }
      param_4 = *(longlong *)(unaff_RBX + 0x90);
      iVar3 = iVar3 + 1;
      uVar4 = (ulonglong)iVar3;
      lVar2 = SUB168(SEXT816(unaff_R14) * SEXT816(*(longlong *)(unaff_RBX + 0x98) - param_4),8);
    } while (uVar4 < (ulonglong)((lVar2 >> 7) - (lVar2 >> 0x3f)));
  }
  return unaff_DIL;
}





// 函数: void FUN_1802820ec(void)
void FUN_1802820ec(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802826e6)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



