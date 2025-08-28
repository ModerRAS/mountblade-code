#include "TaleWorlds.Native.Split.h"

// 01_initialization_part040.c - 初始化模块第40部分
// 本文件包含系统内存初始化、数据结构管理和资源分配相关的函数

/**
 * 初始化系统内存池
 * 初始化大型内存池的各个区域，设置默认值和容量
 * 
 * 该函数分配一个大型内存块（0x45ee8字节），然后初始化其中的多个内存区域。
 * 每个区域都有特定的偏移量和大小配置，用于系统资源管理。
 */
void initialize_system_memory_pool(void)
{
  longlong memory_pool;
  
  // 分配主内存池
  memory_pool = allocate_memory_block(GLOBAL_MEMORY_ALLOCATOR, 0x45ee8, 10);
  if (memory_pool == 0) {
    return;
  }
  
  // 初始化第一个内存区域（资源缓存区）
  *(undefined8 *)(memory_pool + 0x3500) = 0;           // 缓存区指针
  *(undefined8 *)(memory_pool + 0x3508) = 0;           // 缓存区大小
  *(undefined4 *)(memory_pool + 0x3530) = 0;           // 缓存区计数器
  *(undefined8 *)(memory_pool + 0x3538) = 0;           // 缓存区容量
  *(undefined2 *)(memory_pool + 0x3540) = 0x100;       // 缓存区块大小 (256)
  
  // 初始化第二个内存区域（纹理缓存区）
  *(undefined8 *)(memory_pool + 0x6a48) = 0;           // 纹理缓存指针
  *(undefined8 *)(memory_pool + 0x6a50) = 0;           // 纹理缓存大小
  *(undefined4 *)(memory_pool + 0x6a78) = 0;           // 纹理缓存计数器
  *(undefined8 *)(memory_pool + 0x6a80) = 0;           // 纹理缓存容量
  *(undefined2 *)(memory_pool + 0x6a88) = 0x100;       // 纹理缓存块大小 (256)
  
  // 初始化第三个内存区域（音频缓存区）
  *(undefined8 *)(memory_pool + 0x9f90) = 0;           // 音频缓存指针
  *(undefined8 *)(memory_pool + 0x9f98) = 0;           // 音频缓存大小
  *(undefined4 *)(memory_pool + 0x9fc0) = 0;           // 音频缓存计数器
  *(undefined8 *)(memory_pool + 0x9fc8) = 0;           // 音频缓存容量
  *(undefined2 *)(memory_pool + 0x9fd0) = 0x100;       // 音频缓存块大小 (256)
  
  // 初始化第四个内存区域（模型缓存区）
  *(undefined8 *)(memory_pool + 0xd4d8) = 0;           // 模型缓存指针
  *(undefined8 *)(memory_pool + 0xd4e0) = 0;           // 模型缓存大小
  *(undefined4 *)(memory_pool + 0xd508) = 0;           // 模型缓存计数器
  *(undefined8 *)(memory_pool + 0xd510) = 0;           // 模型缓存容量
  *(undefined2 *)(memory_pool + 0xd518) = 0x100;       // 模型缓存块大小 (256)
  
  // 初始化第五个内存区域（材质缓存区）
  *(undefined8 *)(memory_pool + 0x10a20) = 0;          // 材质缓存指针
  *(undefined8 *)(memory_pool + 0x10a28) = 0;          // 材质缓存大小
  *(undefined4 *)(memory_pool + 0x10a50) = 0;          // 材质缓存计数器
  *(undefined8 *)(memory_pool + 0x10a58) = 0;          // 材质缓存容量
  *(undefined2 *)(memory_pool + 0x10a60) = 0x100;      // 材质缓存块大小 (256)
  
  // 初始化第六个内存区域（着色器缓存区）
  *(undefined8 *)(memory_pool + 0x13f68) = 0;          // 着色器缓存指针
  *(undefined8 *)(memory_pool + 0x13f70) = 0;          // 着色器缓存大小
  *(undefined4 *)(memory_pool + 0x13f98) = 0;          // 着色器缓存计数器
  *(undefined8 *)(memory_pool + 0x13fa0) = 0;          // 着色器缓存容量
  *(undefined2 *)(memory_pool + 0x13fa8) = 0x100;      // 着色器缓存块大小 (256)
  
  // 初始化第七个内存区域（脚本缓存区）
  *(undefined8 *)(memory_pool + 0x174b0) = 0;          // 脚本缓存指针
  *(undefined8 *)(memory_pool + 0x174b8) = 0;          // 脚本缓存大小
  *(undefined4 *)(memory_pool + 0x174e0) = 0;          // 脚本缓存计数器
  *(undefined8 *)(memory_pool + 0x174e8) = 0;          // 脚本缓存容量
  *(undefined2 *)(memory_pool + 0x174f0) = 0x100;      // 脚本缓存块大小 (256)
  
  // 初始化第八个内存区域（UI资源缓存区）
  *(undefined8 *)(memory_pool + 0x1a9f8) = 0;          // UI缓存指针
  *(undefined8 *)(memory_pool + 0x1aa00) = 0;          // UI缓存大小
  *(undefined4 *)(memory_pool + 0x1aa28) = 0;          // UI缓存计数器
  *(undefined8 *)(memory_pool + 0x1aa30) = 0;          // UI缓存容量
  *(undefined2 *)(memory_pool + 0x1aa38) = 0x100;      // UI缓存块大小 (256)
  
  // 初始化第九个内存区域（网络缓存区）
  *(undefined8 *)(memory_pool + 0x1df40) = 0;          // 网络缓存指针
  *(undefined8 *)(memory_pool + 0x1df48) = 0;          // 网络缓存大小
  *(undefined4 *)(memory_pool + 0x1df70) = 0;          // 网络缓存计数器
  *(undefined8 *)(memory_pool + 0x1df78) = 0;          // 网络缓存容量
  *(undefined2 *)(memory_pool + 0x1df80) = 0x100;      // 网络缓存块大小 (256)
  
  // 初始化第十个内存区域（配置缓存区）
  *(undefined8 *)(memory_pool + 0x21488) = 0;          // 配置缓存指针
  *(undefined8 *)(memory_pool + 0x21490) = 0;          // 配置缓存大小
  *(undefined4 *)(memory_pool + 0x214b8) = 0;          // 配置缓存计数器
  *(undefined8 *)(memory_pool + 0x214c0) = 0;          // 配置缓存容量
  *(undefined2 *)(memory_pool + 0x214c8) = 0x100;      // 配置缓存块大小 (256)
  
  // 初始化第十一个内存区域（临时缓存区）
  *(undefined8 *)(memory_pool + 0x249d0) = 0;          // 临时缓存指针
  *(undefined8 *)(memory_pool + 0x249d8) = 0;          // 临时缓存大小
  *(undefined4 *)(memory_pool + 0x24a00) = 0;          // 临时缓存计数器
  *(undefined8 *)(memory_pool + 0x24a08) = 0;          // 临时缓存容量
  *(undefined2 *)(memory_pool + 0x24a10) = 0x100;      // 临时缓存块大小 (256)
  
  // 初始化第十二个内存区域（持久化缓存区）
  *(undefined8 *)(memory_pool + 0x27f18) = 0;          // 持久化缓存指针
  *(undefined8 *)(memory_pool + 0x27f20) = 0;          // 持久化缓存大小
  *(undefined4 *)(memory_pool + 0x27f48) = 0;          // 持久化缓存计数器
  *(undefined8 *)(memory_pool + 0x27f50) = 0;          // 持久化缓存容量
  *(undefined2 *)(memory_pool + 0x27f58) = 0x100;      // 持久化缓存块大小 (256)
  
  // 初始化第十三个内存区域（调试缓存区）
  *(undefined8 *)(memory_pool + 0x2b460) = 0;          // 调试缓存指针
  *(undefined8 *)(memory_pool + 0x2b468) = 0;          // 调试缓存大小
  *(undefined4 *)(memory_pool + 0x2b490) = 0;          // 调试缓存计数器
  *(undefined8 *)(memory_pool + 0x2b498) = 0;          // 调试缓存容量
  *(undefined2 *)(memory_pool + 0x2b4a0) = 0x100;      // 调试缓存块大小 (256)
  
  // 初始化第十四个内存区域（性能监控缓存区）
  *(undefined8 *)(memory_pool + 0x2e9a8) = 0;          // 性能缓存指针
  *(undefined8 *)(memory_pool + 0x2e9b0) = 0;          // 性能缓存大小
  *(undefined4 *)(memory_pool + 0x2e9d8) = 0;          // 性能缓存计数器
  *(undefined8 *)(memory_pool + 0x2e9e0) = 0;          // 性能缓存容量
  *(undefined2 *)(memory_pool + 0x2e9e8) = 0x100;      // 性能缓存块大小 (256)
  
  // 初始化第十五个内存区域（用户数据缓存区）
  *(undefined8 *)(memory_pool + 0x31ef0) = 0;          // 用户数据缓存指针
  *(undefined8 *)(memory_pool + 0x31ef8) = 0;          // 用户数据缓存大小
  *(undefined4 *)(memory_pool + 0x31f20) = 0;          // 用户数据缓存计数器
  *(undefined8 *)(memory_pool + 0x31f28) = 0;          // 用户数据缓存容量
  *(undefined2 *)(memory_pool + 0x31f30) = 0x100;      // 用户数据缓存块大小 (256)
  
  // 初始化第十六个内存区域（存档缓存区）
  *(undefined8 *)(memory_pool + 0x35438) = 0;          // 存档缓存指针
  *(undefined8 *)(memory_pool + 0x35440) = 0;          // 存档缓存大小
  *(undefined4 *)(memory_pool + 0x35468) = 0;          // 存档缓存计数器
  *(undefined8 *)(memory_pool + 0x35470) = 0;          // 存档缓存容量
  *(undefined2 *)(memory_pool + 0x35478) = 0x100;      // 存档缓存块大小 (256)
  
  // 初始化第十七个内存区域（MOD缓存区）
  *(undefined8 *)(memory_pool + 0x38980) = 0;          // MOD缓存指针
  *(undefined8 *)(memory_pool + 0x38988) = 0;          // MOD缓存大小
  *(undefined4 *)(memory_pool + 0x389b0) = 0;          // MOD缓存计数器
  *(undefined8 *)(memory_pool + 0x389b8) = 0;          // MOD缓存容量
  *(undefined2 *)(memory_pool + 0x389c0) = 0x100;      // MOD缓存块大小 (256)
  
  // 初始化第十八个内存区域（本地化缓存区）
  *(undefined8 *)(memory_pool + 0x3bec8) = 0;          // 本地化缓存指针
  *(undefined8 *)(memory_pool + 0x3bed0) = 0;          // 本地化缓存大小
  *(undefined4 *)(memory_pool + 0x3bef8) = 0;          // 本地化缓存计数器
  *(undefined8 *)(memory_pool + 0x3bf00) = 0;          // 本地化缓存容量
  *(undefined2 *)(memory_pool + 0x3bf08) = 0x100;      // 本地化缓存块大小 (256)
  
  // 初始化第十九个内存区域（输入设备缓存区）
  *(undefined8 *)(memory_pool + 0x3f410) = 0;          // 输入设备缓存指针
  *(undefined8 *)(memory_pool + 0x3f418) = 0;          // 输入设备缓存大小
  *(undefined4 *)(memory_pool + 0x3f440) = 0;          // 输入设备缓存计数器
  *(undefined8 *)(memory_pool + 0x3f448) = 0;          // 输入设备缓存容量
  *(undefined2 *)(memory_pool + 0x3f450) = 0x100;      // 输入设备缓存块大小 (256)
  
  // 初始化第二十个内存区域（渲染状态缓存区）
  *(undefined8 *)(memory_pool + 0x42958) = 0;          // 渲染状态缓存指针
  *(undefined8 *)(memory_pool + 0x42960) = 0;          // 渲染状态缓存大小
  *(undefined4 *)(memory_pool + 0x42988) = 0;          // 渲染状态缓存计数器
  *(undefined8 *)(memory_pool + 0x42990) = 0;          // 渲染状态缓存容量
  *(undefined2 *)(memory_pool + 0x42998) = 0x100;      // 渲染状态缓存块大小 (256)
  
  // 初始化第二十一个内存区域（物理引擎缓存区）
  *(undefined8 *)(memory_pool + 0x45ea0) = 0;          // 物理引擎缓存指针
  *(undefined8 *)(memory_pool + 0x45ea8) = 0;          // 物理引擎缓存大小
  *(undefined4 *)(memory_pool + 0x45ed0) = 0;          // 物理引擎缓存计数器
  *(undefined8 *)(memory_pool + 0x45ed8) = 0;          // 物理引擎缓存容量
  *(undefined2 *)(memory_pool + 0x45ee0) = 0x100;      // 物理引擎缓存块大小 (256)
  
  return;
}

/**
 * 设置资源释放处理器
 * 为资源管理器设置释放处理器，根据标志决定是否释放内存
 * 
 * @param resource_ptr 资源指针
 * @param flags 释放标志（位1表示需要释放内存）
 * @return 返回资源指针
 */
undefined8 * set_resource_release_handler(undefined8 *resource_ptr, ulonglong flags)
{
  *resource_ptr = &GLOBAL_RESOURCE_RELEASE_HANDLER;
  if ((flags & 1) != 0) {
    free(resource_ptr, 0x58);  // 释放88字节的资源结构
  }
  return resource_ptr;
}

/**
 * 清理资源管理器链表
 * 遍历并清理资源管理器链表中的所有节点
 * 
 * @param manager_ptr 资源管理器指针
 */
void cleanup_resource_manager_list(longlong *manager_ptr)
{
  int *node_counter;
  char *node_data;
  undefined8 *current_node;
  longlong list_size;
  ulonglong node_index;
  
  current_node = (undefined8 *)*manager_ptr;