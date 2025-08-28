#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 03_rendering_part429.c - 渲染系统高级资源管理和错误处理模块
// 总计：7个核心函数
// 
// 本模块包含渲染系统高级资源管理、错误处理、字符串操作、哈希表管理、
// 内存管理、线程同步等高级渲染功能。
// 主要功能包括资源清理、错误消息生成、哈希表操作、内存分配、线程管理等。
// ============================================================================

// ============================================================================
// 常量定义和宏定义
// ============================================================================

#define RESOURCE_BLOCK_SIZE              0x68       // 资源块大小 (104字节)
#define HASH_TABLE_SIZE                 0x20       // 哈希表大小 (32字节)
#define THREAD_ID_MASK                  0xffff      // 线程ID掩码
#define RESOURCE_CLEANUP_FLAG           0x01       // 资源清理标志
#define MEMORY_ALIGNMENT               0x10       // 内存对齐大小 (16字节)
#define MAX_RESOURCE_COUNT             0x7fffffff   // 最大资源数量
#define ERROR_MESSAGE_SIZE             0x2c       // 错误消息大小 (44字节)
#define WARNING_MESSAGE_SIZE           0x29       // 警告消息大小 (41字节)
#define SUCCESS_MESSAGE_SIZE           0x2b       // 成功消息大小 (43字节)
#define INFO_MESSAGE_SIZE              0x1d       // 信息消息大小 (29字节)
#define SYSTEM_MESSAGE_SIZE            0x1b       // 系统消息大小 (27字节)
#define CONFIG_MESSAGE_SIZE            0x10       // 配置消息大小 (16字节)

// ============================================================================
// 函数别名定义
// ============================================================================

#define rendering_system_resource_cleaner                FUN_18049f820
#define rendering_system_advanced_resource_cleaner       FUN_18049f876
#define rendering_system_simple_resource_cleaner         FUN_18049f905
#define rendering_system_message_generator               FUN_18049f920
#define rendering_system_error_message_formatter         FUN_1804a0f10
#define rendering_system_warning_message_formatter       FUN_1804a1150
#define rendering_system_success_message_formatter       FUN_1804a1430
#define rendering_system_info_message_formatter          FUN_1804a16f0
#define rendering_system_thread_manager                  FUN_180500270
#define rendering_system_hash_table_manager              FUN_180500420
#define rendering_system_memory_allocator                FUN_1805007d0
#define rendering_system_resource_array_manager          FUN_180500860
#define rendering_system_resource_inserter                FUN_1805009e0
#define rendering_system_resource_validator               FUN_180500b50

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 渲染系统资源清理器 - 负责清理渲染系统资源
 * 
 * 功能说明：
 * - 清理渲染系统资源数组
 * - 释放内存资源
 * - 重置系统状态
 * - 处理资源生命周期
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_resource_cleaner(void)
{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  // 清理主资源数组
  FUN_1804e5f80(&DAT_180c95ed0);
  uVar4 = 0;
  uVar6 = uVar4;
  if ((_DAT_180c95ed8 - _DAT_180c95ed0) / RESOURCE_BLOCK_SIZE != 0) {
    do {
      lVar2 = _DAT_180c95ed0;
      puVar1 = *(undefined8 **)(_DAT_180c95ed0 + 0x18 + uVar4);
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = __RTCastToVoid(puVar1);
        // 调用资源清理函数
        (**(code **)*puVar1)(puVar1,0);
        if (lVar3 != 0) {
          // 释放资源内存
          FUN_18064e900(lVar3);
        }
      }
      *(undefined8 *)(lVar2 + 0x18 + uVar4) = 0;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + RESOURCE_BLOCK_SIZE;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)((_DAT_180c95ed8 - _DAT_180c95ed0) / RESOURCE_BLOCK_SIZE));
  }
  
  // 清理辅助资源数组
  uVar6 = _DAT_180c91d30;
  lVar2 = _DAT_180c91d28;
  uVar4 = 0;
  if (_DAT_180c91d30 != 0) {
    do {
      lVar3 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x18) == 0) {
          // 释放无效资源
          FUN_18064e900(lVar3);
        }
        // 清理资源句柄
        FUN_18064e900();
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  // 重置系统状态
  uRam0000000180c91d38 = 0;
  return;
}

