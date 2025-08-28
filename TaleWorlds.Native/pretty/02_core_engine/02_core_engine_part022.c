#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part022.c - 4 个函数

// 全局变量映射：
// _DAT_180bf00a8 - 安全检查/校验值
// DAT_18098bc73 - 默认字符串缓冲区
// _DAT_180c8ed18 - 内存分配器/池管理器
// _DAT_180c8f008 - 系统状态标志
// _DAT_180c8a9c0 - 函数指针表/虚函数表
// _DAT_180c86870 - 引用计数器/对象管理器
// _DAT_180c8ed58 - 性能计数器基准
// _DAT_180c8ed48 - 时间戳基准值
// _DAT_180c8ed50 - 时间缩放因子
// _DAT_180c8ed60 - 文件句柄计数器
// _DAT_180c8ed08 - 全局对象指针
// _DAT_180c86920 - 配置参数块1
// _DAT_180c868b0 - 配置参数块2
// _DAT_180c86928 - 引擎配置数据
// _DAT_180c82868 - 系统模块句柄
// DAT_1809fc7d8 - 系统配置字符串1
// DAT_1809fcfc0 - 系统配置字符串2
// DAT_1809fdf28 - 默认路径字符串
// DAT_18098ba28 - 引擎数据块1
// DAT_18098ba40 - 引擎数据块2
// DAT_18098ba50 - 引擎数据块3
// DAT_18098ba60 - 引擎数据块4
// DAT_18098ba70 - 引擎数据块5
// DAT_18098ba80 - 引擎数据块6
// DAT_18098ba98 - 引擎数据块7
// DAT_18098baa0 - 引擎数据块8

