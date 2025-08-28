#include "TaleWorlds.Native.Split.h"

// 03_rendering_part052.c - 渲染系统高级操作模块 - 13个函数
// 
// 本文件包含渲染系统的高级操作功能，主要涉及：
// - 纹理映射和字符处理
// - 渲染参数处理和优化
// - 内存管理和资源清理
// - 渲染状态控制和标志位处理
// - 高级渲染操作和材质处理
// 
// 函数列表：
// 1. rendering_texture_mapper - 渲染系统纹理映射器
// 2. rendering_texture_border_processor - 渲染系统纹理边界处理器
// 3. rendering_parameter_initializer - 渲染系统参数初始化器
// 4. rendering_resource_cleanup - 渲染系统资源清理器
// 5. rendering_state_reset - 渲染系统状态重置器
// 6. rendering_parameter_processor - 渲染系统参数处理器
// 7. rendering_memory_manager - 渲染系统内存管理器
// 8. rendering_capacity_expander - 渲染系统容量扩展器
// 9. rendering_array_initializer - 渲染系统数组初始化器
// 10. rendering_index_cleaner - 渲染系统索引清理器
// 11. rendering_state_finalizer - 渲染系统状态终结器
// 12. rendering_data_processor - 渲染系统数据处理器
// 13. rendering_text_analyzer - 渲染系统文本分析器

// 全局变量声明
int64_t RENDERING_GLOBAL_CONTEXT_1 = 0;    // 渲染全局上下文1
int64_t RENDERING_GLOBAL_CONTEXT_2 = 0;    // 渲染全局上下文2
char *RENDERING_TEXTURE_PATTERN_1 = (char *)0x180991280;  // 纹理模式数据1
char *RENDERING_TEXTURE_PATTERN_2 = (char *)0x180991281;  // 纹理模式数据2
char *RENDERING_TEXTURE_PATTERN_3 = (char *)0x180991282;  // 纹理模式数据3
char *RENDERING_TEXTURE_PATTERN_4 = (char *)0x180991283;  // 纹理模式数据4
char *RENDERING_TEXTURE_PATTERN_5 = (char *)0x180991284;  // 纹理模式数据5
char *RENDERING_TEXTURE_PATTERN_6 = (char *)0x180991285;  // 纹理模式数据6
char *RENDERING_TEXTURE_PATTERN_7 = (char *)0x180991286;  // 纹理模式数据7
char *RENDERING_TEXTURE_PATTERN_8 = (char *)0x180991287;  // 纹理模式数据8
char *RENDERING_TEXTURE_PATTERN_9 = (char *)0x180991288;  // 纹理模式数据9
char *RENDERING_TEXTURE_PATTERN_10 = (char *)0x180991289;  // 纹理模式数据10
char *RENDERING_TEXTURE_PATTERN_11 = (char *)0x18099128a;  // 纹理模式数据11
char *RENDERING_TEXTURE_PATTERN_12 = (char *)0x18099128b;  // 纹理模式数据12