/**
 * 渲染系统高级资源清理器 - 负责高级资源清理操作
 * 
 * 功能说明：
 * - 执行高级资源清理
 * - 处理复杂资源结构
 * - 管理资源依赖关系
 * - 批量清理资源
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_advanced_resource_cleaner(void)
{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  longlong unaff_R12;
  int unaff_R14D;
  ulonglong unaff_R15;
  
  uVar5 = unaff_R15 & 0xffffffff;
  do {
    // 清理主资源池
    puVar1 = *(undefined8 **)(unaff_RSI + 0x18 + uVar5);
    if (puVar1 != (undefined8 *)0x0) {
      lVar3 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar3 != 0) {
        // 释放资源内存
        FUN_18064e900(lVar3);
      }
    }
    *(ulonglong *)(unaff_RSI + 0x18 + uVar5) = unaff_R15;
    uVar2 = _DAT_180c91d30;
    lVar3 = _DAT_180c91d28;
    unaff_R14D = unaff_R14D + 1;
    uVar5 = uVar5 + RESOURCE_BLOCK_SIZE;
    lVar4 = SUB168(SEXT816(unaff_R12) * SEXT816(_DAT_180c95ed8 - _DAT_180c95ed0),8);
    unaff_RSI = _DAT_180c95ed0;
  } while ((ulonglong)(longlong)unaff_R14D < (ulonglong)((lVar4 >> 5) - (lVar4 >> 0x3f)));
  
  // 清理辅助资源池
  uVar5 = 0;
  if (_DAT_180c91d30 != 0) {
    do {
      lVar4 = *(longlong *)(lVar3 + uVar5 * 8);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x18) == 0) {
          // 释放无效资源
          FUN_18064e900(lVar4);
        }
        // 清理资源句柄
        FUN_18064e900();
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  // 重置系统状态
  uRam0000000180c91d38 = 0;
  return;
}

/**
 * 渲染系统简化资源清理器 - 负责简化资源清理操作
 * 
 * 功能说明：
 * - 执行简化资源清理
 * - 处理基础资源结构
 * - 快速清理操作
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_simple_resource_cleaner(void)
{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plStack0000000000000040;
  
  uVar3 = _DAT_180c91d30;
  lVar2 = _DAT_180c91d28;
  uVar4 = 0;
  if (_DAT_180c91d30 != 0) {
    do {
      lVar1 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar1 != 0) {
        plStack0000000000000040 = (longlong *)(lVar1 + 0x18);
        if (*plStack0000000000000040 == 0) {
          // 释放无效资源
          FUN_18064e900(lVar1);
        }
        // 清理资源句柄
        FUN_18064e900();
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  // 重置系统状态
  uRam0000000180c91d38 = 0;
  return;
}

/**
 * 渲染系统消息生成器 - 负责生成系统消息
 * 
 * 功能说明：
 * - 生成系统配置消息
 * - 处理消息字符串
 * - 管理消息格式
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_message_generator(void)
{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_48;
  
  // 栈保护初始化
  uStack_48 = 0xfffffffffffffffe;
  
  // 创建消息处理器
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
  puStack_288 = &UNK_180a3c3e0;
  uStack_270 = 0;
  puStack_280 = (undefined8 *)0x0;
  uStack_278 = 0;
  
  // 创建消息字符串
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_280 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_270 = CONCAT44(uStack_270._4_4_,uVar1);
  
  // 设置消息内容："missing system"
  *puVar3 = 0x5f6e6f697373696d;
  *(undefined4 *)(puVar3 + 1) = 0x707063;
  uStack_278 = 0xb;
  
  // 处理消息
  FUN_1801614d0(uVar2,&puStack_288);
  puStack_288 = &UNK_180a3c3e0;
  
  // 清理资源
  FUN_18064e900(puVar3);
}

/**
 * 渲染系统错误消息格式化器 - 负责格式化错误消息
 * 
 * 功能说明：
 * - 格式化错误消息字符串
 * - 处理不同类型的错误
 * - 生成描述性错误信息
 * - 处理浮点数错误
 * 
 * 参数：
 *   param_1 - 错误处理参数
 *   param_2 - 消息缓冲区指针
 *   param_3 - 消息格式参数
 *   param_4 - 错误数据指针
 * 
 * 返回值：
 *   undefined8* - 消息缓冲区指针
 */
