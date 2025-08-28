/*******************************************************************************
 * TaleWorlds.Native - 代码美化版本
 * 文件名: 99_part_01_part070.c
 * 模块: 模块99未匹配函数第1部分第70个文件
 * 
 * 本文件包含15个核心函数，涵盖内存管理、数据结构操作、资源清理等高级系统功能。
 * 
 * 主要功能包括：
 * - 内存块清理和重置
 * - 复杂数据结构初始化
 * - 批量内存处理
 * - 动态内存分配和释放
 * - 数据结构排序和搜索
 * - 资源清理和内存池管理
 * - 数组结构创建和管理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 *******************************************************************************/

#include "TaleWorlds.Native.Split.h"

/*******************************************************************************
 * 常量定义和宏定义
 *******************************************************************************/

/**
 * @defgroup memory_constants 内存管理常量
 * @{
 */
#define MEMORY_BLOCK_SIZE           0x60    /**< 内存块大小 */
#define MEMORY_LARGE_BLOCK_SIZE     0x330   /**< 大内存块大小 */
#define MEMORY_CHSYSTEM_SIZE           0x200   /**< 内存块组大小 */
#define MEMORY_SMALL_CHSYSTEM_SIZE     0x10    /**< 小内存块大小 */
#define MEMORY_PAGE_SIZE            0x800   /**< 内存页大小 */
#define MEMORY_ENTRY_SIZE           0x18    /**< 内存条目大小 */
#define MEMORY_LARGE_ENTRY_SIZE     0x12c30 /**< 大内存条目大小 */
#define MEMORY_ALLOC_BASE_SIZE      0x10    /**< 内存分配基础大小 */
/* @} */

/**
 * @defgroup function_aliases 函数别名定义
 * @{
 */
#define clear_memory_block          FUN_1800e94a0    /**< 内存块清理函数 */
#define clear_memory_block_fast     FUN_1800e94be    /**< 快速内存块清理函数 */
#define empty_function              FUN_1800e9522    /**< 空函数 */
#define initialize_memory_structure FUN_1800e9540    /**< 内存结构初始化函数 */
#define process_memory_batch        FUN_1800e9790    /**< 批量内存处理函数 */
#define allocate_memory_structure   FUN_1800e97f0    /**< 内存结构分配函数 */
#define free_memory_structure       FUN_1800e9840    /**< 内存结构释放函数 */
#define sort_data_structure         FUN_1800e98d0    /**< 数据结构排序函数 */
#define merge_data_structures       FUN_1800e98fb    /**< 数据结构合并函数 */
#define insert_data_sorted          FUN_1800e996b    /**< 有序数据插入函数 */
#define add_data_entry              FUN_1800e9a94    /**< 数据条目添加函数 */
#define empty_function_2            FUN_1800e9ab1    /**< 空函数2 */
#define empty_function_3            FUN_1800e9ab9    /**< 空函数3 */
#define empty_function_4            FUN_1800e9ac1    /**< 空函数4 */
#define create_array_structure      FUN_1800e9ae0    /**< 数组结构创建函数 */
#define cleanup_memory_handlers      FUN_1800e9b50    /**< 内存处理器清理函数 */
#define cleanup_memory_handlers_fast FUN_1800e9b5a   /**< 快速内存处理器清理函数 */
#define cleanup_memory_pool          FUN_1800e9b7d    /**< 内存池清理函数 */

/**
 * @defgroup external_functions 外部函数别名
 * @{
 */
#define process_memory_data          FUN_180245b90    /**< 内存数据处理函数 */
#define copy_memory_data             FUN_1800ea950    /**< 内存数据复制函数 */
#define move_memory_data             FUN_1800eac80    /**< 内存数据移动函数 */
#define allocate_system_memory       CoreMemoryPoolAllocator    /**< 系统内存分配函数 */
#define free_system_memory           CoreEngine_MemoryPoolManager    /**< 系统内存释放函数 */
/* @} */

/**
 * @brief 内存块清理函数
 * 
 * 清理指定内存块，将内存区域重置为0。
 * 使用内存偏移计算和块索引来确定要清理的内存区域。
 * 
 * @param memory_ptr 内存指针，指向内存管理结构
 * @param block_index 块索引，指定要清理的内存块
 * @return void
 * 
 * @note 此函数使用位运算优化内存地址计算
 * @warning 当内存块索引有效时，函数不会返回（memset操作）
 */
