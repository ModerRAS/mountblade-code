#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part049.c - 渲染系统高级数据处理和渲染控制模块
// 包含29个核心函数，涵盖渲染数据高级处理、渲染控制、数据转换、渲染状态管理等功能

/**
 * 处理渲染索引缓冲区和顶点数据
 * 
 * @param render_context 渲染上下文指针
 * @param data_ptr 数据指针数组
 * @param count_array 计数数组
 * @param vertex_count 顶点数量
 * @param param_4 参数4
 * @return void
 */
void process_rendering_index_buffer(int64_t render_context, uint64_t *data_ptr, uint vertex_count, uint param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  uint uStack_88;
  int iStack_84;
  uint64_t uStack_80;
  
  uStack_80 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_88;
  uVar5 = (uint64_t)vertex_count;
  if (2 < (int)vertex_count) {
    uVar1 = **(int32_t **)(render_context + 0x38);
    uVar2 = (*(int32_t **)(render_context + 0x38))[1];
    if ((*(byte *)(render_context + 0x30) & 2) != 0) {
      uStack_88 = param_4 & 0xffffff;
      iStack_84 = vertex_count * 2;
      FUN_1802921e0(render_context, vertex_count * 9 + -6, iStack_84);
      uVar1 = *(int32_t *)(render_context + 0x48);
      iVar7 = 2;
      if (2 < (int)vertex_count) {
        do {
          sVar6 = (short)iVar7;
          iVar7 = iVar7 + 1;
          sVar8 = (short)uVar1;
          sVar6 = sVar6 * 2 + sVar8;
          **(short **)(render_context + 0x58) = sVar8;
          *(short *)(*(int64_t *)(render_context + 0x58) + 2) = sVar6 + -2;
          *(short *)(*(int64_t *)(render_context + 0x58) + 4) = sVar6;
          *(int64_t *)(render_context + 0x58) = *(int64_t *)(render_context + 0x58) + 6;
        } while (iVar7 < (int)vertex_count);
      }
      uVar5 = (int64_t)(int)vertex_count * 8 + 0xf;
      if (uVar5 <= (uint64_t)((int64_t)(int)vertex_count * 8)) {
        uVar5 = 0xffffffffffffff0;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd200(uVar5 & 0xfffffffffffffff0);
    }
    FUN_1802921e0(render_context, (vertex_count - 2) * 3, uVar5);
    if (0 < (int)vertex_count) {
      do {
        uVar3 = *data_ptr;
        data_ptr = data_ptr + 1;
        **(uint64_t **)(render_context + 0x50) = uVar3;
        lVar4 = *(int64_t *)(render_context + 0x50);
        *(int32_t *)(lVar4 + 8) = uVar1;
        *(int32_t *)(lVar4 + 0xc) = uVar2;
        *(uint *)(*(int64_t *)(render_context + 0x50) + 0x10) = param_4;
        *(int64_t *)(render_context + 0x50) = *(int64_t *)(render_context + 0x50) + 0x14;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar7 = 2;
    if (2 < (int)vertex_count) {
      do {
        **(int16_t **)(render_context + 0x58) = *(int16_t *)(render_context + 0x48);
        sVar6 = (short)iVar7;
        *(short *)(*(int64_t *)(render_context + 0x58) + 2) = sVar6 + -1 + *(short *)(render_context + 0x48);
        iVar7 = iVar7 + 1;
        *(short *)(*(int64_t *)(render_context + 0x58) + 4) = sVar6 + *(short *)(render_context + 0x48);
        *(int64_t *)(render_context + 0x58) = *(int64_t *)(render_context + 0x58) + 6;
      } while (iVar7 < (int)vertex_count);
    }
    *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + (vertex_count & 0xffff);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_80 ^ (uint64_t)&uStack_88);
}

/**
 * 处理渲染坐标变换和缩放
 * 
 * @param render_context 渲染上下文指针
 * @param coord_ptr 坐标指针
 * @param scale_factor 缩放因子
 * @param start_index 开始索引
 * @param end_index 结束索引
 * @return void
 */
void process_rendering_coordinate_transform(int64_t render_context, float *coord_ptr, float scale_factor, int start_index, int end_index)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((scale_factor == 0.0) || (end_index < start_index)) {
    FUN_18011d9a0(render_context + 0x80);
  }
  else {
    piVar1 = (int *)(render_context + 0x80);
    FUN_18011dc70(piVar1, end_index + 1 + (*piVar1 - start_index));
    iVar8 = *piVar1;
    do {
      iVar6 = *(int *)(render_context + 0x84);
      fVar2 = *(float *)(*(int64_t *)(render_context + 0x38) + 0x28 + (int64_t)(start_index % 0xc) * 8);
      fVar3 = *(float *)(*(int64_t *)(render_context + 0x38) + 0x2c + (int64_t)(start_index % 0xc) * 8);
      fVar4 = *coord_ptr;
      fVar5 = coord_ptr[1];
      if (iVar8 == iVar6) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar7 = iVar8 + 1;
        if (iVar8 + 1 < iVar6) {
          iVar7 = iVar6;
        }
        FUN_18011dc70(piVar1, iVar7);
        iVar8 = *piVar1;
      }
      start_index = start_index + 1;
      *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)iVar8 * 8) =
           CONCAT44(scale_factor * fVar3 + fVar5, scale_factor * fVar2 + fVar4);
      *piVar1 = *piVar1 + 1;
      iVar8 = *piVar1;
    } while (start_index <= end_index);
  }
  return;
}

