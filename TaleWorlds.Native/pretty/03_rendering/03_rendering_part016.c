#include "TaleWorlds.Native.Split.h"

// 03_rendering_part016.c - 渲染系统距离计算和边界检测函数

/**
 * 计算渲染边界距离
 * 计算指定渲染对象的边界距离，并更新目标对象的距离信息
 * @param source_obj 源渲染对象指针
 * @param target_obj 目标对象指针，用于存储距离信息
 * @param flags 渲染标志
 * @param extra_param 附加参数
 */
void Calculate_Rendering_Boundary_Distance(longlong *source_obj, longlong *target_obj, undefined8 flags, undefined8 extra_param)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_obj_ptr;
  longlong *target_data;
  char has_render_flag;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined8 in_XMM1_Qa;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  uVar5 = 0;
  *(undefined4 *)(target_obj + 0x20) = 0;
  *(undefined4 *)(target_obj + 0x24) = 0;
  *(undefined4 *)(target_obj + 0x28) = 0;
  *(undefined4 *)(target_obj + 0x2c) = 0x7f7fffff;
  *(int *)(target_obj + 0x10) = (int)in_XMM1_Qa;
  *(int *)(target_obj + 0x14) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
  *(undefined4 *)(target_obj + 0x18) = in_XMM1_Dc;
  *(undefined4 *)(target_obj + 0x1c) = in_XMM1_Dd;
  plVar4 = *(longlong **)(source_obj + 0x38);
  if (plVar4 < *(longlong **)(source_obj + 0x40)) {
    do {
      lVar1 = *plVar4;
      if (has_render_flag != '\0') {
        uVar5 = FUN_180075b70(lVar1);
      }
      if (((*(byte *)(lVar1 + 0x100) & 0x20) == 0) || (*(longlong *)(local_obj_ptr + 0x28) == 0)) {
        lVar3 = lVar1 + 0x120;
      }
      else {
        lVar3 = FUN_180194940(lVar1 + 0x120,&stack0x00000030,*(longlong *)(local_obj_ptr + 0x28) + 0x70)
        ;
        uVar5 = extraout_XMM0_Da;
      }
      uVar5 = FUN_18063a240(uVar5,lVar1 + 0x274,lVar3);
      plVar4 = plVar4 + 2;
    } while (plVar4 < *(longlong **)(local_obj_ptr + 0x40));
  }
  if (((*(longlong *)(local_obj_ptr + 0x40) - (longlong)*(longlong **)(local_obj_ptr + 0x38) &
       0xfffffffffffffff0U) == 0x10) &&
     (lVar1 = **(longlong **)(local_obj_ptr + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x29c);
    *(undefined8 *)(target_data + 0x20) = *(undefined8 *)(lVar1 + 0x294);
    *(undefined8 *)(target_data + 0x28) = uVar2;
    *(undefined4 *)(target_data + 0x30) = *(undefined4 *)(**(longlong **)(local_obj_ptr + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar4 = *(longlong **)(local_obj_ptr + 0x38);
    fVar8 = 0.0;
    if (plVar4 < *(longlong **)(local_obj_ptr + 0x40)) {
      do {
        lVar1 = *plVar4;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar9 = *(float *)(lVar1 + 0x294);
          fVar10 = *(float *)(lVar1 + 0x298);
          fVar11 = *(float *)(lVar1 + 0x29c);
          fVar6 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar6 = *(float *)(lVar1 + 0x298);
          fVar11 = *(float *)(lVar1 + 0x294);
          fVar7 = *(float *)(lVar1 + 0x29c);
          fVar9 = *(float *)(lVar1 + 0x130) * fVar6 + *(float *)(lVar1 + 0x120) * fVar11 +
                  *(float *)(lVar1 + 0x140) * fVar7 + *(float *)(lVar1 + 0x150);
          fVar10 = *(float *)(lVar1 + 0x134) * fVar6 + *(float *)(lVar1 + 0x124) * fVar11 +
                   *(float *)(lVar1 + 0x144) * fVar7 + *(float *)(lVar1 + 0x154);
          fVar11 = *(float *)(lVar1 + 0x138) * fVar6 + *(float *)(lVar1 + 0x128) * fVar11 +
                   *(float *)(lVar1 + 0x148) * fVar7 + *(float *)(lVar1 + 0x158);
          fVar6 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar7 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar12 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar12 <= fVar7) {
            if (fVar6 <= fVar7) {
              fVar6 = fVar7;
            }
          }
          else if (fVar6 <= fVar12) {
            fVar6 = fVar12;
          }
          if ((fVar6 - 1.0 <= -1e-06) || (1e-06 <= fVar6 - 1.0)) {
            fVar6 = SQRT(fVar6) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar6 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar11 = *(float *)(target_data + 0x28) - fVar11;
        fVar10 = *(float *)(target_data + 0x24) - fVar10;
        fVar9 = *(float *)(target_data + 0x20) - fVar9;
        fVar10 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
        fVar9 = fVar8 - fVar6;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        if (fVar9 * fVar9 < fVar10) {
          fVar8 = SQRT(fVar10) + fVar6;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(longlong **)(local_obj_ptr + 0x40));
      if ((0.0 < fVar8) &&
         (fVar8 < *(float *)(target_data + 0x30) || fVar8 == *(float *)(target_data + 0x30))) {
        *(float *)(target_data + 0x30) = fVar8;
      }
    }
  }
  return;
}





/**
 * 优化渲染距离计算
 * 对渲染距离进行优化计算，处理边界条件和精度优化
 * @param render_flags 渲染标志位
 */
void Optimize_Rendering_Distance_Calculation(undefined4 render_flags)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_obj_ptr;
  longlong *obj_array_ptr;
  longlong *target_data;
  char has_render_flag;
  undefined4 extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  
  do {
    lVar1 = *obj_array_ptr;
    if (has_render_flag != '\0') {
      render_flags = FUN_180075b70(lVar1);
    }
    if (((*(byte *)(lVar1 + 0x100) & 0x20) == 0) || (*(longlong *)(local_obj_ptr + 0x28) == 0)) {
      lVar3 = lVar1 + 0x120;
    }
    else {
      lVar3 = FUN_180194940(lVar1 + 0x120,&stack0x00000030,*(longlong *)(local_obj_ptr + 0x28) + 0x70);
      render_flags = extraout_XMM0_Da;
    }
    render_flags = FUN_18063a240(render_flags,lVar1 + 0x274,lVar3);
    obj_array_ptr = obj_array_ptr + 2;
  } while (obj_array_ptr < *(longlong **)(local_obj_ptr + 0x40));
  if (((*(longlong *)(local_obj_ptr + 0x40) - (longlong)*(longlong **)(local_obj_ptr + 0x38) &
       0xfffffffffffffff0U) == 0x10) &&
     (lVar1 = **(longlong **)(local_obj_ptr + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x29c);
    *(undefined8 *)(target_data + 0x20) = *(undefined8 *)(lVar1 + 0x294);
    *(undefined8 *)(target_data + 0x28) = uVar2;
    *(undefined4 *)(target_data + 0x30) = *(undefined4 *)(**(longlong **)(local_obj_ptr + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar4 = *(longlong **)(local_obj_ptr + 0x38);
    fVar7 = 0.0;
    if (plVar4 < *(longlong **)(local_obj_ptr + 0x40)) {
      do {
        lVar1 = *plVar4;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar8 = *(float *)(lVar1 + 0x294);
          fVar9 = *(float *)(lVar1 + 0x298);
          fVar10 = *(float *)(lVar1 + 0x29c);
          fVar5 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar5 = *(float *)(lVar1 + 0x298);
          fVar10 = *(float *)(lVar1 + 0x294);
          fVar6 = *(float *)(lVar1 + 0x29c);
          fVar8 = *(float *)(lVar1 + 0x130) * fVar5 + *(float *)(lVar1 + 0x120) * fVar10 +
                  *(float *)(lVar1 + 0x140) * fVar6 + *(float *)(lVar1 + 0x150);
          fVar9 = *(float *)(lVar1 + 0x134) * fVar5 + *(float *)(lVar1 + 0x124) * fVar10 +
                  *(float *)(lVar1 + 0x144) * fVar6 + *(float *)(lVar1 + 0x154);
          fVar10 = *(float *)(lVar1 + 0x138) * fVar5 + *(float *)(lVar1 + 0x128) * fVar10 +
                   *(float *)(lVar1 + 0x148) * fVar6 + *(float *)(lVar1 + 0x158);
          fVar5 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar6 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar11 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar11 <= fVar6) {
            if (fVar5 <= fVar6) {
              fVar5 = fVar6;
            }
          }
          else if (fVar5 <= fVar11) {
            fVar5 = fVar11;
          }
          if ((fVar5 - 1.0 <= -1e-06) || (1e-06 <= fVar5 - 1.0)) {
            fVar5 = SQRT(fVar5) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar5 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar10 = *(float *)(target_data + 0x28) - fVar10;
        fVar9 = *(float *)(target_data + 0x24) - fVar9;
        fVar8 = *(float *)(target_data + 0x20) - fVar8;
        fVar9 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
        fVar8 = fVar7 - fVar5;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (fVar8 * fVar8 < fVar9) {
          fVar7 = SQRT(fVar9) + fVar5;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 < *(longlong **)(local_obj_ptr + 0x40));
      if ((0.0 < fVar7) &&
         (fVar7 < *(float *)(target_data + 0x30) || fVar7 == *(float *)(target_data + 0x30))) {
        *(float *)(target_data + 0x30) = fVar7;
      }
    }
  }
  return;
}





/**
 * 渲染距离计算器
 * 核心距离计算函数，处理渲染对象的距离相关计算
 */
void Rendering_Distance_Calculator(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_obj_ptr;
  longlong *target_data;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((*(longlong *)(local_obj_ptr + 0x40) - (longlong)*(longlong **)(local_obj_ptr + 0x38) &
       0xfffffffffffffff0U) == 0x10) &&
     (lVar1 = **(longlong **)(local_obj_ptr + 0x38), (*(uint *)(lVar1 + 0x100) & 0x4000000) == 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x29c);
    *(undefined8 *)(target_data + 0x20) = *(undefined8 *)(lVar1 + 0x294);
    *(undefined8 *)(target_data + 0x28) = uVar2;
    *(undefined4 *)(target_data + 0x30) = *(undefined4 *)(**(longlong **)(local_obj_ptr + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar3 = *(longlong **)(local_obj_ptr + 0x38);
    fVar6 = 0.0;
    if (plVar3 < *(longlong **)(local_obj_ptr + 0x40)) {
      do {
        lVar1 = *plVar3;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar7 = *(float *)(lVar1 + 0x294);
          fVar8 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x29c);
          fVar4 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar4 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x294);
          fVar5 = *(float *)(lVar1 + 0x29c);
          fVar7 = *(float *)(lVar1 + 0x130) * fVar4 + *(float *)(lVar1 + 0x120) * fVar9 +
                  *(float *)(lVar1 + 0x140) * fVar5 + *(float *)(lVar1 + 0x150);
          fVar8 = *(float *)(lVar1 + 0x134) * fVar4 + *(float *)(lVar1 + 0x124) * fVar9 +
                  *(float *)(lVar1 + 0x144) * fVar5 + *(float *)(lVar1 + 0x154);
          fVar9 = *(float *)(lVar1 + 0x138) * fVar4 + *(float *)(lVar1 + 0x128) * fVar9 +
                  *(float *)(lVar1 + 0x148) * fVar5 + *(float *)(lVar1 + 0x158);
          fVar4 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar5 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar10 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar10 <= fVar5) {
            if (fVar4 <= fVar5) {
              fVar4 = fVar5;
            }
          }
          else if (fVar4 <= fVar10) {
            fVar4 = fVar10;
          }
          if ((fVar4 - 1.0 <= -1e-06) || (1e-06 <= fVar4 - 1.0)) {
            fVar4 = SQRT(fVar4) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar4 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar9 = *(float *)(target_data + 0x28) - fVar9;
        fVar8 = *(float *)(target_data + 0x24) - fVar8;
        fVar7 = *(float *)(target_data + 0x20) - fVar7;
        fVar8 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
        fVar7 = fVar6 - fVar4;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if (fVar7 * fVar7 < fVar8) {
          fVar6 = SQRT(fVar8) + fVar4;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 < *(longlong **)(local_obj_ptr + 0x40));
      if ((0.0 < fVar6) &&
         (fVar6 < *(float *)(target_data + 0x30) || fVar6 == *(float *)(target_data + 0x30))) {
        *(float *)(target_data + 0x30) = fVar6;
      }
    }
  }
  return;
}





/**
 * 处理渲染对象距离
 * 处理单个渲染对象的距离计算和更新
 * @param render_obj 渲染对象指针
 */
void Process_Render_Object_Distance(longlong *render_obj)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_obj_ptr;
  longlong *target_data;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *render_obj;
  if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x29c);
    *(undefined8 *)(target_data + 0x20) = *(undefined8 *)(lVar1 + 0x294);
    *(undefined8 *)(target_data + 0x28) = uVar2;
    *(undefined4 *)(target_data + 0x30) = *(undefined4 *)(**(longlong **)(local_obj_ptr + 0x38) + 0x2a4);
  }
  else {
    FUN_1800b9f60();
    plVar3 = *(longlong **)(local_obj_ptr + 0x38);
    fVar6 = 0.0;
    if (plVar3 < *(longlong **)(local_obj_ptr + 0x40)) {
      do {
        lVar1 = *plVar3;
        if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
          fVar7 = *(float *)(lVar1 + 0x294);
          fVar8 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x29c);
          fVar4 = *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar4 = *(float *)(lVar1 + 0x298);
          fVar9 = *(float *)(lVar1 + 0x294);
          fVar5 = *(float *)(lVar1 + 0x29c);
          fVar7 = *(float *)(lVar1 + 0x130) * fVar4 + *(float *)(lVar1 + 0x120) * fVar9 +
                  *(float *)(lVar1 + 0x140) * fVar5 + *(float *)(lVar1 + 0x150);
          fVar8 = *(float *)(lVar1 + 0x134) * fVar4 + *(float *)(lVar1 + 0x124) * fVar9 +
                  *(float *)(lVar1 + 0x144) * fVar5 + *(float *)(lVar1 + 0x154);
          fVar9 = *(float *)(lVar1 + 0x138) * fVar4 + *(float *)(lVar1 + 0x128) * fVar9 +
                  *(float *)(lVar1 + 0x148) * fVar5 + *(float *)(lVar1 + 0x158);
          fVar4 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                  *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                  *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
          fVar5 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                  *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                  *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
          fVar10 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                   *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                   *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
          if (fVar10 <= fVar5) {
            if (fVar4 <= fVar5) {
              fVar4 = fVar5;
            }
          }
          else if (fVar4 <= fVar10) {
            fVar4 = fVar10;
          }
          if ((fVar4 - 1.0 <= -1e-06) || (1e-06 <= fVar4 - 1.0)) {
            fVar4 = SQRT(fVar4) * *(float *)(lVar1 + 0x2a4);
          }
          else {
            fVar4 = *(float *)(lVar1 + 0x2a4) * 1.0;
          }
        }
        fVar9 = *(float *)(target_data + 0x28) - fVar9;
        fVar8 = *(float *)(target_data + 0x24) - fVar8;
        fVar7 = *(float *)(target_data + 0x20) - fVar7;
        fVar8 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
        fVar7 = fVar6 - fVar4;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        if (fVar7 * fVar7 < fVar8) {
          fVar6 = SQRT(fVar8) + fVar4;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 < *(longlong **)(local_obj_ptr + 0x40));
      if ((0.0 < fVar6) &&
         (fVar6 < *(float *)(target_data + 0x30) || fVar6 == *(float *)(target_data + 0x30))) {
        *(float *)(target_data + 0x30) = fVar6;
      }
    }
  }
  return;
}





/**
 * 初始化渲染距离
 * 初始化渲染系统的距离计算相关数据
 */
void Initialize_Rendering_Distance(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *local_obj_ptr;
  longlong *target_data;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_1800b9f60();
  plVar2 = *(longlong **)(local_obj_ptr + 0x38);
  fVar5 = 0.0;
  if (plVar2 < *(longlong **)(local_obj_ptr + 0x40)) {
    do {
      lVar1 = *plVar2;
      if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
        fVar6 = *(float *)(lVar1 + 0x294);
        fVar7 = *(float *)(lVar1 + 0x298);
        fVar8 = *(float *)(lVar1 + 0x29c);
        fVar3 = *(float *)(lVar1 + 0x2a4);
      }
      else {
        fVar3 = *(float *)(lVar1 + 0x298);
        fVar8 = *(float *)(lVar1 + 0x294);
        fVar4 = *(float *)(lVar1 + 0x29c);
        fVar6 = *(float *)(lVar1 + 0x130) * fVar3 + *(float *)(lVar1 + 0x120) * fVar8 +
                *(float *)(lVar1 + 0x140) * fVar4 + *(float *)(lVar1 + 0x150);
        fVar7 = *(float *)(lVar1 + 0x134) * fVar3 + *(float *)(lVar1 + 0x124) * fVar8 +
                *(float *)(lVar1 + 0x144) * fVar4 + *(float *)(lVar1 + 0x154);
        fVar8 = *(float *)(lVar1 + 0x138) * fVar3 + *(float *)(lVar1 + 0x128) * fVar8 +
                *(float *)(lVar1 + 0x148) * fVar4 + *(float *)(lVar1 + 0x158);
        fVar3 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
                *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
                *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
        fVar4 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
                *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
                *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
        fVar9 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
                *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
                *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
        if (fVar9 <= fVar4) {
          if (fVar3 <= fVar4) {
            fVar3 = fVar4;
          }
        }
        else if (fVar3 <= fVar9) {
          fVar3 = fVar9;
        }
        if ((fVar3 - 1.0 <= -1e-06) || (1e-06 <= fVar3 - 1.0)) {
          fVar3 = SQRT(fVar3) * *(float *)(lVar1 + 0x2a4);
        }
        else {
          fVar3 = *(float *)(lVar1 + 0x2a4) * 1.0;
        }
      }
      fVar8 = *(float *)(target_data + 0x28) - fVar8;
      fVar7 = *(float *)(target_data + 0x24) - fVar7;
      fVar6 = *(float *)(target_data + 0x20) - fVar6;
      fVar7 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
      fVar6 = fVar5 - fVar3;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (fVar6 * fVar6 < fVar7) {
        fVar5 = SQRT(fVar7) + fVar3;
      }
      plVar2 = plVar2 + 2;
    } while (plVar2 < *(longlong **)(local_obj_ptr + 0x40));
    if ((0.0 < fVar5) &&
       (fVar5 < *(float *)(target_data + 0x30) || fVar5 == *(float *)(target_data + 0x30))) {
      *(float *)(target_data + 0x30) = fVar5;
    }
  }
  return;
}





/**
 * 批量处理渲染距离
 * 批量处理多个渲染对象的距离计算
 * @param obj_start 对象数组起始指针
 * @param obj_end 对象数组结束指针
 */
void Batch_Process_Rendering_Distance(longlong *obj_start, longlong *obj_end)

{
  longlong lVar1;
  longlong *target_data;
  float fVar2;
  float fVar3;
  float min_distance;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float threshold_distance;
  
  do {
    lVar1 = *obj_start;
    if ((*(uint *)(lVar1 + 0x100) & 0x4000000) == 0) {
      fVar4 = *(float *)(lVar1 + 0x294);
      fVar5 = *(float *)(lVar1 + 0x298);
      fVar6 = *(float *)(lVar1 + 0x29c);
      fVar2 = *(float *)(lVar1 + 0x2a4);
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x298);
      fVar6 = *(float *)(lVar1 + 0x294);
      fVar3 = *(float *)(lVar1 + 0x29c);
      fVar4 = *(float *)(lVar1 + 0x130) * fVar2 + *(float *)(lVar1 + 0x120) * fVar6 +
              *(float *)(lVar1 + 0x140) * fVar3 + *(float *)(lVar1 + 0x150);
      fVar5 = *(float *)(lVar1 + 0x134) * fVar2 + *(float *)(lVar1 + 0x124) * fVar6 +
              *(float *)(lVar1 + 0x144) * fVar3 + *(float *)(lVar1 + 0x154);
      fVar6 = *(float *)(lVar1 + 0x138) * fVar2 + *(float *)(lVar1 + 0x128) * fVar6 +
              *(float *)(lVar1 + 0x148) * fVar3 + *(float *)(lVar1 + 0x158);
      fVar2 = *(float *)(lVar1 + 0x140) * *(float *)(lVar1 + 0x140) +
              *(float *)(lVar1 + 0x144) * *(float *)(lVar1 + 0x144) +
              *(float *)(lVar1 + 0x148) * *(float *)(lVar1 + 0x148);
      fVar3 = *(float *)(lVar1 + 0x130) * *(float *)(lVar1 + 0x130) +
              *(float *)(lVar1 + 0x134) * *(float *)(lVar1 + 0x134) +
              *(float *)(lVar1 + 0x138) * *(float *)(lVar1 + 0x138);
      fVar7 = *(float *)(lVar1 + 0x120) * *(float *)(lVar1 + 0x120) +
              *(float *)(lVar1 + 0x124) * *(float *)(lVar1 + 0x124) +
              *(float *)(lVar1 + 0x128) * *(float *)(lVar1 + 0x128);
      if (fVar7 <= fVar3) {
        if (fVar2 <= fVar3) {
          fVar2 = fVar3;
        }
      }
      else if (fVar2 <= fVar7) {
        fVar2 = fVar7;
      }
      if ((fVar2 - 1.0 <= -1e-06) || (1e-06 <= fVar2 - 1.0)) {
        fVar2 = SQRT(fVar2) * *(float *)(lVar1 + 0x2a4);
      }
      else {
        fVar2 = *(float *)(lVar1 + 0x2a4) * 1.0;
      }
    }
    fVar6 = *(float *)(target_data + 0x28) - fVar6;
    fVar5 = *(float *)(target_data + 0x24) - fVar5;
    fVar4 = *(float *)(target_data + 0x20) - fVar4;
    fVar5 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
    fVar4 = min_distance - fVar2;
    if (min_distance - fVar2 <= threshold_distance) {
      fVar4 = threshold_distance;
    }
    if (fVar4 * fVar4 < fVar5) {
      min_distance = SQRT(fVar5) + fVar2;
    }
    obj_start = obj_start + 2;
  } while (obj_start < obj_end);
  if ((threshold_distance < min_distance) &&
     (min_distance < *(float *)(target_data + 0x30) || min_distance == *(float *)(target_data + 0x30))) {
    *(float *)(target_data + 0x30) = min_distance;
  }
  return;
}





