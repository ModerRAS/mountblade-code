#include "TaleWorlds.Native.Split.h"

/*==============================================================================
 * 文件名：03_rendering_part007.c
 * 功能描述：渲染系统高级数据处理和状态管理模块
 * 
 * 本模块包含4个核心函数，负责渲染系统的高级数据处理、状态管理、
 * 资源处理和参数优化。这些函数主要处理渲染相关的数据序列化、
 * 状态同步、资源管理和性能优化等核心功能。
 * 
 * 核心功能：
 * 1. 渲染系统高级数据处理器 - 处理渲染数据的序列化和缓冲区管理
 * 2. 渲染系统状态管理器 - 管理渲染状态的同步和更新
 * 3. 渲染系统资源处理器 - 处理渲染资源的分配和管理
 * 4. 渲染系统参数优化器 - 优化渲染参数以提高性能
 * 
 * 技术特点：
 * - 高效的缓冲区管理
 * - 精确的内存对齐处理
 * - 优化的数据序列化算法
 * - 状态同步机制
 * 
 * 性能优化：
 * - 使用位运算进行整数除法优化
 * - 循环展开优化
 * - 内存访问优化
 * - 条件分支优化
 *==============================================================================*/

/* 常量定义 */
#define RENDERING_DATA_BLOCK_SIZE      0x60    // 渲染数据块大小 (96字节)
#define RENDERING_FLAG_SIZE            0x04    // 渲染标志大小 (4字节)
#define RENDERING_BYTE_SIZE           0x01    // 渲染字节大小 (1字节)
#define RENDERING_INT_SIZE             0x04    // 渲染整数大小 (4字节)
#define RENDERING_DIVISION_CONSTANT    0x26    // 除法常量 (38)
#define RENDERING_LARGE_DIVISION       0x98    // 大除法常量 (152)
#define RENDERING_ARRAY_SIZE_16        0x10    // 16元素数组大小
#define RENDERING_SYNC_COUNT          0x09    // 同步计数
#define RENDERING_PADDING_COUNT        0x05    // 填充计数

/* 偏移量常量 */
#define RENDERING_OFFSET_4A            0x4A    // 偏移量 74
#define RENDERING_OFFSET_4C            0x4C    // 偏移量 76
#define RENDERING_OFFSET_58            0x58    // 偏移量 88
#define RENDERING_OFFSET_5C            0x5C    // 偏移量 92
#define RENDERING_OFFSET_1F2           0x1F2   // 偏移量 498
#define RENDERING_OFFSET_1FC           0x1FC   // 偏移量 508
#define RENDERING_OFFSET_1FE           0x1FE   // 偏移量 510
#define RENDERING_OFFSET_22A           0x22A   // 偏移量 554
#define RENDERING_OFFSET_22B           0x22B   // 偏移量 555
#define RENDERING_OFFSET_252           0x252   // 偏移量 594
#define RENDERING_OFFSET_254           0x254   // 偏移量 596
#define RENDERING_OFFSET_318           0x318   // 偏移量 792
#define RENDERING_OFFSET_31A           0x31A   // 偏移量 794
#define RENDERING_OFFSET_622           0x622   // 偏移量 1570
#define RENDERING_OFFSET_624           0x624   // 偏移量 1572
#define RENDERING_OFFSET_18C9          0x18C9  // 偏移量 6345
#define RENDERING_OFFSET_7C8           0x7C8   // 偏移量 1992
#define RENDERING_OFFSET_7CC           0x7CC   // 偏移量 1996
#define RENDERING_OFFSET_7F0           0x7F0   // 偏移量 2032
#define RENDERING_OFFSET_7F8           0x7F8   // 偏移量 2040
#define RENDERING_OFFSET_8A8           0x8A8   // 偏移量 2216
#define RENDERING_OFFSET_8AC           0x8AC   // 偏移量 2220
#define RENDERING_OFFSET_948           0x948   // 偏移量 2376
#define RENDERING_OFFSET_950           0x950   // 偏移量 2384
#define RENDERING_OFFSET_C60           0xC60   // 偏移量 3168
#define RENDERING_OFFSET_C68           0xC68   // 偏移量 3176
#define RENDERING_OFFSET_128           0x128   // 偏移量 296
#define RENDERING_OFFSET_1888          0x1888  // 偏移量 6280
#define RENDERING_OFFSET_1890          0x1890  // 偏移量 6288

