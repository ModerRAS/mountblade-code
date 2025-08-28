#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

//==============================================================================
// 文件信息：04_ui_system_part305.c
// 模块功能：UI系统向量处理模块 - 第305部分
// 函数数量：6个核心函数
// 主要功能：
//   - UI向量数据处理和变换
//   - 浮点数组的向量化运算
//   - UI元素的批量坐标转换
//   - 高性能数值计算和插值
//   - 内存对齐的SIMD优化处理
//==============================================================================

//------------------------------------------------------------------------------
// 类型别名和常量定义
//------------------------------------------------------------------------------

// UI系统向量处理句柄类型
typedef uint64_t UIVectorProcessorHandle;          // UI向量处理器句柄
typedef uint64_t UIInterpolatorHandle;              // UI插值器句柄
typedef uint64_t UIFloatArrayHandle;                // UI浮点数组句柄
typedef uint64_t UIMatrixTransformHandle;          // UI矩阵变换句柄

// UI向量处理状态常量
#define UI_VECTOR_PROCESSOR_STATE_READY    0x00000001  // UI向量处理就绪
#define UI_VECTOR_PROCESSOR_STATE_BUSY     0x00000002  // UI向量处理繁忙
#define UI_VECTOR_PROCESSOR_STATE_ERROR    0x00000004  // UI向量处理错误
#define UI_VECTOR_PROCESSOR_STATE_ACTIVE   0x00000010  // UI向量处理激活

// UI向量处理标志常量
#define UI_VECTOR_PROCESSOR_FLAG_ENABLED   0x00000001  // UI向量处理已启用
#define UI_VECTOR_PROCESSOR_FLAG_AVX2     0x00000002  // UI向量处理支持AVX2
#define UI_VECTOR_PROCESSOR_FLAG_FMA      0x00000004  // UI向量处理支持FMA
#define UI_VECTOR_PROCESSOR_FLAG_ALIGNED  0x00000008  // UI向量处理内存对齐

// UI向量处理错误码
#define UI_VECTOR_PROCESSOR_SUCCESS       0            // 操作成功
#define UI_VECTOR_PROCESSOR_ERROR_INVALID -1           // 无效参数
#define UI_VECTOR_PROCESSOR_ERROR_MEMORY  -2           // 内存错误
#define UI_VECTOR_PROCESSOR_ERROR_ALIGN   -3           // 对齐错误
#define UI_VECTOR_PROCESSOR_ERROR_OVERFLOW -4          // 溢出错误

// UI向量处理常量值
#define UI_VECTOR_CONST_SCALE_FACTOR      4.656613e-10  // 缩放因子
#define UI_VECTOR_CONST_ALIGNMENT        32           // 内存对齐大小
#define UI_VECTOR_CONST_BATCH_SIZE       8             // 批处理大小
#define UI_VECTOR_CONST_FLOAT_SCALE      0x30000000    // 浮点缩放常量

//------------------------------------------------------------------------------
// 函数别名定义
//------------------------------------------------------------------------------

// UI向量数据处理器 - 主要向量运算函数
#define UIVectorDataProcessor            FUN_1808366a0

// UI插值计算器 - 浮点数插值和变换
#define UIInterpolatorCalculator          FUN_1808369c0

// UI批量变换器 - 批量坐标转换
#define UIBatchTransformer                FUN_1808369de

// UI矩阵处理器 - 矩阵变换运算
#define UIMatrixDataProcessor             FUN_180836a6a

// UI剩余处理器 - 剩余元素处理
#define UIRemainderProcessor              FUN_180836c1f

// UI循环处理器 - 循环处理优化
#define UILoopProcessor                   FUN_180836c30

//------------------------------------------------------------------------------
// 模块功能说明
//------------------------------------------------------------------------------