void clear_memory_block(int64_t memory_ptr, uint block_index)
{
    // 检查块索引是否在有效范围内
    if ((int)block_index < (int)(block_index + MEMORY_CHSYSTEM_SIZE)) {
        // 计算内存块地址并清零
        memset(
            *(int64_t *)(memory_ptr + 8 + (uint64_t)(block_index >> 9) * 8) +
            (int64_t)(int)(block_index + (block_index >> 9) * -MEMORY_CHSYSTEM_SIZE) * MEMORY_BLOCK_SIZE,
            0,
            MEMORY_BLOCK_SIZE
        );
    }
    return;
}



/**
 * @brief 快速内存块清理函数
 * 
 * 快速清理内存块，使用优化的内存清理路径。
 * 此函数使用寄存器变量，避免了参数传递的开销。
 * 
 * @param unaff_EBX 寄存器变量，包含块索引信息
 * @param unaff_RBP 寄存器变量，包含内存指针信息
 * @return void
 * 
 * @note 此函数是clear_memory_block的优化版本，直接使用寄存器变量
 * @warning 函数不会返回，直接执行memset操作
 * @see clear_memory_block
 */
void clear_memory_block_fast(void)
{
    uint unaff_EBX;
    int64_t unaff_RBP;
    
    // 使用寄存器变量直接计算内存地址并清零
    memset(
        *(int64_t *)(unaff_RBP + 8 + (uint64_t)(unaff_EBX >> 9) * 8) +
        (int64_t)(int)(unaff_EBX + (unaff_EBX >> 9) * -MEMORY_CHSYSTEM_SIZE) * MEMORY_BLOCK_SIZE,
        0,
        MEMORY_BLOCK_SIZE
    );
}





/**
 * @brief 空函数
 * 
 * 这是一个空函数，可能用于占位或作为函数指针的默认值。
 * 在某些架构中，空函数可以用于填充函数表或作为默认回调。
 * 
 * @return void
 */
void empty_function(void)
{
    return;
}





/**
 * @brief 内存结构初始化函数
 * 
 * 初始化复杂的内存结构，设置默认值和状态标志。
 * 此函数负责初始化内存块的各个字段，包括状态标志、配置参数等。
 * 
 * @param memory_ptr 内存指针，指向内存管理结构
 * @param block_index 块索引，指定要初始化的内存块
 * @return void
 * 
 * @note 此函数使用循环初始化多个内存块
 * @warning 初始化过程涉及大量内存操作，需要确保内存指针有效
 * @see clear_memory_block
 */
