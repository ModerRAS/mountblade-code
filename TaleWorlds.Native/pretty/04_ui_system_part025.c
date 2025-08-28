#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part025.c - UI系统高级数据处理模块
// 
// 本模块包含15个函数，主要负责：
// 1. UI数据缓冲区管理
// 2. UI渲染数据处理
// 3. UI状态管理
// 4. 线程同步和初始化
// 5. CPU特性检测和优化
//
// 原始实现：反编译的C代码，包含大量的内存操作和函数调用
// 简化实现：增加了清晰的函数命名、变量命名和详细注释

// ============================================================================
// 常量定义
// ============================================================================

// UI系统相关常量
#define UI_MAX_DATA_BUFFERS      10         // 最大数据缓冲区数量
#define UI_DATA_BUFFER_SIZE      0x6c       // 数据缓冲区大小
#define UI_RENDER_DATA_OFFSET    0x12c0     // 渲染数据偏移量
#define UI_VERTEX_DATA_SIZE      0x90       // 顶点数据大小
#define UI_MATRIX_DATA_COUNT     9          // 矩阵数据数量
#define UI_RENDER_STATE_ACTIVE   1          // 渲染状态激活
#define UI_RENDER_STATE_INACTIVE 0          // 渲染状态非激活

// 内存对齐常量
#define MEMORY_ALIGNMENT_MASK    0xfffffff0  // 内存对齐掩码
#define CRITICAL_SECTION_SIZE    0x28       // 临界区大小

// CPU特性标志
#define CPU_FEATURE_SSE2         0x04000000 // SSE2特性标志
#define CPU_FEATURE_SSE3         0x00000100 // SSE3特性标志
#define CPU_FEATURE_AVX          0x18000000 // AVX特性标志

// ============================================================================
// 全局变量
// ============================================================================

// UI系统全局数据
static longlong* g_ui_context = NULL;           // UI上下文指针
static int g_ui_initialized = 0;                // UI初始化标志
static int g_ui_render_state = 0;               // UI渲染状态

// 线程同步相关全局变量
static longlong g_critical_section = 0;         // 临界区指针
static int g_critical_section_count = 0;        // 临界区引用计数
static int g_critical_section_initialized = 0;  // 临界区初始化标志

// CPU特性检测相关
static void* g_memcpy_function = NULL;          // 内存拷贝函数指针
static void* g_memset_function = NULL;          // 内存设置函数指针
static void* g_vector_ops = NULL;               // 向量操作函数指针

// ============================================================================
// 函数别名映射 (保持与原始函数名的兼容性)
// ============================================================================

#define ProcessUIData              FUN_18066c7e0
#define InitializeUIContext        FUN_18066cdf0
#define ProcessUIRenderData        FUN_18066cf80
#define ProcessUIVertexData        FUN_18066d040
#define AddUIDataBuffer           FUN_18066d130
#define ValidateUIDataFormat       FUN_18066d210
#define ReleaseUIResource         FUN_18066d310
#define SetUIErrorMessage         FUN_18066d370
#define SetUIErrorFormat          FUN_18066d37f
#define HandleUIError             FUN_18066d398
#define CheckUIErrorState         FUN_18066d3e9
#define UINoOperation             FUN_18066d3f4
#define InitializeUIOnce          FUN_18066d410
#define ExecuteUIOnce             FUN_18066d426
#define FinalizeUIOnce            FUN_18066d483
#define DetectCPUFeatures         FUN_18066d4e0
#define InitializeUIThreadSafe    FUN_18066d6f0
#define ExecuteUIThreadSafe       FUN_18066d706
#define FinalizeUIThreadSafe      FUN_18066d763

// ============================================================================
// 主要UI数据处理函数
// ============================================================================

/**
 * 处理UI数据的主函数
 * 
 * 原始实现：FUN_18066c7e0
 * 功能：
 * 1. 处理UI数据缓冲区
 * 2. 管理UI渲染状态
 * 3. 处理顶点数据
 * 4. 执行渲染操作
 * 
 * @param ui_context UI上下文指针
 * @param data_handle 数据句柄
 * @param data_flags 数据标志
 * @param render_context 渲染上下文
 * @param render_params 渲染参数
 */