/**
 * 处理渲染数据的高级变换
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return void
 */
void process_rendering_advanced_transform(int64_t param_1, int param_2, uint64_t param_3, int param_4)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int64_t unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  int iVar8;
  float *unaff_R14;
  float unaff_XMM6_Da;
  
  piVar1 = (int *)(param_1 + 0x80);
  FUN_18011dc70(piVar1, param_2 + (*piVar1 - param_4));
  iVar8 = *piVar1;
  do {
    iVar6 = *(int *)(param_1 + 0x84);
    fVar2 = *(float *)(*(int64_t *)(unaff_RBP + 0x38) + 0x28 + (int64_t)(unaff_EDI % 0xc) * 8);
    fVar3 = *(float *)(*(int64_t *)(unaff_RBP + 0x38) + 0x2c + (int64_t)(unaff_EDI % 0xc) * 8);
    fVar4 = *unaff_R14;
    fVar5 = unaff_R14[1];
    if (iVar8 == iVar6) {
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      iVar7 = iVar8 + 1;
      if (iVar8 + 1 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_18011dc70(piVar1, iVar7);
      iVar8 = *piVar1;
    }
    unaff_EDI = unaff_EDI + 1;
    *(uint64_t *)(*(int64_t *)(param_1 + 0x88) + (int64_t)iVar8 * 8) =
         CONCAT44(unaff_XMM6_Da * fVar3 + fVar5, unaff_XMM6_Da * fVar2 + fVar4);
    *piVar1 = *piVar1 + 1;
    iVar8 = *piVar1;
  } while (unaff_EDI <= unaff_ESI);
  return;
}

/**
 * 清理渲染数据缓冲区
 * 
 * @param render_context 渲染上下文指针
 * @return void
 */
void cleanup_rendering_data_buffer(int64_t render_context)
{
  FUN_18011d9a0(render_context + 0x80);
  return;
}

/**
 * 初始化渲染数据缓冲区
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 参数2
 * @param scale_factor 缩放因子
 * @param param_4 参数4
 * @param param_5 参数5
 * @param param_6 参数6
 * @return void
 */
void initialize_rendering_data_buffer(int64_t render_context, uint64_t param_2, float scale_factor, uint64_t param_4, uint64_t param_5, int param_6)
{
  if (scale_factor == 0.0) {
    FUN_18011d9a0();
  }
  else {
    FUN_18011dc70((int *)(render_context + 0x80), param_6 + 1 + *(int *)(render_context + 0x80));
    if (-1 < param_6) {
                    // WARNING: Subroutine does not return
      AdvancedSystemController();
    }
  }
  return;
}

/**
 * 渲染数据缓冲区处理函数
 * 
 * @return void
 */
void process_rendering_data_buffer(void)
{
  int in_stack_000000a8;
  
  FUN_18011dc70();
  if (-1 < in_stack_000000a8) {
                    // WARNING: Subroutine does not return
    AdvancedSystemController();
  }
  return;
}

/**
 * 渲染系统内存分配函数
 * 
 * @return void
 */
void allocate_rendering_memory(void)
{
                    // WARNING: Subroutine does not return
  AdvancedSystemController();
}

/**
 * 空渲染函数（占位符）
 * 
 * @return void
 */
void empty_rendering_function_1(void)
{
  return;
}

/**
 * 空渲染函数（占位符）
 * 
 * @return void
 */
void empty_rendering_function_2(void)
{
  return;
}

/**
 * 处理渲染坐标的插值计算
 * 
 * @param render_context 渲染上下文指针
 * @param coord_start 起始坐标
 * @param coord_end 结束坐标
 * @param threshold 阈值
 * @param flags 标志位
 * @return void
 */
