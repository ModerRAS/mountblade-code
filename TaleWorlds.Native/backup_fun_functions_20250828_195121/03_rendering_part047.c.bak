#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part047.c - 渲染系统参数配置和资源管理模块
// 本文件包含10个核心函数，涵盖渲染参数初始化、资源管理、内存释放等关键功能

// 全局变量定义
#define RENDER_CONTEXT_BASE SYSTEM_DATA_MANAGER_A
#define MEMORY_ALLOCATOR SYSTEM_DATA_MANAGER_B

// 函数别名定义
#define initialize_rendering_parameters FUN_180290fd0
#define reset_rendering_context FUN_180291500
#define release_rendering_resources FUN_180291610
#define release_rendering_resources_extended FUN_18029161b
#define cleanup_rendering_data_arrays FUN_180291772
#define release_rendering_memory_pool FUN_180291839
#define deallocate_rendering_buffer FUN_18029184a
#define add_rendering_parameter_entry FUN_180291880
#define update_rendering_parameter_entry FUN_180291950
#define remove_rendering_parameter_entry FUN_180291a50

/**
 * 初始化渲染参数配置
 * 设置渲染系统的各种浮点参数值，包括缩放、偏移、颜色等
 * 
 * @param render_context 渲染上下文指针，如果为NULL则使用默认上下文
 */
