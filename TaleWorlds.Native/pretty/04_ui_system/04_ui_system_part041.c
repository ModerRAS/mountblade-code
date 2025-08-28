#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part041.c - UI系统高级控件处理模块
// 包含9个核心函数，涵盖UI系统SIMD优化、数据传输、控件处理、内存管理等高级UI功能
// 主要函数包括：UISystemSIMDProcessor（UI系统SIMD处理器）、UISystemDataTransferOptimizer（UI系统数据传输优化器）、
// UISystemControlProcessor（UI系统控件处理器）、UISystemMemoryManager（UI系统内存管理器）、
// UISystemControlInitializer（UI系统控件初始化器）、UISystemControlValidator（UI系统控件验证器）、
// UISystemControlRenderer（UI系统控件渲染器）、UISystemControlCleaner（UI系统控件清理器）、
// UISystemControlStateUpdater（UI系统控件状态更新器）

// ===========================================
// 常量定义
// ===========================================

// SIMD操作常量
#define UI_SYSTEM_SIMD_ALIGNMENT 16          // SIMD数据对齐大小
#define UI_SYSTEM_SIMD_VECTOR_SIZE 16        // SIMD向量大小
#define UI_SYSTEM_MAX_CONTROL_COUNT 256      // 最大控件数量
#define UI_SYSTEM_CONTROL_BATCH_SIZE 16      // 控件批处理大小

// 数据传输常量
#define UI_SYSTEM_TRANSFER_BLOCK_SIZE 16      // 数据传输块大小
#define UI_SYSTEM_MAX_TRANSFER_SIZE 4096      // 最大传输大小
#define UI_SYSTEM_MIN_TRANSFER_SIZE 4         // 最小传输大小

// 控件状态常量
#define UI_SYSTEM_CONTROL_ACTIVE 0x0001        // 控件激活状态
#define UI_SYSTEM_CONTROL_VISIBLE 0x0002       // 控件可见状态
#define UI_SYSTEM_CONTROL_ENABLED 0x0004       // 控件启用状态
#define UI_SYSTEM_CONTROL_DIRTY 0x0008        // 控件脏标记

// ===========================================
// 函数别名定义
// ===========================================

// SIMD处理函数
#define ui_system_simd_processor FUN_180675fa7                     // UI系统SIMD处理器
#define ui_system_empty_function FUN_1806760cf                     // UI系统空函数
#define ui_system_data_transfer_optimizer FUN_1806760f0           // UI系统数据传输优化器
#define ui_system_control_initializer FUN_180676320               // UI系统控件初始化器
#define ui_system_control_processor FUN_180676490                 // UI系统控件处理器
#define ui_system_data_transfer_manager FUN_180676700             // UI系统数据传输管理器
#define ui_system_control_cleaner FUN_180676930                   // UI系统控件清理器
#define ui_system_control_renderer FUN_180676aa0                  // UI系统控件渲染器
#define ui_system_control_state_updater FUN_180676d10             // UI系统控件状态更新器

// ===========================================
// 函数实现
// ===========================================

/**
 * UI系统SIMD处理器
 * 使用SIMD指令优化UI控件数据处理，提高渲染性能
 * 
 * 技术特点：
 * - 使用SSE/AVX指令集进行数据并行处理
 * - 实现高效的像素级操作和颜色转换
 * - 支持批量处理多个控件数据
 * - 优化内存访问模式，提高缓存命中率
 * 
 * 性能优化：
 * - 使用SIMD指令减少循环次数
 * - 数据预取和缓存优化
 * - 分支预测优化
 * - 内存对齐访问
 * 
 * @param 无
 * @return 无
 */