void process_rendering_coordinate_interpolation(int64_t render_context, float *coord_start, float *coord_end, float threshold, uint flags)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_10;
  float fStackX_14;
  
  fVar7 = 0.5;
  bVar1 = (byte)flags;
  if ((bVar1 & 3) == 3 || (bVar1 & 0xc) == 0xc) {
    fVar8 = 0.5;
  }
  else {
    fVar8 = 1.0;
  }
  fVar8 = ABS(*coord_end - *coord_start) * fVar8 - 1.0;
  if (fVar8 <= threshold) {
    threshold = fVar8;
  }
  if ((bVar1 & 5) != 5 && (bVar1 & 10) != 10) {
    fVar7 = 1.0;
  }
  fVar7 = ABS(coord_end[1] - coord_start[1]) * fVar7 - 1.0;
  if (threshold <= fVar7) {
    fVar7 = threshold;
  }
  if ((fVar7 <= 0.0) || (flags == 0)) {
    piVar5 = (int *)(render_context + 0x80);
    FUN_18011d9a0(piVar5);
    fStackX_10 = *coord_end;
    iVar6 = 8;
    fStackX_14 = coord_start[1];
    iVar3 = *piVar5;
    iVar2 = *(int *)(render_context + 0x84);
    if (iVar3 == iVar2) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      iVar4 = iVar3 + 1;
      if (iVar3 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_18011dc70(piVar5, iVar4);
      iVar3 = *piVar5;
    }
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)iVar3 * 8) =
         CONCAT44(fStackX_14, fStackX_10);
    *piVar5 = *piVar5 + 1;
    FUN_18011d9a0(piVar5, coord_end);
    fStackX_10 = *coord_start;
    fStackX_14 = coord_end[1];
    iVar3 = *piVar5;
    iVar2 = *(int *)(render_context + 0x84);
    if (iVar3 == iVar2) {
      if (iVar2 != 0) {
        iVar6 = iVar2 + iVar2 / 2;
      }
      iVar2 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar2 = iVar6;
      }
      FUN_18011dc70(piVar5, iVar2);
      iVar3 = *piVar5;
    }
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)iVar3 * 8) =
         CONCAT44(fStackX_14, fStackX_10);
    *piVar5 = *piVar5 + 1;
  }
  else {
    fVar8 = fVar7;
    if ((flags & 1) == 0) {
      fVar8 = 0.0;
    }
    fVar10 = fVar7;
    if ((flags & 2) == 0) {
      fVar10 = 0.0;
    }
    fVar9 = fVar7;
    if ((flags & 8) == 0) {
      fVar9 = 0.0;
    }
    if ((flags & 4) == 0) {
      fVar7 = 0.0;
    }
    fStackX_10 = *coord_start + fVar8;
    fStackX_14 = coord_start[1] + fVar8;
    FUN_180293730(render_context, &fStackX_10, fVar8, 6, 9);
    fStackX_14 = fVar10 + coord_start[1];
    fStackX_10 = *coord_end - fVar10;
    FUN_180293730(render_context, &fStackX_10, fVar10, 9, 0xc);
    fStackX_10 = *coord_end - fVar9;
    fStackX_14 = coord_end[1] - fVar9;
    FUN_180293730(render_context, &fStackX_10, fVar9, 0, 3);
    fStackX_10 = fVar7 + *coord_start;
    fStackX_14 = coord_end[1] - fVar7;
    FUN_180293730(render_context, &fStackX_10, fVar7, 3, 6);
  }
  return;
}

/**
 * 处理渲染坐标的高级变换
 * 
 * @param param_1 参数1
 * @return void
 */
void process_rendering_advanced_coordinate_transform(int32_t param_1)
{
  float *unaff_RBP;
  float *unaff_RSI;
  byte in_R10B;
  float in_XMM4_Da;
  float unaff_XMM6_Da;
  float fVar1;
  float fVar2;
  float unaff_XMM9_Da;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fStack000000000000008c = unaff_XMM6_Da;
  if ((in_R10B & 1) == 0) {
    fStack000000000000008c = 0.0;
  }
  fVar2 = unaff_XMM6_Da;
  if ((in_R10B & 2) == 0) {
    fVar2 = 0.0;
  }
  fVar1 = unaff_XMM6_Da;
  if ((in_R10B & 8) == 0) {
    fVar1 = 0.0;
  }
  if ((in_R10B & 4) == 0) {
    unaff_XMM6_Da = 0.0;
  }
  fStack0000000000000088 = unaff_XMM9_Da + fStack000000000000008c;
  fStack000000000000008c = in_XMM4_Da + fStack000000000000008c;
  FUN_180293730(param_1, &stack0x00000088);
  fStack000000000000008c = fVar2 + unaff_RBP[1];
  fStack0000000000000088 = *unaff_RSI - fVar2;
  FUN_180293730(fStack0000000000000088, &stack0x00000088, fVar2, 9, 0xc);
  fStack0000000000000088 = *unaff_RSI - fVar1;
  fStack000000000000008c = unaff_RSI[1] - fVar1;
  FUN_180293730(fStack0000000000000088, &stack0x00000088, fVar1, 0, 3);
  fStack0000000000000088 = unaff_XMM6_Da + *unaff_RBP;
  fStack000000000000008c = unaff_RSI[1] - unaff_XMM6_Da;
  FUN_180293730(fStack0000000000000088, &stack0x00000088, unaff_XMM6_Da, 3, 6);
  return;
}

