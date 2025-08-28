#include "TaleWorlds.Native.Split.h"

// 01_initialization_part034.c - 4 个函数

// 全局变量和常量定义
#define DEFAULT_PATH_SEPARATOR "\\"
#define EMPTY_STRING ""
#define NULL_POINTER 0
#define MAX_STRING_LENGTH 0xfff
#define MEMORY_BLOCK_SIZE 0x20
#define STRING_BUFFER_SIZE 0x10
#define LOG_FILE_HEADER "exe"
#define LOG_FILE_PATH "..\\Crash\\log.txt"
#define LOG_FILE_EXTENSION ".txt"
#define LOG_FILE_NAME "log.txt"
#define CRASH_REPORT_FOLDER "Crash\\"
#define MAX_PATH_LENGTH 0x80

// 全局数据引用
extern longlong *_DAT_180c8f008;      // 日志系统全局状态
extern longlong *_DAT_180c8a9c0;      // 字符串处理系统
extern longlong _DAT_180c8ed18;       // 内存分配器
extern longlong _DAT_180c86870;       // 引擎核心数据
extern longlong _DAT_180c8ed48;       // 性能计数器基准
extern double _DAT_180c8ed50;         // 性能计数器频率
extern longlong _DAT_180c8ed58;       // 性能计数器缓存
extern longlong _DAT_180c8ed60;       // 文件句柄计数器
extern longlong _DAT_180c8ed08;       // 引擎管理器
extern longlong _DAT_180c86920;       // 路径配置
extern longlong _DAT_180c868b0;       // 系统配置
extern longlong _DAT_180c86928;       // 启动参数配置
extern longlong _DAT_180c82868;       // 默认配置数据

extern char DAT_18098bc73;            // 空字符串常量
extern char UNK_18098bcb0;            // 字符串常量
extern char UNK_180a3c3e0;            // 空指针常量
extern char UNK_1809fe900;            // 格式字符串常量
extern char UNK_1809fe80c;            // 格式字符串常量
extern char UNK_1809fe910;            // 格式字符串常量
extern char UNK_1809fe928;            // 格式字符串常量
extern char UNK_1809fd0a0;            // 格式字符串常量
extern char UNK_1809fe940;            // 格式字符串常量
extern char UNK_18098ba10;            // 路径分隔符
extern char UNK_18098ba80;            // 格式字符串常量
extern char UNK_18098ba98;            // 格式字符串常量
extern char UNK_18098baa0;            // 格式字符串常量
extern char UNK_18098ba28;            // 格式字符串常量
extern char UNK_18098ba40;            // 格式字符串常量
extern char UNK_18098ba70;            // 格式字符串常量
extern char UNK_18098ba60;            // 格式字符串常量
extern char UNK_1809fe8f8;            // 格式字符串常量
extern char UNK_1809fe950;            // 格式字符串常量
extern char UNK_1809fe968;            // 格式字符串常量
extern char UNK_1809fe978;            // 格式字符串常量
extern char UNK_1809fe998;            // 格式字符串常量
extern char UNK_1809fe988;            // 格式字符串常量
extern char UNK_18098ba50;            // 格式字符串常量
extern char UNK_1809fdc18;            // 格式字符串常量
extern char DAT_1809fdf28;            // 格式字符串常量
extern char UNK_1809fe9a8;            // 格式字符串常量
extern char UNK_1809fe9b8;            // 格式字符串常量
extern char UNK_1809fe9c8;            // 格式字符串常量
extern char UNK_1809fe7f8;            // 格式字符串常量
extern char DAT_1809fc7d8;            // 格式字符串常量
extern char DAT_1809fcfc0;            // 格式字符串常量

extern ulonglong _DAT_180bf00a8;      // 栈保护常量

/**
 * 字符串处理和内存管理函数
 * 
 * 该函数处理字符串操作和内存分配，包括：
 * - 从参数中提取字符串
 * - 执行字符串拼接和格式化
 * - 管理内存分配和释放
 * - 将结果存储到目标容器中
 * 
 * @param param_1 目标容器指针数组
 * @param param_2 源字符串参数1
 * @param param_3 源字符串参数2
 */
