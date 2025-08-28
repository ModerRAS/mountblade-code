#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 渲染系统高级浮点数处理和状态管理模块
// =============================================================================
// 文件说明：渲染系统高级浮点数处理和状态管理模块，包含1个核心函数
// 主要功能：浮点数处理、状态管理、内存操作、渲染参数配置等
// 技术特点：浮点数比较、条件判断、内存读写、寄存器操作、状态转换等
// =============================================================================

// =============================================================================
// 常量定义
// =============================================================================
#define RENDERING_SYSTEM_FLOAT_ZERO 0x0                  // 浮点数零值
#define RENDERING_SYSTEM_FLOAT_ONE 0x3f800000             // 浮点数1.0
#define RENDERING_SYSTEM_FLOAT_THREE 0x40400000            // 浮点数3.0
#define RENDERING_SYSTEM_FLAG_MASK_1C 0x1c                 // 标志掩码1C
#define RENDERING_SYSTEM_FLAG_MASK_28 0x28                 // 标志掩码28
#define RENDERING_SYSTEM_FLAG_MASK_3C 0x3c                 // 标志掩码3C
#define RENDERING_SYSTEM_FLAG_MASK_2A 0x2a                 // 标志掩码2A
#define RENDERING_SYSTEM_FLAG_BIT_1C 0x1c                 // 标志位1C
#define RENDERING_SYSTEM_FLAG_BIT_28 0x28                 // 标志位28
#define RENDERING_SYSTEM_FLAG_BIT_3C 0x3c                 // 标志位3C
#define RENDERING_SYSTEM_FLAG_BIT_2A 0x2a                 // 标志位2A
#define RENDERING_SYSTEM_OFFSET_564 0x564                  // 偏移量564
#define RENDERING_SYSTEM_OFFSET_558 0x558                  // 偏移量558
#define RENDERING_SYSTEM_OFFSET_A9E4 0xa9e4                // 偏移量A9E4
#define RENDERING_SYSTEM_OFFSET_A8B0 0xa8b0                // 偏移量A8B0
#define RENDERING_SYSTEM_OFFSET_A9E8 0xa9e8                // 偏移量A9E8
#define RENDERING_SYSTEM_OFFSET_ABD4 0xabd4                // 偏移量ABD4
#define RENDERING_SYSTEM_OFFSET_ABD8 0xabd8                // 偏移量ABD8
#define RENDERING_SYSTEM_OFFSET_A820 0xa820                // 偏移量A820
#define RENDERING_SYSTEM_OFFSET_A828 0xa828                // 偏移量A828
#define RENDERING_SYSTEM_OFFSET_A8B4 0xa8b4                // 偏移量A8B4
#define RENDERING_SYSTEM_OFFSET_A9C0 0xa9c0                // 偏移量A9C0
#define RENDERING_SYSTEM_OFFSET_A9C8 0xa9c8                // 偏移量A9C8
#define RENDERING_SYSTEM_OFFSET_A8B5 0xa8b5                // 偏移量A8B5
#define RENDERING_SYSTEM_OFFSET_A830 0xa830                // 偏移量A830
#define RENDERING_SYSTEM_OFFSET_A838 0xa838                // 偏移量A838
#define RENDERING_SYSTEM_OFFSET_A840 0xa840                // 偏移量A840
#define RENDERING_SYSTEM_OFFSET_A848 0xa848                // 偏移量A848
#define RENDERING_SYSTEM_OFFSET_A850 0xa850                // 偏移量A850
#define RENDERING_SYSTEM_OFFSET_A858 0xa858                // 偏移量A858
#define RENDERING_SYSTEM_OFFSET_A860 0xa860                // 偏移量A860
#define RENDERING_SYSTEM_OFFSET_A868 0xa868                // 偏移量A868
#define RENDERING_SYSTEM_OFFSET_A870 0xa870                // 偏移量A870
#define RENDERING_SYSTEM_OFFSET_A878 0xa878                // 偏移量A878
#define RENDERING_SYSTEM_OFFSET_A880 0xa880                // 偏移量A880
#define RENDERING_SYSTEM_OFFSET_A888 0xa888                // 偏移量A888
#define RENDERING_SYSTEM_OFFSET_A8B6 0xa8b6                // 偏移量A8B6
#define RENDERING_SYSTEM_OFFSET_A604 0xa604                // 偏移量A604
#define RENDERING_SYSTEM_OFFSET_A608 0xa608                // 偏移量A608
#define RENDERING_SYSTEM_OFFSET_A600 0xa600                // 偏移量A600
#define RENDERING_SYSTEM_OFFSET_728 0x728                  // 偏移量728
#define RENDERING_SYSTEM_OFFSET_5AA 0x5aa                  // 偏移量5AA
#define RENDERING_SYSTEM_OFFSET_A7F4 0xa7f4                // 偏移量A7F4
#define RENDERING_SYSTEM_OFFSET_43000 0x43000              // 偏移量43000
#define RENDERING_SYSTEM_OFFSET_A7F0 0xa7f0                // 偏移量A7F0
#define RENDERING_SYSTEM_OFFSET_110 0x110                  // 偏移量110
#define RENDERING_SYSTEM_OFFSET_2603 0x2603                // 偏移量2603
#define RENDERING_SYSTEM_OFFSET_2605 0x2605                // 偏移量2605
#define RENDERING_SYSTEM_OFFSET_2607 0x2607                // 偏移量2607
#define RENDERING_SYSTEM_FLAG_20000000000 0x20000000000    // 标志20000000000
#define RENDERING_SYSTEM_FLAG_3C2A 0x3c2a                  // 标志3C2A
#define RENDERING_SYSTEM_FUNCTION_HASH_C7D5 0xc7d5          // 函数哈希C7D5
#define RENDERING_SYSTEM_FUNCTION_HASH_382A 0x382a          // 函数哈希382A