/**
 * 更新最小渲染距离
 * 更新渲染系统的最小距离记录
 */
void Update_Minimum_Rendering_Distance(void)

{
  longlong *target_data;
  float min_distance;
  
  if (min_distance < *(float *)(target_data + 0x30) || min_distance == *(float *)(target_data + 0x30)) {
    *(float *)(target_data + 0x30) = min_distance;
  }
  return;
}





/**
 * 渲染距离处理空函数
 * 空函数，用于渲染距离处理的占位符
 */
void Rendering_Distance_Processor_Empty(void)

{
  return;
}





/**
 * 清理渲染对象引用
 * 清理渲染对象的引用计数和相关资源
 * @param render_context 渲染上下文指针
 */
void Cleanup_Render_Object_References(longlong render_context)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar4 = (int)(*(longlong *)(render_context + 0x40) - *(longlong *)(render_context + 0x38) >> 4);
  lVar5 = (longlong)iVar4;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(render_context + 0x38));
      iVar4 = _Mtx_lock(0x180c91910);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      pcVar1 = (char *)(lVar2 + 0xfc);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0') {
        while( true ) {
          LOCK();
          bVar7 = *(char *)(lVar2 + 0xec) == '\0';
          if (bVar7) {
            *(char *)(lVar2 + 0xec) = '\x01';
          }
          UNLOCK();
          if (bVar7) break;
          Sleep();
        }
        while (*(int *)(lVar2 + 0xe8) != 0) {
          Sleep(0);
        }
        if ((((*(longlong *)(lVar2 + 0x210) != 0) &&
             (FUN_1800791a0(lVar2), *(char *)(lVar2 + 0xfc) == '\0')) &&
            (*(char *)(lVar2 + 0xf4) == '\0')) &&
           (((*(byte *)(lVar2 + 0xfd) & 0x20) == 0 || ((*(byte *)(lVar2 + 0xfe) & 1) == 0)))) {
          plVar3 = *(longlong **)(lVar2 + 0x210);
          *(undefined8 *)(lVar2 + 0x210) = 0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        LOCK();
        if (*(char *)(lVar2 + 0xec) == '\x01') {
          *(char *)(lVar2 + 0xec) = '\0';
        }
        UNLOCK();
      }
      iVar4 = _Mtx_unlock(0x180c91910);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/**
 * 计算渲染优先级
 * 根据渲染标志和对象属性计算渲染优先级
 * @param render_context 渲染上下文指针
 * @param render_obj 渲染对象指针
 * @return 计算出的优先级值
 */