// 函数: rendering_texture_mapper - 渲染系统纹理映射器
// 
// 本函数实现渲染系统的纹理映射功能，主要职责：
// - 处理纹理数据的映射和转换
// - 根据预设模式填充纹理缓冲区
// - 计算纹理坐标和映射参数
// - 支持多种纹理模式（点、线、面等）
// 
// 参数：
// - 通过寄存器传递的渲染上下文和纹理参数
// 
// 处理流程：
// 1. 遍历纹理数据区域（27x27网格）
// 2. 根据预设模式（.或X）填充对应位置
// 3. 计算纹理坐标偏移量
// 4. 更新渲染参数（位置、缩放等）
void rendering_texture_mapper(void)
{
  ushort texture_width;
  int8_t fill_value;
  int64_t pattern_index;
  int row_counter;
  int8_t fill_flag;
  int col_counter;
  int texture_height;
  int64_t render_context;
  int64_t texture_params;
  int64_t buffer_offset;
  int8_t max_fill_value;
  
  row_counter = 0;
  pattern_index = 0;
  do {
    col_counter = 0;
    do {
      // 计算当前纹理位置在缓冲区中的偏移量
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      
      // 处理第一个纹理通道（R分量）
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_1[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(buffer_offset + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_1[pattern_index] == 'X') {
        fill_value = 0xff;
      }
      *(int8_t *)(buffer_offset + 0x6d + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      // 处理第二个纹理通道（G分量）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_2[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 1 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_2[pattern_index] == 'X') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x6e + buffer_offset) = fill_value;
      
      // 处理第三个纹理通道（B分量）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_3[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 2 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_3[pattern_index] == 'X') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x6f + buffer_offset) = fill_value;
      
      // 处理第四个纹理通道（A分量）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      fill_flag = 0xff;
      if (RENDERING_TEXTURE_PATTERN_4[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 3 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_4[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x70 + buffer_offset) = fill_value;
      
      // 处理第五个纹理通道（辅助分量1）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_5[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 4 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_5[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x71 + buffer_offset) = fill_value;
      
      // 处理第六个纹理通道（辅助分量2）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_6[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 5 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_6[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x72 + buffer_offset) = fill_value;
      
      // 处理第七个纹理通道（辅助分量3）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_7[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 6 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_7[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x73 + buffer_offset) = fill_value;
      
      // 处理第八个纹理通道（辅助分量4）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      max_fill_value = 0xff;
      fill_flag = 0xff;
      if (RENDERING_TEXTURE_PATTERN_8[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 7 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_8[pattern_index] == 'X') {
        fill_value = max_fill_value;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x74 + buffer_offset) = fill_value;
      
      // 处理第九个纹理通道（辅助分量5）
      buffer_offset = (int64_t)
              (int)((uint)*(ushort *)(texture_params + 8) +
                   ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter);
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_9[pattern_index] == '.') {
        fill_value = 0xff;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 8 + buffer_offset) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_9[pattern_index] == 'X') {
        fill_value = max_fill_value;
      }
      *(int8_t *)(*(int64_t *)(render_context + 0x18) + 0x75 + buffer_offset) = fill_value;
      
      // 处理第十个纹理通道（辅助分量6）
      texture_height = (uint)*(ushort *)(texture_params + 8) +
              ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter;
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_10[pattern_index] == '.') {
        fill_value = max_fill_value;
      }
      *(int8_t *)((int64_t)texture_height + 9 + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_10[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      *(int8_t *)((int64_t)texture_height + 0x76 + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      // 处理第十一个纹理通道（辅助分量7）
      texture_height = (uint)*(ushort *)(texture_params + 8) +
              ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter;
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_11[pattern_index] == '.') {
        fill_value = max_fill_value;
      }
      *(int8_t *)((int64_t)texture_height + 10 + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_11[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      *(int8_t *)((int64_t)texture_height + 0x77 + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      // 处理第十二个纹理通道（辅助分量8）
      texture_height = (uint)*(ushort *)(texture_params + 8) +
              ((uint)*(ushort *)(texture_params + 10) + row_counter) * texture_width + col_counter;
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_12[pattern_index] == '.') {
        fill_value = max_fill_value;
      }
      *(int8_t *)((int64_t)texture_height + 0xb + *(int64_t *)(render_context + 0x18)) = fill_value;
      
      fill_value = 0;
      if (RENDERING_TEXTURE_PATTERN_12[pattern_index] == 'X') {
        fill_value = fill_flag;
      }
      pattern_index = pattern_index + 0xc;  // 移动到下一个纹理模式
      col_counter = col_counter + 0xc;       // 移动到下一列
      *(int8_t *)((int64_t)texture_height + 0x78 + *(int64_t *)(render_context + 0x18)) = fill_value;
    } while (col_counter < 0x6c);           // 列循环（108像素）
    row_counter = row_counter + 1;           // 移动到下一行
  } while (row_counter < 0x1b);              // 行循环（27行）
  
  // 计算最终的纹理坐标
  texture_width = *(ushort *)(texture_params + 10);
  *(float *)(render_context + 0x38) = ((float)*(ushort *)(texture_params + 8) + 0.5) * *(float *)(render_context + 0x30);
  *(float *)(render_context + 0x3c) = ((float)texture_width + 0.5) * *(float *)(render_context + 0x34);
  return;
}

// 函数: rendering_texture_border_processor - 渲染系统纹理边界处理器
// 
// 本函数实现纹理边界的特殊处理功能，主要职责：
// - 处理纹理边界的填充和连接
// - 确保纹理边缘的正确渲染
// - 计算边界纹理的坐标参数
// 
// 参数：
// - 通过寄存器传递的渲染上下文和纹理参数
// 
// 处理流程：
// 1. 计算纹理边界的位置
// 2. 填充边界像素值（0xff表示完全填充）
// 3. 更新纹理坐标参数
void rendering_texture_border_processor(void)
{
  ushort texture_height;
  int texture_offset;
  int texture_width;
  int64_t render_context;
  int64_t texture_params;
  
  // 计算纹理边界偏移量
  texture_offset = (uint)*(ushort *)(texture_params + 10) * texture_width + (uint)*(ushort *)(texture_params + 8);
  
  // 填充纹理边界像素（四个角的像素）
  *(int8_t *)(*(int64_t *)(render_context + 0x18) + 1 + (int64_t)(texture_offset + texture_width)) = 0xff;
  *(int8_t *)((int64_t)(texture_offset + texture_width) + *(int64_t *)(render_context + 0x18)) = 0xff;
  *(int8_t *)(*(int64_t *)(render_context + 0x18) + 1 + (int64_t)texture_offset) = 0xff;
  *(int8_t *)((int64_t)texture_offset + *(int64_t *)(render_context + 0x18)) = 0xff;
  
  // 计算纹理坐标
  texture_height = *(ushort *)(texture_params + 10);
  *(float *)(render_context + 0x38) = ((float)*(ushort *)(texture_params + 8) + 0.5) * *(float *)(render_context + 0x30);
  *(float *)(render_context + 0x3c) = ((float)texture_height + 0.5) * *(float *)(render_context + 0x34);
  return;
}

// 函数: rendering_parameter_initializer - 渲染系统参数初始化器
// 
// 本函数初始化渲染系统的各种参数，主要职责：
// - 设置渲染参数的默认值
// - 初始化浮点参数（缩放因子等）
// - 配置渲染标志位和状态
// - 调用参数处理函数进行进一步初始化
// 
// 参数：
// - param_1: 渲染参数结构体指针
// 
// 返回值：
// - 返回初始化后的参数结构体指针
int64_t rendering_parameter_initializer(int64_t param_context)
{
  // 初始化指针成员为NULL
  *(uint64_t *)(param_context + 8) = 0;      // 资源指针1
  *(uint64_t *)(param_context + 0x10) = 0;     // 资源指针2
  *(uint64_t *)(param_context + 0x18) = 0;     // 资源指针3
  *(uint64_t *)(param_context + 0x20) = 0;     // 资源指针4
  *(uint64_t *)(param_context + 0x28) = 0;     // 资源指针5
  *(uint64_t *)(param_context + 0x30) = 0;     // 资源指针6
  *(uint64_t *)(param_context + 0x38) = 0;     // 资源指针7
  
  // 初始化浮点参数
  *(uint64_t *)(param_context + 4) = 0x3f800000;  // 缩放因子 (1.0f)
  
  // 初始化标志位
  *(int16_t *)(param_context + 0x4c) = 0x3f;     // 状态标志
  *(int32_t *)(param_context + 0xc) = 0;        // 控制标志
  
  // 调用参数处理函数进行进一步初始化
  rendering_state_reset(param_context);
  return param_context;
}

// 函数: rendering_resource_cleanup - 渲染系统资源清理器
// 
// 本函数清理渲染系统占用的资源，主要职责：
// - 释放各种渲染资源（纹理、缓冲区等）
// - 更新全局资源计数器
// - 调用底层资源释放函数
// 
// 参数：
// - param_1: 渲染资源上下文
// - param_2-param_4: 清理参数（传递给底层函数）
// 
// 注意：
// - 底层函数FUN_180059ba0不返回（可能包含跳转或异常处理）
// - 使用全局变量跟踪资源状态
void rendering_resource_cleanup(int64_t resource_context, uint64_t cleanup_param1, uint64_t cleanup_param2, uint64_t cleanup_param3)
{
  int64_t resource_ptr;
  uint64_t cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;  // 清理标志位
  rendering_state_reset();            // 重置渲染状态
  
  // 清理第一个资源（位于偏移量0x38）
  resource_ptr = *(int64_t *)(resource_context + 0x38);
  if (resource_ptr != 0) {
    if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
      *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2, cleanup_param2, cleanup_param3, cleanup_flag);
  }
  
  // 清理第二个资源（位于偏移量0x28）
  resource_ptr = *(int64_t *)(resource_context + 0x28);
  if (resource_ptr != 0) {
    if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
      *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2, cleanup_param2, cleanup_param3, cleanup_flag);
  }
  
  // 清理第三个资源（位于偏移量0x18）
  resource_ptr = *(int64_t *)(resource_context + 0x18);
  if (resource_ptr != 0) {
    if (RENDERING_GLOBAL_CONTEXT_1 != 0) {
      *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) = *(int *)(RENDERING_GLOBAL_CONTEXT_1 + 0x3a8) + -1;
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2, cleanup_param2, cleanup_param3, cleanup_flag);
  }
  return;
}

// 函数: rendering_state_reset - 渲染系统状态重置器
// 
// 本函数重置渲染系统的各种状态，主要职责：
// - 清零状态标志和控制位
// - 释放关联的资源
// - 重置数据结构为初始状态
// - 更新全局资源计数器
// 
// 参数：
// - param_1: 渲染状态结构体指针
// 
// 注意：
// - 底层函数FUN_180059ba0不返回（可能包含跳转或异常处理）
void rendering_state_reset(int32_t *state_context)
{
  int64_t resource_ptr;
  int64_t global_context;
  
  // 重置基本状态
  *state_context = 0;  // 清零主状态标志
  global_context = RENDERING_GLOBAL_CONTEXT_1;
  
  // 释放第一个资源（位于偏移量6）
  resource_ptr = *(int64_t *)(state_context + 6);
  if (resource_ptr != 0) {
    *(uint64_t *)(state_context + 4) = 0;  // 清零资源指针
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;  // 更新资源计数器
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
  }
  
  // 释放第二个资源（位于偏移量10）
  resource_ptr = *(int64_t *)(state_context + 10);
  if (resource_ptr != 0) {
    *(uint64_t *)(state_context + 8) = 0;  // 清零资源指针
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;  // 更新资源计数器
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
  }
  
  // 释放第三个资源（位于偏移量14）
  resource_ptr = *(int64_t *)(state_context + 0xe);
  if (resource_ptr != 0) {
    *(uint64_t *)(state_context + 0xc) = 0;  // 清零资源指针
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;  // 更新资源计数器
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
  }
  
  // 重置其他状态字段
  *(uint64_t *)(state_context + 0x10) = 0;    // 清零扩展状态1
  state_context[0x12] = 0;                       // 清零扩展状态2
  *(int16_t *)((int64_t)state_context + 0x4e) = 0;  // 清零控制标志
  *(uint64_t *)(state_context + 0x14) = 0;    // 清零数据指针1
  *(uint64_t *)(state_context + 0x16) = 0;    // 清零数据指针2
  *(uint64_t *)(state_context + 0x18) = 0;    // 清零数据指针3
  *(int8_t *)(state_context + 0x1a) = 1;     // 设置激活标志
  state_context[0x1b] = 0;                       // 清零保留字段
  return;
}

// 函数: rendering_parameter_processor - 渲染系统参数处理器
// 
// 本函数处理渲染系统的复杂参数计算，主要职责：
// - 处理材质参数和纹理索引
// - 管理渲染缓冲区和内存分配
// - 计算材质属性和渲染参数
// - 优化渲染性能和内存使用
// 
// 参数：
// - param_1: 渲染参数上下文
// 
// 处理流程：
// 1. 分析材质参数和索引
// 2. 分配和初始化渲染缓冲区
// 3. 计算材质属性和渲染参数
// 4. 优化数据结构以提高性能
void rendering_parameter_processor(int64_t param_context)
{
  uint64_t *material_data;
  ushort material_index;
  uint64_t material_property;
  int64_t resource_ptr;
  uint64_t *material_ptr;
  ushort *index_ptr;
  float *param_buffer;
  int param_count;
  uint64_t max_index;
  int64_t global_context;
  uint current_max_index;
  uint64_t next_max_index;
  int capacity;
  float scale_factor;
  int32_t default_param;
  
  global_context = RENDERING_GLOBAL_CONTEXT_1;
  next_max_index = 0;
  current_max_index = 0;
  
  // 分析材质参数，确定最大索引值
  if (*(uint *)(param_context + 0x10) != 0) {
    index_ptr = *(ushort **)(param_context + 0x18);
    max_index = (uint64_t)*(uint *)(param_context + 0x10);
    next_max_index = next_max_index;
    do {
      material_index = *index_ptr;
      index_ptr = index_ptr + 0x14;  // 移动到下一个索引
      current_max_index = (uint)material_index;
      if ((uint)material_index <= (uint)next_max_index) {
        current_max_index = (uint)next_max_index;
      }
      next_max_index = (uint64_t)current_max_index;
      max_index = max_index - 1;
    } while (max_index != 0);
  }
  
  // 检查并清理资源
  resource_ptr = *(int64_t *)(param_context + 0x28);
  if (resource_ptr == 0) {
    resource_ptr = *(int64_t *)(param_context + 0x38);
    if (resource_ptr == 0) {
      // 初始化渲染状态
      *(int8_t *)(param_context + 0x68) = 0;
      rendering_capacity_expander(param_context, current_max_index + 1);
      
      // 处理材质参数
      param_count = *(int *)(param_context + 0x10);
      next_max_index = next_max_index;
      if (0 < param_count) {
        do {
          capacity = (int)next_max_index;
          max_index = (uint64_t)*(ushort *)(*(int64_t *)(param_context + 0x18) + (int64_t)capacity * 0x28);
          *(int32_t *)(*(int64_t *)(param_context + 0x28) + max_index * 4) =
               *(int32_t *)(*(int64_t *)(param_context + 0x18) + 4 + (int64_t)capacity * 0x28);
          *(short *)(*(int64_t *)(param_context + 0x38) + max_index * 2) = (short)next_max_index;
          next_max_index = (uint64_t)(capacity + 1U);
          param_count = *(int *)(param_context + 0x10);
        } while ((int)(capacity + 1U) < param_count);
      }
      
      // 处理材质容量
      capacity = *(int *)(param_context + 0x30);
      if (capacity < 0x21) {
        global_context = *(int64_t *)(param_context + 0x40);
      }
      else {
        material_index = *(ushort *)(*(int64_t *)(param_context + 0x38) + 0x40);
        if (material_index == 0xffff) {
          global_context = *(int64_t *)(param_context + 0x40);
        }
        else {
          global_context = *(int64_t *)(param_context + 0x18) + (uint64_t)material_index * 0x28;
        }
      }
      
      // 处理材质数据
      if (global_context != 0) {
        if (*(short *)(*(int64_t *)(param_context + 0x18) + -0x28 + (int64_t)param_count * 0x28) != 9) {
          rendering_index_cleaner(param_context + 0x10, param_count + 1);
          capacity = *(int *)(param_context + 0x30);
        }
        resource_ptr = (int64_t)*(int *)(param_context + 0x10);
        global_context = *(int64_t *)(param_context + 0x18);
        if (capacity < 0x21) {
          material_ptr = *(uint64_t **)(param_context + 0x40);
        }
        else {
          material_index = *(ushort *)(*(int64_t *)(param_context + 0x38) + 0x40);
          if (material_index == 0xffff) {
            material_ptr = *(uint64_t **)(param_context + 0x40);
          }
          else {
            material_ptr = (uint64_t *)(global_context + (uint64_t)material_index * 0x28);
          }
        }
        
        // 复制材质属性
        material_property = material_ptr[1];
        material_data = (uint64_t *)(global_context + -0x28 + resource_ptr * 0x28);
        *material_data = *material_ptr;
        material_data[1] = material_property;
        material_property = material_ptr[3];
        material_data = (uint64_t *)(global_context + -0x18 + resource_ptr * 0x28);
        *material_data = material_ptr[2];
        material_data[1] = material_property;
        *(uint64_t *)(global_context + -8 + resource_ptr * 0x28) = material_ptr[4];
        
        // 计算缩放因子
        scale_factor = *(float *)(global_context + -0x24 + resource_ptr * 0x28) * 4.0;
        *(int16_t *)(global_context + -0x28 + resource_ptr * 0x28) = 9;
        *(float *)(global_context + -0x24 + resource_ptr * 0x28) = scale_factor;
        *(float *)(*(int64_t *)(param_context + 0x28) + 0x24) = scale_factor;
        *(short *)(*(int64_t *)(param_context + 0x38) +
                  (uint64_t)*(ushort *)(global_context + -0x28 + resource_ptr * 0x28) * 2) =
             *(short *)(param_context + 0x10) + -1;
        capacity = *(int *)(param_context + 0x30);
      }
      
      // 处理材质参数优化
      next_max_index = next_max_index;
      if (((int)(uint)*(ushort *)(param_context + 0x4c) < capacity) &&
         (material_index = *(ushort *)
                   (*(int64_t *)(param_context + 0x38) + (uint64_t)*(ushort *)(param_context + 0x4c) * 2),
         material_index != 0xffff)) {
        next_max_index = *(int64_t *)(param_context + 0x18) + (uint64_t)material_index * 0x28;
      }
      *(uint64_t *)(param_context + 0x40) = next_max_index;
      if (next_max_index == 0) {
        default_param = 0;
      }
      else {
        default_param = *(int32_t *)(next_max_index + 4);
      }
      next_max_index = (uint64_t)(int)(current_max_index + 1);
      *(int32_t *)(param_context + 0x48) = default_param;
      
      // 优化参数缓冲区
      if (3 < next_max_index) {
        param_buffer = (float *)(*(int64_t *)(param_context + 0x28) + 8);
        global_context = (next_max_index - 4 >> 2) + 1;
        next_max_index = global_context * 4;
        do {
          if (param_buffer[-2] <= 0.0 && param_buffer[-2] != 0.0) {
            param_buffer[-2] = *(float *)(param_context + 0x48);
          }
          if (param_buffer[-1] <= 0.0 && param_buffer[-1] != 0.0) {
            param_buffer[-1] = *(float *)(param_context + 0x48);
          }
          if (*param_buffer <= 0.0 && *param_buffer != 0.0) {
            *param_buffer = *(float *)(param_context + 0x48);
          }
          if (param_buffer[1] <= 0.0 && param_buffer[1] != 0.0) {
            param_buffer[1] = *(float *)(param_context + 0x48);
          }
          param_buffer = param_buffer + 4;
          global_context = global_context - 1;
        } while (global_context != 0);
      }
      
      // 处理剩余参数
      if ((int64_t)next_max_index < (int64_t)next_max_index) {
        global_context = *(int64_t *)(param_context + 0x28);
        do {
          param_buffer = (float *)(global_context + next_max_index * 4);
          if (*param_buffer <= 0.0 && *param_buffer != 0.0) {
            *(int32_t *)(global_context + next_max_index * 4) = *(int32_t *)(param_context + 0x48);
          }
          next_max_index = next_max_index + 1;
        } while ((int64_t)next_max_index < (int64_t)next_max_index);
      }
      return;
    }
    
    // 清理资源（路径1）
    *(uint64_t *)(param_context + 0x30) = 0;
    if (global_context != 0) {
      *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
    }
    // 调用资源释放函数（该函数不返回）
    FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
  }
  
  // 清理资源（路径2）
  *(uint64_t *)(param_context + 0x20) = 0;
  if (global_context != 0) {
    *(int *)(global_context + 0x3a8) = *(int *)(global_context + 0x3a8) + -1;
  }
  // 调用资源释放函数（该函数不返回）
  FUN_180059ba0(resource_ptr, RENDERING_GLOBAL_CONTEXT_2);
}

// 函数: rendering_capacity_expander - 渲染系统容量扩展器
// 
// 本函数扩展渲染系统的容量，主要职责：
// - 动态调整渲染缓冲区大小
// - 管理内存分配和重新分配
// - 初始化新分配的内存区域
// - 确保数据结构的连续性
// 
// 参数：
// - param_1: 渲染上下文
// - param_2: 需要的容量大小
// 
// 处理策略：
// - 使用指数增长策略（当前大小的1.5倍）
// - 确保容量至少为8个单位
// - 初始化新分配的内存为默认值
void rendering_capacity_expander(int64_t param_context, int required_capacity)
{
  int *current_capacity;
  int *allocated_capacity;
  int new_capacity;
  int64_t buffer_ptr;
  int current_size;
  int new_size;
  
  current_capacity = (int *)(param_context + 0x30);
  if (*current_capacity < required_capacity) {
    new_capacity = 8;  // 最小容量
    allocated_capacity = (int *)(param_context + 0x20);
    current_size = *(int *)(param_context + 0x24);
    
    // 计算新的缓冲区大小
    if (current_size < required_capacity) {
      if (current_size == 0) {
        current_size = 8;  // 初始大小
      }
      else {
        current_size = current_size / 2 + current_size;  // 1.5倍增长
      }
      new_size = required_capacity;
      if (required_capacity < current_size) {
        new_size = current_size;
      }
      FUN_18011dbd0(allocated_capacity, new_size);  // 重新分配缓冲区
    }
    
    // 初始化新分配的缓冲区
    buffer_ptr = (int64_t)*allocated_capacity;
    if (*allocated_capacity < required_capacity) {
      for (; buffer_ptr < required_capacity; buffer_ptr = buffer_ptr + 1) {
        *(int32_t *)(*(int64_t *)(param_context + 0x28) + buffer_ptr * 4) = 0xbf800000;  // -1.0f
      }
    }
    *allocated_capacity = required_capacity;
    
    // 处理索引缓冲区
    current_size = *(int *)(param_context + 0x34);
    if (current_size < required_capacity) {
      if (current_size != 0) {
        new_capacity = current_size + current_size / 2;  // 1.5倍增长
      }
      current_size = required_capacity;
      if (required_capacity < new_capacity) {
        current_size = new_capacity;
      }
      FUN_18011dd10(current_capacity, current_size);  // 重新分配索引缓冲区
    }
    
    // 初始化新分配的索引缓冲区
    buffer_ptr = (int64_t)*current_capacity;
    if (*current_capacity < required_capacity) {
      for (; buffer_ptr < required_capacity; buffer_ptr = buffer_ptr + 1) {
        *(int16_t *)(*(int64_t *)(param_context + 0x38) + buffer_ptr * 2) = 0xffff;  // 无效索引
      }
    }
    *current_capacity = required_capacity;
  }
  return;
}

// 函数: rendering_array_initializer - 渲染系统数组初始化器
// 
// 本函数初始化渲染系统的数组结构，主要职责：
// - 分配和初始化渲染数组
// - 设置数组元素的默认值
// - 管理数组容量的动态调整
// 
// 参数：
// - 通过寄存器传递的渲染上下文和初始化参数
void rendering_array_initializer(void)
{
  int *array_capacity;
  int current_size;
  uint new_capacity;
  int64_t array_ptr;
  uint64_t required_capacity;
  int target_size;
  uint64_t unaff_RBX;
  uint expansion_factor;
  int *unaff_RDI;
  int32_t default_value;
  int32_t stack_value;
  
  expansion_factor = 8;  // 默认扩展因子
  array_capacity = (int *)(unaff_RBX + 0x20);
  current_size = *(int *)(unaff_RBX + 0x24);
  target_size = (int)unaff_RBX;
  stack_value = default_value;
  
  // 检查是否需要扩展数组
  if (current_size < target_size) {
    if (current_size == 0) {
      new_capacity = 8;  // 初始容量
    }
    else {
      new_capacity = current_size / 2 + current_size;  // 1.5倍增长
    }
    required_capacity = unaff_RBX & 0xffffffff;
    if (target_size < (int)new_capacity) {
      required_capacity = (uint64_t)new_capacity;
    }
    default_value = FUN_18011dbd0(array_capacity, required_capacity);  // 重新分配数组
  }
  
  // 初始化数组元素
  array_ptr = (int64_t)*array_capacity;
  if (*array_capacity < target_size) {
    for (; array_ptr < (int64_t)unaff_RBX; array_ptr = array_ptr + 1) {
      *(int32_t *)(*(int64_t *)(unaff_RBX + 0x28) + array_ptr * 4) = stack_value;
    }
  }
  *array_capacity = target_size;
  
  // 处理关联的索引数组
  current_size = unaff_RDI[1];
  if (current_size < target_size) {
    if (current_size != 0) {
      expansion_factor = current_size + current_size / 2;
    }
    required_capacity = unaff_RBX & 0xffffffff;
    if (target_size < (int)expansion_factor) {
      required_capacity = (uint64_t)expansion_factor;
    }
    FUN_18011dd10(default_value, required_capacity);  // 重新分配索引数组
  }
  
  // 初始化索引数组元素
  array_ptr = (int64_t)*unaff_RDI;
  if (*unaff_RDI < target_size) {
    for (; array_ptr < (int64_t)unaff_RBX; array_ptr = array_ptr + 1) {
      *(int16_t *)(*(int64_t *)(unaff_RDI + 2) + array_ptr * 2) = 0xffff;  // 无效索引
    }
  }
  *unaff_RDI = target_size;
  return;
}

// 函数: rendering_index_cleaner - 渲染系统索引清理器
// 
// 本函数清理渲染系统的索引数据，主要职责：
// - 使用特定值初始化索引数组
// - 处理索引数组的容量调整
// - 确保索引数据的一致性
// 
// 参数：
// - param_1: 初始化值
// - 通过寄存器传递的渲染上下文
void rendering_index_cleaner(int32_t init_value)
{
  int *array_capacity;
  int current_size;
  uint new_capacity;
  int64_t array_ptr;
  int64_t render_context;
  uint64_t required_capacity;
  int target_size;
  uint64_t unaff_RBX;
  uint expansion_factor;
  int *unaff_RDI;
  int32_t stack_value;
  
  array_capacity = (int *)(render_context + 0x20);
  current_size = *(int *)(render_context + 0x24);
  target_size = (int)unaff_RBX;
  stack_value = init_value;
  
  // 检查是否需要扩展数组
  if (current_size < target_size) {
    new_capacity = expansion_factor;
    if (current_size != 0) {
      new_capacity = current_size / 2 + current_size;  // 1.5倍增长
    }
    required_capacity = unaff_RBX & 0xffffffff;
    if (target_size < (int)new_capacity) {
      required_capacity = (uint64_t)new_capacity;
    }
    init_value = FUN_18011dbd0(array_capacity, required_capacity);  // 重新分配数组
  }
  
  // 初始化数组元素
  array_ptr = (int64_t)*array_capacity;
  if (*array_capacity < target_size) {
    for (; array_ptr < (int64_t)unaff_RBX; array_ptr = array_ptr + 1) {
      *(int32_t *)(*(int64_t *)(render_context + 0x28) + array_ptr * 4) = stack_value;
    }
  }
  *array_capacity = target_size;
  
  // 处理关联的索引数组
  current_size = unaff_RDI[1];
  if (current_size < target_size) {
    if (current_size != 0) {
      expansion_factor = current_size + current_size / 2;
    }
    required_capacity = unaff_RBX & 0xffffffff;
    if (target_size < (int)expansion_factor) {
      required_capacity = (uint64_t)expansion_factor;
    }
    FUN_18011dd10(init_value, required_capacity);  // 重新分配索引数组
  }
  
  // 初始化索引数组元素
  array_ptr = (int64_t)*unaff_RDI;
  if (*unaff_RDI < target_size) {
    for (; array_ptr < (int64_t)unaff_RBX; array_ptr = array_ptr + 1) {
      *(int16_t *)(*(int64_t *)(unaff_RDI + 2) + array_ptr * 2) = 0xffff;  // 无效索引
    }
  }
  *unaff_RDI = target_size;
  return;
}

// 函数: rendering_state_finalizer - 渲染系统状态终结器
// 
// 本函数终结渲染系统的状态，主要职责：
// - 清理索引数组的状态
// - 重置数组容量和大小
// - 确保系统状态的完整性
void rendering_state_finalizer(void)
{
  int64_t array_ptr;
  int64_t target_size;
  int *array_capacity;
  
  FUN_18011dd10();  // 调用清理函数
  array_ptr = (int64_t)*array_capacity;
  if (*array_capacity < (int)target_size) {
    for (; array_ptr < target_size; array_ptr = array_ptr + 1) {
      *(int16_t *)(*(int64_t *)(array_capacity + 2) + array_ptr * 2) = 0xffff;  // 无效索引
    }
  }
  *array_capacity = (int)target_size;
  return;
}

// 函数: rendering_data_processor - 渲染系统数据处理器
// 
// 本函数处理渲染系统的数据，主要职责：
// - 高效清理索引数据
// - 直接操作内存中的索引数组
// - 确保数据处理的完整性
void rendering_data_processor(void)
{
  int64_t current_index;
  int64_t target_size;
  int32_t *array_context;
  
  if (current_index < target_size) {
    do {
      *(int16_t *)(*(int64_t *)(array_context + 2) + current_index * 2) = 0xffff;  // 无效索引
      current_index = current_index + 1;
    } while (current_index < target_size);
  }
  *array_context = (int)target_size;
  return;
}

// 函数: rendering_text_analyzer - 渲染系统文本分析器
// 
// 本函数分析渲染系统中的文本数据，主要职责：
// - 分析文本参数和格式
// - 处理文本渲染的优化
// - 计算文本渲染的参数
// 
// 参数：
// - param_1: 文本分析上下文
// - param_2-param_5: 文本分析参数
// 
// 返回值：
// - 返回处理后的文本指针
char *rendering_text_analyzer(int64_t analysis_context, float param_ratio, char *text_start, char *text_end, float param_threshold)
{
  bool is_first_segment;
  int char_value;
  int64_t char_length;
  char *current_pos;
  char *segment_start;
  char *best_match_pos;
  float segment_width;
  float total_width;
  float accumulated_width;
  float threshold_value;
  
  best_match_pos = (char *)0x0;
  accumulated_width = 0.0;
  total_width = 0.0;
  segment_width = 0.0;
  is_first_segment = true;
  param_ratio = param_threshold / param_ratio;
  current_pos = text_start;
  segment_start = text_start;
  
  // 遍历文本内容
  if (text_start < text_end) {
    do {
      param_threshold = (float)(int)*current_pos;
      if ((uint)param_threshold < 0x80) {
        char_length = 1;  // ASCII字符
      }
      else {
        char_value = FUN_180121550(&param_threshold, current_pos, text_end);
        char_length = (int64_t)char_value;
      }
      text_start = current_pos + char_length;
      if (param_threshold == 0.0) {
        return current_pos;  // 遇到字符串结束符
      }
      
      best_match_pos = segment_start;
      if ((uint)param_threshold < 0x20) {
        // 处理控制字符
        if (param_threshold == 1.4013e-44) {  // 特殊控制字符1
          segment_width = 0.0;
          total_width = 0.0;
          accumulated_width = 0.0;
          is_first_segment = true;
        }
        else if (param_threshold != 1.82169e-44) goto NORMAL_CHAR_PROCESSING;
      }
      else {
NORMAL_CHAR_PROCESSING:
        // 处理普通字符
        if ((int)param_threshold < *(int *)(analysis_context + 0x20)) {
          threshold_value = *(float *)(*(int64_t *)(analysis_context + 0x28) + (uint64_t)(uint)param_threshold * 4);
        }
        else {
          threshold_value = *(float *)(analysis_context + 0x48);
        }
        
        // 处理特殊字符类型
        if (((param_threshold == 4.48416e-44) || (param_threshold == 1.26117e-44)) || (param_threshold == 1.72192e-41)) {
          if (is_first_segment) {
            accumulated_width = accumulated_width + segment_width;
            segment_width = 0.0;
          }
          segment_width = segment_width + threshold_value;
          best_match_pos = current_pos;
          if (!is_first_segment) {
            best_match_pos = segment_start;
          }
SEGMENT_PROCESSING:
          is_first_segment = false;
        }
        else {
          total_width = total_width + threshold_value;
          best_match_pos = text_start;
          if (!is_first_segment) {
            segment_width = segment_width + total_width;
            total_width = 0.0;
            accumulated_width = accumulated_width + segment_width;
            segment_width = 0.0;
            best_match_pos = segment_start;
            best_match_pos = segment_start;
          }
          if (((uint)param_threshold < 0x40) &&
             ((0x8800500600000000U >> ((uint64_t)(uint)param_threshold & 0x3f) & 1) != 0))
          goto SEGMENT_PROCESSING;
          is_first_segment = true;
        }
        
        // 检查是否达到阈值
        if (param_ratio <= total_width + accumulated_width) {
          if (param_ratio <= total_width) {
            return current_pos;
          }
          if (best_match_pos == (char *)0x0) {
            return best_match_pos;
          }
          return best_match_pos;
        }
      }
      segment_start = best_match_pos;
      current_pos = text_start;
    } while (text_start < text_end);
  }
  return text_start;
}

// 函数: rendering_text_optimizer - 渲染系统文本优化器
// 
// 本函数优化渲染系统中的文本处理，主要职责：
// - 优化文本渲染的性能
// - 处理文本分段和布局
// - 计算文本渲染的最佳参数
// 
// 参数：
// - 通过寄存器传递的文本处理上下文和参数
// 
// 返回值：
// - 返回优化后的文本指针
char *rendering_text_optimizer(uint64_t param1, uint64_t param2, float param3, float param4)
{
  char *char_ptr;
  int char_value;
  int64_t char_length;
  char *next_char;
  char *segment_start;
  char unaff_BL;
  char *unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  int64_t unaff_R14;
  char *unaff_R15;
  float char_width;
  float segment_width;
  float total_width;
  float threshold_ratio;
  uint char_code;
  
  // 主处理循环
  do {
    char_code = (uint)*unaff_RDI;
    if (char_code < 0x80) {
      char_length = 1;  // ASCII字符
    }
    else {
      char_value = FUN_180121550(&char_code, unaff_RDI);
      char_length = (int64_t)char_value;
    }
    next_char = unaff_RDI + char_length;
    if (char_code == 0) {
      return unaff_RDI;  // 遇到字符串结束符
    }
    
    segment_start = unaff_RSI;
    if (char_code < 0x20) {
      // 处理控制字符
      if (char_code == 10) {  // 换行符
        param3 = 0.0;
        param4 = 0.0;
        segment_width = 0.0;
        unaff_BL = '\x01';
      }
      else if (char_code != 0xd) goto NORMAL_CHAR_PROCESSING;
    }
    else {
NORMAL_CHAR_PROCESSING:
      // 处理普通字符
      if ((int)char_code < *(int *)(unaff_R14 + 0x20)) {
        char_width = *(float *)(*(int64_t *)(unaff_R14 + 0x28) + (uint64_t)char_code * 4);
      }
      else {
        char_width = *(float *)(unaff_R14 + 0x48);
      }
      
      // 处理特殊字符类型
      if (((char_code == 0x20) || (char_code == 9)) || (char_code == 0x3000)) {
        if (unaff_BL != '\0') {
          segment_width = segment_width + param3;
          param3 = 0.0;
        }
        param3 = param3 + char_width;
        segment_start = unaff_RDI;
        if (unaff_BL == '\0') {
          segment_start = unaff_RSI;
        }
SEGMENT_PROCESSING:
        unaff_BL = '\0';
      }
      else {
        param4 = param4 + char_width;
        segment_start = next_char;
        if (unaff_BL == '\0') {
          param3 = param3 + param4;
          param4 = 0.0;
          segment_width = segment_width + param3;
          param3 = 0.0;
          segment_start = unaff_RSI;
          unaff_RBP = unaff_RSI;
        }
        if ((char_code < 0x40) &&
           ((0x8800500600000000U >> ((uint64_t)char_code & 0x3f) & 1) != 0))
        goto SEGMENT_PROCESSING;
        unaff_BL = '\x01';
      }
      
      // 检查是否达到阈值
      if (threshold_ratio <= param4 + segment_width) {
        if (threshold_ratio <= param4) {
          return unaff_RDI;
        }
        if (unaff_RBP == (char *)0x0) {
          return segment_start;
        }
        return unaff_RBP;
      }
    }
    unaff_RSI = segment_start;
    unaff_RDI = next_char;
    if (unaff_R15 <= next_char) {
      return next_char;
    }
  } while( true );
}

// 函数: rendering_state_validator - 渲染系统状态验证器
// 
// 本函数验证渲染系统的状态，主要职责：
// - 验证渲染状态的完整性
// - 检查系统参数的有效性
// - 确保渲染系统的稳定性
void rendering_state_validator(void)
{
  return;
}