// 函数: 处理字符串数据和内存操作
// 原始函数名：FUN_180064c00
// 
// 功能说明：
// - 处理字符串缓冲区的分配和管理
// - 执行字符串复制和内存操作
// - 管理动态内存分配和释放
// - 处理字符串长度计算和缓冲区操作
// 
// 参数：
// - param_1: 字符串容器/缓冲区管理器指针
// - param_2: 源字符串数据指针
// - param_3: 目标字符串数据指针
// 
// 返回值：void
void process_string_data(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int8_t *puVar5;
  void *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint64_t *puVar14;
  int8_t auStack_138 [32];
  longlong lStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  int8_t uStack_c8;
  undefined7 uStack_c7;
  uint64_t *puStack_b8;
  ulonglong uStack_b0;
  uint uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  ulonglong uStack_98;
  ulonglong uStack_90;
  int8_t uStack_88;
  undefined7 uStack_87;
  longlong lStack_78;
  ulonglong uStack_70;
  uint uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_e8 = 0;
  FUN_180057110();
  puVar6 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  puStack_b8 = (uint64_t *)0x0;
  uStack_b0 = 0xf;
  uStack_c8 = 0;
  lVar10 = -1;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (puVar6[lVar12] != '\0');
  FUN_1800671b0(&uStack_c8);
  puVar6 = &DAT_18098bc73;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_3 + 8);
  }
  lStack_78 = 0;
  uStack_70 = 0xf;
  uStack_88 = 0;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar6[lVar10] != '\0');
  FUN_1800671b0(&uStack_88,puVar6,lVar10);
  lVar12 = lStack_78;
  uVar1 = uStack_a8;
  uStack_98 = 0;
  uStack_90 = 0xf;
  uStack_a8 = uStack_a8 & 0xffffff00;
  lVar10 = CONCAT71(uStack_87,uStack_88);
  uVar9 = CONCAT44(uStack_a4,uVar1) & 0xffffffffffffff00;
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (int8_t *)CONCAT71(uStack_c7,uStack_c8);
  }
  lStack_118 = lStack_78;
  puVar3 = (uint64_t *)FUN_180066f90(puVar5,puStack_b8);
  puStack_e0 = puVar3;
  if (puVar3 == (uint64_t *)0xffffffffffffffff) {
    if (0xf < uStack_90) {
      uVar8 = uStack_90 + 1;
      uVar13 = uVar9;
      if (0xfff < uVar8) {
        uVar8 = uStack_90 + 0x28;
        uVar13 = *(ulonglong *)(uVar9 - 8);
        if (0x1f < (uVar9 - uVar13) - 8) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(uVar13,uVar8);
    }
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
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar12,uVar9);
    }
    lStack_78 = 0;
    uStack_70 = 0xf;
    uStack_88 = 0;
    if (0xf < uStack_b0) {
      uVar9 = uStack_b0 + 1;
      lVar12 = CONCAT71(uStack_c7,uStack_c8);
      lVar10 = lVar12;
      if (0xfff < uVar9) {
        uVar9 = uStack_b0 + 0x28;
        lVar10 = *(longlong *)(lVar12 + -8);
        if (0x1f < (lVar12 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar10,uVar9);
    }
    puStack_b8 = (uint64_t *)0x0;
    uStack_b0 = 0xf;
    uStack_c8 = 0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_138);
  }
  uStack_58 = 0;
  uStack_50 = 0xf;
  uStack_68 = uStack_68 & 0xffffff00;
  puVar4 = puVar3;
  if (puStack_b8 < puVar3) {
    puVar4 = puStack_b8;
  }
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (int8_t *)CONCAT71(uStack_c7,uStack_c8);
  }
  FUN_1800671b0(&uStack_68,puVar5,puVar4);
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
  if (uVar9 == 0) goto LAB_180065009;
  lVar10 = 0;
  puStack_108 = &UNK_180a3c3e0;
  uStack_f0 = 0;
  puStack_100 = (int8_t *)0x0;
  uStack_f8 = 0;
  uStack_98._0_4_ = (int)uVar9;
  iVar2 = (int)uStack_98;
  uStack_98 = uVar9;
  FUN_1806277c0(&puStack_108,uVar9 & 0xffffffff);
  if (iVar2 != 0) {
    puVar7 = &uStack_a8;
    if (0xf < uStack_90) {
      puVar7 = (uint *)CONCAT44(uStack_64,uVar1);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_100,puVar7,uVar9 & 0xffffffff);
  }
  uStack_f8 = 0;
  if (puStack_100 != (int8_t *)0x0) {
    *puStack_100 = 0;
  }
  puVar4 = (uint64_t *)param_1[1];
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (longlong)(puVar4 + 4);
    *puVar4 = &UNK_18098bcb0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *puVar4 = &UNK_180a3c3e0;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    puVar4[1] = puStack_100;
    *(int32_t *)((longlong)puVar4 + 0x1c) = uStack_f0._4_4_;
    *(int32_t *)(puVar4 + 3) = (int32_t)uStack_f0;
    uStack_f8 = 0;
    puStack_100 = (int8_t *)0x0;
    uStack_f0 = 0;
    puStack_e0 = puVar4;
  }
  else {
    lVar12 = *param_1;
    lVar11 = (longlong)puVar4 - lVar12 >> 5;
    if (lVar11 == 0) {
      lVar11 = 1;
LAB_180064eed:
      lVar10 = FUN_18062b420(_DAT_180c8ed18,lVar11 << 5,(char)param_1[3]);
      puVar4 = (uint64_t *)param_1[1];
      lVar12 = *param_1;
    }
    else {
      lVar11 = lVar11 * 2;
      if (lVar11 != 0) goto LAB_180064eed;
    }
    puStack_d0 = (uint64_t *)FUN_180059780(lVar12,puVar4,lVar10);
    *puStack_d0 = &UNK_18098bcb0;
    puStack_d0[1] = 0;
    *(int32_t *)(puStack_d0 + 2) = 0;
    *puStack_d0 = &UNK_180a3c3e0;
    puStack_d0[3] = 0;
    puStack_d0[1] = 0;
    *(int32_t *)(puStack_d0 + 2) = 0;
    *(int32_t *)(puStack_d0 + 2) = uStack_f8;
    puStack_d0[1] = puStack_100;
    *(int32_t *)((longlong)puStack_d0 + 0x1c) = uStack_f0._4_4_;
    *(int32_t *)(puStack_d0 + 3) = (int32_t)uStack_f0;
    uStack_f8 = 0;
    puStack_100 = (int8_t *)0x0;
    uStack_f0 = 0;
    puVar14 = puStack_d0 + 4;
    puVar3 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar3) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar3);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    *param_1 = lVar10;
    param_1[1] = (longlong)puVar14;
    param_1[2] = lVar11 * 0x20 + lVar10;
    lVar12 = lStack_78;
    puVar3 = puStack_e0;
  }
  puStack_108 = &UNK_180a3c3e0;
  if (puStack_100 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_100 = (int8_t *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  puStack_108 = &UNK_18098bcb0;
LAB_180065009:
  puVar4 = (uint64_t *)(lVar12 + (longlong)puVar3);
  if (puStack_b8 < (uint64_t *)(lVar12 + (longlong)puVar3)) {
    puVar4 = puStack_b8;
  }
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (int8_t *)CONCAT71(uStack_c7,uStack_c8);
  }
  puStack_b8 = (uint64_t *)((longlong)puStack_b8 - (longlong)puVar4);
                    // WARNING: Subroutine does not return
  memmove(puVar5,puVar5 + (longlong)puVar4,(longlong)puStack_b8 + 1);
}