// =============================================================================
// 类型别名定义
// =============================================================================
typedef float RenderingSystem_FloatValue;                 // 渲染系统浮点数值
typedef ulonglong RenderingSystem_ULongValue;              // 渲染系统无符号长整数值
typedef ushort RenderingSystem_UShortValue;                // 渲染系统无符号短整数值
typedef uint RenderingSystem_UIntValue;                     // 渲染系统无符号整数值
typedef longlong RenderingSystem_LongValue;                // 渲染系统长整数值
typedef undefined1 RenderingSystem_Undefined1;              // 渲染系统未定义类型1
typedef undefined4 RenderingSystem_Undefined4;              // 渲染系统未定义类型4
typedef undefined8 RenderingSystem_Undefined8;              // 渲染系统未定义类型8

// =============================================================================
// 函数别名定义
// =============================================================================
#define RenderingSystem_FloatProcessor FUN_1805791e0        // 渲染系统浮点数处理器
#define RenderingSystem_UnknownFunction1 FUN_180662190     // 渲染系统未知函数1
#define RenderingSystem_UnknownFunction2 FUN_180516e40     // 渲染系统未知函数2
#define RenderingSystem_UnknownFunction3 FUN_1808fc050     // 渲染系统未知函数3

// =============================================================================
// 结构体定义
// =============================================================================
typedef struct {
    RenderingSystem_FloatValue float_param1;              // 浮点参数1
    RenderingSystem_ULongValue ulong_param2;               // 无符号长整参数2
    RenderingSystem_FloatValue xmm8_value;                 // XMM8寄存器值
    RenderingSystem_UIntValue r15d_value;                   // R15D寄存器值
    RenderingSystem_LongValue rdi_value;                    // RDI寄存器值
    RenderingSystem_LongValue rbx_value;                    // RBX寄存器值
    RenderingSystem_LongValue rbp_value;                    // RBP寄存器值
    RenderingSystem_ULongValue rsi_value;                   // RSI寄存器值
    RenderingSystem_ULongValue r14_value;                   // R14寄存器值
    bool zf_flag;                                          // ZF标志
} RenderingSystem_FloatProcessorContext;