/**
 * 渲染数据批处理函数
 * 
 * @return void
 */
void process_rendering_batch_data(void)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t unaff_RBX;
  int *piVar5;
  int32_t *unaff_RBP;
  int32_t *unaff_RSI;
  int iVar6;
  int32_t uStack000000000000008c;
  
  piVar5 = (int *)(unaff_RBX + 0x80);
  FUN_18011d9a0(piVar5);
  uVar1 = *unaff_RSI;
  iVar6 = 8;
  uStack000000000000008c = unaff_RBP[1];
  iVar3 = *piVar5;
  iVar2 = *(int *)(unaff_RBX + 0x84);
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_18011dc70(piVar5, iVar4);
    iVar3 = *piVar5;
  }
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x88) + (int64_t)iVar3 * 8) =
       CONCAT44(uStack000000000000008c, uVar1);
  *piVar5 = *piVar5 + 1;
  FUN_18011d9a0(piVar5);
  uVar1 = *unaff_RBP;
  uStack000000000000008c = unaff_RSI[1];
  iVar3 = *piVar5;
  iVar2 = *(int *)(unaff_RBX + 0x84);
  if (iVar3 == iVar2) {
    if (iVar2 != 0) {
      iVar6 = iVar2 + iVar2 / 2;
    }
    iVar2 = iVar3 + 1;
    if (iVar3 + 1 < iVar6) {
      iVar2 = iVar6;
    }
    FUN_18011dc70(piVar5, iVar2);
    iVar3 = *piVar5;
  }
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x88) + (int64_t)iVar3 * 8) =
       CONCAT44(uStack000000000000008c, uVar1);
  *piVar5 = *piVar5 + 1;
  return;
}

/**
 * 渲染数据流处理函数
 * 
 * @return void
 */
void process_rendering_data_stream(void)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_RBX;
  int32_t *unaff_RBP;
  int32_t *unaff_RSI;
  int iVar5;
  int32_t uStack000000000000008c;
  
  FUN_18011d9a0();
  uVar1 = *unaff_RSI;
  iVar5 = 8;
  uStack000000000000008c = unaff_RBP[1];
  iVar3 = *unaff_RBX;
  iVar2 = unaff_RBX[1];
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_18011dc70(uVar1, iVar4);
    iVar3 = *unaff_RBX;
  }
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar3 * 8) =
       CONCAT44(uStack000000000000008c, uVar1);
  *unaff_RBX = *unaff_RBX + 1;
  FUN_18011d9a0();
  uVar1 = *unaff_RBP;
  uStack000000000000008c = unaff_RSI[1];
  iVar3 = *unaff_RBX;
  iVar2 = unaff_RBX[1];
  if (iVar3 == iVar2) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_18011dc70(uVar1, iVar2);
    iVar3 = *unaff_RBX;
  }
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar3 * 8) =
       CONCAT44(uStack000000000000008c, uVar1);
  *unaff_RBX = *unaff_RBX + 1;
  return;
}

/**
 * 空渲染函数（占位符）
 * 
 * @return void
 */
void empty_rendering_function_3(void)
{
  return;
}

/**
 * 处理渲染坐标的偏移计算
 * 
 * @param render_context 渲染上下文指针
 * @param coord_start 起始坐标
 * @param coord_end 结束坐标
 * @param flags 标志位
 * @param param_5 参数5
 * @return void
 */
void process_rendering_coordinate_offset(int64_t render_context, float *coord_start, float *coord_end, uint flags, int32_t param_5)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((flags & 0xff000000) != 0) {
    fVar2 = *coord_start;
    piVar1 = (int *)(render_context + 0x80);
    iVar5 = *(int *)(render_context + 0x84);
    iVar7 = 8;
    fVar3 = coord_start[1];
    iVar6 = *piVar1;
    if (iVar6 == iVar5) {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar5) {
        iVar4 = iVar5;
      }
      FUN_18011dc70(piVar1, iVar4);
      iVar6 = *piVar1;
    }
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)iVar6 * 8) =
         CONCAT44(fVar3 + 0.5, fVar2 + 0.5);
    *piVar1 = *piVar1 + 1;
    fVar2 = *coord_end;
    fVar3 = coord_end[1];
    iVar5 = *piVar1;
    iVar6 = *(int *)(render_context + 0x84);
    if (iVar5 == iVar6) {
      if (iVar6 != 0) {
        iVar7 = iVar6 + iVar6 / 2;
      }
      iVar6 = iVar5 + 1;
      if (iVar5 + 1 < iVar7) {
        iVar6 = iVar7;
      }
      FUN_18011dc70(piVar1, iVar6);
      iVar5 = *piVar1;
    }
    *(uint64_t *)(*(int64_t *)(render_context + 0x88) + (int64_t)iVar5 * 8) =
         CONCAT44(fVar3 + 0.5, fVar2 + 0.5);
    *piVar1 = *piVar1 + 1;
    FUN_1802923e0(render_context, *(uint64_t *)(render_context + 0x88), *piVar1, flags, 0, param_5);
    *piVar1 = 0;
  }
  return;
}