void ProcessUIData(longlong* ui_context, longlong data_handle, ulonglong data_flags, 
                   longlong render_context, int render_params)
{
  undefined8* vertex_ptr1;
  undefined8* vertex_ptr2;
  undefined8* vertex_ptr3;
  undefined4* vertex_ptr4;
  longlong render_offset;
  undefined4 temp_var1;
  undefined4 temp_var2;
  undefined4 temp_var3;
  undefined8 matrix_data;
  longlong buffer_ptr;
  int status_code;
  longlong context_ptr;
  longlong vertex_buffer;
  longlong render_target;
  ulonglong processed_flags;
  undefined1 stack_buffer[32];
  longlong stack_render_context;
  int stack_status1;
  int stack_status2;
  int stack_status3;
  int stack_status4;
  uint stack_flags;
  longlong stack_ptr1;
  longlong stack_ptr2;
  longlong stack_ptr3;
  longlong* stack_context_ptr;
  longlong stack_data_handle;
  undefined4 stack_render_data;
  int stack_error_code;
  undefined8 stack_matrix1;
  undefined4 stack_matrix2;
  uint stack_temp_flag;
  ulonglong stack_security_cookie;
  
  // 安全检查：堆栈保护cookie
  stack_security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  stack_flags = (uint)data_flags;
  processed_flags = data_flags & 0xffffffff;
  stack_status1 = 0;
  stack_status2 = 0;
  stack_context_ptr = ui_context;
  stack_data_handle = data_handle;
  
  // 检查是否需要处理数据
  if (((((int)ui_context[0x57] != 0) || (data_handle != 0)) || (stack_flags != 0)) &&
     (status_code = AddUIDataBuffer(ui_context, data_handle, data_flags, &stack_status1), 0 < status_code)) {
    
    stack_render_context = ui_context[0x22];
    context_ptr = ui_context[0x1d];
    status_code = *(int *)((longlong)ui_context + 0xec);
    stack_status3 = (int)context_ptr;
    stack_status4 = status_code;
    stack_status1 = ValidateUIDataFormat(ui_context[0x58], (int)ui_context[0x61], (longlong)ui_context + 0xe4,
                                        ui_context[0x21]);
    
    // 处理特殊渲染状态
    if ((stack_status1 == 5) && ((int)ui_context[0x1e] == 0)) {
      stack_status1 = 0;
    }
    if ((*(int *)((longlong)ui_context + 0xf4) == 0) && ((int)ui_context[0x1e] == 0)) {
      stack_status1 = 5;
    }
    
    // 检查状态变化
    if ((*(int *)((longlong)ui_context + 0xec) != status_code) ||
       (status_code = stack_status2, (int)ui_context[0x1d] != (int)context_ptr)) {
      status_code = 1;
    }
    
    // 初始化渲染数据
    if ((stack_status1 == 0) && (*(int *)((longlong)ui_context + 0xf4) == 0)) {
      stack_render_data = (undefined4)ui_context[0x1d];
      stack_matrix1 = 9;
      stack_matrix2 = (undefined4)ui_context[0x1b];
      stack_temp_flag = *(uint *)(ui_context + 1) & 0x20000;
      
      // 特殊渲染状态处理
      if (((int)ui_context[0x1f] == 0) && ((*(uint *)(ui_context + 1) & 0x10000) != 0)) {
        *(undefined4 *)((longlong)ui_context + 0xfc) = 0x403;
        ui_context[0x20] = 4;
      }
      
      stack_error_code = *(int *)((longlong)ui_context + 0xec);
      stack_status1 = FUN_18066eea0(ui_context + 0x35, &stack_render_data);
      *(undefined4 *)((longlong)ui_context + 0xf4) = 1;
    }
    
    // 更新渲染上下文
    if (*(int *)((longlong)ui_context + 0xf4) != 0) {
      *(longlong *)(ui_context[0x36] + 0x4430) = ui_context[0x21];
      *(longlong *)(ui_context[0x36] + 0x4438) = ui_context[0x22];
    }
    
    // 处理渲染数据
    if (stack_status1 == 0) {
      context_ptr = ui_context[0x36];
      stack_ptr1 = context_ptr;
      if (status_code != 0) {
        stack_ptr2 = context_ptr + UI_RENDER_DATA_OFFSET;
        *(int *)(context_ptr + 0x1a20) = (int)ui_context[0x1d];
        *(undefined4 *)(context_ptr + 0x1a24) = *(undefined4 *)((longlong)ui_context + 0xec);
        stack_status2 = *(int *)(context_ptr + 0x1e74);
        stack_ptr3 = context_ptr;
        status_code = __intrinsic_setjmp(context_ptr + 0x1320, stack_buffer);
        render_target = stack_ptr2;
        buffer_ptr = stack_ptr1;
        
        if (status_code != 0) {
          *(undefined4 *)(stack_ptr1 + 0x1318) = 0;
          func_0x000180001000();
          goto LAB_18066cdc1;
        }
        
        *(undefined4 *)(stack_ptr1 + 0x1318) = 1;
        
        // 设置渲染参数
        if (*(int *)(stack_ptr2 + 0x760) < 1) {
          *(int *)(stack_ptr2 + 0x760) = stack_status3;
          SetUIErrorMessage(stack_ptr2, 7, &UNK_180946ae0);
        }
        if (*(int *)(render_target + 0x764) < 1) {
          *(int *)(render_target + 0x764) = stack_status4;
          SetUIErrorMessage(render_target, 7, &UNK_180946af8);
        }
        
        status_code = FUN_18066e500(render_target, *(undefined4 *)(render_target + 0x760),
                                   *(undefined4 *)(render_target + 0x764));
        if (status_code != 0) {
          SetUIErrorMessage(render_target, 2, &UNK_180946b10);
        }
        
        // 处理顶点数据
        context_ptr = (longlong)*(int *)(render_target + 0x9d4);
        status_code = 0;
        vertex_ptr1 = (undefined8 *)(render_target + 0x780 + context_ptr * UI_VERTEX_DATA_SIZE);
        matrix_data = vertex_ptr1[1];
        *(undefined8 *)(stack_ptr3 + 0xde0) = *vertex_ptr1;
        *(undefined8 *)(stack_ptr3 + 0xde8) = matrix_data;
        
        // 处理所有矩阵数据
        for (int i = 0; i < UI_MATRIX_DATA_COUNT; i++) {
          vertex_ptr1 = (undefined8 *)(render_target + 0x780 + context_ptr * UI_VERTEX_DATA_SIZE + i * 0x10);
          matrix_data = vertex_ptr1[1];
          *(undefined8 *)(stack_ptr3 + 0xde0 + i * 0x10) = *vertex_ptr1;
          *(undefined8 *)(stack_ptr3 + 0xde8 + i * 0x10) = matrix_data;
        }
        
        // 处理渲染目标数据
        if (0 < *(int *)(buffer_ptr + 0x4390)) {
          render_offset = 0;
          do {
            context_ptr = (longlong)*(int *)(render_target + 0x9d0);
            buffer_ptr = *(longlong *)(buffer_ptr + 0x43e0);
            
            // 复制顶点数据到渲染目标
            for (int i = 0; i < UI_MATRIX_DATA_COUNT; i++) {
              vertex_ptr1 = (undefined8 *)(render_target + 0x780 + context_ptr * UI_VERTEX_DATA_SIZE + i * 0x10);
              matrix_data = vertex_ptr1[1];
              vertex_ptr3 = (undefined8 *)(buffer_ptr + 0xe70 + render_offset + i * 0x10);
              *vertex_ptr3 = *vertex_ptr1;
              vertex_ptr3[1] = matrix_data;
            }
            
            func_0x00018066e370((longlong)status_code * 0x12a0 + *(longlong *)(buffer_ptr + 0x43e0));
            status_code = status_code + 1;
            render_offset = render_offset + 0x12a0;
          } while (status_code < *(int *)(buffer_ptr + 0x4390));
        }
        
        func_0x00018066e370(buffer_ptr);
        context_ptr = stack_ptr1;
        
        // 最终渲染处理
        if (*(int *)(buffer_ptr + 0x4380) != 0) {
          FUN_180670c40(stack_ptr1, *(undefined4 *)(render_target + 0x760), stack_status2);
        }
        
        processed_flags = (ulonglong)stack_flags;
        *(undefined4 *)(buffer_ptr + 0x1318) = 0;
        *(undefined4 *)(context_ptr + 0x1c80) = 0;
        ui_context = stack_context_ptr;
        data_handle = stack_data_handle;
      }
      
      // 更新UI上下文
      render_target = 0;
      buffer_ptr = ui_context[0x58];
      *(longlong *)(context_ptr + 0x4308) = ui_context[0x57];
      *(longlong *)(context_ptr + 0x4310) = buffer_ptr;
      buffer_ptr = ui_context[0x5a];
      *(longlong *)(context_ptr + 0x4318) = ui_context[0x59];
      *(longlong *)(context_ptr + 0x4320) = buffer_ptr;
      
      // 设置所有UI上下文参数
      for (int i = 0; i < 6; i++) {
        buffer_ptr = ui_context[0x5c + i * 2];
        *(longlong *)(context_ptr + 0x4328 + i * 8) = ui_context[0x5b + i * 2];
        *(longlong *)(context_ptr + 0x4330 + i * 8) = buffer_ptr;
      }
      
      // 设置渲染参数
      temp_var1 = *(undefined4 *)((longlong)ui_context + 0x31c);
      buffer_ptr = ui_context[100];
      temp_var2 = *(undefined4 *)((longlong)ui_context + 0x324);
      *(int *)(context_ptr + 0x4368) = (int)ui_context[99];
      *(undefined4 *)(context_ptr + 0x436c) = temp_var1;
      *(int *)(context_ptr + 0x4370) = (int)buffer_ptr;
      *(undefined4 *)(context_ptr + 0x4374) = temp_var2;
      *(longlong *)(context_ptr + 0x4378) = ui_context[0x65];
      
      // 执行最终渲染
      ui_context[0x56] = render_context;
      status_code = FUN_18066f080(context_ptr, processed_flags, data_handle, (longlong)render_params);
      if ((status_code != 0) && (*(int *)(context_ptr + 0x12c0) != 0)) {
        if (*(int *)(context_ptr + 0x12c4) != 0) {
          render_target = context_ptr + 0x12c8;
        }
        *ui_context = render_target;
      }
      
      *(undefined4 *)((longlong)ui_context + 700) = 0;
    }
  }
  
LAB_18066cdc1:
  // 安全检查：恢复堆栈保护cookie
  FUN_1808fc050(stack_security_cookie ^ (ulonglong)stack_buffer);
}

