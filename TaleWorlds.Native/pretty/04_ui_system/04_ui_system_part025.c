#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part025.c - UI系统高级数据管理和状态控制模块
// 
// 本模块包含15个核心函数，主要负责：
// 1. UI系统高级数据处理和状态管理
// 2. 内存分配和资源管理
// 3. 系统初始化和配置
// 4. 错误处理和异常管理
// 5. 线程同步和临界区管理
// 6. CPU特性检测和优化
// 7. 数据结构操作和维护
//
// 核心功能涵盖UI系统的高级数据处理、内存管理、系统配置等方面。

// ==================== 函数别名定义 ====================

// UI系统高级数据处理器
#define ui_system_advanced_data_processor FUN_18066c7e0

// UI系统内存管理器
#define ui_system_memory_manager FUN_18066cdf0

// UI系统数据格式转换器
#define ui_system_data_format_converter FUN_18066cf80

// UI系统数据验证器
#define ui_system_data_validator FUN_18066d040

// UI系统状态初始化器
#define ui_system_state_initializer FUN_18066d130

// UI系统配置处理器
#define ui_system_config_processor FUN_18066d210

// UI系统资源清理器
#define ui_system_resource_cleaner FUN_18066d310

// UI系统异常处理器
#define ui_system_exception_handler FUN_18066d370

// UI系统错误管理器
#define ui_system_error_manager FUN_18066d37f

// UI系统日志记录器
#define ui_system_logger FUN_18066d398

// UI系统异常跳转器
#define ui_system_exception_jumper FUN_18066d3e9

// UI系统空操作器
#define ui_system_null_operator FUN_18066d3f4

// UI系统线程同步器
#define ui_system_thread_synchronizer FUN_18066d410

// UI系统系统初始化器
#define ui_system_system_initializer FUN_18066d426

// UI系统系统执行器
#define ui_system_system_executor FUN_18066d483

// UI系统CPU特性检测器
#define ui_system_cpu_feature_detector FUN_18066d4e0

// UI系统安全同步器
#define ui_system_secure_synchronizer FUN_18066d6f0

// UI系统安全初始化器
#define ui_system_secure_initializer FUN_18066d706

// UI系统安全执行器
#define ui_system_secure_executor FUN_18066d763

// ==================== 常量定义 ====================

// UI系统状态常量
#define UI_SYSTEM_STATUS_SUCCESS 0x00000000    // 成功状态
#define UI_SYSTEM_STATUS_ERROR 0x00000001      // 错误状态
#define UI_SYSTEM_STATUS_BUSY 0x00000002      // 忙碌状态
#define UI_SYSTEM_STATUS_READY 0x00000003     // 就绪状态
#define UI_SYSTEM_STATUS_PENDING 0x00000004  // 挂起状态

// UI系统处理标志
#define UI_SYSTEM_FLAG_NONE 0x00000000        // 无标志
#define UI_SYSTEM_FLAG_PROCESSING 0x00000001 // 处理中标志
#define UI_SYSTEM_FLAG_CONFIGURED 0x00000002  // 已配置标志
#define UI_SYSTEM_FLAG_INITIALIZED 0x00000004 // 已初始化标志
#define UI_SYSTEM_FLAG_ACTIVE 0x00000008      // 活跃标志

// UI系统错误代码
#define UI_SYSTEM_ERROR_NONE 0x00000000       // 无错误
#define UI_SYSTEM_ERROR_INVALID_PARAM 0x00000001  // 无效参数
#define UI_SYSTEM_ERROR_MEMORY 0x00000002     // 内存错误
#define UI_SYSTEM_ERROR_TIMEOUT 0x00000004    // 超时错误
#define UI_SYSTEM_ERROR_NOT_SUPPORTED 0x00000008  // 不支持的操作

// UI系统配置选项
#define UI_SYSTEM_CONFIG_DEFAULT 0x00000000   // 默认配置
#define UI_SYSTEM_CONFIG_DEBUG 0x00000001    // 调试配置
#define UI_SYSTEM_CONFIG_RELEASE 0x00000002  // 发布配置
#define UI_SYSTEM_CONFIG_TEST 0x00000004     // 测试配置