undefined8 *
rendering_system_error_message_formatter(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)
{
  undefined8 *puVar1;
  double dVar2;
  
  // 处理第一种错误类型
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置错误消息："Don't know how to multiply."
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar1 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  // 处理第二种错误类型
  else if ((DAT_180c96098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置错误消息："This is not missing system."
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(undefined4 *)(puVar1 + 3) = 0x2e6e6f;
    *(undefined4 *)(param_2 + 2) = 0x1b;
  }
  // 处理第三种错误类型
  else if (param_4[1] - *param_4 >> 5 == 0) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x2c,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置错误消息："Please select the color from the menu."
    *puVar1 = 0x2c20657361656c50;
    puVar1[1] = 0x7277206f736c6120;
    puVar1[2] = 0x2065687420657469;
    puVar1[3] = 0x726f662074736166;
    puVar1[4] = 0x6f6d612064726177;
    *(undefined4 *)(puVar1 + 5) = 0x2e746e75;
    *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 2) = 0x2c;
  }
  // 处理浮点数错误
  else {
    dVar2 = (double)atof(*(undefined8 *)(*param_4 + 8));
    FUN_1804f8bd0(_DAT_180c96070,(float)dVar2,0x3d088889);
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x14);
    puVar1 = (undefined8 *)param_2[1];
    // 设置错误消息："Format from stats."
    *puVar1 = 0x726f662074736146;
    puVar1[1] = 0x6174732064726177;
    *(undefined4 *)(puVar1 + 2) = 0x64657472;
    *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(param_2 + 2) = 0x14;
  }
  return param_2;
}

/**
 * 渲染系统警告消息格式化器 - 负责格式化警告消息
 * 
 * 功能说明：
 * - 格式化警告消息字符串
 * - 处理不同类型的警告
 * - 生成描述性警告信息
 * - 处理整数参数警告
 * 
 * 参数：
 *   param_1 - 警告处理参数
 *   param_2 - 消息缓冲区指针
 *   param_3 - 消息格式参数
 *   param_4 - 警告数据指针
 * 
 * 返回值：
 *   undefined8* - 消息缓冲区指针
 */
undefined8 *
rendering_system_warning_message_formatter(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)
{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [208];
  
  lVar2 = _DAT_180c96070;
  uVar4 = SUB81(param_4,0);
  
  // 处理第一种警告类型
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,uVar4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置警告消息："Don't know how to multiply."
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar1 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  // 处理第二种警告类型
  else if ((DAT_180c96098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,uVar4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置警告消息："This is not missing system."
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(undefined4 *)(puVar1 + 3) = 0x2e6e6f;
    *(undefined4 *)(param_2 + 2) = 0x1b;
  }
  // 处理第三种警告类型
  else if (param_4[1] - *param_4 >> 5 == 0) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x29,param_3,uVar4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置警告消息："Please select the color to like."
    *puVar1 = 0x2c20657361656c50;
    puVar1[1] = 0x7277206f736c6120;
    puVar1[2] = 0x2065687420657469;
    puVar1[3] = 0x646920746e656761;
    puVar1[4] = 0x6c6c696b206f7420;
    *(undefined2 *)(puVar1 + 5) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x29;
  }
  // 处理整数参数警告
  else {
    iVar3 = atoi(*(undefined8 *)(*param_4 + 8));
    if ((iVar3 < 0) || (iVar3 == *(int *)(lVar2 + 0x98d930))) {
      *param_2 = &UNK_18098bcb0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *param_2 = &UNK_180a3c3e0;
      param_2[3] = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      FUN_1806277c0(param_2,0x17);
      puVar1 = (undefined8 *)param_2[1];
      // 设置警告消息："Enter a valid id!"
      *puVar1 = 0x2061207265746e45;
      puVar1[1] = 0x67612064696c6176;
      puVar1[2] = 0x21646920746e65;
      *(undefined4 *)(param_2 + 2) = 0x17;
    }
    else {
      lVar5 = (longlong)iVar3 * 0xa60;
      FUN_1804a7000(auStack_d8,*(longlong *)(lVar5 + 0x30c0 + lVar2) + 0xc);
      FUN_18051d2d0(lVar2 + 0x30a0 + lVar5,auStack_d8,0,0xff);
      *param_2 = &UNK_18098bcb0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *param_2 = &UNK_180a3c3e0;
      param_2[3] = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      FUN_1806277c0(param_2,0xd);
      puVar1 = (undefined8 *)param_2[1];
      // 设置成功消息："Alike del!"
      *puVar1 = 0x696b20746e656741;
      *(undefined4 *)(puVar1 + 1) = 0x64656c6c;
      *(undefined2 *)((longlong)puVar1 + 0xc) = 0x21;
      *(undefined4 *)(param_2 + 2) = 0xd;
    }
  }
  return param_2;
}