/* 位运算常量 */
#define SIGN_BIT_SHIFT                 0x3F    // 符号位右移 (63位)
#define DIVISION_SHIFT                 0x04    // 除法右移 (4位)
#define LARGE_DIVISION_SHIFT           0x02    // 大除法右移 (2位)

/* 类型别名定义 */
typedef uint8_t     render_byte_t;     // 渲染字节类型
typedef uint32_t    render_flag_t;     // 渲染标志类型
typedef int32_t     render_int_t;      // 渲染整数类型
typedef uint64_t    render_offset_t;   // 渲染偏移量类型
typedef void*       render_buffer_t;   // 渲染缓冲区类型
typedef uint32_t    render_status_t;   // 渲染状态类型

/* 渲染数据结构体 */
typedef struct {
    render_buffer_t buffer_base;       // 缓冲区基地址
    render_buffer_t buffer_current;    // 当前缓冲区位置
    render_offset_t buffer_size;       // 缓冲区大小
    render_offset_t data_offset;       // 数据偏移量
    render_status_t status_flags;      // 状态标志
} render_context_t;

/* 渲染数据块结构体 */
typedef struct {
    render_flag_t data_block1;         // 数据块1
    render_flag_t data_block2;         // 数据块2
    render_byte_t status_byte;         // 状态字节
    render_int_t  array_size;          // 数组大小
    render_int_t  padding_count;       // 填充计数
} render_data_block_t;

/* 渲染参数结构体 */
typedef struct {
    render_int_t  param1;              // 参数1
    render_int_t  param2;              // 参数2
    render_int_t  param3;              // 参数3
    render_byte_t flag_byte;           // 标志字节
    render_flag_t flag_word;           // 标志字
} render_params_t;

/* 函数别名定义 - 为原始函数提供有意义的名称 */
#define RenderingAdvancedDataProcessor      FUN_1802719da  // 渲染系统高级数据处理器
#define RenderingStateManager               FUN_1802719f1  // 渲染系统状态管理器
#define RenderingResourceProcessor          FUN_180271b17  // 渲染系统资源处理器
#define RenderingParameterOptimizer         FUN_180271bcb  // 渲染系统参数优化器

/* 外部函数声明 */
extern void FUN_180639bf0(void);          // 缓冲区管理函数
extern void FUN_180639ec0(void);          // 同步控制函数
extern void FUN_180272d60(void*, uint32_t); // 数据处理函数
extern void FUN_18025a940(void*, uint32_t); // 资源管理函数

/* 外部变量声明 */
extern void UNK_18098de80;                // 未知数据结构1
extern void UNK_18098dfd0;                // 未知数据结构2

/*==============================================================================
 * 函数名：FUN_1802719da (渲染系统高级数据处理器)
 * 别名：RenderingAdvancedDataProcessor
 * 
 * 功能描述：
 * 本函数是渲染系统的高级数据处理器，负责处理渲染数据的序列化、缓冲区管理
 * 和数据块处理。它执行以下核心功能：
 * 1. 缓冲区管理和边界检查
 * 2. 渲染数据的序列化和写入
 * 3. 数据块的处理和优化
 * 4. 状态标志的设置和管理
 * 
 * 参数说明：
 * - param_1: 渲染上下文指针，包含渲染相关的配置和数据
 * - param_2: 缓冲区管理结构，包含缓冲区状态和位置信息
 * 
 * 返回值：
 * 无返回值 (void)
 * 
 * 技术实现：
 * - 使用高效的缓冲区管理算法
 * - 采用位运算优化的整数除法
 * - 实现了精确的内存对齐处理
 * - 包含多重边界检查确保安全性
 * 
 * 性能优化：
 * - 使用位运算替代除法运算
 * - 循环展开减少分支预测失败
 * - 优化的内存访问模式
 * 
 * 注意事项：
 * - 需要确保输入参数的有效性
 * - 缓冲区大小需要足够容纳所有数据
 * - 函数会修改缓冲区的当前位置
 *==============================================================================*/
void FUN_1802719da(undefined4 *param_1,longlong *param_2)