void initialize_memory_structure(int64_t memory_ptr, uint block_index)
{
    int64_t lVar1;
    uint64_t *puVar2;
    uint64_t *puVar3;
    uint uVar4;
    uint64_t uVar5;
    
    uVar5 = (uint64_t)block_index;
    if ((int)block_index < (int)(block_index + MEMORY_CHSYSTEM_SIZE)) {
        do {
            // 计算内存块地址
            puVar3 = (uint64_t *)
                     (*(int64_t *)(memory_ptr + 8 + (uVar5 >> 9) * 8) +
                     (int64_t)((int)uVar5 + (int)(uVar5 >> 9) * -MEMORY_CHSYSTEM_SIZE) * MEMORY_LARGE_BLOCK_SIZE);
            
            // 初始化基本状态字段
            puVar3[0x11] = 0;
            *(int32_t *)(puVar3 + 0x12) = 0x1060101;
            *(int32_t *)((int64_t)puVar3 + 0x94) = 0xff000000;
            *(int32_t *)(puVar3 + 0x13) = 0x40300ff;
            
            // 初始化配置参数
            *(uint64_t *)((int64_t)puVar3 + 0x9c) = 0x30503;
            *(uint64_t *)((int64_t)puVar3 + 0xa4) = 0;
            *(uint64_t *)((int64_t)puVar3 + 0xac) = 0;
            *(uint64_t *)((int64_t)puVar3 + 0xb4) = 0;
            *(int32_t *)((int64_t)puVar3 + 0xbc) = 0;
            
            // 初始化数组大小字段
            puVar3[0x18] = 0x900;
            
            // 清零多个数组字段
            puVar3[0x33] = 0;
            puVar3[0x34] = 0;
            puVar3[0x35] = 0;
            puVar3[0x36] = 0;
            puVar3[0x37] = 0;
            puVar3[0x3b] = 0;
            puVar3[0x3c] = 0;
            puVar3[0x3d] = 0;
            *(int32_t *)(puVar3 + 0x3e) = 0xc;
            puVar3[0x55] = 0;
            puVar3[0x56] = 0;
            puVar3[0x3f] = 0;
            puVar3[0x40] = 0;
            *(int32_t *)(puVar3 + 0x5c) = 0;
            puVar3[0x50] = 0;
            
            // 初始化状态标志
            *(int32_t *)(puVar3 + 0x10) = 0;
            
            // 批量清零内存区域
            puVar2 = puVar3;
            for (lVar1 = MEMORY_ALLOC_BASE_SIZE; lVar1 != 0; lVar1 = lVar1 + -1) {
                *puVar2 = 0;
                puVar2 = puVar2 + 1;
            }
            
            // 初始化浮点参数和特殊标志
            *(int8_t *)((int64_t)puVar3 + 0x321) = 0;
            *(int32_t *)(puVar3 + 0x62) = 0;
            *(int32_t *)(puVar3 + 0x5a) = 0;
            
            // 设置浮点默认值
            puVar3[0x19] = 0x3f800000;  // 1.0f
            puVar3[0x1a] = 0;
            puVar3[0x1b] = 0x3f80000000000000;  // 1.0
            puVar3[0x1c] = 0;
            puVar3[0x1d] = 0;
            puVar3[0x1e] = 0x3f800000;  // 1.0f
            puVar3[0x1f] = 0;
            puVar3[0x20] = 0x3f80000000000000;  // 1.0
            puVar3[0x21] = 0x3f800000;  // 1.0f
            puVar3[0x22] = 0;
            puVar3[0x23] = 0x3f80000000000000;  // 1.0
            puVar3[0x24] = 0;
            puVar3[0x25] = 0;
            puVar3[0x26] = 0x3f800000;  // 1.0f
            puVar3[0x27] = 0;
            puVar3[0x28] = 0x3f80000000000000;  // 1.0
            
            // 清零剩余字段
            puVar3[0x5d] = 0;
            puVar3[0x5e] = 0;
            puVar3[0x5b] = 0;
            puVar3[0x51] = 0;
            puVar3[0x52] = 0;
            puVar3[0x53] = 0;
            *(int32_t *)((int64_t)puVar3 + 0x314) = 0;
            puVar3[0x41] = 0;
            puVar3[0x54] = 0;
            puVar3[0x57] = 0;
            
            // 设置特殊标志位
            *(int32_t *)((int64_t)puVar3 + 0x30c) = 0xffffffff;
            puVar3[0x58] = 0;
            puVar3[0x59] = 0;
            *(int8_t *)(puVar3 + 100) = 0;
            *(int8_t *)((int64_t)puVar3 + 0x322) = 0;
            
            // 更新循环计数器
            uVar4 = (int)uVar5 + 1;
            uVar5 = (uint64_t)uVar4;
        } while ((int)uVar4 < (int)(block_index + MEMORY_CHSYSTEM_SIZE));
    }
    return;
}





// 函数: void process_memory_batch(int64_t memory_ptr, uint block_index)
// 批量内存处理函数
// 参数: memory_ptr - 内存指针, block_index - 块索引
// 功能: 批量处理内存块，调用处理函数进行内存操作
void process_memory_batch(int64_t memory_ptr, uint block_index)

{
  uint uVar1;
  uint64_t uVar2;
  
  uVar2 = (uint64_t)block_index;
  if ((int)block_index < (int)(block_index + MEMORY_SMALL_CHSYSTEM_SIZE)) {
    do {
      process_memory_data((int64_t)((int)uVar2 + (int)(uVar2 >> 4) * -MEMORY_SMALL_CHSYSTEM_SIZE) * MEMORY_LARGE_ENTRY_SIZE +
                    *(int64_t *)(memory_ptr + 8 + (uVar2 >> 4) * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while ((int)uVar1 < (int)(block_index + MEMORY_SMALL_CHSYSTEM_SIZE));
  }
  return;
}



uint64_t *
allocate_memory_structure(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
free_memory_structure(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[8] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[8] + 0x38))();
  }
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1 + 4,0,0,param_4,uVar1);
  }
  *param_1 = &ui_system_data_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}