void ProcessStringAndMemoryManagement(longlong *param_1, longlong param_2, longlong param_3)
{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_138 [32];
  longlong lStack_118;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 *puStack_b8;
  ulonglong uStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  longlong lStack_78;
  ulonglong uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  // 栈保护初始化
  uStack_d8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_e8 = 0;
  
  // 初始化内存管理
  FUN_180057110();
  
  // 获取第一个字符串
  puVar6 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar6 = *(undefined **)(param_2 + 8);
  }
  
  // 初始化字符串缓冲区1
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0xf;
  uStack_c8 = 0;
  lVar10 = -1;
  lVar12 = -1;
  
  // 计算第一个字符串长度
  do {
    lVar12 = lVar12 + 1;
  } while (puVar6[lVar12] != '\0');
  FUN_1800671b0(&uStack_c8);
  
  // 获取第二个字符串
  puVar6 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
    puVar6 = *(undefined **)(param_3 + 8);
  }
  
  // 初始化字符串缓冲区2
  lStack_78 = 0;
  uStack_70 = 0xf;
  uStack_88 = 0;
  
  // 计算第二个字符串长度
  do {
    lVar10 = lVar10 + 1;
  } while (puVar6[lVar10] != '\0');
  FUN_1800671b0(&uStack_88, puVar6, lVar10);
  
  // 执行字符串处理
  lVar12 = lStack_78;
  uVar1 = uStack_a8;
  uStack_98 = 0;
  uStack_90 = 0xf;
  uStack_a8 = uStack_a8 & 0xffffff00;
  lVar10 = CONCAT71(uStack_87, uStack_88);
  uVar9 = CONCAT44(uStack_a4, uVar1) & 0xffffffffffffff00;
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (undefined1 *)CONCAT71(uStack_c7, uStack_c8);
  }
  
  // 分配内存并处理字符串
  lStack_118 = lStack_78;
  puVar3 = (undefined8 *)FUN_180066f90(puVar5, puStack_b8);
  puStack_e0 = puVar3;
  
  // 检查内存分配是否成功
  if (puVar3 == (undefined8 *)0xffffffffffffffff) {
    // 内存分配失败，清理资源
    if (0xf < uStack_90) {
      uVar8 = uStack_90 + 1;
      uVar13 = uVar9;
      if (0xfff < uVar8) {
        uVar8 = uStack_90 + 0x28;
        uVar13 = *(ulonglong *)(uVar9 - 8);
        if (0x1f < (uVar9 - uVar13) - 8) {
          // 内存分配错误处理
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(uVar13, uVar8);
    }
    
    // 清理第二个字符串缓冲区
    uStack_98 = 0;
    uStack_90 = 0xf;
    uStack_a8 = uStack_a8 & 0xffffff00;
    if (0xf < uStack_70) {
      uVar9 = uStack_70 + 1;
      lVar12 = lVar10;
      if (0xfff < uVar9) {
        uVar9 = uStack_70 + 0x28;
        lVar12 = *(longlong *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar12) - 8U) {
          // 内存分配错误处理
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar12, uVar9);
    }
    
    // 清理第一个字符串缓冲区
    lStack_78 = 0;
    uStack_70 = 0xf;
    uStack_88 = 0;
    if (0xf < uStack_b0) {
      uVar9 = uStack_b0 + 1;
      lVar12 = CONCAT71(uStack_c7, uStack_c8);
      lVar10 = lVar12;
      if (0xfff < uVar9) {
        uVar9 = uStack_b0 + 0x28;
        lVar10 = *(longlong *)(lVar12 + -8);
        if (0x1f < (lVar12 - lVar10) - 8U) {
          // 内存分配错误处理
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar10, uVar9);
    }
    
    // 释放资源并退出
    puStack_b8 = (undefined8 *)0x0;
    uStack_b0 = 0xf;
    uStack_c8 = 0;
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_138);
  }
  
  // 处理字符串拼接
  uStack_58 = 0;
  uStack_50 = 0xf;
  uStack_68 = uStack_68 & 0xffffff00;
  puVar4 = puVar3;
  if (puStack_b8 < puVar3) {
    puVar4 = puStack_b8;
  }
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (undefined1 *)CONCAT71(uStack_c7, uStack_c8);
  }
  FUN_1800671b0(&uStack_68, puVar5, puVar4);
  
  // 更新字符串状态
  uStack_e8 = 1;
  FUN_180067070(&uStack_a8);
  uVar9 = uStack_58;
  uVar1 = uStack_68;
  uStack_a8 = uStack_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  uStack_90 = uStack_50;
  uStack_e8 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  uStack_68 = uStack_68 & 0xffffff00;
  uStack_98 = uVar9;
  
  // 如果有结果，则存储到目标容器
  if (uVar9 == 0) goto LAB_180065009;
  lVar10 = 0;
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  puStack_100 = (undefined1 *)0x0;
  uStack_f8 = 0;
  uStack_98._0_4_ = (int)uVar9;
  iVar2 = (int)uStack_98;
  uStack_98 = uVar9;
  FUN_1806277c0(&puStack_108, uVar9 & 0xffffffff);
  
  // 复制字符串数据
  if (iVar2 != 0) {
    puVar7 = &uStack_a8;
    if (0xf < uStack_90) {
      puVar7 = (uint *)CONCAT44(uStack_64, uVar1);
    }
    memcpy(puStack_100, puVar7, uVar9 & 0xffffffff);
  }
  
  // 清理临时字符串
  uStack_f8 = 0;
  if (puStack_100 != (undefined1 *)0x0) {
    *puStack_100 = 0;
  }
  
  // 将结果存储到目标容器
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    // 容器有空间，直接存储
    param_1[1] = (longlong)(puVar4 + 4);
    *puVar4 = &UNK_18098bcb0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *puVar4 = &UNK_180a3c3e0;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[1] = puStack_100;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_f0._4_4_;
    *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_f0;
    uStack_f8 = 0;
    puStack_100 = (undefined1 *)0x0;
    uStack_f0 = 0;
    puStack_e0 = puVar4;
  }
  else {
    // 容器空间不足，需要扩展
    lVar12 = *param_1;
    lVar11 = (longlong)puVar4 - lVar12 >> 5;
    if (lVar11 == 0) {
      lVar11 = 1;
LAB_180064eed:
      // 扩展容器
      lVar10 = FUN_18062b420(_DAT_180c8ed18, lVar11 << 5, (char)param_1[3]);
      puVar4 = (undefined8 *)param_1[1];
      lVar12 = *param_1;
    }
    else {
      lVar11 = lVar11 * 2;
      if (lVar11 != 0) goto LAB_180064eed;
    }
    
    // 创建新的容器条目
    puStack_d0 = (undefined8 *)FUN_180059780(lVar12, puVar4, lVar10);
    *puStack_d0 = &UNK_18098bcb0;
    puStack_d0[1] = 0;
    *(undefined4 *)(puStack_d0 + 2) = 0;
    *puStack_d0 = &UNK_180a3c3e0;
    puStack_d0[3] = 0;
    puStack_d0[1] = 0;
    *(undefined4 *)(puStack_d0 + 2) = 0;
    *(undefined4 *)(puStack_d0 + 2) = uStack_f8;
    puStack_d0[1] = puStack_100;
    *(undefined4 *)((longlong)puStack_d0 + 0x1c) = uStack_f0._4_4_;
    *(undefined4 *)(puStack_d0 + 3) = (undefined4)uStack_f0;
    uStack_f8 = 0;
    puStack_100 = (undefined1 *)0x0;
    uStack_f0 = 0;
    puVar14 = puStack_d0 + 4;
    puVar3 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)*param_1;
    
    // 清理旧容器数据
    if (puVar4 != puVar3) {
      do {
        (**(code **)*puVar4)(puVar4, 0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar3);
      puVar4 = (undefined8 *)*param_1;
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_18064e900(puVar4);
    }
    
    // 更新容器指针
    *param_1 = lVar10;
    param_1[1] = (longlong)puVar14;
    param_1[2] = lVar11 * 0x20 + lVar10;
    lVar12 = lStack_78;
    puVar3 = puStack_e0;
  }
  
  // 清理临时资源
  puStack_108 = &UNK_180a3c3e0;
  if (puStack_100 != (undefined1 *)0x0) {
    FUN_18064e900();
  }
  puStack_100 = (undefined1 *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  puStack_108 = &UNK_18098bcb0;
  
LAB_180065009:
  // 清理字符串缓冲区
  puVar4 = (undefined8 *)(lVar12 + (longlong)puVar3);
  if (puStack_b8 < (undefined8 *)(lVar12 + (longlong)puVar3)) {
    puVar4 = puStack_b8;
  }
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (undefined1 *)CONCAT71(uStack_c7, uStack_c8);
  }
  puStack_b8 = (undefined8 *)((longlong)puStack_b8 - (longlong)puVar4);
  memmove(puVar5, puVar5 + (longlong)puVar4, (longlong)puStack_b8 + 1);
}