/**
 * 处理渲染数据的浮点数计算
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @param param_5 参数5
 * @param param_6 参数6
 * @return void
 */
void process_rendering_float_calculation(float param_1, int64_t param_2, float *param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t in_RAX;
  int64_t in_RCX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int iVar7;
  uint64_t unaff_RDI;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t in_stack_00000080;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  piVar1 = (int *)(in_RCX + 0x80);
  iVar5 = *(int *)(in_RCX + 0x84);
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  iVar7 = 8;
  *(float *)(in_RAX + -0x28) = param_1 + 0.5;
  *(float *)(in_RAX + -0x24) = *(float *)(param_2 + 4) + 0.5;
  iVar6 = *piVar1;
  if (iVar6 == iVar5) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar4 = iVar6 + 1;
    if (iVar6 + 1 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_18011dc70(piVar1, iVar4);
    iVar6 = *piVar1;
  }
  *(uint64_t *)(*(int64_t *)(in_RCX + 0x88) + (int64_t)iVar6 * 8) = param_6;
  *piVar1 = *piVar1 + 1;
  fVar2 = *param_3;
  fVar3 = param_3[1];
  iVar5 = *piVar1;
  iVar6 = *(int *)(in_RCX + 0x84);
  if (iVar5 == iVar6) {
    if (iVar6 != 0) {
      iVar7 = iVar6 + iVar6 / 2;
    }
    iVar6 = iVar5 + 1;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar7;
    }
    FUN_18011dc70(piVar1, iVar6);
    iVar5 = *piVar1;
  }
  *(uint64_t *)(*(int64_t *)(in_RCX + 0x88) + (int64_t)iVar5 * 8) =
       CONCAT44(fVar3 + 0.5, fVar2 + 0.5);
  *piVar1 = *piVar1 + 1;
  FUN_1802923e0(in_stack_00000080, *(uint64_t *)(unaff_RSI + 0x88), *piVar1, unaff_EBP, 0);
  *piVar1 = 0;
  return;
}

/**
 * 处理渲染数据的变换计算
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return void
 */
void process_rendering_transform_calculation(float param_1, int64_t param_2)
{
  float fVar1;
  int iVar2;
  int64_t in_RAX;
  int in_ECX;
  int iVar3;
  int *unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int iVar4;
  float *unaff_R14;
  float fVar5;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint64_t in_stack_00000030;
  int32_t in_stack_00000080;
  
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  iVar4 = 8;
  *(float *)(in_RAX + -0x28) = param_1 + 0.5;
  fVar5 = *(float *)(param_2 + 4) + 0.5;
  *(float *)(in_RAX + -0x24) = fVar5;
  iVar2 = *unaff_RBX;
  if (iVar2 == in_ECX) {
    if (in_ECX == 0) {
      in_ECX = 8;
    }
    else {
      in_ECX = in_ECX / 2 + in_ECX;
    }
    iVar3 = iVar2 + 1;
    if (iVar2 + 1 < in_ECX) {
      iVar3 = in_ECX;
    }
    FUN_18011dc70(fVar5, iVar3);
    iVar2 = *unaff_RBX;
  }
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar2 * 8) = in_stack_00000030;
  *unaff_RBX = *unaff_RBX + 1;
  fVar5 = *unaff_R14;
  fVar1 = unaff_R14[1];
  iVar2 = *unaff_RBX;
  iVar3 = unaff_RBX[1];
  if (iVar2 == iVar3) {
    if (iVar3 != 0) {
      iVar4 = iVar3 + iVar3 / 2;
    }
    iVar3 = iVar2 + 1;
    if (iVar2 + 1 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_18011dc70(fVar5 + 0.5, iVar3);
    iVar2 = *unaff_RBX;
  }
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar2 * 8) =
       CONCAT44(fVar1 + 0.5, fVar5 + 0.5);
  *unaff_RBX = *unaff_RBX + 1;
  FUN_1802923e0(in_stack_00000080, *(uint64_t *)(unaff_RSI + 0x88), *unaff_RBX, unaff_EBP, 0);
  *unaff_RBX = 0;
  return;
}

/**
 * 处理渲染数据的数组操作
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @param param_5 参数5
 * @param param_6 参数6
 * @return void
 */