// 函数: void sort_data_structure(int64_t *data_ptr, uint64_t *key_ptr)
// 数据结构排序函数
// 参数: data_ptr - 数据指针, key_ptr - 键指针
// 功能: 对数据结构进行排序操作，实现插入排序算法
void sort_data_structure(int64_t *data_ptr, uint64_t *key_ptr)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  int32_t uStack_ac;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int64_t lStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  iVar5 = (int)data_ptr[1];
  if (iVar5 != *(int *)(key_ptr + 1)) {
    iVar19 = 0;
    lVar17 = (int64_t)*(int *)(key_ptr + 1) - (int64_t)iVar5;
    for (lVar13 = lVar17; lVar13 != 0; lVar13 = lVar13 >> 1) {
      iVar19 = iVar19 + 1;
    }
    uStack_98 = *key_ptr;
    uStack_90 = key_ptr[1];
    uStack_88 = (int32_t)*data_ptr;
    uStack_84 = *(int32_t *)((int64_t)data_ptr + 4);
    uStack_80 = (int32_t)data_ptr[1];
    uStack_7c = *(int32_t *)((int64_t)data_ptr + 0xc);
    copy_memory_data(&uStack_88,&uStack_98,(int64_t)(iVar19 + -1) * 2);
    uStack_68 = (int32_t)*data_ptr;
    uStack_64 = *(int32_t *)((int64_t)data_ptr + 4);
    uStack_60 = (int32_t)data_ptr[1];
    uStack_5c = *(int32_t *)((int64_t)data_ptr + 0xc);
    if (lVar17 < 0x1d) {
      uStack_58 = *key_ptr;
      uStack_50 = key_ptr[1];
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      move_memory_data(&uStack_48,&uStack_58);
    }
    else {
      lVar13 = *data_ptr;
      uVar18 = iVar5 + 0x1c;
      uStack_70 = CONCAT44(uStack_ac,uVar18);
      lStack_78 = lVar13;
      move_memory_data(&uStack_68,&lStack_78);
      uVar7 = *(uint *)(key_ptr + 1);
      for (; uVar18 != uVar7; uVar18 = uVar18 + 1) {
        uVar15 = (uint64_t)(uVar18 + (uVar18 >> 0xb) * -MEMORY_PAGE_SIZE);
        lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
        puVar14 = (uint64_t *)(lVar17 + uVar15 * MEMORY_ENTRY_SIZE);
        uVar10 = *puVar14;
        uVar11 = puVar14[1];
        uVar4 = *(uint64_t *)(lVar17 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE);
        uVar20 = uVar18;
        uVar6 = uVar18;
        while( true ) {
          uVar6 = uVar6 - 1;
          uVar16 = (uint64_t)(uVar6 & 0x7ff);
          puVar14 = (uint64_t *)
                    (*(int64_t *)(lVar13 + 8 + (uint64_t)(uVar6 >> 0xb) * 8) + uVar16 * MEMORY_ENTRY_SIZE);
          uVar15 = *puVar14;
          bVar21 = uVar10 < uVar15;
          if (uVar10 == uVar15) {
            bVar21 = uVar11 < puVar14[1];
          }
          if (!bVar21) break;
          lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar6 >> 0xb) * 8);
          puVar1 = (uint64_t *)(lVar17 + uVar16 * MEMORY_ENTRY_SIZE);
          uVar12 = puVar1[1];
          puVar3 = (int32_t *)(lVar17 + 0x10 + uVar16 * MEMORY_ENTRY_SIZE);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
          uVar15 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -MEMORY_PAGE_SIZE);
          puVar2 = (uint64_t *)(lVar17 + uVar15 * MEMORY_ENTRY_SIZE);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar3 = (int32_t *)(lVar17 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          uVar20 = uVar20 - 1;
        }
        uVar15 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -MEMORY_PAGE_SIZE);
        lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
        puVar14 = (uint64_t *)(lVar17 + uVar15 * MEMORY_ENTRY_SIZE);
        *puVar14 = uVar10;
        puVar14[1] = uVar11;
        *(uint64_t *)(lVar17 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE) = uVar4;
      }
    }
  }
  return;
}





