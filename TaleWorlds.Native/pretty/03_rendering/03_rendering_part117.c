#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part117.c - 渲染系统高级数据处理和资源管理模块
// 本模块包含22个核心函数，涵盖渲染系统初始化、数据处理、内存管理、资源分配、状态控制等高级渲染功能
// 主要功能包括：渲染系统初始化器、数据处理器、资源管理器、内存分配器、状态控制器、清理处理器等

// 常量定义
#define RENDERING_SYSTEM_INITIALIZATION_STATE 8
#define RENDERING_SYSTEM_ACTIVE_STATE 1
#define RENDERING_SYSTEM_CLEANUP_STATE 4
#define RENDERING_SYSTEM_BUFFER_SIZE_0X90 0x90
#define RENDERING_SYSTEM_BUFFER_SIZE_0XF0 0xf0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XB0 0xb0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XC0 0xc0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XD0 0xd0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XE0 0xe0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XE8 0xe8
#define RENDERING_SYSTEM_BUFFER_SIZE_0XF8 0xf8
#define RENDERING_SYSTEM_BUFFER_SIZE_0XD8 0xd8
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1A0 0x1a0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XB8 0xb8
#define RENDERING_SYSTEM_BUFFER_SIZE_0XC8 0xc8
#define RENDERING_SYSTEM_BUFFER_SIZE_0X160 0x160
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1B8 0x1b8
#define RENDERING_SYSTEM_BUFFER_SIZE_0X158 0x158
#define RENDERING_SYSTEM_BUFFER_SIZE_0X100 0x100
#define RENDERING_SYSTEM_BUFFER_SIZE_0X108 0x108
#define RENDERING_SYSTEM_BUFFER_SIZE_0X200 0x200
#define RENDERING_SYSTEM_BUFFER_SIZE_0X21 0x21
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2D 0x2d
#define RENDERING_SYSTEM_BUFFER_SIZE_0X38 0x38
#define RENDERING_SYSTEM_BUFFER_SIZE_0X12 0x12
#define RENDERING_SYSTEM_BUFFER_SIZE_0X13 0x13
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1F 0x1f
#define RENDERING_SYSTEM_BUFFER_SIZE_0X20 0x20
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2A 0x2a
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2B 0x2b
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2C 0x2c
#define RENDERING_SYSTEM_BUFFER_SIZE_0X35 0x35
#define RENDERING_SYSTEM_BUFFER_SIZE_0X36 0x36
#define RENDERING_SYSTEM_BUFFER_SIZE_0X37 0x37
#define RENDERING_SYSTEM_BUFFER_SIZE_0X22 0x22
#define RENDERING_SYSTEM_BUFFER_SIZE_0X17 0x17
#define RENDERING_SYSTEM_BUFFER_SIZE_0X18 0x18
#define RENDERING_SYSTEM_BUFFER_SIZE_0X19 0x19
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1A 0x1a
#define RENDERING_SYSTEM_BUFFER_SIZE_0X16 0x16
#define RENDERING_SYSTEM_BUFFER_SIZE_0X10 0x10
#define RENDERING_SYSTEM_BUFFER_SIZE_0X18 0x18
#define RENDERING_SYSTEM_BUFFER_SIZE_0X40 0x40
#define RENDERING_SYSTEM_BUFFER_SIZE_0X10 0x10
#define RENDERING_SYSTEM_BUFFER_SIZE_0X11 0x11
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3F800000 0x3f800000
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3F80000000000000 0x3f80000000000000
#define RENDERING_SYSTEM_BUFFER_SIZE_0XFFFFFFFFFFFFFFFF 0xffffffffffffffff
#define RENDERING_SYSTEM_BUFFER_SIZE_0XE0 0xe0
#define RENDERING_SYSTEM_BUFFER_SIZE_0XD0 0xd0
#define RENDERING_SYSTEM_BUFFER_SIZE_0X18 0x18
#define RENDERING_SYSTEM_BUFFER_SIZE_0X4 4
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1 1
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2 2
#define RENDERING_SYSTEM_BUFFER_SIZE_0X5 5
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3 3
#define RENDERING_SYSTEM_BUFFER_SIZE_0X7 7
#define RENDERING_SYSTEM_BUFFER_SIZE_0X8 8
#define RENDERING_SYSTEM_BUFFER_SIZE_0X6 6
#define RENDERING_SYSTEM_BUFFER_SIZE_0X9 0x9
#define RENDERING_SYSTEM_BUFFER_SIZE_0XA 0xa
#define RENDERING_SYSTEM_BUFFER_SIZE_0XB 0xb
#define RENDERING_SYSTEM_BUFFER_SIZE_0XC 0xc
#define RENDERING_SYSTEM_BUFFER_SIZE_0XD 0xd
#define RENDERING_SYSTEM_BUFFER_SIZE_0XE 0xe
#define RENDERING_SYSTEM_BUFFER_SIZE_0XF 0xf
#define RENDERING_SYSTEM_BUFFER_SIZE_0X14 0x14
#define RENDERING_SYSTEM_BUFFER_SIZE_0X15 0x15
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1C 0x1c
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1D 0x1d
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1E 0x1e
#define RENDERING_SYSTEM_BUFFER_SIZE_0X1F 0x1f
#define RENDERING_SYSTEM_BUFFER_SIZE_0X20 0x20
#define RENDERING_SYSTEM_BUFFER_SIZE_0X21 0x21
#define RENDERING_SYSTEM_BUFFER_SIZE_0X22 0x22
#define RENDERING_SYSTEM_BUFFER_SIZE_0X23 0x23
#define RENDERING_SYSTEM_BUFFER_SIZE_0X24 0x24
#define RENDERING_SYSTEM_BUFFER_SIZE_0X25 0x25
#define RENDERING_SYSTEM_BUFFER_SIZE_0X26 0x26
#define RENDERING_SYSTEM_BUFFER_SIZE_0X27 0x27
#define RENDERING_SYSTEM_BUFFER_SIZE_0X28 0x28
#define RENDERING_SYSTEM_BUFFER_SIZE_0X29 0x29
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2A 0x2a
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2B 0x2b
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2C 0x2c
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2D 0x2d
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2E 0x2e
#define RENDERING_SYSTEM_BUFFER_SIZE_0X2F 0x2f
#define RENDERING_SYSTEM_BUFFER_SIZE_0X30 0x30
#define RENDERING_SYSTEM_BUFFER_SIZE_0X31 0x31
#define RENDERING_SYSTEM_BUFFER_SIZE_0X32 0x32
#define RENDERING_SYSTEM_BUFFER_SIZE_0X33 0x33
#define RENDERING_SYSTEM_BUFFER_SIZE_0X34 0x34
#define RENDERING_SYSTEM_BUFFER_SIZE_0X35 0x35
#define RENDERING_SYSTEM_BUFFER_SIZE_0X36 0x36
#define RENDERING_SYSTEM_BUFFER_SIZE_0X37 0x37
#define RENDERING_SYSTEM_BUFFER_SIZE_0X38 0x38
#define RENDERING_SYSTEM_BUFFER_SIZE_0X39 0x39
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3A 0x3a
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3B 0x3b
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3C 0x3c
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3D 0x3d
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3E 0x3e
#define RENDERING_SYSTEM_BUFFER_SIZE_0X3F 0x3f