void initialize_rendering_parameters(int64_t render_context)
{
  int64_t context_ptr;
  
  // 如果传入的上下文为空，使用默认渲染上下文
  if (render_context == 0) {
    context_ptr = RENDER_CONTEXT_BASE + 0x1628;
  } else {
    context_ptr = render_context;
  }
  
  // 设置基础缩放参数 (1.0, 1.0)
  *(uint64_t *)(context_ptr + 0xa0) = 0x3f8000003f800000;
  *(uint64_t *)(context_ptr + 0xa8) = 0x3f8000003f800000;
  
  // 设置细节层次参数 (0.05, 0.05)
  *(uint64_t *)(context_ptr + 0xc0) = 0x3d75c28f3d75c28f;
  *(uint64_t *)(context_ptr + 200) = 0x3f70a3d73d75c28f;
  
  // 设置UV映射参数 (0.08, 0.08)
  *(uint64_t *)(context_ptr + 0xe0) = 0x3da3d70a3da3d70a;
  *(uint64_t *)(context_ptr + 0xe8) = 0x3f70a3d73da3d70a;
  
  // 设置基础偏移参数 (0.5, 0.5)
  *(uint64_t *)(context_ptr + 0xb0) = 0x3f0000003f000000;
  *(uint64_t *)(context_ptr + 0xb8) = 0x3f8000003f000000;
  
  // 清零某些参数区域
  *(uint64_t *)(context_ptr + 0x100) = 0;
  *(uint64_t *)(context_ptr + 0x108) = 0;
  
  // 设置颜色混合参数
  *(uint64_t *)(context_ptr + 0x120) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x128) = 0x3ecccccd3f7ae148;
  
  // 清零更多参数区域
  *(uint64_t *)(context_ptr + 0xd0) = 0;
  *(uint64_t *)(context_ptr + 0xd8) = 0;
  
  // 设置纹理坐标参数
  *(uint64_t *)(context_ptr + 0x140) = 0x3d23d70a3d23d70a;
  *(uint64_t *)(context_ptr + 0x148) = 0x3f8000003d23d70a;
  
  // 设置高级渲染参数
  *(uint64_t *)(context_ptr + 0x110) = 0x3e947ae13e23d70a;
  *(uint64_t *)(context_ptr + 0x118) = 0x3f0a3d713ef5c28f;
  
  // 设置阴影参数
  *(uint64_t *)(context_ptr + 0x160) = 0;
  *(uint64_t *)(context_ptr + 0x168) = 0x3f028f5c00000000;
  
  // 设置光照参数
  *(uint64_t *)(context_ptr + 0x130) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x138) = 0x3f2b851f3f7ae148;
  
  // 设置环境光参数
  *(uint64_t *)(context_ptr + 0x180) = 0x3ca3d70a3ca3d70a;
  *(uint64_t *)(context_ptr + 0x188) = 0x3f07ae143ca3d70a;
  
  // 设置雾效参数
  *(uint64_t *)(context_ptr + 0x170) = 0x3e0f5c293e0f5c29;
  *(uint64_t *)(context_ptr + 0x178) = 0x3f8000003e0f5c29;
  
  // 设置反射参数
  *(uint64_t *)(context_ptr + 0x1a0) = 0x3ed1eb853ed1eb85;
  *(uint64_t *)(context_ptr + 0x1a8) = 0x3f8000003ed1eb85;
  
  // 设置折射参数
  *(uint64_t *)(context_ptr + 400) = 0x3e9eb8523e9eb852;
  *(uint64_t *)(context_ptr + 0x198) = 0x3f8000003e9eb852;
  
  // 设置多重采样参数
  *(uint64_t *)(context_ptr + 0x1c0) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x1c8) = 0x3f8000003f7ae148;
  
  // 设置抗锯齿参数
  *(uint64_t *)(context_ptr + 0x1e0) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x1e8) = 0x3f8000003f7ae148;
  
  // 设置深度参数
  *(uint64_t *)(context_ptr + 0x200) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x208) = 0x3f8000003f7ae148;
  
  // 设置模板参数
  *(uint64_t *)(context_ptr + 0x240) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x248) = 0x3f8000003f7ae148;
  
  // 设置混合参数
  *(uint64_t *)(context_ptr + 0x1b0) = 0x3f028f5c3f028f5c;
  *(uint64_t *)(context_ptr + 0x1b8) = 0x3f8000003f028f5c;
  
  // 设置滤镜参数
  *(uint64_t *)(context_ptr + 0x260) = 0x3ecccccd3dcccccd;
  *(uint64_t *)(context_ptr + 0x268) = 0x3f47ae143f400000;
  
  // 设置锐化参数
  *(uint64_t *)(context_ptr + 0x1d0) = 0x3f051eb83e75c28f;
  *(uint64_t *)(context_ptr + 0x1d8) = 0x3f8000003f6147ae;
  
  // 设置模糊参数
  *(uint64_t *)(context_ptr + 0x280) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x288) = 0x3e8000003f7ae148;
  
  // 设置噪声参数
  *(uint64_t *)(context_ptr + 0x1f0) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x1f8) = 0x3ecccccd3f7ae148;
  
  // 设置粒子参数
  *(uint64_t *)(context_ptr + 0xf0) = 0x3edc28f63edc28f6;
  *(uint64_t *)(context_ptr + 0xf8) = 0x3f0000003f000000;
  
  // 设置物理参数
  *(uint64_t *)(context_ptr + 0x250) = 0x3edc28f63edc28f6;
  *(uint64_t *)(context_ptr + 600) = 0x3f0000003f000000;
  
  // 设置后处理参数
  *(uint64_t *)(context_ptr + 0x2a0) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x2a8) = 0x3f7333333f7ae148;
  
  // 设置色调映射参数
  *(uint64_t *)(context_ptr + 0x210) = 0x3f07ae143d75c28f;
  *(uint64_t *)(context_ptr + 0x218) = 0x3f8000003f7ae148;
  
  // 设置伽马校正参数
  *(uint64_t *)(context_ptr + 0x270) = 0x3ecccccd3dcccccd;
  *(uint64_t *)(context_ptr + 0x278) = 0x3f8000003f400000;
  
  // 设置HDR参数
  *(uint64_t *)(context_ptr + 0x230) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x238) = 0x3f4ccccd3f7ae148;
  
  // 设置色彩空间参数
  *(uint64_t *)(context_ptr + 0x290) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x298) = 0x3f2b851f3f7ae148;
  
  // 设置曝光参数
  *(int32_t *)(context_ptr + 0x220) = 0x3e851eb8;
  *(int32_t *)(context_ptr + 0x224) = 0x3f170a3d;
  *(int32_t *)(context_ptr + 0x228) = 0x3f7ae148;
  *(int32_t *)(context_ptr + 0x22c) = 0x3e9eb852;
  
  // 设置对比度参数
  *(int32_t *)(context_ptr + 0x150) = 0x3e23d70a;
  *(int32_t *)(context_ptr + 0x154) = 0x3e947ae1;
  *(int32_t *)(context_ptr + 0x158) = 0x3ef5c28f;
  *(int32_t *)(context_ptr + 0x15c) = 0x3f800000;
  
  // 设置高级色彩参数
  *(uint64_t *)(context_ptr + 0x2c0) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x2c8) = 0x3f4ccccd3f7ae148;
  
  // 设置饱和度参数
  *(int32_t *)(context_ptr + 0x2b0) = 0x3e3851eb;
  *(int32_t *)(context_ptr + 0x2b4) = 0x3eb33332;
  
  // 动态计算亮度参数 (基于插值)
  *(float *)(context_ptr + 0x2b8) =
       (*(float *)(context_ptr + 0x158) - *(float *)(context_ptr + 0x228)) * 0.8 +
       *(float *)(context_ptr + 0x228);
  
  // 动态计算暗度参数 (基于插值)
  *(float *)(context_ptr + 700) =
       (*(float *)(context_ptr + 0x15c) - *(float *)(context_ptr + 0x22c)) * 0.8 +
       *(float *)(context_ptr + 0x22c);
  
  // 动态计算红色通道参数 (基于插值)
  *(float *)(context_ptr + 0x2d0) =
       (*(float *)(context_ptr + 0x150) - *(float *)(context_ptr + 0x240)) * 0.6 +
       *(float *)(context_ptr + 0x240);
  
  // 动态计算绿色通道参数 (基于插值)
  *(float *)(context_ptr + 0x2d4) =
       (*(float *)(context_ptr + 0x154) - *(float *)(context_ptr + 0x244)) * 0.6 +
       *(float *)(context_ptr + 0x244);
  
  // 动态计算蓝色通道参数 (基于插值)
  *(float *)(context_ptr + 0x2d8) =
       (*(float *)(context_ptr + 0x158) - *(float *)(context_ptr + 0x248)) * 0.6 +
       *(float *)(context_ptr + 0x248);
  
  // 动态计算Alpha通道参数 (基于插值)
  *(float *)(context_ptr + 0x2dc) =
       (*(float *)(context_ptr + 0x15c) - *(float *)(context_ptr + 0x24c)) * 0.6 +
       *(float *)(context_ptr + 0x24c);
  
  // 动态计算色相参数 (基于插值)
  *(float *)(context_ptr + 0x2e0) =
       (*(float *)(context_ptr + 0x140) - *(float *)(context_ptr + 0x2b0)) * 0.8 +
       *(float *)(context_ptr + 0x2b0);
  
  // 动态计算饱和度参数 (基于插值)
  *(float *)(context_ptr + 0x2e4) =
       (*(float *)(context_ptr + 0x144) - *(float *)(context_ptr + 0x2b4)) * 0.8 +
       *(float *)(context_ptr + 0x2b4);
  
  // 动态计算明度参数 (基于插值)
  *(float *)(context_ptr + 0x2e8) =
       (*(float *)(context_ptr + 0x148) - *(float *)(context_ptr + 0x2b8)) * 0.8 +
       *(float *)(context_ptr + 0x2b8);
  
  // 动态计算亮度参数 (基于插值)
  *(float *)(context_ptr + 0x2ec) =
       (*(float *)(context_ptr + 0x14c) - *(float *)(context_ptr + 700)) * 0.8 + *(float *)(context_ptr + 700);
  
  // 动态计算红色通道参数 (基于插值)
  *(float *)(context_ptr + 0x2f0) =
       (*(float *)(context_ptr + 0x140) - *(float *)(context_ptr + 0x2d0)) * 0.4 +
       *(float *)(context_ptr + 0x2d0);
  
  // 动态计算绿色通道参数 (基于插值)
  *(float *)(context_ptr + 0x2f4) =
       (*(float *)(context_ptr + 0x144) - *(float *)(context_ptr + 0x2d4)) * 0.4 +
       *(float *)(context_ptr + 0x2d4);
  
  // 动态计算蓝色通道参数 (基于插值)
  *(float *)(context_ptr + 0x2f8) =
       (*(float *)(context_ptr + 0x148) - *(float *)(context_ptr + 0x2d8)) * 0.4 +
       *(float *)(context_ptr + 0x2d8);
  
  // 动态计算Alpha通道参数 (基于插值)
  *(float *)(context_ptr + 0x2fc) =
       (*(float *)(context_ptr + 0x14c) - *(float *)(context_ptr + 0x2dc)) * 0.4 +
       *(float *)(context_ptr + 0x2dc);
  
  // 设置色差参数
  *(uint64_t *)(context_ptr + 0x310) = 0x3e4ccccd3e4ccccd;
  *(uint64_t *)(context_ptr + 0x318) = 0x3f8000003e4ccccd;
  
  // 设置色域参数
  *(uint64_t *)(context_ptr + 800) = 0x3f1c28f63f1c28f6;
  *(uint64_t *)(context_ptr + 0x328) = 0x3f8000003f1c28f6;
  
  // 设置白平衡参数
  *(uint64_t *)(context_ptr + 0x330) = 0x3edc28f63f800000;
  *(uint64_t *)(context_ptr + 0x338) = 0x3f8000003eb33333;
  
  // 设置色彩温度参数
  *(uint64_t *)(context_ptr + 0x340) = 0x3f3333333f666666;
  *(uint64_t *)(context_ptr + 0x348) = 0x3f80000000000000;
  
  // 设置色彩平衡参数
  *(uint64_t *)(context_ptr + 0x350) = 0x3f19999a3f800000;
  *(uint64_t *)(context_ptr + 0x358) = 0x3f80000000000000;
  
  // 设置色彩分级参数
  *(uint64_t *)(context_ptr + 0x360) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x368) = 0x3eb333333f7ae148;
  
  // 设置色彩校正参数
  *(uint64_t *)(context_ptr + 0x370) = 0x3f8000003f800000;
  *(uint64_t *)(context_ptr + 0x378) = 0x3f66666600000000;
  
  // 设置色彩增强参数
  *(uint64_t *)(context_ptr + 0x380) = 0x3f170a3d3e851eb8;
  *(uint64_t *)(context_ptr + 0x388) = 0x3f8000003f7ae148;
  
  // 设置色彩还原参数
  *(uint64_t *)(context_ptr + 0x390) = 0x3f8000003f800000;
  *(uint64_t *)(context_ptr + 0x398) = 0x3f3333333f800000;
  
  // 设置色彩滤波参数
  *(uint64_t *)(context_ptr + 0x3a0) = 0x3f4ccccd3f4ccccd;
  *(uint64_t *)(context_ptr + 0x3a8) = 0x3e4ccccd3f4ccccd;
  
  // 复制并应用颜色参数
  *(int32_t *)(context_ptr + 0x300) = *(int32_t *)(context_ptr + 0x240);
  *(int32_t *)(context_ptr + 0x304) = *(int32_t *)(context_ptr + 0x244);
  *(int32_t *)(context_ptr + 0x308) = *(int32_t *)(context_ptr + 0x248);
  *(float *)(context_ptr + 0x30c) = *(float *)(context_ptr + 0x24c) * 0.7;
  
  // 设置最终色彩参数
  *(uint64_t *)(context_ptr + 0x3b0) = 0x3f4ccccd3f4ccccd;
  *(uint64_t *)(context_ptr + 0x3b8) = 0x3eb333333f4ccccd;
  
  return;
}