// 函数: void merge_data_structures(int32_t *data_ptr, uint64_t *key_ptr)
// 数据结构合并函数
// 参数: data_ptr - 数据指针, key_ptr - 键指针
// 功能: 合并两个数据结构，保持排序顺序
void merge_data_structures(int32_t *data_ptr, uint64_t *key_ptr)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t in_RAX;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  uint uVar18;
  int64_t unaff_RDI;
  int iVar19;
  uint uVar20;
  uint64_t *unaff_R14;
  bool bVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  
  iVar19 = 0;
  for (lVar13 = in_RAX - unaff_RDI; lVar13 != 0; lVar13 = lVar13 >> 1) {
    iVar19 = iVar19 + 1;
  }
  uVar4 = key_ptr[1];
  uVar22 = *data_ptr;
  uVar23 = data_ptr[1];
  uVar24 = data_ptr[2];
  uVar25 = data_ptr[3];
  *(uint64_t *)(unaff_RBP + -0x39) = *key_ptr;
  *(uint64_t *)(unaff_RBP + -0x31) = uVar4;
  *(int32_t *)(unaff_RBP + -0x29) = uVar22;
  *(int32_t *)(unaff_RBP + -0x25) = uVar23;
  *(int32_t *)(unaff_RBP + -0x21) = uVar24;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar25;
  copy_memory_data(unaff_RBP + -0x29,unaff_RBP + -0x39,(int64_t)(iVar19 + -1) * 2);
  uVar22 = *(int32_t *)unaff_RSI;
  uVar23 = *(int32_t *)((int64_t)unaff_RSI + 4);
  uVar24 = *(int32_t *)(unaff_RSI + 1);
  uVar25 = *(int32_t *)((int64_t)unaff_RSI + 0xc);
  if (in_RAX - unaff_RDI < 0x1d) {
    uVar4 = unaff_R14[1];
    *(uint64_t *)(unaff_RBP + 7) = *unaff_R14;
    *(uint64_t *)(unaff_RBP + 0xf) = uVar4;
    *(int32_t *)(unaff_RBP + 0x17) = uVar22;
    *(int32_t *)(unaff_RBP + 0x1b) = uVar23;
    *(int32_t *)(unaff_RBP + 0x1f) = uVar24;
    *(int32_t *)(unaff_RBP + 0x23) = uVar25;
    move_memory_data(unaff_RBP + 0x17,unaff_RBP + 7);
  }
  else {
    uVar4 = *unaff_RSI;
    uVar18 = (int)unaff_RDI + 0x1c;
    *(uint64_t *)(unaff_RBP + -0x59) = uVar4;
    *(uint *)(unaff_RBP + -0x51) = uVar18;
    *(uint64_t *)(unaff_RBP + -0x19) = *(uint64_t *)(unaff_RBP + -0x59);
    *(uint64_t *)(unaff_RBP + -0x11) = *(uint64_t *)(unaff_RBP + -0x51);
    *(int32_t *)(unaff_RBP + -9) = uVar22;
    *(int32_t *)(unaff_RBP + -5) = uVar23;
    *(int32_t *)(unaff_RBP + -1) = uVar24;
    *(int32_t *)(unaff_RBP + 3) = uVar25;
    move_memory_data(unaff_RBP + -9,unaff_RBP + -0x19);
    uVar9 = *(uint *)(unaff_R14 + 1);
    *(uint64_t *)(unaff_RBP + -0x59) = uVar4;
    *(uint *)(unaff_RBP + -0x51) = uVar18;
    uVar22 = *(int32_t *)(unaff_RBP + -0x59);
    uVar23 = *(int32_t *)(unaff_RBP + -0x55);
    uVar24 = *(int32_t *)(unaff_RBP + -0x51);
    uVar25 = *(int32_t *)(unaff_RBP + -0x4d);
    *(int32_t *)(unaff_RBP + -0x59) = uVar22;
    *(int32_t *)(unaff_RBP + -0x55) = uVar23;
    *(int32_t *)(unaff_RBP + -0x51) = uVar24;
    *(int32_t *)(unaff_RBP + -0x4d) = uVar25;
    if (uVar18 != uVar9) {
      lVar13 = *(int64_t *)(unaff_RBP + -0x59);
      uVar18 = *(uint *)(unaff_RBP + -0x51);
      while( true ) {
        *(int32_t *)(unaff_RBP + -0x49) = uVar22;
        *(int32_t *)(unaff_RBP + -0x45) = uVar23;
        *(int32_t *)(unaff_RBP + -0x41) = uVar24;
        *(int32_t *)(unaff_RBP + -0x3d) = uVar25;
        lVar5 = *(int64_t *)(unaff_RBP + -0x49);
        uVar15 = (uint64_t)(uVar18 + (uVar18 >> 0xb) * -MEMORY_PAGE_SIZE);
        lVar6 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar6 + uVar15 * MEMORY_ENTRY_SIZE);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar4 = *(uint64_t *)(lVar6 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE);
        *(uint64_t *)(unaff_RBP + 0x27) = uVar10;
        *(uint64_t *)(unaff_RBP + 0x2f) = uVar11;
        uVar15 = *(uint64_t *)(unaff_RBP + 0x2f);
        uVar7 = *(uint64_t *)(unaff_RBP + 0x27);
        uVar20 = *(uint *)(unaff_RBP + -0x41);
        uVar8 = uVar18;
        while( true ) {
          uVar8 = uVar8 - 1;
          uVar17 = (uint64_t)(uVar8 & 0x7ff);
          puVar14 = (uint64_t *)
                    (*(int64_t *)(lVar13 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) + uVar17 * MEMORY_ENTRY_SIZE);
          uVar16 = *puVar14;
          bVar21 = uVar7 < uVar16;
          if (uVar7 == uVar16) {
            bVar21 = uVar15 < puVar14[1];
          }
          if (!bVar21) break;
          lVar6 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar8 >> 0xb) * 8);
          puVar1 = (uint64_t *)(lVar6 + uVar17 * MEMORY_ENTRY_SIZE);
          uVar12 = puVar1[1];
          puVar3 = (int32_t *)(lVar6 + 0x10 + uVar17 * MEMORY_ENTRY_SIZE);
          uVar22 = *puVar3;
          uVar23 = puVar3[1];
          lVar6 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
          uVar16 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -MEMORY_PAGE_SIZE);
          puVar2 = (uint64_t *)(lVar6 + uVar16 * MEMORY_ENTRY_SIZE);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar3 = (int32_t *)(lVar6 + 0x10 + uVar16 * MEMORY_ENTRY_SIZE);
          *puVar3 = uVar22;
          puVar3[1] = uVar23;
          uVar20 = uVar20 - 1;
        }
        uVar18 = uVar18 + 1;
        *(uint *)(unaff_RBP + -0x51) = uVar18;
        uVar15 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -MEMORY_PAGE_SIZE);
        lVar5 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar5 + uVar15 * MEMORY_ENTRY_SIZE);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        *(uint64_t *)(lVar5 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE) = uVar4;
        if (uVar18 == uVar9) break;
        uVar22 = *(int32_t *)(unaff_RBP + -0x59);
        uVar23 = *(int32_t *)(unaff_RBP + -0x55);
        uVar24 = *(int32_t *)(unaff_RBP + -0x51);
        uVar25 = *(int32_t *)(unaff_RBP + -0x4d);
      }
    }
  }
  return;
}





