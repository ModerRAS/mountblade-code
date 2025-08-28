#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part018.c - 初始化模块第18部分 (7个函数)
// 本文件包含系统初始化、资源管理、配置计算等功能

// 全局变量声明
uint64_t SYSTEM_STATE_MANAGER;  // 引擎配置数据
uint64_t init_system_data_pointer;  // 全局状态指针
uint64_t system_operation_state;  // 配置参数指针
uint64_t system_main_module_state;  // 主引擎指针
uint64_t init_system_data_pointer;  // 子系统配置指针
uint64_t system_parameter_buffer;  // 扩展配置指针
uint64_t system_context_ptr;  // 基础配置指针
uint64_t system_resource_state;  // 高级配置指针
uint64_t init_system_data_pointer;  // 替代配置指针
uint64_t init_system_data_pointer;  // 外部接口指针
uint64_t system_memory_pool_ptr;  // 内存管理器
uint64_t GET_SECURITY_COOKIE();  // 安全验证数据
uint64_t system_memory_flags;  // 时间戳数据

/**
 * 计算并设置渲染质量参数
 * 主要功能：根据系统配置计算渲染相关的质量参数
 * 
 * 原始实现：FUN_18004caf0
 * 简化实现：渲染质量参数计算
 */
void calculate_render_quality_parameters(longlong config_ptr)
{
  longlong engine_config;      // 引擎配置指针
  int quality_level;           // 质量等级
  int adjusted_level;          // 调整后的等级
  float level_float;           // 等级浮点值
  float param1;                // 计算参数1
  float param2;                // 计算参数2
  float param3;                // 计算参数3
  float sum1;                  // 和值1
  float sum2;                  // 和值2
  
  engine_config = SYSTEM_STATE_MANAGER;
  quality_level = *(int *)(SYSTEM_STATE_MANAGER + 0xd90) + -1;
  adjusted_level = 0;
  if ((-1 < quality_level) && (adjusted_level = quality_level, 3 < quality_level)) {
    adjusted_level = 3;
  }
  level_float = (float)adjusted_level;
  param1 = level_float * 1.6750001 + 2.4750001;
  param2 = level_float * 4.4666667 + 6.6000004;
  param3 = level_float * 3.3500001 + 4.9500003;
  sum1 = param1 + param3;
  *(float *)(config_ptr + 0x38c) = param3 * param3;
  param1 = param1 + sum1;
  *(float *)(config_ptr + 0x390) = sum1 * sum1;
  sum1 = param2 + param1;
  *(float *)(config_ptr + 0x394) = param1 * param1;
  param2 = param2 + sum1;
  *(float *)(config_ptr + 0x398) = sum1 * sum1;
  sum1 = level_float * 13.400001 + 19.800001 + param2;
  *(float *)(config_ptr + 0x39c) = param2 * param2;
  param2 = level_float * 17.866667 + 26.400002 + sum1;
  *(float *)(config_ptr + 0x3a0) = sum1 * sum1;
  *(float *)(config_ptr + 0x3a4) = param2 * param2;
  *(int32_t *)(config_ptr + 0x3a8) = 0x7f7fffff;
  *(uint *)(config_ptr + 0x3ac) = (uint)(*(int *)(engine_config + 0xd90) == 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 清理和释放资源管理器
 * 主要功能：释放和清理系统资源管理器的相关内存和对象
 * 
 * 原始实现：FUN_18004cc20
 * 简化实现：资源管理器清理函数
 */
void cleanup_resource_manager(longlong *config_ptr)
{
  uint64_t *resource_ptr;     // 资源指针
  longlong temp_var;            // 临时变量
  
  resource_ptr = (uint64_t *)config_ptr[0x7c];
  if (resource_ptr != (uint64_t *)0x0) {
    // 清理第一个资源块
    resource_ptr[0x14] = &system_data_buffer_ptr;
    if (resource_ptr[0x15] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    resource_ptr[0x15] = 0;
    *(int32_t *)(resource_ptr + 0x17) = 0;
    resource_ptr[0x14] = &system_state_ptr;
    
    // 清理第二个资源块
    resource_ptr[0x10] = &system_data_buffer_ptr;
    if (resource_ptr[0x11] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    resource_ptr[0x11] = 0;
    *(int32_t *)(resource_ptr + 0x13) = 0;
    resource_ptr[0x10] = &system_state_ptr;
    
    // 清理第三个资源块
    if (resource_ptr[0xc] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    FUN_180057170();
    FUN_180057170();
    
    // 清理主资源块
    *resource_ptr = &system_data_buffer_ptr;
    if (resource_ptr[1] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    resource_ptr[1] = 0;
    *(int32_t *)(resource_ptr + 3) = 0;
    *resource_ptr = &system_state_ptr;
    // 警告：子程序不返回
    FUN_18064e900(resource_ptr);
  }
  
  // 清理配置指针
  config_ptr[0x7c] = 0;
  resource_ptr = (uint64_t *)config_ptr[1];
  if (resource_ptr != (uint64_t *)0x0) {
    temp_var = __RTCastToVoid(resource_ptr);
    *resource_ptr = &unknown_var_2976_ptr;
    FUN_18005e570(system_context_ptr, resource_ptr[0x28]);
    resource_ptr[0x28] = 0;
    
    // 清理附加资源
    resource_ptr[0x29] = &system_data_buffer_ptr;
    if (resource_ptr[0x2a] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    resource_ptr[0x2a] = 0;
    *(int32_t *)(resource_ptr + 0x2c) = 0;
    resource_ptr[0x29] = &system_state_ptr;
    
    FUN_180174950();
    if (temp_var != 0) {
      // 警告：子程序不返回
      FUN_18064e900(temp_var);
    }
  }
  
  // 继续清理其他配置
  config_ptr[1] = 0;
  temp_var = *config_ptr;
  if (temp_var != 0) {
    FUN_180057d70(temp_var);
    // 警告：子程序不返回
    FUN_18064e900(temp_var);
  }
  *config_ptr = 0;
  
  // 清理全局状态
  temp_var = init_system_data_pointer;
  if (init_system_data_pointer != 0) {
    FUN_180057550();
    // 警告：子程序不返回
    FUN_18064e900(temp_var);
  }
  init_system_data_pointer = 0;
  
  // 清理配置参数
  FUN_1800578a0();
  system_operation_state = 0;
  
  // 清理系统配置
  if (config_ptr[6] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[6] = 0;
  
  // 清理配置块1
  config_ptr[0x6d] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x6e] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x6e] = 0;
  *(int32_t *)(config_ptr + 0x70) = 0;
  config_ptr[0x6d] = (longlong)&system_state_ptr;
  
  // 清理配置块2
  config_ptr[0x69] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x6a] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x6a] = 0;
  *(int32_t *)(config_ptr + 0x6c) = 0;
  config_ptr[0x69] = (longlong)&system_state_ptr;
  
  // 执行清理操作
  FUN_180057830();
  FUN_18005d260(config_ptr + 0x5c, config_ptr[0x5e]);
  
  // 清理配置块3
  config_ptr[0x58] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x59] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x59] = 0;
  *(int32_t *)(config_ptr + 0x5b) = 0;
  config_ptr[0x58] = (longlong)&system_state_ptr;
  
  // 清理配置块4
  config_ptr[0x52] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x53] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x53] = 0;
  *(int32_t *)(config_ptr + 0x55) = 0;
  config_ptr[0x52] = (longlong)&system_state_ptr;
  
  // 清理配置块5
  config_ptr[0x4e] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x4f] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x4f] = 0;
  *(int32_t *)(config_ptr + 0x51) = 0;
  config_ptr[0x4e] = (longlong)&system_state_ptr;
  
  // 清理配置块6
  config_ptr[0x39] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x3a] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x3a] = 0;
  *(int32_t *)(config_ptr + 0x3c) = 0;
  config_ptr[0x39] = (longlong)&system_state_ptr;
  
  // 清理配置块7
  config_ptr[0x32] = (longlong)&system_state_ptr;
  config_ptr[0x2e] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x2f] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x2f] = 0;
  *(int32_t *)(config_ptr + 0x31) = 0;
  config_ptr[0x2e] = (longlong)&system_state_ptr;
  
  // 清理配置块8
  config_ptr[0x29] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x2a] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x2a] = 0;
  *(int32_t *)(config_ptr + 0x2c) = 0;
  config_ptr[0x29] = (longlong)&system_state_ptr;
  
  // 清理配置块9
  if (config_ptr[0x21] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  
  // 执行最终清理
  FUN_18005d580();
  
  // 清理配置块10
  config_ptr[0x17] = (longlong)&system_data_buffer_ptr;
  if (config_ptr[0x18] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  config_ptr[0x18] = 0;
  *(int32_t *)(config_ptr + 0x1a) = 0;
  config_ptr[0x17] = (longlong)&system_state_ptr;
  
  // 清理配置块11
  if (config_ptr[0xf] != 0) {
    // 警告：子程序不返回
    FUN_18064e900();
  }
  
  // 调用回调函数
  if ((longlong *)config_ptr[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)config_ptr[9] + 0x38))();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018004d2c7)
