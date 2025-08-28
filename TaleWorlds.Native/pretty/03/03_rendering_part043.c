/* 函数别名定义: DataValidator */
#define DataValidator DataValidator


#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part043.c - 渲染系统高级数据处理和算法优化模块
// 
// 本文件包含12个函数，主要涉及：
// - 渲染数据的高级处理和算法优化
// - 内存管理和数据结构操作
// - 浮点数运算和矩阵变换
// - 排序算法和数据处理
// - 资源分配和释放管理
//
// 主要功能：
// 1. 渲染数据的复杂计算和变换
// 2. 内存资源的动态分配和释放
// 3. 高效的排序和搜索算法
// 4. 浮点数精度处理和优化
// 5. 渲染状态的批量更新

// 全局变量声明
extern int64_t GET_SECURITY_COOKIE();  // 内存管理相关数据
extern int64_t SYSTEM_DATA_MANAGER_A;  // 资源计数器指针
extern int64_t SYSTEM_DATA_MANAGER_B;  // 内存分配器句柄

// 函数声明
void SystemCore_ProcessEvents(int64_t param_1, int param_2, int64_t param_3, float param_4);
void SystemSecurityChecker(int64_t param_1);
void DataValidator0(void *param_1, int64_t param_2);
void *func_0x000180120ce0(int64_t param_1, int64_t param_2);
void memset(void *dest, int value, int64_t count);

// 函数: void process_rendering_data_complex(void)
// 功能: 处理复杂的渲染数据计算和变换
// 参数: 无（使用寄存器传递参数）
// 返回: 无
void process_rendering_data_complex(void)