// ============================================================================
// UI上下文初始化函数
// ============================================================================

/**
 * 初始化UI上下文
 * 
 * 原始实现：FUN_18066cdf0
 * 功能：
 * 1. 创建UI上下文结构
 * 2. 初始化UI参数
 * 3. 设置默认状态
 * 
 * @param context_ptr 上下文指针
 * @param ui_handle UI句柄指针
 */
void InitializeUIContext(longlong context_ptr, longlong* ui_handle)
{
  int init_status;
  undefined1 stack_buffer[32];
  undefined4* format_ptr;
  undefined8 size_param1;
  undefined8 size_param2;
  undefined4 format_data;
  int alignment_param;
  undefined4 render_param;
  undefined4 layout_param;
  undefined8 matrix_param1;
  undefined8 matrix_param2;
  undefined8 matrix_param3;
  undefined8 matrix_param4;
  undefined4 style_param;
  undefined8 transform_param1;
  undefined8 transform_param2;
  undefined8 transform_param3;
  undefined8 transform_param4;
  undefined4 state_param;
  undefined8 texture_param;
  undefined8 shader_param;
  undefined4 animation_param;
  undefined8 timing_param;
  undefined8 event_param;
  undefined4 callback_param;
  undefined8 resource_param;
  undefined8 memory_param;
  undefined8 debug_param;
  ulonglong stack_security_cookie;
  
  // 安全检查：堆栈保护cookie
  stack_security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  
  if ((*ui_handle == 0) && (*(longlong *)(context_ptr + 0x1b0) != 0)) {
    // 初始化UI参数
    size_param2 = 0;
    size_param1 = 0;
    state_param = 0;
    texture_param = 0;
    shader_param = 0;
    animation_param = 0;
    timing_param = 0;
    event_param = 0;
    
    // 如果启用了特殊渲染标志
    if ((*(uint *)(context_ptr + 8) & 0x10000) != 0) {
      state_param = *(undefined4 *)(context_ptr + 0xfc);
      texture_param = *(undefined8 *)(context_ptr + 0x100);
    }
    
    format_ptr = &state_param;
    init_status = FUN_18066ef60(*(longlong *)(context_ptr + 0x1b0), &format_data, &size_param2, &size_param1);
    
    if (init_status == 0) {
      // 设置UI上下文参数
      *(int *)(context_ptr + 0x13c) = alignment_param;
      *(int *)(context_ptr + 0x134) = alignment_param;
      *(undefined4 *)(context_ptr + 0x118) = 0x102;
      *(uint *)(context_ptr + 0x128) = alignment_param + 0x4fU & MEMORY_ALIGNMENT_MASK;
      *(undefined4 *)(context_ptr + 0x138) = format_data;
      *(undefined4 *)(context_ptr + 0x130) = format_data;
      *(undefined4 *)(context_ptr + 0x124) = render_param;
      *(undefined4 *)(context_ptr + 0x140) = 1;
      *(undefined4 *)(context_ptr + 0x144) = 1;
      *(undefined8 *)(context_ptr + 0x148) = matrix_param1;
      *(undefined8 *)(context_ptr + 0x150) = matrix_param2;
      *(undefined4 *)(context_ptr + 0x16c) = layout_param;
      *(undefined4 *)(context_ptr + 0x170) = layout_param;
      *(undefined8 *)(context_ptr + 0x158) = matrix_param3;
      *(undefined8 *)(context_ptr + 0x160) = 0;
      *(undefined4 *)(context_ptr + 0x168) = render_param;
      *(undefined4 *)(context_ptr + 0x174) = render_param;
      *(undefined4 *)(context_ptr + 300) = 8;
      *(undefined4 *)(context_ptr + 0x178) = 0xc;
      *(undefined8 *)(context_ptr + 0x180) = *(undefined8 *)(context_ptr + 0x2b0);
      *(undefined8 *)(context_ptr + 0x188) = matrix_param4;
      *(undefined8 *)(context_ptr + 400) = 0;
      *ui_handle = context_ptr + 0x118;
    }
  }
  
  // 安全检查：恢复堆栈保护cookie
  FUN_1808fc050(stack_security_cookie ^ (ulonglong)stack_buffer);
}