// WARNING: Removing unreachable block (ram,0x0001800654e7)
// WARNING: Removing unreachable block (ram,0x0001800654f0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 收集系统信息和性能数据
// 原始函数名：FUN_180065160
// 
// 功能说明：
// - 收集系统性能信息和内存使用情况
// - 获取进程内存信息和工作集大小
// - 执行性能计数和时间测量
// - 处理系统状态检查和日志记录
// - 管理文件操作和数据输出
// 
// 参数：
// - param_1: 系统信息收集器/性能监控器句柄
// 
// 返回值：void
void gather_system_info(uint64_t param_1)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint64_t uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  int iVar15;
  void *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int32_t uVar20;
  int8_t auStack_368 [32];
  void *puStack_348;
  int16_t auStack_338 [2];
  int16_t auStack_334 [2];
  void *puStack_330;
  longlong lStack_328;
  int iStack_320;
  ulonglong uStack_318;
  int32_t uStack_310;
  void *puStack_308;
  void *puStack_300;
  int32_t uStack_2f8;
  ulonglong uStack_2f0;
  void *puStack_2e8;
  void *puStack_2e0;
  int32_t uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  void *puStack_2c0;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  ulonglong uStack_2a8;
  void *puStack_2a0;
  char *pcStack_298;
  int iStack_290;
  int32_t uStack_288;
  uint64_t uStack_280;
  longlong lStack_278;
  longlong lStack_268;
  uint64_t *puStack_260;
  uint64_t *puStack_258;
  uint64_t uStack_250;
  int32_t uStack_248;
  void *puStack_240;
  longlong lStack_238;
  int32_t uStack_228;
  uint64_t *puStack_220;
  uint64_t *puStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  void *puStack_200;
  void *puStack_1f8;
  int32_t uStack_1e8;
  void *puStack_1e0;
  void *puStack_1d8;
  int32_t uStack_1c8;
  void *puStack_1c0;
  void *puStack_1b8;
  int32_t uStack_1a8;
  void *puStack_1a0;
  void *puStack_198;
  int32_t uStack_188;
  void *puStack_180;
  void *puStack_178;
  int32_t uStack_168;
  uint64_t *puStack_160;
  uint64_t *puStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t *puStack_140;
  uint64_t *puStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [16];
  void *puStack_f0;
  int8_t *puStack_e8;
  int32_t uStack_e0;
  int8_t auStack_d8 [16];
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  undefined auStack_b0 [40];
  int32_t auStack_88 [14];
  ulonglong uStack_50;
  ulonglong uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  uStack_310 = 0;
  FUN_180627e10(param_1,&puStack_180,&UNK_1809fe900);
  uStack_280 = 0;
  lStack_278 = 0;
  puVar16 = &DAT_18098bc73;
  if (puStack_178 != (void *)0x0) {
    puVar16 = puStack_178;
  }
  uVar20 = FUN_18062dee0(&uStack_280,puVar16,&UNK_1809fe80c);
  puStack_330 = &UNK_180a3c3e0;
  uStack_318 = 0;
  lStack_328 = 0;
  iStack_320 = 0;
  FUN_180052020(uVar20,&puStack_200);
  if ((_DAT_180c8f008 == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar7 == '\0')) {
    puVar16 = &UNK_1809fe910;
  }
  else {
    lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x30))();
    puVar16 = &DAT_18098bc73;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
  }
  FUN_180627910(&puStack_1c0,puVar16);
  if ((_DAT_180c8f008 == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar7 == '\0')) {
    puVar16 = &UNK_1809fe928;
  }
  else {
    lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x20))();
    puVar16 = &DAT_18098bc73;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
  }
  FUN_180627910(&puStack_1e0,puVar16);
  puStack_c8 = &UNK_18098bc80;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  uStack_310 = 4;
  FUN_18004b860(&puStack_c8,&UNK_1809fd0a0,0x130a7);
  puStack_348 = &DAT_18098bc73;
  if (puStack_c0 != (void *)0x0) {
    puStack_348 = puStack_c0;
  }
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_18098ba80);
  uStack_310 = 0;
  puStack_c8 = &UNK_18098bcb0;
  puStack_348 = &UNK_18098ba98;
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_18098baa0);
  puStack_348 = &DAT_18098ba28;
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_18098ba40);
  puStack_348 = &DAT_18098bc73;
  if (puStack_1b8 != (void *)0x0) {
    puStack_348 = puStack_1b8;
  }
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_18098ba70);
  puStack_348 = &DAT_18098bc73;
  if (puStack_1d8 != (void *)0x0) {
    puStack_348 = puStack_1d8;
  }
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_18098ba60);
  puStack_1e0 = &UNK_180a3c3e0;
  if (puStack_1d8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_1d8 = (void *)0x0;
  uStack_1c8 = 0;
  puStack_1e0 = &UNK_18098bcb0;
  puStack_1c0 = &UNK_180a3c3e0;
  if (puStack_1b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_1b8 = (void *)0x0;
  uStack_1a8 = 0;
  puStack_1c0 = &UNK_18098bcb0;
  puStack_2c0 = &UNK_180a3c3e0;
  uStack_2a8 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  puStack_2e8 = &UNK_180a3c3e0;
  uStack_2d0 = 0;
  puStack_2e0 = (void *)0x0;
  uStack_2d8 = 0;
  puStack_308 = &UNK_180a3c3e0;
  uStack_2f0 = 0;
  puStack_300 = (void *)0x0;
  uStack_2f8 = 0;
  uVar10 = FUN_180623ce0();
  FUN_180628040(&puStack_2e8,&UNK_1809fe8f8,uVar10 / 0x100000 & 0xffffffff);
  auStack_88[0] = 0x48;
  uVar11 = GetCurrentProcess();
  iVar8 = K32GetProcessMemoryInfo(uVar11,auStack_88,0x48);
  uVar10 = 0;
  if (iVar8 != 0) {
    uVar10 = uStack_50;
  }
  FUN_180628040(&puStack_308,&UNK_1809fe8f8,uVar10 / 0x100000 & 0xffffffff);
  puStack_348 = &DAT_18098bc73;
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_1809fe950);
  puStack_348 = &DAT_18098bc73;
  if (puStack_2e0 != (void *)0x0) {
    puStack_348 = puStack_2e0;
  }
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_1809fe968);
  puStack_348 = &DAT_18098bc73;
  if (puStack_300 != (void *)0x0) {
    puStack_348 = puStack_300;
  }
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_1809fe978);
  lVar9 = _DAT_180c86870;
  puStack_308 = &UNK_180a3c3e0;
  if (puStack_300 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_300 = (void *)0x0;
  uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
  puStack_308 = &UNK_18098bcb0;
  puStack_2e8 = &UNK_180a3c3e0;
  if (puStack_2e0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2e0 = (void *)0x0;
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  puStack_2e8 = &UNK_18098bcb0;
  uStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &UNK_18098bcb0;
  lVar14 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(&lStack_268);
    lVar14 = lStack_268;
  }
  puStack_348 = (void *)
                ((double)(lVar14 - _DAT_180c8ed48) * _DAT_180c8ed50 - *(double *)(lVar9 + 0x210));
  FUN_180628040(&puStack_330,&UNK_1809fe998,&UNK_18098ba10,&UNK_1809fe988);
  puStack_348 = &DAT_18098bc73;
  if (puStack_1f8 != (void *)0x0) {
    puStack_348 = puStack_1f8;
  }
  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_18098ba10,&UNK_18098ba50);
  puStack_220 = (uint64_t *)0x0;
  puStack_218 = (uint64_t *)0x0;
  uStack_210 = 0;
  uStack_208 = 3;
  puStack_160 = (uint64_t *)0x0;
  puStack_158 = (uint64_t *)0x0;
  uStack_150 = 0;
  uStack_148 = 3;
  puStack_f0 = &UNK_1809fdc18;
  puStack_e8 = auStack_d8;
  auStack_d8[0] = 0;
  uStack_e0 = 9;
  strcpy_s(auStack_d8,0x10,&UNK_1809fe9a8);
  FUN_180064c00(&puStack_160,&puStack_200,&puStack_f0);
  puVar18 = puStack_158;
  puVar19 = puStack_160;
  if (1 < (ulonglong)((longlong)puStack_158 - (longlong)puStack_160 >> 5)) {
    puStack_118 = &UNK_1809fdc18;
    puStack_110 = auStack_100;
    auStack_100[0] = 0;
    uStack_108 = 1;
    strcpy_s(auStack_100,0x10,&DAT_1809fdf28);
    FUN_180064c00(&puStack_220,puVar19 + 4,&puStack_118);
    puStack_118 = &UNK_18098bcb0;
  }
  puStack_f0 = &UNK_18098bcb0;
  puVar4 = puStack_220;
  for (puVar17 = puVar19; puStack_220 = puVar4, puVar17 != puVar18; puVar17 = puVar17 + 4) {
    (**(code **)*puVar17)(puVar17,0);
    puVar4 = puStack_220;
  }
  if (puVar19 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar19);
  }
  uVar10 = (longlong)puStack_218 - (longlong)puVar4 >> 5;
  if (uVar10 != 0) {
    if ((_DAT_180c8f008 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar7 == '\0')) {
      puVar16 = &UNK_1809fe9b8;
    }
    else {
      lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x28))();
      puVar16 = &DAT_18098bc73;
      if (*(void **)(lVar9 + 8) != (void *)0x0) {
        puVar16 = *(void **)(lVar9 + 8);
      }
    }
    FUN_180627910(&puStack_240,puVar16);
    puStack_260 = (uint64_t *)0x0;
    puStack_258 = (uint64_t *)0x0;
    uStack_250 = 0;
    uStack_248 = 3;
    auStack_338[0] = 10;
    if (lStack_238 != 0) {
      FUN_180057980(&puStack_240,&puStack_260,auStack_338);
    }
    uVar12 = (longlong)puStack_258 - (longlong)puStack_260 >> 5;
    puVar19 = puStack_260;
    puVar18 = puStack_260;
    puVar17 = puStack_258;
    if ((int)uVar12 != 0) {
      uStack_2c8 = uVar12 & 0xffffffff;
      do {
        puStack_140 = (uint64_t *)0x0;
        puStack_138 = (uint64_t *)0x0;
        uStack_130 = 0;
        uStack_128 = 3;
        auStack_334[0] = 0x23;
        if (puVar19[1] != 0) {
          FUN_180057980(puVar19,&puStack_140,auStack_334);
        }
        puVar5 = puStack_138;
        puVar17 = puStack_140;
        puVar18 = puStack_140;
        if (((longlong)puStack_138 - (longlong)puStack_140 & 0xffffffffffffffe0U) == 0x40) {
          FUN_180627ae0(&puStack_2a0,puStack_140);
          if (pcStack_298 != (char *)0x0) {
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
                  puStack_348 = &DAT_18098bc73;
                  if ((void *)puVar17[5] != (void *)0x0) {
                    puStack_348 = (void *)puVar17[5];
                  }
                  puVar16 = &DAT_18098bc73;
                  if ((void *)puVar17[1] != (void *)0x0) {
                    puVar16 = (void *)puVar17[1];
                  }
                  FUN_180628040(&puStack_330,&UNK_1809fe940,&UNK_1809fe9c8,puVar16);
                  break;
                }
              }
              else if (iVar2 == 0) goto LAB_180065a3e;
              iVar8 = iVar8 + 1;
              puVar18 = puVar18 + 4;
            } while ((ulonglong)(longlong)iVar8 < uVar10);
          }
          puStack_2a0 = &UNK_180a3c3e0;
          if (pcStack_298 != (char *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          pcStack_298 = (char *)0x0;
          uStack_288 = 0;
          puStack_2a0 = &UNK_18098bcb0;
          for (puVar18 = puVar17; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18,0);
          }
        }
        else {
          for (; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18,0);
          }
        }
        if (puVar17 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
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
    for (; puVar6 = puStack_258, puVar5 = puStack_260, puVar19 != puStack_258; puVar19 = puVar19 + 4
        ) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
      (**(code **)*puVar19)(puVar19,0);
      puVar18 = puStack_260;
      puVar17 = puStack_258;
      puStack_258 = puVar6;
      puStack_260 = puVar5;
    }
    if (puStack_260 != (uint64_t *)0x0) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    puStack_240 = &UNK_180a3c3e0;
    if (lStack_238 != 0) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_238 = 0;
    uStack_228 = 0;
    puStack_240 = &UNK_18098bcb0;
    puStack_260 = puVar18;
    puStack_258 = puVar17;
  }
  if ((_DAT_180c8a9c0 == 0) || (*(int *)(_DAT_180c86870 + 0x340) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((_DAT_180c86870 != 0) && (*(int *)(_DAT_180c86870 + 0x340) == 1)) && (bVar3)) {
    lVar9 = (**(code **)(_DAT_180c8a9c0 + 0x18))();
    puVar16 = &DAT_18098bc73;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
    FUN_180627910(&puStack_1a0,puVar16);
    puVar16 = &DAT_18098bc73;
    if (puStack_198 != (void *)0x0) {
      puVar16 = puStack_198;
    }
    FUN_180628040(&puStack_330,&UNK_1809fe7f8,puVar16);
    puStack_1a0 = &UNK_180a3c3e0;
    if (puStack_198 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_198 = (void *)0x0;
    uStack_188 = 0;
    puStack_1a0 = &UNK_18098bcb0;
  }
  lVar9 = lStack_278;
  fwrite(lStack_328,1,(longlong)iStack_320,lStack_278);
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
  for (; puVar17 = puStack_218, puVar4 != puStack_218; puVar4 = puVar4 + 4) {
    puStack_218 = puVar19;
    (**(code **)*puVar4)(puVar4,0);
    puVar19 = puStack_218;
    puStack_218 = puVar17;
  }
  if (puVar18 != (uint64_t *)0x0) {
    puStack_218 = puVar19;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar18);
  }
  puStack_200 = &UNK_180a3c3e0;
  if (puStack_1f8 != (void *)0x0) {
    puStack_218 = puVar19;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_1f8 = (void *)0x0;
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
    if (puStack_178 == (void *)0x0) {
      puStack_178 = (void *)0x0;
      uStack_168 = 0;
      puStack_180 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_368);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_218 = puVar19;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化字符串缓冲区
// 原始函数名：FUN_180065d50
// 
// 功能说明：
// - 初始化字符串缓冲区内存空间
// - 设置缓冲区安全检查值
// - 准备字符串操作环境
// - 执行内存清零操作
// 
// 参数：void
// 
// 返回值：void
void initialize_string_buffer(void)

{
  int8_t auStack_2c8 [104];
  uint64_t uStack_260;
  uint64_t uStack_258;
  int32_t uStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int8_t uStack_22c;
  int8_t auStack_228 [512];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_2c8;
  uStack_230 = 0x22657865;
  uStack_260 = 0x736172435c2e2e22;
  uStack_258 = 0x6564616f6c705568;
  uStack_22c = 0;
  uStack_240 = 0x616f6c70;
  uStack_23c = 0x2e726564;
  uStack_238 = 0x6c627550;
  uStack_234 = 0x2e687369;
  uStack_250 = 0x75502e72;
  uStack_24c = 0x73696c62;
  uStack_248 = 0x72435c68;
  uStack_244 = 0x55687361;
                    // WARNING: Subroutine does not return
  memset(auStack_228,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 处理系统参数和引擎配置
// 原始函数名：FUN_180065f00
// 
// 功能说明：
// - 处理系统参数配置和引擎设置
// - 管理参数验证和类型检查
// - 执行系统模块初始化
// - 处理参数传递和函数调用
// - 管理资源分配和释放
// 
// 参数：
// - param_1: 系统参数管理器/配置处理器
// - param_2: 参数类型标识符
// - param_3: 配置数据指针
// - param_4: 附加参数数据
// 
// 返回值：void
void process_system_parameters(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  char cVar2;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plStack_b0;
  void *puStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  void *puStack_88;
  longlong lStack_80;
  int32_t uStack_70;
  void **ppuStack_68;
  longlong **pplStack_60;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_b0 = *(longlong **)(_DAT_180c8ed08 + 0x18);
  FUN_180627ae0(&puStack_a8,_DAT_180c86870 + 0x170,param_3,param_4,0);
  iVar5 = uStack_98 + 3;
  FUN_1806277c0(&puStack_a8,iVar5);
  *(int32_t *)((ulonglong)uStack_98 + lStack_a0) = 0x706d74;
  uStack_98 = iVar5;
  cVar2 = FUN_180624a00(&puStack_a8);
  if (cVar2 == '\0') {
    FUN_180624910(&puStack_a8);
  }
  ppuStack_68 = &puStack_a8;
  pplStack_60 = &plStack_b0;
  FUN_180066140(&ppuStack_68,_DAT_180c86920,&DAT_1809fc7d8);
  FUN_180066140(&ppuStack_68,_DAT_180c868b0,&DAT_1809fcfc0);
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = FUN_180627ae0(&ppuStack_68,_DAT_180c86928 + 0x28);
  (*pcVar1)(plStack_b0,uVar3);
  ppuStack_68 = (void **)&UNK_180a3c3e0;
  if (pplStack_60 != (longlong **)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pplStack_60 = (longlong **)0x0;
  uStack_50 = 0;
  ppuStack_68 = (void **)&UNK_18098bcb0;
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = FUN_180627ae0(&puStack_88,_DAT_180c86928 + 0xe0);
  (*pcVar1)(plStack_b0,uVar3);
  puStack_88 = &UNK_180a3c3e0;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_80 = 0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
  if (param_2 == 0) {
    lVar4 = FUN_18005e890(_DAT_180c82868);
    (**(code **)(*plStack_b0 + 8))(plStack_b0,param_1,*(int32_t *)(lVar4 + 0x38));
  }
  else {
    pcVar1 = *(code **)(*plStack_b0 + 0x10);
    uVar3 = FUN_180627910(&puStack_88,param_2);
    (*pcVar1)(plStack_b0,param_1,uVar3);
    puStack_88 = &UNK_180a3c3e0;
    if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_80 = 0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
  }
  FUN_18062c470(&puStack_a8);
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