/**
 * 重置渲染上下文
 * 清理并重置渲染上下文的所有状态和数据
 * 
 * @param context 渲染上下文指针
 */
void reset_rendering_context(int32_t *context)
{
  int resource_count;
  int cleanup_size;
  int allocation_size;
  
  // 初始化清理计数器
  allocation_size = 0;
  resource_count = context[1];
  
  // 清理主要资源
  if (resource_count < 0) {
    resource_count = resource_count / 2 + resource_count;
    cleanup_size = allocation_size;
    if (0 < resource_count) {
      cleanup_size = resource_count;
    }
    FUN_18013e760(context, cleanup_size);
  }
  
  // 重置主上下文标志
  *context = 0;
  resource_count = context[5];
  
  // 清理辅助资源
  if (resource_count < 0) {
    resource_count = resource_count / 2 + resource_count;
    cleanup_size = allocation_size;
    if (0 < resource_count) {
      cleanup_size = resource_count;
    }
    FUN_18011dd10(context + 4, cleanup_size);
  }
  
  // 重置辅助上下文标志
  context[4] = 0;
  
  // 清理渲染数据
  FUN_18013e800(context + 8, 0);
  context[0xc] = 3;
  context[0x12] = 0;
  *(uint64_t *)(context + 0x14) = 0;
  *(uint64_t *)(context + 0x16) = 0;
  
  // 清理扩展资源
  resource_count = context[0x19];
  if (resource_count < 0) {
    resource_count = resource_count / 2 + resource_count;
    cleanup_size = allocation_size;
    if (0 < resource_count) {
      cleanup_size = resource_count;
    }
    FUN_18013e620(context + 0x18, cleanup_size);
  }
  
  // 重置扩展上下文标志
  context[0x18] = 0;
  resource_count = context[0x1d];
  
  // 清理纹理资源
  if (resource_count < 0) {
    resource_count = resource_count / 2 + resource_count;
    cleanup_size = allocation_size;
    if (0 < resource_count) {
      cleanup_size = resource_count;
    }
    FUN_18011dc70(context + 0x1c, cleanup_size);
  }
  
  // 重置纹理上下文标志
  context[0x1c] = 0;
  resource_count = context[0x21];
  
  // 清理材质资源
  if (resource_count < 0) {
    resource_count = resource_count / 2 + resource_count;
    if (0 < resource_count) {
      allocation_size = resource_count;
    }
    FUN_18011dc70(context + 0x20, allocation_size);
  }
  
  // 重置材质上下文标志
  context[0x20] = 0;
  context[0x24] = 0;
  context[0x25] = 1;
  
  return;
}