// 函数别名定义
#define RenderingSystem_Initializer FUN_180339860
#define RenderingSystem_ObjectCreator FUN_180339920
#define RenderingSystem_DataSerializer FUN_1803399f0
#define RenderingSystem_DataDeserializer FUN_180339aa0
#define RenderingSystem_ObjectCleaner FUN_180339c00
#define RenderingSystem_ObjectDestructor FUN_180339c60
#define RenderingSystem_StateInitializer FUN_180339cf0
#define RenderingSystem_ContextCreator FUN_180339d70
#define RenderingSystem_MemoryAllocator FUN_180339db0
#define RenderingSystem_DataCopier FUN_180339e10
#define RenderingSystem_BufferWriter FUN_180339e50
#define RenderingSystem_BufferReader FUN_180339f30
#define RenderingSystem_ArrayProcessor FUN_180339f6a
#define RenderingSystem_EmptyFunction FUN_18033a07d
#define RenderingSystem_HandleAllocator FUN_18033a090
#define RenderingSystem_ResourceCleaner FUN_18033a110
#define RenderingSystem_BatchCleaner FUN_18033a163
#define RenderingSystem_PointerResetter FUN_18033a1dc
#define RenderingSystem_HandleInitializer FUN_18033a200
#define RenderingSystem_ObjectReleaser FUN_18033a260
#define RenderingSystem_MemoryCleaner FUN_18033a2d0
#define RenderingSystem_BatchReleaser FUN_18033a303
#define RenderingSystem_NoOperation FUN_18033a361
#define RenderingSystem_HandleReleaser FUN_18033a380
#define RenderingSystem_DataLoader FUN_18033a3f0
#define RenderingSystem_HashTableHandler FUN_18033a740
#define RenderingSystem_HashTableInserter FUN_18033a78e
#define RenderingSystem_HashTableFinder FUN_18033a815
#define RenderingSystem_VectorExpander FUN_18033a920
#define RenderingSystem_VectorResizer FUN_18033a953
#define RenderingSystem_VectorClearer FUN_18033aa27
#define RenderingSystem_VectorPositioner FUN_18033aa58
#define RenderingSystem_IteratorCleaner FUN_18033aa70
#define RenderingSystem_ContextCleaner FUN_18033aae0

/**
 * 渲染系统初始化器 - 初始化渲染系统的基础状态和数据结构
 * 
 * 该函数负责初始化渲染系统的核心状态，包括设置各种缓冲区、
 * 指针和状态标志，为后续的渲染操作做好准备。
 * 
 * @param param_1 渲染系统对象的指针
 */
void RenderingSystem_Initializer(int64_t param_1)
{
  // 设置初始化状态
  *(int32_t *)(param_1 + 0x8c) = RENDERING_SYSTEM_INITIALIZATION_STATE;
  
  // 初始化基础指针和缓冲区
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  
  // 初始化0x90偏移处的缓冲区
  FUN_180284720(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X90);
  
  // 设置活动状态
  *(int32_t *)(param_1 + 0x8c) = RENDERING_SYSTEM_ACTIVE_STATE;
  
  // 初始化各个缓冲区指针
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD0) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD8) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE0) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE8) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF0) = 0;
  
  // 初始化状态标志
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X108) = 0;
  **(int8_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X100) = 0;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X160) = 0;
  **(int8_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X158) = 0;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X1B8) = 0;
  **(int8_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X1B0) = 0;
  
  return;
}

/**
 * 渲染系统对象创建器 - 创建并初始化渲染系统对象
 * 
 * 该函数负责创建新的渲染系统对象，并进行完整的初始化配置，
 * 包括设置虚函数表、初始化数据结构和调用初始化函数。
 * 
 * @param param_1 对象指针的指针
 * @return 初始化后的对象指针
 */
uint64_t * RenderingSystem_ObjectCreator(uint64_t *param_1)
{
  // 调用预处理函数
  FUN_180320470();
  
  // 设置虚函数表指针
  *param_1 = &unknown_var_8432_ptr;
  
  // 初始化第一组虚函数
  param_1[0x1f] = &system_state_ptr;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  
  // 设置第二组虚函数
  param_1[0x1f] = &unknown_var_3480_ptr;
  param_1[0x20] = param_1 + 0x22;
  *(int32_t *)(param_1 + 0x21) = 0;
  *(int8_t *)(param_1 + 0x22) = 0;
  
  // 初始化第三组虚函数
  param_1[0x2a] = &system_state_ptr;
  param_1[0x2b] = 0;
  *(int32_t *)(param_1 + 0x2c) = 0;
  
  // 设置第四组虚函数
  param_1[0x2a] = &unknown_var_3480_ptr;
  param_1[0x2b] = param_1 + 0x2d;
  *(int32_t *)(param_1 + 0x2c) = 0;
  *(int8_t *)(param_1 + 0x2d) = 0;
  
  // 初始化第五组虚函数
  param_1[0x35] = &system_state_ptr;
  param_1[0x36] = 0;
  *(int32_t *)(param_1 + 0x37) = 0;
  
  // 设置第六组虚函数
  param_1[0x35] = &unknown_var_3480_ptr;
  param_1[0x36] = param_1 + 0x38;
  *(int32_t *)(param_1 + 0x37) = 0;
  *(int8_t *)(param_1 + 0x38) = 0;
  
  // 调用初始化函数完成对象设置
  FUN_180339860(param_1);
  
  return param_1;
}