{
  int64_t data_context;          // 数据上下文指针
  int64_t temp_ptr;              // 临时指针
  float *float_ptr;               // 浮点数指针
  int int_val;                    // 整数值
  int64_t loop_var1;             // 循环变量1
  uint64_t ulong_val;            // 无符号长整型
  uint64_t base_reg;           // 基址寄存器
  int64_t source_reg;            // 源寄存器
  int count_reg;                  // 计数寄存器
  int64_t target_reg;            // 目标寄存器
  int index_reg;                  // 索引寄存器
  uint uint_val;                  // 无符号整型
  float float_var1;               // 浮点变量1
  float float_var2;               // 浮点变量2
  float float_var3;               // 浮点变量3
  float float_var4;               // 浮点变量4
  float float_var5;               // 浮点变量5
  float float_var6;               // 浮点变量6
  float float_var7;               // 浮点变量7
  float float_var8;               // 浮点变量8
  float float_var9;               // 浮点变量9
  float float_var10;              // 浮点变量10
  float float_var11;              // 浮点变量11
  float float_var12;              // 浮点变量12
  float float_var13;              // 浮点变量13
  float stack_float1;             // 栈浮点数1
  float stack_float2;             // 栈浮点数2
  uint64_t temp_ulong;           // 临时无符号长整型
  
  // 初始化数据上下文
  *(uint64_t *)(data_context + 8) = base_reg;
  
  // 主处理循环
  do {
    float_var6 = *(float *)((int64_t)target_reg + 0xc);
    float_var2 = *(float *)(target_reg + 1);
    
    // 处理特殊情况：float_var6为0
    if (float_var6 == 0.0) {
      if (float_var2 < (float)count_reg) {
        stack_float1 = float_var2;
        if (float_var2 < 0.0) {
          // 处理负值情况
          SystemCore_ProcessEvents(source_reg + -4, 0, target_reg, float_var2);
        }
        else {
          // 处理正值情况
          SystemCore_ProcessEvents(target_reg, (int)float_var2, target_reg, float_var2);
          stack_float1 = float_var2;
          SystemCore_ProcessEvents(source_reg + -4);
        }
      }
    }
    else {
      // 复杂浮点数计算
      float_var7 = *(float *)(target_reg + 3);
      float_var9 = *(float *)(target_reg + 2);
      float_var10 = float_var6 + float_var2;
      float_var5 = float_var2;
      float_var8 = float_var9;
      
      // 边界检查和调整
      if (float_var9 < float_var7) {
        float_var5 = (float_var7 - float_var9) * float_var6 + float_var2;
        float_var8 = float_var7;
      }
      
      float_var7 = *(float *)((int64_t)target_reg + 0x1c);
      float_var4 = float_var10;
      float_var1 = float_var11;
      
      if (float_var7 < float_var11) {
        float_var4 = (float_var7 - float_var9) * float_var6 + float_var2;
        float_var1 = float_var7;
      }
      
      // 范围验证
      if ((((float_var5 < 0.0) || (float_var4 < 0.0)) || 
           ((float)count_reg <= float_var5)) || ((float)count_reg <= float_var4)) {
        ulong_val = 0;
        
        if (0 < count_reg) {
          do {
            uint_val = (int)ulong_val + 1;
            temp_ulong = (uint64_t)uint_val;
            float_var5 = (float)(int)ulong_val;
            float_var7 = (float)(int)uint_val;
            float_var8 = (float_var5 - float_var2) * (float_var10 / float_var6) + float_var9;
            float_var9 = (float_var7 - float_var2) * (float_var10 / float_var6) + float_var9;
            stack_float1 = float_var5;
            stack_float2 = float_var8;
            
            // 边界条件处理
            if ((float_var5 <= float_var2) || (float_var10 <= float_var7)) {
              if ((float_var5 <= float_var10) || (float_var2 <= float_var7)) {
                if (((float_var2 < float_var5) && (float_var5 < float_var10)) ||
                   ((float_var10 < float_var5 && (float_var5 < float_var2)))) {
                  SystemCore_ProcessEvents(target_reg, ulong_val, target_reg, float_var2);
                }
                else if ((float_var7 <= float_var2) || (float_var10 <= float_var7)) {
                  if ((float_var10 < float_var7) && (float_var7 < float_var2)) {
                    stack_float1 = float_var7;
                    stack_float2 = float_var9;
                    SystemCore_ProcessEvents(target_reg, ulong_val, target_reg, float_var2);
                  }
                }
                else {
                  stack_float1 = float_var7;
                  stack_float2 = float_var9;
                  SystemCore_ProcessEvents(target_reg, ulong_val, target_reg, float_var2);
                }
              }
              else {
                stack_float1 = float_var7;
                stack_float2 = float_var9;
                SystemCore_ProcessEvents(target_reg, ulong_val, target_reg, float_var2);
                stack_float1 = float_var5;
                stack_float2 = float_var8;
                SystemCore_ProcessEvents();
              }
            }
            else {
              SystemCore_ProcessEvents(target_reg, ulong_val, target_reg, float_var2);
              stack_float1 = float_var7;
              stack_float2 = float_var9;
              SystemCore_ProcessEvents();
            }
            
            stack_float1 = float_var10;
            SystemCore_ProcessEvents(target_reg);
            ulong_val = temp_ulong & 0xffffffff;
          } while ((int)temp_ulong < count_reg);
          
          // 重置常量
          float_var11 = 0.5;
          float_var10 = 1.0;
        }
      }
      else {
        // 精确计算处理
        int_val = (int)float_var5;
        if (int_val == (int)float_var4) {
          temp_ptr = (int64_t)int_val;
          *(float *)(target_reg + temp_ptr * 4) =
               (float_var10 - ((float_var4 - (float)int_val) + (float_var5 - (float)int_val)) * float_var11
               ) * *(float *)((int64_t)target_reg + 0x14) * (float_var1 - float_var8) +
               *(float *)(target_reg + temp_ptr * 4);
          *(float *)(source_reg + temp_ptr * 4) =
               (float_var1 - float_var8) * *(float *)((int64_t)target_reg + 0x14) +
               *(float *)(source_reg + temp_ptr * 4);
        }
        else {
          // 交换和调整逻辑
          float_var6 = float_var5;
          if (float_var4 < float_var5) {
            float_var9 = -float_var9;
            float_var6 = float_var1 - float_var9;
            float_var1 = float_var11 - (float_var8 - float_var9);
            float_var8 = float_var11 - float_var6;
            float_var6 = float_var4;
            float_var4 = float_var5;
            float_var2 = float_var10;
          }
          
          index_reg = (int)float_var6;
          int_val = (int)float_var4;
          temp_ptr = (int64_t)(index_reg + 1);
          loop_var1 = (int64_t)int_val;
          float_var7 = *(float *)((int64_t)target_reg + 0x14);
          float_var5 = float_var7 * float_var9;
          float_var10 = ((float)(index_reg + 1) - float_var2) * float_var9 + float_var9;
          float_var2 = (float_var10 - float_var8) * float_var7;
          
          *(float *)(target_reg + (int64_t)index_reg * 4) =
               (float_var11 - (float_var6 - (float)index_reg) * float_var11) * float_var2 +
               *(float *)(target_reg + (int64_t)index_reg * 4);
          
          // 批量处理优化
          if (temp_ptr < loop_var1) {
            if (3 < loop_var1 - temp_ptr) {
              float_ptr = (float *)(target_reg + 8 + temp_ptr * 4);
              temp_ptr = ((loop_var1 - temp_ptr) - 4U >> 2) + 1;
              float_var6 = float_var5 * float_var11;
              temp_ptr = temp_ptr + temp_ptr * 4;
              
              do {
                float_ptr[-2] = float_var6 + float_var2 + float_ptr[-2];
                float_var3 = float_var2 + float_var5 + float_var5;
                float_var4 = float_var3 + float_var5;
                float_ptr[-1] = float_var6 + float_var2 + float_var5 + float_ptr[-1];
                float_var2 = float_var4 + float_var5;
                *float_ptr = float_var6 + float_var3 + *float_ptr;
                float_ptr[1] = float_var6 + float_var4 + float_ptr[1];
                float_ptr = float_ptr + 4;
                temp_ptr = temp_ptr + -1;
              } while (temp_ptr != 0);
              
              float_var10 = 1.0;
            }
            
            if (temp_ptr < loop_var1) {
              do {
                float_var6 = float_var5 * float_var11 + float_var2;
                float_var2 = float_var2 + float_var5;
                *(float *)(target_reg + temp_ptr * 4) = float_var6 + *(float *)(target_reg + temp_ptr * 4);
                temp_ptr = temp_ptr + 1;
              } while (temp_ptr < loop_var1);
            }
          }
          
          *(float *)(target_reg + loop_var1 * 4) =
               (float_var1 - ((float)((int_val - index_reg) + -1) * float_var9 + float_var10)) *
               (float_var10 - (float_var4 - (float)int_val) * float_var11) * float_var7 + float_var2 +
               *(float *)(target_reg + loop_var1 * 4);
          *(float *)(source_reg + loop_var1 * 4) =
               (float_var1 - float_var8) * float_var7 + *(float *)(source_reg + loop_var1 * 4);
        }
      }
    }
    
    // 移动到下一个数据块
    target_reg = (int64_t *)*target_reg;
  } while (target_reg != (int64_t *)0x0);
  
  return;
}