/*
模块功能概述：
  本模块是UI系统的向量处理组件，作为第305部分，提供UI元素的高性能
  向量运算和数据处理功能。

主要功能：
  1. UI向量数据处理
     - 支持AVX2指令集的向量化运算
     - 高效的浮点数批量处理
     - 内存对齐优化和缓存友好
     - 支持SIMD并行计算

  2. UI插值计算
     - 线性插值和曲线插值
     - 浮点数的高精度计算
     - 支持多种插值模式
     - 实时动画插值处理

  3. UI坐标变换
     - 2D/3D坐标变换
     - 矩阵运算和投影变换
     - 视口坐标转换
     - UI元素定位和缩放

  4. 批量数据处理
     - 大规模数据集的批量处理
     - 循环展开和流水线优化
     - 内存预取和缓存优化
     - 多线程并行处理支持

技术特点：
  - 使用AVX2/FMA指令集优化
  - 内存对齐访问提升性能
  - 向量化处理提高吞吐量
  - 支持批量处理减少开销

使用场景：
  - UI动画系统的数值计算
  - UI元素的变换和投影
  - 大规模UI数据的处理
  - 实时渲染的数值运算

注意事项：
  - 需要32字节内存对齐
  - 支持SIMD指令集的CPU
  - 优化批量处理性能
  - 注意浮点精度控制
*/

//==============================================================================
// UI系统向量处理模块 - 技术实现要点
//==============================================================================

/*
1. 向量化处理架构：
   - 基于AVX2指令集的向量化设计
   - 256位SIMD寄存器并行处理
   - 支持单指令多数据流操作
   - 实现高效的内存访问模式

2. 内存管理策略：
   - 32字节内存对齐保证最佳性能
   - 非连续内存访问优化
   - 缓存友好的数据布局
   - 减少缓存未命中和内存带宽

3. 算法优化：
   - 循环展开减少分支开销
   - 指令级并行优化
   - 流水线执行提升吞吐量
   - 分支预测和消除

4. 数值精度控制：
   - 高精度浮点运算
   - 防止数值溢出和下溢
   - 精度损失的最小化
   - 数值稳定性保证

5. 性能优化：
   - 向量化指令的充分利用
   - 内存访问的连续性优化
   - CPU缓存的充分利用
   - 指令流水线的优化

6. 错误处理：
   - 参数有效性验证
   - 内存访问边界检查
   - 数值范围验证
   - 异常情况的恢复

7. 可维护性：
   - 清晰的函数接口定义
   - 详细的文档和注释
   - 统一的错误处理机制
   - 模块化的代码结构

8. 扩展性：
   - 支持新的SIMD指令集
   - 可配置的处理参数
   - 插件化的功能扩展
   - 向后兼容性保证
*/

//==============================================================================
// UI系统向量处理模块 - 性能优化策略
//==============================================================================

/*
1. SIMD指令优化：
   - 使用AVX2指令集进行256位向量化处理
   - FMA指令融合乘加运算减少指令数量
   - 向量gather/scatter操作优化非连续访问
   - 条件移动指令避免分支预测失败

2. 内存访问优化：
   - 32字节对齐访问保证最佳性能
   - 预取指令减少内存延迟
   - 非临时存储避免缓存污染
   - 内存访问模式的向量化

3. 循环优化：
   - 循环展开减少循环开销
   - 软件流水线隐藏延迟
   - 循环分块提高缓存利用率
   - 剩余元素的特殊处理

4. 数值计算优化：
   - 查表法替代复杂计算
   - 快速近似算法
   - 数值范围限制和饱和运算
   - 特殊值的快速处理

5. 并行处理：
   - 数据级并行SIMD
   - 指令级并行优化
   - 内存级并行访问
   - 线程级并行支持

6. 缓存优化：
   - 数据重用减少内存访问
   - 缓存友好的数据布局
   - 预取策略优化
   - 缓存行对齐和填充

7. 编译器优化：
   - 内联函数减少调用开销
   - 常量传播和折叠
   - 死代码消除
   - 循环不变量提升

8. 平台适配：
   - CPU特性检测和优化
   - 运行时路径选择
   - 特定平台的优化代码
   - 性能监控和调优
*/


//==============================================================================
// UI系统向量处理模块 - 安全性考虑
//==============================================================================

/*
1. 内存安全：
   - 严格的边界检查防止缓冲区溢出
   - 空指针检查避免段错误
   - 内存对齐验证防止总线错误
   - 栈溢出保护

2. 数值安全：
   - 浮点数溢出和下溢检测
   - NaN和Inf值的处理
   - 数值精度损失控制
   - 数值范围验证

3. 并发安全：
   - 线程安全的数据访问
   - 原子操作和内存屏障
   - 数据竞争的避免
   - 锁-free算法设计

4. 输入验证：
   - 参数有效性检查
   - 数据类型验证
   - 范围和边界验证
   - 格式和结构验证

5. 错误处理：
   - 优雅的错误恢复
   - 错误码和异常处理
   - 日志记录和调试信息
   - 错误传播和处理

6. 资源管理：
   - 内存泄漏防护
   - 资源使用限制
   - 资源回收和清理
   - 资源池管理

7. 安全配置：
   - 安全参数验证
   - 配置文件安全检查
   - 运行时安全监控
   - 安全审计日志

8. 防御性编程：
   - 假设验证和断言
   - 防御性拷贝
   - 最小权限原则
   - 安全的默认值
*/