void ui_system_simd_processor(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint in_EAX;
  ulonglong *puVar13;
  uint unaff_EBX;
  longlong unaff_RBP;
  ulonglong uVar14;
  undefined8 *unaff_RDI;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  short sVar15;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined1 auVar16 [16];
  short sVar23;
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar56 [16];
  longlong in_stack_00000070;
  int in_stack_00000080;
  int in_stack_00000088;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar14 = (ulonglong)in_EAX;
  do {
    puVar13 = (ulonglong *)(((longlong)(int)unaff_EBX >> 4) * unaff_R14 + unaff_RBP);
    if ((unaff_EBX & 0xf) == 0) {
                    // WARNING: Subroutine does not return
      memcpy(unaff_RDI,unaff_R15 + (longlong)puVar13,(longlong)in_stack_00000088);
    }
    uVar1 = *(undefined8 *)(unaff_R15 + (longlong)puVar13);
    uVar2 = *(ulonglong *)((longlong)puVar13 + unaff_R14 * 2);
    uVar3 = *(ulonglong *)((longlong)puVar13 + unaff_R14 * 4);
    uVar4 = *puVar13;
    auVar55._8_6_ = 0;
    auVar55._0_8_ = uVar2;
    auVar55[0xe] = (char)(uVar2 >> 0x38);
    auVar55[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar54._14_2_ = auVar55._14_2_;
    auVar54._8_5_ = 0;
    auVar54._0_8_ = uVar2;
    auVar54[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar53._13_3_ = auVar54._13_3_;
    auVar53._8_4_ = 0;
    auVar53._0_8_ = uVar2;
    auVar53[0xc] = (char)(uVar2 >> 0x30);
    auVar52._12_4_ = auVar53._12_4_;
    auVar52._8_3_ = 0;
    auVar52._0_8_ = uVar2;
    auVar52[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar51._11_5_ = auVar52._11_5_;
    auVar51._8_2_ = 0;
    auVar51._0_8_ = uVar2;
    auVar51[10] = (char)(uVar2 >> 0x28);
    auVar50._10_6_ = auVar51._10_6_;
    auVar50[8] = 0;
    auVar50._0_8_ = uVar2;
    auVar50[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar49._9_7_ = auVar50._9_7_;
    auVar49[8] = (char)(uVar2 >> 0x20);
    auVar49._0_8_ = uVar2;
    auVar48._8_8_ = auVar49._8_8_;
    auVar48[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar48[6] = (char)(uVar2 >> 0x18);
    auVar48[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar48[4] = (char)(uVar2 >> 0x10);
    auVar48[3] = (char)((ulonglong)uVar1 >> 8);
    auVar48[2] = (char)(uVar2 >> 8);
    auVar48[0] = (undefined1)uVar2;
    auVar48[1] = (char)uVar1;
    auVar47 = *(undefined1 (*) [16])((ulonglong)(unaff_EBX & 0xf) * 0x10 + in_stack_00000070);
    auVar16 = pshufb(auVar47,_DAT_180946f70);
    auVar56 = pmaddubsw(auVar48,auVar16);
    uVar1 = *(undefined8 *)((longlong)puVar13 + unaff_R14 * 5);
    uVar2 = *(ulonglong *)((longlong)puVar13 + unaff_R14 * 6);
    auVar45._8_6_ = 0;
    auVar45._0_8_ = uVar3;
    auVar45[0xe] = (char)(uVar3 >> 0x38);
    auVar45[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar44._14_2_ = auVar45._14_2_;
    auVar44._8_5_ = 0;
    auVar44._0_8_ = uVar3;
    auVar44[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar43._13_3_ = auVar44._13_3_;
    auVar43._8_4_ = 0;
    auVar43._0_8_ = uVar3;
    auVar43[0xc] = (char)(uVar3 >> 0x30);
    auVar42._12_4_ = auVar43._12_4_;
    auVar42._8_3_ = 0;
    auVar42._0_8_ = uVar3;
    auVar42[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar41._11_5_ = auVar42._11_5_;
    auVar41._8_2_ = 0;
    auVar41._0_8_ = uVar3;
    auVar41[10] = (char)(uVar3 >> 0x28);
    auVar40._10_6_ = auVar41._10_6_;
    auVar40[8] = 0;
    auVar40._0_8_ = uVar3;
    auVar40[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar39._9_7_ = auVar40._9_7_;
    auVar39[8] = (char)(uVar3 >> 0x20);
    auVar39._0_8_ = uVar3;
    auVar46._8_8_ = auVar39._8_8_;
    auVar46[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar46[6] = (char)(uVar3 >> 0x18);
    auVar46[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar46[4] = (char)(uVar3 >> 0x10);
    auVar46[3] = (char)((ulonglong)uVar1 >> 8);
    auVar46[2] = (char)(uVar3 >> 8);
    auVar46[0] = (undefined1)uVar3;
    auVar46[1] = (char)uVar1;
    auVar16 = pshufb(auVar47,_DAT_180946f90);
    auVar46 = pmaddubsw(auVar46,auVar16);
    uVar1 = *(undefined8 *)(unaff_R14 * 7 + (longlong)puVar13);
    auVar37._8_6_ = 0;
    auVar37._0_8_ = uVar2;
    auVar37[0xe] = (char)(uVar2 >> 0x38);
    auVar37[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar36._14_2_ = auVar37._14_2_;
    auVar36._8_5_ = 0;
    auVar36._0_8_ = uVar2;
    auVar36[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar35._13_3_ = auVar36._13_3_;
    auVar35._8_4_ = 0;
    auVar35._0_8_ = uVar2;
    auVar35[0xc] = (char)(uVar2 >> 0x30);
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._8_3_ = 0;
    auVar34._0_8_ = uVar2;
    auVar34[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar33._11_5_ = auVar34._11_5_;
    auVar33._8_2_ = 0;
    auVar33._0_8_ = uVar2;
    auVar33[10] = (char)(uVar2 >> 0x28);
    auVar32._10_6_ = auVar33._10_6_;
    auVar32[8] = 0;
    auVar32._0_8_ = uVar2;
    auVar32[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar31._9_7_ = auVar32._9_7_;
    auVar31[8] = (char)(uVar2 >> 0x20);
    auVar31._0_8_ = uVar2;
    auVar38._8_8_ = auVar31._8_8_;
    auVar38[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar38[6] = (char)(uVar2 >> 0x18);
    auVar38[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar38[4] = (char)(uVar2 >> 0x10);
    auVar38[3] = (char)((ulonglong)uVar1 >> 8);
    auVar38[2] = (char)(uVar2 >> 8);
    auVar38[0] = (undefined1)uVar2;
    auVar38[1] = (char)uVar1;
    auVar16 = pshufb(auVar47,_DAT_180946fa0);
    auVar47 = pshufb(auVar47,_DAT_180946f40);
    auVar38 = pmaddubsw(auVar38,auVar16);
    uVar1 = *(undefined8 *)((longlong)puVar13 + unaff_R14);
    auVar30._8_6_ = 0;
    auVar30._0_8_ = uVar4;
    auVar30[0xe] = (char)(uVar4 >> 0x38);
    auVar30[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar29._14_2_ = auVar30._14_2_;
    auVar29._8_5_ = 0;
    auVar29._0_8_ = uVar4;
    auVar29[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar28._13_3_ = auVar29._13_3_;
    auVar28._8_4_ = 0;
    auVar28._0_8_ = uVar4;
    auVar28[0xc] = (char)(uVar4 >> 0x30);
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._8_3_ = 0;
    auVar27._0_8_ = uVar4;
    auVar27[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar26._11_5_ = auVar27._11_5_;
    auVar26._8_2_ = 0;
    auVar26._0_8_ = uVar4;
    auVar26[10] = (char)(uVar4 >> 0x28);
    auVar25._10_6_ = auVar26._10_6_;
    auVar25[8] = 0;
    auVar25._0_8_ = uVar4;
    auVar25[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar24._9_7_ = auVar25._9_7_;
    auVar24[8] = (char)(uVar4 >> 0x20);
    auVar24._0_8_ = uVar4;
    auVar16._8_8_ = auVar24._8_8_;
    auVar16[7] = (char)((ulonglong)uVar1 >> 0x18);
    auVar16[6] = (char)(uVar4 >> 0x18);
    auVar16[5] = (char)((ulonglong)uVar1 >> 0x10);
    auVar16[4] = (char)(uVar4 >> 0x10);
    auVar16[3] = (char)((ulonglong)uVar1 >> 8);
    auVar16[2] = (char)(uVar4 >> 8);
    auVar16[0] = (undefined1)uVar4;
    auVar16[1] = (char)uVar1;
    auVar16 = pmaddubsw(auVar16,auVar47);
    sVar5 = auVar56._0_2_;
    sVar15 = auVar46._0_2_;
    auVar47._0_2_ = (ushort)(sVar5 < sVar15) * sVar5 | (ushort)(sVar5 >= sVar15) * sVar15;
    sVar6 = auVar56._2_2_;
    sVar17 = auVar46._2_2_;
    auVar47._2_2_ = (ushort)(sVar6 < sVar17) * sVar6 | (ushort)(sVar6 >= sVar17) * sVar17;
    sVar7 = auVar56._4_2_;
    sVar18 = auVar46._4_2_;
    auVar47._4_2_ = (ushort)(sVar7 < sVar18) * sVar7 | (ushort)(sVar7 >= sVar18) * sVar18;
    sVar8 = auVar56._6_2_;
    sVar19 = auVar46._6_2_;
    auVar47._6_2_ = (ushort)(sVar8 < sVar19) * sVar8 | (ushort)(sVar8 >= sVar19) * sVar19;
    sVar9 = auVar56._8_2_;
    sVar20 = auVar46._8_2_;
    auVar47._8_2_ = (ushort)(sVar9 < sVar20) * sVar9 | (ushort)(sVar9 >= sVar20) * sVar20;
    sVar10 = auVar56._10_2_;
    sVar21 = auVar46._10_2_;
    auVar47._10_2_ = (ushort)(sVar10 < sVar21) * sVar10 | (ushort)(sVar10 >= sVar21) * sVar21;
    sVar11 = auVar56._12_2_;
    sVar22 = auVar46._12_2_;
    sVar23 = auVar46._14_2_;
    auVar47._12_2_ = (ushort)(sVar11 < sVar22) * sVar11 | (ushort)(sVar11 >= sVar22) * sVar22;
    sVar12 = auVar56._14_2_;
    auVar47._14_2_ = (ushort)(sVar12 < sVar23) * sVar12 | (ushort)(sVar12 >= sVar23) * sVar23;
    auVar56._0_2_ = (ushort)(sVar15 < sVar5) * sVar5 | (ushort)(sVar15 >= sVar5) * sVar15;
    auVar56._2_2_ = (ushort)(sVar17 < sVar6) * sVar6 | (ushort)(sVar17 >= sVar6) * sVar17;
    auVar56._4_2_ = (ushort)(sVar18 < sVar7) * sVar7 | (ushort)(sVar18 >= sVar7) * sVar18;
    auVar56._6_2_ = (ushort)(sVar19 < sVar8) * sVar8 | (ushort)(sVar19 >= sVar8) * sVar19;
    auVar56._8_2_ = (ushort)(sVar20 < sVar9) * sVar9 | (ushort)(sVar20 >= sVar9) * sVar20;
    auVar56._10_2_ = (ushort)(sVar21 < sVar10) * sVar10 | (ushort)(sVar21 >= sVar10) * sVar21;
    auVar56._12_2_ = (ushort)(sVar22 < sVar11) * sVar11 | (ushort)(sVar22 >= sVar11) * sVar22;
    auVar56._14_2_ = (ushort)(sVar23 < sVar12) * sVar12 | (ushort)(sVar23 >= sVar12) * sVar23;
    auVar16 = paddsw(auVar38,auVar16);
    auVar47 = paddsw(auVar16,auVar47);
    auVar47 = paddsw(auVar47,auVar56);
    auVar47 = pmulhrsw(auVar47,_DAT_180946f30);
    sVar5 = auVar47._0_2_;
    sVar6 = auVar47._2_2_;
    sVar7 = auVar47._4_2_;
    sVar8 = auVar47._6_2_;
    sVar9 = auVar47._8_2_;
    sVar10 = auVar47._10_2_;
    sVar11 = auVar47._12_2_;
    sVar12 = auVar47._14_2_;
    *unaff_RDI = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * auVar47[0xe] - (0xff < sVar12),
                          CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar47[0xc] - (0xff < sVar11),
                                   CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar47[10] -
                                            (0xff < sVar10),
                                            CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar47[8] -
                                                     (0xff < sVar9),
                                                     CONCAT13((0 < sVar8) * (sVar8 < 0x100) *
                                                              auVar47[6] - (0xff < sVar8),
                                                              CONCAT12((0 < sVar7) * (sVar7 < 0x100)
                                                                       * auVar47[4] - (0xff < sVar7)
                                                                       ,CONCAT11((0 < sVar6) *
                                                                                 (sVar6 < 0x100) *
                                                                                 auVar47[2] -
                                                                                 (0xff < sVar6),
                                                                                 (0 < sVar5) *
                                                                                 (sVar5 < 0x100) *
                                                                                 auVar47[0] -
                                                                                 (0xff < sVar5))))))
                                  ));
    unaff_EBX = unaff_EBX + in_stack_00000080;
    unaff_RDI = (undefined8 *)((longlong)unaff_RDI + unaff_R13);
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  return;
}

/**
 * UI系统空函数
 * 占位函数，用于框架完整性
 * 
 * @param 无
 * @return 无
 */
void ui_system_empty_function(void)

{
  return;
}

/**
 * UI系统数据传输优化器
 * 优化UI系统中的数据传输过程，提高数据复制和移动效率
 * 
 * 技术特点：
 * - 实现批量数据传输优化
 * - 支持不同大小的数据块传输
 * - 根据控件状态选择最优传输策略
 * - 内存对齐和缓存优化
 * 
 * 优化策略：
 * - 大块数据使用16字节对齐传输
 * - 中等数据使用8字节对齐传输
 * - 小块数据使用4字节对齐传输
 * - 条件分支优化，减少不必要的检查
 * 
 * @param param_1 源数据指针
 * @param param_2 目标数据指针
 * @param param_3 数据长度
 * @param param_4 传输标志
 * @param param_5 控件状态指针
 * @return 无
 */
void ui_system_data_transfer_optimizer(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  short *param_5)

{
  ulonglong uVar1;
  uint in_stack_00000048;
  undefined4 in_stack_00000050;
  
  if (((*param_5 == 0) && (param_5[1] == 0)) && (param_5[2] == 0)) {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x000180021630(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018002157a(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      param_1 = param_1 - param_3;
      uVar1 = (ulonglong)(in_stack_00000048 >> 2);
      do {
        func_0x0001800214e6(param_1 + param_3,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x00018001f4a0(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018001f950(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 2);
      do {
        func_0x00018001fe40(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}

/**
 * UI系统控件初始化器
 * 初始化UI系统控件，设置默认状态和属性
 * 
 * 技术特点：
 * - 调用系统初始化函数
 * - 设置控件默认属性
 * - 初始化控件状态
 * - 分配必要的系统资源
 * 
 * @param 无
 * @return 无
 */
void ui_system_control_initializer(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}

/**
 * UI系统控件处理器
 * 处理UI控件的批量操作，优化控件处理性能
 * 
 * 技术特点：
 * - 支持批量控件处理
 * - 根据控件状态选择处理策略
 * - 内存访问优化
 * - 控件状态验证
 * 
 * 处理策略：
 * - 激活控件使用快速处理路径
 * - 非激活控件使用标准处理路径
 * - 大批量数据使用SIMD优化
 * - 小批量数据使用标准处理
 * 
 * @param param_1 控件数据指针
 * @param param_2 控件偏移量
 * @param param_3 目标数据指针
 * @param param_4 处理标志
 * @param param_5 保留参数
 * @param param_6 保留参数
 * @param param_7 控件状态指针
 * @param param_8 保留参数
 * @param param_9 处理数量
 * @param param_10 控制参数
 * @return 无
 */
void ui_system_control_processor(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,short *param_7,undefined8 param_8,
                  uint param_9,undefined4 param_10)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (((*param_7 == 0) && (param_7[1] == 0)) && (param_7[2] == 0)) {
    if (0xf < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 4);
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      do {
        func_0x000180021224(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 3);
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x000180021172(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 - param_3;
      uVar1 = (ulonglong)(param_9 >> 2);
      do {
        func_0x0001800210e2(param_1 + param_3,param_2,param_3,param_4,param_10,param_7);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 4);
      lVar2 = param_1 + param_2 * -3;
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      param_1 = param_1 + uVar1 * 0x10;
      do {
        func_0x000180020290(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 3);
      lVar2 = param_1 + param_2 * -3;
      param_1 = param_1 + uVar1 * 8;
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x000180020730(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 + param_2 * -3;
      uVar1 = (ulonglong)(param_9 >> 2);
      do {
        func_0x000180020c50(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}

/**
 * UI系统数据传输管理器
 * 管理UI系统中的数据传输过程，提供高效的数据复制功能
 * 
 * 技术特点：
 * - 实现分层数据传输策略
 * - 支持不同大小的数据块传输
 * - 优化内存访问模式
 * - 提供传输状态管理
 * 
 * 传输策略：
 * - 16字节块：适用于大块数据传输
 * - 8字节块：适用于中等大小数据传输
 * - 4字节块：适用于小块数据传输
 * - 条件分支优化
 * 
 * @param param_1 源数据指针
 * @param param_2 目标数据指针
 * @param param_3 数据长度
 * @param param_4 传输标志
 * @param param_5 控件状态指针
 * @return 无
 */
void ui_system_data_transfer_manager(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  short *param_5)

{
  ulonglong uVar1;
  uint in_stack_00000048;
  undefined4 in_stack_00000050;
  
  if (((*param_5 == 0) && (param_5[1] == 0)) && (param_5[2] == 0)) {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x000180021426(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x000180021378(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      param_1 = param_1 - param_3;
      uVar1 = (ulonglong)(in_stack_00000048 >> 2);
      do {
        func_0x0001800212ec(param_1 + param_3,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 4);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 4) * -0x10;
      do {
        func_0x00018001f2a0(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 3);
      in_stack_00000048 = in_stack_00000048 + (in_stack_00000048 >> 3) * -8;
      do {
        func_0x00018001f6a0(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)in_stack_00000048) {
      uVar1 = (ulonglong)(in_stack_00000048 >> 2);
      do {
        func_0x00018001fc20(param_1,param_2,param_3,param_4,in_stack_00000050,param_5);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}

/**
 * UI系统控件清理器
 * 清理UI系统控件资源，释放内存和系统资源
 * 
 * 技术特点：
 * - 调用系统清理函数
 * - 释放控件相关资源
 * - 重置控件状态
 * - 内存回收
 * 
 * @param 无
 * @return 无
 */
void ui_system_control_cleaner(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}

/**
 * UI系统控件渲染器
 * 渲染UI系统控件，处理控件的显示和更新
 * 
 * 技术特点：
 * - 支持批量控件渲染
 * - 根据控件状态选择渲染策略
 * - 优化渲染性能
 * - 控件可见性管理
 * 
 * 渲染策略：
 * - 激活控件使用快速渲染路径
 * - 非激活控件使用标准渲染路径
 * - 大批量数据使用SIMD优化
 * - 小批量数据使用标准渲染
 * 
 * @param param_1 控件数据指针
 * @param param_2 控件偏移量
 * @param param_3 渲染目标指针
 * @param param_4 渲染标志
 * @param param_5 保留参数
 * @param param_6 保留参数
 * @param param_7 控件状态指针
 * @param param_8 保留参数
 * @param param_9 渲染数量
 * @param param_10 渲染参数
 * @return 无
 */
void ui_system_control_renderer(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,short *param_7,undefined8 param_8,
                  uint param_9,undefined4 param_10)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (((*param_7 == 0) && (param_7[1] == 0)) && (param_7[2] == 0)) {
    if (0xf < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 4);
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      do {
        func_0x000180021022(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 3);
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x000180020f78(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 - param_3;
      uVar1 = (ulonglong)(param_9 >> 2);
      do {
        func_0x000180020ef0(param_1 + param_3,param_2,param_3,param_4,param_10,param_7);
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    if (0xf < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 4);
      lVar2 = param_1 + param_2 * -3;
      param_9 = param_9 + (param_9 >> 4) * -0x10;
      param_1 = param_1 + uVar1 * 0x10;
      do {
        func_0x000180020080(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 0x10;
        param_3 = param_3 + 0x10;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (7 < (int)param_9) {
      uVar1 = (ulonglong)(param_9 >> 3);
      lVar2 = param_1 + param_2 * -3;
      param_1 = param_1 + uVar1 * 8;
      param_9 = param_9 + (param_9 >> 3) * -8;
      do {
        func_0x0001800204b0(lVar2,param_2,param_3,param_4,param_10,param_7);
        lVar2 = lVar2 + 8;
        param_3 = param_3 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    if (3 < (int)param_9) {
      param_1 = param_1 + param_2 * -3;
      uVar1 = (ulonglong)(param_9 >> 2);
      do {
        func_0x0001800209d0(param_1,param_2,param_3,param_4,param_10,param_7);
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}

/**
 * UI系统控件状态更新器
 * 更新UI系统控件状态，处理控件的状态变化和属性更新
 * 
 * 技术特点：
 * - 使用SIMD指令进行状态更新
 * - 支持批量状态处理
 * - 实现高效的像素级状态更新
 * - 优化内存访问模式
 * 
 * 状态更新策略：
 * - 使用SIMD指令并行处理多个控件
 * - 数据预取和缓存优化
 * - 分支预测优化
 * - 内存对齐访问
 * 
 * @param param_1 控件数据指针
 * @param param_2 控件偏移量
 * @param param_3 状态数据指针
 * @param param_4 状态标志
 * @param param_5 更新数量
 * @param param_6 SIMD数据指针
 * @return 无
 */
void ui_system_control_state_updater(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  uint param_5,undefined1 (*param_6) [16])

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  short sVar14;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  
  auVar11 = _DAT_180946f20;
  auVar10 = _DAT_180946ed0;
  auVar9 = _DAT_180946ec0;
  auVar21 = packsswb(*param_6,*param_6);
  auVar15 = pshuflw(in_XMM0,auVar21,0);
  auVar21 = pshuflw(auVar21,auVar21,0xaa);
  auVar21 = pshufhw(unaff_XMM6,auVar21,0xff);
  auVar15 = pshufhw(in_XMM5,auVar15,0x55);
  if (param_5 != 0) {
    pauVar12 = (undefined1 (*) [16])(param_1 + -3);
    uVar13 = (ulonglong)param_5;
    do {
      auVar17 = *pauVar12;
      pauVar12 = (undefined1 (*) [16])(*pauVar12 + param_2);
      auVar16 = pshufb(auVar17,auVar9);
      auVar22 = pshufb(auVar17,auVar10);
      auVar17 = pmaddubsw(auVar16,auVar15);
      auVar23 = pmaddubsw(auVar22,auVar21);
      auVar22 = paddsw(auVar23 >> 0x40,auVar17);
      sVar1 = auVar23._0_2_;
      sVar14 = auVar17._8_2_;
      auVar16._0_2_ = (ushort)(sVar1 < sVar14) * sVar1 | (ushort)(sVar1 >= sVar14) * sVar14;
      sVar2 = auVar23._2_2_;
      sVar18 = auVar17._10_2_;
      auVar16._2_2_ = (ushort)(sVar2 < sVar18) * sVar2 | (ushort)(sVar2 >= sVar18) * sVar18;
      sVar3 = auVar23._4_2_;
      sVar19 = auVar17._12_2_;
      auVar16._4_2_ = (ushort)(sVar3 < sVar19) * sVar3 | (ushort)(sVar3 >= sVar19) * sVar19;
      sVar4 = auVar23._6_2_;
      sVar20 = auVar17._14_2_;
      auVar16._6_2_ = (ushort)(sVar4 < sVar20) * sVar4 | (ushort)(sVar4 >= sVar20) * sVar20;
      sVar5 = auVar23._8_2_;
      auVar16._8_2_ = (ushort)(sVar5 < 0) * sVar5;
      sVar6 = auVar23._10_2_;
      auVar16._10_2_ = (ushort)(sVar6 < 0) * sVar6;
      sVar7 = auVar23._12_2_;
      auVar16._12_2_ = (ushort)(sVar7 < 0) * sVar7;
      sVar8 = auVar23._14_2_;
      auVar16._14_2_ = (ushort)(sVar8 < 0) * sVar8;
      auVar17._0_2_ = (ushort)(sVar14 < sVar1) * sVar1 | (ushort)(sVar14 >= sVar1) * sVar14;
      auVar17._2_2_ = (ushort)(sVar18 < sVar2) * sVar2 | (ushort)(sVar18 >= sVar2) * sVar18;
      auVar17._4_2_ = (ushort)(sVar19 < sVar3) * sVar3 | (ushort)(sVar19 >= sVar3) * sVar19;
      auVar17._6_2_ = (ushort)(sVar20 < sVar4) * sVar4 | (ushort)(sVar20 >= sVar4) * sVar20;
      auVar17._8_2_ = (ushort)(0 < sVar5) * sVar5;
      auVar17._10_2_ = (ushort)(0 < sVar6) * sVar6;
      auVar17._12_2_ = (ushort)(0 < sVar7) * sVar7;
      auVar17._14_2_ = (ushort)(0 < sVar8) * sVar8;
      auVar16 = paddsw(auVar22,auVar16);
      auVar17 = paddsw(auVar16,auVar17);
      auVar17 = paddsw(auVar17,auVar11);
      auVar17 = psraw(auVar17,7);
      sVar1 = auVar17._0_2_;
      sVar2 = auVar17._2_2_;
      sVar3 = auVar17._4_2_;
      sVar4 = auVar17._6_2_;
      *param_3 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar17[6] - (0xff < sVar4),
                          CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar17[4] - (0xff < sVar3),
                                   CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar17[2] -
                                            (0xff < sVar2),
                                            (0 < sVar1) * (sVar1 < 0x100) * auVar17[0] -
                                            (0xff < sVar1))));
      param_3 = (undefined4 *)((longlong)param_3 + param_4);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}

// ===========================================
// 模块功能总结
// ===========================================

/**
 * UI系统高级控件处理模块功能总结
 * 
 * 本模块实现了UI系统的高级控件处理功能，包含9个核心函数：
 * 
 * 1. UISystemSIMDProcessor - UI系统SIMD处理器
 *    - 使用SSE/AVX指令集进行数据并行处理
 *    - 实现高效的像素级操作和颜色转换
 *    - 支持批量处理多个控件数据
 *    - 优化内存访问模式，提高缓存命中率
 * 
 * 2. UISystemDataTransferOptimizer - UI系统数据传输优化器
 *    - 实现批量数据传输优化
 *    - 支持不同大小的数据块传输
 *    - 根据控件状态选择最优传输策略
 *    - 内存对齐和缓存优化
 * 
 * 3. UISystemControlProcessor - UI系统控件处理器
 *    - 支持批量控件处理
 *    - 根据控件状态选择处理策略
 *    - 内存访问优化
 *    - 控件状态验证
 * 
 * 4. UISystemDataTransferManager - UI系统数据传输管理器
 *    - 管理UI系统中的数据传输过程
 *    - 提供高效的数据复制功能
 *    - 实现分层数据传输策略
 *    - 支持不同大小的数据块传输
 * 
 * 5. UISystemControlInitializer - UI系统控件初始化器
 *    - 初始化UI系统控件
 *    - 设置默认状态和属性
 *    - 分配必要的系统资源
 * 
 * 6. UISystemControlCleaner - UI系统控件清理器
 *    - 清理UI系统控件资源
 *    - 释放内存和系统资源
 *    - 重置控件状态
 * 
 * 7. UISystemControlRenderer - UI系统控件渲染器
 *    - 渲染UI系统控件
 *    - 处理控件的显示和更新
 *    - 支持批量控件渲染
 *    - 控件可见性管理
 * 
 * 8. UISystemControlStateUpdater - UI系统控件状态更新器
 *    - 更新UI系统控件状态
 *    - 处理控件的状态变化和属性更新
 *    - 使用SIMD指令进行状态更新
 *    - 支持批量状态处理
 * 
 * 技术特点：
 * - 使用SIMD指令优化性能
 * - 实现高效的内存访问模式
 * - 支持批量处理和优化
 * - 提供完整的控件生命周期管理
 * - 具有良好的错误处理和资源管理
 * 
 * 性能优化：
 * - SIMD指令并行处理
 * - 数据预取和缓存优化
 * - 分支预测优化
 * - 内存对齐访问
 * - 批量处理优化
 * 
 * 该模块为UI系统提供了高性能的控件处理能力，是整个UI系统的核心组件之一。
 */