/**
 * 复杂的初始化和日志记录函数
 * 
 * 该函数执行复杂的初始化操作，包括：
 * - 系统信息收集和日志记录
 * - 内存使用情况统计
 * - 性能计数器初始化
 * - 文件系统操作
 * - 错误处理和报告
 * 
 * @param param_1 初始化参数
 */
void PerformComplexInitializationAndLogging(undefined8 param_1)
{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  int iVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined1 auStack_368 [32];
  undefined *puStack_348;
  undefined2 auStack_338 [2];
  undefined2 auStack_334 [2];
  undefined *puStack_330;
  longlong lStack_328;
  int iStack_320;
  ulonglong uStack_318;
  undefined4 uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined4 uStack_2f8;
  ulonglong uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined4 uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  ulonglong uStack_2a8;
  undefined *puStack_2a0;
  char *pcStack_298;
  int iStack_290;
  undefined4 uStack_288;
  undefined8 uStack_280;
  longlong lStack_278;
  longlong lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined *puStack_240;
  longlong lStack_238;
  undefined4 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined4 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined4 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [16];
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined auStack_b0 [40];
  undefined4 auStack_88 [14];
  ulonglong uStack_50;
  ulonglong uStack_38;
  
  // 栈保护初始化
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  uStack_310 = 0;
  
  // 解析初始化参数
  FUN_180627e10(param_1, &puStack_180, &UNK_1809fe900);
  
  // 初始化日志文件
  uStack_280 = 0;
  lStack_278 = 0;
  puVar16 = &DAT_18098bc73;
  if (puStack_178 != (undefined *)0x0) {
    puVar16 = puStack_178;
  }
  uVar20 = FUN_18062dee0(&uStack_280, puVar16, &UNK_1809fe80c);
  
  // 初始化日志条目容器
  puStack_330 = &UNK_180a3c3e0;
  uStack_318 = 0;
  lStack_328 = 0;
  iStack_320 = 0;
  FUN_180052020(uVar20, &puStack_200);
  
  // 检查日志系统状态
  if ((_DAT_180c8f008 == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar7 == '\0')) {
    puVar16 = &UNK_1809fe910;
  }
  else {
    // 获取当前模块名称
    lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x30))();
    puVar16 = &DAT_18098bc73;
    if (*(undefined **)(lVar9 + 8) != (undefined *)0x0) {
      puVar16 = *(undefined **)(lVar9 + 8);
    }
  }
  
  // 添加模块名称到日志
  FUN_180627910(&puStack_1c0, puVar16);
  
  // 检查日志系统状态并获取版本信息
  if ((_DAT_180c8f008 == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar7 == '\0')) {
    puVar16 = &UNK_1809fe928;
  }
  else {
    // 获取版本信息
    lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x20))();
    puVar16 = &DAT_18098bc73;
    if (*(undefined **)(lVar9 + 8) != (undefined *)0x0) {
      puVar16 = *(undefined **)(lVar9 + 8);
    }
  }
  FUN_180627910(&puStack_1e0, puVar16);
  
  // 初始化路径缓冲区
  puStack_c8 = &UNK_18098bc80;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  uStack_310 = 4;
  FUN_18004b860(&puStack_c8, &UNK_1809fd0a0, 0x130a7);
  
  // 构建日志文件路径
  puStack_348 = &DAT_18098bc73;
  if (puStack_c0 != (undefined *)0x0) {
    puStack_348 = puStack_c0;
  }
  
  // 添加系统信息到日志
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba80);
  uStack_310 = 0;
  puStack_c8 = &UNK_18098bcb0;
  puStack_348 = &UNK_18098ba98;
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098baa0);
  puStack_348 = &DAT_18098ba28;
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba40);
  puStack_348 = &DAT_18098bc73;
  if (puStack_1b8 != (undefined *)0x0) {
    puStack_348 = puStack_1b8;
  }
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba70);
  puStack_348 = &DAT_18098bc73;
  if (puStack_1d8 != (undefined *)0x0) {
    puStack_348 = puStack_1d8;
  }
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba60);
  
  // 清理临时字符串
  puStack_1e0 = &UNK_180a3c3e0;
  if (puStack_1d8 != (undefined *)0x0) {
    FUN_18064e900();
  }
  puStack_1d8 = (undefined *)0x0;
  uStack_1c8 = 0;
  puStack_1e0 = &UNK_18098bcb0;
  puStack_1c0 = &UNK_180a3c3e0;
  if (puStack_1b8 != (undefined *)0x0) {
    FUN_18064e900();
  }
  puStack_1b8 = (undefined *)0x0;
  uStack_1a8 = 0;
  puStack_1c0 = &UNK_18098bcb0;
  
  // 初始化性能统计变量
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  puStack_2e8 = &UNK_180a3c3e0;
  uStack_2d0 = 0;
  puStack_2e0 = (undefined *)0x0;
  uStack_2d8 = 0;
  puStack_308 = &UNK_180a3c3e0;
  uStack_2f0 = 0;
  puStack_300 = (undefined *)0x0;
  uStack_2f8 = 0;
  
  // 获取系统内存信息
  uVar10 = FUN_180623ce0();
  FUN_180628040(&puStack_2e8, &UNK_1809fe8f8, uVar10 / 0x100000 & 0xffffffff);
  auStack_88[0] = 0x48;
  uVar11 = GetCurrentProcess();
  iVar8 = K32GetProcessMemoryInfo(uVar11, auStack_88, 0x48);
  uVar10 = 0;
  if (iVar8 != 0) {
    uVar10 = uStack_50;
  }
  FUN_180628040(&puStack_308, &UNK_1809fe8f8, uVar10 / 0x100000 & 0xffffffff);
  
  // 添加系统信息到日志
  puStack_348 = &DAT_18098bc73;
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_1809fe950);
  puStack_348 = &DAT_18098bc73;
  if (puStack_2e0 != (undefined *)0x0) {
    puStack_348 = puStack_2e0;
  }
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_1809fe968);
  puStack_348 = &DAT_18098bc73;
  if (puStack_300 != (undefined *)0x0) {
    puStack_348 = puStack_300;
  }
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_1809fe978);
  
  // 获取性能计数器信息
  lVar9 = _DAT_180c86870;
  puStack_308 = &UNK_180a3c3e0;
  if (puStack_300 != (undefined *)0x0) {
    FUN_18064e900();
  }
  puStack_300 = (undefined *)0x0;
  uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
  puStack_308 = &UNK_18098bcb0;
  puStack_2e8 = &UNK_180a3c3e0;
  if (puStack_2e0 != (undefined *)0x0) {
    FUN_18064e900();
  }
  puStack_2e0 = (undefined *)0x0;
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  puStack_2e8 = &UNK_18098bcb0;
  uStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  
  // 计算启动时间
  lVar14 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStack_268);
    lVar14 = lStack_268;
  }
  puStack_348 = (undefined *)
                ((double)(lVar14 - _DAT_180c8ed48) * _DAT_180c8ed50 - *(double *)(lVar9 + 0x210));
  FUN_180628040(&puStack_330, &UNK_1809fe998, &UNK_18098ba10, &UNK_1809fe988);
  
  // 添加配置信息到日志
  puStack_348 = &DAT_18098bc73;
  if (puStack_1f8 != (undefined *)0x0) {
    puStack_348 = puStack_1f8;
  }
  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba50);
  
  // 初始化日志条目容器
  puStack_220 = (undefined8 *)0x0;
  puStack_218 = (undefined8 *)0x0;
  uStack_210 = 0;
  uStack_208 = 3;
  puStack_160 = (undefined8 *)0x0;
  puStack_158 = (undefined8 *)0x0;
  uStack_150 = 0;
  uStack_148 = 3;
  puStack_f0 = &UNK_1809fdc18;
  puStack_e8 = auStack_d8;
  auStack_d8[0] = 0;
  uStack_e0 = 9;
  strcpy_s(auStack_d8, 0x10, &UNK_1809fe9a8);
  
  // 处理日志条目
  ProcessStringAndMemoryManagement(&puStack_160, &puStack_200, &puStack_f0);
  puVar18 = puStack_158;
  puVar19 = puStack_160;
  
  // 处理多个日志条目
  if (1 < (ulonglong)((longlong)puStack_158 - (longlong)puStack_160 >> 5)) {
    puStack_118 = &UNK_1809fdc18;
    puStack_110 = auStack_100;
    auStack_100[0] = 0;
    uStack_108 = 1;
    strcpy_s(auStack_100, 0x10, &DAT_1809fdf28);
    ProcessStringAndMemoryManagement(&puStack_220, puVar19 + 4, &puStack_118);
    puStack_118 = &UNK_18098bcb0;
  }
  
  // 清理日志条目
  puStack_f0 = &UNK_18098bcb0;
  puVar4 = puStack_220;
  for (puVar17 = puVar19; puStack_220 = puVar4, puVar17 != puVar18; puVar17 = puVar17 + 4) {
    (**(code **)*puVar17)(puVar17, 0);
    puVar4 = puStack_220;
  }
  if (puVar19 != (undefined8 *)0x0) {
    FUN_18064e900(puVar19);
  }
  
  // 处理剩余的日志条目
  uVar10 = (longlong)puStack_218 - (longlong)puVar4 >> 5;
  if (uVar10 != 0) {
    // 检查日志系统状态
    if ((_DAT_180c8f008 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar7 == '\0')) {
      puVar16 = &UNK_1809fe9b8;
    }
    else {
      // 获取进程ID
      lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x28))();
      puVar16 = &DAT_18098bc73;
      if (*(undefined **)(lVar9 + 8) != (undefined *)0x0) {
        puVar16 = *(undefined **)(lVar9 + 8);
      }
    }
    FUN_180627910(&puStack_240, puVar16);
    
    // 初始化错误处理容器
    puStack_260 = (undefined8 *)0x0;
    puStack_258 = (undefined8 *)0x0;
    uStack_250 = 0;
    uStack_248 = 3;
    auStack_338[0] = 10;
    if (lStack_238 != 0) {
      FUN_180057980(&puStack_240, &puStack_260, auStack_338);
    }
    
    // 处理错误条目
    uVar12 = (longlong)puStack_258 - (longlong)puStack_260 >> 5;
    puVar19 = puStack_260;
    puVar18 = puStack_260;
    puVar17 = puStack_258;
    if ((int)uVar12 != 0) {
      uStack_2c8 = uVar12 & 0xffffffff;
      do {
        puStack_140 = (undefined8 *)0x0;
        puStack_138 = (undefined8 *)0x0;
        uStack_130 = 0;
        uStack_128 = 3;
        auStack_334[0] = 0x23;
        if (puVar19[1] != 0) {
          FUN_180057980(puVar19, &puStack_140, auStack_334);
        }
        
        // 处理错误信息
        puVar5 = puStack_138;
        puVar17 = puStack_140;
        puVar18 = puStack_140;
        if (((longlong)puStack_138 - (longlong)puStack_140 & 0xffffffffffffffe0U) == 0x40) {
          FUN_180627ae0(&puStack_2a0, puStack_140);
          if (pcStack_298 != (char *)0x0) {
            // 清理字符串中的空白字符
            iStack_290 = 0;
            lVar14 = 0;
            lVar9 = 0;
            cVar7 = *pcStack_298;
            while (cVar7 != '\0') {
              if (' ' < pcStack_298[lVar9]) {
                if (lVar14 != lVar9) {
                  pcStack_298[lVar14] = pcStack_298[lVar9];
                }
                iStack_290 = iStack_290 + 1;
                lVar14 = lVar14 + 1;
              }
              lVar9 = lVar9 + 1;
              cVar7 = pcStack_298[lVar9];
            }
            pcStack_298[lVar14] = '\0';
          }
          
          // 匹配错误信息
          iVar8 = 0;
          if (uVar10 != 0) {
            puVar18 = puVar4 + 1;
            do {
              iVar2 = *(int *)(puVar18 + 1);
              iVar15 = iStack_290;
              if (iVar2 == iStack_290) {
                if (iVar2 != 0) {
                  pbVar13 = (byte *)*puVar18;
                  lVar9 = (longlong)pcStack_298 - (longlong)pbVar13;
                  do {
                    pbVar1 = pbVar13 + lVar9;
                    iVar15 = (uint)*pbVar13 - (uint)*pbVar1;
                    if (iVar15 != 0) break;
                    pbVar13 = pbVar13 + 1;
                  } while (*pbVar1 != 0);
                }
LAB_180065a3e:
                if (iVar15 == 0) {
                  // 找到匹配的错误信息
                  puStack_348 = &DAT_18098bc73;
                  if ((undefined *)puVar17[5] != (undefined *)0x0) {
                    puStack_348 = (undefined *)puVar17[5];
                  }
                  puVar16 = &DAT_18098bc73;
                  if ((undefined *)puVar17[1] != (undefined *)0x0) {
                    puVar16 = (undefined *)puVar17[1];
                  }
                  FUN_180628040(&puStack_330, &UNK_1809fe940, &UNK_1809fe9c8, puVar16);
                  break;
                }
              }
              else if (iVar2 == 0) goto LAB_180065a3e;
              iVar8 = iVar8 + 1;
              puVar18 = puVar18 + 4;
            } while ((ulonglong)(longlong)iVar8 < uVar10);
          }
          
          // 清理临时字符串
          puStack_2a0 = &UNK_180a3c3e0;
          if (pcStack_298 != (char *)0x0) {
            FUN_18064e900();
          }
          pcStack_298 = (char *)0x0;
          uStack_288 = 0;
          puStack_2a0 = &UNK_18098bcb0;
          for (puVar18 = puVar17; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18, 0);
          }
        }
        else {
          for (; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18, 0);
          }
        }
        if (puVar17 != (undefined8 *)0x0) {
          FUN_18064e900(puVar17);
        }
        puVar19 = puVar19 + 4;
        uStack_2c8 = uStack_2c8 - 1;
      } while (uStack_2c8 != 0);
      uStack_2c8 = 0;
      puVar19 = puStack_260;
      puVar18 = puStack_260;
      puVar17 = puStack_258;
    }
    
    // 清理错误处理容器
    for (; puVar6 = puStack_258, puVar5 = puStack_260, puVar19 != puStack_258; puVar19 = puVar19 + 4) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
      (**(code **)*puVar19)(puVar19, 0);
      puVar18 = puStack_260;
      puVar17 = puStack_258;
      puStack_258 = puVar6;
      puStack_260 = puVar5;
    }
    if (puStack_260 != (undefined8 *)0x0) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
      FUN_18064e900(puVar5);
    }
    puStack_240 = &UNK_180a3c3e0;
    if (lStack_238 != 0) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
      FUN_18064e900();
    }
    lStack_238 = 0;
    uStack_228 = 0;
    puStack_240 = &UNK_18098bcb0;
    puStack_260 = puVar18;
    puStack_258 = puVar17;
  }
  
  // 检查是否需要显示启动信息
  if ((_DAT_180c8a9c0 == 0) || (*(int *)(_DAT_180c86870 + 0x340) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  
  // 如果需要显示启动信息
  if (((_DAT_180c86870 != 0) && (*(int *)(_DAT_180c86870 + 0x340) == 1)) && (bVar3)) {
    lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x18))();
    puVar16 = &DAT_18098bc73;
    if (*(undefined **)(lVar9 + 8) != (undefined *)0x0) {
      puVar16 = *(undefined **)(lVar9 + 8);
    }
    FUN_180627910(&puStack_1a0, puVar16);
    puVar16 = &DAT_18098bc73;
    if (puStack_198 != (undefined *)0x0) {
      puVar16 = puStack_198;
    }
    FUN_180628040(&puStack_330, &UNK_1809fe7f8, puVar16);
    puStack_1a0 = &UNK_180a3c3e0;
    if (puStack_198 != (undefined *)0x0) {
      FUN_18064e900();
    }
    puStack_198 = (undefined *)0x0;
    uStack_188 = 0;
    puStack_1a0 = &UNK_18098bcb0;
  }
  
  // 写入日志文件
  lVar9 = lStack_278;
  fwrite(lStack_328, 1, (longlong)iStack_320, lStack_278);
  puVar19 = puStack_218;
  puVar18 = puVar4;
  if (lVar9 != 0) {
    fclose(lVar9);
    lStack_278 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar9 = 0;
    puVar4 = puStack_220;
    puVar19 = puStack_218;
    puVar18 = puStack_220;
  }
  
  // 清理资源
  for (; puVar17 = puStack_218, puVar4 != puStack_218; puVar4 = puVar4 + 4) {
    puStack_218 = puVar19;
    (**(code **)*puVar4)(puVar4, 0);
    puVar19 = puStack_218;
    puStack_218 = puVar17;
  }
  if (puVar18 != (undefined8 *)0x0) {
    puStack_218 = puVar19;
    FUN_18064e900(puVar18);
  }
  
  // 清理日志条目容器
  puStack_200 = &UNK_180a3c3e0;
  if (puStack_1f8 != (undefined *)0x0) {
    puStack_218 = puVar19;
    FUN_18064e900();
  }
  puStack_1f8 = (undefined *)0x0;
  uStack_1e8 = 0;
  puStack_200 = &UNK_18098bcb0;
  puStack_330 = &UNK_180a3c3e0;
  if (lStack_328 == 0) {
    lStack_328 = 0;
    uStack_318 = uStack_318 & 0xffffffff00000000;
    puStack_330 = &UNK_18098bcb0;
    puStack_218 = puVar19;
    if (lVar9 != 0) {
      fclose(lVar9);
      lStack_278 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    puStack_180 = &UNK_180a3c3e0;
    if (puStack_178 == (undefined *)0x0) {
      puStack_178 = (undefined *)0x0;
      uStack_168 = 0;
      puStack_180 = &UNK_18098bcb0;
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_368);
    }
    FUN_18064e900();
  }
  puStack_218 = puVar19;
  FUN_18064e900();
}

