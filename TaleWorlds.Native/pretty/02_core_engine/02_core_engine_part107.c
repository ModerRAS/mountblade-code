#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part107.c - 9 个函数

/**
 * 检查并更新实体边界框位置
 * 该函数根据传入的坐标参数检查实体是否在边界内，并相应地更新位置信息
 * @param param_1 - X坐标偏移量
 * @param param_2 - Y坐标偏移量  
 * @param param_3 - 边界检查的最小Z值
 * @param param_4 - 边界检查的最大Z值
 */
void check_and_update_entity_bounds(float param_1, float param_2, float param_3, float param_4)
{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM7_Da;
  float fVar10;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM14_Da;
  
  // 计算调整后的Y坐标（基于XMM7寄存器值）
  fVar10 = unaff_XMM7_Da + param_1;
  // 计算调整后的X坐标（基于XMM6寄存器值）
  fVar9 = unaff_XMM6_Da + param_1;
  // 计算调整后的Z坐标（基于XMM8寄存器值）
  param_1 = unaff_XMM8_Da - param_1;
  
  // 边界检查：检查坐标是否在有效范围内
  // 检查条件包括：Z坐标范围、X坐标范围、Y坐标范围以及特殊边界条件
  if ((((unaff_XMM9_Da < param_4) || (param_1 < param_3)) || (param_2 < fVar10)) ||
     (*(float *)(unaff_RBX + 0x234) <= fVar9 && fVar9 != *(float *)(unaff_RBX + 0x234))) {
    // 如果超出边界，设置标志为false
    bVar6 = false;
  }
  else {
    // 如果在边界内，设置标志为true
    bVar6 = true;
  }
  
  // 如果超出边界，调用边界处理函数
  if (!bVar6) {
    FUN_180291b40(*(undefined8 *)(unaff_RBX + 0x2e8), CONCAT44(param_1, unaff_XMM9_Da),
                  CONCAT44(fVar9, fVar10), 0);
  }
  
  // 获取全局数据结构指针
  lVar7 = _DAT_180c8a9b0;
  uVar3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
  uVar4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
  fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
  
  // 保存当前边界参数到栈缓冲区
  *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
  *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar4;
  *(float *)(unaff_RBP + -0x4d) = fVar5;
  
  // 应用缩放因子到边界值
  *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
  uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
  
  // 设置扩展边界值（增加3.0单位的边界缓冲）
  *(float *)(unaff_RBP + 0x77) = unaff_XMM7_Da + 3.0;
  *(float *)(unaff_RBP + 0x7b) = unaff_XMM6_Da + 3.0;
  *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da - 3.0;
  *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + unaff_XMM14_Da;
  
  // 如果需要处理扩展边界，调用相应的处理函数
  if ((uVar8 & 0xff000000) != 0) {
    FUN_180293e80(*(undefined8 *)(unaff_RBX + 0x2e8), unaff_RBP + 0x7f, unaff_RBP + 0x77, uVar8);
  }
  
  // 如果超出边界，减少引用计数并清理
  if (!bVar6) {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
    *piVar1 = *piVar1 + -1;
    FUN_180291950();
  }
  
  // 处理特殊的渲染模式（RDI寄存器的第2位被设置）
  lVar7 = _DAT_180c8a9b0;
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
    fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
    *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar5;
    *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
    
    // 如果启用了特殊渲染，进行位置调整
    if ((uVar8 & 0xff000000) != 0) {
      // 根据渲染模式选择不同的偏移量
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        // 模式0：使用0.49偏移量
        fVar10 = fVar10 - 0.49;
        fVar9 = fVar9 - 0.49;
      }
      else {
        // 模式1：使用0.5偏移量
        fVar10 = fVar10 - 0.5;
        fVar9 = fVar9 - 0.5;
      }
      
      // 更新调整后的位置
      *(float *)(unaff_RBP + 0x77) = fVar10;
      *(float *)(unaff_RBP + 0x7b) = fVar9;
      *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + 0.5;
      *(float *)(unaff_RBP + 0x83) = param_1 + 0.5;
      
      // 调用渲染更新函数
      FUN_1802939e0(lVar2, unaff_RBP + 0x7f, unaff_RBP + 0x77);
      FUN_1802923e0(lVar2, *(undefined8 *)(lVar2 + 0x88), *(undefined4 *)(lVar2 + 0x80), uVar8, 1);
      *(undefined4 *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}

/**
 * 执行边界检查和渲染更新
 * 这是一个简化的边界检查函数，主要用于渲染上下文中的边界处理
 */
void perform_bounds_check_and_render_update(void)
{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 in_EAX;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  
  // 设置渲染参数
  uStack0000000000000030 = 0x40000000;
  uStack0000000000000028 = 0xf;
  
  // 调用渲染更新函数
  FUN_180293e80(*(undefined8 *)(unaff_RBX + 0x2e8), unaff_RBP + 0x7f, unaff_RBP + 0x77, in_EAX);
  
  // 如果SIL寄存器为0，减少引用计数并清理
  if (unaff_SIL == '\0') {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
    *piVar1 = *piVar1 + -1;
    FUN_180291950();
  }
  
  // 获取全局数据结构指针
  lVar5 = _DAT_180c8a9b0;
  
  // 处理特殊的渲染模式（RDI寄存器的第2位被设置）
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
    fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
    *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar7;
    *(float *)(unaff_RBP + -0x4d) = fVar7 * *(float *)(lVar5 + 0x1628);
    uVar6 = func_0x000180121e20(unaff_RBP + -0x59);
    
    // 如果启用了特殊渲染，进行位置调整
    if ((uVar6 & 0xff000000) != 0) {
      // 根据渲染模式选择不同的偏移量
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        // 模式0：使用0.49偏移量
        fVar8 = unaff_XMM7_Da - 0.49;
        fVar7 = unaff_XMM6_Da - 0.49;
      }
      else {
        // 模式1：使用0.5偏移量
        fVar8 = unaff_XMM7_Da - 0.5;
        fVar7 = unaff_XMM6_Da - 0.5;
      }
      
      // 更新调整后的位置
      *(float *)(unaff_RBP + 0x77) = fVar8;
      *(float *)(unaff_RBP + 0x7b) = fVar7;
      *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + 0.5;
      *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da + 0.5;
      
      // 调用渲染更新函数
      FUN_1802939e0(lVar2, unaff_RBP + 0x7f, unaff_RBP + 0x77);
      FUN_1802923e0(lVar2, *(undefined8 *)(lVar2 + 0x88), *(undefined4 *)(lVar2 + 0x80), uVar6, 1);
      *(undefined4 *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}

/**
 * 简化的渲染更新函数
 * 这个函数直接减少引用计数并处理渲染更新，不进行复杂的边界检查
 */
void simplified_render_update(void)
{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  // 减少引用计数并清理
  piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
  *piVar1 = *piVar1 + -1;
  FUN_180291950();
  
  // 获取全局数据结构指针
  lVar5 = _DAT_180c8a9b0;
  
  // 处理特殊的渲染模式（RDI寄存器的第2位被设置）
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x19b0);
    fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(_DAT_180c8a9b0 + 0x19a8);
    *(undefined4 *)(unaff_RBP + -0x55) = uVar3;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar7;
    *(float *)(unaff_RBP + -0x4d) = fVar7 * *(float *)(lVar5 + 0x1628);
    uVar6 = func_0x000180121e20(unaff_RBP + -0x59);
    
    // 如果启用了特殊渲染，进行位置调整
    if ((uVar6 & 0xff000000) != 0) {
      // 根据渲染模式选择不同的偏移量
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        // 模式0：使用0.49偏移量
        fVar8 = unaff_XMM7_Da - 0.49;
        fVar7 = unaff_XMM6_Da - 0.49;
      }
      else {
        // 模式1：使用0.5偏移量
        fVar8 = unaff_XMM7_Da - 0.5;
        fVar7 = unaff_XMM6_Da - 0.5;
      }
      
      // 更新调整后的位置
      *(float *)(unaff_RBP + 0x77) = fVar8;
      *(float *)(unaff_RBP + 0x7b) = fVar7;
      *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + 0.5;
      *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da + 0.5;
      
      // 调用渲染更新函数
      FUN_1802939e0(lVar2, unaff_RBP + 0x7f, unaff_RBP + 0x77);
      FUN_1802923e0(lVar2, *(undefined8 *)(lVar2 + 0x88), *(undefined4 *)(lVar2 + 0x80), uVar6, 1);
      *(undefined4 *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}

/**
 * 空函数 - 占位符或调试函数
 * 这个函数不执行任何操作，可能用作占位符或调试目的
 */
void empty_function_placeholder(void)
{
  return;
}

/**
 * 空函数 - 另一个占位符或调试函数
 * 这个函数不执行任何操作，可能用作占位符或调试目的
 */
void another_empty_function(void)
{
  return;
}

/**
 * 初始化实体数据结构
 * 这个函数负责初始化一个复杂的数据结构，包含多个字段和子结构
 * @param param_1 - 要初始化的数据结构指针
 * @param param_2 - 内存大小参数
 * @param param_3 - 名称字符串指针
 * @return 初始化后的数据结构指针
 */
undefined8 *initialize_entity_data_structure(undefined8 *param_1, longlong param_2, byte *param_3)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  // 初始化基本字段为0
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  
  // 初始化更多的指针和计数器字段
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  
  // 初始化子结构
  FUN_180120b10(param_1 + 0x20, param_2, param_3, param_2, 0xfffffffffffffffe);
  
  // 初始化浮点边界值（最大和最小浮点值）
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x7f7fffff;  // 最大正浮点数
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x46) = 0xff7fffff;  // 最小负浮点数
  *(undefined4 *)((longlong)param_1 + 0x234) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x47) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x48) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x49) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x4a) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x4b) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0xff7fffff;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x4f) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0xff7fffff;
  
  // 初始化更多的计数器和状态字段
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  
  // 初始化数组结构
  FUN_18011fa30(param_1 + 0x5e, param_2 + 0x1a00);
  
  // 初始化两个元素的结构
  puVar6 = param_1 + 0x7a;
  lVar5 = 2;
  do {
    func_0x00018010e520(puVar6);
    puVar6 = puVar6 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  
  // 初始化边界值
  *(undefined4 *)(param_1 + 0x84) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x85) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0xff7fffff;
  
  // 处理名称字符串并生成哈希值
  uVar4 = FUN_1801210b0(param_3);
  *param_1 = uVar4;
  uVar7 = 0xffffffff;
  bVar1 = *param_3;
  pbVar2 = param_3 + 1;
  
  // 计算字符串的哈希值
  while (bVar1 != 0) {
    // 检查特殊标记"###"
    if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (pbVar2[1] == 0x23)) {
      uVar7 = 0xffffffff;
    }
    uVar7 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar7 & 0xff) ^ (ulonglong)bVar1) * 4) ^
            uVar7 >> 8;
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  *(uint *)(param_1 + 1) = ~uVar7;
  
  // 初始化边界结构
  FUN_18011d940(param_1 + 0x43);
  
  // 重置更多的字段
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 7) = 0x7f7fffff;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  
  // 计算字符串长度
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_3[lVar5] != 0);
  *(int *)(param_1 + 0x10) = (int)lVar5 + 1;
  
  // 获取材质索引并更新全局状态
  iVar3 = FUN_180121250(&UNK_180a0644c, 0,
                        *(undefined4 *)(param_1[0x44] + -4 + (longlong)*(int *)(param_1 + 0x43) * 4));
  lVar5 = _DAT_180c8a9b0;
  if (*(int *)(_DAT_180c8a9b0 + 0x1b2c) == iVar3) {
    *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar3;
  }
  if (*(int *)(lVar5 + 0x1b30) == iVar3) {
    *(undefined1 *)(lVar5 + 0x1b3f) = 1;
  }
  *(int *)((longlong)param_1 + 0x84) = iVar3;
  
  // 初始化渲染相关字段
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x13) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f000000;  // 0.5
  param_1[0x14] = 0x3f000000;  // 0.5
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xba) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xf;
  *(undefined4 *)(param_1 + 0x1d) = 0xf;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xf;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  
  // 初始化更多的浮点值
  *(undefined4 *)(param_1 + 0x1f) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x7f7fffff;
  
  // 初始化标志和计数器
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;  // 1.0
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;  // 1.0
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  param_1[0x5d] = param_1 + 0x5e;
  param_1[0x66] = *param_1;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  
  // 初始化边界值对
  param_1[0x7c] = 0x7f7fffff7f7fffff;
  param_1[0x7d] = 0xff7fffffff7fffff;
  param_1[0x7a] = 0x7f7fffff7f7fffff;
  param_1[0x7b] = 0xff7fffffff7fffff;
  param_1[0x78] = 0;
  param_1[0x7e] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x7f) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x80) = 0x7fffffff;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  
  // 初始化最后的标志字段
  *(undefined2 *)(param_1 + 0x86) = 0xffff;
  *(byte *)((longlong)param_1 + 0x432) = *(byte *)((longlong)param_1 + 0x432) & 0xf8;
  
  return param_1;
}