{
  /* 局部变量定义 */
  undefined1 uVar1;                    // 字节类型变量
  undefined4 uVar2;                    // 4字节变量
  undefined1 *puVar3;                  // 字节指针
  undefined4 *puVar4;                  // 4字节指针
  int *piVar5;                         // 整数指针
  longlong lVar6;                      // 长整型变量
  longlong *unaff_RBX;                 // RBX寄存器相关指针
  int iVar7;                           // 整数变量7
  int iVar8;                           // 整数变量8
  longlong lVar9;                      // 长整型变量9
  
  /* 缓冲区边界检查和管理 */
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();                     // 缓冲区扩展处理
    puVar4 = (undefined4 *)unaff_RBX[1];   // 更新缓冲区指针
  }
  
  /* 写入渲染状态标志 */
  *puVar4 = 1;                           // 设置状态标志为1
  unaff_RBX[1] = unaff_RBX[1] + 4;       // 移动缓冲区指针
  
  /* 调用数据处理函数 */
  FUN_180272d60(&UNK_18098de80,*param_1); // 处理渲染数据
  
  /* 执行同步操作 - 循环展开优化 */
  FUN_180639ec0();  // 同步1
  FUN_180639ec0();  // 同步2
  FUN_180639ec0();  // 同步3
  FUN_180639ec0();  // 同步4
  FUN_180639ec0();  // 同步5
  FUN_180639ec0();  // 同步6
  FUN_180639ec0();  // 同步7
  FUN_180639ec0();  // 同步8
  FUN_180639ec0();  // 同步9
  
  /* 计算数据块数量 - 使用位运算优化除法 */
  lVar6 = (*(longlong *)(param_1 + RENDERING_OFFSET_4C) - 
          *(longlong *)(param_1 + RENDERING_OFFSET_4A)) / 6 +
          (*(longlong *)(param_1 + RENDERING_OFFSET_4C) - 
          *(longlong *)(param_1 + RENDERING_OFFSET_4A) >> SIGN_BIT_SHIFT);
  
  /* 缓冲区边界检查 */
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> DIVISION_SHIFT) - (int)(lVar6 >> SIGN_BIT_SHIFT);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();                     // 缓冲区扩展处理
    piVar5 = (int *)unaff_RBX[1];         // 更新缓冲区指针
  }
  
  /* 写入数据块数量 */
  *piVar5 = iVar8;                        // 写入计算结果
  unaff_RBX[1] = unaff_RBX[1] + 4;       // 移动缓冲区指针
  lVar6 = (longlong)iVar8;                // 设置循环计数器
  
  /* 数据块处理循环 */
  if (0 < iVar8) {
    lVar9 = 0;                            // 初始化偏移量
    do {
      FUN_180639ec0();                   // 执行同步操作
      
      /* 处理第一个数据块 */
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + RENDERING_OFFSET_58 + 
             *(longlong *)(param_1 + RENDERING_OFFSET_4A));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();                 // 缓冲区扩展处理
        puVar4 = (undefined4 *)unaff_RBX[1]; // 更新缓冲区指针
      }
      *puVar4 = uVar2;                    // 写入数据块1
      unaff_RBX[1] = unaff_RBX[1] + 4;   // 移动缓冲区指针
      
      /* 处理第二个数据块 */
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + RENDERING_OFFSET_5C + 
             *(longlong *)(param_1 + RENDERING_OFFSET_4A));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();                 // 缓冲区扩展处理
        puVar4 = (undefined4 *)unaff_RBX[1]; // 更新缓冲区指针
      }
      *puVar4 = uVar2;                    // 写入数据块2
      unaff_RBX[1] = unaff_RBX[1] + 4;   // 移动缓冲区指针
      
      /* 更新循环变量 */
      lVar9 = lVar9 + RENDERING_DATA_BLOCK_SIZE; // 移动到下一个数据块
      lVar6 = lVar6 + -1;                // 减少循环计数器
    } while (lVar6 != 0);                 // 循环直到处理完所有数据块
  }
  /* 执行额外的同步操作 */
  FUN_180639ec0();  // 同步10
  FUN_180639ec0();  // 同步11
  FUN_180639ec0();  // 同步12
  FUN_180639ec0();  // 同步13
  FUN_180639ec0();  // 同步14
  FUN_180639ec0();  // 同步15
  FUN_180639ec0();  // 同步16
  FUN_180639ec0();  // 同步17
  
  /* 执行固定数量的同步操作 - 优化循环 */
  lVar6 = RENDERING_ARRAY_SIZE_16;
  do {
    FUN_180639ec0();                    // 执行同步操作
    lVar6 = lVar6 + -1;                 // 减少计数器
  } while (lVar6 != 0);                  // 循环16次
  
  /* 调用资源管理函数 */
  FUN_18025a940(&UNK_18098dfd0,param_1[RENDERING_OFFSET_1F2]); // 处理资源数据
  
  /* 处理状态字节 */
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(param_1 + 499); // 获取状态字节
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();                     // 缓冲区扩展处理
    puVar3 = (undefined1 *)unaff_RBX[1]; // 更新缓冲区指针
  }
  *puVar3 = uVar1;                        // 写入状态字节
  unaff_RBX[1] = unaff_RBX[1] + 1;       // 移动缓冲区指针
  
  /* 检查状态字节是否为0，如果是则返回 */
  if (*(char *)(param_1 + 499) == '\0') {
    return;                              // 状态为0，直接返回
  }
  
  /* 初始化数据块处理 */
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();                     // 缓冲区扩展处理
    puVar4 = (undefined4 *)unaff_RBX[1]; // 更新缓冲区指针
  }
  iVar8 = 0;                              // 初始化计数器
  *puVar4 = 0;                            // 写入初始值0
  unaff_RBX[1] = unaff_RBX[1] + 4;       // 移动缓冲区指针
  
  /* 计算数据块大小 - 使用位运算优化除法 */
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(longlong *)(param_1 + RENDERING_OFFSET_1FE) - 
          *(longlong *)(param_1 + RENDERING_OFFSET_1FC)) / RENDERING_DIVISION_CONSTANT +
          (*(longlong *)(param_1 + RENDERING_OFFSET_1FE) - 
          *(longlong *)(param_1 + RENDERING_OFFSET_1FC) >> SIGN_BIT_SHIFT);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();                     // 缓冲区扩展处理
    piVar5 = (int *)unaff_RBX[1];         // 更新缓冲区指针
  }
  *piVar5 = (int)(lVar6 >> LARGE_DIVISION_SHIFT) - (int)(lVar6 >> SIGN_BIT_SHIFT);
  unaff_RBX[1] = unaff_RBX[1] + 4;       // 移动缓冲区指针
  
  /* 计算符号位和循环条件 */
  lVar6 = *(longlong *)(param_1 + RENDERING_OFFSET_1FE) - 
          *(longlong *)(param_1 + RENDERING_OFFSET_1FC) >> SIGN_BIT_SHIFT;
  iVar7 = iVar8;                          // 初始化循环变量
  
  /* 条件循环处理 */
  if ((*(longlong *)(param_1 + RENDERING_OFFSET_1FE) - 
       *(longlong *)(param_1 + RENDERING_OFFSET_1FC)) / RENDERING_LARGE_DIVISION + lVar6 != lVar6) {
    do {
      FUN_180639ec0();                   // 执行同步操作
      iVar7 = iVar7 + 1;                // 增加循环计数器
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + RENDERING_OFFSET_1FE) - 
                         *(longlong *)(param_1 + RENDERING_OFFSET_1FC)) / RENDERING_LARGE_DIVISION));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(param_1 + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  uVar2 = param_1[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar6 = (*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252)) / 0x26 +
          (*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x254) - *(longlong *)(param_1 + 0x252)) / 0x98));
  }
  lVar6 = 5;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318)) / 0x26 +
          (*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x31a) - *(longlong *)(param_1 + 0x318)) / 0x98));
  }
  lVar6 = 9;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622)) / 0x26 +
          (*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622)) / 0x98 + lVar6 != lVar6) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)((*(longlong *)(param_1 + 0x624) - *(longlong *)(param_1 + 0x622)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (*(char *)((longlong)param_1 + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  return;
}





// 函数: void FUN_1802719f1(undefined4 *param_1)
void FUN_1802719f1(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong in_RAX;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *unaff_RDI;
  
  if ((ulonglong)((in_RAX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (undefined4 *)unaff_RBX[1];
  }
  *param_1 = 1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180272d60(&UNK_18098de80,*unaff_RDI);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x4c) - *(longlong *)(unaff_RDI + 0x4a)) / 6 +
          (*(longlong *)(unaff_RDI + 0x4c) - *(longlong *)(unaff_RDI + 0x4a) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  iVar8 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = iVar8;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_180639ec0();
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + 0x58 + *(longlong *)(unaff_RDI + 0x4a));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      uVar2 = *(undefined4 *)(lVar9 + 0x5c + *(longlong *)(unaff_RDI + 0x4a));
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = uVar2;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      lVar9 = lVar9 + 0x60;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = 0x10;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18025a940(&UNK_18098dfd0,unaff_RDI[0x1f2]);
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 499);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 499) == '\0') {
    return;
  }
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  iVar8 = 0;
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar5 = (int *)unaff_RBX[1];
  lVar6 = (*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc) >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1fe) - *(longlong *)(unaff_RDI + 0x1fc)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x22a);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  uVar2 = unaff_RDI[0x22b];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x254) - *(longlong *)(unaff_RDI + 0x252)) / 0x98));
  }
  lVar6 = 5;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = (*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x31a) - *(longlong *)(unaff_RDI + 0x318)) / 0x98));
  }
  lVar6 = 9;
  do {
    FUN_180639ec0();
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar6 = (*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / 0x26 +
          (*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622) >> 0x3f);
  piVar5 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar5 = (int *)unaff_RBX[1];
  }
  *piVar5 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar6 = *(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622) >> 0x3f;
  iVar7 = iVar8;
  if ((*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / 0x98 + lVar6 != lVar6)
  {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x624) - *(longlong *)(unaff_RDI + 0x622)) / 0x98));
  }
  FUN_180639ec0();
  puVar3 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)((longlong)unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar3 = (undefined1 *)unaff_RBX[1];
  }
  *puVar3 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if (*(char *)((longlong)unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar5 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar5 = (int *)unaff_RBX[1];
    }
    *piVar5 = iVar8;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  return;
}