// ============================================================================
// UI渲染数据处理函数
// ============================================================================

/**
 * 处理UI渲染数据
 * 
 * 原始实现：FUN_18066cf80
 * 功能：
 * 1. 解析渲染数据
 * 2. 执行渲染操作
 * 3. 返回处理结果
 * 
 * @param context_ptr 上下文指针
 * @param render_data 渲染数据指针
 * @return 处理结果状态码
 */
undefined8 ProcessUIRenderData(longlong context_ptr, undefined8* render_data)
{
  undefined4* data_ptr;
  undefined8 result;
  int render_width;
  int render_height;
  int texture_width;
  int texture_height;
  int texture_format;
  uint center_x;
  uint center_y;
  uint width_half;
  uint height_half;
  undefined4 render_flags;
  undefined8 texture_handle;
  undefined8 shader_handle;
  undefined8 matrix_data;
  uint texture_offset;
  
  data_ptr = (undefined4 *)*render_data;
  if ((data_ptr != (undefined4 *)0x0) && (*(int *)(context_ptr + 0x1a8) == 0)) {
    render_height = data_ptr[9];
    render_width = data_ptr[8];
    texture_handle = *(undefined8 *)(data_ptr + 0xe);
    shader_handle = *(undefined8 *)(data_ptr + 0x10);
    center_x = render_height + 1U >> 1;
    texture_format = data_ptr[0x16];
    center_y = render_width + 1U >> 1;
    matrix_data = *(undefined8 *)(data_ptr + 0x12);
    texture_offset = (uint)(texture_format - render_width) >> 1;
    render_flags = data_ptr[0x17];
    texture_width = render_width;
    texture_height = render_height;
    width_half = center_y;
    height_half = center_x;
    
    result = FUN_18066f2e0(*(undefined8 *)(context_ptr + 0x1b0), *data_ptr, &render_width);
    return result;
  }
  return 8;
}

/**
 * 处理UI顶点数据
 * 
 * 原始实现：FUN_18066d040
 * 功能：
 * 1. 解析顶点数据
 * 2. 执行顶点处理
 * 3. 返回处理结果
 * 
 * @param context_ptr 上下文指针
 * @param vertex_data 顶点数据指针
 * @return 处理结果状态码
 */
undefined8 ProcessUIVertexData(longlong context_ptr, undefined8* vertex_data)
{
  undefined4* data_ptr;
  undefined8 result;
  int vertex_count;
  int vertex_format;
  int buffer_size;
  int buffer_format;
  int vertex_stride;
  uint vertex_offset;
  uint buffer_offset;
  uint size_aligned;
  uint offset_aligned;
  undefined4 vertex_flags;
  undefined8 buffer_handle;
  undefined8 index_handle;
  undefined8 vertex_array;
  uint stride_aligned;
  
  data_ptr = (undefined4 *)*vertex_data;
  if ((data_ptr != (undefined4 *)0x0) && (*(int *)(context_ptr + 0x1a8) == 0)) {
    vertex_count = data_ptr[9];
    vertex_format = data_ptr[8];
    buffer_handle = *(undefined8 *)(data_ptr + 0xe);
    index_handle = *(undefined8 *)(data_ptr + 0x10);
    size_aligned = vertex_count + 1U >> 1;
    vertex_stride = data_ptr[0x16];
    offset_aligned = vertex_format + 1U >> 1;
    vertex_array = *(undefined8 *)(data_ptr + 0x12);
    stride_aligned = (uint)(vertex_stride - vertex_format) >> 1;
    vertex_flags = data_ptr[0x17];
    buffer_size = vertex_format;
    buffer_format = vertex_count;
    buffer_offset = offset_aligned;
    size_aligned = size_aligned;
    
    result = FUN_18066efd0(*(undefined8 *)(context_ptr + 0x1b0), *data_ptr, &vertex_format);
    return result;
  }
  return 8;
}

// ============================================================================
// UI数据缓冲区管理函数
// ============================================================================