/**
 * 清理多个实体数据结构
 * 这个函数负责清理多个实体数据结构，包括减少引用计数和释放资源
 * @param param_1 - 实体数据结构指针
 * @param param_2 - 清理参数1
 * @param param_3 - 清理参数2
 * @param param_4 - 清理参数3
 */
void cleanup_multiple_entity_structures(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong lVar1;
  
  // 清理位置 0xf0 处的实体
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0xe0 处的实体
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0xd0 处的实体
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0xc0 处的实体
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0x90 处的实体
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}

/**
 * 清理复杂数据结构中的所有实体
 * 这个函数负责清理一个复杂数据结构中的所有实体，包括数组中的实体
 * @param param_1 - 数据结构指针
 * @param param_2 - 清理参数1
 * @param param_3 - 清理参数2
 * @param param_4 - 清理参数3
 */
void cleanup_all_entities_in_complex_structure(longlong *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  
  // 清理主实体
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理数组中的实体
  iVar3 = 0;
  if ((int)param_1[0x59] != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x5a] + lVar2 + 0x38);
      if (lVar1 != 0) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
        // 调用清理函数（不返回）
        FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (iVar3 != (int)param_1[0x59]);
  }
  
  // 清理子结构
  FUN_18011fab0(param_1 + 0x5e);
  
  // 清理位置 0x5a 处的实体
  lVar2 = param_1[0x5a];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, uVar4);
  }
  
  // 清理位置 0x58 处的实体
  lVar2 = param_1[0x58];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, uVar4);
  }
  
  // 清理位置 0x44 处的实体
  lVar2 = param_1[0x44];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, uVar4);
  }
  
  // 清理位置 0x3e 处的实体
  lVar2 = param_1[0x3e];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0x3c 处的实体
  lVar2 = param_1[0x3c];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0x3a 处的实体
  lVar2 = param_1[0x3a];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0x38 处的实体
  lVar2 = param_1[0x38];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  
  // 清理位置 0x32 处的实体
  lVar2 = param_1[0x32];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar2, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}