/**
 * 简单的初始化函数
 * 
 * 该函数执行基本的初始化操作，包括：
 * - 初始化日志文件路径
 * - 设置默认路径和文件名
 * - 准备日志记录环境
 */
void PerformSimpleInitialization(void)
{
  undefined1 auStack_2c8 [104];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined1 auStack_228 [512];
  ulonglong uStack_28;
  
  // 栈保护初始化
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_2c8;
  
  // 设置日志文件头标识
  uStack_230 = 0x22657865;  // "exe"
  
  // 设置日志文件路径组件
  uStack_260 = 0x736172435c2e2e22;  // "..\\Crash"
  uStack_258 = 0x6564616f6c705568;  // "hPloade"
  uStack_22c = 0;
  
  // 设置文件扩展名和路径
  uStack_240 = 0x616f6c70;  // "pola"
  uStack_23c = 0x2e726564;  // ".der"
  uStack_238 = 0x6c627550;  // "Ulbl"
  uStack_234 = 0x2e687369;  // ".ish"
  uStack_250 = 0x75502e72;  // "r.Pu"
  uStack_24c = 0x73696c62;  // "blis"
  uStack_248 = 0x72435c68;  // "h\\Cr"
  uStack_244 = 0x55687361;  // "ashU"
  
  // 初始化日志缓冲区
  memset(auStack_228, 0, 0x80);
}