/**
 * 添加UI数据缓冲区
 * 
 * 原始实现：FUN_18066d130
 * 功能：
 * 1. 管理数据缓冲区
 * 2. 处理数据队列
 * 3. 返回处理状态
 * 
 * @param ui_context UI上下文
 * @param data_handle 数据句柄
 * @param data_flags 数据标志
 * @param status_code 状态码指针
 * @return 处理结果
 */
undefined8 AddUIDataBuffer(longlong ui_context, longlong data_handle, int data_flags, undefined4* status_code)
{
  int buffer_count;
  
  *status_code = 0;
  if (*(int *)(ui_context + 700) == 0) {
    // 初始化数据缓冲区
    memset(ui_context + 0x2c0, 0, UI_DATA_BUFFER_SIZE);
  }
  
  buffer_count = *(int *)(ui_context + 0x2b8);
  if (buffer_count != 0) {
    if ((data_handle != 0) || (data_flags != 0)) {
      // 添加数据到缓冲区
      *(longlong *)(ui_context + 0x2c0 + (ulonglong)*(uint *)(ui_context + 700) * 8) = data_handle;
      *(int *)(ui_context + 0x308 + (ulonglong)*(uint *)(ui_context + 700) * 4) = data_flags;
      *(int *)(ui_context + 700) = *(int *)(ui_context + 700) + 1;
      
      if (*(uint *)(ui_context + 700) < UI_MAX_DATA_BUFFERS) {
        return 0;
      }
      
      // 缓冲区满，重置
      *(undefined4 *)(ui_context + 700) = 0;
      *status_code = 8;
      return 0xffffffff;
    }
    
    if (buffer_count != 0) {
      return 1;
    }
  }
  
  if ((data_handle == 0) && (data_flags == 0)) {
    return 0;
  }
  
  if (buffer_count == 0) {
    // 创建新缓冲区
    *(longlong *)(ui_context + 0x2c0) = data_handle;
    *(int *)(ui_context + 0x308) = data_flags;
    *(undefined4 *)(ui_context + 700) = 1;
  }
  
  return 1;
}

/**
 * 验证UI数据格式
 * 
 * 原始实现：FUN_18066d210
 * 功能：
 * 1. 检查数据格式有效性
 * 2. 解析数据头信息
 * 3. 设置格式参数
 * 
 * @param data_ptr 数据指针
 * @param data_size 数据大小
 * @param format_ptr 格式指针
 * @param callback 回调函数
 * @param callback_param 回调参数
 */
void ValidateUIDataFormat(byte* data_ptr, uint data_size, longlong format_ptr, code* callback, undefined8 callback_param)
{
  uint processed_size;
  undefined1 stack_buffer[32];
  byte temp_buffer[16];
  ulonglong stack_security_cookie;
  
  // 安全检查：堆栈保护cookie
  stack_security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  
  if (data_ptr < data_ptr + data_size) {
    if (callback != (code *)0x0) {
      processed_size = data_size;
      if (10 < data_size) {
        processed_size = 10;
      }
      (*callback)(callback_param, data_ptr, temp_buffer, processed_size);
      data_ptr = temp_buffer;
    }
    
    *(undefined4 *)(format_ptr + 0xc) = 0;
    
    // 验证数据格式
    if ((((9 < data_size) && ((*data_ptr & 1) == 0)) &&
        (*(undefined4 *)(format_ptr + 0xc) = 1, data_ptr[3] == 0x9d)) &&
       ((data_ptr[4] == 1 && (data_ptr[5] == 0x2a)))) {
      *(uint *)(format_ptr + 4) = *(ushort *)(data_ptr + 6) & 0x3fff;
      *(uint *)(format_ptr + 8) = *(ushort *)(data_ptr + 8) & 0x3fff;
    }
  }
  
  // 安全检查：恢复堆栈保护cookie
  FUN_1808fc050(stack_security_cookie ^ (ulonglong)stack_buffer);
}

// ============================================================================
// UI资源管理函数
// ============================================================================

/**
 * 释放UI资源
 * 
 * 原始实现：FUN_18066d310
 * 功能：
 * 1. 释放UI资源
 * 2. 清理内存
 * 3. 返回释放状态
 * 
 * @param resource_ptr 资源指针
 * @return 释放状态
 */
undefined8 ReleaseUIResource(undefined8* resource_ptr)
{
  if (resource_ptr == (undefined8 *)0x0) {
    return 8;
  }
  
  if ((resource_ptr[1] != 0) && (resource_ptr[6] != 0)) {
    // 调用释放回调
    (**(code **)(resource_ptr[1] + 0x18))();
    resource_ptr[1] = 0;
    *resource_ptr = 0;
    resource_ptr[6] = 0;
    *(undefined4 *)(resource_ptr + 2) = 0;
    return 0;
  }
  
  *(undefined4 *)(resource_ptr + 2) = 1;
  return 1;
}

// ============================================================================
// UI错误处理函数
// ============================================================================

/**
 * 设置UI错误消息
 * 
 * 原始实现：FUN_18066d370
 * 功能：
 * 1. 设置错误消息
 * 2. 格式化错误信息
 * 3. 处理错误跳转
 * 
 * @param error_ptr 错误指针
 * @param error_code 错误代码
 * @param format_str 格式化字符串
 * @param format_param 格式化参数
 */
void SetUIErrorMessage(undefined4* error_ptr, undefined4 error_code, longlong format_str, undefined8 format_param)
{
  ulonglong* stdio_ptr;
  undefined8 stack_param;
  
  *error_ptr = error_code;
  error_ptr[1] = 0;
  stack_param = format_param;
  
  if (format_str != 0) {
    error_ptr[1] = 1;
    stdio_ptr = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*stdio_ptr | 2, error_ptr + 2, 0x4f, format_str, 0, &stack_param);
    *(undefined1 *)((longlong)error_ptr + 0x57) = 0;
  }
  
  if (error_ptr[0x16] == 0) {
    return;
  }
  
  // 执行错误跳转
  longjmp(error_ptr + 0x18, *error_ptr);
}

