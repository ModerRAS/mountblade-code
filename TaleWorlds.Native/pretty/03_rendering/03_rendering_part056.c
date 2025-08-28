#include "TaleWorlds.Native.Split.h"

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
void render_advanced_arc_calculation(undefined8 render_context, float param_2, float param_3, float param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong unaff_RBP;
  int iVar7;
  longlong unaff_RDI;
  float *unaff_R14;
  undefined4 unaff_R15D;
  undefined4 uVar8;
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
    uVar3 = *(undefined8 *)(unaff_RBP + -0x79);
    *(float *)(unaff_RBP + -0x79) = fVar13;
    *(float *)(unaff_RBP + -0x75) = unaff_XMM13_Da;
    *(undefined8 *)(lVar2 + (longlong)iVar6 * 8) = uVar3;
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
    *(undefined8 *)(*(longlong *)(unaff_RDI + 0x88) + (longlong)iVar6 * 8) =
         *(undefined8 *)(unaff_RBP + -0x79);
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
      uVar3 = *(undefined8 *)(unaff_RBP + 0x67);
      *(float *)(unaff_RBP + 0x67) = fVar12;
      *(float *)(unaff_RBP + 0x6b) = unaff_XMM14_Da;
      *(undefined8 *)(lVar2 + (longlong)iVar6 * 8) = uVar3;
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
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x88) + (longlong)iVar6 * 8) =
           *(undefined8 *)(unaff_RBP + 0x67);
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
  FUN_180293190(fVar11,*(undefined8 *)(unaff_RDI + 0x88),*(undefined4 *)(unaff_RDI + 0x80),
                unaff_R15D);
  *(undefined4 *)(unaff_RDI + 0x80) = 0;
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
void render_boundary_processing(undefined8 param_1, float *param_2, float *param_3, ulonglong param_4,
                  undefined4 param_5)

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
  if (_DAT_180c96838 < param_2 + _DAT_180c96850) {
    _DAT_180c96850 = param_2 + _DAT_180c96850;
    return;
  }
  if (param_1 < _DAT_180c96848) {
    _DAT_180c96850 = _DAT_180c96838 + 1;
    return;
  }
                    // WARNING: Subroutine does not return
  memcpy(_DAT_180c96850,param_1);
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
      func_0x000180298bc0((_DAT_180c96850 - (ulonglong)param_1[1]) + -1,bVar1 - 0x7f);
      return param_1 + 2;
    }
    if (0x3f < bVar1) {
      func_0x000180298bc0(((_DAT_180c96850 + (ulonglong)bVar1 * -0x100) - (ulonglong)param_1[1]) +
                          0x3fff,param_1[2] + 1);
      return param_1 + 3;
    }
    FUN_180298c20(param_1 + 1,bVar1 - 0x1f);
    return param_1 + ((ulonglong)*param_1 - 0x1e);
  }
  if (0x17 < bVar1) {
    func_0x000180298bc0(((_DAT_180c96850 + (ulonglong)CONCAT11(bVar1,param_1[1]) * -0x100) -
                        (ulonglong)param_1[2]) + 0x17ffff,param_1[3] + 1);
    return param_1 + 4;
  }
  if (0xf < bVar1) {
    func_0x000180298bc0(((_DAT_180c96850 + (ulonglong)CONCAT11(bVar1,param_1[1]) * -0x100) -
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
    func_0x000180298bc0(((_DAT_180c96850 + (ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100) -
                        (ulonglong)param_1[3]) + -1,param_1[4] + 1);
    return param_1 + 5;
  }
  if (bVar1 == 4) {
    func_0x000180298bc0(((_DAT_180c96850 + (ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100) -
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
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  
  if (((((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
       (uint)param_2[3] == 0x57bc0000) &&
     ((((uint)param_2[4] * 0x100 + (uint)param_2[5]) * 0x100 + (uint)param_2[6]) * 0x100 +
      (uint)param_2[7] == 0)) {
    uVar19 = (uint)param_2[8] * 0x1000000 + (uint)param_2[9] * 0x10000 + (uint)param_2[10] * 0x100 +
             (uint)param_2[0xb];
    pbVar15 = param_1 + uVar19;
    _DAT_180c96838 = pbVar15;
    _DAT_180c96840 = param_1;
    _DAT_180c96848 = param_2;
    _DAT_180c96850 = param_1;
    pbVar3 = (byte *)FUN_180298c80(param_2 + 0x10);
    pbVar4 = pbVar3;
    if (pbVar3 != param_2 + 0x10) {
      do {
        if (pbVar15 < _DAT_180c96850) {
          return 0;
        }
        pbVar3 = (byte *)FUN_180298c80(pbVar4);
        bVar20 = pbVar3 != pbVar4;
        pbVar4 = pbVar3;
      } while (bVar20);
    }
    if (((*pbVar3 == 5) && (pbVar3[1] == 0xfa)) && (_DAT_180c96850 == pbVar15)) {
      uVar17 = 0;
      uVar12 = 1;
      uVar14 = uVar19;
      uVar2 = uVar19 % 0x15b0;
      while (uVar14 != 0) {
        uVar13 = 0;
        if (7 < uVar2) {
          uVar16 = 7;
          do {
            uVar13 = uVar13 + 8;
            iVar5 = uVar12 + *param_1;
            uVar16 = uVar16 + 8;
            iVar6 = iVar5 + (uint)param_1[1];
            iVar7 = iVar6 + (uint)param_1[2];
            iVar8 = iVar7 + (uint)param_1[3];
            iVar9 = iVar8 + (uint)param_1[4];
            iVar10 = iVar9 + (uint)param_1[5];
            iVar11 = iVar10 + (uint)param_1[6];
            uVar12 = iVar11 + (uint)param_1[7];
            param_1 = param_1 + 8;
            uVar17 = uVar17 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + uVar12;
          } while (uVar16 < uVar2);
        }
        iVar5 = 0;
        iVar6 = 0;
        if (uVar13 < uVar2) {
          if (1 < uVar2 - uVar13) {
            uVar16 = ((uVar2 - uVar13) - 2 >> 1) + 1;
            uVar18 = (ulonglong)uVar16;
            uVar13 = uVar13 + uVar16 * 2;
            do {
              bVar1 = *param_1;
              pbVar4 = param_1 + 1;
              iVar5 = iVar5 + uVar12 + bVar1;
              param_1 = param_1 + 2;
              uVar12 = uVar12 + bVar1 + (uint)*pbVar4;
              iVar6 = iVar6 + uVar12;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          if (uVar13 < uVar2) {
            uVar12 = uVar12 + *param_1;
            uVar17 = uVar17 + uVar12;
            param_1 = param_1 + 1;
          }
          uVar17 = uVar17 + iVar6 + iVar5;
        }
        uVar12 = uVar12 % 0xfff1;
        uVar17 = uVar17 % 0xfff1;
        uVar14 = uVar14 - uVar2;
        uVar2 = 0x15b0;
      }
      if (uVar17 * 0x10000 + uVar12 ==
          (uint)pbVar3[2] * 0x1000000 + (uint)pbVar3[3] * 0x10000 + (uint)pbVar3[4] * 0x100 +
          (uint)pbVar3[5]) {
        return uVar19;
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
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1 / 2 + iVar1;
  }
  iVar4 = param_2;
  if (param_2 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar1 < iVar4) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar3 = func_0x000180120ce0((longlong)iVar4 << 4,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = iVar4;
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
  longlong in_RAX;
  undefined8 uVar1;
  int *unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0((longlong)unaff_EDI << 4,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX << 4);
  }
  *(undefined8 *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = unaff_EDI;
  *unaff_RBX = unaff_ESI;
  return;
}





/**
 * 渲染系统简单赋值函数
 * 
 * 该函数执行简单的赋值操作
 */
void render_simple_assignment(void)

{
  undefined4 *unaff_RBX;
  undefined4 unaff_ESI;
  
  *unaff_RBX = unaff_ESI;
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
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (param_2 <= iVar1) {
    *param_1 = param_2;
    return;
  }
  if (iVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1 / 2 + iVar1;
  }
  iVar4 = param_2;
  if (param_2 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar1 < iVar4) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar3 = func_0x000180120ce0((longlong)iVar4 * 0x28,_DAT_180c8a9a8);
    if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x28);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = iVar4;
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
  int iVar1;
  undefined8 uVar2;
  int *unaff_RBX;
  int iVar3;
  int unaff_EDI;
  
  if (param_1 == 0) {
    iVar1 = 8;
  }
  else {
    iVar1 = param_1 / 2 + param_1;
  }
  iVar3 = unaff_EDI;
  if (unaff_EDI < iVar1) {
    iVar3 = iVar1;
  }
  if (param_1 < iVar3) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    uVar2 = func_0x000180120ce0((longlong)iVar3 * 0x28,_DAT_180c8a9a8);
    if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar2,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX * 0x28);
    }
    *(undefined8 *)(unaff_RBX + 2) = uVar2;
    unaff_RBX[1] = iVar3;
    *unaff_RBX = unaff_EDI;
    return;
  }
  *unaff_RBX = unaff_EDI;
  return;
}





/**
 * 渲染系统简单赋值函数2
 * 
 * 该函数执行简单的赋值操作（第二个版本）
 */
void render_simple_assignment_2(void)

{
  undefined4 *unaff_RBX;
  undefined4 unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
  return;
}





/**
 * 渲染系统简单赋值函数3
 * 
 * 该函数执行简单的赋值操作（第三个版本）
 */
void render_simple_assignment_3(void)

{
  undefined4 *unaff_RBX;
  undefined4 unaff_EDI;
  
  *unaff_RBX = unaff_EDI;
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
void render_array_append_32bit(int *param_1, undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar6 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar2 / 2 + iVar2;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar2 < iVar6) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      uVar5 = func_0x000180120ce0((longlong)iVar6 << 5,_DAT_180c8a9a8);
      if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(uVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 << 5);
      }
      *(undefined8 *)(param_1 + 2) = uVar5;
      param_1[1] = iVar6;
    }
  }
  iVar2 = *param_1;
  uVar5 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar3);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  uVar5 = param_2[3];
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar3);
  *puVar1 = param_2[2];
  puVar1[1] = uVar5;
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
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong in_RAX;
  undefined8 uVar4;
  int *unaff_RBX;
  undefined8 *unaff_RBP;
  int unaff_EDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar4 = func_0x000180120ce0((longlong)unaff_EDI << 5,_DAT_180c8a9a8);
  if (*(longlong *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar4,*(longlong *)(unaff_RBX + 2),(longlong)*unaff_RBX << 5);
  }
  *(undefined8 *)(unaff_RBX + 2) = uVar4;
  unaff_RBX[1] = unaff_EDI;
  iVar2 = *unaff_RBX;
  uVar4 = unaff_RBP[1];
  lVar3 = *(longlong *)(unaff_RBX + 2);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar3);
  *puVar1 = *unaff_RBP;
  puVar1[1] = uVar4;
  uVar4 = unaff_RBP[3];
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar3);
  *puVar1 = unaff_RBP[2];
  puVar1[1] = uVar4;
  *unaff_RBX = *unaff_RBX + 1;
  return;
}





/**
 * 渲染系统替代数组添加函数
 * 
 * 该函数是数组添加操作的替代实现
 */
void render_array_append_alt(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *unaff_RBX;
  undefined8 *unaff_RBP;
  
  iVar2 = *unaff_RBX;
  uVar4 = unaff_RBP[1];
  lVar3 = *(longlong *)(unaff_RBX + 2);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + lVar3);
  *puVar1 = *unaff_RBP;
  puVar1[1] = uVar4;
  uVar4 = unaff_RBP[3];
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + 0x10 + lVar3);
  *puVar1 = unaff_RBP[2];
  puVar1[1] = uVar4;
  *unaff_RBX = *unaff_RBX + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