// 函数: void insert_data_sorted(uint64_t data_param, uint64_t key_param)
// 数据插入排序函数
// 参数: data_param - 数据参数, key_param - 键参数
// 功能: 将数据插入到已排序的结构中，保持排序顺序
void insert_data_sorted(uint64_t data_param, uint64_t key_param)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar18;
  uint unaff_EDI;
  uint uVar19;
  int64_t unaff_R14;
  bool bVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t in_XMM1_Dc;
  int32_t uVar23;
  int32_t in_XMM1_Dd;
  int32_t uVar24;
  
  *(int *)(unaff_RBP + -9) = (int)key_param;
  *(int *)(unaff_RBP + -5) = (int)((uint64_t)key_param >> 0x20);
  *(int32_t *)(unaff_RBP + -1) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + 3) = in_XMM1_Dd;
  move_memory_data();
  uVar10 = *(uint *)(unaff_R14 + 8);
  *(uint64_t *)(unaff_RBP + -0x59) = unaff_RBX;
  *(uint *)(unaff_RBP + -0x51) = unaff_EDI;
  uVar21 = *(int32_t *)(unaff_RBP + -0x59);
  uVar22 = *(int32_t *)(unaff_RBP + -0x55);
  uVar23 = *(int32_t *)(unaff_RBP + -0x51);
  uVar24 = *(int32_t *)(unaff_RBP + -0x4d);
  *(int32_t *)(unaff_RBP + -0x59) = uVar21;
  *(int32_t *)(unaff_RBP + -0x55) = uVar22;
  *(int32_t *)(unaff_RBP + -0x51) = uVar23;
  *(int32_t *)(unaff_RBP + -0x4d) = uVar24;
  if (unaff_EDI != uVar10) {
    lVar5 = *(int64_t *)(unaff_RBP + -0x59);
    uVar18 = *(uint *)(unaff_RBP + -0x51);
    while( true ) {
      *(int32_t *)(unaff_RBP + -0x49) = uVar21;
      *(int32_t *)(unaff_RBP + -0x45) = uVar22;
      *(int32_t *)(unaff_RBP + -0x41) = uVar23;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar24;
      lVar6 = *(int64_t *)(unaff_RBP + -0x49);
      uVar15 = (uint64_t)(uVar18 + (uVar18 >> 0xb) * -MEMORY_PAGE_SIZE);
      lVar7 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar7 + uVar15 * MEMORY_ENTRY_SIZE);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar4 = *(uint64_t *)(lVar7 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE);
      *(uint64_t *)(unaff_RBP + 0x27) = uVar11;
      *(uint64_t *)(unaff_RBP + 0x2f) = uVar12;
      uVar15 = *(uint64_t *)(unaff_RBP + 0x2f);
      uVar8 = *(uint64_t *)(unaff_RBP + 0x27);
      uVar19 = *(uint *)(unaff_RBP + -0x41);
      uVar9 = uVar18;
      while( true ) {
        uVar9 = uVar9 - 1;
        uVar17 = (uint64_t)(uVar9 & 0x7ff);
        puVar14 = (uint64_t *)
                  (*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar9 >> 0xb) * 8) + uVar17 * MEMORY_ENTRY_SIZE);
        uVar16 = *puVar14;
        bVar20 = uVar8 < uVar16;
        if (uVar8 == uVar16) {
          bVar20 = uVar15 < puVar14[1];
        }
        if (!bVar20) break;
        lVar7 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar9 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar7 + uVar17 * MEMORY_ENTRY_SIZE);
        uVar13 = puVar1[1];
        puVar3 = (int32_t *)(lVar7 + 0x10 + uVar17 * MEMORY_ENTRY_SIZE);
        uVar21 = *puVar3;
        uVar22 = puVar3[1];
        lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)(uVar19 >> 0xb) * 8);
        uVar16 = (uint64_t)(uVar19 + (uVar19 >> 0xb) * -MEMORY_PAGE_SIZE);
        puVar2 = (uint64_t *)(lVar7 + uVar16 * MEMORY_ENTRY_SIZE);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        puVar3 = (int32_t *)(lVar7 + 0x10 + uVar16 * MEMORY_ENTRY_SIZE);
        *puVar3 = uVar21;
        puVar3[1] = uVar22;
        uVar19 = uVar19 - 1;
      }
      uVar18 = uVar18 + 1;
      *(uint *)(unaff_RBP + -0x51) = uVar18;
      uVar15 = (uint64_t)(uVar19 + (uVar19 >> 0xb) * -MEMORY_PAGE_SIZE);
      lVar6 = *(int64_t *)(lVar6 + 8 + (uint64_t)(uVar19 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar6 + uVar15 * MEMORY_ENTRY_SIZE);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      *(uint64_t *)(lVar6 + 0x10 + uVar15 * MEMORY_ENTRY_SIZE) = uVar4;
      if (uVar18 == uVar10) break;
      uVar21 = *(int32_t *)(unaff_RBP + -0x59);
      uVar22 = *(int32_t *)(unaff_RBP + -0x55);
      uVar23 = *(int32_t *)(unaff_RBP + -0x51);
      uVar24 = *(int32_t *)(unaff_RBP + -0x4d);
    }
  }
  return;
}