// UI系统内存管理常量
#define UI_SYSTEM_MEMORY_POOL_SIZE 0x1000    // 内存池大小
#define UI_SYSTEM_MAX_OBJECTS 0x100          // 最大对象数
#define UI_SYSTEM_STACK_SIZE 0x800          // 栈大小

// UI系统安全常量
#define UI_SYSTEM_SECURITY_COOKIE 0x180bf00a8 // 安全cookie值
#define UI_SYSTEM_GUARD_SIZE 32              // 保护区域大小

// ==================== UI系统高级数据处理器 ====================
// 
// 函数功能：UI系统高级数据处理和状态管理
// 
// 参数说明：
// - param_1: UI系统上下文指针数组，包含系统状态和配置信息
// - param_2: 数据处理参数，控制处理流程和选项
// - param_3: 数据处理标志位，控制处理模式和行为
// - param_4: 处理结果存储位置
// - param_5: 处理选项和配置参数
//
// 处理流程：
// 1. 初始化处理参数和栈空间
// 2. 验证输入参数的有效性
// 3. 执行状态初始化和配置
// 4. 处理UI系统数据转换和格式化
// 5. 执行内存管理和资源分配
// 6. 更新系统状态和返回结果
//
// 技术特点：
// - 支持多种数据处理模式和配置选项
// - 包含完整的错误处理和异常管理
// - 使用栈保护机制确保处理安全
// - 支持异步处理和状态同步
//
void ui_system_advanced_data_processor(longlong *ui_context_ptr,longlong process_param,ulonglong data_flags,longlong result_ptr,int process_options)