void process_rendering_array_operations(int32_t param_1, uint64_t param_2, int param_3, uint64_t param_4, uint64_t param_5, uint64_t param_6)
{
  int in_EAX;
  int iVar1;
  int *unaff_RBX;
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  int32_t in_stack_00000080;
  
  if (param_3 != 0) {
    unaff_EDI = param_3 + param_3 / 2;
  }
  iVar1 = in_EAX + 1;
  if (in_EAX + 1 < unaff_EDI) {
    iVar1 = unaff_EDI;
  }
  FUN_18011dc70(param_1, iVar1);
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)*unaff_RBX * 8) = param_6;
  *unaff_RBX = *unaff_RBX + 1;
  FUN_1802923e0(in_stack_00000080, *(uint64_t *)(unaff_RSI + 0x88), *unaff_RBX, unaff_EBP, 0);
  *unaff_RBX = 0;
  return;
}

/**
 * 空渲染函数（占位符）
 * 
 * @return void
 */
void empty_rendering_function_4(void)
{
  return;
}

/**
 * 处理渲染数据的边界计算
 * 
 * @param render_context 渲染上下文指针
 * @param coord_start 起始坐标
 * @param coord_end 结束坐标
 * @param param_4 参数4
 * @param param_5 参数5
 * @param param_6 参数6
 * @param param_7 参数7
 * @return void
 */
void process_rendering_boundary_calculation(int64_t render_context, float *coord_start, float *coord_end, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7)
{
  float fStackX_8;
  float fStackX_c;
  float fStack_18;
  float fStack_14;
  
  fStack_18 = *coord_start + 0.5;
  fStack_14 = coord_start[1] + 0.5;
  if ((*(byte *)(render_context + 0x30) & 1) == 0) {
    fStackX_8 = *coord_end - 0.49;
    fStackX_c = coord_end[1] - 0.49;
  }
  else {
    fStackX_8 = *coord_end - 0.5;
    fStackX_c = coord_end[1] - 0.5;
  }
  FUN_1802939e0(0x3f000000, &fStack_18, &fStackX_8, param_5, param_6);
  FUN_1802923e0(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), param_4, 1, param_7);
  *(int32_t *)(render_context + 0x80) = 0;
  return;
}

/**
 * 处理渲染数据的批量操作
 * 
 * @param render_context 渲染上下文指针
 * @param data_ptr1 数据指针1
 * @param data_ptr2 数据指针2
 * @param flags 标志位
 * @param scale_factor 缩放因子
 * @param param_6 参数6
 * @return void
 */
void process_rendering_batch_operations(int64_t render_context, uint64_t *data_ptr1, uint64_t *data_ptr2, uint flags, float scale_factor, int32_t param_6)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  short sVar7;
  int64_t lVar8;
  
  if ((flags & 0xff000000) != 0) {
    if (scale_factor <= 0.0) {
      FUN_1802921e0(0, 6, 4);
      sVar7 = *(short *)(render_context + 0x48);
      uVar1 = *(int32_t *)data_ptr2;
      uVar2 = *(int32_t *)((int64_t)data_ptr1 + 4);
      uVar3 = *(int32_t *)data_ptr1;
      uVar4 = (*(int32_t **)(render_context + 0x38))[1];
      uVar5 = **(int32_t **)(render_context + 0x38);
      uVar6 = *(int32_t *)((int64_t)data_ptr2 + 4);
      **(short **)(render_context + 0x58) = sVar7;
      *(short *)(*(int64_t *)(render_context + 0x58) + 2) = sVar7 + 1;
      *(short *)(*(int64_t *)(render_context + 0x58) + 4) = sVar7 + 2;
      *(short *)(*(int64_t *)(render_context + 0x58) + 6) = sVar7;
      *(short *)(*(int64_t *)(render_context + 0x58) + 8) = sVar7 + 2;
      *(short *)(*(int64_t *)(render_context + 0x58) + 10) = sVar7 + 3;
      **(uint64_t **)(render_context + 0x50) = *data_ptr1;
      lVar8 = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(lVar8 + 8) = uVar5;
      *(int32_t *)(lVar8 + 0xc) = uVar4;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x10) = flags;
      lVar8 = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(lVar8 + 0x14) = uVar1;
      *(int32_t *)(lVar8 + 0x18) = uVar2;
      lVar8 = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(lVar8 + 0x1c) = uVar5;
      *(int32_t *)(lVar8 + 0x20) = uVar4;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x24) = flags;
      *(uint64_t *)(*(int64_t *)(render_context + 0x50) + 0x28) = *data_ptr2;
      lVar8 = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(lVar8 + 0x30) = uVar5;
      *(int32_t *)(lVar8 + 0x34) = uVar4;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x38) = flags;
      lVar8 = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(lVar8 + 0x3c) = uVar3;
      *(int32_t *)(lVar8 + 0x40) = uVar6;
      lVar8 = *(int64_t *)(render_context + 0x50);
      *(int32_t *)(lVar8 + 0x44) = uVar5;
      *(int32_t *)(lVar8 + 0x48) = uVar4;
      *(uint *)(*(int64_t *)(render_context + 0x50) + 0x4c) = flags;
      *(int64_t *)(render_context + 0x50) = *(int64_t *)(render_context + 0x50) + 0x50;
      *(int *)(render_context + 0x48) = *(int *)(render_context + 0x48) + 4;
      *(int64_t *)(render_context + 0x58) = *(int64_t *)(render_context + 0x58) + 0xc;
    }
    else {
      FUN_1802939e0(0, data_ptr1, data_ptr2, scale_factor, param_6);
      FUN_180293190(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), flags);
      *(int32_t *)(render_context + 0x80) = 0;
    }
  }
  return;
}