/**
 * 设置UI错误格式
 * 
 * 原始实现：FUN_18066d37f
 * 功能：
 * 1. 设置错误格式
 * 2. 格式化错误信息
 * 3. 处理错误跳转
 * 
 * @param error_ptr 错误指针
 * @param error_code 错误代码
 * @param format_str 格式化字符串
 */
void SetUIErrorFormat(undefined4* error_ptr, undefined4 error_code, longlong format_str)
{
  ulonglong* stdio_ptr;
  
  *error_ptr = error_code;
  error_ptr[1] = 0;
  
  if (format_str != 0) {
    error_ptr[1] = 1;
    stdio_ptr = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*stdio_ptr | 2, error_ptr + 2, 0x4f, format_str, 0);
    *(undefined1 *)((longlong)error_ptr + 0x57) = 0;
  }
  
  if (error_ptr[0x16] == 0) {
    return;
  }
  
  // 执行错误跳转
  longjmp(error_ptr + 0x18, *error_ptr);
}

/**
 * 处理UI错误
 * 
 * 原始实现：FUN_18066d398
 * 功能：
 * 1. 处理UI错误
 * 2. 格式化错误信息
 * 3. 执行错误跳转
 * 
 * @param error_context 错误上下文
 */
void HandleUIError(longlong error_context)
{
  ulonglong* stdio_ptr;
  undefined4* error_ptr;
  
  *(undefined4 *)(error_context + 4) = 1;
  stdio_ptr = (ulonglong *)func_0x00018004b9a0();
  __stdio_common_vsprintf(*stdio_ptr | 2, error_ptr + 2, 0x4f);
  *(undefined1 *)((longlong)error_ptr + 0x57) = 0;
  
  if (error_ptr[0x16] == 0) {
    return;
  }
  
  // 执行错误跳转
  longjmp(error_ptr + 0x18, *error_ptr);
}

/**
 * 检查UI错误状态
 * 
 * 原始实现：FUN_18066d3e9
 * 功能：
 * 1. 检查错误状态
 * 2. 执行错误跳转
 */
void CheckUIErrorState(void)
{
  undefined4* error_ptr;
  
  if (error_ptr[0x16] == 0) {
    return;
  }
  
  // 执行错误跳转
  longjmp(error_ptr + 0x18, *error_ptr);
}

/**
 * UI无操作函数
 * 
 * 原始实现：FUN_18066d3f4
 * 功能：空操作，用于占位
 */
void UINoOperation(void)
{
  return;
}

// ============================================================================
// 线程安全初始化函数组
// ============================================================================

/**
 * 线程安全的UI初始化（检查标志）
 * 
 * 原始实现：FUN_18066d410
 * 功能：
 * 1. 线程安全的初始化
 * 2. 使用临界区保护
 * 3. 一次性初始化
 * 
 * @param init_callback 初始化回调函数
 */
void InitializeUIOnce(code* init_callback)
{
  int ref_count;
  longlong critical_section;
  longlong temp_section;
  bool section_exists;
  
  if (_DAT_180c0c1cc == 0) {
    LOCK();
    _DAT_180c0c1c8 = _DAT_180c0c1c8 + 1;
    UNLOCK();
    
    // 创建临界区
    critical_section = malloc(CRITICAL_SECTION_SIZE);
    InitializeCriticalSection(critical_section);
    
    LOCK();
    section_exists = _DAT_180c0c1c0 != 0;
    temp_section = critical_section;
    if (section_exists) {
      temp_section = _DAT_180c0c1c0;
    }
    _DAT_180c0c1c0 = temp_section;
    UNLOCK();
    
    if (section_exists) {
      DeleteCriticalSection(critical_section);
      free(critical_section);
    }
    
    // 执行初始化
    EnterCriticalSection(_DAT_180c0c1c0);
    if (_DAT_180c0c1cc == 0) {
      (*init_callback)();
      _DAT_180c0c1cc = 1;
    }
    LeaveCriticalSection(_DAT_180c0c1c0);
    
    // 清理引用计数
    LOCK();
    ref_count = _DAT_180c0c1c8 + -1;
    UNLOCK();
    section_exists = _DAT_180c0c1c8 == 1;
    _DAT_180c0c1c8 = ref_count;
    
    if (section_exists) {
      DeleteCriticalSection(_DAT_180c0c1c0);
      free(_DAT_180c0c1c0);
      _DAT_180c0c1c0 = 0;
    }
  }
}

/**
 * 线程安全的UI执行（无条件）
 * 
 * 原始实现：FUN_18066d426
 * 功能：
 * 1. 线程安全的执行
 * 2. 使用临界区保护
 * 3. 一次性执行
 */
void ExecuteUIOnce(void)
{
  int ref_count;
  longlong critical_section;
  longlong temp_section;
  code* callback_ptr;
  bool section_exists;
  
  LOCK();
  _DAT_180c0c1c8 = _DAT_180c0c1c8 + 1;
  UNLOCK();
  
  // 创建临界区
  critical_section = malloc(CRITICAL_SECTION_SIZE);
  InitializeCriticalSection(critical_section);
  
  LOCK();
  section_exists = _DAT_180c0c1c0 != 0;
  temp_section = critical_section;
  if (section_exists) {
    temp_section = _DAT_180c0c1c0;
  }
  _DAT_180c0c1c0 = temp_section;
  UNLOCK();
  
  if (section_exists) {
    DeleteCriticalSection(critical_section);
    free(critical_section);
  }
  
  // 执行回调
  EnterCriticalSection(_DAT_180c0c1c0);
  if (_DAT_180c0c1cc == 0) {
    (*callback_ptr)();
    _DAT_180c0c1cc = 1;
  }
  LeaveCriticalSection(_DAT_180c0c1c0);
  
  // 清理引用计数
  LOCK();
  ref_count = _DAT_180c0c1c8 + -1;
  UNLOCK();
  section_exists = _DAT_180c0c1c8 == 1;
  _DAT_180c0c1c8 = ref_count;
  
  if (section_exists) {
    DeleteCriticalSection(_DAT_180c0c1c0);
    free(_DAT_180c0c1c0);
    _DAT_180c0c1c0 = 0;
  }
}

