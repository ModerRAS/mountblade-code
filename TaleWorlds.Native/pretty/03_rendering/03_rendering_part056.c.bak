#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part056.c - 14 个函数
// 渲染系统高级弧线计算和数据处理模块

// 函数别名定义
#define render_advanced_arc_calculation FUN_18029833b
#define render_empty_operation_1 FUN_180298850
#define render_boundary_processing FUN_180298890
#define render_memory_copy_optimized FUN_180298c20
#define render_data_decompress FUN_180298c80
#define render_checksum_validation FUN_180298ee0
#define render_array_resize_16bit FUN_180299170
#define render_array_resize_inline FUN_1802991ad
#define render_simple_assignment FUN_18029921e
#define render_array_resize_40bit FUN_180299230
#define render_array_resize_alt FUN_18029924a
#define render_simple_assignment_2 FUN_180299304
#define render_simple_assignment_3 FUN_180299316
#define render_array_append_32bit FUN_180299330
#define render_array_append_inline FUN_180299378
#define render_array_append_alt FUN_1802993e9

/**
 * 渲染系统高级弧线计算函数
 * 
 * 该函数执行复杂的渲染几何计算，主要处理弧线相关的数学运算
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 浮点参数2，可能表示角度或弧度
 * @param param_3 浮点参数3，可能表示角度或弧度
 * @param param_4 浮点参数4，可能表示角度或弧度
 */
void render_advanced_arc_calculation(uint64_t render_context, float param_2, float param_3, float param_4)