/**
 * 释放渲染资源
 * 安全释放所有渲染相关资源，包括纹理、材质、缓冲区等
 * 
 * @param resource_handle 资源句柄指针
 */
void release_rendering_resources(uint64_t *resource_handle)
{
  int *reference_counter;
  int64_t resource_ptr;
  uint64_t *sub_resource;
  int64_t global_context;
  uint resource_index;
  uint64_t iteration_count;
  int64_t array_offset;
  uint64_t sub_resource_count;
  
  // 获取全局渲染上下文
  global_context = RENDER_CONTEXT_BASE;
  resource_ptr = resource_handle[1];
  
  // 释放主要资源
  if (resource_ptr != 0) {
    *resource_handle = 0;
    if (global_context != 0) {
      // 减少全局引用计数
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    // 释放内存
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 释放次要资源
  resource_ptr = resource_handle[3];
  if (resource_ptr != 0) {
    resource_handle[2] = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 释放第三级资源
  resource_ptr = resource_handle[5];
  if (resource_ptr != 0) {
    resource_handle[4] = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 重置资源标志
  *(int32_t *)(resource_handle + 9) = 0;
  resource_handle[10] = 0;
  resource_handle[0xb] = 0;
  
  // 获取当前全局上下文
  global_context = RENDER_CONTEXT_BASE;
  resource_ptr = resource_handle[0xd];
  
  // 处理扩展资源
  if (resource_ptr == 0) {
    resource_ptr = resource_handle[0xf];
    if (resource_ptr != 0) {
      resource_handle[0xe] = 0;
      if (global_context != 0) {
        *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
      }
      FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
    }
    
    // 处理数组资源
    resource_ptr = resource_handle[0x11];
    if (resource_ptr == 0) {
      // 重置数组标志
      *(int32_t *)(resource_handle + 0x12) = 0;
      *(int32_t *)((int64_t)resource_handle + 0x94) = 1;
      
      // 遍历并清理数组中的资源
      iteration_count = 0;
      if (0 < *(int *)(resource_handle + 0x13)) {
        do {
          if (iteration_count == 0) {
            sub_resource = (uint64_t *)resource_handle[0x14];
            *sub_resource = 0;
            sub_resource[1] = 0;
            sub_resource[2] = 0;
            sub_resource[3] = 0;
          }
          
          // 清理数组元素资源
          global_context = RENDER_CONTEXT_BASE;
          array_offset = iteration_count * 0x20;
          resource_ptr = *(int64_t *)(resource_handle[0x14] + 8 + array_offset);
          if (resource_ptr != 0) {
            *(uint64_t *)(resource_handle[0x14] + array_offset) = 0;
            if (global_context != 0) {
              *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
            }
            FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
          }
          
          // 清理数组元素扩展资源
          resource_ptr = *(int64_t *)(resource_handle[0x14] + 0x18 + array_offset);
          if (resource_ptr != 0) {
            *(uint64_t *)(resource_handle[0x14] + 0x10 + array_offset) = 0;
            if (global_context != 0) {
              *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
            }
            FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
          }
          
          resource_index = (int)iteration_count + 1;
          iteration_count = (uint64_t)resource_index;
        } while ((int)resource_index < *(int *)(resource_handle + 0x13));
      }
      
      // 释放数组容器
      global_context = RENDER_CONTEXT_BASE;
      resource_ptr = resource_handle[0x14];
      if (resource_ptr == 0) {
        return;
      }
      resource_handle[0x13] = 0;
      if (global_context != 0) {
        reference_counter = (int *)(global_context + 0x3a8);
        *reference_counter = *reference_counter + -1;
      }
      FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
    }
    
    // 释放数组资源容器
    resource_handle[0x10] = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 释放最终资源
  resource_handle[0xc] = 0;
  if (global_context != 0) {
    *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
  }
  FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
}

/**
 * 扩展渲染资源释放
 * 处理更复杂的资源释放逻辑，包括嵌套资源和引用计数
 * 
 * @param resource_context 资源上下文指针
 */
void release_rendering_resources_extended(int64_t resource_context)
{
  int *reference_counter;
  int64_t resource_ptr;
  uint64_t *sub_resource;
  int64_t global_context;
  uint64_t *resource_base;
  uint resource_index;
  uint64_t iteration_count;
  int64_t array_offset;
  uint64_t sub_resource_count;
  
  // 获取全局渲染上下文
  global_context = RENDER_CONTEXT_BASE;
  resource_ptr = *(int64_t *)(resource_context + 8);
  iteration_count = 0;
  
  // 释放主要资源
  if (resource_ptr != 0) {
    *resource_base = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 释放次要资源
  resource_ptr = resource_base[3];
  if (resource_ptr != 0) {
    resource_base[2] = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 释放第三级资源
  resource_ptr = resource_base[5];
  if (resource_ptr != 0) {
    resource_base[4] = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 重置资源标志
  *(int32_t *)(resource_base + 9) = 0;
  resource_base[10] = 0;
  resource_base[0xb] = 0;
  
  // 获取当前全局上下文
  global_context = RENDER_CONTEXT_BASE;
  resource_ptr = resource_base[0xd];
  
  // 处理扩展资源
  if (resource_ptr == 0) {
    resource_ptr = resource_base[0xf];
    if (resource_ptr != 0) {
      resource_base[0xe] = 0;
      if (global_context != 0) {
        *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
      }
      FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
    }
    
    // 处理数组资源
    resource_ptr = resource_base[0x11];
    if (resource_ptr == 0) {
      // 重置数组标志
      *(int32_t *)(resource_base + 0x12) = 0;
      *(int32_t *)((int64_t)resource_base + 0x94) = 1;
      
      // 遍历并清理数组中的资源
      iteration_count = 0;
      if (0 < *(int *)(resource_base + 0x13)) {
        do {
          if (iteration_count == 0) {
            sub_resource = (uint64_t *)resource_base[0x14];
            *sub_resource = 0;
            sub_resource[1] = 0;
            sub_resource[2] = 0;
            sub_resource[3] = 0;
          }
          
          // 清理数组元素资源
          global_context = RENDER_CONTEXT_BASE;
          array_offset = iteration_count * 0x20;
          resource_ptr = *(int64_t *)(resource_base[0x14] + 8 + array_offset);
          if (resource_ptr != 0) {
            *(uint64_t *)(resource_base[0x14] + array_offset) = 0;
            if (global_context != 0) {
              *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
            }
            FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
          }
          
          // 清理数组元素扩展资源
          resource_ptr = *(int64_t *)(resource_base[0x14] + 0x18 + array_offset);
          if (resource_ptr != 0) {
            *(uint64_t *)(resource_base[0x14] + 0x10 + array_offset) = 0;
            if (global_context != 0) {
              *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
            }
            FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
          }
          
          resource_index = (int)iteration_count + 1;
          iteration_count = (uint64_t)resource_index;
        } while ((int)resource_index < *(int *)(resource_base + 0x13));
      }
      
      // 释放数组容器
      global_context = RENDER_CONTEXT_BASE;
      resource_ptr = resource_base[0x14];
      if (resource_ptr == 0) {
        return;
      }
      resource_base[0x13] = 0;
      if (global_context != 0) {
        reference_counter = (int *)(global_context + 0x3a8);
        *reference_counter = *reference_counter + -1;
      }
      FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
    }
    
    // 释放数组资源容器
    resource_base[0x10] = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
  }
  
  // 释放最终资源
  resource_base[0xc] = 0;
  if (global_context != 0) {
    *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
  }
  FUN_180059ba0(resource_ptr, MEMORY_ALLOCATOR);
}

/**
 * 清理渲染数据数组
 * 释放渲染数据数组的所有元素和相关资源
 * 
 * 注意：此函数使用未定义的寄存器变量，需要正确的上下文
 */
void cleanup_rendering_data_arrays(void)
{
  uint64_t *array_element;
  int64_t resource_ptr;
  int64_t global_context;
  int64_t array_base;
  int64_t iteration_index;
  int array_size;
  int64_t unaff_R15;
  
  // 获取数组基址和大小
  array_base = unaff_R15;
  array_size = *(int *)(unaff_RBX + 0x98);
  iteration_index = 0;
  
  // 遍历数组元素
  do {
    if (iteration_index == 0) {
      array_element = *(uint64_t **)(unaff_RBX + 0xa0);
      *array_element = 0;
      array_element[1] = 0;
      array_element[2] = 0;
      array_element[3] = 0;
    }
    
    // 获取全局上下文
    global_context = RENDER_CONTEXT_BASE;
    resource_ptr = iteration_index * 0x20;
    array_element = *(int64_t *)(*(int64_t *)(unaff_RBX + 0xa0) + 8 + resource_ptr);
    
    // 释放元素资源
    if (array_element != 0) {
      *(int64_t *)(*(int64_t *)(unaff_RBX + 0xa0) + resource_ptr) = unaff_R15;
      if (global_context != 0) {
        *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
      }
      FUN_180059ba0(array_element, MEMORY_ALLOCATOR);
    }
    
    // 释放元素扩展资源
    array_element = *(int64_t *)(*(int64_t *)(unaff_RBX + 0xa0) + 0x18 + resource_ptr);
    if (array_element != 0) {
      *(int64_t *)(*(int64_t *)(unaff_RBX + 0xa0) + 0x10 + resource_ptr) = unaff_R15;
      if (global_context != 0) {
        *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
      }
      FUN_180059ba0(array_element, MEMORY_ALLOCATOR);
    }
    
    // 更新迭代索引
    array_size = array_size + 1;
    iteration_index = iteration_index + 1;
  } while (array_size < *(int *)(unaff_RBX + 0x98));
  
  // 释放数组容器
  array_element = *(int64_t *)(unaff_RBX + 0xa0);
  if (array_element != 0) {
    *(int64_t *)(unaff_RBX + 0x98) = unaff_R15;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    FUN_180059ba0(array_element, MEMORY_ALLOCATOR);
  }
  
  return;
}

/**
 * 释放渲染内存池
 * 释放渲染系统使用的内存池资源
 * 
 * 注意：此函数使用未定义的寄存器变量，需要正确的上下文
 */
void release_rendering_memory_pool(void)
{
  int *reference_counter;
  int64_t memory_pool;
  int64_t global_context;
  int64_t unaff_RBX;
  uint64_t unaff_R15;
  
  // 获取全局渲染上下文
  global_context = RENDER_CONTEXT_BASE;
  memory_pool = *(int64_t *)(unaff_RBX + 0xa0);
  
  // 释放内存池
  if (memory_pool != 0) {
    *(uint64_t *)(unaff_RBX + 0x98) = unaff_R15;
    if (global_context != 0) {
      reference_counter = (int *)(global_context + 0x3a8);
      *reference_counter = *reference_counter + -1;
    }
    FUN_180059ba0(memory_pool, MEMORY_ALLOCATOR);
  }
  
  return;
}

/**
 * 释放渲染缓冲区
 * 释放渲染系统使用的缓冲区资源
 * 
 * @param buffer_handle 缓冲区句柄
 */
void deallocate_rendering_buffer(uint64_t buffer_handle)
{
  int *reference_counter;
  int64_t global_context;
  int64_t unaff_RBX;
  uint64_t unaff_R15;
  
  // 获取全局渲染上下文
  global_context = RENDER_CONTEXT_BASE;
  *(uint64_t *)(unaff_RBX + 0x98) = unaff_R15;
  
  // 减少引用计数并释放缓冲区
  if (global_context != 0) {
    reference_counter = (int *)(global_context + 0x3a8);
    *reference_counter = *reference_counter + -1;
  }
  FUN_180059ba0(buffer_handle, MEMORY_ALLOCATOR);
}

/**
 * 添加渲染参数条目
 * 向渲染参数数组中添加新的参数条目
 * 
 * @param parameter_array 参数数组指针
 */
void add_rendering_parameter_entry(int *parameter_array)
{
  int64_t *parameter_entry;
  uint64_t *extended_data;
  int64_t array_base;
  int current_count;
  uint parameter_id;
  uint parameter_flags;
  int64_t parameter_data;
  int array_capacity;
  uint *source_entry;
  int32_t stack_param;
  uint64_t extended_value;
  
  // 获取源参数条目
  if (parameter_array[0x18] == 0) {
    source_entry = (uint *)(*(int64_t *)(parameter_array + 0xe) + 0x18);
  } else {
    source_entry = (uint *)((int64_t)(parameter_array[0x18] + -1) * 0x10 + *(int64_t *)(parameter_array + 0x1a));
  }
  
  // 读取参数数据
  parameter_id = *source_entry;
  parameter_data = *(int64_t *)(source_entry + 1);
  parameter_flags = source_entry[3];
  
  // 获取扩展数据
  if (parameter_array[0x1c] == 0) {
    extended_value = 0;
  } else {
    extended_value = *(uint64_t *)(*(int64_t *)(parameter_array + 0x1e) + -8 + (int64_t)parameter_array[0x1c] * 8);
  }
  
  // 检查并扩展数组容量
  current_count = *parameter_array;
  array_capacity = parameter_array[1];
  if (current_count == array_capacity) {
    if (array_capacity == 0) {
      array_capacity = 8;
    } else {
      array_capacity = array_capacity / 2 + array_capacity;
    }
    int new_capacity = current_count + 1;
    if (current_count + 1 < array_capacity) {
      new_capacity = array_capacity;
    }
    FUN_18013e760(parameter_array, new_capacity);
    current_count = *parameter_array;
  }
  
  // 创建新参数条目
  array_base = (int64_t)current_count;
  array_base = *(int64_t *)(parameter_array + 2);
  parameter_entry = (int64_t *)(array_base + array_base * 0x30);
  *parameter_entry = (uint64_t)parameter_id << 0x20;
  parameter_entry[1] = parameter_data;
  
  // 设置扩展数据
  extended_data = (uint64_t *)(array_base + 0x10 + array_base * 0x30);
  *extended_data = CONCAT44(stack_param, parameter_flags);
  extended_data[1] = extended_value;
  
  // 清零额外数据区域
  extended_data = (uint64_t *)(array_base + 0x20 + array_base * 0x30);
  *extended_data = 0;
  extended_data[1] = 0;
  
  // 更新数组计数
  *parameter_array = *parameter_array + 1;
  
  return;
}

/**
 * 更新渲染参数条目
 * 更新或添加渲染参数条目到数组中
 * 
 * @param parameter_array 参数数组指针
 */
void update_rendering_parameter_entry(int *parameter_array)
{
  uint64_t *parameter_entry;
  int64_t resource_ptr;
  int current_count;
  uint parameter_id;
  uint parameter_flags;
  int64_t parameter_data;
  int array_capacity;
  uint *source_entry;
  int64_t *existing_entry;
  int *previous_entry;
  int *prev_prev_entry;
  int32_t stack_param;
  uint64_t extended_value;
  
  // 获取源参数条目
  if (parameter_array[0x18] == 0) {
    existing_entry = (int64_t *)(*(int64_t *)(parameter_array + 0xe) + 0x18);
  } else {
    existing_entry = (int64_t *)((int64_t)(parameter_array[0x18] + -1) * 0x10 + *(int64_t *)(parameter_array + 0x1a));
  }
  
  parameter_data = *existing_entry;
  resource_ptr = existing_entry[1];
  current_count = *parameter_array;
  previous_entry = (int *)0x0;
  prev_prev_entry = previous_entry;
  
  // 查找现有条目
  if (0 < current_count) {
    prev_prev_entry = (int *)((int64_t)(current_count + -1) * 0x30 + *(int64_t *)(parameter_array + 2));
  }
  
  // 检查是否需要更新现有条目
  if (((prev_prev_entry == (int *)0x0) ||
      ((*prev_prev_entry != 0 &&
       ((*(int64_t *)(prev_prev_entry + 1) != parameter_data || (*(int64_t *)(prev_prev_entry + 3) != resource_ptr)))))) ||
     (*(int64_t *)(prev_prev_entry + 8) != 0)) {
    
    // 需要添加新条目
    if (parameter_array[0x18] == 0) {
      source_entry = (uint *)(*(int64_t *)(parameter_array + 0xe) + 0x18);
    } else {
      source_entry = (uint *)((int64_t)(parameter_array[0x18] + -1) * 0x10 + *(int64_t *)(parameter_array + 0x1a));
    }
    
    parameter_id = *source_entry;
    parameter_data = *(int64_t *)(source_entry + 1);
    parameter_flags = source_entry[3];
    
    if (parameter_array[0x1c] == 0) {
      extended_value = 0;
    } else {
      extended_value = *(uint64_t *)(*(int64_t *)(parameter_array + 0x1e) + -8 + (int64_t)parameter_array[0x1c] * 8);
    }
    
    // 检查并扩展数组容量
    current_count = *parameter_array;
    array_capacity = parameter_array[1];
    if (current_count == array_capacity) {
      if (array_capacity == 0) {
        array_capacity = 8;
      } else {
        array_capacity = array_capacity / 2 + array_capacity;
      }
      int new_capacity = current_count + 1;
      if (current_count + 1 < array_capacity) {
        new_capacity = array_capacity;
      }
      FUN_18013e760(parameter_array, new_capacity);
      current_count = *parameter_array;
    }
    
    // 添加新条目
    resource_ptr = (int64_t)current_count;
    parameter_data = *(int64_t *)(parameter_array + 2);
    existing_entry = (int64_t *)(parameter_data + resource_ptr * 0x30);
    *existing_entry = (uint64_t)parameter_id << 0x20;
    existing_entry[1] = parameter_data;
    parameter_entry = (uint64_t *)(parameter_data + 0x10 + resource_ptr * 0x30);
    *parameter_entry = CONCAT44(stack_param, parameter_flags);
    parameter_entry[1] = extended_value;
    parameter_entry = (uint64_t *)(parameter_data + 0x20 + resource_ptr * 0x30);
    *parameter_entry = 0;
    parameter_entry[1] = 0;
    *parameter_array = *parameter_array + 1;
    
    return;
  }
  
  // 更新现有条目
  previous_entry = prev_prev_entry + -0xc;
  if (current_count < 2) {
    previous_entry = prev_prev_entry;
  }
  
  // 检查是否可以合并条目
  if ((((*prev_prev_entry == 0) && (previous_entry != (int *)0x0)) && (*(int64_t *)(previous_entry + 1) == parameter_data)) &&
     (*(int64_t *)(previous_entry + 3) == resource_ptr)) {
    
    if (parameter_array[0x1c] != 0) {
      prev_prev_entry = *(int **)(*(int64_t *)(parameter_array + 0x1e) + -8 + (int64_t)parameter_array[0x1c] * 8);
    }
    
    if ((*(int **)(previous_entry + 6) == prev_prev_entry) && (*(int64_t *)(previous_entry + 8) == 0)) {
      *parameter_array = current_count + -1;
      return;
    }
  }
  
  // 更新条目数据
  *(int64_t *)(prev_prev_entry + 1) = parameter_data;
  *(int64_t *)(prev_prev_entry + 3) = resource_ptr;
  
  return;
}

/**
 * 移除渲染参数条目
 * 从渲染参数数组中移除指定的参数条目
 * 
 * @param parameter_array 参数数组指针
 */
void remove_rendering_parameter_entry(int *parameter_array)
{
  uint64_t *parameter_entry;
  int64_t resource_ptr;
  int current_count;
  uint parameter_id;
  uint parameter_flags;
  int64_t parameter_data;
  int array_capacity;
  uint *source_entry;
  int64_t *existing_entry;
  int *previous_entry;
  int *prev_prev_entry;
  int32_t stack_param;
  uint64_t extended_value;
  
  // 获取当前参数引用
  prev_prev_entry = (int *)0x0;
  if (parameter_array[0x1c] != 0) {
    prev_prev_entry = *(int **)(*(int64_t *)(parameter_array + 0x1e) + -8 + (int64_t)parameter_array[0x1c] * 8);
  }
  
  current_count = *parameter_array;
  if (current_count != 0) {
    previous_entry = (int *)(*(int64_t *)(parameter_array + 2) + -0x30 + (int64_t)current_count * 0x30);
    
    // 检查是否可以移除条目
    if ((previous_entry != (int *)0x0) &&
       (((*previous_entry == 0 || (*(int **)(previous_entry + 6) == prev_prev_entry)) && (*(int64_t *)(previous_entry + 8) == 0)
        ))) {
      
      prev_prev_entry = previous_entry + -0xc;
      if (current_count < 2) {
        prev_prev_entry = (int *)0x0;
      }
      
      // 检查是否可以合并条目
      if (((*previous_entry == 0) && (prev_prev_entry != (int *)0x0)) && (*(int **)(prev_prev_entry + 6) == prev_prev_entry)) {
        
        if (parameter_array[0x18] == 0) {
          existing_entry = (int64_t *)(*(int64_t *)(parameter_array + 0xe) + 0x18);
        } else {
          existing_entry = (int64_t *)
                    ((int64_t)(parameter_array[0x18] + -1) * 0x10 + *(int64_t *)(parameter_array + 0x1a));
        }
        
        if (((*(int64_t *)(prev_prev_entry + 1) == *existing_entry) && (*(int64_t *)(prev_prev_entry + 3) == existing_entry[1]))
           && (*(int64_t *)(prev_prev_entry + 8) == 0)) {
          *parameter_array = current_count + -1;
          return;
        }
      }
      
      // 更新条目引用
      *(int **)(previous_entry + 6) = prev_prev_entry;
      return;
    }
  }
  
  // 需要添加新条目然后移除
  if (parameter_array[0x18] == 0) {
    source_entry = (uint *)(*(int64_t *)(parameter_array + 0xe) + 0x18);
  } else {
    source_entry = (uint *)((int64_t)(parameter_array[0x18] + -1) * 0x10 + *(int64_t *)(parameter_array + 0x1a));
  }
  
  parameter_id = *source_entry;
  parameter_data = *(int64_t *)(source_entry + 1);
  parameter_flags = source_entry[3];
  
  if (parameter_array[0x1c] == 0) {
    extended_value = 0;
  } else {
    extended_value = *(uint64_t *)(*(int64_t *)(parameter_array + 0x1e) + -8 + (int64_t)parameter_array[0x1c] * 8);
  }
  
  // 检查并扩展数组容量
  current_count = *parameter_array;
  array_capacity = parameter_array[1];
  if (current_count == array_capacity) {
    if (array_capacity == 0) {
      array_capacity = 8;
    } else {
      array_capacity = array_capacity / 2 + array_capacity;
    }
    int new_capacity = current_count + 1;
    if (current_count + 1 < array_capacity) {
      new_capacity = array_capacity;
    }
    FUN_18013e760(parameter_array, new_capacity);
    current_count = *parameter_array;
  }
  
  // 添加新条目
  parameter_data = (int64_t)current_count;
  resource_ptr = *(int64_t *)(parameter_array + 2);
  existing_entry = (int64_t *)(resource_ptr + parameter_data * 0x30);
  *existing_entry = (uint64_t)parameter_id << 0x20;
  existing_entry[1] = parameter_data;
  parameter_entry = (uint64_t *)(resource_ptr + 0x10 + parameter_data * 0x30);
  *parameter_entry = CONCAT44(stack_param, parameter_flags);
  parameter_entry[1] = extended_value;
  parameter_entry = (uint64_t *)(resource_ptr + 0x20 + parameter_data * 0x30);
  *parameter_entry = 0;
  parameter_entry[1] = 0;
  *parameter_array = *parameter_array + 1;
  
  return;
}