/**
 * 线程安全的UI最终化
 * 
 * 原始实现：FUN_18066d483
 * 功能：
 * 1. 线程安全的最终化
 * 2. 清理临界区
 * 3. 执行回调
 */
void FinalizeUIOnce(void)
{
  int ref_count;
  code* callback_ptr;
  bool cleanup_needed;
  
  (*callback_ptr)();
  _DAT_180c0c1cc = 1;
  LeaveCriticalSection(_DAT_180c0c1c0);
  
  LOCK();
  ref_count = _DAT_180c0c1c8 + -1;
  UNLOCK();
  cleanup_needed = _DAT_180c0c1c8 == 1;
  _DAT_180c0c1c8 = ref_count;
  
  if (cleanup_needed) {
    DeleteCriticalSection(_DAT_180c0c1c0);
    free(_DAT_180c0c1c0);
    _DAT_180c0c1c0 = 0;
  }
}

// ============================================================================
// CPU特性检测函数
// ============================================================================

/**
 * 检测CPU特性并设置优化函数
 * 
 * 原始实现：FUN_18066d4e0
 * 功能：
 * 1. 检测CPU特性（SSE2, SSE3, AVX）
 * 2. 设置优化函数指针
 * 3. 配置最佳性能路径
 */
void DetectCPUFeatures(void)
{
  uint* cpu_info;
  longlong version_info;
  uint feature_flags;
  bool has_sse2;
  bool has_sse3;
  bool has_avx;
  byte xcr0_state;
  
  // 获取CPU基本信息
  cpu_info = (uint *)cpuid_basic_info(0);
  has_sse3 = false;
  has_avx = false;
  has_sse2 = false;
  
  if (*cpu_info != 0) {
    version_info = cpuid_Version_info(1);
    feature_flags = *(uint *)(version_info + 0xc);
    has_sse2 = (feature_flags & 1) != 0;
    has_sse3 = (feature_flags >> 9 & 1) != 0;
    has_avx = (feature_flags >> 0x13 & 1) != 0;
    
    // 检查AVX支持
    if ((((feature_flags & CPU_FEATURE_AVX) == CPU_FEATURE_AVX) && ((xcr0_state & 6) == 6)) && (6 < *cpu_info)) {
      cpuid_Extended_Feature_Enumeration_info(7);
    }
  }
  
  // 设置内存拷贝函数
  g_memcpy_function = &UNK_1800018c7;
  if (has_sse2) {
    g_memcpy_function = &UNK_1800025f0;
  }
  
  // 设置内存设置函数
  g_memset_function = &UNK_180001b8d;
  if (has_sse2) {
    g_memset_function = &UNK_1800028e4;
  }
  
  // 设置向量操作函数
  g_vector_ops = &UNK_180002cb0;
  if (has_sse2) {
    g_vector_ops = &UNK_180002d90;
  }
  
  // 根据CPU特性设置优化函数
  _DAT_180d4a9c8 = FUN_1806714a0;
  if (has_sse2) {
    _DAT_180d4a9c8 = FUN_1806718d0;
  }
  
  _DAT_180d4a9c0 = FUN_180673220;
  if (has_sse2) {
    _DAT_180d4a9c0 = FUN_180673850;
  }
  
  _DAT_180d4a9b8 = FUN_180671eb0;
  if (has_sse2) {
    _DAT_180d4a9b8 = FUN_1806721d0;
  }
  if (has_avx) {
    _DAT_180d4a9b8 = FUN_1806725c0;
  }
  
  _DAT_180d4a9a0 = FUN_180672a50;
  if (has_sse2) {
    _DAT_180d4a9a0 = FUN_180672da0;
  }
  
  _DAT_180d4a998 = FUN_180673360;
  if (has_avx) {
    _DAT_180d4a998 = FUN_180673970;
  }
  
  _DAT_180d4a988 = FUN_180673e10;
  if (has_sse2) {
    _DAT_180d4a988 = FUN_180673f50;
  }
  
  _DAT_180d4a980 = FUN_180674040;
  if (has_sse2) {
    _DAT_180d4a980 = FUN_180674120;
  }
  
  _DAT_180d4a978 = FUN_1806742a0;
  if (has_sse2) {
    _DAT_180d4a978 = FUN_1806743e0;
  }
  
  _DAT_180d4a970 = FUN_1806744d0;
  if (has_sse2) {
    _DAT_180d4a970 = FUN_180674610;
  }
}

// ============================================================================
// 线程安全的UI初始化函数组（第二组）
// ============================================================================

/**
 * 线程安全的UI初始化（第二组，检查标志）
 * 
 * 原始实现：FUN_18066d6f0
 * 功能：
 * 1. 线程安全的初始化
 * 2. 使用临界区保护
 * 3. 一次性初始化
 * 
 * @param init_callback 初始化回调函数
 */