{
  int *piVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong unaff_RBP;
  int iVar7;
  longlong unaff_RDI;
  float *unaff_R14;
  int32_t unaff_R15D;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar13;
  float fVar14;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  
  fVar9 = (param_2 - unaff_XMM13_Da) * 0.5;
  if (param_3 <= fVar9) {
    fVar9 = param_3;
  }
  fVar9 = fVar9 - 1.0;
  if (unaff_XMM8_Da <= fVar9) {
    if (fVar9 <= unaff_XMM7_Da) {
      unaff_XMM7_Da = fVar9;
    }
  }
  else {
    unaff_XMM7_Da = 0.0;
  }
  fVar11 = 1.0 / unaff_XMM7_Da;
  *(float *)(unaff_RBP + 0x7f) = fVar11;
  fVar9 = 1.0 - (param_4 - unaff_XMM9_Da) * fVar11;
  if (unaff_XMM8_Da < fVar9) {
    if (fVar9 < 1.0) {
      fVar9 = (float)acosf(fVar9);
    }
    else {
      fVar9 = 0.0;
    }
  }
  else {
    fVar9 = 1.5707964;
  }
  fVar11 = 1.0 - (unaff_XMM10_Da - unaff_XMM9_Da) * fVar11;
  if (unaff_XMM8_Da < fVar11) {
    if (fVar11 < 1.0) {
      fVar11 = (float)acosf();
    }
    else {
      fVar11 = 0.0;
    }
  }
  else {
    fVar11 = 1.5707964;
  }
  iVar7 = 8;
  fVar13 = unaff_XMM9_Da + unaff_XMM7_Da;
  if (unaff_XMM9_Da + unaff_XMM7_Da <= *(float *)(unaff_RBP + 0x67)) {
    fVar13 = *(float *)(unaff_RBP + 0x67);
  }
  if (fVar9 == fVar11) {
    piVar1 = (int *)(unaff_RDI + 0x80);
    *(float *)(unaff_RBP + -0x79) = fVar13;
    iVar6 = *piVar1;
    iVar5 = *(int *)(unaff_RDI + 0x84);
    *(float *)(unaff_RBP + -0x75) = unaff_XMM14_Da;
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
      FUN_18011dc70(piVar1,iVar4);
      iVar6 = *piVar1;
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x88);
    uVar3 = *(uint64_t *)(unaff_RBP + -0x79);
    *(float *)(unaff_RBP + -0x79) = fVar13;
    *(float *)(unaff_RBP + -0x75) = unaff_XMM13_Da;
    *(uint64_t *)(lVar2 + (longlong)iVar6 * 8) = uVar3;
    *piVar1 = *piVar1 + 1;
    iVar6 = *piVar1;
    iVar5 = *(int *)(unaff_RDI + 0x84);
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
      FUN_18011dc70(piVar1,iVar4);
      iVar6 = *piVar1;
    }
    *(uint64_t *)(*(longlong *)(unaff_RDI + 0x88) + (longlong)iVar6 * 8) =
         *(uint64_t *)(unaff_RBP + -0x79);
    *piVar1 = *piVar1 + 1;
  }
  else if ((fVar9 == unaff_XMM8_Da) && (fVar11 == 1.5707964)) {
    *(float *)(unaff_RBP + -0x79) = fVar13;
    *(float *)(unaff_RBP + -0x75) = unaff_XMM14_Da - unaff_XMM7_Da;
    FUN_180293730(unaff_XMM14_Da - unaff_XMM7_Da,unaff_RBP + -0x79,unaff_XMM7_Da,3,6);
    *(float *)(unaff_RBP + -0x79) = fVar13;
    *(float *)(unaff_RBP + -0x75) = unaff_XMM13_Da + unaff_XMM7_Da;
    FUN_180293730(unaff_XMM13_Da + unaff_XMM7_Da,unaff_RBP + -0x79,unaff_XMM7_Da,6,9);
  }
  else {
    *(float *)(unaff_RBP + -0x79) = fVar13;
    *(float *)(unaff_RBP + -0x75) = unaff_XMM14_Da - unaff_XMM7_Da;
    FUN_180293860(unaff_XMM14_Da - unaff_XMM7_Da,unaff_RBP + -0x79,unaff_XMM7_Da,3.1415927 - fVar11,
                  3.1415927 - fVar9);
    *(float *)(unaff_RBP + -0x79) = fVar13;
    *(float *)(unaff_RBP + -0x75) = unaff_XMM13_Da + unaff_XMM7_Da;
    FUN_180293860(unaff_XMM13_Da + unaff_XMM7_Da,unaff_RBP + -0x79,unaff_XMM7_Da,fVar9 + 3.1415927,
                  fVar11 + 3.1415927);
  }
  fVar9 = *(float *)(unaff_RBP + 0x77);
  fVar11 = unaff_XMM7_Da + *unaff_R14;
  if (fVar11 < fVar9) {
    fVar13 = unaff_R14[2];
    fVar11 = *(float *)(unaff_RBP + 0x7f);
    fVar10 = 1.0 - (fVar13 - fVar9) * fVar11;
    if (unaff_XMM8_Da < fVar10) {
      if (fVar10 < 1.0) {
        fVar10 = (float)acosf(fVar10);
      }
      else {
        fVar10 = 0.0;
      }
    }
    else {
      fVar10 = 1.5707964;
    }
    fVar11 = 1.0 - (fVar13 - *(float *)(unaff_RBP + 0x67)) * fVar11;
    if (unaff_XMM8_Da < fVar11) {
      if (fVar11 < 1.0) {
        fVar11 = (float)acosf();
        fVar14 = fVar11;
      }
      else {
        fVar14 = 0.0;
      }
    }
    else {
      fVar14 = 1.5707964;
    }
    fVar12 = fVar13 - unaff_XMM7_Da;
    if (fVar9 <= fVar13 - unaff_XMM7_Da) {
      fVar12 = fVar9;
    }
    if (fVar10 == fVar14) {
      piVar1 = (int *)(unaff_RDI + 0x80);
      *(float *)(unaff_RBP + 0x67) = fVar12;
      iVar6 = *piVar1;
      iVar5 = *(int *)(unaff_RDI + 0x84);
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM13_Da;
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
        fVar11 = (float)FUN_18011dc70(piVar1,iVar4);
        iVar6 = *piVar1;
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x88);
      uVar3 = *(uint64_t *)(unaff_RBP + 0x67);
      *(float *)(unaff_RBP + 0x67) = fVar12;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM14_Da;
      *(uint64_t *)(lVar2 + (longlong)iVar6 * 8) = uVar3;
      *piVar1 = *piVar1 + 1;
      iVar6 = *piVar1;
      iVar5 = *(int *)(unaff_RDI + 0x84);
      if (iVar6 == iVar5) {
        if (iVar5 != 0) {
          iVar7 = iVar5 + iVar5 / 2;
        }
        iVar5 = iVar6 + 1;
        if (iVar6 + 1 < iVar7) {
          iVar5 = iVar7;
        }
        fVar11 = (float)FUN_18011dc70(piVar1,iVar5);
        iVar6 = *piVar1;
      }
      *(uint64_t *)(*(longlong *)(unaff_RDI + 0x88) + (longlong)iVar6 * 8) =
           *(uint64_t *)(unaff_RBP + 0x67);
      *piVar1 = *piVar1 + 1;
    }
    else if ((fVar10 == unaff_XMM8_Da) && (fVar14 == 1.5707964)) {
      *(float *)(unaff_RBP + 0x67) = fVar12;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM13_Da + unaff_XMM7_Da;
      uVar8 = FUN_180293730(fVar11,unaff_RBP + 0x67,unaff_XMM7_Da,9,0xc);
      *(float *)(unaff_RBP + 0x67) = fVar12;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM14_Da - unaff_XMM7_Da;
      fVar11 = (float)FUN_180293730(uVar8,unaff_RBP + 0x67,unaff_XMM7_Da,0,3);
    }
    else {
      *(float *)(unaff_RBP + 0x67) = fVar12;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM13_Da + unaff_XMM7_Da;
      uVar8 = FUN_180293860(fVar11,unaff_RBP + 0x67,unaff_XMM7_Da,-fVar14,-fVar10);
      *(float *)(unaff_RBP + 0x67) = fVar12;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM14_Da - unaff_XMM7_Da;
      fVar11 = (float)FUN_180293860(uVar8,unaff_RBP + 0x67,unaff_XMM7_Da,fVar10,fVar14);
    }
  }
  FUN_180293190(fVar11,*(uint64_t *)(unaff_RDI + 0x88),*(int32_t *)(unaff_RDI + 0x80),
                unaff_R15D);
  *(int32_t *)(unaff_RDI + 0x80) = 0;
  return;
}