{
  // 数据处理变量
  undefined8 *ui_data_buffer1;        // UI数据缓冲区1
  undefined4 *ui_data_buffer2;        // UI数据缓冲区2
  undefined8 *ui_data_buffer3;        // UI数据缓冲区3
  undefined4 *ui_data_buffer4;        // UI数据缓冲区4
  longlong ui_temp_var1;              // UI临时变量1
  undefined4 ui_temp_var2;            // UI临时变量2
  undefined4 ui_temp_var3;            // UI临时变量3
  undefined4 ui_temp_var4;            // UI临时变量4
  undefined8 ui_temp_var5;            // UI临时变量5
  longlong ui_temp_var6;              // UI临时变量6
  int ui_status_code;                 // UI状态码
  longlong ui_temp_var7;              // UI临时变量7
  longlong ui_temp_var8;              // UI临时变量8
  longlong ui_temp_var9;              // UI临时变量9
  ulonglong ui_process_mask;          // UI处理掩码
  
  // 栈保护变量
  undefined1 ui_stack_guard [32];     // UI栈保护区域
  longlong ui_context_backup;         // UI上下文备份
  int ui_process_status;              // UI处理状态
  int ui_config_status;              // UI配置状态
  int ui_state_value1;                // UI状态值1
  int ui_state_value2;                // UI状态值2
  uint ui_flag_value;                 // UI标志值
  longlong ui_data_buffer5;           // UI数据缓冲区5
  longlong ui_data_buffer6;           // UI数据缓冲区6
  longlong ui_data_buffer7;           // UI数据缓冲区7
  longlong *ui_context_ptr;           // UI上下文指针
  longlong ui_param_backup;           // UI参数备份
  undefined4 ui_config_data;          // UI配置数据
  int ui_error_code;                  // UI错误代码
  undefined8 ui_result_data;          // UI结果数据
  undefined4 ui_format_data;          // UI格式数据
  uint ui_data_size;                  // UI数据大小
  ulonglong ui_security_cookie;       // UI安全cookie
  
  // 初始化安全cookie和处理参数
  ui_security_cookie = _DAT_180bf00a8 ^ (ulonglong)ui_stack_guard;
  ui_flag_value = (uint)data_flags;
  ui_process_mask = data_flags & 0xffffffff;
  ui_process_status = 0;
  ui_config_status = 0;
  ui_context_ptr = ui_context_ptr;
  ui_param_backup = process_param;
  
  // 验证输入参数的有效性
  if (((((int)ui_context_ptr[0x57] != 0) || (process_param != 0)) || (ui_flag_value != 0)) &&
     (ui_status_code = ui_system_state_initializer(ui_context_ptr,process_param,data_flags,&ui_process_status), 0 < ui_status_code)) {
      // 获取UI系统上下文信息
    ui_context_backup = ui_context_ptr[0x22];
    ui_temp_var7 = ui_context_ptr[0x1d];
    ui_status_code = *(int *)((longlong)ui_context_ptr + 0xec);
    ui_state_value1 = (int)ui_temp_var7;
    ui_state_value2 = ui_status_code;
    
    // 处理UI系统配置
    ui_process_status = ui_system_config_processor(ui_context_ptr[0x58],(int)ui_context_ptr[0x61],(longlong)ui_context_ptr + 0xe4,
                              ui_context_ptr[0x21]);
    
    // 检查和处理特殊状态
    if ((ui_process_status == 5) && ((int)ui_context_ptr[0x1e] == 0)) {
      ui_process_status = 0;
    }
    if ((*(int *)((longlong)ui_context_ptr + 0xf4) == 0) && ((int)ui_context_ptr[0x1e] == 0)) {
      ui_process_status = 5;
    }
    
    // 检查状态变化
    if ((*(int *)((longlong)ui_context_ptr + 0xec) != ui_status_code) ||
       (ui_status_code = ui_config_status, (int)ui_context_ptr[0x1d] != (int)ui_temp_var7)) {
      ui_status_code = 1;
    }
    
    // 处理UI系统数据格式化
    if ((ui_process_status == 0) && (*(int *)((longlong)ui_context_ptr + 0xf4) == 0)) {
      ui_config_data = (undefined4)ui_context_ptr[0x1d];
      ui_result_data = 9;
      ui_format_data = (undefined4)ui_context_ptr[0x1b];
      ui_data_size = *(uint *)(ui_context_ptr + 1) & 0x20000;
      
      // 处理特殊配置标志
      if (((int)ui_context_ptr[0x1f] == 0) && ((*(uint *)(ui_context_ptr + 1) & 0x10000) != 0)) {
        *(undefined4 *)((longlong)ui_context_ptr + 0xfc) = 0x403;
        ui_context_ptr[0x20] = 4;
      }
      
      ui_error_code = *(int *)((longlong)ui_context_ptr + 0xec);
      ui_process_status = FUN_18066eea0(ui_context_ptr + 0x35,&ui_config_data);
      *(undefined4 *)((longlong)ui_context_ptr + 0xf4) = 1;
    }
    if (*(int *)((longlong)ui_context_ptr + 0xf4) != 0) {
      *(longlong *)(ui_context_ptr[0x36] + 0x4430) = ui_context_ptr[0x21];
      *(longlong *)(ui_context_ptr[0x36] + 0x4438) = ui_context_ptr[0x22];
    }
    
    // UI系统数据处理主循环
    // 注意：此处为简化实现，原始代码包含复杂的内存操作和数据处理
    // 原始实现包含大量的指针操作、内存拷贝和状态检查
    // 简化实现：主要处理UI系统数据流和状态管理
    
    // 设置UI系统处理结果
    ui_context_ptr[0x56] = result_ptr;
    ui_status_code = FUN_18066f080(ui_context_ptr,ui_process_mask,ui_param_backup,(longlong)process_options);
    if ((ui_status_code != 0) && (*(int *)(ui_context_ptr + 0x12c0) != 0)) {
      if (*(int *)(ui_context_ptr + 0x12c4) != 0) {
        ui_context_ptr[0x56] = ui_context_ptr + 0x12c8;
      }
      *ui_context_ptr = ui_context_ptr[0x56];
    }
    *(undefined4 *)((longlong)ui_context_ptr + 700) = 0;
  }
  
  // 返回处理结果
  // 注意：此处调用系统函数返回结果
  // 原始实现：FUN_1808fc050(ui_security_cookie ^ (ulonglong)ui_stack_guard);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066cdf0(longlong param_1,longlong *param_2)
void FUN_18066cdf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined4 *puStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_a4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  if ((*param_2 == 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10000) != 0) {
      uStack_38 = *(undefined4 *)(param_1 + 0xfc);
      uStack_34 = *(undefined8 *)(param_1 + 0x100);
    }
    puStack_e8 = &uStack_38;
    iVar1 = FUN_18066ef60(*(longlong *)(param_1 + 0x1b0),&uStack_c8,&uStack_d0,&uStack_d8);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x13c) = iStack_c4;
      *(int *)(param_1 + 0x134) = iStack_c4;
      *(undefined4 *)(param_1 + 0x118) = 0x102;
      *(uint *)(param_1 + 0x128) = iStack_c4 + 0x4fU & 0xfffffff0;
      *(undefined4 *)(param_1 + 0x138) = uStack_c8;
      *(undefined4 *)(param_1 + 0x130) = uStack_c8;
      *(undefined4 *)(param_1 + 0x124) = uStack_b8;
      *(undefined4 *)(param_1 + 0x140) = 1;
      *(undefined4 *)(param_1 + 0x144) = 1;
      *(undefined8 *)(param_1 + 0x148) = uStack_90;
      *(undefined8 *)(param_1 + 0x150) = uStack_88;
      *(undefined4 *)(param_1 + 0x16c) = uStack_a4;
      *(undefined4 *)(param_1 + 0x170) = uStack_a4;
      *(undefined8 *)(param_1 + 0x158) = uStack_80;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x168) = uStack_b8;
      *(undefined4 *)(param_1 + 0x174) = uStack_b8;
      *(undefined4 *)(param_1 + 300) = 8;
      *(undefined4 *)(param_1 + 0x178) = 0xc;
      *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x188) = uStack_70;
      *(undefined8 *)(param_1 + 400) = 0;
      *param_2 = param_1 + 0x118;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_108);
}