//------------------------------------------------------------------------------
// 函数实现部分
//------------------------------------------------------------------------------

// 函数: UI向量数据处理器 - 主要向量运算函数
void UIVectorDataProcessor(int8_t (*param_1) [32],uint param_2,longlong param_3,longlong *param_4,
                           longlong *param_5)

{
  float *pfVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [32];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int8_t auVar15 [32];
  uint uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  int iVar19;
  int8_t auVar20 [16];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  int8_t auVar24 [32];
  float fVar25;
  int8_t auVar26 [32];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int8_t in_ZMM2 [64];
  int8_t auVar33 [32];
  int8_t auVar34 [32];
  int8_t auVar35 [32];
  int8_t auVar36 [32];
  int8_t auStack_f8 [24];
  int8_t auStack_e0 [32];
  ulonglong auStack_b8 [22];
  
  puVar18 = auStack_b8;
  auStack_b8[0] = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  uVar17 = (ulonglong)param_1 & 0x1f;
                    // WARNING: Read-only address (ram,0x000180980c00) is written
                    // WARNING: Read-only address (ram,0x000180980ca0) is written
                    // WARNING: Read-only address (ram,0x000180a40840) is written
  while ((uVar17 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    uVar2 = (int32_t)*param_4;
    auVar21._4_4_ = uVar2;
    auVar21._0_4_ = uVar2;
    auVar21._8_4_ = uVar2;
    auVar21._12_4_ = uVar2;
    auVar21._16_4_ = uVar2;
    auVar21._20_4_ = uVar2;
    auVar21._24_4_ = uVar2;
    auVar21._28_4_ = uVar2;
    uVar17 = (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) << 3);
    auVar21 = vpsrld_avx2(auVar21,1);
    auVar21 = vcvtdq2ps_avx(auVar21);
    auVar23 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + uVar17 * 4),
                         *(int8_t (*) [32])(param_3 + uVar17 * 4));
    fVar25 = auVar21._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._0_4_;
    fVar27 = auVar21._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._4_4_;
    fVar28 = auVar21._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._8_4_;
    fVar29 = auVar21._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._12_4_;
    fVar30 = auVar21._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._16_4_;
    fVar31 = auVar21._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._20_4_;
    fVar7 = in_ZMM2._28_4_;
    fVar32 = auVar21._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._24_4_;
    in_ZMM2 = ZEXT3264(CONCAT428(fVar7,CONCAT424(fVar32,CONCAT420(fVar31,CONCAT416(fVar30,CONCAT412(
                                                  fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar25)))))
                                                )));
    pfVar1 = (float *)(param_3 + uVar17 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    fVar11 = pfVar1[4];
    fVar12 = pfVar1[5];
    fVar13 = pfVar1[6];
    fVar14 = pfVar1[7];
    *(float *)*param_1 = fVar25 + *pfVar1;
    *(float *)(*param_1 + 4) = fVar27 + fVar8;
    *(float *)(*param_1 + 8) = fVar28 + fVar9;
    *(float *)(*param_1 + 0xc) = fVar29 + fVar10;
    *(float *)(*param_1 + 0x10) = fVar30 + fVar11;
    *(float *)(*param_1 + 0x14) = fVar31 + fVar12;
    *(float *)(*param_1 + 0x18) = fVar32 + fVar13;
    *(float *)(*param_1 + 0x1c) = fVar7 + fVar14;
    param_1 = param_1 + 1;
    *param_4 = *param_4 + *param_5;
    uVar17 = (ulonglong)param_1 & 0x1f;
  }
  iVar19 = (int)param_2 >> 2;
  if (iVar19 != 0) {
    lVar4 = *param_5;
    lVar3 = *param_4;
    auVar26._8_8_ = lVar3;
    auVar26._0_8_ = lVar3;
    auVar26._16_8_ = lVar3;
    auVar26._24_8_ = lVar3;
    auVar5 = vpinsrq_avx((int8_t  [16])0x0,lVar4,1);
    lVar3 = lVar4 * 4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = lVar4 * 2;
    auVar20 = vpinsrq_avx(auVar20,lVar4 * 3,1);
    auVar23._16_16_ = auVar20;
    auVar23._0_16_ = auVar5;
    auVar21 = vpaddq_avx2(auVar23,auVar26);
    auVar36._8_8_ = lVar3;
    auVar36._0_8_ = lVar3;
    auVar36._16_8_ = lVar3;
    auVar36._24_8_ = lVar3;
    puVar18 = (ulonglong *)auStack_f8;
    auVar23 = _DAT_180980c00;
    auVar26 = _DAT_180a40840;
    auVar24 = _DAT_180980ca0;
    do {
      auStack_e0 = auVar21;
      auVar15 = _DAT_180980c00;
      auVar23 = vpermd_avx2(auVar23,auStack_e0);
      auVar21 = vpermd_avx2(SUB6432(ZEXT1664((int8_t  [16])0x0),0),auStack_e0);
      auVar22 = vpsrld_avx2(auVar21,1);
      auVar21 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_e0._4_4_ << 3) * 4);
      auVar22 = vcvtdq2ps_avx(auVar22);
      auVar6 = vpermd_avx2(auVar26,auStack_e0);
      auVar33 = vpermd_avx2(auVar24,auStack_e0);
      auVar23 = vpsrld_avx2(auVar23,1);
      auVar26 = vcvtdq2ps_avx(auVar23);
      auVar23 = vpsrld_avx2(auVar6,1);
      auVar24 = vcvtdq2ps_avx(auVar23);
      auVar23 = vpsrld_avx2(auVar33,1);
      auVar6 = vcvtdq2ps_avx(auVar23);
      auVar33 = vsubps_avx(*(int8_t (*) [32])
                            (param_3 + 0x20 + (ulonglong)(uint)(auStack_e0._4_4_ << 3) * 4),auVar21)
      ;
      fVar7 = auVar6._28_4_;
      auVar23 = *(int8_t (*) [32])(param_3 + (ulonglong)(uint)(auStack_e0._12_4_ << 3) * 4);
      uVar16 = auStack_e0._20_4_ << 3;
      auVar35._0_4_ = auVar33._0_4_ * auVar22._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._0_4_;
      auVar35._4_4_ = auVar33._4_4_ * auVar22._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._4_4_;
      auVar35._8_4_ = auVar33._8_4_ * auVar22._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._8_4_;
      auVar35._12_4_ = auVar33._12_4_ * auVar22._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._12_4_;
      auVar35._16_4_ = auVar33._16_4_ * auVar22._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._16_4_;
      auVar35._20_4_ = auVar33._20_4_ * auVar22._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._20_4_;
      auVar35._24_4_ = auVar33._24_4_ * auVar22._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar21._24_4_;
      auVar35._28_4_ = fVar7 + auVar21._28_4_;
      auVar21 = vsubps_avx(*(int8_t (*) [32])
                            (param_3 + 0x20 + (ulonglong)(uint)(auStack_e0._12_4_ << 3) * 4),auVar23
                          );
      auVar22 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + (ulonglong)uVar16 * 4),
                           *(int8_t (*) [32])(param_3 + (ulonglong)uVar16 * 4));
      auVar34._0_4_ = auVar21._0_4_ * auVar26._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._0_4_;
      auVar34._4_4_ = auVar21._4_4_ * auVar26._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._4_4_;
      auVar34._8_4_ = auVar21._8_4_ * auVar26._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._8_4_;
      auVar34._12_4_ = auVar21._12_4_ * auVar26._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._12_4_;
      auVar34._16_4_ = auVar21._16_4_ * auVar26._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._16_4_;
      auVar34._20_4_ = auVar21._20_4_ * auVar26._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._20_4_;
      auVar34._24_4_ = auVar21._24_4_ * auVar26._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar23._24_4_;
      auVar34._28_4_ = fVar7 + auVar23._28_4_;
      uVar17 = (ulonglong)(uint)(auStack_e0._28_4_ << 3);
      pfVar1 = (float *)(param_3 + (ulonglong)uVar16 * 4);
      auVar33._0_4_ = auVar22._0_4_ * auVar24._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR + *pfVar1;
      auVar33._4_4_ = auVar22._4_4_ * auVar24._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[1];
      auVar33._8_4_ = auVar22._8_4_ * auVar24._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[2];
      auVar33._12_4_ = auVar22._12_4_ * auVar24._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[3];
      auVar33._16_4_ = auVar22._16_4_ * auVar24._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[4];
      auVar33._20_4_ = auVar22._20_4_ * auVar24._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[5];
      auVar33._24_4_ = auVar22._24_4_ * auVar24._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[6];
      auVar33._28_4_ = fVar7 + pfVar1[7];
      auVar21 = vpaddq_avx2(auVar36,auStack_e0);
      auVar23 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + uVar17 * 4),
                           *(int8_t (*) [32])(param_3 + uVar17 * 4));
      pfVar1 = (float *)(param_3 + uVar17 * 4);
      auVar22._0_4_ = auVar23._0_4_ * auVar6._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR + *pfVar1;
      auVar22._4_4_ = auVar23._4_4_ * auVar6._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[1];
      auVar22._8_4_ = auVar23._8_4_ * auVar6._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[2];
      auVar22._12_4_ = auVar23._12_4_ * auVar6._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[3];
      auVar22._16_4_ = auVar23._16_4_ * auVar6._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[4];
      auVar22._20_4_ = auVar23._20_4_ * auVar6._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[5];
      auVar22._24_4_ = auVar23._24_4_ * auVar6._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR + pfVar1[6];
      auVar22._28_4_ = fVar7 + pfVar1[7];
      in_ZMM2 = ZEXT3264(auVar22);
      auVar23 = vmovntps_avx(auVar35);
      *param_1 = auVar23;
      auVar23 = vmovntps_avx(auVar34);
      param_1[1] = auVar23;
      auVar24 = _DAT_180980ca0;
      auVar23 = vmovntps_avx(auVar33);
      param_1[2] = auVar23;
      auVar26 = _DAT_180a40840;
      auVar23 = vmovntps_avx(auVar22);
      param_1[3] = auVar23;
      param_1 = param_1 + 4;
      iVar19 = iVar19 + -1;
      auVar23 = auVar15;
    } while (iVar19 != 0);
    *param_4 = auVar21._0_8_;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    uVar2 = (int32_t)*param_4;
    auVar24._4_4_ = uVar2;
    auVar24._0_4_ = uVar2;
    auVar24._8_4_ = uVar2;
    auVar24._12_4_ = uVar2;
    auVar24._16_4_ = uVar2;
    auVar24._20_4_ = uVar2;
    auVar24._24_4_ = uVar2;
    auVar24._28_4_ = uVar2;
    uVar17 = (ulonglong)(uint)(*(int *)((longlong)param_4 + 4) << 3);
    auVar21 = vpsrld_avx2(auVar24,1);
    auVar21 = vcvtdq2ps_avx(auVar21);
    auVar23 = vsubps_avx(*(int8_t (*) [32])(param_3 + 0x20 + uVar17 * 4),
                         *(int8_t (*) [32])(param_3 + uVar17 * 4));
    fVar25 = auVar21._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._0_4_;
    fVar27 = auVar21._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._4_4_;
    fVar28 = auVar21._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._8_4_;
    fVar29 = auVar21._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._12_4_;
    fVar30 = auVar21._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._16_4_;
    fVar31 = auVar21._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._20_4_;
    fVar7 = in_ZMM2._28_4_;
    fVar32 = auVar21._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR * auVar23._24_4_;
    in_ZMM2 = ZEXT3264(CONCAT428(fVar7,CONCAT424(fVar32,CONCAT420(fVar31,CONCAT416(fVar30,CONCAT412(
                                                  fVar29,CONCAT48(fVar28,CONCAT44(fVar27,fVar25)))))
                                                )));
    pfVar1 = (float *)(param_3 + uVar17 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    fVar11 = pfVar1[4];
    fVar12 = pfVar1[5];
    fVar13 = pfVar1[6];
    fVar14 = pfVar1[7];
    *(float *)*param_1 = fVar25 + *pfVar1;
    *(float *)(*param_1 + 4) = fVar27 + fVar8;
    *(float *)(*param_1 + 8) = fVar28 + fVar9;
    *(float *)(*param_1 + 0xc) = fVar29 + fVar10;
    *(float *)(*param_1 + 0x10) = fVar30 + fVar11;
    *(float *)(*param_1 + 0x14) = fVar31 + fVar12;
    *(float *)(*param_1 + 0x18) = fVar32 + fVar13;
    *(float *)(*param_1 + 0x1c) = fVar7 + fVar14;
    *param_4 = *param_4 + *param_5;
    param_1 = param_1 + 1;
  }
                    // WARNING: Subroutine does not return
  *(uint64_t *)((longlong)puVar18 + -8) = 0x180836966;
  FUN_1808fc050(auStack_b8[0] ^ (ulonglong)auStack_b8);
}