// WARNING: Removing unreachable block (ram,0x00018004d2d0)
// WARNING: Removing unreachable block (ram,0x00018004d2da)
// WARNING: Removing unreachable block (ram,0x00018004d2df)
// WARNING: Removing unreachable block (ram,0x00018004d2f2)
// WARNING: Removing unreachable block (ram,0x00018004d30d)
// WARNING: Removing unreachable block (ram,0x00018004d328)
// WARNING: Removing unreachable block (ram,0x00018004d343)
// WARNING: Removing unreachable block (ram,0x00018004d35e)
// WARNING: Removing unreachable block (ram,0x00018004d379)
// WARNING: Removing unreachable block (ram,0x00018004d4a0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 解析和处理配置字符串
 * 主要功能：解析配置参数字符串，处理各种格式和编码的配置数据
 * 
 * 原始实现：FUN_18004d020
 * 简化实现：配置字符串解析处理函数
 */
void parse_config_string(uint64_t config_handle, longlong string_param)

{
  byte char_flag;              // 字符标志
  int8_t byte_val;         // 字节值
  uint64_t *ptr_array1;      // 指针数组1
  uint64_t *ptr_array2;      // 指针数组2
  char char_val;               // 字符值
  int int_val;                 // 整型值
  int32_t uint_val1;       // 无符号整型值1
  uint uint_val2;              // 无符号整型值2
  longlong long_val1;          // 长整型值1
  longlong long_val2;          // 长整型值2
  int8_t *byte_ptr1;      // 字节指针1
  char *char_ptr;              // 字符指针
  int32_t *uint_ptr1;       // 无符号整型指针1
  int8_t *byte_ptr2;       // 字节指针2
  byte *byte_ptr3;            // 字节指针3
  int8_t *byte_ptr4;       // 字节指针4
  void *void_ptr1;        // 空指针1
  void *void_ptr2;        // 空指针2
  int int_val2;                // 整型值2
  longlong long_val3;          // 长整型值3
  ulonglong ulong_val1;        // 无符号长整型值1
  uint64_t *ptr_array3;      // 指针数组3
  uint uint_val3;              // 无符号整型值3
  longlong long_val4;          // 长整型值4
  ulonglong ulong_val2;        // 无符号长整型值2
  uint uint_val4;              // 无符号整型值4
  uint64_t uint_val5;        // 无符号整型值5
  ulonglong ulong_val3;        // 无符号长整型值3
  ulonglong ulong_val4;        // 无符号长整型值4
  uint uint_val5;              // 无符号整型值5
  bool bool_val;               // 布尔值
  int32_t xmm_reg1;         // XMM寄存器值1
  int32_t xmm_reg2;         // XMM寄存器值2
  int8_t stack_buffer1 [32];  // 栈缓冲区1
  int8_t stack_val1;         // 栈值1
  char stack_char1;              // 栈字符1
  char stack_char2;              // 栈字符2
  char stack_chars [2];          // 栈字符数组
  uint stack_uint1;              // 栈无符号整型1
  void *stack_ptr1;         // 栈指针1
  char *stack_char_ptr;          // 栈字符指针
  uint stack_uint2;              // 栈无符号整型2
  uint64_t stack_val2;         // 栈值2
  void *stack_ptr2;         // 栈指针2
  int8_t *stack_byte_ptr;    // 栈字节指针
  uint stack_uint3;              // 栈无符号整型3
  uint64_t stack_val3;         // 栈值3
  ulonglong stack_ulong1;        // 栈无符号长整型1
  void *puStack_2e8;
  int8_t *puStack_2e0;
  uint uStack_2d8;
  ulonglong uStack_2d0;
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  ulonglong uStack_2b0;
  void *puStack_2a8;
  void *puStack_2a0;
  uint uStack_298;
  int32_t uStack_290;
  int32_t uStack_28c;
  void *puStack_288;
  int32_t *puStack_280;
  int32_t uStack_278;
  uint64_t uStack_270;
  void *puStack_268;
  longlong lStack_260;
  void *puStack_258;
  longlong lStack_250;
  uint uStack_248;
  int32_t uStack_240;
  int32_t uStack_23c;
  void *puStack_238;
  longlong lStack_230;
  uint uStack_228;
  int32_t uStack_220;
  void *puStack_218;
  longlong lStack_210;
  uint uStack_208;
  int32_t uStack_200;
  void *puStack_1f8;
  longlong lStack_1f0;
  uint uStack_1e8;
  int32_t uStack_1e0;
  void *puStack_1d8;
  longlong lStack_1d0;
  uint uStack_1c8;
  int32_t uStack_1c0;
  void *puStack_1b8;
  void *puStack_1b0;
  int iStack_1a8;
  int32_t uStack_1a0;
  void *puStack_198;
  void *puStack_190;
  int iStack_188;
  int32_t uStack_180;
  void *puStack_178;
  longlong lStack_170;
  int32_t uStack_160;
  uint64_t uStack_158;
  ulonglong uStack_150;
  void *puStack_148;
  longlong lStack_140;
  int32_t uStack_130;
  void *puStack_128;
  longlong lStack_120;
  int32_t uStack_110;
  void *puStack_108;
  longlong lStack_100;
  int32_t uStack_f0;
  uint64_t *puStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  void *puStack_c8;
  longlong lStack_c0;
  int32_t uStack_b0;
  uint64_t uStack_a8;
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  ulonglong uStack_38;
  
  lVar24 = system_main_module_state;
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_368;
  puVar11 = (int8_t *)0x0;
  uStack_334 = 0;
  lStack_260 = system_main_module_state;
  cStack_338 = '\0';
  puVar17 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar17 = *(void **)(param_2 + 8);
  }
  lVar20 = -1;
  do {
    lVar9 = lVar20;
    lVar20 = lVar9 + 1;
  } while (puVar17[lVar20] != '\0');
  uVar21 = lVar9 + 2;
  puStack_310 = &system_data_buffer_ptr;
  uStack_2f8 = 0;
  puStack_308 = (int8_t *)0x0;
  uStack_300 = 0;
  puStack_268 = puVar17;
  uStack_150 = uVar21;
  (**(code **)(*(longlong *)(system_main_module_state + 0x2c0) + 0x10))
            ((longlong *)(system_main_module_state + 0x2c0),puVar17);
  uStack_2f0 = 0;
  puVar14 = puVar11;
  if (uVar21 != 0) {
    do {
      bVar1 = puVar17[uStack_2f0];
      uVar8 = (uint)puVar14;
      if ((bVar1 & 0xdf) == 0) {
        lVar20 = lVar24 + 0x2e0;
        lVar9 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(lVar24 + 0x308));
        FUN_180627ae0(lVar9 + 0x20,&puStack_310);
        lVar10 = FUN_1800590b0(lVar20,&cStack_337,lVar9 + 0x20);
        if (cStack_337 != '\0') {
          if (lVar10 == lVar20) goto LAB_18004d1c1;
          if (*(int *)(lVar10 + 0x30) == 0) goto LAB_18004d1b9;
          if (*(int *)(lVar9 + 0x30) == 0) goto LAB_18004d1c1;
          pbVar15 = *(byte **)(lVar10 + 0x28);
          lVar24 = *(longlong *)(lVar9 + 0x28) - (longlong)pbVar15;
          goto LAB_18004d1a2;
        }
        FUN_18005d1f0(extraout_XMM0_Da,lVar9);
        if (uVar8 == 8) {
          iVar6 = strcmp(puVar11,&unknown_var_4752_ptr);
          bVar31 = iVar6 == 0;
        }
        else {
          bVar31 = false;
        }
        if (bVar31) {


/**
 * 更新渲染配置参数
 * 主要功能：根据系统配置更新渲染相关的参数设置
 * 
 * 原始实现：FUN_18004e5f0
 * 简化实现：渲染配置更新函数
 */
void update_render_config(longlong config_ptr)
{
  int *dimension_ptr;        // 尺寸指针
  int32_t temp_config;   // 临时配置
  int render_mode;           // 渲染模式
  bool needs_update;         // 需要更新标志
  uint64_t update_flag;    // 更新标志
  bool use_secondary;        // 使用次要标志
  
  dimension_ptr = (int *)(config_ptr + 0x3d0);
  
  // 检查配置是否已更改
  if (((int)*(float *)(system_operation_state + 0x17ec) == *(int *)(config_ptr + 0x3cc)) &&
     ((int)*(float *)(system_operation_state + 0x17f0) == *dimension_ptr)) {
    needs_update = false;
  }
  else {
    needs_update = true;
    FUN_180092820(system_operation_state, *(int *)(config_ptr + 0x3cc), *dimension_ptr);
  }
  
  // 处理渲染模式2
  if (*(int *)(*(longlong *)(config_ptr + 8) + 0x38) == 2) {
    if ((*(char *)(config_ptr + 0x3d4) != '\0') || (*(char *)(config_ptr + 0x3d5) != '\0')) {
      temp_config = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1ea0);
      FUN_18005ca20(SYSTEM_STATE_MANAGER, 0);
      FUN_1801725e0(*(uint64_t *)(config_ptr + 8), *(int32_t *)(config_ptr + 0x3cc), *dimension_ptr,
                    *(int8_t *)(config_ptr + 0x3d5));
      FUN_1800a3880(system_message_buffer, *(int32_t *)(config_ptr + 0x3cc), *dimension_ptr, 1);
      FUN_18005ca20(SYSTEM_STATE_MANAGER, temp_config);
      FUN_1801725e0(*(uint64_t *)(config_ptr + 8), *(int32_t *)(config_ptr + 0x3cc), *dimension_ptr,
                    *(int8_t *)(config_ptr + 0x3d5));
      use_secondary = true;
      goto APPLY_CHANGES;
    }
  }
  else {
    // 处理其他渲染模式
    if (*(char *)(config_ptr + 0x3d4) != '\0') {
      render_mode = *(int *)(SYSTEM_STATE_MANAGER + 0x1ea0);
      if ((*(char *)(config_ptr + 0x3d5) != '\0') || (needs_update)) {
        update_flag = 1;
      }
      else {
        update_flag = 0;
      }
      FUN_1801725e0(*(longlong *)(config_ptr + 8), *(int32_t *)(config_ptr + 0x3cc), *dimension_ptr, update_flag);
      use_secondary = render_mode == 2;
      goto APPLY_CHANGES;
    }
    if (!needs_update) {
      return;
    }
  }
  use_secondary = false;
  
APPLY_CHANGES:
  // 应用配置更改
  FUN_1800a3880(system_message_buffer, *(int32_t *)(config_ptr + 0x3cc), *dimension_ptr, use_secondary);
  if (!needs_update) {
    return;
  }
  // 警告：子程序不返回
  FUN_180062300(system_message_context, &unknown_var_5656_ptr, *(int32_t *)(config_ptr + 0x3cc), *dimension_ptr);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化图形驱动配置
 * 主要功能：设置和初始化图形驱动相关的配置参数
 * 
 * 原始实现：FUN_18004e7a0
 * 简化实现：图形驱动配置初始化函数
 */
uint initialize_graphics_driver_config(void)
{
  int8_t config_data [16];   // 配置数据
  longlong engine_ptr;         // 引擎指针
  longlong main_engine;        // 主引擎指针
  uint64_t *resource_ptr;    // 资源指针
  uint config_value;           // 配置值
  int temp_int;                // 临时整型
  void *cleanup_ptr;      // 清理指针
  longlong buffer_ptr;         // 缓冲区指针
  uint buffer_size;            // 缓冲区大小
  ulonglong buffer_flags;      // 缓冲区标志
  void *string_ptr;       // 字符串指针
  longlong string_buffer;      // 字符串缓冲区
  uint string_length;          // 字符串长度
  uint64_t stack_guard1;     // 栈保护1
  uint64_t stack_guard2;     // 栈保护2
  int8_t temp_buffer1 [32]; // 临时缓冲区1
  int8_t temp_buffer2 [40]; // 临时缓冲区2
  
  main_engine = system_main_module_state;
  stack_guard2 = 0xfffffffffffffffe;
  
  // 读取第一个配置数据块
  config_data = *(int8_t (*) [16])
            (*(longlong *)(system_main_module_state + 8) + 0xcc +
            (ulonglong)(*(uint *)(*(longlong *)(system_main_module_state + 8) + 0x13c) & 1) * 0x48);
  
  // 处理第一个配置块
  if ((config_data._12_4_ != 0) && (config_data._8_4_ != 0)) {
    cleanup_ptr = &system_data_buffer_ptr;
    buffer_flags = 0;
    buffer_ptr = 0;
    buffer_size = 0;
    
    // 写入配置数据
    FUN_180628380(&cleanup_ptr, config_data._0_4_);
    config_value = buffer_size + 1;
    FUN_1806277c0(&cleanup_ptr, config_value);
    *(int16_t *)((ulonglong)buffer_size + buffer_ptr) = 0x2c;
    buffer_size = config_value;
    
    FUN_180628380(&cleanup_ptr, config_data._0_8_ >> 0x20);
    config_value = buffer_size + 1;
    FUN_1806277c0(&cleanup_ptr, config_value);
    *(int16_t *)((ulonglong)buffer_size + buffer_ptr) = 0x2c;
    buffer_size = config_value;
    
    FUN_180628380(&cleanup_ptr, config_data._8_8_ & 0xffffffff);
    temp_int = buffer_size + 1;
    FUN_1806277c0(&cleanup_ptr, temp_int);
    *(int16_t *)((ulonglong)buffer_size + buffer_ptr) = 0x2c;
    buffer_size = temp_int;
    
    FUN_180628380(&cleanup_ptr, config_data._8_8_ >> 0x20);
    resource_ptr = (uint64_t *)FUN_180627ae0(temp_buffer1, &cleanup_ptr);
    FUN_18005c8a0(init_system_data_pointer + 0xe30, resource_ptr);
    
    // 清理资源
    *resource_ptr = &system_data_buffer_ptr;
    if (resource_ptr[1] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    resource_ptr[1] = 0;
    *(int32_t *)(resource_ptr + 3) = 0;
    *resource_ptr = &system_state_ptr;
    cleanup_ptr = &system_data_buffer_ptr;
    if (buffer_ptr != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    buffer_ptr = 0;
    buffer_flags = buffer_flags & 0xffffffff00000000;
    cleanup_ptr = &system_state_ptr;
  }
  
  // 处理第二个配置块
  engine_ptr = *(longlong *)(main_engine + 8);
  config_data = *(int8_t (*) [16])(engine_ptr + 0xdc + (ulonglong)(*(uint *)(engine_ptr + 0x13c) & 1) * 0x48);
  if ((config_data._12_4_ != 0) && (config_data._8_4_ != 0)) {
    string_ptr = &system_data_buffer_ptr;
    stack_guard1 = 0;
    string_buffer = 0;
    string_length = 0;
    
    // 写入字符串配置
    FUN_180628380(&string_ptr, config_data._0_4_);
    config_value = string_length + 1;
    FUN_1806277c0(&string_ptr, config_value);
    *(int16_t *)((ulonglong)string_length + string_buffer) = 0x2c;
    string_length = config_value;
    
    FUN_180628380(&string_ptr, config_data._0_8_ >> 0x20);
    config_value = string_length + 1;
    FUN_1806277c0(&string_ptr, config_value);
    *(int16_t *)((ulonglong)string_length + string_buffer) = 0x2c;
    string_length = config_value;
    
    FUN_180628380(&string_ptr, config_data._8_8_ & 0xffffffff);
    temp_int = string_length + 1;
    FUN_1806277c0(&string_ptr, temp_int);
    *(int16_t *)((ulonglong)string_length + string_buffer) = 0x2c;
    string_length = temp_int;
    
    FUN_180628380(&string_ptr, config_data._8_8_ >> 0x20);
    resource_ptr = (uint64_t *)FUN_180627ae0(temp_buffer2, &string_ptr);
    FUN_18005c8a0(init_system_data_pointer + 0xef0, resource_ptr);
    
    // 清理资源
    *resource_ptr = &system_data_buffer_ptr;
    if (resource_ptr[1] != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
    resource_ptr[1] = 0;
    *(int32_t *)(resource_ptr + 3) = 0;
    *resource_ptr = &system_state_ptr;
    string_ptr = &system_data_buffer_ptr;
    if (string_buffer != 0) {
      // 警告：子程序不返回
      FUN_18064e900();
    }
  }
  
  // 返回配置结果
  return *(int32_t *)(*(longlong *)(main_engine + 8) + 0x13c);
}



// WARNING: Removing unreachable block (ram,0x00018004ed08)
// WARNING: Removing unreachable block (ram,0x00018004ed22)
// WARNING: Removing unreachable block (ram,0x00018004ed36)
// WARNING: Removing unreachable block (ram,0x00018004ed44)
// WARNING: Removing unreachable block (ram,0x00018004ed48)
// WARNING: Removing unreachable block (ram,0x00018004ed5b)
// WARNING: Removing unreachable block (ram,0x00018004ed5f)
// WARNING: Removing unreachable block (ram,0x00018004ed72)
// WARNING: Removing unreachable block (ram,0x00018004ed76)
// WARNING: Removing unreachable block (ram,0x00018004ed89)
// WARNING: Removing unreachable block (ram,0x00018004ed8d)
// WARNING: Removing unreachable block (ram,0x00018004edbc)
// WARNING: Removing unreachable block (ram,0x00018004edc0)
// WARNING: Removing unreachable block (ram,0x00018004edd3)
// WARNING: Removing unreachable block (ram,0x00018004ee38)
// WARNING: Removing unreachable block (ram,0x00018004ee52)
// WARNING: Removing unreachable block (ram,0x00018004ee66)
// WARNING: Removing unreachable block (ram,0x00018004ee74)
// WARNING: Removing unreachable block (ram,0x00018004ee78)
// WARNING: Removing unreachable block (ram,0x00018004ee8b)
// WARNING: Removing unreachable block (ram,0x00018004ee8f)
// WARNING: Removing unreachable block (ram,0x00018004eea2)
// WARNING: Removing unreachable block (ram,0x00018004eea6)
// WARNING: Removing unreachable block (ram,0x00018004eeb6)
// WARNING: Removing unreachable block (ram,0x00018004eeba)
// WARNING: Removing unreachable block (ram,0x00018004eeec)
// WARNING: Removing unreachable block (ram,0x00018004eef0)
// WARNING: Removing unreachable block (ram,0x00018004ef03)
// WARNING: Removing unreachable block (ram,0x00018004ebd5)
// WARNING: Removing unreachable block (ram,0x00018004ebef)
// WARNING: Removing unreachable block (ram,0x00018004ec03)
// WARNING: Removing unreachable block (ram,0x00018004ec11)
// WARNING: Removing unreachable block (ram,0x00018004ec15)
// WARNING: Removing unreachable block (ram,0x00018004ec28)
// WARNING: Removing unreachable block (ram,0x00018004ec2c)
// WARNING: Removing unreachable block (ram,0x00018004ec3f)
// WARNING: Removing unreachable block (ram,0x00018004ec43)
// WARNING: Removing unreachable block (ram,0x00018004ec56)
// WARNING: Removing unreachable block (ram,0x00018004ec5a)
// WARNING: Removing unreachable block (ram,0x00018004ec88)
// WARNING: Removing unreachable block (ram,0x00018004ec90)
// WARNING: Removing unreachable block (ram,0x00018004eca3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 管理配置缓冲区
 * 主要功能：管理和处理多个配置缓冲区的数据复制和清理
 * 
 * 原始实现：FUN_18004eb00
 * 简化实现：配置缓冲区管理函数
 */
void manage_config_buffers(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  uint buffer_size1;          // 缓冲区大小1
  uint buffer_size2;          // 缓冲区大小2
  longlong config_ptr1;       // 配置指针1
  longlong config_ptr2;       // 配置指针2
  ulonglong data_size;        // 数据大小
  void *cleanup_ptr;     // 清理指针
  longlong buffer_ptr;        // 缓冲区指针
  uint buffer_size_total;     // 总缓冲区大小
  uint64_t result_flags;    // 结果标志
  
  config_ptr1 = init_system_data_pointer;
  cleanup_ptr = &system_data_buffer_ptr;
  result_flags = 0;
  buffer_ptr = 0;
  buffer_size_total = 0;
  
  // 处理第一个配置块
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x1ea0) == 0) {
    buffer_size1 = *(uint *)(init_system_data_pointer + 0xe40);
    data_size = (ulonglong)buffer_size1;
    if (*(longlong *)(init_system_data_pointer + 0xe38) != 0) {
      FUN_1806277c0(&cleanup_ptr, data_size, param_3, param_4, 0xfffffffffffffffe);
    }
    if (buffer_size1 != 0) {
      // 警告：子程序不返回
      memcpy(buffer_ptr, *(uint64_t *)(config_ptr1 + 0xe38), data_size);
    }
    if (buffer_ptr != 0) {
      *(int8_t *)(data_size + buffer_ptr) = 0;
    }
    result_flags = CONCAT44(*(int32_t *)(config_ptr1 + 0xe4c), (int32_t)result_flags);
  }
  
  // 处理第二个配置块
  config_ptr1 = init_system_data_pointer;
  buffer_size_total = 0;
  buffer_size1 = *(uint *)(init_system_data_pointer + 0xf00);
  data_size = (ulonglong)buffer_size1;
  if (*(longlong *)(init_system_data_pointer + 0xef8) != 0) {
    FUN_1806277c0(&cleanup_ptr, data_size);
  }
  if (buffer_size1 != 0) {
    // 警告：子程序不返回
    memcpy(buffer_ptr, *(uint64_t *)(config_ptr1 + 0xef8), data_size);
  }
  if (buffer_ptr != 0) {
    *(int8_t *)(data_size + buffer_ptr) = 0;
  }
  
  // 处理第三个配置块
  config_ptr2 = init_system_data_pointer;
  result_flags = CONCAT44(*(int32_t *)(config_ptr1 + 0xf0c), (int32_t)result_flags);
  buffer_size2 = *(uint *)(init_system_data_pointer + 0xfc0);
  data_size = (ulonglong)buffer_size2;
  buffer_size_total = buffer_size1;
  if (*(longlong *)(init_system_data_pointer + 0xfb8) != 0) {
    FUN_1806277c0(&cleanup_ptr, data_size);
  }
  if (buffer_size2 != 0) {
    // 警告：子程序不返回
    memcpy(buffer_ptr, *(uint64_t *)(config_ptr2 + 0xfb8), data_size);
  }
  if (buffer_ptr != 0) {
    *(int8_t *)(data_size + buffer_ptr) = 0;
  }
  result_flags = CONCAT44(*(int32_t *)(config_ptr2 + 0xfcc), (int32_t)result_flags);
  cleanup_ptr = &system_data_buffer_ptr;
  
  // 清理缓冲区
  if (buffer_ptr != 0) {
    buffer_size_total = buffer_size2;
    // 警告：子程序不返回
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统参数和配置
 * 主要功能：初始化系统的各种参数和配置，包括时间戳、渲染参数等
 * 
 * 原始实现：FUN_18004ef60
 * 简化实现：系统参数初始化函数
 */
void initialize_system_parameters(void)

{
  int temp_int;               // 临时整型
  longlong engine_config;     // 引擎配置
  longlong main_engine;      // 主引擎指针
  longlong subsystem_config;  // 子系统配置
  int *config_ptr;           // 配置指针
  uint64_t *resource_ptr;  // 资源指针
  int32_t *flag_ptr;      // 标志指针
  void *string_ptr;      // 字符串指针
  char is_enabled;           // 是否启用标志
  float scale_factor;        // 缩放因子
  int32_t log_result;     // 对数计算结果
  float quality_factor;      // 质量因子
  int8_t temp_buffer1 [32]; // 临时缓冲区1
  longlong temp_ptr1;        // 临时指针1
  longlong temp_ptr2;        // 临时指针2
  longlong temp_ptr3;        // 临时指针3
  uint64_t *resource_array [10]; // 资源数组
  uint64_t stack_guard;    // 栈保护
  int8_t temp_buffer2 [8]; // 临时缓冲区2
  void *cleanup_ptr;     // 清理指针
  int8_t *data_ptr;      // 数据指针
  int32_t data_size;      // 数据大小
  int8_t temp_buffer3 [264]; // 临时缓冲区3
  ulonglong security_hash;   // 安全哈希
  
  main_engine = system_main_module_state;
  stack_guard = 0xfffffffffffffffe;
  security_hash = GET_SECURITY_COOKIE() ^ (ulonglong)temp_buffer1;
  
  // 检查系统状态并设置时间戳
  if (*(void **)*init_system_data_pointer == &unknown_var_424_ptr) {
    is_enabled = *(int *)(init_system_data_pointer + 0xe0) != 0;
  }
  else {
    is_enabled = (**(code **)(*(void **)*init_system_data_pointer + 0x48))();
  }
  
  // 设置时间戳
  if (is_enabled == '\0') {
    system_memory_flags = timeGetTime();
  }
  else {
    system_memory_flags = 0xb061;
  }
  
  engine_config = SYSTEM_STATE_MANAGER;
  system_memory_flags = system_memory_flags ^ 0x41c64e6d;
  
  // 计算缩放因子
  if ((*(longlong *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(SYSTEM_STATE_MANAGER + 0x540) < 1)) {
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x2140) == 0) {
      scale_factor = *(float *)(SYSTEM_STATE_MANAGER + 0x20d0);
    }
    else {
      scale_factor = 100.0;
    }
    scale_factor = scale_factor * 0.01;
  }
  else {
    scale_factor = 1.0;
  }
  
  // 设置缩放参数
  *(float *)(main_engine + 0x234) = scale_factor;
  *(int32_t *)(main_engine + 0x238) = 0x3f800000;
  quality_factor = 1.0;
  
  // 处理特殊渲染模式
  if (*(int *)(engine_config + 0x1ea0) == 1) {
    temp_int = *(int *)(engine_config + 0x1d50);
    config_ptr = (int *)FUN_180171f10(*(uint64_t *)(system_main_module_state + 8), temp_buffer2);
    quality_factor = (float)temp_int / (float)*config_ptr;
    scale_factor = quality_factor * *(float *)(main_engine + 0x234);
    quality_factor = quality_factor * *(float *)(main_engine + 0x238);
  }
  
  // 限制缩放因子范围
  if (0.2 <= scale_factor) {
    if (1.0 <= scale_factor) {
      scale_factor = 1.0;
    }
  }
  else {
    scale_factor = 0.2;
  }
  *(float *)(main_engine + 0x234) = scale_factor;
  scale_factor = 0.2;
  if ((0.2 <= quality_factor) && (scale_factor = quality_factor, 1.0 <= quality_factor)) {
    scale_factor = 1.0;
  }
  *(float *)(main_engine + 0x238) = scale_factor;
  *(int8_t *)(main_engine + 0x22d) = 0;
  
  // 计算对数参数
  log_result = log2f();
  *(int32_t *)(main_engine + 0x230) = log_result;
  log_result = log2f();
  *(int32_t *)(main_engine + 0x240) = log_result;
  log_result = log2f();
  *(int32_t *)(main_engine + 0x244) = log_result;
  log_result = log2f();
  *(int32_t *)(main_engine + 0x248) = log_result;
  log_result = log2f();
  *(int32_t *)(main_engine + 0x24c) = log_result;
  log_result = log2f(*(float *)(SYSTEM_STATE_MANAGER + 0x2220) * 0.01);
  *(int32_t *)(main_engine + 0x23c) = log_result;
  
  // 设置双精度浮点参数
  *(uint64_t *)(main_engine + 0x254) = 0x3f8000003f800000;
  temp_ptr2 = 0x3f8000003f800000;
  *(uint64_t *)(main_engine + 0x25c) = 0x3f8000003f800000;
  
  // 初始化子系统配置
  subsystem_config = system_parameter_buffer;
  engine_config = system_context_ptr;
  cleanup_ptr = &system_config_ptr;
  data_ptr = temp_buffer3;
  temp_buffer3[0] = 0;
  data_size = 0xd;
  strcpy_s(temp_buffer3, 0x10, &unknown_var_3392_ptr);
  puVar6 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x208,8,3);
  lStack_1e8 = lVar2 + 0x70;
  apuStack_1c8[0] = puVar6;
  FUN_18020e0e0(puVar6,&puStack_168,3,lVar2 + 0x2e0);
  *puVar6 = &unknown_var_9056_ptr;
  apuStack_1c8[0] = puVar6;
  FUN_18020e840(puVar6);
  FUN_18005ea90(lVar2 + 0x48,apuStack_1c8);
  *(uint64_t **)(lVar4 + 0x18) = puVar6;
  puStack_168 = &system_state_ptr;
  puVar8 = &system_buffer_ptr;
  if (*(void **)(lVar3 + 0x278) != (void *)0x0) {
    puVar8 = *(void **)(lVar3 + 0x278);
  }
  (**(code **)(*(longlong *)(system_resource_state + 0x560) + 0x10))
            ((longlong *)(system_resource_state + 0x560),puVar8);
  lVar3 = init_system_data_pointer;
  lStack_1d8 = FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
  *(uint64_t *)(lStack_1d8 + 0x28) = 3;
  *(int32_t *)(lStack_1d8 + 0x19) = 0;
  *(int16_t *)(lStack_1d8 + 0x1d) = 0;
  *(int8_t *)(lStack_1d8 + 0x1f) = 0;
  *(longlong *)lStack_1d8 = lStack_1d8;
  *(longlong *)(lStack_1d8 + 8) = lStack_1d8;
  *(uint64_t *)(lStack_1d8 + 0x10) = 0;
  *(int8_t *)(lStack_1d8 + 0x18) = 0;
  *(uint64_t *)(lStack_1d8 + 0x20) = 0;
  *(longlong *)(lVar3 + 0xa8) = lStack_1d8;
  lStack_1d0 = lStack_1d8;
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_12e0,&unknown_var_7552_ptr,FUN_180086670);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_02e0,&system_buffer_0410,FUN_1800868d0);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_12f0,&unknown_var_7536_ptr,FUN_180086600);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_0ef8,&unknown_var_7760_ptr,FUN_180086960);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&unknown_var_312_ptr,&unknown_var_7808_ptr,FUN_180086a00);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_1228,&system_buffer_0360,FUN_180086740);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_0c90,&unknown_var_7856_ptr,FUN_180086aa0);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&unknown_var_9448_ptr,&unknown_var_9464_ptr,FUN_1800900c0);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&unknown_var_1168_ptr,&unknown_var_7576_ptr,FUN_180086830);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_09f0,&unknown_var_9264_ptr,FUN_180090020);
  FUN_1802567b0(*(uint64_t *)(init_system_data_pointer + 0xa8),&system_buffer_0c80,&unknown_var_7872_ptr,FUN_180086b40);
  puVar7 = (int32_t *)FUN_18008d660(lVar3 + 0xe0,&system_buffer_09f0);
  *puVar7 = 1;
  puVar7 = (int32_t *)FUN_18008d660(lVar3 + 0xe0,&system_buffer_12f0);
  *puVar7 = 1;
  lStack_1d0 = FUN_18062b1e0(system_memory_pool_ptr,0x3878,8,3);
                    // WARNING: Subroutine does not return
  memset(lStack_1d0,0,0x3878);
}





