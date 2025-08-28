#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part161.c
 * @brief 渲染系统高级控制和状态管理模块
 * 
 * 本模块包含15个核心函数，涵盖渲染系统高级控制、状态管理、参数处理、
 * 内存管理、资源清理、数据验证、插值计算、时间处理和系统初始化等高级渲染功能。
 */

/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_SYSTEM_BUFFER_SIZE_32 32
#define RENDERING_SYSTEM_BUFFER_SIZE_72 72
#define RENDERING_SYSTEM_BUFFER_SIZE_280 280
#define RENDERING_SYSTEM_BUFFER_SIZE_368 368
#define RENDERING_SYSTEM_MAGIC_COOKIE_1 0x6f4d6f54656d6954
#define RENDERING_SYSTEM_MAGIC_COOKIE_2 0x416564
#define RENDERING_SYSTEM_MAGIC_COOKIE_3 0x74736554
#define RENDERING_SYSTEM_MAGIC_COOKIE_4 0x6d614e2068746150
#define RENDERING_SYSTEM_STACK_ALIGNMENT 8
#define RENDERING_SYSTEM_MEMORY_POOL_SIZE_0x90 0x90
#define RENDERING_SYSTEM_MEMORY_POOL_SIZE_0x118 0x118
#define RENDERING_SYSTEM_STRING_LENGTH_0x40 0x40
#define RENDERING_SYSTEM_STRING_LENGTH_0x10 0x10
#define RENDERING_SYSTEM_FLAG_MASK_0x40 0x40
#define RENDERING_SYSTEM_FLOAT_MULTIPLIER_1e_05 1e-05
#define RENDERING_SYSTEM_DEFAULT_FLOAT_2_5f 2.5f
/* @} */

/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_InitializeRenderState FUN_1803691c0
#define RenderingSystem_CreateRenderContext FUN_1803692d0
#define RenderingSystem_AllocateRenderMemory FUN_1803697a0
#define RenderingSystem_SetupRenderParameters FUN_1803697f0
#define RenderingSystem_ValidateRenderParameters FUN_180369850
#define RenderingSystem_ProcessRenderConfiguration FUN_180369890
#define RenderingSystem_CalculateInterpolationValues FUN_180369d50
#define RenderingSystem_ComputeInterpolationFactors FUN_180369d8d
#define RenderingSystem_ApplyInterpolation FUN_180369e32
#define RenderingSystem_InitializeRenderPipeline FUN_180369ef0
#define RenderingSystem_CleanupRenderContext FUN_18036a6a0
#define RenderingSystem_ResetRenderState FUN_18036a7e0
#define RenderingSystem_EnableRenderFeature FUN_18036a930
#define RenderingSystem_DisableRenderFeature FUN_18036aa50
#define RenderingSystem_ConfigureRenderSettings FUN_18036ab70
#define RenderingSystem_UpdateRenderResources FUN_18036abc0
#define RenderingSystem_SynchronizeRenderState FUN_18036ac90
#define RenderingSystem_ValidateRenderConfiguration FUN_18036adb0
/* @} */

/**
 * @brief 渲染系统状态初始化器
 * 
 * 该函数负责初始化渲染系统的状态和配置。
 * 支持字符串处理、内存管理和系统调用等高级渲染功能。
 * 
 * @param render_context 渲染上下文指针
 * @return void
 */