int Calculate_Rendering_Priority(longlong render_context, longlong render_obj)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined8 **)(render_context + 0x38);
  iVar3 = 0;
  if (puVar2 < *(undefined8 **)(render_context + 0x40)) {
    do {
      if ((*(uint *)(render_obj + 0xc) & *(uint *)(puVar2 + 1)) != 0) {
        iVar1 = FUN_180076c50(*puVar2,render_obj);
        iVar3 = iVar3 + iVar1;
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 < *(undefined8 **)(render_context + 0x40));
  }
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 验证渲染对象状态
 * 验证渲染对象的状态和有效性
 * @param render_context 渲染上下文指针
 * @return 验证结果，1表示有效，0表示无效
 */
undefined8 Validate_Render_Object_State(longlong render_context)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar10 = *(longlong **)(render_context + 0x38);
  bVar11 = plVar10 < *(longlong **)(render_context + 0x40);
  do {
    if (!bVar11) {
      return 1;
    }
    plVar1 = (longlong *)*plVar10;
    plVar3 = plVar1;
    if ((*(byte *)((longlong)plVar1 + 0xfd) & 0x20) == 0) {
      plVar3 = (longlong *)func_0x000180085de0(plVar1[0x36]);
    }
    uVar8 = *(ulonglong *)(_DAT_180c86870 + 0x98);
    if (uVar8 != 0) {
      puVar7 = (undefined8 *)(uVar8 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      puVar5 = *(undefined8 **)(uVar8 + 0x40);
      puVar4 = puVar7;
      if (puVar5 == (undefined8 *)0x0) {
LAB_1802775f0:
        puVar4 = puVar7;
      }
      else {
        do {
          if ((longlong *)puVar5[4] < plVar3) {
            puVar5 = (undefined8 *)*puVar5;
          }
          else {
            puVar4 = puVar5;
            puVar5 = (undefined8 *)puVar5[1];
          }
        } while (puVar5 != (undefined8 *)0x0);
        if ((puVar4 == puVar7) || (plVar3 < (longlong *)puVar4[4])) goto LAB_1802775f0;
      }
      uVar8 = (ulonglong)(puVar4 != puVar7);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
    }
    if (((plVar3[0x15] == 0) && (plVar3[0x42] == 0)) && ((char)uVar8 == '\0')) {
      if (plVar3[0x3c] == 0) {
        return 0;
      }
      lVar9 = plVar3[0x3c];
      lVar6 = plVar1[0x37];
      bVar2 = *(byte *)(lVar6 + 0x38c);
      if (bVar2 == 9) {
        bVar2 = func_0x00018022d300();
        *(byte *)(lVar6 + 0x38c) = bVar2;
      }
      if (*(char *)(lVar9 + 0x15 + (ulonglong)bVar2 * 0x18) == '\0') {
        return 0;
      }
    }
    plVar10 = plVar10 + 2;
    bVar11 = plVar10 < *(longlong **)(render_context + 0x40);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 重置渲染标志
 * 重置渲染对象的标志位，清除特定状态
 * @param render_context 渲染上下文指针
 * @param flags_to_reset 需要重置的标志位
 */
void Reset_Rendering_Flags(longlong render_context, uint flags_to_reset)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(render_context + 0x38);
  if (plVar7 < *(longlong **)(render_context + 0x40)) {
    do {
      if ((*(uint *)(plVar7 + 1) & flags_to_reset) != 0) {
        lVar3 = *plVar7;
        if (*(longlong *)(lVar3 + 0x1b8) != 0) {
          lVar6 = 0xb8;
          lVar5 = _DAT_180c86870;
          do {
            lVar4 = *(longlong *)(lVar6 + *(longlong *)(lVar3 + 0x1b8));
            if ((((lVar4 != 0) && (*(longlong *)(lVar6 + 0x328 + *(longlong *)(lVar3 + 0x1b8)) == 0)
                 ) && ((*(uint *)(lVar4 + 0x328) & 0x20000000) == 0)) &&
               (*(longlong *)(lVar4 + 0x370) == 0)) {
              if (*(longlong *)(lVar4 + 0x1d8) == 0) {
                FUN_18023b050(lVar4,0);
                lVar5 = _DAT_180c86870;
                piVar1 = (int *)(*(longlong *)(lVar6 + *(longlong *)(lVar3 + 0x1b8)) + 0x3a8);
                *piVar1 = *piVar1 + 1;
              }
              else if (lVar5 != 0) {
                *(longlong *)(lVar4 + 0x340) = (longlong)*(int *)(lVar5 + 0x224);
              }
            }
            lVar6 = lVar6 + 8;
          } while (lVar6 < 0x138);
        }
        if (*(char *)(lVar3 + 0xf9) != '\0') {
          if (*(longlong *)(lVar3 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(undefined8 *)(lVar3 + 0x1d8) = 0;
          LOCK();
          *(undefined1 *)(lVar3 + 0xf9) = 0;
          UNLOCK();
        }
        if (*(longlong *)(lVar3 + 0x1e8) != 0) {
          FUN_180080060();
          *(undefined8 *)(lVar3 + 0x1e8) = 0;
          if (*(longlong *)(lVar3 + 0x1f0) != 0) {
            pbVar2 = (byte *)(*(longlong *)(lVar3 + 0x1f0) + 0xfe);
            *pbVar2 = *pbVar2 & 0xfb;
          }
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 < *(longlong **)(render_context + 0x40));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