// 函数: void add_data_entry(uint64_t entry_param, uint64_t data_param)
// 数据条目添加函数
// 参数: entry_param - 条目参数, data_param - 数据参数
// 功能: 向数据结构中添加新的数据条目
void add_data_entry(uint64_t entry_param, uint64_t data_param)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t unaff_RBP;
  int32_t *unaff_R14;
  uint64_t in_XMM1_Qb;
  
  uVar1 = unaff_R14[1];
  uVar2 = unaff_R14[2];
  uVar3 = unaff_R14[3];
  *(int32_t *)(unaff_RBP + 7) = *unaff_R14;
  *(int32_t *)(unaff_RBP + 0xb) = uVar1;
  *(int32_t *)(unaff_RBP + 0xf) = uVar2;
  *(int32_t *)(unaff_RBP + 0x13) = uVar3;
  *(uint64_t *)(unaff_RBP + 0x17) = data_param;
  *(uint64_t *)(unaff_RBP + 0x1f) = in_XMM1_Qb;
  move_memory_data(unaff_RBP + 0x17,unaff_RBP + 7);
  return;
}





// 函数: void empty_function_2(void)
// 空函数2
// 参数: 无参数
// 功能: 空实现函数，可能用作占位符或接口兼容
void empty_function_2(void)