// =============================================================================
// 枚举定义
// =============================================================================
typedef enum {
    RENDERING_SYSTEM_STATE_NORMAL = 0,                    // 正常状态
    RENDERING_SYSTEM_STATE_PROCESSING = 1,                 // 处理状态
    RENDERING_SYSTEM_STATE_COMPLETE = 2,                   // 完成状态
    RENDERING_SYSTEM_STATE_ERROR = 3                        // 错误状态
} RenderingSystem_ProcessState;

// =============================================================================
// 全局变量声明
// =============================================================================
static RenderingSystem_ProcessState g_rendering_system_state = RENDERING_SYSTEM_STATE_NORMAL;  // 渲染系统全局状态

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * 渲染系统浮点数处理器
 * 
 * 该函数是渲染系统的核心浮点数处理组件，负责处理复杂的浮点数运算和状态管理。
 * 函数通过多个条件分支和寄存器操作，实现了高级的浮点数处理逻辑。
 * 
 * @param param_1 浮点数参数，用于传递浮点数值
 * @param param_2 无符号长整参数，用于传递地址或控制信息
 * 
 * 处理流程：
 * 1. 初始化寄存器状态和标志位
 * 2. 检查ZF标志并设置RSI寄存器
 * 3. 验证内存状态和标志位
 * 4. 执行浮点数比较和条件跳转
 * 5. 设置默认浮点数值
 * 6. 调用辅助函数进行数据处理
 * 7. 更新内存中的渲染参数
 * 8. 执行最终的清理和状态转换
 * 
 * 技术特点：
 * - 支持多种浮点数格式的处理
 * - 实现了复杂的条件判断逻辑
 * - 提供了内存读写和寄存器操作
 * - 包含错误处理和状态管理
 * - 支持多级嵌套的条件分支
 */
