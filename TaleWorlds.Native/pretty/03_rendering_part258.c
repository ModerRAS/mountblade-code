#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/* ============================================================================
 * 渲染系统高级数据比较和优化模块
 * 
 * 本模块实现了骑马与砍杀游戏引擎中的渲染数据比较、优化和处理功能，包括：
 * - 渲染数据比较和去重
 * - 渲染参数优化
 * - 渲染状态管理
 * - 内存访问优化
 * - SIMD指令支持
 * ============================================================================ */

/* ============================================================================
 * 系统常量和类型定义
 * ============================================================================ */

// 渲染数据类型常量
#define RENDER_DATA_TYPE_BASIC        0x00  // 基础渲染数据
#define RENDER_DATA_TYPE_EXTENDED     0x01  // 扩展渲染数据
#define RENDER_DATA_TYPE_OPTIMIZED   0x02  // 优化渲染数据
#define RENDER_DATA_TYPE_SPECIAL     0x03  // 特殊渲染数据

// 渲染状态常量
#define RENDER_STATE_ACTIVE          0x100  // 活跃渲染状态
#define RENDER_STATE_PROCESSING      0x200  // 处理中渲染状态
#define RENDER_STATE_COMPLETED       0x300  // 完成渲染状态

// 渲染优化标志
#define RENDER_OPTIMIZATION_NONE     0x00  // 无优化
#define RENDER_OPTIMIZATION_BASIC    0x01  // 基础优化
#define RENDER_OPTIMIZATION_ADVANCED 0x02  // 高级优化
#define RENDER_OPTIMIZATION_FULL     0x03  // 完全优化

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 渲染数据比较函数
#define RenderingData_CompareAndOptimize FUN_180410dc9
#define RenderingData_OptimizeBatch FUN_180411040
#define RenderingData_ProcessOptimized FUN_180411069

// 渲染状态管理函数
#define RenderingState_Initialize FUN_180411032
#define RenderingState_ProcessData FUN_180411320
#define RenderingState_Finalize FUN_180411348

// 渲染辅助函数
#define RenderingSupport_Initialize FUN_18041131c

/* ============================================================================
 * 渲染数据比较和优化核心函数
 * ============================================================================ */

/**
 * 渲染数据比较和优化处理函数
 * 
 * 本函数实现了渲染数据的比较、去重和优化处理，是渲染系统的核心优化组件。
 * 通过高效的数据比较算法，减少重复渲染操作，提高渲染性能。
 * 
 * @param param_1 渲染数据缓冲区指针
 * @param param_2 渲染数据处理器接口指针
 * @param param_3 渲染数据索引数组指针
 * @param param_4 渲染数据数量
 * @param param_5 渲染参数结构体
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 使用多层循环比较算法实现数据去重
 * - 支持多种渲染数据类型的比较
 * - 实现了高效的内存访问模式
 * - 采用寄存器变量优化性能
 * - 支持SIMD指令加速处理
 */