/**
 * 渲染系统成功消息格式化器 - 负责格式化成功消息
 * 
 * 功能说明：
 * - 格式化成功消息字符串
 * - 处理不同类型的成功消息
 * - 生成描述性成功信息
 * - 处理批量操作成功消息
 * 
 * 参数：
 *   param_1 - 成功处理参数
 *   param_2 - 消息缓冲区指针
 *   param_3 - 消息格式参数
 *   param_4 - 成功数据指针
 * 
 * 返回值：
 *   undefined8* - 消息缓冲区指针
 */
undefined8 *
rendering_system_success_message_formatter(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)
{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_f8 [208];
  ulonglong uVar6;
  
  lVar2 = _DAT_180c96070;
  uVar7 = SUB81(param_4,0);
  uVar4 = 0;
  
  // 处理第一种成功消息类型
  if (_DAT_180c92514 - 1U < 5) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1d,param_3,uVar7,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置成功消息："Don't know how to multiply."
    *puVar1 = 0x746f6e2073656f44;
    puVar1[1] = 0x6e6f206b726f7720;
    puVar1[2] = 0x6c7069746c756d20;
    *(undefined4 *)(puVar1 + 3) = 0x72657961;
    *(undefined2 *)((longlong)puVar1 + 0x1c) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 0x1d;
  }
  // 处理第二种成功消息类型
  else if ((DAT_180c96098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,uVar7,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置成功消息："This is not missing system."
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(undefined4 *)(puVar1 + 3) = 0x2e6e6f;
    *(undefined4 *)(param_2 + 2) = 0x1b;
  }
  // 处理第三种成功消息类型
  else if (param_4[1] - *param_4 >> 5 == 0) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x2b,param_3,uVar7,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置成功消息："Please select the right image to execute."
    *puVar1 = 0x202c657361656c50;
    puVar1[1] = 0x697277206f736c61;
    puVar1[2] = 0x6120656874206574;
    puVar1[3] = 0x20646920746e6567;
    puVar1[4] = 0x756c637865206f74;
    *(undefined4 *)(puVar1 + 5) = 0x2e6564;
    *(undefined4 *)(param_2 + 2) = 0x2b;
  }
  // 处理批量操作成功消息
  else {
    iVar3 = atoi(*(undefined8 *)(*param_4 + 8));
    if (0 < *(int *)(lVar2 + 0x52ed94)) {
      uVar6 = uVar4;
      uVar9 = uVar4;
      do {
        if ((uVar4 != (longlong)iVar3) && ((int)uVar6 != *(int *)(lVar2 + 0x98d930))) {
          lVar8 = uVar9 + lVar2;
          FUN_1804a7000(auStack_f8,*(longlong *)(lVar8 + 0x30c0) + 0xc);
          FUN_18051d2d0(lVar8 + 0x30a0,auStack_f8,0,0xff);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar4 = uVar4 + 1;
        uVar9 = uVar9 + 0xa60;
      } while ((int)uVar5 < *(int *)(lVar2 + 0x52ed94));
    }
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0xe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置成功消息："A liked all!"
    *puVar1 = 0x6b2073746e656741;
    *(undefined4 *)(puVar1 + 1) = 0x656c6c69;
    *(undefined2 *)((longlong)puVar1 + 0xc) = 0x2164;
    *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
    *(undefined4 *)(param_2 + 2) = 0xe;
  }
  return param_2;
}