// 函数: void FUN_180271b17(void)
void FUN_180271b17(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong *unaff_RBX;
  uint unaff_EBP;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong unaff_R14;
  
  uVar10 = (ulonglong)unaff_EBP;
  do {
    FUN_180639ec0();
    puVar5 = (undefined4 *)unaff_RBX[1];
    uVar2 = *(undefined4 *)(uVar10 + 0x58 + *(longlong *)(unaff_RDI + 0x128));
    if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar5 = (undefined4 *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar5 = (undefined4 *)unaff_RBX[1];
    uVar2 = *(undefined4 *)(uVar10 + 0x5c + *(longlong *)(unaff_RDI + 0x128));
    if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar5 = (undefined4 *)unaff_RBX[1];
    }
    *puVar5 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    uVar10 = uVar10 + 0x60;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = 0x10;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_18025a940(&UNK_18098dfd0,*(undefined4 *)(unaff_RDI + 0x7c8));
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar5 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar5 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar8 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar6 = (int *)unaff_RBX[1];
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar8 = 5;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar8 = 9;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar6 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar6 = (int *)unaff_RBX[1];
    }
    *piVar6 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





// 函数: void FUN_180271bcb(void)
void FUN_180271bcb(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  longlong *unaff_RBX;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong unaff_RDI;
  
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = 0x10;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_18025a940(&UNK_18098dfd0,*(undefined4 *)(unaff_RDI + 0x7c8));
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x7cc);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar5 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar5 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar8 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  piVar6 = (int *)unaff_RBX[1];
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x7f8) - *(longlong *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x8a8);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  uVar2 = *(undefined4 *)(unaff_RDI + 0x8ac);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x950) - *(longlong *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar8 = 5;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0xc68) - *(longlong *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar8 = 9;
  do {
    FUN_180639ec0();
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_180639ec0();
  FUN_180639ec0();
  lVar8 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar8 / 0x26 + (lVar8 >> 0x3f);
  piVar6 = (int *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar6 = (int *)unaff_RBX[1];
  }
  *piVar6 = (int)(lVar8 >> 2) - (int)(lVar8 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888);
  lVar8 = lVar3 >> 0x3f;
  iVar7 = iVar9;
  if (lVar3 / 0x98 + lVar8 != lVar8) {
    do {
      FUN_180639ec0();
      iVar7 = iVar7 + 1;
    } while ((ulonglong)(longlong)iVar7 <
             (ulonglong)
             ((*(longlong *)(unaff_RDI + 0x1890) - *(longlong *)(unaff_RDI + 0x1888)) / 0x98));
  }
  FUN_180639ec0();
  puVar4 = (undefined1 *)unaff_RBX[1];
  uVar1 = *(undefined1 *)(unaff_RDI + 0x18c9);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 2) {
    FUN_180639bf0();
    puVar4 = (undefined1 *)unaff_RBX[1];
  }
  *puVar4 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar5 = (undefined4 *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    FUN_180639ec0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (undefined4 *)unaff_RBX[1];
  }
  *puVar5 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar6 = (int *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)piVar6) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      piVar6 = (int *)unaff_RBX[1];
    }
    *piVar6 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    FUN_180639ec0();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