void InitializeUIThreadSafe(code* init_callback)
{
  int ref_count;
  longlong critical_section;
  longlong temp_section;
  bool section_exists;
  
  if (_DAT_180c0c1dc == 0) {
    LOCK();
    _DAT_180c0c1d8 = _DAT_180c0c1d8 + 1;
    UNLOCK();
    
    // 创建临界区
    critical_section = malloc(CRITICAL_SECTION_SIZE);
    InitializeCriticalSection(critical_section);
    
    LOCK();
    section_exists = _DAT_180c0c1d0 != 0;
    temp_section = critical_section;
    if (section_exists) {
      temp_section = _DAT_180c0c1d0;
    }
    _DAT_180c0c1d0 = temp_section;
    UNLOCK();
    
    if (section_exists) {
      DeleteCriticalSection(critical_section);
      free(critical_section);
    }
    
    // 执行初始化
    EnterCriticalSection(_DAT_180c0c1d0);
    if (_DAT_180c0c1dc == 0) {
      (*init_callback)();
      _DAT_180c0c1dc = 1;
    }
    LeaveCriticalSection(_DAT_180c0c1d0);
    
    // 清理引用计数
    LOCK();
    ref_count = _DAT_180c0c1d8 + -1;
    UNLOCK();
    section_exists = _DAT_180c0c1d8 == 1;
    _DAT_180c0c1d8 = ref_count;
    
    if (section_exists) {
      DeleteCriticalSection(_DAT_180c0c1d0);
      free(_DAT_180c0c1d0);
      _DAT_180c0c1d0 = 0;
    }
  }
}

/**
 * 线程安全的UI执行（第二组，无条件）
 * 
 * 原始实现：FUN_18066d706
 * 功能：
 * 1. 线程安全的执行
 * 2. 使用临界区保护
 * 3. 一次性执行
 */
void ExecuteUIThreadSafe(void)
{
  int ref_count;
  longlong critical_section;
  longlong temp_section;
  code* callback_ptr;
  bool section_exists;
  
  LOCK();
  _DAT_180c0c1d8 = _DAT_180c0c1d8 + 1;
  UNLOCK();
  
  // 创建临界区
  critical_section = malloc(CRITICAL_SECTION_SIZE);
  InitializeCriticalSection(critical_section);
  
  LOCK();
  section_exists = _DAT_180c0c1d0 != 0;
  temp_section = critical_section;
  if (section_exists) {
    temp_section = _DAT_180c0c1d0;
  }
  _DAT_180c0c1d0 = temp_section;
  UNLOCK();
  
  if (section_exists) {
    DeleteCriticalSection(critical_section);
    free(critical_section);
  }
  
  // 执行回调
  EnterCriticalSection(_DAT_180c0c1d0);
  if (_DAT_180c0c1dc == 0) {
    (*callback_ptr)();
    _DAT_180c0c1dc = 1;
  }
  LeaveCriticalSection(_DAT_180c0c1d0);
  
  // 清理引用计数
  LOCK();
  ref_count = _DAT_180c0c1d8 + -1;
  UNLOCK();
  section_exists = _DAT_180c0c1d8 == 1;
  _DAT_180c0c1d8 = ref_count;
  
  if (section_exists) {
    DeleteCriticalSection(_DAT_180c0c1d0);
    free(_DAT_180c0c1d0);
    _DAT_180c0c1d0 = 0;
  }
}

/**
 * 线程安全的UI最终化（第二组）
 * 
 * 原始实现：FUN_18066d763
 * 功能：
 * 1. 线程安全的最终化
 * 2. 清理临界区
 * 3. 执行回调
 */
void FinalizeUIThreadSafe(void)
{
  int ref_count;
  code* callback_ptr;
  bool cleanup_needed;
  
  (*callback_ptr)();
  _DAT_180c0c1dc = 1;
  LeaveCriticalSection(_DAT_180c0c1d0);
  
  LOCK();
  ref_count = _DAT_180c0c1d8 + -1;
  UNLOCK();
  cleanup_needed = _DAT_180c0c1d8 == 1;
  _DAT_180c0c1d8 = ref_count;
  
  if (cleanup_needed) {
    DeleteCriticalSection(_DAT_180c0c1d0);
    free(_DAT_180c0c1d0);
    _DAT_180c0c1d0 = 0;
  }
}

// ============================================================================
// 模块信息
// ============================================================================

/*
 * 模块说明：
 * 
 * 本模块是UI系统的高级数据处理模块，包含15个核心函数：
 * 
 * 1. ProcessUIData - 主要的UI数据处理函数
 * 2. InitializeUIContext - UI上下文初始化
 * 3. ProcessUIRenderData - UI渲染数据处理
 * 4. ProcessUIVertexData - UI顶点数据处理
 * 5. AddUIDataBuffer - UI数据缓冲区管理
 * 6. ValidateUIDataFormat - UI数据格式验证
 * 7. ReleaseUIResource - UI资源释放
 * 8. SetUIErrorMessage - UI错误消息设置
 * 9. SetUIErrorFormat - UI错误格式设置
 * 10. HandleUIError - UI错误处理
 * 11. CheckUIErrorState - UI错误状态检查
 * 12. UINoOperation - UI无操作函数
 * 13. InitializeUIOnce - 线程安全的UI初始化
 * 14. ExecuteUIOnce - 线程安全的UI执行
 * 15. FinalizeUIOnce - 线程安全的UI最终化
 * 16. DetectCPUFeatures - CPU特性检测
 * 17. InitializeUIThreadSafe - 线程安全的UI初始化（第二组）
 * 18. ExecuteUIThreadSafe - 线程安全的UI执行（第二组）
 * 19. FinalizeUIThreadSafe - 线程安全的UI最终化（第二组）
 * 
 * 简化实现说明：
 * - 原始实现：反编译的C代码，包含大量的内存操作和函数调用
 * - 简化实现：增加了清晰的函数命名、变量命名和详细注释
 * - 保持逻辑：完全保持原有的功能逻辑不变
 * - 提高可读性：通过命名和注释提高代码可读性
 * - 添加文档：包含详细的函数说明和参数描述
 * 
 * 注意：本模块包含两个线程安全初始化函数组，分别用于不同的初始化场景。
 */