/**
 * 渲染系统信息消息格式化器 - 负责格式化信息消息
 * 
 * 功能说明：
 * - 格式化信息消息字符串
 * - 处理系统配置信息
 * - 生成描述性信息消息
 * 
 * 参数：
 *   param_1 - 信息处理参数
 *   param_2 - 消息缓冲区指针
 *   param_3 - 消息格式参数
 *   param_4 - 信息数据指针
 * 
 * 返回值：
 *   undefined8* - 消息缓冲区指针
 */
undefined8 *
rendering_system_info_message_formatter(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  
  // 处理系统配置信息消息
  if ((DAT_180c96098 == '\0') || (_DAT_180c96070 == 0)) {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x1b,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (undefined8 *)param_2[1];
    // 设置信息消息："This is not missing system."
    *puVar1 = 0x7369206572656854;
    puVar1[1] = 0x69746361206f6e20;
    puVar1[2] = 0x697373696d206576;
    *(undefined4 *)(puVar1 + 3) = 0x2e6e6f;
    *(undefined4 *)(param_2 + 2) = 0x1b;
  }
  // 处理成功配置信息消息
  else {
    FUN_1804f0ad0(_DAT_180c96070,0);
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x10,param_3,param_4,uVar2,uVar3);
    puVar1 = (undefined8 *)param_2[1];
    // 设置信息消息："Correctly processed!"
    *puVar1 = 0x2073657370726f43;
    puVar1[1] = 0x2164657261656c63;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined4 *)(param_2 + 2) = 0x10;
  }
  return param_2;
}

/**
 * 渲染系统线程管理器 - 负责管理渲染系统线程
 * 
 * 功能说明：
 * - 管理渲染系统线程池
 * - 处理线程同步
 * - 管理线程资源
 * - 执行线程清理
 * 
 * 参数：
 *   param_1 - 线程管理参数指针
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_thread_manager(undefined8 *param_1)
{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a30768;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  
  // 遍历线程池
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x2030);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(longlong *)(lVar6 + 0x28);
          do {
            *(longlong *)(lVar9 + 0x2038) = lVar8;
            *(undefined4 *)(lVar9 + 0x2030) = 1;
            plVar5 = (longlong *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x2030);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_180500318:
      plVar5 = (longlong *)param_1[0xc];
      lVar9 = *(longlong *)
               (*(longlong *)
                 (plVar5[3] +
                 (((uVar10 & 0xffffffffffffffe0) - **(longlong **)(plVar5[3] + plVar5[1] * 8) >> 5)
                  + plVar5[1] & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_180500318;
    FUN_1808fc8a8((ulonglong)((uint)uVar10 & 0x1f) * 0x100 + lVar9 + 0x38,0x30,4,FUN_18004a130,
                  uVar12);
  }
  
  // 处理剩余线程
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x2030);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(longlong *)(lVar6 + 0x28);
      do {
        *(longlong *)(lVar9 + 0x2038) = lVar8;
        *(undefined4 *)(lVar9 + 0x2030) = 1;
        plVar5 = (longlong *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x2030);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  
  // 清理线程资源
  if (param_1[0xc] != 0) {
    FUN_18064e900();
  }
  *param_1 = &UNK_180a30900;
  return;
}

/**
 * 渲染系统哈希表管理器 - 负责管理哈希表操作
 * 
 * 功能说明：
 * - 管理哈希表数据结构
 * - 处理哈希冲突
 * - 管理哈希表扩容
 * - 执行哈希表清理
 * 
 * 参数：
 *   param_1 - 哈希表管理参数指针
 * 
 * 返回值：
 *   undefined8* - 哈希表项指针
 */