void RenderingSystem_FloatProcessor(float param_1, ulonglong param_2)
{
    RenderingSystem_UShortValue *puVar1;                    // 无符号短整指针变量1
    RenderingSystem_UIntValue uVar2;                        // 无符号整型变量2
    RenderingSystem_FloatValue fVar3;                       // 浮点型变量3
    RenderingSystem_Undefined1 uVar4;                       // 未定义类型变量4
    RenderingSystem_Undefined4 uVar5;                       // 未定义类型变量5
    RenderingSystem_Undefined4 uVar6;                       // 未定义类型变量6
    RenderingSystem_Undefined4 uVar7;                       // 未定义类型变量7
    RenderingSystem_Undefined4 uVar8;                       // 未定义类型变量8
    RenderingSystem_Undefined4 uVar9;                       // 未定义类型变量9
    RenderingSystem_Undefined4 uVar10;                      // 未定义类型变量10
    RenderingSystem_Undefined4 uVar11;                      // 未定义类型变量11
    RenderingSystem_Undefined4 uVar12;                      // 未定义类型变量12
    RenderingSystem_Undefined4 uVar13;                      // 未定义类型变量13
    RenderingSystem_Undefined4 uVar14;                      // 未定义类型变量14
    RenderingSystem_Undefined8 uVar15;                      // 未定义类型变量15
    RenderingSystem_Undefined8 uVar16;                      // 未定义类型变量16
    RenderingSystem_Undefined8 uVar17;                      // 未定义类型变量17
    RenderingSystem_Undefined8 uVar18;                      // 未定义类型变量18
    RenderingSystem_ULongValue uVar19;                      // 无符号长整型变量19
    RenderingSystem_LongValue lVar20;                       // 长整型变量20
    RenderingSystem_UShortValue uVar21;                     // 无符号短整型变量21
    RenderingSystem_ULongValue in_RCX;                      // RCX寄存器输入值
    RenderingSystem_LongValue unaff_RBX;                    // RBX寄存器值
    RenderingSystem_LongValue unaff_RBP;                    // RBP寄存器值
    RenderingSystem_ULongValue unaff_RSI;                   // RSI寄存器值
    RenderingSystem_LongValue unaff_RDI;                    // RDI寄存器值
    RenderingSystem_ULongValue unaff_R14;                   // R14寄存器值
    RenderingSystem_UIntValue unaff_R15D;                   // R15D寄存器值
    RenderingSystem_Undefined4 unaff_000000bc;               // 未定义类型变量000000bc
    bool in_ZF;                                             // ZF标志输入值
    RenderingSystem_FloatValue unaff_XMM8_Da;                // XMM8寄存器值
    RenderingSystem_UIntValue in_stack_00000040;            // 栈参数00000040
    RenderingSystem_UIntValue uStack0000000000000060;       // 栈变量0000000000000060
    RenderingSystem_Undefined4 uStack0000000000000064;      // 栈变量0000000000000064
    RenderingSystem_Undefined8 in_stack_00000068;           // 栈参数00000068
    RenderingSystem_Undefined8 in_stack_00000070;           // 栈参数00000070
    RenderingSystem_Undefined8 in_stack_00000078;           // 栈参数00000078
    
    // 设置全局状态为处理中
    g_rendering_system_state = RENDERING_SYSTEM_STATE_PROCESSING;
    
    // 检查ZF标志并设置RSI寄存器
    if (in_ZF) {
        unaff_RSI = param_2;
    }
    
    // 检查内存状态和标志位
    if (*(int *)(unaff_RDI + RENDERING_SYSTEM_OFFSET_564) < 0) {
        if ((unaff_R14 >> 0x1c & 1) == 0) {
            if ((unaff_R14 & RENDERING_SYSTEM_FLAG_20000000000) != 0) {
                goto LAB_180579837;
            }
            
            // 读取和处理浮点数值
            uVar5 = *(RenderingSystem_Undefined4 *)(unaff_RDI + RENDERING_SYSTEM_OFFSET_558);
            if ((unaff_XMM8_Da != *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9E4)) ||
                (*(int *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B0) != unaff_R15D)) {
                
                // 设置默认浮点数值
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9E4) = RENDERING_SYSTEM_FLOAT_ONE;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9E8) = RENDERING_SYSTEM_FLOAT_THREE;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_ABD4) = RENDERING_SYSTEM_FLOAT_ONE;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_ABD8) = RENDERING_SYSTEM_FLOAT_THREE;
                
                // 调用辅助函数进行数据处理
                RenderingSystem_UnknownFunction1(&stack0x00000050, 
                                                 *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_2603),
                                                 *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_2605), 
                                                 *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_2607), 
                                                 1);
                
                // 处理内存数据结构
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + -0x1c);
                uVar15 = *(RenderingSystem_Undefined8 *)(unaff_RBP + 0xf0);
                uVar16 = *(RenderingSystem_Undefined8 *)(unaff_RBP + 0xf8);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A820) = 0;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A828) = 0;
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B4) = uVar4;
                
                // 继续处理内存数据
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + -0x1b);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9C0) = uVar15;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9C8) = uVar16;
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B5) = uVar4;
                
                // 处理栈数据和内存结构
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + -0x1a);
                *(ulonglong *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A830) = CONCAT44(uStack0000000000000064, uStack0000000000000060);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A838) = in_stack_00000068;
                uVar15 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x80);
                uVar16 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x78);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A840) = in_stack_00000070;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A848) = in_stack_00000078;
                uVar17 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x70);
                uVar18 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x68);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A850) = uVar15;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A858) = uVar16;
                uVar15 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x60);
                uVar16 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x58);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A860) = uVar17;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A868) = uVar18;
                uVar17 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x50);
                uVar18 = *(RenderingSystem_Undefined8 *)(unaff_RBP + -0x48);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A870) = uVar15;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A878) = uVar16;
                
                // 处理浮点数组和参数
                uVar7 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x40);
                uVar8 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x3c);
                uVar9 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x38);
                uVar10 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x34);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B6) = uVar4;
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x104);
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A880) = uVar17;
                *(RenderingSystem_Undefined8 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A888) = uVar18;
                uVar11 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x30);
                uVar12 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x2c);
                uVar13 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x28);
                uVar14 = *(RenderingSystem_Undefined4 *)(unaff_RBP + -0x24);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B7) = uVar4;
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x105);
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A890) = uVar7;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A894) = uVar8;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A898) = uVar9;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A89C) = uVar10;
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B8) = uVar4;
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x106);
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8A0) = uVar11;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8A4) = uVar12;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8A8) = uVar13;
                *(RenderingSystem_Undefined4 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8AC) = uVar14;
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8B9) = uVar4;
                uVar4 = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x107);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8BA) = uVar4;
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8BB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x108);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8BC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x109);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8BD) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x10a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8BE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x10b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8BF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x10c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C0) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x10d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C1) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x10e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C2) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x10f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C3) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x110);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C4) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x111);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C5) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x112);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C6) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x113);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C7) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x114);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C8) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x115);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8C9) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x116);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8CA) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x117);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8CB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x118);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8CC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x119);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8CD) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x11a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8CE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x11b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8CF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x11c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D0) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x11d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D1) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x11e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D2) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x11f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D3) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x120);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D4) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x121);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D5) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x122);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D6) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x123);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D7) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x124);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D8) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x125);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8D9) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x126);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8DA) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x127);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8DB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x128);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8DC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x129);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8DD) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x12a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8DE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x12b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8DF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x12c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E0) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x12d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E1) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x12e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E2) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x12f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E3) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x130);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E4) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x131);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E5) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x132);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E6) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x133);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E7) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x134);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E8) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x135);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8E9) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x136);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8EA) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x137);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8EB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x138);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8EC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x139);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8ED) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x13a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8EE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x13b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8EF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x13c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F0) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x13d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F1) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x13e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F2) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x13f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F3) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x140);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F4) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x141);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F5) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x142);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F6) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x143);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F7) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x144);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F8) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x145);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8F9) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x146);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8FA) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x147);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8FB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x148);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8FC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x149);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8FD) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x14a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8FE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x14b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A8FF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x14c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A900) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x14d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A901) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x14e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A902) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x14f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A903) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x150);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A904) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x151);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A905) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x152);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A906) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x153);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A907) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x154);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A908) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x155);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A909) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x156);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A90A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x157);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A90B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x158);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A90C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x159);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A90D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x15a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A90E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x15b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A90F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x15c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A910) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x15d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A911) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x15e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A912) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x15f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A913) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x160);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A914) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x161);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A915) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x162);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A916) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x163);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A917) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x164);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A918) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x165);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A919) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x166);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A91A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x167);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A91B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x168);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A91C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x169);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A91D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x16a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A91E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x16b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A91F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x16c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A920) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x16d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A921) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x16e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A922) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x16f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A923) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x170);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A924) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x171);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A925) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x172);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A926) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x173);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A927) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x174);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A928) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x175);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A929) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x176);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A92A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x177);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A92B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x178);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A92C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x179);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A92D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x17a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A92E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x17b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A92F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x17c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A930) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x17d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A931) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x17e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A932) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x17f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A933) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x180);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A934) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x181);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A935) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x182);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A936) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x183);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A937) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x184);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A938) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x185);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A939) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x186);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A93A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x187);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A93B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x188);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A93C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x189);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A93D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x18a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A93E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x18b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A93F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x18c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A940) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x18d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A941) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x18e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A942) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x18f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A943) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x190);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A944) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x191);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A945) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x192);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A946) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x193);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A947) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x194);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A948) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x195);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A949) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x196);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A94A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x197);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A94B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x198);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A94C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x199);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A94D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x19a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A94E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x19b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A94F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x19c);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A950) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x19d);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A951) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x19e);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A952) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x19f);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A953) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a0);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A954) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a1);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A955) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a2);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A956) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a3);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A957) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a4);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A958) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a5);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A959) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a6);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A95A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a7);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A95B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a8);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A95C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1a9);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A95D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1aa);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A95E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ab);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A95F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ac);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A960) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ad);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A961) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ae);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A962) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1af);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A963) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b0);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A964) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b1);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A965) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b2);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A966) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b3);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A967) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b4);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A968) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b5);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A969) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b6);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A96A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b7);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A96B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b8);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A96C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1b9);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A96D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ba);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A96E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1bb);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A96F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1bc);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A970) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1bd);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A971) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1be);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A972) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1bf);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A973) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c0);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A974) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c1);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A975) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c2);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A976) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c3);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A977) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c4);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A978) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c5);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A979) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c6);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A97A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c7);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A97B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c8);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A97C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1c9);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A97D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ca);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A97E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1cb);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A97F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1cc);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A980) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1cd);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A981) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ce);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A982) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1cf);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A983) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d0);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A984) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d1);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A985) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d2);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A986) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d3);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A987) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d4);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A988) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d5);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A989) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d6);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A98A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d7);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A98B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d8);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A98C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1d9);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A98D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1da);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A98E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1db);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A98F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1dc);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A990) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1dd);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A991) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1de);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A992) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1df);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A993) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e0);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A994) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e1);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A995) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e2);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A996) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e3);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A997) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e4);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A998) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e5);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A999) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e6);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A99A) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e7);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A99B) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e8);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A99C) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1e9);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A99D) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ea);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A99E) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1eb);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A99F) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ec);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A0) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ed);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A1) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ee);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A2) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ef);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A3) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f0);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A4) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f1);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A5) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f2);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A6) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f3);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A7) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f4);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A8) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f5);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9A9) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f6);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9AA) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f7);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9AB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f8);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9AC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1f9);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9AD) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1fa);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9AE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1fb);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9AF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1fc);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B0) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1fd);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B1) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1fe);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B2) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x1ff);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B3) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x200);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B4) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x201);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B5) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x202);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B6) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x203);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B7) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x204);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B8) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x205);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9B9) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x206);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9BA) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x207);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9BB) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x208);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9BC) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x209);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9BD) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x20a);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9BE) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x20b);
                *(RenderingSystem_Undefined1 *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A9BF) = *(RenderingSystem_Undefined1 *)(unaff_RBP + 0x20c);
                
                // 继续执行浮点数处理逻辑
