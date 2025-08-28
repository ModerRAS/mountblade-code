#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 99_part_02_part057.c - 高级路径处理和资源管理模块
// 总计：2个核心函数
// 
// 本模块包含高级路径处理、资源管理和系统配置功能。
// 主要功能包括路径构建、资源管理、配置处理、字符串操作等。
// ============================================================================

// ============================================================================
// 常量定义和宏定义
// ============================================================================

#define PATH_BUFFER_SIZE                 0x40       // 路径缓冲区大小 (64字节)
#define RESOURCE_NAME_SIZE              0x13       // 资源名称大小 (19字节)
#define CONFIG_STRING_SIZE              0x11       // 配置字符串大小 (17字节)
#define MAX_PATH_LENGTH                 0x12       // 最大路径长度 (18字节)
#define SYSTEM_FLAG_ENABLED             0x01       // 系统标志启用
#define SYSTEM_FLAG_DISABLED            0x00       // 系统标志禁用

// ============================================================================
// 函数别名定义
// ============================================================================

#define path_builder_and_resource_manager    FUN_1801c2d00
#define system_initializer_and_configurator  FUN_1801c3340

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 路径构建器和资源管理器 - 负责处理路径构建和资源管理
 * 
 * 功能说明：
 * - 构建系统路径字符串
 * - 处理资源名称和路径
 * - 管理系统配置信息
 * - 执行资源分配和释放
 * 
 * 参数：
 *   param_1 - 系统配置参数
 *   param_2 - 资源标识符
 * 
 * 返回值：
 *   void - 无返回值
 */