/**
 * 渲染系统数据序列化器 - 将渲染系统数据序列化到缓冲区
 * 
 * 该函数负责将渲染系统的各种数据序列化到指定的缓冲区中，
 * 包括渲染参数、状态信息和资源数据等。
 * 
 * @param param_1 渲染系统对象的指针
 * @param param_2 目标缓冲区的指针
 * @param param_3 序列化参数1
 * @param param_4 序列化参数2
 */
void RenderingSystem_DataSerializer(int64_t param_1, int64_t *param_2, uint64_t param_3, uint64_t param_4)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t unaff_RDI;
  
  // 调用预处理函数
  FUN_1803377b0();
  
  // 获取缓冲区指针
  puVar2 = (int32_t *)param_2[1];
  
  // 序列化第一个数据项
  uVar1 = *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF0);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2, (int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  
  // 序列化第二个数据项
  puVar2 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF4);
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 5) {
    System_BufferManager(param_2, (int64_t)puVar2 + (4 - *param_2));
    puVar2 = (int32_t *)param_2[1];
  }
  *puVar2 = uVar1;
  param_2[1] = param_2[1] + 4;
  
  // 检查缓冲区空间并扩展
  if ((uint64_t)((param_2[2] - param_2[1]) + *param_2) < 0x41) {
    System_BufferManager(param_2, (param_2[1] - *param_2) + 0x40, param_3, param_4, unaff_RDI);
  }
  
  // 序列化多个数据块
  FUN_180639fd0(param_2, param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0);
  FUN_180639fd0(param_2, param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
  FUN_180639fd0(param_2, param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD0);
  
  // 序列化最后的数据项
  puVar2 = (int32_t *)param_2[1];
  if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) < 0x11) {
    System_BufferManager(param_2, (int64_t)puVar2 + (0x10 - *param_2), param_3, param_4, unaff_RDI);
    puVar2 = (int32_t *)param_2[1];
  }
  
  // 序列化16字节的数据块
  *puVar2 = *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE0);
  param_2[1] = param_2[1] + 4;
  *(int32_t *)param_2[1] = *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE4);
  param_2[1] = param_2[1] + 4;
  *(int32_t *)param_2[1] = *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE8);
  param_2[1] = param_2[1] + 4;
  *(int32_t *)param_2[1] = *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XEC);
  param_2[1] = param_2[1] + 4;
  
  return;
}

/**
 * 渲染系统数据反序列化器 - 从缓冲区反序列化渲染系统数据
 * 
 * 该函数负责从指定的缓冲区中反序列化数据并恢复到渲染系统对象中，
 * 重建渲染系统的完整状态。
 * 
 * @param param_1 渲染系统对象的指针
 * @param param_2 源缓冲区的指针
 */
void RenderingSystem_DataDeserializer(int64_t param_1, int64_t param_2)
{
  // 调用预处理函数
  FUN_180337990();
  
  // 反序列化第一个数据项
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化第二个数据项
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化B0系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化B8系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XBC) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化C0系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化C8系列数据
  *(int32_t *)(param_1 + 200) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XCC) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化D0系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化D8系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XDC) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化E0系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE0) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE4) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  // 反序列化E8系列数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE8) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XEC) = **(int32_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  
  return;
}

/**
 * 渲染系统对象清理器 - 清理渲染系统对象并释放资源
 * 
 * 该函数负责清理渲染系统对象占用的资源，包括释放内存、
 * 清理数据结构和调用相关清理函数。
 * 
 * @param param_1 要清理的对象指针
 */
void RenderingSystem_ObjectCleaner(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  // 设置虚函数表
  *param_1 = &unknown_var_8168_ptr;
  *param_1 = &unknown_var_8496_ptr;
  
  // 初始化基础字段
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)((int64_t)param_1 + 0x8c) = RENDERING_SYSTEM_INITIALIZATION_STATE;
  
  // 获取迭代器指针
  plVar1 = param_1 + 0x12;
  
  // 初始化缓冲区
  FUN_180284720(plVar1);
  
  // 遍历并清理所有元素
  lVar2 = param_1[0x13];
  for (lVar3 = *plVar1; lVar3 != lVar2; lVar3 = lVar3 + RENDERING_SYSTEM_BUFFER_SIZE_0X1A0) {
    FUN_180281e80(lVar3);
  }
  
  // 检查是否需要进一步清理
  if (*plVar1 == 0) {
    return;
  }
  
  // 调用最终清理函数
  CoreEngine_MemoryPoolManager();
}

/**
 * 渲染系统对象析构器 - 析构渲染系统对象并释放内存
 * 
 * 该函数负责析构渲染系统对象，释放所有相关资源，
 * 并根据参数决定是否释放对象本身的内存。
 * 
 * @param param_1 要析构的对象指针
 * @param param_2 析构参数
 * @param param_3 析构参数1
 * @param param_4 析构参数2
 * @return 析构后的对象指针
 */
uint64_t *
RenderingSystem_ObjectDestructor(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  
  // 设置虚函数表
  *param_1 = &unknown_var_8168_ptr;
  *param_1 = &unknown_var_8496_ptr;
  
  // 初始化基础字段
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)((int64_t)param_1 + 0x8c) = RENDERING_SYSTEM_INITIALIZATION_STATE;
  
  // 初始化缓冲区
  FUN_180284720(param_1 + 0x12);
  
  // 清理资源
  FUN_18033aa70(param_1 + 0x12);
  
  // 根据参数决定是否释放内存
  if ((param_2 & 1) != 0) {
    free(param_1, RENDERING_SYSTEM_BUFFER_SIZE_0XF8, param_3, param_4, uVar1);
  }
  
  return param_1;
}

/**
 * 渲染系统状态初始化器 - 初始化渲染系统的状态信息
 * 
 * 该函数负责初始化渲染系统的各种状态信息，包括缓冲区、
 * 指针和状态标志等。
 * 
 * @param param_1 渲染系统对象的指针
 */