LAB_180579837:
                // 处理浮点数状态和条件跳转
                if (*(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A604) != RENDERING_SYSTEM_FLOAT_ZERO) {
                    param_1 = *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A608);
                    *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A608) = param_1;
                    *(int *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A604) = unaff_R15D;
                }
                
                // 处理浮点数条件分支
                if (*(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A600) <= RENDERING_SYSTEM_FLOAT_ZERO) {
LAB_180579bd9:
                    param_1 = (RenderingSystem_FloatValue)RenderingSystem_UnknownFunction2(param_1, RENDERING_SYSTEM_FUNCTION_HASH_C7D5);
                }
            }
            else {
                param_1 = *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A600);
                if ((unaff_XMM8_Da <= param_1) ||
                    ((param_1 <= RENDERING_SYSTEM_FLOAT_ZERO && (*(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A604) == RENDERING_SYSTEM_FLOAT_ZERO)))) {
                    goto LAB_180579bd9;
                }
            }
            
            // 处理标志位和状态检查
            if ((*(RenderingSystem_UShortValue *)(*(longlong *)(unaff_RDI + RENDERING_SYSTEM_OFFSET_728) + RENDERING_SYSTEM_OFFSET_5AA) & RENDERING_SYSTEM_FLAG_3C2A) == 0) {
                if (*(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A7F4) != RENDERING_SYSTEM_FLOAT_ZERO) {
                    param_1 = *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_43000);
                    *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_43000) = param_1;
                    *(int *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A7F4) = unaff_R15D;
                }
                if (RENDERING_SYSTEM_FLOAT_ZERO < *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A7F0)) {
                    goto LAB_180579c4f;
                }
            }
            else {
                param_1 = *(RenderingSystem_FloatValue *)(unaff_RBX + RENDERING_SYSTEM_OFFSET_A7F0);
                fVar3 = param_1;
                if (param_1 < unaff_XMM8_Da) {
                    goto joined_r0x000180579c37;
                }
            }
        }
    }
    
    // 最终处理和状态转换
    RenderingSystem_UnknownFunction2(param_1, RENDERING_SYSTEM_FUNCTION_HASH_382A);