/**
 * 处理渲染数据的高级索引
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return void
 */
void process_rendering_advanced_index(uint64_t param_1, uint64_t param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  short sVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  int32_t unaff_EDI;
  
  FUN_1802921e0(param_1, param_2, (int)param_2 + -2);
  sVar7 = *(short *)(unaff_RBX + 0x48);
  uVar1 = *(int32_t *)unaff_RSI;
  uVar2 = *(int32_t *)((int64_t)unaff_RBP + 4);
  uVar3 = *(int32_t *)unaff_RBP;
  uVar4 = (*(int32_t **)(unaff_RBX + 0x38))[1];
  uVar5 = **(int32_t **)(unaff_RBX + 0x38);
  uVar6 = *(int32_t *)((int64_t)unaff_RSI + 4);
  **(short **)(unaff_RBX + 0x58) = sVar7;
  *(short *)(*(int64_t *)(unaff_RBX + 0x58) + 2) = sVar7 + 1;
  *(short *)(*(int64_t *)(unaff_RBX + 0x58) + 4) = sVar7 + 2;
  *(short *)(*(int64_t *)(unaff_RBX + 0x58) + 6) = sVar7;
  *(short *)(*(int64_t *)(unaff_RBX + 0x58) + 8) = sVar7 + 2;
  *(short *)(*(int64_t *)(unaff_RBX + 0x58) + 10) = sVar7 + 3;
  **(uint64_t **)(unaff_RBX + 0x50) = *unaff_RBP;
  lVar8 = *(int64_t *)(unaff_RBX + 0x50);
  *(int32_t *)(lVar8 + 8) = uVar5;
  *(int32_t *)(lVar8 + 0xc) = uVar4;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x50) + 0x10) = unaff_EDI;
  lVar8 = *(int64_t *)(unaff_RBX + 0x50);
  *(int32_t *)(lVar8 + 0x14) = uVar1;
  *(int32_t *)(lVar8 + 0x18) = uVar2;
  lVar8 = *(int64_t *)(unaff_RBX + 0x50);
  *(int32_t *)(lVar8 + 0x1c) = uVar5;
  *(int32_t *)(lVar8 + 0x20) = uVar4;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x50) + 0x24) = unaff_EDI;
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x50) + 0x28) = *unaff_RSI;
  lVar8 = *(int64_t *)(unaff_RBX + 0x50);
  *(int32_t *)(lVar8 + 0x30) = uVar5;
  *(int32_t *)(lVar8 + 0x34) = uVar4;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x50) + 0x38) = unaff_EDI;
  lVar8 = *(int64_t *)(unaff_RBX + 0x50);
  *(int32_t *)(lVar8 + 0x3c) = uVar3;
  *(int32_t *)(lVar8 + 0x40) = uVar6;
  lVar8 = *(int64_t *)(unaff_RBX + 0x50);
  *(int32_t *)(lVar8 + 0x44) = uVar5;
  *(int32_t *)(lVar8 + 0x48) = uVar4;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x50) + 0x4c) = unaff_EDI;
  *(int64_t *)(unaff_RBX + 0x50) = *(int64_t *)(unaff_RBX + 0x50) + 0x50;
  *(int *)(unaff_RBX + 0x48) = *(int *)(unaff_RBX + 0x48) + 4;
  *(int64_t *)(unaff_RBX + 0x58) = *(int64_t *)(unaff_RBX + 0x58) + 0xc;
  return;
}

/**
 * 空渲染函数（占位符）
 * 
 * @return void
 */
void empty_rendering_function_5(void)
{
  return;
}

/**
 * 处理渲染数据的多重采样
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @param flags 标志位
 * @return void
 */
void process_rendering_multisampling(int64_t render_context, uint64_t param_2, uint64_t param_3, uint64_t param_4, uint flags)
{
  if ((flags & 0xff000000) != 0) {
    FUN_18011d9a0(render_context + 0x80);
    FUN_18011d9a0(render_context + 0x80, param_3);
    FUN_18011d9a0(render_context + 0x80, param_4);
    FUN_180293190(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), flags);
    *(int32_t *)(render_context + 0x80) = 0;
  }
  return;
}