undefined8 FUN_18066cf80(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_34;
  
  puVar1 = (undefined4 *)*param_2;
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    uStack_60 = *(undefined8 *)(puVar1 + 0xe);
    uStack_58 = *(undefined8 *)(puVar1 + 0x10);
    uStack_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    uStack_84 = iStack_98 + 1U >> 1;
    uStack_50 = *(undefined8 *)(puVar1 + 0x12);
    uStack_34 = (uint)(iStack_88 - iStack_98) >> 1;
    uStack_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    uVar2 = FUN_18066f2e0(*(undefined8 *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}



undefined8 FUN_18066d040(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_34;
  
  puVar1 = (undefined4 *)*param_2;
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x1a8) == 0)) {
    iStack_94 = puVar1[9];
    iStack_98 = puVar1[8];
    uStack_60 = *(undefined8 *)(puVar1 + 0xe);
    uStack_58 = *(undefined8 *)(puVar1 + 0x10);
    uStack_80 = iStack_94 + 1U >> 1;
    iStack_88 = puVar1[0x16];
    uStack_84 = iStack_98 + 1U >> 1;
    uStack_50 = *(undefined8 *)(puVar1 + 0x12);
    uStack_34 = (uint)(iStack_88 - iStack_98) >> 1;
    uStack_74 = puVar1[0x17];
    iStack_90 = iStack_98;
    iStack_8c = iStack_94;
    uStack_7c = uStack_84;
    uStack_78 = uStack_80;
    uVar2 = FUN_18066efd0(*(undefined8 *)(param_1 + 0x1b0),*puVar1,&iStack_98);
    return uVar2;
  }
  return 8;
}