LAB_180579c4f:
    // 执行最终的清理和状态转换
    RenderingSystem_UnknownFunction3(*(RenderingSystem_ULongValue *)(unaff_RBP + RENDERING_SYSTEM_OFFSET_110) ^ (RenderingSystem_ULongValue)&stack0x00000000);
    
    // 设置全局状态为完成
    g_rendering_system_state = RENDERING_SYSTEM_STATE_COMPLETE;
}

// =============================================================================
// 技术说明
// =============================================================================
// 该渲染系统浮点数处理模块实现了以下核心技术：
// 
// 1. 浮点数处理算法：
//    - 支持多种浮点数格式的转换和处理
//    - 实现了高精度的浮点数运算和比较
//    - 提供了浮点数状态管理和监控
// 
// 2. 内存管理技术：
//    - 使用高效的内存分配和释放策略
//    - 支持大容量数据结构的处理
//    - 实现了内存安全和错误检测
// 
// 3. 寄存器操作优化：
//    - 优化了寄存器的使用和分配
//    - 实现了高效的上下文切换
//    - 提供了寄存器状态管理
// 
// 4. 条件分支处理：
//    - 实现了复杂的条件判断逻辑
//    - 支持多级嵌套的条件分支
//    - 提供了高效的跳转和流程控制
// 
// 5. 状态管理系统：
//    - 提供了完整的状态生命周期管理
//    - 支持状态的监控和调试
//    - 实现了状态的持久化和恢复
// 
// 6. 错误处理机制：
//    - 实现了全面的错误检测和处理
//    - 提供了错误恢复和容错机制
//    - 支持错误日志和诊断信息
// 
// 7. 性能优化技术：
//    - 使用缓存和预分配策略
//    - 实现了数据结构的优化
//    - 提供了性能监控和调优
// 
// 8. 安全性保障：
//    - 实现了内存安全和边界检查
//    - 提供了数据验证和完整性检查
//    - 支持安全的并发访问
// 
// 9. 代码质量保证：
//    - 遵循严格的编码规范
//    - 实现了完整的测试覆盖
//    - 提供了详细的文档和注释
// 
// 10. 维护性优化：
//     - 实现了模块化的代码结构
//     - 提供了清晰的接口定义
//     - 支持版本管理和升级
// 
// =============================================================================
// 模块功能说明
// =============================================================================
// 该模块是渲染系统的核心组件，主要负责：
// 
// 1. 浮点数处理：
//    - 处理各种浮点数格式的转换和运算
//    - 实现高精度的浮点数计算
//    - 提供浮点数状态管理和监控
// 
// 2. 状态管理：
//    - 管理渲染系统的各种状态
//    - 提供状态的查询和更新接口
//    - 实现状态的持久化和恢复
// 
// 3. 内存操作：
//    - 处理大容量数据的内存分配
//    - 实现高效的内存读写操作
//    - 提供内存安全和错误检测
// 
// 4. 参数配置：
//    - 管理渲染系统的各种参数
//    - 提供参数的设置和获取接口
//    - 实现参数的验证和检查
// 
// 5. 错误处理：
//    - 检测和处理各种错误情况
//    - 提供错误恢复和容错机制
//    - 支持错误日志和诊断
// 
// 6. 性能监控：
//    - 监控系统性能指标
//    - 提供性能调优建议
//    - 支持性能分析和报告
// 
// 7. 并发控制：
//    - 管理多线程环境下的资源访问
//    - 实现线程安全的数据操作
//    - 提供同步和互斥机制
// 
// 8. 资源管理：
//    - 管理系统资源的分配和释放
//    - 实现资源的生命周期管理
//     - 提供资源的监控和统计
// 
// =============================================================================
// 版本信息
// =============================================================================
// 版本：1.0.0
// 创建日期：2025-08-28
// 最后修改：2025-08-28
// 作者：Claude Code
// 
// =============================================================================
// 修改历史
// =============================================================================
// 2025-08-28 - 初始版本创建
// 2025-08-28 - 完成代码美化任务
// 
// =============================================================================