// 函数: void initialize_rendering_state(void)
// 功能: 初始化渲染状态
// 参数: 无
// 返回: 无
void initialize_rendering_state(void)

{
  return;
}

// 函数: void setup_rendering_buffer(int *buffer_config, int64_t buffer_ptr, int buffer_size, 
//                                   uint64_t param_4, uint64_t param_5, int offset)
// 功能: 设置渲染缓冲区
// 参数:
//   buffer_config - 缓冲区配置指针
//   buffer_ptr - 缓冲区指针
//   buffer_size - 缓冲区大小
//   param_4 - 参数4
//   param_5 - 参数5
//   offset - 偏移量
// 返回: 无
void setup_rendering_buffer(int *buffer_config, int64_t buffer_ptr, int buffer_size, 
                          uint64_t param_4, uint64_t param_5, int offset)

{
  int config_size;               // 配置大小
  int8_t stack_buffer[48];   // 栈缓冲区
  int8_t *buffer_ptr_local;  // 本地缓冲区指针
  uint64_t local_var;          // 本地变量
  int8_t *target_ptr;        // 目标指针
  int8_t large_buffer[528];  // 大缓冲区
  uint64_t checksum;            // 校验和
  
  // 计算校验和
  checksum = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
  config_size = *buffer_config;
  local_var = 0;
  
  // 选择缓冲区
  if (config_size < 0x41) {
    buffer_ptr_local = large_buffer;
  }
  else {
    // 更新资源计数器
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    // 分配内存
    buffer_ptr_local = (int8_t *)func_0x000180120ce0((int64_t)(config_size * 2 + 1) << 2, SYSTEM_DATA_MANAGER_B);
  }
  
  target_ptr = buffer_ptr_local + (int64_t)*buffer_config * 4;
  *(float *)(buffer_ptr + 4 + (int64_t)buffer_size * 0x14) = (float)(buffer_config[1] + offset) + 1.0;
  
  // 验证配置
  if (buffer_config[1] < 1) {
    if (buffer_ptr_local == large_buffer) {
      // 错误处理
      SystemSecurityChecker(checksum ^ (uint64_t)stack_buffer);
    }
    if ((buffer_ptr_local != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
    // 内存释放
    DataValidator0(buffer_ptr_local, SYSTEM_DATA_MANAGER_B);
  }
  
  // 清零缓冲区
  memset(buffer_ptr_local, 0, (int64_t)*buffer_config << 2);
}

// 函数: void configure_rendering_context(int *context_config, int64_t context_ptr, int context_id)
// 功能: 配置渲染上下文
// 参数:
//   context_config - 上下文配置指针
//   context_ptr - 上下文指针
//   context_id - 上下文ID
// 返回: 无
void configure_rendering_context(int *context_config, int64_t context_ptr, int context_id)

{
  int config_value;              // 配置值
  int8_t *local_buffer;      // 本地缓冲区
  uint64_t reg_bx;             // 寄存器BX
  uint64_t reg_bp;             // 寄存器BP
  uint64_t reg_si;             // 寄存器SI
  uint64_t reg_di;             // 寄存器DI
  int64_t reg_r11;              // 寄存器R11
  uint64_t reg_r12;            // 寄存器R12
  uint64_t reg_r13;            // 寄存器R13
  uint64_t reg_r14;            // 寄存器R14
  uint64_t reg_r15;            // 寄存器R15
  int32_t xmm_reg[4];        // XMM寄存器数组
  uint64_t local_var;          // 本地变量
  uint64_t stack_checksum;      // 栈校验和
  int stack_param;               // 栈参数
  
  // 保存寄存器状态
  *(uint64_t *)(reg_r11 + 0x20) = reg_bx;
  *(uint64_t *)(reg_r11 + -8) = reg_bp;
  *(uint64_t *)(reg_r11 + -0x10) = reg_si;
  *(uint64_t *)(reg_r11 + -0x18) = reg_di;
  *(uint64_t *)(reg_r11 + -0x20) = reg_r12;
  *(uint64_t *)(reg_r11 + -0x28) = reg_r13;
  *(uint64_t *)(reg_r11 + -0x30) = reg_r14;
  *(uint64_t *)(reg_r11 + -0x38) = reg_r15;
  *(int32_t *)(reg_r11 + -0x78) = xmm_reg[0];
  *(int32_t *)(reg_r11 + -0x74) = xmm_reg[1];
  *(int32_t *)(reg_r11 + -0x70) = xmm_reg[2];
  *(int32_t *)(reg_r11 + -0x6c) = xmm_reg[3];
  local_var = 0;
  
  // 选择缓冲区
  if (config_value < 0x41) {
    local_buffer = &stack0x00000050;
  }
  else {
    // 更新资源计数器
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    // 分配内存
    local_buffer = (int8_t *)func_0x000180120ce0((int64_t)(config_value * 2 + 1) << 2, SYSTEM_DATA_MANAGER_B);
  }
  
  *(float *)(context_ptr + 4 + (int64_t)context_id * 0x14) = (float)(context_config[1] + stack_param) + 1.0;
  
  // 验证配置
  if (context_config[1] < 1) {
    if (local_buffer == &stack0x00000050) {
      // 错误处理
      SystemSecurityChecker(stack_checksum ^ (uint64_t)&stack0x00000000);
    }
    if ((local_buffer != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
    // 内存释放
    DataValidator0(local_buffer, SYSTEM_DATA_MANAGER_B);
  }
  
  // 清零缓冲区
  memset(local_buffer, 0, (int64_t)*context_config << 2);
}

// 函数: void setup_rendering_pipeline(int *pipeline_config, int64_t pipeline_ptr, int pipeline_id)
// 功能: 设置渲染管线
// 参数:
//   pipeline_config - 管线配置指针
//   pipeline_ptr - 管线指针
//   pipeline_id - 管线ID
// 返回: 无
void setup_rendering_pipeline(int *pipeline_config, int64_t pipeline_ptr, int pipeline_id)

{
  int config_value;              // 配置值
  int8_t *local_buffer;      // 本地缓冲区
  int reg_bx;                    // 寄存器BX
  uint64_t reg_bp;             // 寄存器BP
  uint64_t reg_si;             // 寄存器SI
  uint64_t reg_di;             // 寄存器DI
  int64_t reg_r11;              // 寄存器R11
  uint64_t reg_r12;            // 寄存器R12
  uint64_t reg_r13;            // 寄存器R13
  uint64_t reg_r14;            // 寄存器R14
  uint64_t reg_r15;            // 寄存器R15
  int32_t xmm_reg[4];        // XMM寄存器数组
  uint64_t stack_checksum;      // 栈校验和
  int stack_param;               // 栈参数
  
  // 保存寄存器状态
  *(uint64_t *)(reg_r11 + -8) = reg_bp;
  *(uint64_t *)(reg_r11 + -0x10) = reg_si;
  *(uint64_t *)(reg_r11 + -0x18) = reg_di;
  *(uint64_t *)(reg_r11 + -0x20) = reg_r12;
  *(uint64_t *)(reg_r11 + -0x28) = reg_r13;
  *(uint64_t *)(reg_r11 + -0x30) = reg_r14;
  *(uint64_t *)(reg_r11 + -0x38) = reg_r15;
  *(int32_t *)(reg_r11 + -0x78) = xmm_reg[0];
  *(int32_t *)(reg_r11 + -0x74) = xmm_reg[1];
  *(int32_t *)(reg_r11 + -0x70) = xmm_reg[2];
  *(int32_t *)(reg_r11 + -0x6c) = xmm_reg[3];
  
  // 选择缓冲区
  if (config_value < 0x41) {
    local_buffer = &stack0x00000050;
  }
  else {
    // 更新资源计数器
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    // 分配内存
    local_buffer = (int8_t *)func_0x000180120ce0((int64_t)(config_value * 2 + 1) << 2, SYSTEM_DATA_MANAGER_B);
  }
  
  *(float *)(pipeline_ptr + 4 + (int64_t)pipeline_id * 0x14) = (float)(pipeline_config[1] + stack_param) + 1.0;
  
  // 验证配置
  if (pipeline_config[1] <= reg_bx) {
    if (local_buffer == &stack0x00000050) {
      // 错误处理
      SystemSecurityChecker(stack_checksum ^ (uint64_t)&stack0x00000000);
    }
    if ((local_buffer != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
    // 内存释放
    DataValidator0(local_buffer, SYSTEM_DATA_MANAGER_B);
  }
  
  // 清零缓冲区
  memset(local_buffer, 0, (int64_t)*pipeline_config << 2);
}

// 函数: void clear_rendering_memory(void)
// 功能: 清空渲染内存
// 参数: 无
// 返回: 无
void clear_rendering_memory(void)

{
  // 清零内存操作
  memset();
}

// 函数: void release_rendering_resources(void)
// 功能: 释放渲染资源
// 参数: 无（使用栈参数）
// 返回: 无
void release_rendering_resources(void)

{
  int64_t reg_r15;              // 寄存器R15
  int8_t *stack_param1;      // 栈参数1
  uint64_t stack_param2;        // 栈参数2
  
  // 释放主要资源
  if (reg_r15 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
    DataValidator0();
  }
  
  // 释放栈资源
  if (stack_param1 != &stack0x00000050) {
    if ((stack_param1 != (int8_t *)0x0) && (SYSTEM_DATA_MANAGER_A != 0)) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
    DataValidator0(stack_param1, SYSTEM_DATA_MANAGER_B);
  }
  
  // 清理栈
  SystemSecurityChecker(stack_param2 ^ (uint64_t)&stack0x00000000);
}

// 函数: void free_rendering_buffer(void)
// 功能: 释放渲染缓冲区
// 参数: 无
// 返回: 无
void free_rendering_buffer(void)

{
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  DataValidator0();
}

// 函数: void deallocate_rendering_memory(int64_t memory_ptr)
// 功能: 释放渲染内存
// 参数:
//   memory_ptr - 内存指针
// 返回: 无
void deallocate_rendering_memory(int64_t memory_ptr)

{
  if ((memory_ptr != 0) && (SYSTEM_DATA_MANAGER_A != 0)) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
  DataValidator0(memory_ptr, SYSTEM_DATA_MANAGER_B);
}

// 函数: void optimize_rendering_data(uint64_t *data_array, int array_size)
// 功能: 优化渲染数据
// 参数:
//   data_array - 数据数组指针
//   array_size - 数组大小
// 返回: 无
void optimize_rendering_data(uint64_t *data_array, int array_size)

{
  int32_t *elem_ptr1;         // 元素指针1
  float *float_ptr1;             // 浮点指针1
  float float_val1;              // 浮点值1
  float float_val2;              // 浮点值2
  int32_t elem_val1;          // 元素值1
  int32_t elem_val2;          // 元素值2
  int32_t elem_val3;          // 元素值3
  int32_t elem_val4;          // 元素值4
  int32_t elem_val5;          // 元素值5
  uint64_t elem_val6;          // 元素值6
  uint64_t elem_val7;          // 元素值7
  uint64_t elem_val8;          // 元素值8
  int partition_size;            // 分区大小
  int64_t mid_index;            // 中间索引
  int64_t last_index;           // 最后索引
  float *float_ptr2;             // 浮点指针2
  int left_size;                 // 左侧大小
  uint64_t *elem_ptr2;         // 元素指针2
  int right_size;                // 右侧大小
  int64_t swap_index;           // 交换索引
  int64_t partition_end;        // 分区结束
  int temp_size;                 // 临时大小
  uint64_t *temp_ptr;          // 临时指针
  
  // 快速排序实现
  if (0xc < array_size) {
    do {
      right_size = array_size + -1;
      mid_index = (int64_t)array_size >> 1;
      last_index = (int64_t)array_size + -1;
      float_val1 = *(float *)((int64_t)data_array + mid_index * 0x14 + 4);
      float_val2 = *(float *)((int64_t)data_array + last_index * 0x14 + 4);
      
      // 分区选择
      if (*(float *)((int64_t)data_array + 4) < float_val1 != float_val1 < float_val2) {
        elem_ptr2 = (uint64_t *)((int64_t)data_array + mid_index * 0x14);
        elem_val6 = elem_ptr2[1];
        swap_index = 0;
        if (*(float *)((int64_t)data_array + 4) < float_val2 != float_val1 < float_val2) {
          swap_index = right_size;
        }
        partition_end = (int64_t)swap_index;
        temp_ptr = (uint64_t *)((int64_t)data_array + partition_end * 0x14);
        elem_val7 = *temp_ptr;
        elem_val8 = temp_ptr[1];
        elem_val1 = *(int32_t *)((int64_t)data_array + partition_end * 0x14 + 0x10);
        temp_ptr = (uint64_t *)((int64_t)data_array + partition_end * 0x14);
        *temp_ptr = *elem_ptr2;
        temp_ptr[1] = elem_val6;
        *(int32_t *)((int64_t)data_array + partition_end * 0x14 + 0x10) =
             *(int32_t *)((int64_t)data_array + mid_index * 0x14 + 0x10);
        elem_ptr2 = (uint64_t *)((int64_t)data_array + mid_index * 0x14);
        *elem_ptr2 = elem_val7;
        elem_ptr2[1] = elem_val8;
        *(int32_t *)((int64_t)data_array + mid_index * 0x14 + 0x10) = elem_val1;
      }
      
      // 交换分区元素
      elem_ptr2 = (uint64_t *)((int64_t)data_array + mid_index * 0x14);
      elem_val6 = elem_ptr2[1];
      elem_val1 = *(int32_t *)(data_array + 2);
      swap_index = 1;
      elem_val2 = *(int32_t *)data_array;
      elem_val3 = *(int32_t *)((int64_t)data_array + 4);
      elem_val4 = *(int32_t *)(data_array + 1);
      elem_val5 = *(int32_t *)((int64_t)data_array + 0xc);
      partition_end = 1;
      *data_array = *elem_ptr2;
      data_array[1] = elem_val6;
      *(int32_t *)(data_array + 2) = *(int32_t *)((int64_t)data_array + mid_index * 0x14 + 0x10);
      elem_ptr1 = (int32_t *)((int64_t)data_array + mid_index * 0x14);
      *elem_ptr1 = elem_val2;
      elem_ptr1[1] = elem_val3;
      elem_ptr1[2] = elem_val4;
      elem_ptr1[3] = elem_val5;
      *(int32_t *)((int64_t)data_array + mid_index * 0x14 + 0x10) = elem_val1;
      
      // 分区处理
      while( true ) {
        float_val1 = *(float *)((int64_t)data_array + 4);
        mid_index = partition_end * 5 + 1;
        float_ptr1 = (float *)((int64_t)data_array + mid_index * 4);
        float_ptr2 = (float *)((int64_t)data_array + mid_index * 4);
        mid_index = partition_end;
        if (*float_ptr1 <= float_val1 && float_val1 != *float_ptr1) {
          do {
            swap_index = swap_index + 1;
            float_ptr2 = float_ptr2 + 5;
            mid_index = partition_end + 1;
            partition_end = mid_index;
          } while (*float_ptr2 <= float_val1 && float_val1 != *float_ptr2);
        }
        partition_end = last_index * 5 + 1;
        float_ptr2 = (float *)((int64_t)data_array + partition_end * 4);
        float_val2 = *(float *)((int64_t)data_array + partition_end * 4);
        partition_end = last_index;
        while (float_val1 < float_val2) {
          right_size = right_size + -1;
          float_ptr2 = float_ptr2 + -5;
          partition_end = partition_end + -1;
          float_val2 = *float_ptr2;
        }
        if (partition_end <= mid_index) break;
        swap_index = swap_index + 1;
        elem_ptr2 = (uint64_t *)((int64_t)data_array + partition_end * 0x14);
        elem_val6 = elem_ptr2[1];
        right_size = right_size + -1;
        elem_ptr1 = (int32_t *)((int64_t)data_array + mid_index * 0x14);
        elem_val2 = *elem_ptr1;
        elem_val3 = elem_ptr1[1];
        elem_val4 = elem_ptr1[2];
        elem_val5 = elem_ptr1[3];
        elem_val1 = *(int32_t *)((int64_t)data_array + mid_index * 0x14 + 0x10);
        partition_end = mid_index + 1;
        temp_ptr = (uint64_t *)((int64_t)data_array + mid_index * 0x14);
        *temp_ptr = *elem_ptr2;
        temp_ptr[1] = elem_val6;
        last_index = partition_end + -1;
        *(int32_t *)((int64_t)data_array + mid_index * 0x14 + 0x10) =
             *(int32_t *)((int64_t)data_array + partition_end * 0x14 + 0x10);
        elem_ptr1 = (int32_t *)((int64_t)data_array + partition_end * 0x14);
        *elem_ptr1 = elem_val2;
        elem_ptr1[1] = elem_val3;
        elem_ptr1[2] = elem_val4;
        elem_ptr1[3] = elem_val5;
        *(int32_t *)((int64_t)data_array + partition_end * 0x14 + 0x10) = elem_val1;
      }
      
      left_size = array_size - swap_index;
      array_size = left_size;
      partition_size = right_size;
      if (left_size <= right_size) {
        array_size = right_size;
        partition_size = left_size;
      }
      
      elem_ptr2 = (uint64_t *)((int64_t)data_array + (int64_t)swap_index * 0x14);
      temp_ptr = data_array;
      if (left_size <= right_size) {
        temp_ptr = elem_ptr2;
      }
      optimize_rendering_data(temp_ptr, partition_size);
      if (left_size <= right_size) {
        elem_ptr2 = data_array;
      }
      data_array = elem_ptr2;
    } while (0xc < array_size);
  }
  
  return;
}

// 函数: void sort_rendering_elements(uint64_t *element_array, int element_count)
// 功能: 排序渲染元素
// 参数:
//   element_array - 元素数组指针
//   element_count - 元素数量
// 返回: 无
void sort_rendering_elements(uint64_t *element_array, int element_count)

{
  int32_t *elem_ptr1;         // 元素指针1
  float *float_ptr1;             // 浮点指针1
  float float_val1;              // 浮点值1
  float float_val2;              // 浮点值2
  int32_t elem_val1;          // 元素值1
  int32_t elem_val2;          // 元素值2
  int32_t elem_val3;          // 元素值3
  int32_t elem_val4;          // 元素值4
  int32_t elem_val5;          // 元素值5
  uint64_t elem_val6;          // 元素值6
  uint64_t elem_val7;          // 元素值7
  uint64_t elem_val8;          // 元素值8
  int partition_size;            // 分区大小
  int64_t mid_index;            // 中间索引
  int64_t last_index;           // 最后索引
  float *float_ptr2;             // 浮点指针2
  int left_size;                 // 左侧大小
  uint64_t *elem_ptr2;         // 元素指针2
  int right_size;                // 右侧大小
  int64_t swap_index;           // 交换索引
  int64_t partition_end;        // 分区结束
  int temp_size;                 // 临时大小
  uint64_t *temp_ptr;          // 临时指针
  
  // 快速排序实现（递归版本）
  do {
    right_size = element_count + -1;
    mid_index = (int64_t)element_count >> 1;
    last_index = (int64_t)element_count + -1;
    float_val1 = *(float *)((int64_t)element_array + mid_index * 0x14 + 4);
    float_val2 = *(float *)((int64_t)element_array + last_index * 0x14 + 4);
    
    // 分区选择
    if (*(float *)((int64_t)element_array + 4) < float_val1 != float_val1 < float_val2) {
      elem_ptr2 = (uint64_t *)((int64_t)element_array + mid_index * 0x14);
      elem_val6 = elem_ptr2[1];
      swap_index = 0;
      if (*(float *)((int64_t)element_array + 4) < float_val2 != float_val1 < float_val2) {
        swap_index = right_size;
      }
      partition_end = (int64_t)swap_index;
      temp_ptr = (uint64_t *)((int64_t)element_array + partition_end * 0x14);
      elem_val7 = *temp_ptr;
      elem_val8 = temp_ptr[1];
      elem_val1 = *(int32_t *)((int64_t)element_array + partition_end * 0x14 + 0x10);
      temp_ptr = (uint64_t *)((int64_t)element_array + partition_end * 0x14);
      *temp_ptr = *elem_ptr2;
      temp_ptr[1] = elem_val6;
      *(int32_t *)((int64_t)element_array + partition_end * 0x14 + 0x10) =
           *(int32_t *)((int64_t)element_array + mid_index * 0x14 + 0x10);
      elem_ptr2 = (uint64_t *)((int64_t)element_array + mid_index * 0x14);
      *elem_ptr2 = elem_val7;
      elem_ptr2[1] = elem_val8;
      *(int32_t *)((int64_t)element_array + mid_index * 0x14 + 0x10) = elem_val1;
    }
    
    // 交换分区元素
    elem_ptr2 = (uint64_t *)((int64_t)element_array + mid_index * 0x14);
    elem_val6 = elem_ptr2[1];
    elem_val1 = *(int32_t *)(element_array + 2);
    swap_index = 1;
    elem_val2 = *(int32_t *)element_array;
    elem_val3 = *(int32_t *)((int64_t)element_array + 4);
    elem_val4 = *(int32_t *)(element_array + 1);
    elem_val5 = *(int32_t *)((int64_t)element_array + 0xc);
    partition_end = 1;
    *element_array = *elem_ptr2;
    element_array[1] = elem_val6;
    *(int32_t *)(element_array + 2) = *(int32_t *)((int64_t)element_array + mid_index * 0x14 + 0x10);
    elem_ptr1 = (int32_t *)((int64_t)element_array + mid_index * 0x14);
    *elem_ptr1 = elem_val2;
    elem_ptr1[1] = elem_val3;
    elem_ptr1[2] = elem_val4;
    elem_ptr1[3] = elem_val5;
    *(int32_t *)((int64_t)element_array + mid_index * 0x14 + 0x10) = elem_val1;
    
    // 分区处理
    while( true ) {
      float_val1 = *(float *)((int64_t)element_array + 4);
      mid_index = partition_end * 5 + 1;
      float_ptr1 = (float *)((int64_t)element_array + mid_index * 4);
      float_ptr2 = (float *)((int64_t)element_array + mid_index * 4);
      mid_index = partition_end;
      if (*float_ptr1 <= float_val1 && float_val1 != *float_ptr1) {
        do {
          swap_index = swap_index + 1;
          float_ptr2 = float_ptr2 + 5;
          mid_index = partition_end + 1;
          partition_end = mid_index;
        } while (*float_ptr2 <= float_val1 && float_val1 != *float_ptr2);
      }
      partition_end = last_index * 5 + 1;
      float_ptr2 = (float *)((int64_t)element_array + partition_end * 4);
      float_val2 = *(float *)((int64_t)element_array + partition_end * 4);
      partition_end = last_index;
      while (float_val1 < float_val2) {
        right_size = right_size + -1;
        float_ptr2 = float_ptr2 + -5;
        partition_end = partition_end + -1;
        float_val2 = *float_ptr2;
      }
      if (partition_end <= mid_index) break;
      swap_index = swap_index + 1;
      elem_ptr2 = (uint64_t *)((int64_t)element_array + partition_end * 0x14);
      elem_val6 = elem_ptr2[1];
      right_size = right_size + -1;
      elem_ptr1 = (int32_t *)((int64_t)element_array + mid_index * 0x14);
      elem_val2 = *elem_ptr1;
      elem_val3 = elem_ptr1[1];
      elem_val4 = elem_ptr1[2];
      elem_val5 = elem_ptr1[3];
      elem_val1 = *(int32_t *)((int64_t)element_array + mid_index * 0x14 + 0x10);
      partition_end = mid_index + 1;
      temp_ptr = (uint64_t *)((int64_t)element_array + mid_index * 0x14);
      *temp_ptr = *elem_ptr2;
      temp_ptr[1] = elem_val6;
      last_index = partition_end + -1;
      *(int32_t *)((int64_t)element_array + mid_index * 0x14 + 0x10) =
           *(int32_t *)((int64_t)element_array + partition_end * 0x14 + 0x10);
      elem_ptr1 = (int32_t *)((int64_t)element_array + partition_end * 0x14);
      *elem_ptr1 = elem_val2;
      elem_ptr1[1] = elem_val3;
      elem_ptr1[2] = elem_val4;
      elem_ptr1[3] = elem_val5;
      *(int32_t *)((int64_t)element_array + partition_end * 0x14 + 0x10) = elem_val1;
    }
    
    left_size = element_count - swap_index;
    element_count = left_size;
    partition_size = right_size;
    if (left_size <= right_size) {
      element_count = right_size;
      partition_size = left_size;
    }
    
    elem_ptr2 = (uint64_t *)((int64_t)element_array + (int64_t)swap_index * 0x14);
    temp_ptr = element_array;
    if (left_size <= right_size) {
      temp_ptr = elem_ptr2;
    }
    optimize_rendering_data(temp_ptr, partition_size);
    if (left_size <= right_size) {
      elem_ptr2 = element_array;
    }
    element_array = elem_ptr2;
  } while (0xc < element_count);
  
  return;
}

// 函数: void finalize_rendering_optimization(void)
// 功能: 完成渲染优化
// 参数: 无
// 返回: 无
void finalize_rendering_optimization(void)

{
  return;
}

// 警告：已移除不可达的代码块
// 警告：全局变量 '_' 与同一地址的较小符号重叠