void RenderingSystem_InitializeRenderState(undefined8 render_context)
{
    undefined1 security_buffer[RENDERING_SYSTEM_BUFFER_SIZE_32];
    undefined4 status_flag;
    undefined8 thread_counter;
    undefined **callback_array[2];
    undefined *cleanup_handler;
    undefined1 *string_buffer;
    undefined4 string_length;
    undefined1 config_buffer[RENDERING_SYSTEM_BUFFER_SIZE_72];
    undefined *resource_array[11];
    undefined4 operation_flag;
    ulonglong security_hash;
    
    thread_counter = 0xfffffffffffffffe;
    security_hash = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
    status_flag = 0;
    cleanup_handler = &UNK_1809fcc58;
    string_buffer = config_buffer;
    config_buffer[0] = 0;
    string_length = 5;
    strcpy_s(config_buffer, RENDERING_SYSTEM_STRING_LENGTH_0x40, &DAT_180a1d570);
    FUN_1800b8300(resource_array, &cleanup_handler);
    operation_flag = 2;
    status_flag = 1;
    FUN_180180730(render_context, callback_array, resource_array);
    status_flag = 0;
    callback_array[0] = resource_array;
    resource_array[0] = &UNK_18098bcb0;
    cleanup_handler = &UNK_18098bcb0;
    FUN_1808fc050(security_hash ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统上下文创建器
 * 
 * 该函数负责创建渲染系统的上下文环境。
 * 支持内存分配、字符串处理、参数设置和资源管理等高级渲染功能。
 * 
 * @param context_ptr 上下文指针指针
 * @return void
 */
void RenderingSystem_CreateRenderContext(undefined8 *context_ptr)
{
    undefined4 string_length;
    undefined8 *context_data;
    undefined *cleanup_handler;
    undefined8 *string_buffer;
    undefined4 buffer_length;
    undefined8 thread_counter;
    undefined8 magic_cookie;
    
    thread_counter = 0xfffffffffffffffe;
    context_data = context_ptr;
    FUN_1803456e0();
    *context_data = &UNK_180a20cc0;
    cleanup_handler = &UNK_180a3c3e0;
    thread_counter = 0;
    string_buffer = (undefined8 *)0x0;
    buffer_length = 0;
    context_data = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)context_data = 0;
    string_buffer = context_data;
    string_length = FUN_18064e990(context_data);
    thread_counter = CONCAT44(thread_counter._4_4_, string_length);
    *context_data = RENDERING_SYSTEM_MAGIC_COOKIE_1;
    *(undefined4 *)(context_data + 1) = RENDERING_SYSTEM_MAGIC_COOKIE_2;
    buffer_length = 0xb;
    FUN_1803460a0(context_ptr, &cleanup_handler, context_ptr + 0xe, 2);
    cleanup_handler = &UNK_180a3c3e0;
    FUN_18064e900(context_data);
}



/**
 * @brief 渲染系统内存分配器
 * 
 * 该函数负责为渲染系统分配内存资源。
 * 支持条件内存分配、内存管理和系统调用等高级渲染功能。
 * 
 * @param memory_ptr 内存指针
 * @param allocation_flags 分配标志
 * @param size_param 大小参数
 * @param alignment_param 对齐参数
 * @return undefined8 分配的内存指针
 */
undefined8 RenderingSystem_AllocateRenderMemory(undefined8 memory_ptr, ulonglong allocation_flags, undefined8 size_param, undefined8 alignment_param)
{
    undefined8 thread_counter;
    
    thread_counter = 0xfffffffffffffffe;
    FUN_1803457d0();
    if ((allocation_flags & 1) != 0) {
        free(memory_ptr, RENDERING_SYSTEM_MEMORY_POOL_SIZE_0x90, size_param, alignment_param, thread_counter);
    }
    return memory_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803697f0(undefined8 param_1,undefined8 param_2)
void FUN_1803697f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0x18036981a;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x90,8,3);
  uStack_28 = 0xfffffffffffffffe;
  puVar2 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar2 = &UNK_180a20cc0;
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_100 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
  *puVar2 = 0x6f4d6f54656d6954;
  *(undefined4 *)(puVar2 + 1) = 0x416564;
  uStack_f8 = 0xb;
  FUN_1803460a0(puVar3,&puStack_108,puVar3 + 0xe,2);
  puStack_108 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180369850(longlong param_1,longlong param_2)
void FUN_180369850(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x10) == 10) {
    iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20c88);
    if ((iVar1 == 0) && (*(float *)(param_1 + 0x88) <= 0.0 && *(float *)(param_1 + 0x88) != 0.0)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180369890(undefined8 param_1)
void FUN_180369890(undefined8 param_1)

{
  undefined1 auStack_368 [32];
  undefined4 uStack_348;
  undefined **appuStack_340 [2];
  undefined8 uStack_330;
  undefined *apuStack_328 [11];
  undefined4 uStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined4 uStack_2b8;
  undefined1 auStack_2b0 [72];
  undefined *puStack_268;
  undefined1 *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [72];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [72];
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 auStack_190 [72];
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_330 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  uStack_348 = 0;
  puStack_2c8 = &UNK_1809fcc58;
  puStack_2c0 = auStack_2b0;
  auStack_2b0[0] = 0;
  uStack_2b8 = 0xb;
  strcpy_s(auStack_2b0,0x40,&DAT_180a20c78);
  FUN_1800b8300(apuStack_328,&puStack_2c8);
  uStack_2d0 = 2;
  uStack_348 = 1;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_2c8 = &UNK_18098bcb0;
  puStack_268 = &UNK_1809fcc58;
  puStack_260 = auStack_250;
  auStack_250[0] = 0;
  uStack_258 = 0xb;
  strcpy_s(auStack_250,0x40,&DAT_180a20c68);
  FUN_1800b8300(apuStack_328,&puStack_268);
  uStack_2d0 = 2;
  uStack_348 = 2;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_268 = &UNK_18098bcb0;
  puStack_208 = &UNK_1809fcc58;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0xd;
  strcpy_s(auStack_1f0,0x40,&DAT_180a20c58);
  FUN_1800b8300(apuStack_328,&puStack_208);
  uStack_2d0 = 2;
  uStack_348 = 4;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_208 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xd;
  strcpy_s(auStack_190,0x40,&DAT_180a20c48);
  FUN_1800b8300(apuStack_328,&puStack_1a8);
  uStack_2d0 = 2;
  uStack_348 = 8;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bcb0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xe;
  strcpy_s(auStack_130,0x40,&DAT_180a20ca8);
  FUN_1800b8300(apuStack_328,&puStack_148);
  uStack_2d0 = 2;
  uStack_348 = 0x10;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xe;
  strcpy_s(auStack_d0,0x40,&DAT_180a20c98);
  FUN_1800b8300(apuStack_328,&puStack_e8);
  uStack_2d0 = 2;
  uStack_348 = 0x20;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 10;
  strcpy_s(auStack_70,0x40,&DAT_180a20c88);
  FUN_1800b8300(apuStack_328,&puStack_88);
  uStack_2d0 = 2;
  uStack_348 = 0x40;
  FUN_180180730(param_1,appuStack_340,apuStack_328);
  uStack_348 = 0;
  appuStack_340[0] = apuStack_328;
  apuStack_328[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_368);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统颜色插值计算器 - 基础版本
 * 
 * 根据时间和参数计算颜色插值值，支持多种插值模式。
 * 用于实现颜色渐变、时间相关的颜色变化等效果。
 * 
 * @param render_context 渲染上下文指针
 * 
 * 计算流程：
 * 1. 获取渲染对象和基础颜色参数
 * 2. 计算时间相关的插值因子
 * 3. 确定插值区间和模式
 * 4. 应用相应的插值算法
 * 5. 设置最终颜色值
 */
void RenderingSystem_ColorInterpolatorBase(longlong render_context) {
    // 获取渲染对象句柄
    longlong render_object = FUN_1802e8fb0(*(undefined8 *)(render_context + 0x18));
    if (render_object == 0) {
        return;
    }
    
    // 获取颜色区间参数
    float color_range_start = *(float *)(render_context + 0x78);
    float color_range_mid = *(float *)(render_context + 0x74) + color_range_start;
    float color_range_end = color_range_mid + *(float *)(render_context + 0x7c);
    
    // 计算时间相关的插值因子
    float interpolation_factor = (float)fmodf(
        (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)_DAT_180c91f50 * 8) - _DAT_180c91f48) * 1e-05 + 
        *(float *)(render_context + 0x88)
    );
    
    // 确定插值区间和模式
    int interpolation_mode;
    float normalized_factor;
    
    if (interpolation_factor <= color_range_end) {
        if (interpolation_factor <= color_range_mid) {
            if (interpolation_factor <= color_range_start) {
                interpolation_mode = 0; // 使用起始颜色
            } else {
                interpolation_mode = 3; // 起始到中间的插值
                normalized_factor = interpolation_factor - color_range_start;
            }
        } else {
            interpolation_mode = 1; // 中间到结束的插值
            normalized_factor = interpolation_factor - color_range_mid;
        }
    } else {
        interpolation_mode = 2; // 结束颜色区域
        normalized_factor = interpolation_factor - color_range_end;
    }
    
    // 应用插值算法
    undefined4 final_color = 0;
    
    if (interpolation_mode == 0) {
        // 直接使用起始颜色
        final_color = *(undefined4 *)(render_context + 0x80);
    } else if (interpolation_mode == 1) {
        // 使用中间颜色
        *(undefined4 *)(render_object + 0xe4) = *(undefined4 *)(render_context + 0x84);
        return;
    } else if (interpolation_mode == 2) {
        // 中间到结束颜色的线性插值
        normalized_factor = normalized_factor / *(float *)(render_context + 0x70);
        *(float *)(render_object + 0xe4) = 
            (1.0 - normalized_factor) * *(float *)(render_context + 0x84) + 
            normalized_factor * *(float *)(render_context + 0x80);
        return;
    } else if (interpolation_mode == 3) {
        // 起始到中间颜色的线性插值
        normalized_factor = normalized_factor / *(float *)(render_context + 0x74);
        *(float *)(render_object + 0xe4) = 
            (1.0 - normalized_factor) * *(float *)(render_context + 0x80) + 
            normalized_factor * *(float *)(render_context + 0x84);
        return;
    }
    
    // 设置最终颜色
    *(undefined4 *)(render_object + 0xe4) = final_color;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统颜色插值计算器 - 高级版本
 * 
 * 基于索引和寄存器参数的高级颜色插值计算器。
 * 支持更复杂的插值算法和寄存器优化。
 * 
 * @param color_index 颜色索引表指针
 * @param register_base 基础寄存器值（通过寄存器传递）
 * @param dest_register 目标寄存器（通过寄存器传递）
 * @param array_index 数组索引（通过寄存器传递）
 * 
 * 计算流程：
 * 1. 从寄存器获取颜色参数
 * 2. 基于索引计算插值因子
 * 3. 确定插值区间和模式
 * 4. 应用高级插值算法
 * 5. 将结果写入目标寄存器
 */
void RenderingSystem_ColorInterpolatorAdvanced(longlong color_index, longlong register_base, 
                                              longlong dest_register, longlong array_index) {
    // 从寄存器获取颜色区间参数
    float color_range_start = *(float *)(register_base + 0x78);
    float color_range_mid = *(float *)(register_base + 0x74) + color_range_start;
    float color_range_end = color_range_mid + *(float *)(register_base + 0x7c);
    
    // 基于索引计算插值因子
    float interpolation_factor = (float)fmodf(
        (float)(*(longlong *)(color_index + array_index * 8) - _DAT_180c91f48) * 1e-05 +
        *(float *)(register_base + 0x88)
    );
    
    // 确定插值区间和模式
    int interpolation_mode;
    float normalized_factor;
    
    if (interpolation_factor <= color_range_end) {
        if (interpolation_factor <= color_range_mid) {
            if (interpolation_factor <= color_range_start) {
                interpolation_mode = 0; // 使用起始颜色
            } else {
                interpolation_mode = 3; // 起始到中间的插值
                normalized_factor = interpolation_factor - color_range_start;
            }
        } else {
            interpolation_mode = 1; // 中间到结束的插值
            normalized_factor = interpolation_factor - color_range_mid;
        }
    } else {
        interpolation_mode = 2; // 结束颜色区域
        normalized_factor = interpolation_factor - color_range_end;
    }
    
    // 应用高级插值算法
    undefined4 final_color = 0;
    
    if (interpolation_mode == 0) {
        // 直接使用起始颜色
        final_color = *(undefined4 *)(register_base + 0x80);
    } else if (interpolation_mode == 1) {
        // 使用中间颜色
        *(undefined4 *)(dest_register + 0xe4) = *(undefined4 *)(register_base + 0x84);
        return;
    } else if (interpolation_mode == 2) {
        // 中间到结束颜色的线性插值
        normalized_factor = normalized_factor / *(float *)(register_base + 0x70);
        *(float *)(dest_register + 0xe4) = 
            (1.0 - normalized_factor) * *(float *)(register_base + 0x84) + 
            normalized_factor * *(float *)(register_base + 0x80);
        return;
    } else if (interpolation_mode == 3) {
        // 起始到中间颜色的线性插值
        normalized_factor = normalized_factor / *(float *)(register_base + 0x74);
        *(float *)(dest_register + 0xe4) = 
            (1.0 - normalized_factor) * *(float *)(register_base + 0x80) + 
            normalized_factor * *(float *)(register_base + 0x84);
        return;
    }
    
    // 设置最终颜色到目标寄存器
    *(undefined4 *)(dest_register + 0xe4) = final_color;
}





/**
 * 渲染系统快速颜色插值器
 * 
 * 基于模式选择的快速颜色插值处理器，支持多种插值模式。
 * 使用寄存器优化的高性能实现。
 * 
 * @param interpolation_mode 插值模式（1: 中间颜色, 2: 中间到结束插值, 3: 起始到中间插值, 其他: 直接颜色）
 * @param default_color 默认颜色值
 * @param source_register 源寄存器（通过寄存器传递）
 * @param dest_register 目标寄存器（通过寄存器传递）
 * @param xmm_factor XMM寄存器中的插值因子
 * 
 * 处理流程：
 * 1. 根据插值模式选择处理路径
 * 2. 模式1: 直接使用中间颜色
 * 3. 模式2: 中间到结束颜色的线性插值
 * 4. 模式3: 起始到中间颜色的线性插值
 * 5. 其他模式: 使用默认颜色
 */
void RenderingSystem_FastColorInterpolator(int interpolation_mode, undefined4 default_color, 
                                         longlong source_register, longlong dest_register, 
                                         float xmm_factor) {
    if (interpolation_mode == 1) {
        // 模式1: 直接使用中间颜色
        *(undefined4 *)(dest_register + 0xe4) = *(undefined4 *)(source_register + 0x84);
        return;
    }
    
    if (interpolation_mode != 2) {
        if (interpolation_mode == 3) {
            // 模式3: 起始到中间颜色的线性插值
            xmm_factor = xmm_factor / *(float *)(source_register + 0x74);
            *(float *)(dest_register + 0xe4) = 
                (1.0 - xmm_factor) * *(float *)(source_register + 0x80) +
                xmm_factor * *(float *)(source_register + 0x84);
            return;
        }
        // 其他模式: 使用默认颜色
        *(undefined4 *)(dest_register + 0xe4) = default_color;
        return;
    }
    
    // 模式2: 中间到结束颜色的线性插值
    xmm_factor = xmm_factor / *(float *)(source_register + 0x70);
    *(float *)(dest_register + 0xe4) = 
        (1.0 - xmm_factor) * *(float *)(source_register + 0x84) + 
        xmm_factor * *(float *)(source_register + 0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统字符串管理器初始化器
 * 
 * 初始化渲染系统的字符串管理器，包括字符串缓冲区、
 * 内存分配器和相关的数据结构设置。
 * 
 * @param string_manager 字符串管理器指针
 * 
 * 初始化流程：
 * 1. 调用基础初始化函数
 * 2. 设置字符串管理器的基本结构
 * 3. 初始化内存管理器
 * 4. 设置字符串缓冲区
 * 5. 配置字符串处理器
 * 6. 初始化相关数据结构
 */
void RenderingSystem_StringManagerInitializer(undefined8 *string_manager) {
    // 调用基础初始化函数
    FUN_1803456e0();
    
    // 设置字符串管理器的基本结构
    undefined8 *manager_ptr = string_manager;
    *manager_ptr = &UNK_180a20f68; // 设置基础字符串表
    
    undefined8 *processor_ptr = manager_ptr + 0xe;
    *processor_ptr = &UNK_18098bcb0; // 设置字符串处理器
    
    // 初始化基础数据结构
    manager_ptr[0xf] = 0; // 清零标志位
    *(undefined4 *)(manager_ptr + 0x10) = 0; // 清零计数器
    
    // 设置字符串处理器到内存管理器
    *processor_ptr = &UNK_180a3c3e0;
    manager_ptr[0x11] = 0; // 清零状态
    manager_ptr[0xf] = 0;  // 清零标志
    *(undefined4 *)(manager_ptr + 0x10) = 0; // 清零计数器
    
    // 初始化内存管理器结构
    longlong *memory_manager = manager_ptr + 0x16;
    *memory_manager = (longlong)&UNK_18098bcb0; // 设置内存处理器
    manager_ptr[0x17] = 0; // 清零内存状态
    *(undefined4 *)(manager_ptr + 0x18) = 0; // 清零内存计数
    
    *memory_manager = (longlong)&UNK_180a3c3e0; // 设置内存分配器
    manager_ptr[0x19] = 0; // 清零分配状态
    manager_ptr[0x17] = 0; // 清零内存状态
    *(undefined4 *)(manager_ptr + 0x18) = 0; // 清零内存计数
    
    // 清零扩展字段
    manager_ptr[0x1c] = 0;
    manager_ptr[0x1d] = 0;
    
    // 创建第一个字符串缓冲区
    undefined *string_buffer = &UNK_180a3c3e0;
    undefined8 buffer_size = 0;
    undefined8 *buffer_ptr = (undefined8 *)0x0;
    undefined4 buffer_length = 0;
    undefined8 *buffer_target = processor_ptr;
    
    // 分配字符串缓冲区内存
    undefined4 *string_data = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)string_data = 0; // 清零字符串数据
    buffer_ptr = (undefined8 *)string_data;
    
    undefined4 string_hash = FUN_18064e990(string_data);
    *string_data = 0x74736554; // 设置字符串标识 "Test"
    *(undefined1 *)(string_data + 1) = 0; // 字符串结束符
    buffer_length = 4; // 字符串长度
    buffer_size._0_4_ = string_hash; // 存储哈希值
    
    // 初始化字符串处理器
    FUN_18005d190(processor_ptr, &string_buffer);
    
    // 清理临时缓冲区
    string_buffer = &UNK_180a3c3e0;
    if (buffer_ptr != (undefined8 *)0x0) {
        FUN_18064e900(); // 释放缓冲区内存
    }
    
    // 准备第二个字符串缓冲区
    buffer_ptr = (undefined8 *)0x0;
    buffer_size = (ulonglong)buffer_size._4_4_ << 0x20;
    string_buffer = &UNK_18098bcb0;
    
    // 清理旧的字符串管理器
    longlong *old_manager = (longlong *)string_manager[0x1c];
    string_manager[0x1c] = 0;
    if (old_manager != (longlong *)0x0) {
        (**(code **)(*old_manager + 0x38))(); // 调用清理函数
    }
    
    // 设置字符串管理器状态
    string_manager[0x13] = 0;
    *(undefined4 *)((longlong)string_manager + 0xa4) = 0x40200000; // 设置浮点常量
    *(undefined1 *)(string_manager + 0x15) = 0; // 清零状态标志
    
    // 初始化内存管理器回调
    (**(code **)(*memory_manager + 0x10))(memory_manager, &DAT_18098bc73);
    
    // 设置字符串管理器参数
    *(undefined2 *)(string_manager + 0x1a) = 0x100; // 设置缓冲区大小
    *(undefined1 *)((longlong)string_manager + 0xd2) = 1; // 设置启用标志
    *(undefined1 *)((longlong)string_manager + 0xd3) = 0; // 清零保留标志
    
    // 创建主字符串缓冲区
    string_buffer = &UNK_180a3c3e0;
    buffer_size = 0;
    buffer_ptr = (undefined8 *)0x0;
    buffer_length = 0;
    
    undefined8 *main_buffer = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)main_buffer = 0; // 清零主缓冲区
    buffer_ptr = main_buffer;
    
    undefined4 main_hash = FUN_18064e990(main_buffer);
    buffer_size = CONCAT44(buffer_size._4_4_, main_hash);
    *main_buffer = 0x6d614e2068746150; // 设置主字符串 "Path Name"
    *(undefined2 *)(main_buffer + 1) = 0x65; // 继续字符串
    buffer_length = 9; // 主字符串长度
    
    // 初始化主字符串处理
    FUN_1803460a0(string_manager, &string_buffer, buffer_target, 0);
    
    // 清理主缓冲区
    string_buffer = &UNK_180a3c3e0;
    FUN_18064e900(main_buffer); // 释放主缓冲区内存
}



/**
 * 渲染系统管理器清理器
 * 
 * 清理渲染系统管理器的资源，包括内存释放、
 * 回调函数调用和结构体重置。
 * 
 * @param manager 要清理的管理器指针
 * @param cleanup_flags 清理标志位（bit 0: 释放管理器内存）
 * @return 清理后的管理器指针
 * 
 * 清理流程：
 * 1. 重置管理器基础结构
 * 2. 清理扩展管理器
 * 3. 清理主管理器
 * 4. 释放相关资源
 * 5. 根据标志决定是否释放管理器本身
 */
undefined8 * RenderingSystem_ManagerCleaner(undefined8 *manager, ulonglong cleanup_flags) {
    // 重置管理器基础结构
    *manager = &UNK_180a20f68; // 设置基础表
    
    // 清理扩展管理器
    longlong *ext_manager = (longlong *)manager[0x1d];
    manager[0x1d] = 0;
    if (ext_manager != (longlong *)0x0) {
        (**(code **)(*ext_manager + 0x38))(); // 调用扩展管理器清理函数
    }
    
    // 清理主管理器
    longlong *main_manager = (longlong *)manager[0x1c];
    manager[0x1c] = 0;
    if (main_manager != (longlong *)0x0) {
        (**(code **)(*main_manager + 0x38))(); // 调用主管理器清理函数
    }
    
    // 重置管理器状态
    manager[0x13] = 0;
    
    // 双重检查清理
    if ((longlong *)manager[0x1d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)manager[0x1d] + 0x38))(); // 确保扩展管理器清理
    }
    if ((longlong *)manager[0x1c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)manager[0x1c] + 0x38))(); // 确保主管理器清理
    }
    
    // 清理扩展数据区域
    manager[0x16] = &UNK_180a3c3e0; // 设置扩展数据指针
    if (manager[0x17] != 0) {
        FUN_18064e900(); // 释放扩展数据内存
    }
    manager[0x17] = 0;
    *(undefined4 *)(manager + 0x19) = 0; // 清零扩展计数
    
    // 重置扩展数据到默认状态
    manager[0x16] = &UNK_18098bcb0; // 设置默认扩展数据
    
    // 清理主数据区域
    manager[0xe] = &UNK_180a3c3e0; // 设置主数据指针
    if (manager[0xf] != 0) {
        FUN_18064e900(); // 释放主数据内存
    }
    manager[0xf] = 0;
    *(undefined4 *)(manager + 0x11) = 0; // 清零主计数
    
    // 重置主数据到默认状态
    manager[0xe] = &UNK_18098bcb0; // 设置默认主数据
    
    // 调用最终清理函数
    FUN_1803457d0(manager);
    
    // 根据清理标志决定是否释放管理器本身
    if ((cleanup_flags & 1) != 0) {
        free(manager, 0x118); // 释放管理器内存
    }
    
    return manager;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036a7e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18036a7e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_40;
  undefined4 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined4 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x74736554;
  *(undefined1 *)(puVar3 + 1) = 0;
  uStack_30 = 4;
  uStack_28._0_4_ = uVar2;
  FUN_18005d190(param_1 + 0x70,&puStack_40);
  puStack_40 = &UNK_180a3c3e0;
  if (puStack_38 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_38 = (undefined4 *)0x0;
  uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
  puStack_40 = &UNK_18098bcb0;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x40200000;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0xc97423f0c97423f0;
  *(undefined8 *)(param_1 + 0x100) = 0x7f7fffffc97423f0;
  *(undefined8 *)(param_1 + 0x108) = 0x497423f0497423f0;
  *(undefined8 *)(param_1 + 0x110) = 0x7f7fffff497423f0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036a930(longlong param_1)
void FUN_18036a930(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  if (DAT_180c8aa6b != '\0') {
    puStack_38 = &UNK_1809fdc18;
    puStack_30 = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 7;
    strcpy_s(auStack_20,0x10,&UNK_180a20e68);
    uVar1 = FUN_1800b6de0(_DAT_180c86930,&puStack_38,1);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    puStack_38 = &UNK_18098bcb0;
  }
  FUN_18036b140(param_1);
  puVar2 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_48,
                         param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xd8) = *puVar2;
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  FUN_18036abc0(param_1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x10))((longlong *)(param_1 + 0xb0),&DAT_180a20e58)
    ;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036aa50(longlong param_1)