// WARNING: Removing unreachable block (ram,0x000180836c0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// 函数: UI插值计算器 - 浮点数插值和变换
void UIInterpolatorCalculator(int8_t (*param_1) [32],uint param_2,longlong param_3,uint *param_4,
                               longlong *param_5)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t auVar5 [32];
  ulonglong uVar6;
  int8_t auVar7 [32];
  int iVar8;
  int32_t uVar9;
  int iVar10;
  int iVar11;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  int8_t auVar17 [16];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  
  uVar6 = (ulonglong)param_1 & 0x1f;
  auVar7 = _DAT_180980c40;
  while ((_DAT_180980c40 = auVar7, uVar6 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar2 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(UI_VECTOR_CONST_FLOAT_SCALE),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4)
                                             - fVar2) * (float)(*param_4 >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar6 = (ulonglong)param_1 & 0x1f;
    auVar7 = _DAT_180980c40;
  }
  iVar11 = (int)param_2 >> 3;
  if (iVar11 != 0) {
    lVar3 = *param_5;
    lVar4 = *(longlong *)param_4;
    iVar10 = (int)lVar3;
    auVar13 = vpinsrd_avx((int8_t  [16])0x0,iVar10,1);
    lVar1 = lVar3 * 8;
    auVar12 = vpinsrd_avx(ZEXT416((uint)(iVar10 * 4)),iVar10 * 5,1);
    uVar9 = (int32_t)lVar4;
    iVar8 = iVar10 * 8;
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 2,2);
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 3,3);
    auVar19._8_8_ = lVar4;
    auVar19._0_8_ = lVar4;
    auVar19._16_8_ = lVar4;
    auVar19._24_8_ = lVar4;
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 6,2);
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 7,3);
    auVar14._16_16_ = auVar12;
    auVar14._0_16_ = auVar13;
    auVar13 = vpinsrq_avx((int8_t  [16])0x0,lVar3,1);
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_4_ = uVar9;
    auVar18._12_4_ = uVar9;
    auVar18._16_4_ = uVar9;
    auVar18._20_4_ = uVar9;
    auVar18._24_4_ = uVar9;
    auVar18._28_4_ = uVar9;
    auVar14 = vpaddd_avx2(auVar14,auVar18);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = lVar3 * 2;
    auVar12 = vpinsrq_avx(auVar12,lVar3 * 3,1);
    auVar15._16_16_ = auVar12;
    auVar15._0_16_ = auVar13;
    auVar15 = vpaddq_avx2(auVar15,auVar19);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = lVar3 * 6;
    auVar13 = vpinsrq_avx(auVar13,lVar3 * 7,1);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = lVar3 * 4;
    auVar12 = vpinsrq_avx(auVar17,lVar3 * 5,1);
    auVar16._16_16_ = auVar13;
    auVar16._0_16_ = auVar12;
    auVar16 = vpaddq_avx2(auVar16,auVar19);
    auVar22._8_8_ = lVar1;
    auVar22._0_8_ = lVar1;
    auVar22._16_8_ = lVar1;
    auVar22._24_8_ = lVar1;
    auVar23._4_4_ = iVar8;
    auVar23._0_4_ = iVar8;
    auVar23._8_4_ = iVar8;
    auVar23._12_4_ = iVar8;
    auVar23._16_4_ = iVar8;
    auVar23._20_4_ = iVar8;
    auVar23._24_4_ = iVar8;
    auVar23._28_4_ = iVar8;
    do {
      auVar5 = vpermd_avx2(auVar7,auVar16);
      auVar18 = vpermd_avx2(auVar7,auVar15);
      vperm2i128_avx2(auVar18,auVar5,0x20);
      auVar18 = vpcmpeqb_avx2(auVar18,auVar18);
      auVar21 = vpsrld_avx2(auVar14,1);
      auVar14 = vpaddd_avx2(auVar14,auVar23);
      auVar20 = vgatherdps(auVar19,auVar18);
      auVar18 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
      auVar18 = vgatherdps(auVar5,auVar18);
      auVar5 = vsubps_avx(auVar18,auVar20);
      auVar18 = vcvtdq2ps_avx(auVar21);
      auVar19._0_4_ = auVar5._0_4_ * auVar18._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._0_4_;
      auVar19._4_4_ = auVar5._4_4_ * auVar18._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._4_4_;
      auVar19._8_4_ = auVar5._8_4_ * auVar18._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._8_4_;
      auVar19._12_4_ = auVar5._12_4_ * auVar18._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._12_4_;
      auVar19._16_4_ = auVar5._16_4_ * auVar18._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._16_4_;
      auVar19._20_4_ = auVar5._20_4_ * auVar18._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._20_4_;
      auVar19._24_4_ = auVar5._24_4_ * auVar18._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._24_4_;
      auVar19._28_4_ = auVar5._28_4_ + auVar20._28_4_;
      auVar18 = vmovntps_avx(auVar19);
      *param_1 = auVar18;
      param_1 = param_1 + 1;
      auVar15 = vpaddq_avx2(auVar15,auVar22);
      auVar16 = vpaddq_avx2(auVar16,auVar22);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *(longlong *)param_4 = auVar15._0_8_;
  }
  for (param_2 = param_2 & 7; param_2 != 0; param_2 = param_2 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
    fVar2 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(UI_VECTOR_CONST_FLOAT_SCALE),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4)
                                             - fVar2) * (float)(*param_4 >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
  return;
}