{
  return;
}





// 函数: void empty_function_3(void)
// 空函数3
// 参数: 无参数
// 功能: 空实现函数，可能用作占位符或接口兼容
void empty_function_3(void)

{
  return;
}





// 函数: void empty_function_4(void)
// 空函数4
// 参数: 无参数
// 功能: 空实现函数，可能用作占位符或接口兼容
void empty_function_4(void)

{
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t * create_array_structure(uint64_t size)
// 数组结构创建函数
// 参数: size - 数组大小
// 功能: 创建指定大小的数组结构，初始化内存并返回指针
uint64_t * create_array_structure(uint64_t size)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (size == 0) {
    return (uint64_t *)0x0;
  }
  puVar1 = (uint64_t *)allocate_system_memory(system_memory_pool_ptr,size * 8 + MEMORY_ALLOC_BASE_SIZE,3);
  *puVar1 = size << 0x20 | 8;
  iVar3 = 0;
  puVar2 = puVar1 + 2;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while ((uint64_t)(int64_t)iVar3 < size);
  return puVar1 + 2;
}





// 函数: void cleanup_memory_handlers(int64_t memory_ptr)
// 内存处理器清理函数
// 参数: memory_ptr - 内存指针
// 功能: 清理内存处理器，调用析构函数并释放内存
void cleanup_memory_handlers(int64_t memory_ptr)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  if (memory_ptr == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(uint64_t *)(memory_ptr + -MEMORY_ALLOC_BASE_SIZE);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t **)(uVar3 + memory_ptr) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(uVar3 + memory_ptr) + 0x38))();
      }
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  free_system_memory(memory_ptr + -MEMORY_ALLOC_BASE_SIZE);
}





// 函数: void cleanup_memory_handlers_fast(int64_t memory_ptr)
// 快速内存处理器清理函数
// 参数: memory_ptr - 内存指针
// 功能: 快速清理内存处理器，优化版本的清理函数
void cleanup_memory_handlers_fast(int64_t memory_ptr)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint64_t *)(memory_ptr + -MEMORY_ALLOC_BASE_SIZE);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t **)(uVar3 + memory_ptr) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(uVar3 + memory_ptr) + 0x38))();
      }
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  free_system_memory(memory_ptr + -MEMORY_ALLOC_BASE_SIZE);
}





// 函数: void cleanup_memory_pool(void)
// 内存池清理函数
// 参数: 无参数，使用寄存器变量
// 功能: 清理内存池，释放所有分配的内存资源
void cleanup_memory_pool(void)

{
  int64_t in_RAX;
  uint64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  
  do {
    if (*(int64_t **)(unaff_RBX + unaff_RSI) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(unaff_RBX + unaff_RSI) + 0x38))();
    }
    unaff_RBX = (uint64_t)(uint)((int)unaff_RBX + unaff_EBP);
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  free_system_memory(unaff_RSI + -MEMORY_ALLOC_BASE_SIZE);
}