/**
 * 处理渲染数据的纹理映射
 * 
 * @return void
 */
void process_rendering_texture_mapping(void)
{
  int64_t unaff_RSI;
  
  FUN_18011d9a0();
  FUN_18011d9a0(unaff_RSI + 0x80);
  FUN_18011d9a0(unaff_RSI + 0x80);
  FUN_180293190();
  *(int32_t *)(unaff_RSI + 0x80) = 0;
  return;
}

/**
 * 空渲染函数（占位符）
 * 
 * @return void
 */
void empty_rendering_function_6(void)
{
  return;
}

/**
 * 处理渲染数据的材质混合
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @param flags 标志位
 * @param param_6 参数6
 * @return void
 */
void process_rendering_material_blending(int64_t render_context, uint64_t param_2, float param_3, uint flags, uint64_t param_5, int32_t param_6)
{
  if ((flags & 0xff000000) != 0) {
    FUN_180293860(0x40bc7edd, param_2, param_3 - 0.5, 0, 0x40bc7edd, 0xf);
    FUN_1802923e0(render_context, *(uint64_t *)(render_context + 0x88), *(int32_t *)(render_context + 0x80), flags, 1, param_6);
    *(int32_t *)(render_context + 0x80) = 0;
  }
  return;
}

/**
 * 处理渲染数据的字符串操作
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param data_ptr 数据指针
 * @param flags 标志位
 * @param param_6 参数6
 * @param param_7 参数7
 * @param param_8 参数8
 * @param param_9 参数9
 * @return void
 */
void process_rendering_string_operations(int64_t render_context, int64_t param_2, float param_3, uint64_t *data_ptr, uint flags, int64_t param_6, int64_t param_7, int32_t param_8, float *param_9)
{
  uint64_t *puVar1;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if ((flags & 0xff000000) != 0) {
    if (param_7 == 0) {
      param_7 = -1;
      do {
        param_7 = param_7 + 1;
      } while (*(char *)(param_6 + param_7) != '\0');
      param_7 = param_7 + param_6;
    }
    if (param_6 != param_7) {
      if (param_2 == 0) {
        param_2 = *(int64_t *)(*(int64_t *)(render_context + 0x38) + 8);
      }
      if (param_3 == 0.0) {
        param_3 = *(float *)(*(int64_t *)(render_context + 0x38) + 0x10);
      }
      puVar1 = (uint64_t *)
               (*(int64_t *)(render_context + 0x68) + -0x10 + (int64_t)*(int *)(render_context + 0x60) * 0x10);
      uStack_18 = *puVar1;
      uStack_10 = puVar1[1];
      if (param_9 != (float *)0x0) {
        if ((float)uStack_18 < *param_9) {
          uStack_18._4_4_ = (float)((uint64_t)uStack_18 >> 0x20);
          uStack_18 = CONCAT44(uStack_18._4_4_, *param_9);
        }
        if (uStack_18._4_4_ < param_9[1]) {
          uStack_18 = CONCAT44(param_9[1], (float)uStack_18);
        }
        if (param_9[2] <= (float)uStack_10) {
          uStack_10._4_4_ = (float)((uint64_t)uStack_10 >> 0x20);
          uStack_10 = CONCAT44(uStack_10._4_4_, param_9[2]);
        }
        if (param_9[3] <= uStack_10._4_4_) {
          uStack_10 = CONCAT44(param_9[3], (float)uStack_10);
        }
      }
      FUN_180297590(param_2, render_context, param_3, *data_ptr, flags, &uStack_18, param_6, param_7, param_8, param_9 != (float *)0x0);
    }
  }
  return;
}

/**
 * 处理渲染数据的缓冲区管理
 * 
 * @param render_context 渲染上下文指针
 * @param data_ptr 数据指针
 * @param flags 标志位
 * @param param_4 参数4
 * @return void
 */
void process_rendering_buffer_management(int64_t render_context, uint64_t *data_ptr, uint flags, int64_t param_4)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if ((flags & 0xff000000) != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_4 + lVar2) != '\0');
    if (param_4 != lVar2 + param_4) {
      puVar1 = (int32_t *)
               (*(int64_t *)(render_context + 0x68) + -0x10 + (int64_t)*(int *)(render_context + 0x60) * 0x10);
      uStack_18 = *puVar1;
      uStack_14 = puVar1[1];
      uStack_10 = puVar1[2];
      uStack_c = puVar1[3];
      FUN_180297590(*(uint64_t *)(*(int64_t *)(render_context + 0x38) + 8), render_context,
                    *(int32_t *)(*(int64_t *)(render_context + 0x38) + 0x10), *data_ptr, flags,
                    &uStack_18, param_4, lVar2 + param_4, 0, 0);
    }
  }
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address