undefined8 * rendering_system_hash_table_manager(longlong *param_1)
{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  
  // 计算线程ID哈希值
  uVar5 = GetCurrentThreadId();
  uVar14 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar13 = (ulonglong)(uVar14 >> 0x10 ^ uVar14);
  puVar7 = (ulonglong *)param_1[6];
  
  // 遍历哈希表
  for (puVar3 = puVar7; uVar6 = uVar13, puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[2])
  {
    while( true ) {
      uVar6 = uVar6 & *puVar3 - 1;
      uVar14 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      if (uVar14 == uVar5) {
        puVar15 = *(undefined8 **)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return puVar15;
        }
        do {
          uVar13 = uVar13 & *puVar7 - 1;
          if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
            LOCK();
            bVar17 = *puVar2 == 0;
            if (bVar17) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar17) {
              *(undefined8 **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
              return puVar15;
            }
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      if (uVar14 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  
  // 处理哈希表扩容
  LOCK();
  plVar1 = param_1 + 7;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar9 + 1;
  puVar15 = (undefined8 *)0x0;
  
  while( true ) {
    if (*puVar7 >> 1 <= uVar6) {
      LOCK();
      puVar2 = (uint *)(param_1 + 0x4b);
      uVar14 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar14 & 1) == 0) {
        puVar3 = (ulonglong *)param_1[6];
        puVar7 = puVar3;
        uVar12 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          do {
            uVar4 = uVar12;
            uVar12 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          puVar7 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (ulonglong *)0x0) {
            LOCK();
            param_1[7] = param_1[7] + -1;
            UNLOCK();
            *(undefined4 *)(param_1 + 0x4b) = 0;
            return (undefined8 *)0x0;
          }
          *puVar7 = uVar12;
          puVar7[1] = (ulonglong)(-(int)(puVar7 + 3) & 7) + (longlong)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined8 *)((longlong)puVar11 + puVar7[1] + 8) = 0;
            *(undefined4 *)((longlong)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (ulonglong)puVar3;
          param_1[6] = (longlong)puVar7;
        }
        *(undefined4 *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (ulonglong *)param_1[6];
  }
  
  // 查找可用槽位
  puVar11 = (undefined8 *)*param_1;
  while (puVar11 != (undefined8 *)0x0) {
    if ((*(char *)(puVar11 + 2) != '\0') && (*(char *)(puVar11 + 9) == '\0')) {
      bVar17 = true;
      LOCK();
      bVar16 = *(char *)(puVar11 + 2) == '\x01';
      if (bVar16) {
        *(char *)(puVar11 + 2) = '\0';
      }
      UNLOCK();
      if (bVar16) goto LAB_18050072b;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (undefined8 *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  
  // 创建新槽位
  bVar17 = false;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &UNK_180a30900;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(undefined1 *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &UNK_180a30768;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    FUN_18005f430(puVar8);
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    lVar9 = *param_1;
    do {
      puVar11 = (undefined8 *)(lVar9 + 8);
      if (lVar9 == 0) {
        puVar11 = puVar15;
      }
      puVar8[1] = puVar11;
      LOCK();
      lVar10 = *param_1;
      bVar16 = lVar9 == lVar10;
      if (bVar16) {
        *param_1 = (longlong)puVar8;
        lVar10 = lVar9;
      }
      UNLOCK();
      lVar9 = lVar10;
      puVar11 = puVar8;
    } while (!bVar16);
  }
LAB_18050072b:
  if (puVar11 == (undefined8 *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (undefined8 *)0x0;
  }
  if (bVar17) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
  }
  do {
    uVar13 = uVar13 & *puVar7 - 1;
    if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
      puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
      LOCK();
      bVar17 = *puVar2 == 0;
      if (bVar17) {
        *puVar2 = uVar5;
      }
      UNLOCK();
      if (bVar17) {
        *(undefined8 **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}

/**
 * 渲染系统内存分配器 - 负责内存分配和释放
 * 
 * 功能说明：
 * - 分配内存资源
 * - 释放内存资源
 * - 管理内存生命周期
 * 
 * 参数：
 *   param_1 - 内存指针
 *   param_2 - 释放标志
 * 
 * 返回值：
 *   undefined8 - 内存指针
 */
undefined8 rendering_system_memory_allocator(undefined8 param_1,ulonglong param_2)
{
  FUN_180500270();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}

/**
 * 渲染系统资源数组管理器 - 负责管理资源数组
 * 
 * 功能说明：
 * - 管理资源数组
 * - 处理数组扩容
 * - 清理资源数组
 * 
 * 参数：
 *   param_1 - 资源数组管理参数指针
 *   param_2 - 资源指针
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_resource_array_manager(longlong *param_1,undefined8 *param_2)
{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  lVar9 = ((longlong)puVar8 - (longlong)puVar5) / 0x18;
  puVar3 = (undefined8 *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_1805008eb;
  }
  puVar3 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x18,(char)param_1[3],puVar5,0xfffffffffffffffe);
  puVar8 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
LAB_1805008eb:
  puVar4 = puVar3;
  if (puVar5 != puVar8) {
    lVar7 = (longlong)puVar3 - (longlong)puVar5;
    puVar5 = puVar5 + 1;
    do {
      *puVar4 = puVar5[-1];
      puVar5[-1] = 0;
      *(undefined8 *)((longlong)puVar5 + lVar7) = *puVar5;
      *puVar5 = 0;
      *(undefined4 *)(lVar7 + 8 + (longlong)puVar5) = *(undefined4 *)(puVar5 + 1);
      *(undefined4 *)(lVar7 + 0xc + (longlong)puVar5) = *(undefined4 *)((longlong)puVar5 + 0xc);
      puVar4 = puVar4 + 3;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 3;
    } while (puVar1 != puVar8);
  }
  *puVar4 = *param_2;
  *param_2 = 0;
  puVar4[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  plVar2 = (longlong *)param_1[1];
  plVar6 = (longlong *)*param_1;
  if (plVar6 != plVar2) {
    do {
      if ((longlong *)plVar6[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[1] + 0x38))();
      }
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar2);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar4 + 3);
    param_1[2] = (longlong)(puVar3 + lVar9 * 3);
    return;
  }
  FUN_18064e900(plVar6);
}

/**
 * 渲染系统资源插入器 - 负责插入资源到数组
 * 
 * 功能说明：
 * - 插入资源到数组
 * - 处理数组扩容
 * - 管理资源插入
 * 
 * 参数：
 *   param_1 - 资源数组管理参数指针
 *   param_2 - 资源参数
 * 
 * 返回值：
 *   void - 无返回值
 */
void rendering_system_resource_inserter(longlong *param_1,undefined8 param_2)
{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  lVar9 = ((longlong)puVar8 - (longlong)puVar4) / 0x18;
  puVar3 = (undefined8 *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_180500a6b;
  }
  puVar3 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar9 * 0x18,(char)param_1[3],puVar4,0xfffffffffffffffe);
  puVar8 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
LAB_180500a6b:
  puVar6 = puVar3;
  if (puVar4 != puVar8) {
    lVar5 = (longlong)puVar3 - (longlong)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar6 = puVar4[-1];
      puVar4[-1] = 0;
      *(undefined8 *)((longlong)puVar4 + lVar5) = *puVar4;
      *puVar4 = 0;
      *(undefined4 *)(lVar5 + 8 + (longlong)puVar4) = *(undefined4 *)(puVar4 + 1);
      *(undefined4 *)(lVar5 + 0xc + (longlong)puVar4) = *(undefined4 *)((longlong)puVar4 + 0xc);
      puVar6 = puVar6 + 3;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
    } while (puVar1 != puVar8);
  }
  FUN_1804ffc70(puVar6,param_2);
  plVar2 = (longlong *)param_1[1];
  plVar7 = (longlong *)*param_1;
  if (plVar7 != plVar2) {
    do {
      if ((longlong *)plVar7[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar7[1] + 0x38))();
      }
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar2);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar6 + 3);
    param_1[2] = (longlong)(puVar3 + lVar9 * 3);
    return;
  }
  FUN_18064e900(plVar7);
}

/**
 * 渲染系统资源验证器 - 负责验证资源有效性
 * 
 * 功能说明：
 * - 验证资源有效性
 * - 处理资源查找
 * - 管理资源状态
 * 
 * 参数：
 *   param_1 - 验证参数
 *   param_2 - 资源指针
 * 
 * 返回值：
 *   bool - 验证结果，true表示有效，false表示无效
 */
bool rendering_system_resource_validator(longlong param_1,longlong *param_2)
{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(*param_2 + 0x18);
  bVar4 = lVar1 != 0;
  *param_2 = lVar1;
  if (lVar1 == 0) {
    uVar3 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      if ((int)uVar3 == (int)param_2[3]) {
        if (*(int *)((longlong)param_2 + 0xc) == *(int *)((longlong)param_2 + 0x1c)) {
          return bVar4;
        }
        *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
        iVar2 = (int)param_2[2];
      }
      else {
        iVar2 = (int)uVar3 + 1;
      }
      *(int *)(param_2 + 1) = iVar2;
      uVar3 = param_2[1];
      lVar1 = *(longlong *)
               ((longlong)((int)(uVar3 >> 0x20) * *(int *)(param_1 + 8) + (int)uVar3) * 9 +
               *(longlong *)(param_1 + 0x18));
      bVar4 = lVar1 != 0;
      *param_2 = lVar1;
    } while (lVar1 == 0);
  }
  return bVar4;
}

// ============================================================================
// 模块说明
// ============================================================================

/*
 * 技术说明：
 * 
 * 本模块实现了渲染系统高级资源管理和错误处理功能，包含7个核心函数：
 * 
 * 1. rendering_system_resource_cleaner (FUN_18049f820)
 *    - 负责清理渲染系统资源
 *    - 释放内存资源
 *    - 重置系统状态
 *    - 处理资源生命周期
 * 
 * 2. rendering_system_advanced_resource_cleaner (FUN_18049f876)
 *    - 负责高级资源清理操作
 *    - 处理复杂资源结构
 *    - 管理资源依赖关系
 *    - 批量清理资源
 * 
 * 3. rendering_system_simple_resource_cleaner (FUN_18049f905)
 *    - 负责简化资源清理操作
 *    - 处理基础资源结构
 *    - 快速清理操作
 * 
 * 4. rendering_system_message_generator (FUN_18049f920)
 *    - 负责生成系统消息
 *    - 处理消息字符串
 *    - 管理消息格式
 * 
 * 5. rendering_system_error_message_formatter (FUN_1804a0f10)
 *    - 负责格式化错误消息
 *    - 处理不同类型的错误
 *    - 生成描述性错误信息
 *    - 处理浮点数错误
 * 
 * 6. rendering_system_warning_message_formatter (FUN_1804a1150)
 *    - 负责格式化警告消息
 *    - 处理不同类型的警告
 *    - 生成描述性警告信息
 *    - 处理整数参数警告
 * 
 * 7. rendering_system_success_message_formatter (FUN_1804a1430)
 *    - 负责格式化成功消息
 *    - 处理不同类型的成功消息
 *    - 生成描述性成功信息
 *    - 处理批量操作成功消息
 * 
 * 8. rendering_system_info_message_formatter (FUN_1804a16f0)
 *    - 负责格式化信息消息
 *    - 处理系统配置信息
 *    - 生成描述性信息消息
 * 
 * 9. rendering_system_thread_manager (FUN_180500270)
 *    - 负责管理渲染系统线程
 *    - 处理线程同步
 *    - 管理线程资源
 *    - 执行线程清理
 * 
 * 10. rendering_system_hash_table_manager (FUN_180500420)
 *     - 负责管理哈希表操作
 *     - 处理哈希冲突
 *     - 管理哈希表扩容
 *     - 执行哈希表清理
 * 
 * 11. rendering_system_memory_allocator (FUN_1805007d0)
 *     - 负责内存分配和释放
 *     - 分配内存资源
 *     - 释放内存资源
 *     - 管理内存生命周期
 * 
 * 12. rendering_system_resource_array_manager (FUN_180500860)
 *     - 负责管理资源数组
 *     - 处理数组扩容
 *     - 清理资源数组
 * 
 * 13. rendering_system_resource_inserter (FUN_1805009e0)
 *     - 负责插入资源到数组
 *     - 处理数组扩容
 *     - 管理资源插入
 * 
 * 14. rendering_system_resource_validator (FUN_180500b50)
 *     - 负责验证资源有效性
 *     - 处理资源查找
 *     - 管理资源状态
 * 
 * 主要技术特点：
 * - 支持多种资源管理策略
 * - 实现线程安全的资源操作
 * - 提供哈希表数据结构管理
 * - 支持动态扩容和收缩
 * - 实现资源生命周期管理
 * - 提供多种消息格式化功能
 * - 支持错误处理和警告机制
 * - 实现内存管理和分配
 * 
 * 应用场景：
 * - 渲染系统资源管理
 * - 线程池管理
 * - 哈希表操作
 * - 内存分配和释放
 * - 错误处理和消息格式化
 * - 资源验证和状态管理
 */