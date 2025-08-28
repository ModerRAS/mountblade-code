#include "TaleWorlds.Native.Split.h"

/**
 * 02_core_engine_part257_sub002_sub002.c - 核心引擎数据处理模块
 * 
 * 本文件包含6个函数，主要用于：
 * - 复杂的数据流处理和参数配置
 * - 条件检查和字符串比较
 * - 返回值处理和状态验证
 * 
 * 文件位置: 核心引擎模块第257部分第2子部分第2子部分
 * 包含函数数量: 6个
 */

/**
 * 处理复杂数据流和参数配置的主函数
 * 
 * 此函数处理复杂的数据流操作，包括参数配置、条件检查和数据处理。
 * 这是核心引擎中的关键函数，涉及多个数据结构和内存管理操作。
 * 
 * @param 上下文参数         上下文信息指针
 * @param 数据结构指针       指向主要数据结构的指针
 * @param 配置参数1         第一个配置参数
 * @param 配置参数2         第二个配置参数
 * @param 标志参数          操作标志参数
 * @param 选项参数          选项和模式参数
 * @param 状态参数          状态和控制参数
 * @param 地址参数          地址和偏移参数
 * 
 * 主要功能:
 * - 初始化数据结构和缓冲区
 * - 处理多种条件分支和数据流
 * - 执行字符串比较和配置检查
 * - 管理内存分配和资源清理
 * - 处理各种标志和状态参数
 * 
 * 注意: 此函数实现包含10000多行代码，逻辑极其复杂
 */
void 处理复杂数据流配置(uint64_t 上下文参数, uint64_t *数据结构指针, longlong 配置参数1, longlong 配置参数2,
                        int8_t 标志参数, int32_t 选项参数, uint 状态参数, ulonglong 地址参数)

