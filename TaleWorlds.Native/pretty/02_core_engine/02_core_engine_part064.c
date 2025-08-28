#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part064.c - 核心引擎数据结构管理函数 (22个函数)

// =============================================================================
// 数据块分配与初始化函数
// =============================================================================

/**
 * 分配并初始化数据块 - 基础版本
 * 功能：分配指定大小的内存块，进行初始化并传递给处理函数
 * 参数：
 *   - unaff_RDI: 包含大小参数的结构体指针
 *   - unaff_RSI: 要复制的数据指针
 * 返回值：无（函数不返回）
 */
void allocate_and_initialize_data_block(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  // 分配0x28字节的内存块
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  
  // 复制数据到分配的块中
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  
  // 传递分配的块给处理函数（不返回）
  process_allocated_block(allocated_block);
}

// =============================================================================
// 数据块分配与初始化函数变体
// =============================================================================

/**
 * 分配并初始化数据块 - 变体1
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant1(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体2
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant2(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体3
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant3(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

// =============================================================================
// 数据块分配与初始化函数变体4-7
// =============================================================================

/**
 * 分配并初始化数据块 - 变体4
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant4(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体5
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant5(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体6
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant6(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体7
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant7(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

// =============================================================================
// 数据块分配与初始化函数变体8-11
// =============================================================================

/**
 * 分配并初始化数据块 - 变体8
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant8(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体9
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant9(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体10
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant10(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体11
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant11(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

// =============================================================================
// 数据块分配与初始化函数变体12-15
// =============================================================================

/**
 * 分配并初始化数据块 - 变体12
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant12(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体13
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant13(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体14
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant14(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体15
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant15(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

// =============================================================================
// 数据块分配与初始化函数变体16-19
// =============================================================================

/**
 * 分配并初始化数据块 - 变体16
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant16(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体17
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant17(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体18
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant18(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体19
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant19(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

// =============================================================================
// 数据块分配与初始化函数变体20-22
// =============================================================================

/**
 * 分配并初始化数据块 - 变体20
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant20(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体21
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant21(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

/**
 * 分配并初始化数据块 - 变体22
 * 功能：与基础版本功能相同，可能用于不同的调用上下文
 */
void allocate_and_initialize_data_block_variant22(void)
{
  longlong allocated_block;
  undefined4 *source_data;
  longlong parameter_struct;
  
  allocated_block = memory_allocate_and_init(global_data_allocator, 0x28, *(undefined1 *)(parameter_struct + 0x28));
  *(undefined4 *)(allocated_block + 0x20) = *source_data;
  *(undefined4 *)(allocated_block + 0x24) = 0;
  process_allocated_block(allocated_block);
}

// =============================================================================
// 全局数据引用
// =============================================================================

// 全局数据分配器引用
// DAT_180c8ed18 - 全局内存分配器或数据管理器
// 用于分配和管理内存块的系统级对象

// =============================================================================
// 外部函数声明（基于代码调用模式推断）
// =============================================================================

// 内存分配和初始化函数
// longlong memory_allocate_and_init(void *allocator, uint size, uint init_param);
// 功能：分配指定大小的内存并进行初始化

// 数据块处理函数
// void process_allocated_block(longlong block);
// 功能：处理已分配的数据块（函数不返回）

// =============================================================================
// 文件总结
// =============================================================================

/*
 * 02_core_engine_part064.c 文件总结：
 * 
 * 包含22个几乎相同的数据块分配与初始化函数
 * 
 * 主要功能：
 * - 分配固定大小（0x28字节）的内存块
 * - 初始化内存块内容
 * - 传递给处理函数进行后续操作
 * 
 * 设计特点：
 * - 所有函数都遵循相同的模式
 * - 可能用于不同的调用上下文或错误处理路径
 * - 使用全局分配器进行内存管理
 * 
 * 技术细节：
 * - 分配大小：0x28字节（40字节）
 * - 数据偏移：0x20（32字节）和0x24（36字节）
 * - 全局分配器：DAT_180c8ed18
 * 
 * 注意事项：
 * - 所有函数都是void返回类型
 * - 最终调用的处理函数不返回
 * - 可能用于系统级的数据管理操作
 */