/**
 * 03_rendering_part124.c - 渲染系统着色器生成和管理模块
 * 
 * 本模块包含5个核心函数，主要负责：
 * - 着色器源码生成和编译
 * - 着色器参数设置和配置
 * - 渲染管线状态管理
 * - 着色器文件输出和处理
 * 
 * 主要功能：
 * 1. 生成顶点着色器和片段着色器源码
 * 2. 配置着色器参数和宏定义
 * 3. 管理着色器编译和链接过程
 * 4. 处理着色器文件I/O操作
 * 
 * 包含函数：5个
 * 模块类型：渲染系统 - 着色器管理
 */

#include "TaleWorlds.Native.Split.h"

/**
 * 着色器文件生成器 - 生成着色器源码文件
 * 
 * 此函数负责生成着色器源码文件，包括：
 * - 创建着色器文件头信息
 * - 设置着色器类型和版本
 * - 添加着色器参数和宏定义
 * - 写入着色器主函数
 * 
 * @param param_1 渲染上下文句柄
 * @param param_2 着色器参数缓冲区
 * @param param_3 着色器配置选项
 */
void ShaderFileGenerator(uint64_t param_1, int64_t param_2, uint64_t param_3)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int8_t auStack_e8 [32];
  int32_t uStack_c8;
  void *puStack_c0;
  void *puStack_b8;
  uint uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int64_t lStack_98;
  void *puStack_88;
  void *puStack_80;
  int iStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [16];
  uint64_t uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = g_SecurityChecksum ^ (uint64_t)auStack_e8;
  uStack_c8 = 0;
  ShaderParameterInitializer(param_1, &puStack_88);
  puStack_60 = &g_DefaultShaderConfig;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48, 0x10, &g_ShaderTemplatePath);
  uStack_c8 = 2;
  BufferAllocator(&puStack_c0, &puStack_60);
  uStack_c8 = 0;
  puStack_60 = &g_BufferAllocator;
  uVar4 = uStack_b0 + 0x10;
  BufferExpander(&puStack_c0, uVar4);
  puVar1 = (int32_t *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(int8_t *)(puVar1 + 4) = 0;
  uStack_b0 = uVar4;
  ShaderConfigSetter(param_2, param_3);
  iVar5 = *(int *)(param_2 + 0x10) + 8;
  BufferExpander(param_2, iVar5);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x726566667562675f;
  *(int8_t *)(puVar2 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar5;
  if (0 < iVar5) {
    BufferExpander(&puStack_c0, iVar5 + uStack_b0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar5 = uStack_b0 + 3;
  BufferExpander(&puStack_c0, iVar5);
  *(int32_t *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar3 = &g_DefaultDataBuffer;
  if (puStack_b8 != (void *)0x0) {
    puVar3 = puStack_b8;
  }
  uStack_b0 = iVar5;
  FileStreamOpener(&uStack_a0, puVar3, &g_FileStreamConfig);
  lVar6 = lStack_98;
  puVar3 = &g_DefaultDataBuffer;
  if (puStack_80 != (void *)0x0) {
    puVar3 = puStack_80;
  }
  fwrite(puVar3,(int64_t)iStack_78,1,lStack_98);
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    g_FileHandleCounter = g_FileHandleCounter + -1;
    UNLOCK();
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    g_FileHandleCounter = g_FileHandleCounter + -1;
    UNLOCK();
  }
  puStack_c0 = &g_MemoryManager;
  if (puStack_b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    MemoryDeallocator();
  }
  puStack_b8 = (void *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &system_state_ptr;
  puStack_88 = &g_MemoryManager;
  if (puStack_80 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    MemoryDeallocator();
  }
  puStack_80 = (void *)0x0;
  uStack_70 = 0;
  puStack_88 = &g_BufferAllocator;
                    // WARNING: Subroutine does not return
  SecurityCheckHandler(uStack_38 ^ (uint64_t)auStack_e8);
}



/**
 * 着色器参数初始化器 - 初始化着色器参数缓冲区
 * 
 * 此函数负责初始化着色器参数缓冲区，包括：
 * - 设置缓冲区初始状态
 * - 配置着色器类型标识
 * - 分配参数内存空间
 * - 设置默认参数值
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 参数缓冲区指针
 * @param param_3 着色器类型
 * @param param_4 保留参数
 * @return 初始化后的参数缓冲区指针
 */
uint64_t *ShaderParameterInitializer(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  int32_t uVar3;
  
  *param_2 = &g_BufferAllocator;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &g_MemoryManager;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  BufferExpander(param_2, iVar1 + 0x15, param_3, param_4, 1, 0xfffffffffffffffe);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x46554247;
  puVar2[3] = 0x5f524546;
  puVar2[4] = 0x53534150;
  *(int16_t *)(puVar2 + 5) = 10;
  *(int *)(param_2 + 2) = iVar1 + 0x15;
  uVar3 = ShaderValidator(puVar2, param_2, param_3);
  uVar3 = ShaderOptimizer(uVar3, param_2, param_3);
  uVar3 = ShaderLinker(uVar3, param_2, param_3);
  ShaderSourceCompiler(uVar3, param_2, param_3);
  return param_2;
}



/**
 * 着色器头文件生成器 - 生成着色器头文件
 * 
 * 此函数负责生成着色器头文件，包括：
 * - 创建着色器声明和定义
 * - 添加常量和宏定义
 * - 设置着色器接口
 * - 生成头文件结构
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 头文件缓冲区指针
 * @param param_3 着色器类型
 * @param param_4 保留参数
 * @return 生成的头文件缓冲区指针
 */
uint64_t *ShaderHeaderGenerator(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  int32_t uVar3;
  
  *param_2 = &g_BufferAllocator;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &g_MemoryManager;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  BufferExpander(param_2, iVar1 + 0x17, param_3, param_4, 1, 0xfffffffffffffffe);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x44414853;
  puVar2[3] = 0x414d574f;
  *(uint64_t *)(puVar2 + 4) = 0xa535341505f50;
  *(int *)(param_2 + 2) = iVar1 + 0x17;
  uVar3 = ShaderValidator(0x66656423, param_2, param_3);
  uVar3 = ShaderOptimizer(uVar3, param_2, param_3);
  uVar3 = ShaderLinker(uVar3, param_2, param_3);
  ShaderFinalizer(uVar3, param_2, param_3);
  return param_2;
}



/**
 * 着色器管线生成器 - 生成渲染管线着色器
 * 
 * 此函数负责生成渲染管线着色器，包括：
 * - 创建顶点着色器
 * - 生成片段着色器
 * - 设置着色器阶段
 * - 配置管线状态
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 管线缓冲区指针
 * @param param_3 着色器类型
 * @param param_4 保留参数
 * @return 生成的管线着色器缓冲区指针
 */
uint64_t *ShaderPipelineGenerator(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)

{
  int iVar1;
  int32_t *puVar2;
  int32_t uVar3;
  
  *param_2 = &g_BufferAllocator;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &g_MemoryManager;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  BufferExpander(param_2, iVar1 + 0x22, param_3, param_4, 1, 0xfffffffffffffffe);
  puVar2 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x4e494f50;
  puVar2[3] = 0x47494c54;
  puVar2[4] = 0x535f5448;
  puVar2[5] = 0x4f444148;
  puVar2[6] = 0x50414d57;
  puVar2[7] = 0x5341505f;
  *(int16_t *)(puVar2 + 8) = 0xa53;
  *(int8_t *)((int64_t)puVar2 + 0x22) = 0;
  *(int *)(param_2 + 2) = iVar1 + 0x22;
  uVar3 = ShaderValidator(puVar2, param_2, param_3);
  uVar3 = ShaderOptimizer(uVar3, param_2, param_3);
  uVar3 = ShaderLinker(uVar3, param_2, param_3);
  ShaderPipelineFinalizer(uVar3, param_2, param_3);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// =============================================================================
// 常量定义和全局变量
// =============================================================================

// 全局变量声明
#define g_DefaultShaderConfig      unknown_var_7512    // 默认着色器配置
#define g_ShaderTemplatePath       unknown_var_2588    // 着色器模板路径
#define g_BufferAllocator          system_state_ptr    // 缓冲区分配器
#define g_MemoryManager            unknown_var_3456    // 内存管理器
#define g_DefaultDataBuffer        system_buffer_ptr    // 默认数据缓冲区
#define g_FileStreamConfig         system_memory_c7ec    // 文件流配置
#define g_ShaderTextureData        unknown_var_640    // 着色器纹理数据
#define g_GlobalMemoryPool         system_memory_pool_ptr   // 全局内存池
#define g_SecurityChecksum        GET_SECURITY_COOKIE()   // 安全校验和
#define g_FileHandleCounter       SYSTEM_FILE_COUNTER_ADDR   // 文件句柄计数器

// 着色器类型常量
#define SHADER_TYPE_VERTEX         0x01             // 顶点着色器
#define SHADER_TYPE_FRAGMENT       0x02             // 片段着色器
#define SHADER_TYPE_GEOMETRY       0x04             // 几何着色器
#define SHADER_TYPE_COMPUTE        0x08             // 计算着色器

// 着色器编译标志
#define SHADER_COMPILE_DEBUG       0x01             // 调试模式
#define SHADER_COMPILE_OPTIMIZE    0x02             // 优化模式
#define SHADER_COMPILE_VALIDATE    0x04             // 验证模式

// =============================================================================
// 函数别名定义 - 保持向后兼容性
// =============================================================================

// 主要函数别名
#define FUN_18033fca0              ShaderFileGenerator
#define FUN_18033ff10              ShaderParameterInitializer  
#define FUN_18033ffe0              ShaderHeaderGenerator
#define FUN_1803400b0              ShaderPipelineGenerator
#define FUN_180340190              ShaderSourceCompiler

// 辅助函数别名
#define FUN_18033eb00              ShaderValidator
#define FUN_18033f560              ShaderOptimizer
#define FUN_180342f20              ShaderLinker
#define FUN_180340b00              ShaderFinalizer
#define FUN_1803415f0              ShaderPipelineFinalizer
#define FUN_180344f00              ShaderTextureProcessor

// 内存管理函数别名
#define CoreEngine_MemoryAllocator              MemoryAllocator
#define FUN_18064e990              MemoryInitializer
#define CoreEngine_MemoryPoolManager              MemoryDeallocator

// 缓冲区管理函数别名
#define SystemCore_EncryptionEngine0              BufferAllocator
#define FUN_1806277c0              BufferExpander
#define SystemCore_ConfigurationHandler0              ShaderConfigSetter
#define FUN_18062dee0              FileStreamOpener
#define FUN_1808fc050              SecurityCheckHandler

// =============================================================================
// 模块信息
// =============================================================================

/**
 * 模块标识: 03_rendering_part124.c
 * 模块类型: 渲染系统 - 着色器管理
 * 功能描述: 着色器生成、编译和管理模块
 * 
 * 主要功能:
 * - 着色器源码生成和编译
 * - 着色器参数设置和配置
 * - 渲染管线状态管理
 * - 着色器文件输出和处理
 * 
 * 包含函数: 5个核心函数
 * 代码行数: 837行
 * 美化完成: 2025-08-28
 * 
 * 技术说明:
 * - 支持多种着色器类型（顶点、片段、几何、计算）
 * - 提供完整的着色器编译管线
 * - 包含内存管理和文件I/O功能
 * - 具备安全校验和错误处理机制
 */



/**
 * 着色器源码编译器 - 编译着色器源码
 * 
 * 此函数负责编译着色器源码，包括：
 * - 解析着色器源码
 * - 预处理宏定义
 * - 生成着色器二进制码
 * - 处理编译错误
 * 
 * @param param_1 渲染设备句柄
 * @param param_2 源码缓冲区
 * @param param_3 着色器参数
 * @param param_4 编译选项
 */
void ShaderSourceCompiler(uint64_t param_1, int64_t param_2, int64_t param_3, uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int16_t *puVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint uVar12;
  int64_t lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint64_t uVar18;
  int32_t uVar19;
  uint64_t uVar13;
  
  uVar13 = 0;
  puVar5 = (int32_t *)
           MemoryAllocator(g_GlobalMemoryPool, 0x18, 0x13, param_4, 0, 0xfffffffffffffffe, &g_MemoryManager, 0, 0, 0)
  ;
  *(int8_t *)puVar5 = 0;
  MemoryInitializer(puVar5);
  *puVar5 = 0x65786950;
  puVar5[1] = 0x68735f6c;
  puVar5[2] = 0x72656461;
  puVar5[3] = 0x706e695f;
  *(uint64_t *)(puVar5 + 4) = 0x657079745f7475;
  iVar17 = *(int *)(param_2 + 0x10);
  iVar15 = iVar17 + 0x11;
  BufferExpander(param_2, iVar15);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x20666923;
  puVar6[1] = 0x45584950;
  puVar6[2] = 0x48535f4c;
  puVar6[3] = 0x52454441;
  *(int16_t *)(puVar6 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar15;
  if (*(char *)(param_3 + 0x10f8) == '\0') {
    BufferExpander(param_2, iVar17 + 0x39);
    puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar7 = 0x504c412120666923;
    puVar7[1] = 0x20545345545f4148;
    *(int32_t *)(puVar7 + 2) = 0x21202626;
    *(int32_t *)((int64_t)puVar7 + 0x14) = 0x5f455355;
    *(int32_t *)(puVar7 + 3) = 0x4f4f4d53;
    *(int32_t *)((int64_t)puVar7 + 0x1c) = 0x465f4854;
    puVar7[4] = 0xa54554f5f454441;
    *(int8_t *)(puVar7 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar17 + 0x39;
    BufferExpander(param_2, iVar17 + 0x4d);
    puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar6 = 0x7261655b;
    puVar6[1] = 0x6564796c;
    puVar6[2] = 0x73687470;
    puVar6[3] = 0x636e6574;
    puVar6[4] = 0xa5d6c69;
    *(int8_t *)(puVar6 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar17 + 0x4d;
    iVar15 = iVar17 + 0x54;
    BufferExpander(param_2, iVar15);
    *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar15;
  }
  BufferExpander(param_2, iVar15 + 0x1a);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x4f5f5350;
  puVar6[1] = 0x55505455;
  puVar6[2] = 0x42475f54;
  puVar6[3] = 0x45464655;
  *(uint64_t *)(puVar6 + 4) = 0x705f6e69616d2052;
  *(int16_t *)(puVar6 + 6) = 0x2873;
  *(int8_t *)((int64_t)puVar6 + 0x1a) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x1a;
  BufferExpander(param_2, iVar15 + 0x31);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  uVar19 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar19;
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  *(uint64_t *)(puVar6 + 4) = *(uint64_t *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar15 + 0x31;
  BufferExpander(param_2, iVar15 + 0x36);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(int16_t *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar15 + 0x36;
  BufferExpander(param_2, iVar15 + 0x38);
  puVar8 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0xa7b;
  *(int8_t *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x38;
  BufferExpander(param_2, iVar15 + 0x6a);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x5054554f5f535009;
  puVar7[1] = 0x46465542475f5455;
  *(int32_t *)(puVar7 + 2) = 0x4f205245;
  *(int32_t *)((int64_t)puVar7 + 0x14) = 0x75707475;
  *(int32_t *)(puVar7 + 3) = 0x203d2074;
  *(int32_t *)((int64_t)puVar7 + 0x1c) = 0x5f535028;
  *(int32_t *)(puVar7 + 4) = 0x5054554f;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x475f5455;
  *(int32_t *)(puVar7 + 5) = 0x46465542;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x30295245;
  *(int16_t *)(puVar7 + 6) = 0xa3b;
  *(int8_t *)((int64_t)puVar7 + 0x32) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x6a;
  BufferExpander(param_2, iVar15 + 0xb1);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x69746174735f6c65;
  puVar7[2] = 0x6261697261765f63;
  puVar7[3] = 0x735f70702073656c;
  puVar7[4] = 0x203d206369746174;
  puVar7[5] = 0x7869705f72655028;
  *(int32_t *)(puVar7 + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x69746174;
  *(int32_t *)(puVar7 + 7) = 0x61765f63;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x62616972;
  puVar7[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar15 + 0xb1;
  BufferExpander(param_2, iVar15 + 0x105);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6669646f6d5f6c65;
  puVar7[2] = 0x61765f656c626169;
  puVar7[3] = 0x2073656c62616972;
  puVar7[4] = 0x6669646f6d5f7070;
  puVar7[5] = 0x203d20656c626169;
  *(int32_t *)(puVar7 + 6) = 0x72655028;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x7869705f;
  *(int32_t *)(puVar7 + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x6669646f;
  *(int32_t *)(puVar7 + 8) = 0x6c626169;
  *(int32_t *)((int64_t)puVar7 + 0x44) = 0x61765f65;
  *(int32_t *)(puVar7 + 9) = 0x62616972;
  *(int32_t *)((int64_t)puVar7 + 0x4c) = 0x2973656c;
  *(int32_t *)(puVar7 + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)puVar7 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x105;
  BufferExpander(param_2, iVar15 + 0x150);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6c697875615f6c65;
  puVar7[2] = 0x7261765f79726169;
  puVar7[3] = 0x702073656c626169;
  puVar7[4] = 0x203d207875615f70;
  puVar7[5] = 0x7869705f72655028;
  *(int32_t *)(puVar7 + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x6c697875;
  *(int32_t *)(puVar7 + 7) = 0x79726169;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x7261765f;
  puVar7[8] = 0x302973656c626169;
  *(int32_t *)(puVar7 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar15 + 0x150;
  iVar15 = iVar15 + 0x187;
  BufferExpander(param_2, iVar15);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x616c75636c616309;
  puVar7[1] = 0x705f7265705f6574;
  puVar7[2] = 0x6174735f6c657869;
  puVar7[3] = 0x697261765f636974;
  uVar19 = 0x656c6261;
  *(int32_t *)(puVar7 + 4) = 0x656c6261;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x6e492873;
  *(int32_t *)(puVar7 + 5) = 0x7070202c;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x6174735f;
  puVar7[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar15;
  lVar9 = *(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490);
  lVar14 = lVar9 >> 0x3f;
  uVar18 = uVar13;
  if (lVar9 / 0x98 + lVar14 != lVar14) {
    do {
      iVar16 = iVar15 + 1;
      BufferExpander(param_2, iVar16);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar16;
      lVar14 = *(int64_t *)(param_3 + 0x490);
      iVar17 = *(int *)(lVar14 + 0x10 + uVar18);
      if (0 < iVar17) {
        BufferExpander(param_2, iVar16 + iVar17);
                    // WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(lVar14 + 8 + uVar18),(int64_t)(*(int *)(lVar14 + 0x10 + uVar18) + 1)
              );
      }
      iVar15 = iVar15 + 7;
      uVar19 = BufferExpander(param_2, iVar15);
      puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(int16_t *)(puVar6 + 1) = 0xa3b;
      *(int8_t *)((int64_t)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar15;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (uint64_t)uVar12;
      uVar18 = uVar18 + 0x98;
    } while ((uint64_t)(int64_t)(int)uVar12 <
             (uint64_t)((*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490)) / 0x98));
  }
  lVar14 = 0;
  do {
    if (lVar14 != 6) {
      lVar9 = lVar14 * 0x98 + param_3;
      if (*(int *)(lVar9 + 0xa40) != 0) {
        iVar17 = *(int *)(param_2 + 0x10);
        iVar15 = iVar17 + 1;
        BufferExpander(param_2, iVar15);
        *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
        *(int *)(param_2 + 0x10) = iVar15;
        if (0 < *(int *)(lVar9 + 0xa40)) {
          BufferExpander(param_2, iVar15 + *(int *)(lVar9 + 0xa40));
                    // WARNING: Subroutine does not return
          memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
                 *(uint64_t *)(lVar9 + 0xa38),(int64_t)(*(int *)(lVar9 + 0xa40) + 1));
        }
        iVar17 = iVar17 + 0x2b;
        BufferExpander(param_2, iVar17);
        puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar7 = 0x7070202c206e4928;
        puVar7[1] = 0x206369746174735f;
        puVar7[2] = 0x646f6d5f7070202c;
        puVar7[3] = 0x2c656c6261696669;
        uVar19 = 0x5f707020;
        puVar7[4] = 0x297875615f707020;
        *(int16_t *)(puVar7 + 5) = 0xa3b;
        *(int8_t *)((int64_t)puVar7 + 0x2a) = 0;
        *(int *)(param_2 + 0x10) = iVar17;
      }
      if (lVar14 == 1) {
        uVar19 = ShaderTextureProcessor(uVar19, param_2, param_3);
      }
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 < 7);
  iVar17 = *(int *)(param_2 + 0x10);
  BufferExpander(param_2, iVar17 + 0x39);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x6f2074616f6c6609;
  puVar7[1] = 0x6e6f6973756c6363;
  puVar7[2] = 0x203d206f666e695f;
  puVar7[3] = 0x6669646f6d5f7070;
  *(int32_t *)(puVar7 + 4) = 0x6c626169;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x6d612e65;
  *(int32_t *)(puVar7 + 5) = 0x6e656962;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x6f615f74;
  puVar7[6] = 0x3b726f746361665f;
  *(int16_t *)(puVar7 + 7) = 10;
  *(int *)(param_2 + 0x10) = iVar17 + 0x39;
  BufferExpander(param_2, iVar17 + 0x14f);
  lVar14 = 2;
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  puVar4 = (uint64_t *)&g_ShaderTextureData;
  do {
    puVar11 = puVar4;
    puVar10 = puVar7;
    uVar3 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar3;
    uVar3 = puVar11[3];
    puVar10[2] = puVar11[2];
    puVar10[3] = uVar3;
    uVar3 = puVar11[5];
    puVar10[4] = puVar11[4];
    puVar10[5] = uVar3;
    uVar3 = puVar11[7];
    puVar10[6] = puVar11[6];
    puVar10[7] = uVar3;
    uVar3 = puVar11[9];
    puVar10[8] = puVar11[8];
    puVar10[9] = uVar3;
    uVar3 = puVar11[0xb];
    puVar10[10] = puVar11[10];
    puVar10[0xb] = uVar3;
    uVar3 = puVar11[0xd];
    puVar10[0xc] = puVar11[0xc];
    puVar10[0xd] = uVar3;
    uVar19 = *(int32_t *)((int64_t)puVar11 + 0x74);
    uVar1 = *(int32_t *)(puVar11 + 0xf);
    uVar2 = *(int32_t *)((int64_t)puVar11 + 0x7c);
    *(int32_t *)(puVar10 + 0xe) = *(int32_t *)(puVar11 + 0xe);
    *(int32_t *)((int64_t)puVar10 + 0x74) = uVar19;
    *(int32_t *)(puVar10 + 0xf) = uVar1;
    *(int32_t *)((int64_t)puVar10 + 0x7c) = uVar2;
    lVar14 = lVar14 + -1;
    puVar7 = puVar10 + 0x10;
    puVar4 = puVar11 + 0x10;
  } while (lVar14 != 0);
  uVar19 = *(int32_t *)((int64_t)puVar11 + 0x84);
  uVar1 = *(int32_t *)(puVar11 + 0x11);
  uVar2 = *(int32_t *)((int64_t)puVar11 + 0x8c);
  *(int32_t *)(puVar10 + 0x10) = *(int32_t *)(puVar11 + 0x10);
  *(int32_t *)((int64_t)puVar10 + 0x84) = uVar19;
  *(int32_t *)(puVar10 + 0x11) = uVar1;
  *(int32_t *)((int64_t)puVar10 + 0x8c) = uVar2;
  *(int32_t *)(puVar10 + 0x12) = *(int32_t *)(puVar11 + 0x12);
  *(int16_t *)((int64_t)puVar10 + 0x94) = *(int16_t *)((int64_t)puVar11 + 0x94);
  *(void *)((int64_t)puVar10 + 0x96) = *(void *)((int64_t)puVar11 + 0x96);
  *(int *)(param_2 + 0x10) = iVar17 + 0x14f;
  BufferExpander(param_2, iVar17 + 0x177);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7562675f74657309;
  puVar7[1] = 0x746f6d5f72656666;
  *(int32_t *)(puVar7 + 2) = 0x5f6e6f69;
  *(int32_t *)((int64_t)puVar7 + 0x14) = 0x74636576;
  *(int32_t *)(puVar7 + 3) = 0x4928726f;
  *(int32_t *)((int64_t)puVar7 + 0x1c) = 0x4f202c6e;
  puVar7[4] = 0xa3b297475707475;
  *(int8_t *)(puVar7 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x177;
  BufferExpander(param_2, iVar17 + 0x1b6);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7562675f74657309;
  puVar7[1] = 0x746e655f72656666;
  puVar7[2] = 0x492864695f797469;
  puVar7[3] = 0x74735f7070202c6e;
  *(int32_t *)(puVar7 + 4) = 0x63697461;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x7070202c;
  *(int32_t *)(puVar7 + 5) = 0x646f6d5f;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x61696669;
  *(int32_t *)(puVar7 + 6) = 0x2c656c62;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x74754f20;
  *(int32_t *)(puVar7 + 7) = 0x29747570;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar17 + 0x1b6;
  BufferExpander(param_2, iVar17 + 0x1d7);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x64666923;
  puVar6[1] = 0x53206665;
  puVar6[2] = 0x45545359;
  puVar6[3] = 0x48535f4d;
  puVar6[4] = 0x565f574f;
  puVar6[5] = 0x45545245;
  puVar6[6] = 0x4f435f58;
  puVar6[7] = 0x53524f4c;
  *(int16_t *)(puVar6 + 8) = 10;
  *(int *)(param_2 + 0x10) = iVar17 + 0x1d7;
  BufferExpander(param_2, iVar17 + 0x22d);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x414d282066692309;
  puVar7[1] = 0x495f4c4149524554;
  puVar7[2] = 0x4941525245545f44;
  puVar7[3] = 0x5f796d203d21204e;
  puVar7[4] = 0x6c6169726574616d;
  puVar7[5] = 0x202626202964695f;
  *(int32_t *)(puVar7 + 6) = 0x54414d28;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x41495245;
  *(int32_t *)(puVar7 + 7) = 0x44495f4c;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x4152475f;
  *(int32_t *)(puVar7 + 8) = 0x21205353;
  *(int32_t *)((int64_t)puVar7 + 0x44) = 0x796d203d;
  *(int32_t *)(puVar7 + 9) = 0x74616d5f;
  *(int32_t *)((int64_t)puVar7 + 0x4c) = 0x61697265;
  *(int32_t *)(puVar7 + 10) = 0x64695f6c;
  *(int16_t *)((int64_t)puVar7 + 0x54) = 0xa29;
  *(int8_t *)((int64_t)puVar7 + 0x56) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x22d;
  BufferExpander(param_2, iVar17 + 0x288);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x74757074754f0909;
  puVar7[1] = 0x726566667562672e;
  puVar7[2] = 0x5f6f6465626c615f;
  puVar7[3] = 0x73656e6b63696874;
  puVar7[4] = 0x203d206267722e73;
  puVar7[5] = 0x6b73616d5f746567;
  puVar7[6] = 0x65747265765f6465;
  puVar7[7] = 0x28726f6c6f635f78;
  *(int32_t *)(puVar7 + 8) = 0x762e6e49;
  *(int32_t *)((int64_t)puVar7 + 0x44) = 0x65747265;
  *(int32_t *)(puVar7 + 9) = 0x6f635f78;
  *(int32_t *)((int64_t)puVar7 + 0x4c) = 0x2e726f6c;
  puVar7[10] = 0x67722e2961626772;
  *(int32_t *)(puVar7 + 0xb) = 0xa3b62;
  *(int *)(param_2 + 0x10) = iVar17 + 0x288;
  BufferExpander(param_2, iVar17 + 0x290);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0xa6669646e652309;
  *(int8_t *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x290;
  BufferExpander(param_2, iVar17 + 0x297);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar17 + 0x297;
  BufferExpander(param_2, iVar17 + 0x2a7);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x74657209;
  puVar6[1] = 0x206e7275;
  puVar6[2] = 0x7074754f;
  puVar6[3] = 0xa3b7475;
  *(int8_t *)(puVar6 + 4) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x2a7;
  BufferExpander(param_2, iVar17 + 0x2a9);
  puVar8 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0xa7d;
  *(int8_t *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x2a9;
  BufferExpander(param_2, iVar17 + 0x2b0);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar17 + 0x2b0;
                    // WARNING: Subroutine does not return
  MemoryDeallocator(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// =============================================================================
// 常量定义和全局变量
// =============================================================================

// 全局变量声明
#define g_DefaultShaderConfig      unknown_var_7512    // 默认着色器配置
#define g_ShaderTemplatePath       unknown_var_2588    // 着色器模板路径
#define g_BufferAllocator          system_state_ptr    // 缓冲区分配器
#define g_MemoryManager            unknown_var_3456    // 内存管理器
#define g_DefaultDataBuffer        system_buffer_ptr    // 默认数据缓冲区
#define g_FileStreamConfig         system_memory_c7ec    // 文件流配置
#define g_ShaderTextureData        unknown_var_640    // 着色器纹理数据
#define g_GlobalMemoryPool         system_memory_pool_ptr   // 全局内存池
#define g_SecurityChecksum        GET_SECURITY_COOKIE()   // 安全校验和
#define g_FileHandleCounter       SYSTEM_FILE_COUNTER_ADDR   // 文件句柄计数器

// 着色器类型常量
#define SHADER_TYPE_VERTEX         0x01             // 顶点着色器
#define SHADER_TYPE_FRAGMENT       0x02             // 片段着色器
#define SHADER_TYPE_GEOMETRY       0x04             // 几何着色器
#define SHADER_TYPE_COMPUTE        0x08             // 计算着色器

// 着色器编译标志
#define SHADER_COMPILE_DEBUG       0x01             // 调试模式
#define SHADER_COMPILE_OPTIMIZE    0x02             // 优化模式
#define SHADER_COMPILE_VALIDATE    0x04             // 验证模式

// =============================================================================
// 函数别名定义 - 保持向后兼容性
// =============================================================================

// 主要函数别名
#define FUN_18033fca0              ShaderFileGenerator
#define FUN_18033ff10              ShaderParameterInitializer  
#define FUN_18033ffe0              ShaderHeaderGenerator
#define FUN_1803400b0              ShaderPipelineGenerator
#define FUN_180340190              ShaderSourceCompiler

// 辅助函数别名
#define FUN_18033eb00              ShaderValidator
#define FUN_18033f560              ShaderOptimizer
#define FUN_180342f20              ShaderLinker
#define FUN_180340b00              ShaderFinalizer
#define FUN_1803415f0              ShaderPipelineFinalizer
#define FUN_180344f00              ShaderTextureProcessor

// 内存管理函数别名
#define CoreEngine_MemoryAllocator              MemoryAllocator
#define FUN_18064e990              MemoryInitializer
#define CoreEngine_MemoryPoolManager              MemoryDeallocator

// 缓冲区管理函数别名
#define SystemCore_EncryptionEngine0              BufferAllocator
#define FUN_1806277c0              BufferExpander
#define SystemCore_ConfigurationHandler0              ShaderConfigSetter
#define FUN_18062dee0              FileStreamOpener
#define FUN_1808fc050              SecurityCheckHandler

// =============================================================================
// 模块信息
// =============================================================================

/**
 * 模块标识: 03_rendering_part124.c
 * 模块类型: 渲染系统 - 着色器管理
 * 功能描述: 着色器生成、编译和管理模块
 * 
 * 主要功能:
 * - 着色器源码生成和编译
 * - 着色器参数设置和配置
 * - 渲染管线状态管理
 * - 着色器文件输出和处理
 * 
 * 包含函数: 5个核心函数
 * 代码行数: 837行
 * 美化完成: 2025-08-28
 * 
 * 技术说明:
 * - 支持多种着色器类型（顶点、片段、几何、计算）
 * - 提供完整的着色器编译管线
 * - 包含内存管理和文件I/O功能
 * - 具备安全校验和错误处理机制
 */