{
  int iVar1;
  void **ppuVar2;
  uint64_t uVar3;
  longlong *plVar4;
  uint uVar5;
  void *puVar6;
  int8_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int8_t auStack_1b8 [32];
  void **ppuStack_198;
  void *puStack_190;
  int8_t *puStack_188;
  uint uStack_180;
  ulonglong uStack_178;
  int32_t uStack_170;
  ulonglong uStack_168;
  uint64_t uStack_160;
  uint64_t *puStack_158;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [64];
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_e0;
  ulonglong uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [64];
  void *puStack_70;
  longlong lStack_68;
  int32_t uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_48;
  ulonglong uVar7;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  lVar11 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int32_t *)(param_2 + 3) = 3;
  uStack_168 = 1;
  uStack_170 = 1;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  uStack_138 = 0;
  auStack_130[0] = 0;
  ppuStack_198 = &puStack_f0;
  puStack_f0 = &UNK_180a3c3e0;
  uStack_d8 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  puStack_158 = param_2;
  FUN_180049bf0(&puStack_148,&UNK_180a02158);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
  ppuVar2 = (void **)param_2[1];
  if (ppuVar2 < (void **)param_2[2]) {
    param_2[1] = ppuVar2 + 0xf;
    ppuStack_198 = ppuVar2;
    FUN_1800b8300(ppuVar2);
    FUN_180627ae0(ppuVar2 + 0xb,&puStack_f0);
  }
  else {
    FUN_180226020(param_2,&puStack_148);
  }
  (**(code **)(puStack_148 + 0x10))(&puStack_148,&UNK_180a13320);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
  ppuVar2 = (void **)param_2[1];
  if (ppuVar2 < (void **)param_2[2]) {
    param_2[1] = ppuVar2 + 0xf;
    ppuStack_198 = ppuVar2;
    FUN_1800b8300(ppuVar2);
    FUN_180627ae0(ppuVar2 + 0xb,&puStack_f0);
  }
  else {
    FUN_180226020(param_2,&puStack_148);
  }
  iVar1 = *(int *)(_DAT_180c86938 + 0x1d44);
  if (iVar1 == 0) {
    puVar6 = &UNK_180a02628;
  }
  else if (iVar1 == 1) {
    puVar6 = &UNK_180a135d8;
  }
  else if (iVar1 == 2) {
    puVar6 = &DAT_180a02618;
  }
  else {
    puVar6 = &UNK_180a135f0;
  }
  (**(code **)(puStack_148 + 0x10))(&puStack_148,puVar6);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
  ppuVar2 = (void **)param_2[1];
  if (ppuVar2 < (void **)param_2[2]) {
    param_2[1] = ppuVar2 + 0xf;
    ppuStack_198 = ppuVar2;
    FUN_1800b8300(ppuVar2);
    FUN_180627ae0(ppuVar2 + 0xb,&puStack_f0);
  }
  else {
    FUN_180226020(param_2,&puStack_148);
  }
  uVar3 = func_0x0001800aded0(param_6);
  (**(code **)(puStack_148 + 0x10))(&puStack_148,uVar3);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
  uVar7 = param_2[1];
  if (uVar7 < (ulonglong)param_2[2]) {
    param_2[1] = uVar7 + 0x78;
    ppuStack_198 = (void **)uVar7;
    FUN_1800b8300(uVar7);
    FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
  }
  else {
    FUN_180226020(param_2,&puStack_148);
  }
  ppuStack_198 = &puStack_f0;
  puStack_f0 = &UNK_180a3c3e0;
  if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (0 < *(int *)(param_4 + 0x10)) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a02060);
    puVar6 = &DAT_18098bc73;
    if (*(void **)(param_4 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_4 + 8);
    }
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,puVar6);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x15 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13340);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 2) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a132f0);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x16 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13308);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((int)param_7 < 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a133a0);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x14 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a133b0);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 0x20) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13360);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((char)param_7 < '\0') {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13378);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 0x10) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a133f8);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 4) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13410);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 8) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a133c8);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a133e0);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 0x40) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13470);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0xd & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13488);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x17 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13430);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 10 & 1) == 0) {
    if ((param_7 >> 9 & 1) == 0) {
      puStack_148 = &UNK_1809fcc58;
      puStack_140 = auStack_130;
      uStack_138 = 0;
      auStack_130[0] = 0;
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &UNK_180a3c3e0;
      uStack_d8 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      FUN_180049bf0(&puStack_148,&UNK_180a134f0);
      (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
      uVar7 = param_2[1];
      if (uVar7 < (ulonglong)param_2[2]) {
        param_2[1] = uVar7 + 0x78;
        ppuStack_198 = (void **)uVar7;
        FUN_1800b8300(uVar7);
        FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
      }
      else {
        FUN_180226020(param_2,&puStack_148);
      }
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &UNK_180a3c3e0;
      if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
    }
    else {
      puStack_148 = &UNK_1809fcc58;
      puStack_140 = auStack_130;
      uStack_138 = 0;
      auStack_130[0] = 0;
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &UNK_180a3c3e0;
      uStack_d8 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      FUN_180049bf0(&puStack_148,&UNK_180a134d0);
      (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
      uVar7 = param_2[1];
      if (uVar7 < (ulonglong)param_2[2]) {
        param_2[1] = uVar7 + 0x78;
        ppuStack_198 = (void **)uVar7;
        FUN_1800b8300(uVar7);
        FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
      }
      else {
        FUN_180226020(param_2,&puStack_148);
      }
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &UNK_180a3c3e0;
      if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
    }
  }
  else {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13450);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 8 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13490);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0xf & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a134b0);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x10 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13548);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x11 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13560);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x12 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13510);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x13 & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13528);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x1d & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a13598);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x1e & 1) != 0) {
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&UNK_180a135b8);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&DAT_180a08120);
    uVar7 = param_2[1];
    if (uVar7 < (ulonglong)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &UNK_180a3c3e0;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  ppuStack_198 = &puStack_148;
  lStack_e8 = 0;
  puStack_f0 = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  if (param_3 != 0) {
    plVar4 = (longlong *)FUN_180240a60(param_3);
    iVar1 = (int)((plVar4[1] - *plVar4) / 0x60);
    lVar12 = (longlong)iVar1;
    if (0 < iVar1) {
      do {
        uVar7 = 0;
        lVar9 = *plVar4 + lVar11;
        puStack_190 = &UNK_180a3c3e0;
        uStack_178 = 0;
        puStack_188 = (int8_t *)0x0;
        uStack_180 = 0;
        FUN_1806277c0(&puStack_190,*(int32_t *)(lVar9 + 0x10));
        if (0 < *(int *)(lVar9 + 0x10)) {
          puVar6 = &DAT_18098bc73;
          if (*(void **)(lVar9 + 8) != (void *)0x0) {
            puVar6 = *(void **)(lVar9 + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_188,puVar6,(longlong)(*(int *)(lVar9 + 0x10) + 1));
        }
        if ((*(longlong *)(lVar9 + 8) != 0) && (uStack_180 = 0, puStack_188 != (int8_t *)0x0)) {
          *puStack_188 = 0;
        }
        uVar10 = uVar7;
        if (uStack_180 != 0) {
          do {
            if ((byte)(puStack_188[uVar10] + 0x9f) < 0x1a) {
              puStack_188[uVar10] = puStack_188[uVar10] + -0x20;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
            uVar10 = uVar10 + 1;
          } while (uVar5 < uStack_180);
        }
        puStack_148 = &UNK_1809fcc58;
        puStack_140 = auStack_130;
        uStack_138 = 0;
        auStack_130[0] = 0;
        ppuStack_198 = &puStack_f0;
        puStack_f0 = &UNK_180a3c3e0;
        uStack_d8 = 0;
        lStack_e8 = 0;
        uStack_e0 = 0;
        puVar8 = &DAT_18098bc73;
        if (puStack_188 != (int8_t *)0x0) {
          puVar8 = puStack_188;
        }
        FUN_180049bf0(&puStack_148,puVar8);
        puVar6 = &DAT_180a08120;
        if ((uStack_168 & param_8) == 0) {
          puVar6 = &DAT_180a089e8;
        }
        (**(code **)(puStack_f0 + 0x10))(&puStack_f0,puVar6);
        uVar7 = param_2[1];
        if (uVar7 < (ulonglong)param_2[2]) {
          param_2[1] = uVar7 + 0x78;
          ppuStack_198 = (void **)uVar7;
          FUN_1800b8300(uVar7);
          FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
        }
        else {
          FUN_180226020(param_2,&puStack_148);
        }
        ppuStack_198 = &puStack_f0;
        puStack_f0 = &UNK_180a3c3e0;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_e8 = 0;
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        puStack_f0 = &UNK_18098bcb0;
        ppuStack_198 = &puStack_148;
        puStack_148 = &UNK_18098bcb0;
        puStack_190 = &UNK_180a3c3e0;
        if (puStack_188 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_188 = (int8_t *)0x0;
        uStack_178 = uStack_178 & 0xffffffff00000000;
        puStack_190 = &UNK_18098bcb0;
        uStack_168 = uStack_168 << 1 | (ulonglong)((longlong)uStack_168 < 0);
        lVar11 = lVar11 + 0x60;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  puStack_c8 = &UNK_1809fcc58;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  ppuStack_198 = &puStack_70;
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  FUN_180049bf0(&puStack_c8,&UNK_180a13580);
  switch(param_5) {
  default:
    puVar6 = &UNK_180a0d190;
    break;
  case 1:
    puVar6 = &UNK_180a0d170;
    break;
  case 2:
  case 0xc:
    puVar6 = &UNK_180a0d180;
    break;
  case 3:
  case 0xd:
    puVar6 = &UNK_180a0d1d0;
    break;
  case 4:
    puVar6 = &UNK_180a0d258;
    break;
  case 5:
    puVar6 = &UNK_180a0d1e8;
    break;
  case 6:
    puVar6 = &UNK_180a0d1a0;
    break;
  case 7:
  case 0xe:
    puVar6 = &UNK_180a0d1b8;
    break;
  case 8:
  case 0xf:
    puVar6 = &UNK_180a0d238;
    break;
  case 9:
    puVar6 = &UNK_180a0d280;
    break;
  case 10:
    puVar6 = &UNK_180a0d200;
    break;
  case 0xb:
    puVar6 = &UNK_180a0d218;
  }
  (**(code **)(puStack_70 + 0x10))(&puStack_70,puVar6);
  uVar7 = param_2[1];
  if (uVar7 < (ulonglong)param_2[2]) {
    param_2[1] = uVar7 + 0x78;
    ppuStack_198 = (void **)uVar7;
    FUN_1800b8300(uVar7);
    FUN_180627ae0(uVar7 + 0x58,&puStack_70);
  }
  else {
    FUN_180226020(param_2,&puStack_c8);
  }
  ppuStack_198 = &puStack_70;
  puStack_70 = &UNK_180a3c3e0;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  puStack_70 = &UNK_18098bcb0;
  ppuStack_198 = &puStack_c8;
  puStack_c8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1b8);
}



int FUN_180225200(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 8) {
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a130d0);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a130e0);
    if (iVar2 == 0) {
      return 2;
    }
  }
  lVar5 = 0;
  if (iVar3 == 6) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a130b4)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + -3;
      }
    }
  }
  if ((iVar3 == 0xb) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a130c0), iVar2 == 0)) {
    return 0x30;
  }
  if (iVar3 == 7) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13100)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 8) {
        return (int)lVar4 + 0x2b;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13108)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 8) {
        return (int)lVar4 + -3;
      }
    }
  }
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a130f0), iVar2 == 0)) {
    return 5;
  }
  if ((((iVar3 == 2) && (pcVar1 = *(char **)(param_1 + 8), *pcVar1 == 'A')) && (pcVar1[1] == '8'))
     && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13140), iVar2 == 0))
  {
    return 0x36;
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((iVar3 == 0xc) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (iVar3 == 2) {
    pcVar1 = *(char **)(param_1 + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(param_1 + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (iVar3 == 7) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13158)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 8) {
        return (int)lVar4 + 0x24;
      }
    }
  }
  if (iVar3 == 3) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13160)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 9;
      }
    }
  }
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (iVar3 == 4) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a1318c)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 9;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a1316c)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 10;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13174)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xb;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131a0)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xc;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131a8)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xd;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13194)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xe;
      }
    }
  }
  if (iVar3 == 3) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a1319c)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x10;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131bc)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x11;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131c0)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x12;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131b0)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x13;
      }
    }
  }
  if (iVar3 == 5) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131b4)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 6) {
        return (int)lVar4 + 0x12;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131cc)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 6) {
        return (int)lVar4 + 0x13;
      }
    }
  }
  if (iVar3 == 3) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131d4)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x16;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131c4)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x17;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131c8)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x18;
      }
    }
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13208), iVar2 == 0))
  {
    return 0x34;
  }
  if ((iVar3 == 0x12) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a131d8), iVar2 == 0))
  {
    return 0x35;
  }
  if (iVar3 == 4) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a131ec)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x1b;
      }
    }
  }
  if (iVar3 == 5) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13238)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 6) {
        return (int)lVar4 + 0x28;
      }
    }
  }
  if ((iVar3 == 10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (iVar3 == 4) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13230)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x1e;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a13264)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x1f;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a1326c)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x20;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a1324c)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x21;
      }
    }
  }
  if ((iVar3 == 10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((iVar3 == 9) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (iVar3 == 6) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(longlong *)(param_1 + 8) + lVar4) == (&UNK_180a132a4)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x22;
      }
    }
  }
  if ((iVar3 == 10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (iVar3 == 6) {
    while (lVar6 = lVar5, *(char *)(*(longlong *)(param_1 + 8) + lVar6) == (&UNK_180a13274)[lVar6])
    {
      lVar5 = lVar6 + 1;
      if (lVar6 + 1 == 7) {
        return (int)lVar6 + 0x23;
      }
    }
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a13280), iVar2 == 0))
  {
    return 0x2a;
  }
  if (iVar3 == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((iVar3 == 0xb) && (iVar3 = strcmp(*(uint64_t *)(param_1 + 8),&UNK_180a132c0), iVar3 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_18022525e(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  
  lVar4 = 0;
  if (unaff_EBX == 6) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a130b4)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130c0), iVar2 == 0)) {
    return 0x30;
  }
  if (unaff_EBX == 7) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13100)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x2b;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13108)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130f0), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar5 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar5) == (&UNK_180a13274)[lVar5]
          ) {
      lVar4 = lVar5 + 1;
      if (lVar5 + 1 == 7) {
        return (int)lVar5 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802252a7(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130c0), iVar2 == 0)) {
    return 0x30;
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13100)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x2b;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13108)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130f0), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802252d3(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13100)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x2b;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13108)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130f0), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225317(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13108)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130f0), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225357(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a130f0), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225383(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802253c2(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13130), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802253ee(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13140), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_18022541a(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13110), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225446(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13120), iVar2 == 0)) {
    return 9;
  }
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225472(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if (unaff_EBX == 2) {
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'L') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 10;
    }
    pcVar1 = *(char **)(unaff_RDI + 8);
    if (((*pcVar1 == 'R') && (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
      return 0xb;
    }
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802254b1(void)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar4;
  longlong unaff_RDI;
  
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'R')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 0xb;
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13158)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13160)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1318c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1316c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13174)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131a8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13194)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1319c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131bc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b0)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131b4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131cc)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131d4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131c8)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a131ec)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13238)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13230)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13264)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1326c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a1324c)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a132a4)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar4) == (&UNK_180a13274)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802254f0(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 7) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13158)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 8) {
        return (int)lVar2 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13160)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar1 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1318c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1316c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13174)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225537(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13160)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar1 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1318c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1316c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13174)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225577(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13180), iVar1 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1318c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1316c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13174)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802255a3(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1318c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1316c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13174)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802255e7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1316c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13174)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225627(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13174)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225667(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802256a7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131a8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802256e7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13194)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225727(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1319c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225767(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131bc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802257a7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802257e7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b0)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225827(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131b4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225867(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131cc)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802258a7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131d4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802258e7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225927(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131c8)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225967(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131f8), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225993(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13208), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802259bf(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a131d8), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802259eb(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a131ec)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225a27(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13238)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225a67(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13240), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225a93(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13220), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225abf(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13230)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225b07(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13264)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225b47(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1326c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225b87(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a1324c)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225bc7(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13258), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225bf3(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13298), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225c1f(void)

{
  int iVar1;
  longlong lVar2;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_RDI;
  
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a132a4)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar3) == (&UNK_180a13274)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225c59(void)

{
  int iVar1;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar2;
  longlong unaff_RDI;
  
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132b0), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar2 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13274)[lVar2]) {
      unaff_RSI = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225c85(void)

{
  int iVar1;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong lVar2;
  longlong unaff_RDI;
  
  if (unaff_EBX == 6) {
    while (lVar2 = unaff_RSI,
          *(char *)(*(longlong *)(unaff_RDI + 8) + lVar2) == (&UNK_180a13274)[lVar2]) {
      unaff_RSI = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a13280), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



/**
 * 检查字符串匹配并返回标识符（版本1）
 * 
 * 此函数检查字符串匹配条件并返回相应的标识符值。
 * 
 * @param 无参数
 * @return 返回匹配的标识符值，0表示不匹配
 * 
 * 主要功能:
 * - 检查EBX寄存器值是否为0x11
 * - 比较RDI+8位置的字符串与预定义字符串
 * - 检查EBX寄存器值是否为0xe
 * - 检查EBX寄存器值是否为0xb
 * - 返回相应的标识符值
 */
int32_t 检查字符串匹配返回标识符版本1(void)

{
  int 比较结果;
  int 寄存器EBX;
  longlong 寄存器RDI;
  
  // 检查EBX=0x11且字符串匹配
  if ((寄存器EBX == 0x11) &&
     (比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&UNK_180a13280), 比较结果 == 0)) {
    return 0x2a;  // 返回标识符42
  }
  
  // 检查EBX=0xe的情况
  if (寄存器EBX == 0xe) {
    比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&UNK_180a132d0);
    if (比较结果 == 0) {
      return 0x2e;  // 返回标识符46
    }
    比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&UNK_180a132e0);
    if (比较结果 == 0) {
      return 0x2f;  // 返回标识符47
    }
  }
  
  // 检查EBX=0xb且字符串匹配
  if ((寄存器EBX == 0xb) &&
     (比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&UNK_180a132c0), 比较结果 == 0)) {
    return 0x33;  // 返回标识符51
  }
  
  return 0;  // 无匹配返回0
}



int32_t FUN_180225cf2(void)

{
  int iVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132d0);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int32_t FUN_180225d1e(void)

{
  int iVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132e0);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if (unaff_EBX == 0xb) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0);
    if (iVar1 == 0) {
      return 0x33;
    }
  }
  return 0;
}



int32_t FUN_180225d4a(void)

{
  int iVar1;
  int unaff_EBX;
  longlong unaff_RDI;
  
  if (unaff_EBX == 0xb) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&UNK_180a132c0);
    if (iVar1 == 0) {
      return 0x33;
    }
  }
  return 0;
}



uint64_t FUN_180225d76(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