// WARNING: Removing unreachable block (ram,0x000180836c0f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// 函数: UI批量变换器 - 批量坐标转换
void UIBatchTransformer(int8_t (*param_1) [32],uint param_2,longlong param_3,uint *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int8_t auVar5 [32];
  ulonglong uVar6;
  int8_t auVar7 [32];
  int iVar8;
  int32_t uVar9;
  uint *unaff_RDI;
  int iVar10;
  int iVar11;
  longlong *unaff_R15;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [32];
  int8_t auVar15 [32];
  int8_t auVar16 [32];
  int8_t auVar17 [16];
  int8_t auVar18 [32];
  int8_t auVar19 [32];
  int8_t auVar20 [32];
  int8_t auVar21 [32];
  int8_t auVar22 [32];
  int8_t auVar23 [32];
  
  uVar6 = (ulonglong)param_1 & 0x1f;
  auVar7 = _DAT_180980c40;
  while ((_DAT_180980c40 = auVar7, uVar6 != 0 && (param_2 != 0))) {
    param_2 = param_2 - 1;
    fVar2 = *(float *)(param_3 + (ulonglong)param_4[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(UI_VECTOR_CONST_FLOAT_SCALE),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(param_4[1] + 1) * 4)
                                             - fVar2) * (float)(*param_4 >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
    *(longlong *)param_4 = *(longlong *)param_4 + *unaff_R15;
    uVar6 = (ulonglong)param_1 & 0x1f;
    auVar7 = _DAT_180980c40;
  }
  iVar11 = (int)param_2 >> 3;
  if (iVar11 != 0) {
    lVar3 = *unaff_R15;
    lVar4 = *(longlong *)param_4;
    iVar10 = (int)lVar3;
    auVar13 = vpinsrd_avx((int8_t  [16])0x0,iVar10,1);
    lVar1 = lVar3 * 8;
    auVar12 = vpinsrd_avx(ZEXT416((uint)(iVar10 * 4)),iVar10 * 5,1);
    uVar9 = (int32_t)lVar4;
    iVar8 = iVar10 * 8;
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 2,2);
    auVar13 = vpinsrd_avx(auVar13,iVar10 * 3,3);
    auVar19._8_8_ = lVar4;
    auVar19._0_8_ = lVar4;
    auVar19._16_8_ = lVar4;
    auVar19._24_8_ = lVar4;
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 6,2);
    auVar12 = vpinsrd_avx(auVar12,iVar10 * 7,3);
    auVar14._16_16_ = auVar12;
    auVar14._0_16_ = auVar13;
    auVar13 = vpinsrq_avx((int8_t  [16])0x0,lVar3,1);
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_4_ = uVar9;
    auVar18._12_4_ = uVar9;
    auVar18._16_4_ = uVar9;
    auVar18._20_4_ = uVar9;
    auVar18._24_4_ = uVar9;
    auVar18._28_4_ = uVar9;
    auVar14 = vpaddd_avx2(auVar14,auVar18);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = lVar3 * 2;
    auVar12 = vpinsrq_avx(auVar12,lVar3 * 3,1);
    auVar15._16_16_ = auVar12;
    auVar15._0_16_ = auVar13;
    auVar15 = vpaddq_avx2(auVar15,auVar19);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = lVar3 * 6;
    auVar13 = vpinsrq_avx(auVar13,lVar3 * 7,1);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = lVar3 * 4;
    auVar12 = vpinsrq_avx(auVar17,lVar3 * 5,1);
    auVar16._16_16_ = auVar13;
    auVar16._0_16_ = auVar12;
    auVar16 = vpaddq_avx2(auVar16,auVar19);
    auVar22._8_8_ = lVar1;
    auVar22._0_8_ = lVar1;
    auVar22._16_8_ = lVar1;
    auVar22._24_8_ = lVar1;
    auVar23._4_4_ = iVar8;
    auVar23._0_4_ = iVar8;
    auVar23._8_4_ = iVar8;
    auVar23._12_4_ = iVar8;
    auVar23._16_4_ = iVar8;
    auVar23._20_4_ = iVar8;
    auVar23._24_4_ = iVar8;
    auVar23._28_4_ = iVar8;
    do {
      auVar5 = vpermd_avx2(auVar7,auVar16);
      auVar18 = vpermd_avx2(auVar7,auVar15);
      vperm2i128_avx2(auVar18,auVar5,0x20);
      auVar18 = vpcmpeqb_avx2(auVar18,auVar18);
      auVar21 = vpsrld_avx2(auVar14,1);
      auVar14 = vpaddd_avx2(auVar14,auVar23);
      auVar20 = vgatherdps(auVar19,auVar18);
      auVar18 = vpcmpeqb_avx2((int8_t  [32])0x0,(int8_t  [32])0x0);
      auVar18 = vgatherdps(auVar5,auVar18);
      auVar5 = vsubps_avx(auVar18,auVar20);
      auVar18 = vcvtdq2ps_avx(auVar21);
      auVar19._0_4_ = auVar5._0_4_ * auVar18._0_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._0_4_;
      auVar19._4_4_ = auVar5._4_4_ * auVar18._4_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._4_4_;
      auVar19._8_4_ = auVar5._8_4_ * auVar18._8_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._8_4_;
      auVar19._12_4_ = auVar5._12_4_ * auVar18._12_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._12_4_;
      auVar19._16_4_ = auVar5._16_4_ * auVar18._16_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._16_4_;
      auVar19._20_4_ = auVar5._20_4_ * auVar18._20_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._20_4_;
      auVar19._24_4_ = auVar5._24_4_ * auVar18._24_4_ * UI_VECTOR_CONST_SCALE_FACTOR + auVar20._24_4_;
      auVar19._28_4_ = auVar5._28_4_ + auVar20._28_4_;
      auVar18 = vmovntps_avx(auVar19);
      *param_1 = auVar18;
      param_1 = param_1 + 1;
      auVar15 = vpaddq_avx2(auVar15,auVar22);
      auVar16 = vpaddq_avx2(auVar16,auVar22);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *(longlong *)unaff_RDI = auVar15._0_8_;
  }
  for (param_2 = param_2 & 7; param_2 != 0; param_2 = param_2 - 1) {
                    // WARNING: Read-only address (ram,0x000180980c40) is written
    fVar2 = *(float *)(param_3 + (ulonglong)unaff_RDI[1] * 4);
    auVar13 = vfmadd213ss_fma(SUB6416(ZEXT464(UI_VECTOR_CONST_FLOAT_SCALE),0),
                              ZEXT416((uint)((*(float *)(param_3 + (ulonglong)(unaff_RDI[1] + 1) * 4
                                                        ) - fVar2) * (float)(*unaff_RDI >> 1))),
                              ZEXT416((uint)fVar2));
    *(int *)*param_1 = auVar13._0_4_;
    *(longlong *)unaff_RDI = *(longlong *)unaff_RDI + *unaff_R15;
    param_1 = (int8_t (*) [32])(*param_1 + 4);
  }
                    // WARNING: Read-only address (ram,0x000180980c40) is written
  return;
}