void FUN_18036aa50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if (DAT_180c8aa6b != '\0') {
    puStack_38 = &UNK_1809fdc18;
    puStack_30 = auStack_20;
    auStack_20[0] = 0;
    uStack_28 = 7;
    strcpy_s(auStack_20,0x10,&UNK_180a20e68);
    uVar1 = FUN_1800b6de0(_DAT_180c86930,&puStack_38,1);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    puStack_38 = &UNK_18098bcb0;
  }
  FUN_18036b140(param_1);
  puVar2 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStack_48,
                         param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xd8) = *puVar2;
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  FUN_18036abc0(param_1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x10))((longlong *)(param_1 + 0xb0),&DAT_180a20e58)
    ;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18036ab70(undefined8 param_1,undefined8 param_2)
void FUN_18036ab70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x118,8,3);
  uStack_40 = 0xfffffffffffffffe;
  puVar7 = puVar6;
  FUN_1803456e0(puVar6,param_2,param_1);
  *puVar7 = &UNK_180a20f68;
  puVar5 = puVar7 + 0xe;
  *puVar5 = &UNK_18098bcb0;
  puVar7[0xf] = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  *puVar5 = &UNK_180a3c3e0;
  puVar7[0x11] = 0;
  puVar7[0xf] = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  plVar1 = puVar7 + 0x16;
  *plVar1 = (longlong)&UNK_18098bcb0;
  puVar7[0x17] = 0;
  *(undefined4 *)(puVar7 + 0x18) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  puVar7[0x19] = 0;
  puVar7[0x17] = 0;
  *(undefined4 *)(puVar7 + 0x18) = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puStack_48 = puVar5;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_160 = (undefined8 *)puVar4;
  uVar3 = FUN_18064e990(puVar4);
  *puVar4 = 0x74736554;
  *(undefined1 *)(puVar4 + 1) = 0;
  uStack_158 = 4;
  uStack_150._0_4_ = uVar3;
  FUN_18005d190(puVar5,&puStack_168);
  puStack_168 = &UNK_180a3c3e0;
  if (puStack_160 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_160 = (undefined8 *)0x0;
  uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
  puStack_168 = &UNK_18098bcb0;
  plVar2 = (longlong *)puVar6[0x1c];
  puVar6[0x1c] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  puVar6[0x13] = 0;
  *(undefined4 *)((longlong)puVar6 + 0xa4) = 0x40200000;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  *(undefined2 *)(puVar6 + 0x1a) = 0x100;
  *(undefined1 *)((longlong)puVar6 + 0xd2) = 1;
  *(undefined1 *)((longlong)puVar6 + 0xd3) = 0;
  puStack_168 = &UNK_180a3c3e0;
  uStack_150 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_160 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_150 = CONCAT44(uStack_150._4_4_,uVar3);
  *puVar5 = 0x6d614e2068746150;
  *(undefined2 *)(puVar5 + 1) = 0x65;
  uStack_158 = 9;
  FUN_1803460a0(puVar6,&puStack_168,puStack_48,0);
  puStack_168 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}