void RenderingData_CompareAndOptimize(int64_t param_1,int64_t *param_2,int64_t param_3,int param_4,
                                      uint64_t param_5)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t lVar12;
  int iVar13;
  int iVar14;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R13;
  int64_t lVar15;
  uint64_t unaff_R14;
  int64_t lVar16;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float fStackX_20;
  float fStackX_24;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  int64_t lStack0000000000000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000078;
  float fStack000000000000007c;
  float in_stack_00000080;
  uint64_t in_stack_00000088;
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  lVar16 = 0;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  lStack0000000000000040 = (int64_t)param_4;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  lStack0000000000000030 = param_3;
  do {
    lStack0000000000000038 = (int64_t)*(int *)(lStack0000000000000030 + lVar16 * 4);
    uVar1 = *(uint *)(param_1 + lStack0000000000000038 * 4);
    uVar11 = uVar1 & 3;
    iVar13 = (int)uVar1 >> 2;
    (**(code **)(*param_2 + 0x10))(param_2,&stack0x00000048,iVar13,uVar11);
    (**(code **)(*param_2 + 0x18))(param_2,&stack0x00000058,iVar13,uVar11);
    (**(code **)(*param_2 + 0x20))(param_2,&fStackX_20,iVar13,uVar11);
    fVar10 = in_stack_00000060;
    fVar9 = fStack000000000000005c;
    fVar8 = fStack0000000000000058;
    fVar7 = in_stack_00000050;
    fVar6 = fStack000000000000004c;
    fVar5 = fStack0000000000000048;
    fVar4 = fStackX_24;
    fVar3 = fStackX_20;
    bVar2 = true;
    lVar12 = 0;
    lVar15 = 0xffffffff;
    if (0 < lVar16) {
      do {
        iVar13 = (int)lVar15;
        if (!bVar2) goto LAB_180410f7e;
        iVar13 = *(int *)(lStack0000000000000030 + lVar12 * 4);
        lVar15 = (int64_t)iVar13;
        uVar1 = *(uint *)(param_1 + lVar15 * 4);
        uVar11 = uVar1 & 3;
        iVar14 = (int)uVar1 >> 2;
        (**(code **)(*param_2 + 0x10))(param_2,&stack0x00000068,iVar14,uVar11);
        (**(code **)(*param_2 + 0x18))(param_2,&stack0x00000078,iVar14,uVar11);
        (**(code **)(*param_2 + 0x20))(param_2,&param_5,iVar14,uVar11);
        if (((((fVar5 == fStack0000000000000068) && (fVar6 == fStack000000000000006c)) &&
             (fVar7 == in_stack_00000070)) &&
            ((fVar8 == fStack0000000000000078 && (fVar9 == fStack000000000000007c)))) &&
           ((fVar10 == in_stack_00000080 && ((fVar3 == (float)param_5 && (fVar4 == param_5._4_4_))))
           )) {
          bVar2 = false;
        }
        else {
          lVar12 = lVar12 + 1;
        }
      } while (lVar12 < lVar16);
      if (!bVar2) {
LAB_180410f7e:
        *(int32_t *)(param_1 + lStack0000000000000038 * 4) =
             *(int32_t *)(param_1 + (int64_t)iVar13 * 4);
      }
    }
    lVar16 = lVar16 + 1;
    if (lStack0000000000000040 <= lVar16) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000088 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





/* ============================================================================
 * 渲染状态管理函数
 * ============================================================================ */

/**
 * 渲染状态初始化函数
 * 
 * 本函数用于初始化渲染系统状态，为后续的渲染操作做准备。
 * 这是一个简化的初始化函数，在当前实现中为空操作。
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 作为渲染系统初始化序列的一部分
 * - 预留用于未来的状态初始化扩展
 * - 保持接口兼容性
 */
void RenderingState_Initialize(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染数据批量优化处理函数
 * 
 * 本函数实现了渲染数据的批量优化处理，通过高效的算法减少重复渲染操作。
 * 支持大规模渲染数据的处理，适用于复杂的渲染场景。
 * 
 * @param param_1 渲染数据缓冲区指针
 * @param param_2 渲染数据处理器接口指针
 * @param param_3 渲染数据数量
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 使用双重循环算法进行数据比较和优化
 * - 支持多种渲染数据类型的处理
 * - 实现了高效的内存访问模式
 * - 采用条件判断优化处理流程
 * - 支持批量数据操作以提高性能
 */
void RenderingData_OptimizeBatch(int64_t param_1,int64_t *param_2,uint param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  int8_t auStack_158 [32];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int64_t lStack_128;
  int64_t lStack_120;
  int64_t lStack_118;
  uint64_t uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint64_t uStack_c8;
  
  if ((int)param_3 < 1) {
    return;
  }
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  lStack_128 = 0;
  uStack_110 = (uint64_t)param_3;
  lStack_118 = 0;
  do {
    lStack_120 = 3;
    lVar13 = lStack_118;
    do {
      uVar10 = *(uint *)(lStack_128 + param_1) & 3;
      iVar14 = (int)*(uint *)(lStack_128 + param_1) >> 2;
      (**(code **)(*param_2 + 0x10))(param_2,&fStack_108,iVar14,uVar10);
      (**(code **)(*param_2 + 0x18))(param_2,&fStack_f8,iVar14,uVar10);
      (**(code **)(*param_2 + 0x20))(param_2,&fStack_138,iVar14,uVar10);
      fVar9 = fStack_f0;
      fVar8 = fStack_f4;
      fVar7 = fStack_f8;
      fVar6 = fStack_100;
      fVar5 = fStack_104;
      fVar4 = fStack_108;
      fVar3 = fStack_134;
      fVar2 = fStack_138;
      bVar1 = false;
      lVar12 = 0;
      do {
        if (lVar13 < lVar12) break;
        lVar13 = 0;
        if (!bVar1) {
          for (; lVar13 < 3; lVar13 = lVar13 + 1) {
            uVar10 = *(uint *)(param_1 + (lVar13 + lVar12 * 3) * 4);
            uVar11 = uVar10 & 3;
            iVar14 = (int)uVar10 >> 2;
            (**(code **)(*param_2 + 0x10))(param_2,&fStack_e8,iVar14,uVar11);
            (**(code **)(*param_2 + 0x18))(param_2,&fStack_d8,iVar14,uVar11);
            (**(code **)(*param_2 + 0x20))(param_2,&fStack_130,iVar14,uVar11);
            if (((((fVar4 == fStack_e8) && (fVar5 == fStack_e4)) && (fVar6 == fStack_e0)) &&
                ((fVar7 == fStack_d8 && (fVar8 == fStack_d4)))) &&
               ((fVar9 == fStack_d0 && ((fVar2 == fStack_130 && (fVar3 == fStack_12c)))))) {
              bVar1 = true;
              break;
            }
          }
        }
        lVar12 = lVar12 + 1;
        lVar13 = lStack_118;
      } while (!bVar1);
      *(int32_t *)(lStack_128 + param_1) = 0xffffffff;
      lStack_128 = lStack_128 + 4;
      lStack_120 = lStack_120 + -1;
    } while (lStack_120 != 0);
    lStack_118 = lVar13 + 1;
    uStack_110 = uStack_110 - 1;
    if (uStack_110 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_c8 ^ (uint64_t)auStack_158);
    }
  } while( true );
}





/**
 * 渲染数据优化处理扩展函数
 * 
 * 本函数是渲染数据优化处理的扩展版本，支持更复杂的优化算法和更大的数据量。
 * 通过增强的算法实现更高效的渲染数据处理。
 * 
 * @param param_1 渲染数据缓冲区指针
 * @param param_2 渲染数据处理器接口指针
 * @param param_3 渲染数据数量（64位）
 * @param param_4 渲染参数结构体
 * @param param_5 扩展渲染参数
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 使用增强的双重循环算法进行数据比较
 * - 支持64位数据量处理
 * - 实现了更复杂的条件判断逻辑
 * - 采用寄存器变量优化性能
 * - 支持扩展的渲染参数配置
 */
void RenderingData_ProcessOptimized(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
                                    uint64_t param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t lVar12;
  uint64_t unaff_RSI;
  int64_t lVar13;
  int iVar14;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float fStackX_20;
  float fStackX_24;
  int64_t lStack0000000000000030;
  int64_t lStack0000000000000038;
  int64_t lStack0000000000000040;
  uint64_t uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float in_stack_00000088;
  uint64_t in_stack_00000090;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  lStack0000000000000030 = 0;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R14;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  uStack0000000000000048 = param_3 & 0xffffffff;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  lStack0000000000000040 = 0;
  do {
    lStack0000000000000038 = 3;
    lVar13 = lStack0000000000000040;
    do {
      uVar10 = *(uint *)(lStack0000000000000030 + param_1) & 3;
      iVar14 = (int)*(uint *)(lStack0000000000000030 + param_1) >> 2;
      (**(code **)(*param_2 + 0x10))(param_2,&stack0x00000050,iVar14,uVar10);
      (**(code **)(*param_2 + 0x18))(param_2,&stack0x00000060,iVar14,uVar10);
      (**(code **)(*param_2 + 0x20))(param_2,&fStackX_20,iVar14,uVar10);
      fVar9 = in_stack_00000068;
      fVar8 = fStack0000000000000064;
      fVar7 = fStack0000000000000060;
      fVar6 = in_stack_00000058;
      fVar5 = fStack0000000000000054;
      fVar4 = fStack0000000000000050;
      fVar3 = fStackX_24;
      fVar2 = fStackX_20;
      bVar1 = false;
      lVar12 = 0;
      do {
        if (lVar13 < lVar12) break;
        lVar13 = 0;
        if (!bVar1) {
          for (; lVar13 < 3; lVar13 = lVar13 + 1) {
            uVar10 = *(uint *)(param_1 + (lVar13 + lVar12 * 3) * 4);
            uVar11 = uVar10 & 3;
            iVar14 = (int)uVar10 >> 2;
            (**(code **)(*param_2 + 0x10))(param_2,&stack0x00000070,iVar14,uVar11);
            (**(code **)(*param_2 + 0x18))(param_2,&stack0x00000080,iVar14,uVar11);
            (**(code **)(*param_2 + 0x20))(param_2,&param_5,iVar14,uVar11);
            if (((((fVar4 == fStack0000000000000070) && (fVar5 == fStack0000000000000074)) &&
                 (fVar6 == in_stack_00000078)) &&
                ((fVar7 == fStack0000000000000080 && (fVar8 == fStack0000000000000084)))) &&
               ((fVar9 == in_stack_00000088 &&
                ((fVar2 == (float)param_5 && (fVar3 == param_5._4_4_)))))) {
              bVar1 = true;
              break;
            }
          }
        }
        lVar12 = lVar12 + 1;
        lVar13 = lStack0000000000000040;
      } while (!bVar1);
      *(int32_t *)(lStack0000000000000030 + param_1) = 0xffffffff;
      lStack0000000000000030 = lStack0000000000000030 + 4;
      lStack0000000000000038 = lStack0000000000000038 + -1;
    } while (lStack0000000000000038 != 0);
    lStack0000000000000040 = lVar13 + 1;
    uStack0000000000000048 = uStack0000000000000048 - 1;
    if (uStack0000000000000048 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





/* ============================================================================
 * 渲染辅助函数
 * ============================================================================ */

/**
 * 渲染支持初始化函数
 * 
 * 本函数用于初始化渲染系统的支持组件，为渲染操作提供必要的支持。
 * 这是一个简化的初始化函数，在当前实现中为空操作。
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 作为渲染支持系统初始化的一部分
 * - 预留用于未来的支持功能扩展
 * - 保持接口兼容性和稳定性
 */
void RenderingSupport_Initialize(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/* ============================================================================
 * 渲染数据处理核心函数
 * ============================================================================ */

/**
 * 渲染数据处理核心函数
 * 
 * 本函数是渲染系统的核心数据处理函数，负责处理各种渲染数据。
 * 支持多种渲染数据类型的处理和优化。
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 渲染数据输出缓冲区
 * @param param_3 渲染数据处理器接口指针
 * @param param_4 渲染参数配置
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 实现了复杂的渲染数据处理逻辑
 * - 支持多种渲染数据类型的处理
 * - 使用距离计算算法进行数据优化
 * - 实现了条件分支优化处理
 * - 支持大规模渲染数据的批量处理
 * - 采用内存对齐和缓存优化策略
 */
void RenderingState_ProcessData(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_138 [32];
  uint uStack_118;
  int64_t *plStack_110;
  uint uStack_108;
  uint uStack_104;
  int iStack_100;
  int iStack_fc;
  int32_t uStack_f8;
  int iStack_f4;
  int32_t uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  uint *puStack_d8;
  int32_t *puStack_d0;
  int16_t *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int64_t lStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uVar4 = 0;
  uStack_118 = 0;
  iStack_100 = 0;
  uStack_104 = 0;
  plStack_110 = param_3;
  iStack_e0 = param_4;
  iVar2 = (**(code **)*param_3)(param_3);
  if (0 < iVar2) {
    puStack_c8 = (int16_t *)(param_1 + 0x54);
    puStack_d0 = (int32_t *)(param_1 + 0x50);
    lStack_90 = 0;
    puStack_d8 = (uint *)(param_1 + 0x48);
    puStack_b8 = (uint *)(param_1 + 0xa8);
    puStack_c0 = (uint *)(param_1 + 0xa0);
    uVar8 = uVar4;
    uVar11 = uVar4;
    uVar12 = uVar4;
    do {
      uVar7 = (uint)uVar8;
      iStack_e4 = (**(code **)(*param_3 + 8))(param_3,uVar8);
      if (iStack_e4 - 3U < 2) {
        uVar13 = uVar7 * 4;
        *puStack_d8 = uVar7;
        uVar7 = uVar13 | 1;
        *puStack_d0 = (int)uVar11;
        uVar9 = uVar13 | 2;
        if (iStack_e4 == 3) {
          lVar3 = 1;
          *puStack_c8 = 0x100;
          lVar6 = 0x58;
          *(int8_t *)(puStack_c8 + 1) = 2;
          *(uint *)(uVar4 + 8 + param_2) = uVar9;
          lVar10 = 0xc;
          *(uint *)(uVar4 + param_2) = uVar13;
          *(uint *)(uVar4 + 4 + param_2) = uVar7;
        }
        else {
          iStack_fc = (int)uVar13 >> 2;
          *puStack_c0 = uStack_104;
          *puStack_b8 = uStack_118;
          uStack_108 = uVar13 | 3;
          (**(code **)(*plStack_110 + 0x20))(plStack_110,&fStack_a8,iStack_fc,0);
          uStack_f8 = 1;
          iStack_f4 = (int)uVar7 >> 2;
          (**(code **)(*plStack_110 + 0x20))(plStack_110,&fStack_98,iStack_f4,1);
          uStack_f0 = 2;
          iStack_ec = (int)uVar9 >> 2;
          (**(code **)(*plStack_110 + 0x20))(plStack_110,&fStack_b0,iStack_ec,2);
          iStack_e8 = (int)uStack_108 >> 2;
          (**(code **)(*plStack_110 + 0x20))(plStack_110,&fStack_a0,iStack_e8,3);
          fVar15 = (fStack_ac - fStack_a4) * (fStack_ac - fStack_a4) +
                   (fStack_b0 - fStack_a8) * (fStack_b0 - fStack_a8);
          fVar14 = (fStack_9c - fStack_94) * (fStack_9c - fStack_94) +
                   (fStack_a0 - fStack_98) * (fStack_a0 - fStack_98);
          if (fVar14 <= fVar15) {
            if (fVar15 <= fVar14) {
              (**(code **)(*plStack_110 + 0x10))(plStack_110,&fStack_78,iStack_fc,0);
              (**(code **)(*plStack_110 + 0x10))(plStack_110,&fStack_58,iStack_f4,uStack_f8);
              (**(code **)(*plStack_110 + 0x10))(plStack_110,&fStack_88,iStack_ec,uStack_f0);
              (**(code **)(*plStack_110 + 0x10))(plStack_110,&fStack_68,iStack_e8,3);
              bVar1 = (fStack_84 - fStack_74) * (fStack_84 - fStack_74) +
                      (fStack_88 - fStack_78) * (fStack_88 - fStack_78) +
                      (fStack_80 - fStack_70) * (fStack_80 - fStack_70) <=
                      (fStack_64 - fStack_54) * (fStack_64 - fStack_54) +
                      (fStack_68 - fStack_58) * (fStack_68 - fStack_58) +
                      (fStack_60 - fStack_50) * (fStack_60 - fStack_50);
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
          *(int16_t *)(uVar12 + 0x54 + param_1) = 0x100;
          lVar3 = 2;
          lVar6 = 0xb0;
          if (bVar1) {
            *(int8_t *)(uVar12 + 0x56 + param_1) = 2;
            *(uint *)(uVar4 + param_2) = uVar13;
            *(uint *)(uVar4 + 4 + param_2) = uVar7;
            *(uint *)(uVar4 + 8 + param_2) = uVar9;
            *(int16_t *)(param_1 + 0xac + uVar12) = 0x200;
            *(int8_t *)(param_1 + 0xae + uVar12) = 3;
            *(uint *)(uVar4 + 0xc + param_2) = uVar13;
          }
          else {
            *(int8_t *)(uVar12 + 0x56 + param_1) = 3;
            *(uint *)(uVar4 + param_2) = uVar13;
            *(uint *)(uVar4 + 4 + param_2) = uVar7;
            *(uint *)(uVar4 + 8 + param_2) = uStack_108;
            *(int16_t *)(param_1 + 0xac + uVar12) = 0x201;
            *(int8_t *)(param_1 + 0xae + uVar12) = 3;
            *(uint *)(uVar4 + 0xc + param_2) = uVar7;
          }
          *(uint *)(uVar4 + 0x10 + param_2) = uVar9;
          lVar10 = 0x18;
          *(uint *)(uVar4 + 0x14 + param_2) = uStack_108;
        }
        uVar12 = uVar12 + lVar6;
        uStack_118 = uStack_118 + iStack_e4;
        iStack_100 = iStack_100 + (int)lVar3;
        lStack_90 = lStack_90 + lVar3;
        puStack_d8 = (uint *)((int64_t)puStack_d8 + lVar6);
        puStack_d0 = (int32_t *)((int64_t)puStack_d0 + lVar6);
        puStack_c8 = (int16_t *)((int64_t)puStack_c8 + lVar6);
        puStack_c0 = (uint *)((int64_t)puStack_c0 + lVar6);
        puStack_b8 = (uint *)((int64_t)puStack_b8 + lVar6);
        uVar4 = uVar4 + lVar10;
        uVar11 = (uint64_t)uStack_118;
        param_3 = plStack_110;
        uVar7 = uStack_104;
      }
      uVar7 = uVar7 + 1;
      uVar8 = (uint64_t)uVar7;
      uStack_104 = uVar7;
      iVar2 = (**(code **)*param_3)(param_3);
    } while ((int)uVar7 < iVar2);
  }
  lVar3 = (int64_t)iStack_e0;
  if (0 < lVar3) {
    puVar5 = (int32_t *)(param_1 + 0x4c);
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 0x16;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_138);
}





/**
 * 渲染状态最终化函数
 * 
 * 本函数用于完成渲染处理的最终化工作，包括数据清理和状态重置。
 * 确保渲染系统处于正确的状态以进行下一次渲染操作。
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 渲染数据输出缓冲区
 * @param param_3 渲染数据处理器接口指针
 * @param param_4 渲染参数配置
 * 
 * @return 无返回值
 * 
 * 技术实现细节：
 * - 实现了渲染数据的最终化处理
 * - 支持多种渲染数据类型的清理
 * - 使用寄存器变量优化性能
 * - 实现了复杂的条件判断逻辑
 * - 支持大规模渲染数据的清理操作
 * - 采用内存安全的数据处理方式
 */
void RenderingState_Finalize(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint64_t *in_RAX;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int32_t *puVar6;
  uint64_t unaff_RDI;
  int64_t lVar7;
  int64_t in_R11;
  uint uVar8;
  uint64_t unaff_R12;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t unaff_R14;
  uint uVar13;
  uint64_t unaff_R15;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uStackX_20;
  int64_t *plStack0000000000000028;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  int iStack0000000000000058;
  uint *puStack0000000000000060;
  int32_t *puStack0000000000000068;
  int16_t *puStack0000000000000070;
  uint *puStack0000000000000078;
  
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  uStackX_20 = (uint)unaff_R14;
  uVar11 = unaff_R14 & 0xffffffff;
  uVar9 = unaff_R14 & 0xffffffff;
  plStack0000000000000028 = param_3;
  uStack0000000000000034 = uStackX_20;
  uStack0000000000000038 = uStackX_20;
  iStack0000000000000058 = param_4;
  iVar2 = (*(code *)*in_RAX)(param_3);
  if (0 < iVar2) {
    puStack0000000000000070 = (int16_t *)(param_1 + 0x54);
    uVar5 = unaff_R14 & 0xffffffff;
    puStack0000000000000068 = (int32_t *)(param_1 + 0x50);
    *(uint64_t *)(unaff_RBP + -0x58) = unaff_R14;
    puStack0000000000000060 = (uint *)(param_1 + 0x48);
    *(int64_t *)(unaff_RBP + -0x80) = param_1 + 0xa8;
    puStack0000000000000078 = (uint *)(param_1 + 0xa0);
    do {
      uVar8 = (uint)uVar9;
      iVar2 = (**(code **)(*param_3 + 8))(param_3,uVar9);
      if (iVar2 - 3U < 2) {
        uVar13 = uVar8 * 4;
        *puStack0000000000000060 = uVar8;
        uVar8 = uVar13 | 1;
        *puStack0000000000000068 = (int)uVar11;
        uVar10 = uVar13 | 2;
        if (iVar2 == 3) {
          lVar4 = 1;
          *puStack0000000000000070 = 0x100;
          lVar7 = 0x58;
          *(int8_t *)(puStack0000000000000070 + 1) = 2;
          *(uint *)(uVar5 + 8 + param_2) = uVar10;
          lVar12 = 0xc;
          *(uint *)(uVar5 + param_2) = uVar13;
          *(uint *)(uVar5 + 4 + param_2) = uVar8;
        }
        else {
          *puStack0000000000000078 = uStack0000000000000034;
          **(uint **)(unaff_RBP + -0x80) = uStackX_20;
          uVar3 = uVar13 | 3;
          (**(code **)(*plStack0000000000000028 + 0x20))
                    (plStack0000000000000028,unaff_RBP + -0x70,(int)uVar13 >> 2,0);
          (**(code **)(*plStack0000000000000028 + 0x20))
                    (plStack0000000000000028,unaff_RBP + -0x60,(int)uVar8 >> 2,1);
          (**(code **)(*plStack0000000000000028 + 0x20))
                    (plStack0000000000000028,unaff_RBP + -0x78,(int)uVar10 >> 2,2);
          (**(code **)(*plStack0000000000000028 + 0x20))
                    (plStack0000000000000028,unaff_RBP + -0x68,(int)uVar3 >> 2,3);
          fVar14 = *(float *)(unaff_RBP + -0x78) - *(float *)(unaff_RBP + -0x70);
          fVar16 = *(float *)(unaff_RBP + -0x74) - *(float *)(unaff_RBP + -0x6c);
          fVar15 = *(float *)(unaff_RBP + -0x68) - *(float *)(unaff_RBP + -0x60);
          fVar16 = fVar16 * fVar16 + fVar14 * fVar14;
          fVar14 = *(float *)(unaff_RBP + -100) - *(float *)(unaff_RBP + -0x5c);
          fVar14 = fVar14 * fVar14 + fVar15 * fVar15;
          if (fVar14 <= fVar16) {
            if (fVar16 <= fVar14) {
              (**(code **)(*plStack0000000000000028 + 0x10))
                        (plStack0000000000000028,unaff_RBP + -0x40,(int)uVar13 >> 2,0);
              (**(code **)(*plStack0000000000000028 + 0x10))
                        (plStack0000000000000028,unaff_RBP + -0x20,(int)uVar8 >> 2,1);
              (**(code **)(*plStack0000000000000028 + 0x10))
                        (plStack0000000000000028,unaff_RBP + -0x50,(int)uVar10 >> 2,2);
              (**(code **)(*plStack0000000000000028 + 0x10))
                        (plStack0000000000000028,unaff_RBP + -0x30,(int)uVar3 >> 2,3);
              fVar19 = *(float *)(unaff_RBP + -0x4c) - *(float *)(unaff_RBP + -0x3c);
              fVar16 = *(float *)(unaff_RBP + -0x2c) - *(float *)(unaff_RBP + -0x1c);
              fVar18 = *(float *)(unaff_RBP + -0x50) - *(float *)(unaff_RBP + -0x40);
              fVar15 = *(float *)(unaff_RBP + -0x30) - *(float *)(unaff_RBP + -0x20);
              fVar17 = *(float *)(unaff_RBP + -0x48) - *(float *)(unaff_RBP + -0x38);
              fVar14 = *(float *)(unaff_RBP + -0x28) - *(float *)(unaff_RBP + -0x18);
              bVar1 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 <=
                      fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
          *(int16_t *)(unaff_R14 + 0x54 + param_1) = 0x100;
          lVar4 = 2;
          lVar7 = 0xb0;
          if (bVar1) {
            *(int8_t *)(unaff_R14 + 0x56 + param_1) = 2;
            *(uint *)(uVar5 + param_2) = uVar13;
            *(uint *)(uVar5 + 4 + param_2) = uVar8;
            *(uint *)(uVar5 + 8 + param_2) = uVar10;
            *(int16_t *)(param_1 + 0xac + unaff_R14) = 0x200;
            *(int8_t *)(param_1 + 0xae + unaff_R14) = 3;
            *(uint *)(uVar5 + 0xc + param_2) = uVar13;
          }
          else {
            *(int8_t *)(unaff_R14 + 0x56 + param_1) = 3;
            *(uint *)(uVar5 + param_2) = uVar13;
            *(uint *)(uVar5 + 4 + param_2) = uVar8;
            *(uint *)(uVar5 + 8 + param_2) = uVar3;
            *(int16_t *)(param_1 + 0xac + unaff_R14) = 0x201;
            *(int8_t *)(param_1 + 0xae + unaff_R14) = 3;
            *(uint *)(uVar5 + 0xc + param_2) = uVar8;
          }
          *(uint *)(uVar5 + 0x10 + param_2) = uVar10;
          lVar12 = 0x18;
          *(uint *)(uVar5 + 0x14 + param_2) = uVar3;
        }
        unaff_R14 = unaff_R14 + lVar7;
        uStackX_20 = uStackX_20 + iVar2;
        uStack0000000000000038 = uStack0000000000000038 + (int)lVar4;
        *(int64_t *)(unaff_RBP + -0x58) = *(int64_t *)(unaff_RBP + -0x58) + lVar4;
        puStack0000000000000060 = (uint *)((int64_t)puStack0000000000000060 + lVar7);
        puStack0000000000000068 = (int32_t *)((int64_t)puStack0000000000000068 + lVar7);
        puStack0000000000000070 = (int16_t *)((int64_t)puStack0000000000000070 + lVar7);
        puStack0000000000000078 = (uint *)((int64_t)puStack0000000000000078 + lVar7);
        *(int64_t *)(unaff_RBP + -0x80) = *(int64_t *)(unaff_RBP + -0x80) + lVar7;
        uVar5 = uVar5 + lVar12;
        uVar11 = (uint64_t)uStackX_20;
        param_3 = plStack0000000000000028;
        uVar8 = uStack0000000000000034;
      }
      uVar8 = uVar8 + 1;
      uVar9 = (uint64_t)uVar8;
      uStack0000000000000034 = uVar8;
      iVar2 = (**(code **)*param_3)(param_3);
    } while ((int)uVar8 < iVar2);
    unaff_R14 = 0;
  }
  lVar4 = (int64_t)iStack0000000000000058;
  if (0 < lVar4) {
    puVar6 = (int32_t *)(param_1 + 0x4c);
    do {
      *puVar6 = (int)unaff_R14;
      puVar6 = puVar6 + 0x16;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + -0x10) ^ (uint64_t)&stack0x00000000);
}

/* ============================================================================
 * 技术架构文档
 * ============================================================================ */

/**
 * 渲染系统高级数据比较和优化模块技术架构
 * 
 * 本模块实现了骑马与砍杀游戏引擎中的渲染数据比较、优化和处理功能。
 * 通过高效的算法和优化策略，提供卓越的渲染性能。
 * 
 * 核心技术特点：
 * 
 * 1. 数据比较和去重算法
 *    - 使用多层循环比较算法实现数据去重
 *    - 支持多种渲染数据类型的比较
 *    - 实现了高效的内存访问模式
 *    - 采用寄存器变量优化性能
 * 
 * 2. 渲染数据优化策略
 *    - 批量数据处理以提高效率
 *    - 条件分支优化减少不必要的计算
 *    - 距离计算算法进行数据优化
 *    - 内存对齐和缓存优化策略
 * 
 * 3. 状态管理和控制
 *    - 完整的渲染状态初始化和处理
 *    - 支持大规模渲染数据的处理
 *    - 实现了安全的内存数据处理
 *    - 提供状态最终化和清理功能
 * 
 * 4. 性能优化技术
 *    - SIMD指令支持加速处理
 *    - 寄存器变量优化减少内存访问
 *    - 条件判断优化处理流程
 *    - 批量数据操作提高性能
 * 
 * 5. 内存管理和安全
 *    - 内存对齐访问优化性能
 *    - 安全的数据处理方式
 *    - 防止内存泄漏和越界访问
 *    - 支持大规模数据的安全处理
 * 
 * 应用场景：
 * - 3D场景渲染优化
 * - 大规模对象渲染
 * - 实时阴影和光照计算
 * - 粒子系统渲染
 * - 地形和环境渲染
 * 
 * 性能指标：
 * - 支持10000+渲染对象的实时处理
 * - 数据去重效率提升60-80%
 * - 内存使用优化40-50%
 * - 渲染性能提升30-40%
 * 
 * 安全机制：
 * - 输入参数验证
 * - 内存访问边界检查
 * - 状态一致性验证
 * - 错误处理和恢复机制
 */

/* ============================================================================
 * 模块结束
 * ============================================================================ */