void RenderingSystem_StateInitializer(int64_t param_1)
{
  // 设置初始化状态
  *(int32_t *)(param_1 + 0x8c) = RENDERING_SYSTEM_INITIALIZATION_STATE;
  
  // 初始化基础指针
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  
  // 初始化缓冲区
  FUN_180284720(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X90);
  
  // 设置活动状态
  *(int32_t *)(param_1 + 0x8c) = RENDERING_SYSTEM_CLEANUP_STATE;
  
  // 初始化特殊值
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF0) = RENDERING_SYSTEM_BUFFER_SIZE_0XFFFFFFFFFFFFFFFF;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0) = RENDERING_SYSTEM_BUFFER_SIZE_0X3F800000;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = RENDERING_SYSTEM_BUFFER_SIZE_0X3F80000000000000;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD0) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD8) = RENDERING_SYSTEM_BUFFER_SIZE_0X3F800000;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE0) = 0;
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XE8) = RENDERING_SYSTEM_BUFFER_SIZE_0X3F80000000000000;
  
  return;
}

/**
 * 渲染系统上下文创建器 - 创建渲染系统上下文
 * 
 * 该函数负责创建新的渲染系统上下文，并进行必要的初始化。
 * 
 * @param param_1 上下文指针的指针
 * @return 创建的上下文指针
 */
uint64_t * RenderingSystem_ContextCreator(uint64_t *param_1)
{
  // 调用预处理函数
  FUN_180320470();
  
  // 设置虚函数表
  *param_1 = &unknown_var_8168_ptr;
  
  // 调用状态初始化函数
  FUN_180339cf0(param_1);
  
  return param_1;
}

/**
 * 渲染系统内存分配器 - 分配渲染系统所需的内存
 * 
 * 该函数负责为渲染系统分配所需的内存空间，并进行初始化。
 * 
 * @return 分配的内存指针
 */
uint64_t * RenderingSystem_MemoryAllocator(void)
{
  uint64_t *puVar1;
  
  // 分配内存
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_SYSTEM_BUFFER_SIZE_0XF8, 8, 3, 0xfffffffffffffffe);
  
  // 调用预处理函数
  FUN_180320470(puVar1);
  
  // 设置虚函数表
  *puVar1 = &unknown_var_8168_ptr;
  
  // 调用状态初始化函数
  FUN_180339cf0(puVar1);
  
  return puVar1;
}

/**
 * 渲染系统数据复制器 - 复制渲染系统数据
 * 
 * 该函数负责将源渲染系统对象的数据复制到目标对象中。
 * 
 * @param param_1 目标对象指针
 * @param param_2 源对象指针
 * @return 目标对象指针
 */
int64_t RenderingSystem_DataCopier(int64_t param_1, int64_t param_2)
{
  // 调用预处理函数
  FUN_180337eb0();
  
  // 复制关键数据
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF0) = *(int32_t *)(param_2 + RENDERING_SYSTEM_BUFFER_SIZE_0XF0);
  *(int32_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XF4) = *(int32_t *)(param_2 + RENDERING_SYSTEM_BUFFER_SIZE_0XF4);
  
  return param_1;
}

/**
 * 渲染系统缓冲区写入器 - 向缓冲区写入渲染系统数据
 * 
 * 该函数负责将渲染系统数据写入到指定的缓冲区中。
 * 
 * @param param_1 渲染系统对象的指针
 * @param param_2 目标缓冲区的指针
 */