/**
 * 释放资源数组
 * 主要功能：释放和清理资源数组中的所有元素
 * 
 * 原始实现：FUN_18004f8e0
 * 简化实现：资源数组释放函数
 */
void free_resource_array(longlong resource_array)
{
  int *ref_count;           // 引用计数指针
  longlong element_ptr;     // 元素指针
  uint64_t *array_ptr;    // 数组指针
  longlong mem_ptr;         // 内存指针
  ulonglong index;          // 索引
  ulonglong array_size;     // 数组大小
  
  array_size = *(ulonglong *)(resource_array + 0x10);
  mem_ptr = *(longlong *)(resource_array + 8);
  index = 0;
  
  // 遍历并释放数组中的所有元素
  if (array_size != 0) {
    do {
      element_ptr = *(longlong *)(mem_ptr + index * 8);
      if (element_ptr != 0) {
        // 警告：子程序不返回
        FUN_18064e900(element_ptr);
      }
      *(uint64_t *)(mem_ptr + index * 8) = 0;
      index = index + 1;
    } while (index < array_size);
    array_size = *(ulonglong *)(resource_array + 0x10);
  }
  
  *(uint64_t *)(resource_array + 0x18) = 0;
  
  // 处理内存管理
  if ((1 < array_size) && (array_ptr = *(uint64_t **)(resource_array + 8), array_ptr != (uint64_t *)0x0)) {
    // 计算内存块地址
    array_size = (ulonglong)array_ptr & 0xffffffffffc00000;
    if (array_size != 0) {
      mem_ptr = array_size + 0x80 + ((longlong)array_ptr - array_size >> 0x10) * 0x50;
      mem_ptr = mem_ptr - (ulonglong)*(uint *)(mem_ptr + 4);
      
      // 检查异常列表和内存状态
      if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(mem_ptr + 0xe) == '\0')) {
        // 更新内存链表
        *array_ptr = *(uint64_t *)(mem_ptr + 0x20);
        *(uint64_t **)(mem_ptr + 0x20) = array_ptr;
        ref_count = (int *)(mem_ptr + 0x18);
        *ref_count = *ref_count + -1;
        if (*ref_count == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        // 使用特殊内存管理函数
        func_0x00018064e870(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                            array_ptr, array_size, 0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