// 函数: void FUN_18036abc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18036abc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong *plStackX_8;
  
  plVar3 = (longlong *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,&plStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar3;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != lVar2) {
    *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  }
  if ((lVar1 != 0) &&
     ((lVar1 != lVar2 || ((lVar2 != 0 && (*(int *)(param_1 + 0xf4) < *(int *)(lVar2 + 0x70))))))) {
    *(longlong *)(param_1 + 0xd8) = lVar1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x288);
    puVar4 = &DAT_18098bc73;
    if (*(undefined **)(lVar1 + 0x80) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar1 + 0x80);
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar4);
    FUN_18036b380(param_1);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x70);
  }
  return;
}





// 函数: void FUN_18036ac90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18036ac90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *aplStackX_8 [4];
  
  puVar1 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0xd8) = *puVar1;
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_18036b380(param_1);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x70);
  }
  return;
}



undefined8 FUN_18036adb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 7) {
    lVar3 = 0;
    while (lVar4 = lVar3 + 1,
          *(char *)(*(longlong *)(param_2 + 8) + lVar3) == (&DAT_180a20e40)[lVar3]) {
      lVar3 = lVar4;
      if (lVar4 == 8) {
        return 0;
      }
    }
  }
  if (((iVar2 != 10) ||
      ((iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20e30), iVar1 != 0 &&
       (iVar1 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20e80), iVar1 != 0)))) &&
     ((iVar2 != 0xc || (iVar2 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a20e70), iVar2 != 0))))
  {
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