void RenderingSystem_BufferWriter(int64_t param_1, int64_t *param_2)
{
  int8_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int8_t *puVar4;
  int *piVar5;
  int iVar6;
  int64_t lVar7;
  
  // 调用预处理函数
  FUN_1803377b0();
  
  // 获取缓冲区指针
  puVar4 = (int8_t *)param_2[1];
  
  // 写入第一个字节
  uVar1 = *(int8_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0);
  if ((uint64_t)((param_2[2] - (int64_t)puVar4) + *param_2) < 2) {
    System_BufferManager(param_2, puVar4 + (1 - *param_2));
    puVar4 = (int8_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 1;
  
  // 计算并写入数组长度
  piVar5 = (int *)param_2[1];
  lVar7 = *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
  lVar2 = *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
  if ((uint64_t)((param_2[2] - (int64_t)piVar5) + *param_2) < 5) {
    System_BufferManager(param_2, (int64_t)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  iVar6 = (int)(lVar7 - lVar2 >> 3);
  *piVar5 = iVar6;
  param_2[1] = param_2[1] + 4;
  
  // 写入数组元素
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      plVar3 = *(int64_t **)(*(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) + lVar7 * 8);
      (**(code **)(*plVar3 + 0x18))(plVar3, param_2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  
  return;
}

/**
 * 渲染系统缓冲区读取器 - 从缓冲区读取渲染系统数据
 * 
 * 该函数负责从指定的缓冲区中读取数据并填充到渲染系统对象中。
 * 
 * @param param_1 渲染系统对象的指针
 * @param param_2 源缓冲区的指针
 */
void RenderingSystem_BufferReader(int64_t param_1, int64_t param_2)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  
  // 调用预处理函数
  FUN_180337990();
  
  // 读取第一个字节
  *(int8_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0) = **(int8_t **)(param_2 + 8);
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
  
  // 读取数组长度
  uVar1 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  
  // 处理数组元素
  if (0 < (int)uVar1) {
    uVar7 = (uint64_t)uVar1;
    do {
      uVar2 = FUN_180337b40(param_2);
      puVar6 = *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
      
      // 检查是否有足够空间
      if (puVar6 < *(uint64_t **)(param_1 + 200)) {
        *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = puVar6 + 1;
        *puVar6 = uVar2;
      }
      else {
        // 处理空间不足的情况
        puVar5 = *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
        lVar3 = (int64_t)puVar6 - (int64_t)puVar5 >> 3;
        
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_180339fdc:
          puVar4 = (uint64_t *)
                   FUN_18062b420(system_memory_pool_ptr, lVar3 * 8, *(int8_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XD0));
          puVar5 = *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
          puVar6 = *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_180339fdc;
          puVar4 = (uint64_t *)0x0;
        }
        
        // 移动现有数据
        if (puVar5 != puVar6) {
          memmove(puVar4, puVar5, (int64_t)puVar6 - (int64_t)puVar5);
        }
        
        // 插入新数据
        *puVar4 = uVar2;
        
        // 更新指针
        if (*(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) != 0) {
          CoreEngine_MemoryPoolManager();
        }
        *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) = puVar4;
        *(uint64_t **)(param_1 + 200) = puVar4 + lVar3;
        *(uint64_t **)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = puVar4 + 1;
      }
      
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  
  return;
}

/**
 * 渲染系统数组处理器 - 批量处理渲染系统数组数据
 * 
 * 该函数负责批量处理渲染系统中的数组数据，进行统一操作。
 * 
 * @param param_1 处理参数
 */
void RenderingSystem_ArrayProcessor(uint param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t unaff_RBX;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  uVar6 = (uint64_t)param_1;
  
  // 循环处理数组元素
  do {
    uVar1 = FUN_180337b40();
    puVar5 = *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
    
    // 检查空间并处理
    if (puVar5 < *(uint64_t **)(unaff_RBX + 200)) {
      *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = puVar5 + 1;
      *puVar5 = uVar1;
    }
    else {
      // 处理空间不足的情况
      puVar4 = *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
      lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
      
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_180339fdc:
        puVar3 = (uint64_t *)
                 FUN_18062b420(system_memory_pool_ptr, lVar2 * 8, *(int8_t *)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XD0));
        puVar4 = *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
        puVar5 = *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_180339fdc;
        puVar3 = (uint64_t *)0x0;
      }
      
      // 移动现有数据
      if (puVar4 != puVar5) {
        memmove(puVar3, puVar4, (int64_t)puVar5 - (int64_t)puVar4);
      }
      
      // 插入新数据
      *puVar3 = uVar1;
      
      // 更新指针
      if (*(int64_t *)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) != 0) {
        CoreEngine_MemoryPoolManager();
      }
      *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) = puVar3;
      *(uint64_t **)(unaff_RBX + 200) = puVar3 + lVar2;
      *(uint64_t **)(unaff_RBX + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = puVar3 + 1;
    }
    
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}

/**
 * 渲染系统空函数 - 空操作函数
 * 
 * 该函数是一个空操作函数，用于占位或默认处理。
 */
void RenderingSystem_EmptyFunction(void)
{
  return;
}

/**
 * 渲染系统句柄分配器 - 分配渲染系统句柄
 * 
 * 该函数负责为渲染系统分配句柄资源。
 * 
 * @return 分配的句柄指针
 */
uint64_t * RenderingSystem_HandleAllocator(void)
{
  uint64_t *puVar1;
  
  // 分配句柄内存
  puVar1 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, RENDERING_SYSTEM_BUFFER_SIZE_0XD8, 8, 3, 0xfffffffffffffffe);
  
  // 调用预处理函数
  FUN_180320470(puVar1);
  
  // 设置虚函数表
  *puVar1 = &unknown_var_8240_ptr;
  
  // 初始化句柄字段
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(int32_t *)(puVar1 + 0x1a) = 3;
  *(int8_t *)(puVar1 + 0x16) = 0;
  
  return puVar1;
}

/**
 * 渲染系统资源清理器 - 清理渲染系统资源
 * 
 * 该函数负责清理渲染系统占用的各种资源，包括内存、句柄等。
 * 
 * @param param_1 渲染系统对象的指针
 */
void RenderingSystem_ResourceCleaner(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar4 = 0;
  
  // 设置清理状态
  *(int32_t *)(param_1 + 0x8c) = RENDERING_SYSTEM_INITIALIZATION_STATE;
  
  // 初始化基础指针
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  
  // 初始化缓冲区
  FUN_180284720(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X90);
  
  // 设置活动标志
  *(int8_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0) = 1;
  *(int32_t *)(param_1 + 0x8c) = 2;
  
  // 计算需要清理的元素数量
  uVar2 = *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) - *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8) >> 3;
  
  // 清理所有元素
  if ((int)uVar2 != 0) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      puVar1 = *(uint64_t **)(lVar4 + *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8));
      
      // 释放每个元素
      if (puVar1 != (uint64_t *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        (**(code **)*puVar1)(puVar1, 0);
        if (lVar3 != 0) {
          CoreEngine_MemoryPoolManager(lVar3);
        }
      }
      
      // 清空指针
      *(uint64_t *)(lVar4 + *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8)) = 0;
      lVar4 = lVar4 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  
  // 重置指针
  *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = *(uint64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
  
  return;
}

/**
 * 渲染系统批量清理器 - 批量清理渲染系统资源
 * 
 * 该函数负责批量清理渲染系统中的资源，提高清理效率。
 */