/**
 * 渲染系统空操作函数1
 * 
 * 该函数是一个空操作函数，可能用于占位或初始化
 */
void render_empty_operation_1(void)

{
  return;
}





/**
 * 渲染系统边界处理函数
 * 
 * 该函数处理渲染边界相关的计算和操作
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 浮点数组指针，包含4个元素
 * @param param_3 浮点数组指针，包含4个元素
 * @param param_4 无符号长整型参数
 * @param param_5 无符号整型参数
 */
void render_boundary_processing(uint64_t param_1, float *param_2, float *param_3, ulonglong param_4,
                  int32_t param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fStackX_10;
  float fStackX_14;
  float fStackX_18;
  float fStackX_1c;
  
  uVar13 = param_4 & 0xffffffff;
  fVar1 = param_3[3];
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar4 = *param_3;
  fVar5 = param_2[3];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = *param_2;
  bVar9 = fVar8 < fVar4;
  bVar10 = fVar7 <= fVar2;
  bVar11 = fVar6 < fVar3;
  bVar12 = fVar5 <= fVar1;
  if (bVar9) {
    fStackX_10 = fVar4;
    fStackX_14 = fVar1;
    fStackX_18 = fVar8;
    fStackX_1c = fVar3;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,param_4,param_5,!bVar11 | bVar12 << 2);
  }
  if (!bVar10) {
    fStackX_10 = fVar7;
    fStackX_14 = fVar1;
    fStackX_18 = fVar2;
    fStackX_1c = fVar3;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,!bVar11 * '\x02' | bVar12 << 3);
  }
  if (bVar11) {
    fStackX_10 = fVar2;
    fStackX_14 = fVar3;
    fStackX_18 = fVar4;
    fStackX_1c = fVar6;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,!bVar9 | bVar10 * '\x02');
  }
  if (!bVar12) {
    fStackX_10 = fVar2;
    fStackX_14 = fVar5;
    fStackX_18 = fVar4;
    fStackX_1c = fVar1;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,
                  (bVar9 ^ 1) << 2 | (uint)bVar10 << 3);
  }
  if ((bVar9) && (bVar11)) {
    fStackX_10 = fVar4;
    fStackX_14 = fVar3;
    fStackX_18 = fVar8;
    fStackX_1c = fVar6;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,1);
  }
  if ((!bVar10) && (bVar11)) {
    fStackX_10 = fVar7;
    fStackX_14 = fVar3;
    fStackX_18 = fVar2;
    fStackX_1c = fVar6;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,2);
  }
  if ((bVar9) && (!bVar12)) {
    fStackX_10 = fVar4;
    fStackX_14 = fVar5;
    fStackX_18 = fVar8;
    fStackX_1c = fVar1;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,4);
  }
  if ((!bVar10) && (!bVar12)) {
    fStackX_10 = fVar7;
    fStackX_14 = fVar5;
    fStackX_18 = fVar2;
    fStackX_1c = fVar1;
    FUN_180293f50(param_1,&fStackX_18,&fStackX_10,uVar13,param_5,8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统内存复制优化函数
 * 
 * 该函数执行优化的内存复制操作，用于渲染数据处理
 * 
 * @param param_1 源数据指针
 * @param param_2 复制长度参数
 */
void render_memory_copy_optimized(ulonglong param_1, uint param_2)

{
  if (render_system_config < param_2 + render_system_config) {
    render_system_config = param_2 + render_system_config;
    return;
  }
  if (param_1 < render_system_config) {
    render_system_config = render_system_config + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(render_system_config,param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染系统数据解压缩函数
 * 
 * 该函数处理渲染数据的解压缩操作
 * 
 * @param param_1 输入数据指针
 * @return 处理后的数据指针
 */
byte * render_data_decompress(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (0x1f < bVar1) {
    if (0x7f < bVar1) {
      func_0x000180298bc0((render_system_config - (ulonglong)param_1[1]) + -1,bVar1 - 0x7f);
      return param_1 + 2;
    }
    if (0x3f < bVar1) {
      func_0x000180298bc0(((render_system_config + (ulonglong)bVar1 * -0x100) - (ulonglong)param_1[1]) +
                          0x3fff,param_1[2] + 1);
      return param_1 + 3;
    }
    FUN_180298c20(param_1 + 1,bVar1 - 0x1f);
    return param_1 + ((ulonglong)*param_1 - 0x1e);
  }
  if (0x17 < bVar1) {
    func_0x000180298bc0(((render_system_config + (ulonglong)CONCAT11(bVar1,param_1[1]) * -0x100) -
                        (ulonglong)param_1[2]) + 0x17ffff,param_1[3] + 1);
    return param_1 + 4;
  }
  if (0xf < bVar1) {
    func_0x000180298bc0(((render_system_config + (ulonglong)CONCAT11(bVar1,param_1[1]) * -0x100) -
                        (ulonglong)param_1[2]) + 0xfffff,
                        (uint)param_1[4] + (uint)param_1[3] * 0x100 + 1);
    return param_1 + 5;
  }
  if (7 < bVar1) {
    FUN_180298c20(param_1 + 2,(param_1[1] - 0x7ff) + (uint)bVar1 * 0x100);
    return param_1 + (ulonglong)*param_1 * 0x100 + -0x7fd + (ulonglong)param_1[1];
  }
  if (bVar1 == 7) {
    FUN_180298c20(param_1 + 3,(uint)param_1[2] + (uint)param_1[1] * 0x100 + 1);
    return param_1 + (ulonglong)param_1[1] * 0x100 + 4 + (ulonglong)param_1[2];
  }
  if (bVar1 == 6) {
    func_0x000180298bc0(((render_system_config + (ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100) -
                        (ulonglong)param_1[3]) + -1,param_1[4] + 1);
    return param_1 + 5;
  }
  if (bVar1 == 4) {
    func_0x000180298bc0(((render_system_config + (ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100) -
                        (ulonglong)param_1[3]) + -1,(uint)param_1[5] + (uint)param_1[4] * 0x100 + 1)
    ;
    param_1 = param_1 + 6;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染系统校验和验证函数
 * 
 * 该函数验证渲染数据的校验和，确保数据完整性
 * 
 * @param param_1 输入数据指针
 * @param param_2 校验数据指针
 * @return 验证成功返回数据长度，失败返回0
 */
uint render_checksum_validation(byte *param_1, byte *param_2)

{
  byte header_byte;
  uint checksum_result;
  byte *decompressed_ptr;
  byte *current_ptr;
  int byte_sum_1;
  int byte_sum_2;
  int byte_sum_3;
  int byte_sum_4;
  int byte_sum_5;
  int byte_sum_6;
  int byte_sum_7;
  int byte_sum_8;
  uint cumulative_sum;
  uint bit_position;
  uint data_length;
  byte *data_end_ptr;
  uint block_size;
  uint checksum_accumulator;
  ulonglong loop_counter;
  uint offset_value;
  bool has_more_data;
  
  // 验证文件头魔术字
  if (((((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
       (uint)param_2[3] == 0x57bc0000) &&
     ((((uint)param_2[4] * 0x100 + (uint)param_2[5]) * 0x100 + (uint)param_2[6]) * 0x100 +
      (uint)param_2[7] == 0)) {
    offset_value = (uint)param_2[8] * 0x1000000 + (uint)param_2[9] * 0x10000 + (uint)param_2[10] * 0x100 +
                 (uint)param_2[0xb];
    data_end_ptr = param_1 + offset_value;
    render_system_config = data_end_ptr;
    render_system_config = param_1;
    render_system_config = param_2;
    render_system_config = param_1;
    decompressed_ptr = (byte *)render_data_decompress(param_2 + 0x10);
    current_ptr = decompressed_ptr;
    
    // 解压缩数据验证循环
    if (decompressed_ptr != param_2 + 0x10) {
      do {
        if (data_end_ptr < render_system_config) {
          return 0;
        }
        decompressed_ptr = (byte *)render_data_decompress(current_ptr);
        has_more_data = decompressed_ptr != current_ptr;
        current_ptr = decompressed_ptr;
      } while (has_more_data);
    }
    
    // 验证数据结束标记
    if (((*decompressed_ptr == 5) && (decompressed_ptr[1] == 0xfa)) && (render_system_config == data_end_ptr)) {
      checksum_accumulator = 0;
      cumulative_sum = 1;
      data_length = offset_value;
      checksum_result = offset_value % 0x15b0;
      
      // 主校验和计算循环
      while (data_length != 0) {
        bit_position = 0;
        if (7 < checksum_result) {
          block_size = 7;
          do {
            bit_position = bit_position + 8;
            byte_sum_1 = cumulative_sum + *param_1;
            block_size = block_size + 8;
            byte_sum_2 = byte_sum_1 + (uint)param_1[1];
            byte_sum_3 = byte_sum_2 + (uint)param_1[2];
            byte_sum_4 = byte_sum_3 + (uint)param_1[3];
            byte_sum_5 = byte_sum_4 + (uint)param_1[4];
            byte_sum_6 = byte_sum_5 + (uint)param_1[5];
            byte_sum_7 = byte_sum_6 + (uint)param_1[6];
            cumulative_sum = byte_sum_7 + (uint)param_1[7];
            param_1 = param_1 + 8;
            checksum_accumulator = checksum_accumulator + byte_sum_1 + byte_sum_2 + byte_sum_3 + byte_sum_4 + byte_sum_5 + byte_sum_6 + byte_sum_7 + cumulative_sum;
          } while (block_size < checksum_result);
        }
        byte_sum_1 = 0;
        byte_sum_2 = 0;
        if (bit_position < checksum_result) {
          if (1 < checksum_result - bit_position) {
            block_size = ((checksum_result - bit_position) - 2 >> 1) + 1;
            loop_counter = (ulonglong)block_size;
            bit_position = bit_position + block_size * 2;
            do {
              header_byte = *param_1;
              current_ptr = param_1 + 1;
              byte_sum_1 = byte_sum_1 + cumulative_sum + header_byte;
              param_1 = param_1 + 2;
              cumulative_sum = cumulative_sum + header_byte + (uint)*current_ptr;
              byte_sum_2 = byte_sum_2 + cumulative_sum;
              loop_counter = loop_counter - 1;
            } while (loop_counter != 0);
          }
          if (bit_position < checksum_result) {
            cumulative_sum = cumulative_sum + *param_1;
            checksum_accumulator = checksum_accumulator + cumulative_sum;
            param_1 = param_1 + 1;
          }
          checksum_accumulator = checksum_accumulator + byte_sum_2 + byte_sum_1;
        }
        cumulative_sum = cumulative_sum % 0xfff1;
        checksum_accumulator = checksum_accumulator % 0xfff1;
        data_length = data_length - checksum_result;
        checksum_result = 0x15b0;
      }
      
      // 验证计算出的校验和与存储的校验和是否匹配
      if (checksum_accumulator * 0x10000 + cumulative_sum ==
          (uint)decompressed_ptr[2] * 0x1000000 + (uint)decompressed_ptr[3] * 0x10000 + (uint)decompressed_ptr[4] * 0x100 +
          (uint)decompressed_ptr[5]) {
        return offset_value;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统数组大小调整函数（16位数据）
 * 
 * 该函数调整渲染数组的大小，每项16位（2字节）
 * 
 * @param param_1 数组指针，包含容量和大小信息
 * @param param_2 新的大小参数
 */
void render_array_resize_16bit(int *param_1, int param_2)

{
  int current_capacity;
  int new_capacity;
  uint64_t new_memory_ptr;
  int final_capacity;
  
  current_capacity = param_1[1];
  if (current_capacity == 0) {
    new_capacity = 8;
  }
  else {
    new_capacity = current_capacity / 2 + current_capacity;
  }
  final_capacity = param_2;
  if (param_2 < new_capacity) {
    final_capacity = new_capacity;
  }
  if (current_capacity < final_capacity) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    new_memory_ptr = func_0x000180120ce0((longlong)final_capacity << 4,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(param_1 + 2) != 0) {
      // WARNING: Subroutine does not return
      memcpy(new_memory_ptr,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
    }
    *(uint64_t *)(param_1 + 2) = new_memory_ptr;
    param_1[1] = final_capacity;
  }
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统内联数组大小调整函数
 * 
 * 该函数是数组大小调整的内联版本
 */
void render_array_resize_inline(void)

{
  longlong context_ptr;
  uint64_t new_memory_ptr;
  int *array_ptr;
  int array_size;
  int new_capacity;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + 1;
  }
  new_memory_ptr = func_0x000180120ce0((longlong)new_capacity << 4,SYSTEM_DATA_MANAGER_B);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // WARNING: Subroutine does not return
    memcpy(new_memory_ptr,*(longlong *)(array_ptr + 2),(longlong)*array_ptr << 4);
  }
  *(uint64_t *)(array_ptr + 2) = new_memory_ptr;
  array_ptr[1] = new_capacity;
  *array_ptr = array_size;
  return;
}





/**
 * 渲染系统简单赋值函数
 * 
 * 该函数执行简单的赋值操作
 */
void render_simple_assignment(void)

{
  int32_t *target_ptr;
  int32_t value;
  
  *target_ptr = value;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统数组大小调整函数（40位数据）
 * 
 * 该函数调整渲染数组的大小，每项40位（5字节）
 * 
 * @param param_1 数组指针，包含容量和大小信息
 * @param param_2 新的大小参数
 */
void render_array_resize_40bit(int *param_1, int param_2)

{
  int current_capacity;
  int new_capacity;
  uint64_t new_memory_ptr;
  int final_capacity;
  
  current_capacity = param_1[1];
  if (param_2 <= current_capacity) {
    *param_1 = param_2;
    return;
  }
  if (current_capacity == 0) {
    new_capacity = 8;
  }
  else {
    new_capacity = current_capacity / 2 + current_capacity;
  }
  final_capacity = param_2;
  if (param_2 < new_capacity) {
    final_capacity = new_capacity;
  }
  if (current_capacity < final_capacity) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    new_memory_ptr = func_0x000180120ce0((longlong)final_capacity * 0x28,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(param_1 + 2) != 0) {
      // WARNING: Subroutine does not return
      memcpy(new_memory_ptr,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x28);
    }
    *(uint64_t *)(param_1 + 2) = new_memory_ptr;
    param_1[1] = final_capacity;
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统替代数组大小调整函数
 * 
 * 该函数是数组大小调整的替代实现
 * 
 * @param param_1 数组大小参数
 */
void render_array_resize_alt(int param_1)

{
  int current_size;
  uint64_t new_memory_ptr;
  int *array_ptr;
  int new_capacity;
  int requested_size;
  
  if (param_1 == 0) {
    current_size = 8;
  }
  else {
    current_size = param_1 / 2 + param_1;
  }
  new_capacity = requested_size;
  if (requested_size < current_size) {
    new_capacity = current_size;
  }
  if (param_1 < new_capacity) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    new_memory_ptr = func_0x000180120ce0((longlong)new_capacity * 0x28,SYSTEM_DATA_MANAGER_B);
    if (*(longlong *)(array_ptr + 2) != 0) {
      // WARNING: Subroutine does not return
      memcpy(new_memory_ptr,*(longlong *)(array_ptr + 2),(longlong)*array_ptr * 0x28);
    }
    *(uint64_t *)(array_ptr + 2) = new_memory_ptr;
    array_ptr[1] = new_capacity;
    *array_ptr = requested_size;
    return;
  }
  *array_ptr = requested_size;
  return;
}





/**
 * 渲染系统简单赋值函数2
 * 
 * 该函数执行简单的赋值操作（第二个版本）
 */
void render_simple_assignment_2(void)

{
  int32_t *target_ptr;
  int32_t value;
  
  *target_ptr = value;
  return;
}





/**
 * 渲染系统简单赋值函数3
 * 
 * 该函数执行简单的赋值操作（第三个版本）
 */
void render_simple_assignment_3(void)

{
  int32_t *target_ptr;
  int32_t value;
  
  *target_ptr = value;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统数组添加函数（32位数据）
 * 
 * 该函数向数组中添加元素，每项32位（4字节）
 * 
 * @param param_1 数组指针，包含容量和大小信息
 * @param param_2 要添加的数据指针
 */
void render_array_append_32bit(int *param_1, uint64_t *param_2)

{
  uint64_t *array_element_ptr;
  int current_capacity;
  longlong array_data_ptr;
  int new_capacity;
  uint64_t new_memory_ptr;
  int new_size;
  
  current_capacity = param_1[1];
  if (*param_1 == current_capacity) {
    new_size = *param_1 + 1;
    if (current_capacity == 0) {
      new_capacity = 8;
    }
    else {
      new_capacity = current_capacity / 2 + current_capacity;
    }
    if (new_size < new_capacity) {
      new_size = new_capacity;
    }
    if (current_capacity < new_size) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      new_memory_ptr = func_0x000180120ce0((longlong)new_size << 5,SYSTEM_DATA_MANAGER_B);
      if (*(longlong *)(param_1 + 2) != 0) {
        // WARNING: Subroutine does not return
        memcpy(new_memory_ptr,*(longlong *)(param_1 + 2),(longlong)*param_1 << 5);
      }
      *(uint64_t *)(param_1 + 2) = new_memory_ptr;
      param_1[1] = new_size;
    }
  }
  current_capacity = *param_1;
  new_memory_ptr = param_2[1];
  array_data_ptr = *(longlong *)(param_1 + 2);
  array_element_ptr = (uint64_t *)((longlong)current_capacity * 0x20 + array_data_ptr);
  *array_element_ptr = *param_2;
  array_element_ptr[1] = new_memory_ptr;
  new_memory_ptr = param_2[3];
  array_element_ptr = (uint64_t *)((longlong)current_capacity * 0x20 + 0x10 + array_data_ptr);
  *array_element_ptr = param_2[2];
  array_element_ptr[1] = new_memory_ptr;
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统内联数组添加函数
 * 
 * 该函数是数组添加操作的内联版本
 */
void render_array_append_inline(void)

{
  uint64_t *array_element_ptr;
  int current_size;
  longlong array_data_ptr;
  longlong context_ptr;
  uint64_t new_memory_ptr;
  int *array_ptr;
  uint64_t *data_ptr;
  int new_capacity;
  
  if (context_ptr != 0) {
    *(int *)(context_ptr + 0x3a8) = *(int *)(context_ptr + 0x3a8) + 1;
  }
  new_memory_ptr = func_0x000180120ce0((longlong)new_capacity << 5,SYSTEM_DATA_MANAGER_B);
  if (*(longlong *)(array_ptr + 2) != 0) {
    // WARNING: Subroutine does not return
    memcpy(new_memory_ptr,*(longlong *)(array_ptr + 2),(longlong)*array_ptr << 5);
  }
  *(uint64_t *)(array_ptr + 2) = new_memory_ptr;
  array_ptr[1] = new_capacity;
  current_size = *array_ptr;
  new_memory_ptr = data_ptr[1];
  array_data_ptr = *(longlong *)(array_ptr + 2);
  array_element_ptr = (uint64_t *)((longlong)current_size * 0x20 + array_data_ptr);
  *array_element_ptr = *data_ptr;
  array_element_ptr[1] = new_memory_ptr;
  new_memory_ptr = data_ptr[3];
  array_element_ptr = (uint64_t *)((longlong)current_size * 0x20 + 0x10 + array_data_ptr);
  *array_element_ptr = data_ptr[2];
  array_element_ptr[1] = new_memory_ptr;
  *array_ptr = *array_ptr + 1;
  return;
}





/**
 * 渲染系统替代数组添加函数
 * 
 * 该函数是数组添加操作的替代实现
 */
void render_array_append_alt(void)

{
  uint64_t *array_element_ptr;
  int current_size;
  longlong array_data_ptr;
  uint64_t data_value;
  int *array_ptr;
  uint64_t *data_ptr;
  
  current_size = *array_ptr;
  data_value = data_ptr[1];
  array_data_ptr = *(longlong *)(array_ptr + 2);
  array_element_ptr = (uint64_t *)((longlong)current_size * 0x20 + array_data_ptr);
  *array_element_ptr = *data_ptr;
  array_element_ptr[1] = data_value;
  data_value = data_ptr[3];
  array_element_ptr = (uint64_t *)((longlong)current_size * 0x20 + 0x10 + array_data_ptr);
  *array_element_ptr = data_ptr[2];
  array_element_ptr[1] = data_value;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 03_rendering_part056.c 模块总结
 * 
 * 本模块包含14个函数，主要功能分为以下几类：
 * 
 * 1. 渲染计算函数：
 *    - render_advanced_arc_calculation: 高级弧线计算
 *    - render_boundary_processing: 边界处理
 * 
 * 2. 数据处理函数：
 *    - render_memory_copy_optimized: 优化内存复制
 *    - render_data_decompress: 数据解压缩
 *    - render_checksum_validation: 校验和验证
 * 
 * 3. 数组管理函数：
 *    - render_array_resize_16bit: 16位数组大小调整
 *    - render_array_resize_40bit: 40位数组大小调整
 *    - render_array_resize_alt: 替代数组大小调整
 *    - render_array_resize_inline: 内联数组大小调整
 *    - render_array_append_32bit: 32位数组添加
 *    - render_array_append_inline: 内联数组添加
 *    - render_array_append_alt: 替代数组添加
 * 
 * 4. 辅助函数：
 *    - render_empty_operation_1: 空操作
 *    - render_simple_assignment: 简单赋值
 *    - render_simple_assignment_2: 简单赋值2
 *    - render_simple_assignment_3: 简单赋值3
 * 
 * 该模块为渲染系统提供了底层的数学计算、数据处理和内存管理功能。
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