/**
 * 参数处理和初始化函数
 * 
 * 该函数处理启动参数和初始化操作，包括：
 * - 解析命令行参数
 * - 设置引擎管理器
 * - 执行启动脚本
 * - 初始化引擎核心组件
 * 
 * @param param_1 启动参数1
 * @param param_2 启动参数2（可为0）
 * @param param_3 启动参数3
 * @param param_4 启动参数4
 */
void ProcessStartupParametersAndInitialize(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4)
{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  undefined *puStack_88;
  longlong lStack_80;
  undefined4 uStack_70;
  undefined **ppuStack_68;
  longlong **pplStack_60;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  // 栈保护初始化
  uStack_48 = 0xfffffffffffffffe;
  
  // 获取引擎管理器
  plStack_b0 = *(longlong **)(_DAT_180c8ed08 + 0x18);
  
  // 初始化参数缓冲区
  FUN_180627ae0(&puStack_a8, _DAT_180c86870 + 0x170, param_3, param_4, 0);
  iVar5 = uStack_98 + 3;
  FUN_1806277c0(&puStack_a8, iVar5);
  
  // 设置参数类型标识
  *(undefined4 *)((ulonglong)uStack_98 + lStack_a0) = 0x706d74;  // "tmp"
  uStack_98 = iVar5;
  
  // 处理参数字符串
  cVar2 = FUN_180624a00(&puStack_a8);
  if (cVar2 == '\0') {
    FUN_180624910(&puStack_a8);
  }
  
  // 设置参数指针
  ppuStack_68 = &puStack_a8;
  pplStack_60 = &plStack_b0;
  
  // 添加系统路径配置
  FUN_180066140(&ppuStack_68, _DAT_180c86920, &DAT_1809fc7d8);
  FUN_180066140(&ppuStack_68, _DAT_180c868b0, &DAT_1809fcfc0);
  
  // 执行引擎初始化
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = FUN_180627ae0(&ppuStack_68, _DAT_180c86928 + 0x28);
  (*pcVar1)(plStack_b0, uVar3);
  
  // 清理临时参数
  ppuStack_68 = (undefined **)&UNK_180a3c3e0;
  if (pplStack_60 != (longlong **)0x0) {
    FUN_18064e900();
  }
  pplStack_60 = (longlong **)0x0;
  uStack_50 = 0;
  ppuStack_68 = (undefined **)&UNK_18098bcb0;
  
  // 执行引擎核心初始化
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = FUN_180627ae0(&puStack_88, _DAT_180c86928 + 0xe0);
  (*pcVar1)(plStack_b0, uVar3);
  puStack_88 = &UNK_180a3c3e0;
  if (lStack_80 != 0) {
    FUN_18064e900();
  }
  lStack_80 = 0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
  
  // 处理启动参数
  if (param_2 == 0) {
    // 使用默认配置
    lVar4 = FUN_18005e890(_DAT_180c82868);
    (**(code **)(*plStack_b0 + 8))(plStack_b0, param_1, *(undefined4 *)(lVar4 + 0x38));
  }
  else {
    // 使用指定参数
    pcVar1 = *(code **)(*plStack_b0 + 0x10);
    uVar3 = FUN_180627910(&puStack_88, param_2);
    (*pcVar1)(plStack_b0, param_1, uVar3);
    puStack_88 = &UNK_180a3c3e0;
    if (lStack_80 != 0) {
      FUN_18064e900();
    }
    lStack_80 = 0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
  }
  
  // 清理参数缓冲区
  FUN_18062c470(&puStack_a8);
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
    FUN_18064e900();
  }
  return;
}