void RenderingSystem_BatchCleaner(void)
{
  uint64_t *puVar1;
  uint in_EAX;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t unaff_RDI;
  uint64_t unaff_R15;
  
  uVar3 = unaff_R15 & 0xffffffff;
  uVar4 = (uint64_t)in_EAX;
  
  // 批量清理资源
  do {
    puVar1 = *(uint64_t **)(uVar3 + *(int64_t *)(unaff_RDI + RENDERING_SYSTEM_BUFFER_SIZE_0XB8));
    
    // 释放每个资源
    if (puVar1 != (uint64_t *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1, 0);
      if (lVar2 != 0) {
        CoreEngine_MemoryPoolManager(lVar2);
      }
    }
    
    // 清空指针
    *(uint64_t *)(uVar3 + *(int64_t *)(unaff_RDI + RENDERING_SYSTEM_BUFFER_SIZE_0XB8)) = unaff_R15;
    uVar3 = uVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  
  // 重置指针
  *(uint64_t *)(unaff_RDI + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = *(uint64_t *)(unaff_RDI + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
  
  return;
}

/**
 * 渲染系统指针重置器 - 重置渲染系统指针
 * 
 * 该函数负责重置渲染系统中的各种指针到初始状态。
 */
void RenderingSystem_PointerResetter(void)
{
  int64_t unaff_RDI;
  
  // 重置指针
  *(uint64_t *)(unaff_RDI + RENDERING_SYSTEM_BUFFER_SIZE_0XC0) = *(uint64_t *)(unaff_RDI + RENDERING_SYSTEM_BUFFER_SIZE_0XB8);
  
  return;
}

/**
 * 渲染系统句柄初始化器 - 初始化渲染系统句柄
 * 
 * 该函数负责初始化渲染系统的句柄资源。
 * 
 * @param param_1 句柄指针的指针
 * @return 初始化后的句柄指针
 */
uint64_t * RenderingSystem_HandleInitializer(uint64_t *param_1)
{
  // 调用预处理函数
  FUN_180320470();
  
  // 设置虚函数表
  *param_1 = &unknown_var_8240_ptr;
  
  // 初始化句柄字段
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 3;
  *(int8_t *)(param_1 + 0x16) = 0;
  
  return param_1;
}

/**
 * 渲染系统对象释放器 - 释放渲染系统对象
 * 
 * 该函数负责释放渲染系统对象及其相关资源。
 * 
 * @param param_1 要释放的对象指针
 * @param param_2 释放参数
 * @return 释放后的对象指针
 */
uint64_t * RenderingSystem_ObjectReleaser(uint64_t *param_1, uint64_t param_2)
{
  // 设置虚函数表
  *param_1 = &unknown_var_7880_ptr;
  
  // 检查对象状态
  if (param_1[0x18] != 0) {
    CoreEngine_MemoryPoolManager();
  }
  
  // 调用释放函数
  FUN_180049470(param_1);
  
  // 根据参数决定是否释放内存
  if ((param_2 & 1) != 0) {
    free(param_1, RENDERING_SYSTEM_BUFFER_SIZE_0XE0);
  }
  
  return param_1;
}

/**
 * 渲染系统内存清理器 - 清理渲染系统内存
 * 
 * 该函数负责清理渲染系统占用的内存资源。
 * 
 * @param param_1 渲染系统对象的指针
 */
void RenderingSystem_MemoryCleaner(int64_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar4;
  uint64_t uVar3;
  
  lVar1 = *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
  uVar3 = 0;
  uVar4 = uVar3;
  
  // 清理内存块
  if (*(int64_t *)(param_1 + 200) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(int64_t *)(uVar4 + lVar1);
      
      // 释放每个内存块
      if (lVar1 != 0) {
        FUN_180320da0(lVar1);
        CoreEngine_MemoryPoolManager(lVar1);
      }
      
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      *(uint64_t *)(uVar4 + *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0)) = 0;
      lVar1 = *(int64_t *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 200) - lVar1 >> 3));
  }
  
  return;
}

/**
 * 渲染系统批量释放器 - 批量释放渲染系统资源
 * 
 * 该函数负责批量释放渲染系统中的资源。
 * 
 * @param param_1 释放参数1
 * @param param_2 释放参数2
 */
void RenderingSystem_BatchReleaser(uint64_t param_1, int64_t param_2)
{
  int64_t lVar1;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint64_t uVar2;
  uint64_t unaff_R14;
  
  uVar2 = unaff_R14 & 0xffffffff;
  
  // 批量释放资源
  do {
    lVar1 = *(int64_t *)(uVar2 + param_2);
    
    // 释放每个资源
    if (lVar1 != 0) {
      FUN_180320da0(lVar1);
      CoreEngine_MemoryPoolManager(lVar1);
    }
    
    unaff_EBP = unaff_EBP + 1;
    *(uint64_t *)(uVar2 + *(int64_t *)(unaff_RSI + RENDERING_SYSTEM_BUFFER_SIZE_0XC0)) = unaff_R14;
    uVar2 = uVar2 + 8;
    param_2 = *(int64_t *)(unaff_RSI + RENDERING_SYSTEM_BUFFER_SIZE_0XC0);
  } while ((uint64_t)(int64_t)unaff_EBP <
           (uint64_t)(*(int64_t)(unaff_RSI + 200) - param_2 >> 3));
  
  return;
}

/**
 * 渲染系统无操作函数 - 无操作函数
 * 
 * 该函数是一个无操作函数，用于占位或默认处理。
 */
void RenderingSystem_NoOperation(void)
{
  return;
}

/**
 * 渲染系统句柄释放器 - 释放渲染系统句柄
 * 
 * 该函数负责释放渲染系统的句柄资源。
 * 
 * @param param_1 要释放的句柄指针
 * @param param_2 释放参数
 * @param param_3 释放参数1
 * @param param_4 释放参数2
 * @return 释放后的句柄指针
 */
uint64_t *
RenderingSystem_HandleReleaser(uint64_t *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  
  // 设置虚函数表
  *param_1 = &unknown_var_8024_ptr;
  
  // 调用释放函数
  FUN_180049470();
  
  // 根据参数决定是否释放内存
  if ((param_2 & 1) != 0) {
    free(param_1, RENDERING_SYSTEM_BUFFER_SIZE_0XD0, param_3, param_4, uVar1);
  }
  
  return param_1;
}

/**
 * 渲染系统数据加载器 - 加载渲染系统数据
 * 
 * 该函数负责加载渲染系统的数据到指定位置。
 * 
 * @param param_1 目标数据指针
 * @param param_2 源数据指针
 */
void RenderingSystem_DataLoader(int32_t *param_1, int64_t param_2)
{
  uint uVar1;
  int32_t uVar2;
  uint *puVar3;
  
  // 读取数据长度
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  
  // 处理数据
  if (uVar1 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x22) + 0x18))(param_1 + 0x22, puVar3, uVar1);
    puVar3 = (uint *)((uint64_t)uVar1 + *(int64_t *)(param_2 + 8));
  }
  
  // 复制数据块
  param_1[1] = *puVar3;
  param_1[2] = puVar3[1];
  param_1[3] = puVar3[2];
  param_1[4] = puVar3[3];
  param_1[5] = puVar3[4];
  param_1[6] = puVar3[5];
  param_1[7] = puVar3[6];
  param_1[8] = puVar3[7];
  param_1[9] = puVar3[8];
  param_1[10] = puVar3[9];
  param_1[0xb] = puVar3[10];
  param_1[0xc] = puVar3[0xb];
  param_1[0xd] = puVar3[0xc];
  param_1[0xe] = puVar3[0xd];
  param_1[0xf] = puVar3[0xe];
  param_1[0x10] = puVar3[0xf];
  param_1[0x11] = puVar3[0x10];
  param_1[0x12] = puVar3[0x11];
  param_1[0x13] = puVar3[0x12];
  param_1[0x14] = puVar3[0x13];
  param_1[0x15] = puVar3[0x14];
  param_1[0x16] = puVar3[0x15];
  param_1[0x17] = puVar3[0x16];
  param_1[0x18] = puVar3[0x17];
  param_1[0x19] = puVar3[0x18];
  param_1[0x1a] = puVar3[0x19];
  param_1[0x1b] = puVar3[0x1a];
  param_1[0x1c] = puVar3[0x1b];
  param_1[0x1d] = puVar3[0x1c];
  param_1[0x1e] = puVar3[0x1d];
  param_1[0x1f] = puVar3[0x1e];
  param_1[0x20] = puVar3[0x1f];
  
  // 更新指针
  *(uint **)(param_2 + 8) = puVar3 + 0x20;
  
  // 获取数据标识
  uVar2 = FUN_1800c17c0();
  *param_1 = uVar2;
  
  return;
}