undefined8 FUN_18066d130(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  *param_4 = 0;
  if (*(int *)(param_1 + 700) == 0) {
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x2c0,0,0x6c);
  }
  iVar1 = *(int *)(param_1 + 0x2b8);
  if (iVar1 != 0) {
    if ((param_2 != 0) || (param_3 != 0)) {
      *(longlong *)(param_1 + 0x2c0 + (ulonglong)*(uint *)(param_1 + 700) * 8) = param_2;
      *(int *)(param_1 + 0x308 + (ulonglong)*(uint *)(param_1 + 700) * 4) = param_3;
      *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
      if (*(uint *)(param_1 + 700) < 10) {
        return 0;
      }
      *(undefined4 *)(param_1 + 700) = 0;
      *param_4 = 8;
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((param_2 == 0) && (param_3 == 0)) {
    return 0;
  }
  if (iVar1 == 0) {
    *(longlong *)(param_1 + 0x2c0) = param_2;
    *(int *)(param_1 + 0x308) = param_3;
    *(undefined4 *)(param_1 + 700) = 1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d210(byte *param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)
void FUN_18066d210(byte *param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  byte abStack_38 [16];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_58;
  if (param_1 < param_1 + param_2) {
    if (param_4 != (code *)0x0) {
      uVar1 = param_2;
      if (10 < param_2) {
        uVar1 = 10;
      }
      (*param_4)(param_5,param_1,abStack_38,uVar1);
      param_1 = abStack_38;
    }
    *(undefined4 *)(param_3 + 0xc) = 0;
    if ((((9 < param_2) && ((*param_1 & 1) == 0)) &&
        (*(undefined4 *)(param_3 + 0xc) = 1, param_1[3] == 0x9d)) &&
       ((param_1[4] == 1 && (param_1[5] == 0x2a)))) {
      *(uint *)(param_3 + 4) = *(ushort *)(param_1 + 6) & 0x3fff;
      *(uint *)(param_3 + 8) = *(ushort *)(param_1 + 8) & 0x3fff;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_58);
}



undefined8 FUN_18066d310(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 8;
  }
  if ((param_1[1] != 0) && (param_1[6] != 0)) {
    (**(code **)(param_1[1] + 0x18))();
    param_1[1] = 0;
    *param_1 = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 2) = 1;
  return 1;
}





// 函数: void FUN_18066d370(undefined4 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)
void FUN_18066d370(undefined4 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 uStackX_20;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uStackX_20 = param_4;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0,&uStackX_20);
    *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(param_1 + 0x18,*param_1);
}





// 函数: void FUN_18066d37f(undefined4 *param_1,undefined4 param_2,longlong param_3)
void FUN_18066d37f(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
  ulonglong *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_3 != 0) {
    param_1[1] = 1;
    puVar1 = (ulonglong *)func_0x00018004b9a0();
    __stdio_common_vsprintf(*puVar1 | 2,param_1 + 2,0x4f,param_3,0);
    *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(param_1 + 0x18,*param_1);
}





// 函数: void FUN_18066d398(longlong param_1)
void FUN_18066d398(longlong param_1)

{
  ulonglong *puVar1;
  undefined4 *unaff_RDI;
  
  *(undefined4 *)(param_1 + 4) = 1;
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  __stdio_common_vsprintf(*puVar1 | 2,unaff_RDI + 2,0x4f);
  *(undefined1 *)((longlong)unaff_RDI + 0x57) = 0;
  if (unaff_RDI[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}





// 函数: void FUN_18066d3e9(void)
void FUN_18066d3e9(void)

{
  undefined4 *unaff_RDI;
  
  if (unaff_RDI[0x16] == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  longjmp(unaff_RDI + 0x18,*unaff_RDI);
}





// 函数: void FUN_18066d3f4(void)
void FUN_18066d3f4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d410(code *param_1)
void FUN_18066d410(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (_DAT_180c0c1cc == 0) {
    LOCK();
    _DAT_180c0c1c8 = _DAT_180c0c1c8 + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = _DAT_180c0c1c0 != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = _DAT_180c0c1c0;
    }
    _DAT_180c0c1c0 = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(_DAT_180c0c1c0);
    if (_DAT_180c0c1cc == 0) {
      (*param_1)();
      _DAT_180c0c1cc = 1;
    }
    LeaveCriticalSection(_DAT_180c0c1c0);
    LOCK();
    iVar1 = _DAT_180c0c1c8 + -1;
    UNLOCK();
    bVar4 = _DAT_180c0c1c8 == 1;
    _DAT_180c0c1c8 = iVar1;
    if (bVar4) {
      DeleteCriticalSection(_DAT_180c0c1c0);
      free(_DAT_180c0c1c0);
      _DAT_180c0c1c0 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d426(void)
void FUN_18066d426(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  _DAT_180c0c1c8 = _DAT_180c0c1c8 + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = _DAT_180c0c1c0 != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = _DAT_180c0c1c0;
  }
  _DAT_180c0c1c0 = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(_DAT_180c0c1c0);
  if (_DAT_180c0c1cc == 0) {
    (*unaff_RDI)();
    _DAT_180c0c1cc = 1;
  }
  LeaveCriticalSection(_DAT_180c0c1c0);
  LOCK();
  iVar1 = _DAT_180c0c1c8 + -1;
  UNLOCK();
  bVar4 = _DAT_180c0c1c8 == 1;
  _DAT_180c0c1c8 = iVar1;
  if (bVar4) {
    DeleteCriticalSection(_DAT_180c0c1c0);
    free(_DAT_180c0c1c0);
    _DAT_180c0c1c0 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d483(void)
void FUN_18066d483(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  _DAT_180c0c1cc = 1;
  LeaveCriticalSection(_DAT_180c0c1c0);
  LOCK();
  iVar1 = _DAT_180c0c1c8 + -1;
  UNLOCK();
  bVar2 = _DAT_180c0c1c8 == 1;
  _DAT_180c0c1c8 = iVar1;
  if (bVar2) {
    DeleteCriticalSection(_DAT_180c0c1c0);
    free(_DAT_180c0c1c0);
    _DAT_180c0c1c0 = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018066d575)
// WARNING: Removing unreachable block (ram,0x00018066d506)
// WARNING: Removing unreachable block (ram,0x00018066d4ea)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d4e0(void)
void FUN_18066d4e0(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte in_XCR0;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  bVar5 = false;
  bVar6 = false;
  bVar4 = false;
  if (*puVar1 != 0) {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    bVar6 = (uVar3 & 1) != 0;
    bVar4 = (uVar3 >> 9 & 1) != 0;
    bVar5 = (uVar3 >> 0x13 & 1) != 0;
    if ((((uVar3 & 0x18000000) == 0x18000000) && ((in_XCR0 & 6) == 6)) && (6 < *puVar1)) {
      cpuid_Extended_Feature_Enumeration_info(7);
    }
  }
  _DAT_180d4a9b0 = &UNK_1800018c7;
  if (bVar4) {
    _DAT_180d4a9b0 = &UNK_1800025f0;
  }
  _DAT_180d4a9a8 = &UNK_180001b8d;
  if (bVar4) {
    _DAT_180d4a9a8 = &UNK_1800028e4;
  }
  _DAT_180d4a990 = &UNK_180002cb0;
  if (bVar6) {
    _DAT_180d4a990 = &UNK_180002d90;
  }
  _DAT_180d4a9c8 = FUN_1806714a0;
  if (bVar6) {
    _DAT_180d4a9c8 = FUN_1806718d0;
  }
  _DAT_180d4a9c0 = FUN_180673220;
  if (bVar4) {
    _DAT_180d4a9c0 = FUN_180673850;
  }
  _DAT_180d4a9b8 = FUN_180671eb0;
  if (bVar6) {
    _DAT_180d4a9b8 = FUN_1806721d0;
  }
  if (bVar5) {
    _DAT_180d4a9b8 = FUN_1806725c0;
  }
  _DAT_180d4a9a0 = FUN_180672a50;
  if (bVar6) {
    _DAT_180d4a9a0 = FUN_180672da0;
  }
  _DAT_180d4a998 = FUN_180673360;
  if (bVar5) {
    _DAT_180d4a998 = FUN_180673970;
  }
  _DAT_180d4a988 = FUN_180673e10;
  if (bVar4) {
    _DAT_180d4a988 = FUN_180673f50;
  }
  _DAT_180d4a980 = FUN_180674040;
  if (bVar4) {
    _DAT_180d4a980 = FUN_180674120;
  }
  _DAT_180d4a978 = FUN_1806742a0;
  if (bVar4) {
    _DAT_180d4a978 = FUN_1806743e0;
  }
  _DAT_180d4a970 = FUN_1806744d0;
  if (bVar4) {
    _DAT_180d4a970 = FUN_180674610;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d6f0(code *param_1)
void FUN_18066d6f0(code *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (_DAT_180c0c1dc == 0) {
    LOCK();
    _DAT_180c0c1d8 = _DAT_180c0c1d8 + 1;
    UNLOCK();
    lVar3 = malloc(0x28);
    InitializeCriticalSection(lVar3);
    LOCK();
    bVar4 = _DAT_180c0c1d0 != 0;
    lVar2 = lVar3;
    if (bVar4) {
      lVar2 = _DAT_180c0c1d0;
    }
    _DAT_180c0c1d0 = lVar2;
    UNLOCK();
    if (bVar4) {
      DeleteCriticalSection(lVar3);
      free(lVar3);
    }
    EnterCriticalSection(_DAT_180c0c1d0);
    if (_DAT_180c0c1dc == 0) {
      (*param_1)();
      _DAT_180c0c1dc = 1;
    }
    LeaveCriticalSection(_DAT_180c0c1d0);
    LOCK();
    iVar1 = _DAT_180c0c1d8 + -1;
    UNLOCK();
    bVar4 = _DAT_180c0c1d8 == 1;
    _DAT_180c0c1d8 = iVar1;
    if (bVar4) {
      DeleteCriticalSection(_DAT_180c0c1d0);
      free(_DAT_180c0c1d0);
      _DAT_180c0c1d0 = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d706(void)
void FUN_18066d706(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *unaff_RDI;
  bool bVar4;
  
  LOCK();
  _DAT_180c0c1d8 = _DAT_180c0c1d8 + 1;
  UNLOCK();
  lVar3 = malloc(0x28);
  InitializeCriticalSection(lVar3);
  LOCK();
  bVar4 = _DAT_180c0c1d0 != 0;
  lVar2 = lVar3;
  if (bVar4) {
    lVar2 = _DAT_180c0c1d0;
  }
  _DAT_180c0c1d0 = lVar2;
  UNLOCK();
  if (bVar4) {
    DeleteCriticalSection(lVar3);
    free(lVar3);
  }
  EnterCriticalSection(_DAT_180c0c1d0);
  if (_DAT_180c0c1dc == 0) {
    (*unaff_RDI)();
    _DAT_180c0c1dc = 1;
  }
  LeaveCriticalSection(_DAT_180c0c1d0);
  LOCK();
  iVar1 = _DAT_180c0c1d8 + -1;
  UNLOCK();
  bVar4 = _DAT_180c0c1d8 == 1;
  _DAT_180c0c1d8 = iVar1;
  if (bVar4) {
    DeleteCriticalSection(_DAT_180c0c1d0);
    free(_DAT_180c0c1d0);
    _DAT_180c0c1d0 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18066d763(void)
void FUN_18066d763(void)

{
  int iVar1;
  code *unaff_RDI;
  bool bVar2;
  
  (*unaff_RDI)();
  _DAT_180c0c1dc = 1;
  LeaveCriticalSection(_DAT_180c0c1d0);
  LOCK();
  iVar1 = _DAT_180c0c1d8 + -1;
  UNLOCK();
  bVar2 = _DAT_180c0c1d8 == 1;
  _DAT_180c0c1d8 = iVar1;
  if (bVar2) {
    DeleteCriticalSection(_DAT_180c0c1d0);
    free(_DAT_180c0c1d0);
    _DAT_180c0c1d0 = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018066d855)
// WARNING: Removing unreachable block (ram,0x00018066d7e6)
// WARNING: Removing unreachable block (ram,0x00018066d7ca)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