/**
 * 清理单个实体数据结构
 * 这个函数负责清理单个实体数据结构，减少引用计数并释放资源
 * @param param_1 - 实体数据结构指针
 * @param param_2 - 清理参数1
 * @param param_3 - 清理参数2
 * @param param_4 - 清理参数3
 */
void cleanup_single_entity_structure(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong lVar1;
  
  // 清理位置 0x38 处的实体
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    // 调用清理函数（不返回）
    FUN_180059ba0(lVar1, _DAT_180c8a9a8, param_3, param_4, 0xfffffffffffffffe);
  }
  return;
}

/**
 * 更新材质索引状态
 * 这个函数根据传入的材质参数更新全局材质索引状态
 * @param param_1 - 实体数据结构指针
 * @param param_2 - 材质参数
 */
void update_material_index_status(longlong param_1, undefined8 param_2)
{
  longlong lVar1;
  int iVar2;
  
  // 获取材质索引
  iVar2 = FUN_180121250(param_2, 0,
                        *(undefined4 *)
                         (*(longlong *)(param_1 + 0x220) + -4 +
                         (longlong)*(int *)(param_1 + 0x218) * 4));
  
  // 获取全局数据结构指针
  lVar1 = _DAT_180c8a9b0;
  
  // 更新全局材质索引状态
  if (*(int *)(_DAT_180c8a9b0 + 0x1b2c) == iVar2) {
    *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar2;
  }
  if (*(int *)(lVar1 + 0x1b30) == iVar2) {
    *(undefined1 *)(lVar1 + 0x1b3f) = 1;
  }
  return;
}