/**
 * 渲染系统哈希表处理器 - 处理渲染系统哈希表操作
 * 
 * 该函数负责处理渲染系统中的哈希表操作，包括插入、查找等。
 * 
 * @param param_1 哈希表指针
 * @param param_2 键值指针
 * @return 处理结果指针
 */
uint * RenderingSystem_HashTableHandler(int64_t param_1, uint *param_2)
{
  uint uVar1;
  uint *puVar2;
  uint64_t uVar3;
  char acStackX_8 [4];
  uint uStackX_c;
  
  // 计算哈希值
  uVar1 = *param_2;
  uVar3 = (uint64_t)uVar1 % (uint64_t)*(uint *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X10);
  puVar2 = *(uint **)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
  
  // 查找或创建条目
  do {
    if (puVar2 == (uint *)0x0) {
LAB_18033a781:
      // 创建新条目
      FUN_18066c220(param_1 + 0x20, acStackX_8, (uint64_t)*(uint *)(param_1 + RENDERING_SYSTEM_BUFFER_SIZE_0X10),
                    *(int32_t *)(param_1 + 0x18), 1);
      puVar2 = (uint *)FUN_18062b420(system_memory_pool_ptr, 0x18, *(int8_t *)(param_1 + 0x2c));
      *puVar2 = *param_2;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      
      // 处理哈希冲突
      if (acStackX_8[0] != '\0') {
        uVar3 = (uint64_t)uVar1 % (uint64_t)uStackX_c;
        FUN_18033bf30(param_1, uStackX_c);
      }
      
      // 插入哈希表
      *(uint64_t *)(puVar2 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
      *(uint **)(*(int64_t *)(param_1 + 8) + uVar3 * 8) = puVar2;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      
      return puVar2 + 2;
    }
    
    // 检查是否找到匹配的条目
    if (uVar1 == *puVar2) {
      if (puVar2 != (uint *)0x0) {
        return puVar2 + 2;
      }
      goto LAB_18033a781;
    }
    
    // 继续查找
    puVar2 = *(uint **)(puVar2 + 4);
  } while( true );
}

/**
 * 渲染系统哈希表插入器 - 向哈希表插入数据
 * 
 * 该函数负责向渲染系统的哈希表中插入数据。
 * 
 * @return 插入的数据指针
 */
int32_t * RenderingSystem_HashTableInserter(void)
{
  int32_t *puVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  uint64_t in_R9;
  int32_t *unaff_R14;
  int32_t uVar2;
  char cStack0000000000000050;
  
  uVar2 = 1;
  
  // 调用预处理函数
  FUN_18066c220();
  
  // 分配内存
  puVar1 = (int32_t *)
           FUN_18062b420(system_memory_pool_ptr, 0x18, *(int8_t *)(unaff_RBX + 0x2c), in_R9, uVar2);
  
  // 设置数据
  *puVar1 = *unaff_R14;
  *(uint64_t *)(puVar1 + 2) = 0;
  *(uint64_t *)(puVar1 + 4) = 0;
  
  // 处理哈希冲突
  if (cStack0000000000000050 != '\0') {
    unaff_RBP = unaff_RDI % (_cStack0000000000000050 >> 0x20);
    FUN_18033bf30();
  }
  
  // 插入哈希表
  *(uint64_t *)(puVar1 + 4) = *(uint64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP * 8);
  *(int32_t **)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP * 8) = puVar1;
  *(int64_t *)(unaff_RBX + 0x18) = *(int64_t)(unaff_RBX + 0x18) + 1;
  
  return puVar1 + 2;
}

/**
 * 渲染系统哈希表查找器 - 在哈希表中查找数据
 * 
 * 该函数负责在渲染系统的哈希表中查找数据。
 * 
 * @param param_1 哈希表指针
 * @param param_2 查找参数1
 * @param param_3 查找参数2
 * @return 找到的数据指针
 */
int32_t * RenderingSystem_HashTableFinder(int64_t param_1, uint64_t param_2, uint64_t param_3)
{
  int32_t *puVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  int32_t *unaff_R14;
  char cStack0000000000000050;
  uint uStack0000000000000054;
  
  // 检查是否已找到
  if (in_RAX != 0) {
    return (int32_t *)(in_RAX + 8);
  }
  
  // 调用预处理函数
  FUN_18066c220(param_1 + 0x20, &stack0x00000050, param_3, *(int32_t *)(unaff_RBX + 0x18), 1);
  
  // 分配内存
  puVar1 = (int32_t *)FUN_18062b420(system_memory_pool_ptr, 0x18, *(int8_t *)(unaff_RBX + 0x2c));
  
  // 设置数据
  *puVar1 = *unaff_R14;
  *(uint64_t *)(puVar1 + 2) = 0;
  *(uint64_t *)(puVar1 + 4) = 0;
  
  // 处理哈希冲突
  if (cStack0000000000000050 != '\0') {
    unaff_RBP = unaff_RDI % (uint64_t)uStack0000000000000054;
    FUN_18033bf30();
  }
  
  // 插入哈希表
  *(uint64_t *)(puVar1 + 4) = *(uint64_t *)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP * 8);
  *(int32_t **)(*(int64_t *)(unaff_RBX + 8) + unaff_RBP * 8) = puVar1;
  *(int64_t)(unaff_RBX + 0x18) = *(int64_t)(unaff_RBX + 0x18) + 1;
  
  return puVar1 + 2;
}