void path_builder_and_resource_manager(undefined8 param_1, undefined8 param_2)
{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_168 [32];
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  longlong lStack_120;
  undefined4 uStack_118;
  ulonglong uStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  uint uStack_f8;
  ulonglong uStack_f0;
  undefined *puStack_e8;
  longlong lStack_e0;
  uint uStack_d8;
  ulonglong uStack_d0;
  undefined *puStack_c8;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  // 栈保护初始化
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  
  // 第一个字符串处理：构建 "shader_main.g.bin" 路径
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  FUN_1801c5870(&puStack_e8);
  iVar12 = uStack_d8 + 0x12;
  FUN_1806277c0(&puStack_e8,iVar12);
  puVar11 = (undefined4 *)((ulonglong)uStack_d8 + lStack_e0);
  *puVar11 = 0x64616873;                    // "shad"
  puVar11[1] = 0x6d5f7265;                  // "er_m"
  puVar11[2] = 0x69707061;                  // "appi"
  puVar11[3] = 0x622e676e;                  // "n.gb"
  *(undefined2 *)(puVar11 + 4) = 0x6e69;    // "in"
  *(undefined1 *)((longlong)puVar11 + 0x12) = 0;
  
  // 第二个字符串处理：构建 "processer_desk.cache.ask" 路径
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_d8 = iVar12;
  FUN_1801c5700(&puStack_108,param_2);
  iVar12 = uStack_f8 + 0x1c;
  FUN_1806277c0(&puStack_108,iVar12);
  puVar11 = (undefined4 *)((ulonglong)uStack_f8 + lStack_100);
  *puVar11 = 0x706d6f63;                    // "comp"
  puVar11[1] = 0x73736572;                  // "ress"
  puVar11[2] = 0x735f6465;                  // "er_d"
  puVar11[3] = 0x65646168;                  // "hade"
  *(undefined8 *)(puVar11 + 4) = 0x2e65686361635f72;  // "r_cache."
  puVar11[6] = 0x6b636173;                  // "sack"
  *(undefined1 *)(puVar11 + 7) = 0;
  uStack_f8 = iVar12;
  
  // 验证字符串有效性
  cVar3 = FUN_180624af0(&puStack_108);
  cVar4 = FUN_180624af0(&puStack_e8);
  bVar1 = false;
  
  // 检查系统状态和配置
  if ((DAT_180c82860 != '\0') || (*(int *)(_DAT_180c86908 + 0x620) != 0)) {
    lVar8 = FUN_1801d7560();
    bVar1 = false;
    if (cVar3 != '\0') {
      lVar9 = FUN_18062d860(&puStack_108);
      bVar1 = false;
      if (lVar9 < lVar8) {
        bVar1 = true;
      }
    }
    if ((cVar4 != '\0') && (lVar9 = FUN_18062d860(&puStack_e8), lVar9 < lVar8)) {
      bVar1 = true;
    }
  }
  
  // 根据系统状态决定处理方式
  if ((*(int *)(_DAT_180c86908 + 0x620) == 0) || (!bVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  
  // 字符串处理：构建 "main_shader.bin" 路径
  puStack_98 = &UNK_1809fcc58;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x11;
  strcpy_s(auStack_80,0x40,&UNK_180a0ce28);
  cVar5 = FUN_180051f00(_DAT_180c86870,&puStack_98);
  puStack_98 = &UNK_18098bcb0;
  cVar6 = FUN_1801c4eb0(param_2);
  
  // 根据条件处理资源
  if (((bVar2) || (cVar6 == '\0')) || (cVar5 != '\0')) {
    // 构建 ".sack" 资源路径
    puStack_128 = &UNK_180a3c3e0;
    uStack_110 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    FUN_1801c5700(&puStack_128,param_2);
    puStack_148 = &UNK_180a3c3e0;
    uStack_130 = 0;
    puStack_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar11 = 0;
    puStack_140 = (undefined8 *)puVar11;
    uVar7 = FUN_18064e990(puVar11);
    *puVar11 = 0x6361732e;                    // ".sac"
    *(undefined2 *)(puVar11 + 1) = 0x6b;      // "k"
    uStack_138 = 5;
    uStack_130._0_4_ = uVar7;
    FUN_18062bd50(&puStack_128,&puStack_148);
    puStack_148 = &UNK_180a3c3e0;
    if (puStack_140 != (undefined8 *)0x0) {
      FUN_18064e900();
    }
    puStack_140 = (undefined8 *)0x0;
    uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
    puStack_148 = &UNK_18098bcb0;
    cVar3 = '\0';
    puStack_128 = &UNK_180a3c3e0;
    if (lStack_120 != 0) {
      FUN_18064e900();
    }
    lStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &UNK_18098bcb0;
  }
  
  // 处理主资源
  cVar5 = FUN_1801c5160(param_2);
  if ((bVar2) || (uVar7 = extraout_XMM0_Da, cVar5 == '\0')) {
    // 构建 ".sack" 资源路径
    puStack_128 = &UNK_180a3c3e0;
    uStack_110 = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    FUN_1801c5870(&puStack_128,param_2);
    puStack_148 = &UNK_180a3c3e0;
    uStack_130 = 0;
    puStack_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar11 = 0;
    puStack_140 = (undefined8 *)puVar11;
    uVar7 = FUN_18064e990(puVar11);
    *puVar11 = 0x6361732e;                    // ".sac"
    *(undefined2 *)(puVar11 + 1) = 0x78;      // "x"
    uStack_138 = 5;
    uStack_130._0_4_ = uVar7;
    FUN_18062bd50(&puStack_128,&puStack_148);
    puStack_148 = &UNK_180a3c3e0;
    if (puStack_140 != (undefined8 *)0x0) {
      FUN_18064e900();
    }
    puStack_140 = (undefined8 *)0x0;
    uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
    puStack_148 = &UNK_18098bcb0;
    
    // 构建 ".bin" 资源路径
    puStack_c8 = &UNK_180a3c3e0;
    uStack_b0 = 0;
    puStack_c0 = (undefined4 *)0x0;
    uStack_b8 = 0;
    puVar11 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar11 = 0;
    puStack_c0 = puVar11;
    uVar7 = FUN_18064e990(puVar11);
    *puVar11 = 0x6e69622e;                    // ".bin"
    *(undefined1 *)(puVar11 + 1) = 0;
    uStack_b8 = 4;
    uStack_b0._0_4_ = uVar7;
    FUN_18062bd50(&puStack_128,&puStack_c8);
    puStack_c8 = &UNK_180a3c3e0;
    if (puStack_c0 != (undefined4 *)0x0) {
      FUN_18064e900();
    }
    puStack_c0 = (undefined4 *)0x0;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    puStack_c8 = &UNK_18098bcb0;
    
    // 构建 ".change.txt" 资源路径
    puStack_148 = &UNK_180a3c3e0;
    uStack_130 = 0;
    puStack_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar10 = 0;
    puStack_140 = puVar10;
    uVar7 = FUN_18064e990(puVar10);
    *puVar10 = 0x7365676e6168632e;            // ".change"
    *(undefined2 *)(puVar10 + 1) = 0x7465;    // "et"
    *(undefined1 *)((longlong)puVar10 + 10) = 0;
    uStack_138 = 10;
    uStack_130._0_4_ = uVar7;
    uVar7 = FUN_18062bd50(&puStack_128,&puStack_148);
    puStack_148 = &UNK_180a3c3e0;
    if (puStack_140 != (undefined8 *)0x0) {
      FUN_18064e900();
    }
    puStack_140 = (undefined8 *)0x0;
    uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
    puStack_148 = &UNK_18098bcb0;
    cVar4 = '\0';
    puStack_128 = &UNK_180a3c3e0;
    if (lStack_120 != 0) {
      FUN_18064e900();
    }
    lStack_120 = 0;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    puStack_128 = &UNK_18098bcb0;
  }
  
  // 最终处理和清理
  if (((cVar3 == '\0') || (bVar1)) || (cVar4 == '\0')) {
    FUN_1801c5450(uVar7,param_2);
  }
  
  // 清理第一个字符串缓冲区
  puStack_108 = &UNK_180a3c3e0;
  if (lStack_100 == 0) {
    lStack_100 = 0;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    puStack_108 = &UNK_18098bcb0;
    
    // 清理第二个字符串缓冲区
    puStack_e8 = &UNK_180a3c3e0;
    if (lStack_e0 == 0) {
      lStack_e0 = 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      puStack_e8 = &UNK_18098bcb0;
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
    }
    FUN_18064e900();
  }
  FUN_18064e900();
}

/**
 * 系统初始化器和配置器 - 负责系统初始化和配置管理
 * 
 * 功能说明：
 * - 初始化系统配置
 * - 设置系统参数
 * - 管理系统资源
 * - 执行系统清理
 * 
 * 参数：
 *   void - 无参数
 * 
 * 返回值：
 *   void - 无返回值
 */
void system_initializer_and_configurator(void)
{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_e8;
  undefined4 *puStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_48;
  
  // 栈保护初始化
  uStack_48 = 0xfffffffffffffffe;
  
  // 获取系统配置信息
  uVar1 = FUN_1800bfec0();
  puStack_e8 = &UNK_180a3c3e0;
  uStack_d0 = 0;
  puStack_e0 = (undefined4 *)0x0;
  uStack_d8 = 0;
  
  // 分配配置字符串缓冲区
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x14,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_e0 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
  
  // 设置配置字符串："_use_visual_main_map"
  *puVar3 = 0x5f657375;                    // "_use"
  puVar3[1] = 0x74736976;                  // "visu"
  puVar3[2] = 0x6f6e5f61;                  // "al_m"
  puVar3[3] = 0x6c616d72;                  // "am_r"
  puVar3[4] = 0x70616d;                    // "map"
  uStack_d8 = 0x13;
  
  // 应用系统配置
  FUN_180240430(uVar1,&puStack_e8,1);
  puStack_e8 = &UNK_180a3c3e0;
  FUN_18064e900(puVar3);
}

// ============================================================================
// 模块说明
// ============================================================================

/*
 * 技术说明：
 * 
 * 本模块实现了高级路径处理和资源管理功能，包含2个核心函数：
 * 
 * 1. path_builder_and_resource_manager (FUN_1801c2d00)
 *    - 负责构建系统路径字符串
 *    - 处理资源名称和路径映射
 *    - 管理多种资源类型的路径生成
 *    - 实现条件判断和状态管理
 * 
 * 2. system_initializer_and_configurator (FUN_1801c3340)
 *    - 负责系统初始化和配置
 *    - 设置系统参数和环境变量
 *    - 管理系统资源配置
 *    - 执行系统清理和资源释放
 * 
 * 主要技术特点：
 * - 支持多种路径格式的构建和处理
 * - 实现条件判断和状态管理
 * - 提供资源分配和释放机制
 * - 支持系统配置的动态设置
 * - 实现栈保护和错误处理
 * 
 * 应用场景：
 * - 游戏资源管理系统
 * - 文件路径处理模块
 * - 系统配置管理器
 * - 资源加载和卸载系统
 */