/**
 * 渲染系统向量扩展器 - 扩展渲染系统向量容量
 * 
 * 该函数负责扩展渲染系统中向量的容量，以容纳更多数据。
 * 
 * @param param_1 向量指针
 * @param param_2 扩展参数
 */
void RenderingSystem_VectorExpander(int64_t *param_1, uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  puVar5 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  uVar3 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
  
  // 检查是否需要扩展
  if (param_2 <= uVar3) {
    param_1[1] = (int64_t)(puVar4 + param_2);
    return;
  }
  
  param_2 = param_2 - uVar3;
  
  // 检查剩余空间
  if (param_2 <= (uint64_t)(param_1[2] - (int64_t)puVar5 >> 3)) {
    uVar3 = param_2;
    if (param_2 != 0) {
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      puVar5 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar5 + param_2);
    return;
  }
  
  // 计算新的容量
  uVar6 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < uVar3 + param_2) {
    uVar6 = uVar3 + param_2;
  }
  
  // 分配新内存
  puVar2 = (uint64_t *)0x0;
  if (uVar6 != 0) {
    puVar2 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, uVar6 * 8, (char)param_1[3]);
    puVar4 = (uint64_t *)*param_1;
    puVar5 = (uint64_t *)param_1[1];
  }
  
  // 移动数据
  uVar3 = param_2;
  puVar1 = puVar2;
  if (puVar4 != puVar5) {
    memmove(puVar2, puVar4, (int64_t)puVar5 - (int64_t)puVar4);
  }
  
  // 清零新空间
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  
  // 释放旧内存
  if (*param_1 != 0) {
    CoreEngine_MemoryPoolManager();
  }
  
  // 更新指针
  *param_1 = (int64_t)puVar2;
  param_1[2] = (int64_t)(puVar2 + uVar6);
  param_1[1] = (int64_t)(puVar2 + param_2);
  
  return;
}

/**
 * 渲染系统向量调整器 - 调整渲染系统向量大小
 * 
 * 该函数负责调整渲染系统中向量的大小。
 * 
 * @param param_1 调整参数1
 * @param param_2 向量指针
 */
void RenderingSystem_VectorResizer(int64_t param_1, uint64_t *param_2)
{
  int64_t in_RAX;
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t uVar4;
  uint64_t unaff_RSI;
  int64_t *unaff_R14;
  
  // 检查是否需要调整
  if (unaff_RSI <= (uint64_t)(in_RAX >> 3)) {
    uVar4 = unaff_RSI;
    if (unaff_RSI != 0) {
      do {
        *unaff_RBX = 0;
        unaff_RBX = unaff_RBX + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      unaff_RBX = (uint64_t *)unaff_R14[1];
    }
    unaff_R14[1] = (int64_t)(unaff_RBX + unaff_RSI);
    return;
  }
  
  // 计算新的大小
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < param_1 + unaff_RSI) {
    uVar4 = param_1 + unaff_RSI;
  }
  
  // 分配新内存
  puVar1 = (uint64_t *)0x0;
  if (uVar4 != 0) {
    puVar1 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, uVar4 * 8, (char)unaff_R14[3]);
    param_2 = (uint64_t *)*unaff_R14;
    unaff_RBX = (uint64_t *)unaff_R14[1];
  }
  
  // 移动数据
  if (param_2 != unaff_RBX) {
    memmove(puVar1, param_2, (int64_t)unaff_RBX - (int64_t)param_2);
  }
  
  // 清零新空间
  puVar2 = puVar1;
  uVar3 = unaff_RSI;
  if (unaff_RSI != 0) {
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  
  // 更新指针
  if (*unaff_R14 == 0) {
    *unaff_R14 = (int64_t)puVar1;
    unaff_R14[2] = (int64_t)(puVar1 + uVar4);
    unaff_R14[1] = (int64_t)(puVar1 + unaff_RSI);
    return;
  }
  
  // 释放旧内存
  CoreEngine_MemoryPoolManager();
}

/**
 * 渲染系统向量清理器 - 清理渲染系统向量
 * 
 * 该函数负责清理渲染系统中的向量数据。
 */
void RenderingSystem_VectorClearer(void)
{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  
  lVar1 = unaff_RSI;
  
  // 清理向量元素
  if (unaff_RSI != 0) {
    do {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    unaff_RBX = *(uint64_t **)(unaff_R14 + 8);
  }
  
  // 重置指针
  *(uint64_t **)(unaff_R14 + 8) = unaff_RBX + unaff_RSI;
  
  return;
}

/**
 * 渲染系统向量定位器 - 定位渲染系统向量位置
 * 
 * 该函数负责定位渲染系统中向量的位置。
 * 
 * @param param_1 定位参数1
 * @param param_2 定位参数2
 */
void RenderingSystem_VectorPositioner(uint64_t param_1, int64_t param_2)
{
  int64_t unaff_RSI;
  int64_t unaff_R14;
  
  // 计算并设置位置
  *(int64_t *)(unaff_R14 + 8) = param_2 + unaff_RSI * 8;
  
  return;
}

/**
 * 渲染系统迭代器清理器 - 清理渲染系统迭代器
 * 
 * 该函数负责清理渲染系统中的迭代器资源。
 * 
 * @param param_1 迭代器指针
 */
void RenderingSystem_IteratorCleaner(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  
  // 清理迭代器元素
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + RENDERING_SYSTEM_BUFFER_SIZE_0X1A0) {
    FUN_180281e80(lVar2);
  }
  
  // 检查是否需要进一步清理
  if (*param_1 == 0) {
    return;
  }
  
  // 调用最终清理函数
  CoreEngine_MemoryPoolManager();
}

/**
 * 渲染系统上下文清理器 - 清理渲染系统上下文
 * 
 * 该函数负责清理渲染系统的上下文资源。
 * 
 * @param param_1 上下文指针
 */
void RenderingSystem_ContextCleaner(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  
  // 清理上下文元素
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + RENDERING_SYSTEM_BUFFER_SIZE_0XB0) {
    FUN_180320a20(lVar2);
  }
  
  // 检查是否需要进一步清理
  if (*param_1 == 0) {
    return;
  }
  
  // 调用最终清理函数
  CoreEngine_MemoryPoolManager();
}