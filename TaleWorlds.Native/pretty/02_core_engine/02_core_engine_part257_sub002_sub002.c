#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

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
void 处理复杂数据流配置(uint64_t 上下文参数, uint64_t *数据结构指针, int64_t 配置参数1, int64_t 配置参数2,
                        int8_t 标志参数, int32_t 选项参数, uint 状态参数, uint64_t 地址参数)

{
  int iVar1;
  void **ppuVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint uVar5;
  void *puVar6;
  int8_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int8_t auStack_1b8 [32];
  void **ppuStack_198;
  void *puStack_190;
  int8_t *puStack_188;
  uint uStack_180;
  uint64_t uStack_178;
  int32_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t *puStack_158;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [64];
  void *puStack_f0;
  int64_t lStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [64];
  void *puStack_70;
  int64_t lStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_48;
  uint64_t uVar7;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  lVar11 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int32_t *)(param_2 + 3) = 3;
  uStack_168 = 1;
  uStack_170 = 1;
  puStack_148 = &unknown_var_3480_ptr;
  puStack_140 = auStack_130;
  uStack_138 = 0;
  auStack_130[0] = 0;
  ppuStack_198 = &puStack_f0;
  puStack_f0 = &system_data_buffer_ptr;
  uStack_d8 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  puStack_158 = param_2;
  FUN_180049bf0(&puStack_148,&unknown_var_5240_ptr);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
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
  (**(code **)(puStack_148 + 0x10))(&puStack_148,&unknown_var_5328_ptr);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
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
  iVar1 = *(int *)(system_message_buffer + 0x1d44);
  if (iVar1 == 0) {
    puVar6 = &unknown_var_6472_ptr;
  }
  else if (iVar1 == 1) {
    puVar6 = &unknown_var_6024_ptr;
  }
  else if (iVar1 == 2) {
    puVar6 = &system_data_2618;
  }
  else {
    puVar6 = &unknown_var_6048_ptr;
  }
  (**(code **)(puStack_148 + 0x10))(&puStack_148,puVar6);
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
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
  (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
  uVar7 = param_2[1];
  if (uVar7 < (uint64_t)param_2[2]) {
    param_2[1] = uVar7 + 0x78;
    ppuStack_198 = (void **)uVar7;
    FUN_1800b8300(uVar7);
    FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
  }
  else {
    FUN_180226020(param_2,&puStack_148);
  }
  ppuStack_198 = &puStack_f0;
  puStack_f0 = &system_data_buffer_ptr;
  if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (0 < *(int *)(param_4 + 0x10)) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_4992_ptr);
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_4 + 8) != (void *)0x0) {
      puVar6 = *(void **)(param_4 + 8);
    }
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,puVar6);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x15 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5360_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 2) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5280_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x16 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5304_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((int)param_7 < 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5456_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x14 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5472_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 0x20) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5392_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((char)param_7 < '\0') {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5416_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 0x10) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5544_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 4) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5568_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 8) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5496_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5520_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 & 0x40) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5664_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0xd & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5688_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 0x17 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5600_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((param_7 >> 10 & 1) == 0) {
    if ((param_7 >> 9 & 1) == 0) {
      puStack_148 = &unknown_var_3480_ptr;
      puStack_140 = auStack_130;
      uStack_138 = 0;
      auStack_130[0] = 0;
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &system_data_buffer_ptr;
      uStack_d8 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      FUN_180049bf0(&puStack_148,&unknown_var_5792_ptr);
      (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
      uVar7 = param_2[1];
      if (uVar7 < (uint64_t)param_2[2]) {
        param_2[1] = uVar7 + 0x78;
        ppuStack_198 = (void **)uVar7;
        FUN_1800b8300(uVar7);
        FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
      }
      else {
        FUN_180226020(param_2,&puStack_148);
      }
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &system_data_buffer_ptr;
      if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
    }
    else {
      puStack_148 = &unknown_var_3480_ptr;
      puStack_140 = auStack_130;
      uStack_138 = 0;
      auStack_130[0] = 0;
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &system_data_buffer_ptr;
      uStack_d8 = 0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      FUN_180049bf0(&puStack_148,&unknown_var_5760_ptr);
      (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
      uVar7 = param_2[1];
      if (uVar7 < (uint64_t)param_2[2]) {
        param_2[1] = uVar7 + 0x78;
        ppuStack_198 = (void **)uVar7;
        FUN_1800b8300(uVar7);
        FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
      }
      else {
        FUN_180226020(param_2,&puStack_148);
      }
      ppuStack_198 = &puStack_f0;
      puStack_f0 = &system_data_buffer_ptr;
      if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_d8 = uStack_d8 & 0xffffffff00000000;
    }
  }
  else {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5632_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 8 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5696_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0xf & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5728_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x10 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5880_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x11 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5904_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x12 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5824_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x13 & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5848_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x1d & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5960_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  if ((param_7 >> 0x1e & 1) != 0) {
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_180049bf0(&puStack_148,&unknown_var_5992_ptr);
    (**(code **)(puStack_f0 + 0x10))(&puStack_f0,&system_data_8120);
    uVar7 = param_2[1];
    if (uVar7 < (uint64_t)param_2[2]) {
      param_2[1] = uVar7 + 0x78;
      ppuStack_198 = (void **)uVar7;
      FUN_1800b8300(uVar7);
      FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
    }
    else {
      FUN_180226020(param_2,&puStack_148);
    }
    ppuStack_198 = &puStack_f0;
    puStack_f0 = &system_data_buffer_ptr;
    if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  ppuStack_198 = &puStack_148;
  lStack_e8 = 0;
  puStack_f0 = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  if (param_3 != 0) {
    plVar4 = (int64_t *)FUN_180240a60(param_3);
    iVar1 = (int)((plVar4[1] - *plVar4) / 0x60);
    lVar12 = (int64_t)iVar1;
    if (0 < iVar1) {
      do {
        uVar7 = 0;
        lVar9 = *plVar4 + lVar11;
        puStack_190 = &system_data_buffer_ptr;
        uStack_178 = 0;
        puStack_188 = (int8_t *)0x0;
        uStack_180 = 0;
        FUN_1806277c0(&puStack_190,*(int32_t *)(lVar9 + 0x10));
        if (0 < *(int *)(lVar9 + 0x10)) {
          puVar6 = &system_buffer_ptr;
          if (*(void **)(lVar9 + 8) != (void *)0x0) {
            puVar6 = *(void **)(lVar9 + 8);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_188,puVar6,(int64_t)(*(int *)(lVar9 + 0x10) + 1));
        }
        if ((*(int64_t *)(lVar9 + 8) != 0) && (uStack_180 = 0, puStack_188 != (int8_t *)0x0)) {
          *puStack_188 = 0;
        }
        uVar10 = uVar7;
        if (uStack_180 != 0) {
          do {
            if ((byte)(puStack_188[uVar10] + 0x9f) < 0x1a) {
              puStack_188[uVar10] = puStack_188[uVar10] + -0x20;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (uint64_t)uVar5;
            uVar10 = uVar10 + 1;
          } while (uVar5 < uStack_180);
        }
        puStack_148 = &unknown_var_3480_ptr;
        puStack_140 = auStack_130;
        uStack_138 = 0;
        auStack_130[0] = 0;
        ppuStack_198 = &puStack_f0;
        puStack_f0 = &system_data_buffer_ptr;
        uStack_d8 = 0;
        lStack_e8 = 0;
        uStack_e0 = 0;
        puVar8 = &system_buffer_ptr;
        if (puStack_188 != (int8_t *)0x0) {
          puVar8 = puStack_188;
        }
        FUN_180049bf0(&puStack_148,puVar8);
        puVar6 = &system_data_8120;
        if ((uStack_168 & param_8) == 0) {
          puVar6 = &system_data_89e8;
        }
        (**(code **)(puStack_f0 + 0x10))(&puStack_f0,puVar6);
        uVar7 = param_2[1];
        if (uVar7 < (uint64_t)param_2[2]) {
          param_2[1] = uVar7 + 0x78;
          ppuStack_198 = (void **)uVar7;
          FUN_1800b8300(uVar7);
          FUN_180627ae0(uVar7 + 0x58,&puStack_f0);
        }
        else {
          FUN_180226020(param_2,&puStack_148);
        }
        ppuStack_198 = &puStack_f0;
        puStack_f0 = &system_data_buffer_ptr;
        if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_e8 = 0;
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        puStack_f0 = &system_state_ptr;
        ppuStack_198 = &puStack_148;
        puStack_148 = &system_state_ptr;
        puStack_190 = &system_data_buffer_ptr;
        if (puStack_188 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_188 = (int8_t *)0x0;
        uStack_178 = uStack_178 & 0xffffffff00000000;
        puStack_190 = &system_state_ptr;
        uStack_168 = uStack_168 << 1 | (uint64_t)((int64_t)uStack_168 < 0);
        lVar11 = lVar11 + 0x60;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  puStack_c8 = &unknown_var_3480_ptr;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  ppuStack_198 = &puStack_70;
  puStack_70 = &system_data_buffer_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  FUN_180049bf0(&puStack_c8,&unknown_var_5936_ptr);
  switch(param_5) {
  default:
    puVar6 = &unknown_var_352_ptr;
    break;
  case 1:
    puVar6 = &unknown_var_320_ptr;
    break;
  case 2:
  case 0xc:
    puVar6 = &unknown_var_336_ptr;
    break;
  case 3:
  case 0xd:
    puVar6 = &unknown_var_416_ptr;
    break;
  case 4:
    puVar6 = &unknown_var_552_ptr;
    break;
  case 5:
    puVar6 = &unknown_var_440_ptr;
    break;
  case 6:
    puVar6 = &unknown_var_368_ptr;
    break;
  case 7:
  case 0xe:
    puVar6 = &unknown_var_392_ptr;
    break;
  case 8:
  case 0xf:
    puVar6 = &unknown_var_520_ptr;
    break;
  case 9:
    puVar6 = &unknown_var_592_ptr;
    break;
  case 10:
    puVar6 = &unknown_var_464_ptr;
    break;
  case 0xb:
    puVar6 = &unknown_var_488_ptr;
  }
  (**(code **)(puStack_70 + 0x10))(&puStack_70,puVar6);
  uVar7 = param_2[1];
  if (uVar7 < (uint64_t)param_2[2]) {
    param_2[1] = uVar7 + 0x78;
    ppuStack_198 = (void **)uVar7;
    FUN_1800b8300(uVar7);
    FUN_180627ae0(uVar7 + 0x58,&puStack_70);
  }
  else {
    FUN_180226020(param_2,&puStack_c8);
  }
  ppuStack_198 = &puStack_70;
  puStack_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_68 = 0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  puStack_70 = &system_state_ptr;
  ppuStack_198 = &puStack_c8;
  puStack_c8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_1b8);
}



int FUN_180225200(int64_t param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 8) {
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4736_ptr);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4752_ptr);
    if (iVar2 == 0) {
      return 2;
    }
  }
  lVar5 = 0;
  if (iVar3 == 6) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4708_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + -3;
      }
    }
  }
  if ((iVar3 == 0xb) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4720_ptr), iVar2 == 0)) {
    return 0x30;
  }
  if (iVar3 == 7) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4784_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 8) {
        return (int)lVar4 + 0x2b;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4792_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 8) {
        return (int)lVar4 + -3;
      }
    }
  }
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4768_ptr), iVar2 == 0)) {
    return 5;
  }
  if ((((iVar3 == 2) && (pcVar1 = *(char **)(param_1 + 8), *pcVar1 == 'A')) && (pcVar1[1] == '8'))
     && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4848_ptr), iVar2 == 0))
  {
    return 0x36;
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((iVar3 == 0xc) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4872_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 8) {
        return (int)lVar4 + 0x24;
      }
    }
  }
  if (iVar3 == 3) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4880_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 9;
      }
    }
  }
  if ((iVar3 == 8) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (iVar3 == 4) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4924_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 9;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4892_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 10;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4900_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xb;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4944_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xc;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4952_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xd;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4932_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0xe;
      }
    }
  }
  if (iVar3 == 3) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4940_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x10;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4972_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x11;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4976_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x12;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4960_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x13;
      }
    }
  }
  if (iVar3 == 5) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4964_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 6) {
        return (int)lVar4 + 0x12;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4988_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 6) {
        return (int)lVar4 + 0x13;
      }
    }
  }
  if (iVar3 == 3) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4996_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x16;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4980_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x17;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_4984_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 4) {
        return (int)lVar4 + 0x18;
      }
    }
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5048_ptr), iVar2 == 0))
  {
    return 0x34;
  }
  if ((iVar3 == 0x12) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5000_ptr), iVar2 == 0))
  {
    return 0x35;
  }
  if (iVar3 == 4) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5020_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x1b;
      }
    }
  }
  if (iVar3 == 5) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5096_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 6) {
        return (int)lVar4 + 0x28;
      }
    }
  }
  if ((iVar3 == 10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((iVar3 == 0xd) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (iVar3 == 4) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5088_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x1e;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5140_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x1f;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5148_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x20;
      }
    }
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5116_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 5) {
        return (int)lVar4 + 0x21;
      }
    }
  }
  if ((iVar3 == 10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((iVar3 == 9) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (iVar3 == 6) {
    lVar6 = lVar5;
    while (lVar4 = lVar6, *(char *)(*(int64_t *)(param_1 + 8) + lVar4) == (&unknown_var_5204_ptr)[lVar4])
    {
      lVar6 = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x22;
      }
    }
  }
  if ((iVar3 == 10) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (iVar3 == 6) {
    while (lVar6 = lVar5, *(char *)(*(int64_t *)(param_1 + 8) + lVar6) == (&unknown_var_5156_ptr)[lVar6])
    {
      lVar5 = lVar6 + 1;
      if (lVar6 + 1 == 7) {
        return (int)lVar6 + 0x23;
      }
    }
  }
  if ((iVar3 == 0x11) && (iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5168_ptr), iVar2 == 0))
  {
    return 0x2a;
  }
  if (iVar3 == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((iVar3 == 0xb) && (iVar3 = strcmp(*(uint64_t *)(param_1 + 8),&unknown_var_5232_ptr), iVar3 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_18022525e(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RDI;
  
  lVar4 = 0;
  if (unaff_EBX == 6) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4708_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4720_ptr), iVar2 == 0)) {
    return 0x30;
  }
  if (unaff_EBX == 7) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4784_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x2b;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4792_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4768_ptr), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar5 = lVar4;
    while (lVar3 = lVar5, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar5 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar5 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar5) == (&unknown_var_5156_ptr)[lVar5]
          ) {
      lVar4 = lVar5 + 1;
      if (lVar5 + 1 == 7) {
        return (int)lVar5 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802252a7(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4720_ptr), iVar2 == 0)) {
    return 0x30;
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4784_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x2b;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4792_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4768_ptr), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802252d3(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4784_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x2b;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4792_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4768_ptr), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225317(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4792_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + -3;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4768_ptr), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225357(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4768_ptr), iVar2 == 0)) {
    return 5;
  }
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225383(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'A')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 6;
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802253c2(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4832_ptr), iVar2 == 0)) {
    return 7;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802253ee(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4848_ptr), iVar2 == 0)) {
    return 0x36;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_18022541a(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4800_ptr), iVar2 == 0)) {
    return 8;
  }
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225446(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0xc) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4816_ptr), iVar2 == 0)) {
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225472(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
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
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802254b1(void)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  if ((((unaff_EBX == 2) && (pcVar1 = *(char **)(unaff_RDI + 8), *pcVar1 == 'R')) &&
      (pcVar1[1] == '8')) && (pcVar1[2] == '\0')) {
    return 0xb;
  }
  if (unaff_EBX == 7) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4872_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 8) {
        return (int)lVar3 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4880_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar2 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4924_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 9;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4892_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4900_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xb;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4944_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xc;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4952_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xd;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4932_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4940_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x10;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4972_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x11;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4976_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4960_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4964_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x12;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4988_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4996_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x16;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4980_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x17;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_4984_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 4) {
        return (int)lVar3 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar2 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar2 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar2 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5020_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5096_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 6) {
        return (int)lVar3 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar2 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar2 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5088_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1e;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5140_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x1f;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5148_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x20;
      }
    }
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5116_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 5) {
        return (int)lVar3 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar2 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar2 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar4 = unaff_RSI;
    while (lVar3 = lVar4, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5204_ptr)[lVar3]
          ) {
      lVar4 = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar2 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar4 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar4) == (&unknown_var_5156_ptr)[lVar4]) {
      unaff_RSI = lVar4 + 1;
      if (lVar4 + 1 == 7) {
        return (int)lVar4 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar2 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar2 == 0) {
      return 0x2e;
    }
    iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar2 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar2 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar2 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802254f0(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 7) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4872_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 8) {
        return (int)lVar2 + 0x24;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4880_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar1 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4924_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4892_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4900_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225537(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4880_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 9;
      }
    }
  }
  if ((unaff_EBX == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar1 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4924_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4892_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4900_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225577(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_4912_ptr), iVar1 == 0)) {
    return 0x2c;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4924_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4892_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4900_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802255a3(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4924_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 9;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4892_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4900_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802255e7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4892_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4900_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225627(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4900_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xb;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225667(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4944_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xc;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802256a7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4952_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xd;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802256e7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4932_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0xe;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225727(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4940_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x10;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225767(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4972_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x11;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802257a7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4976_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802257e7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4960_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225827(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4964_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x12;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225867(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4988_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x13;
      }
    }
  }
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802258a7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4996_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x16;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802258e7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4980_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x17;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225927(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 3) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_4984_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 4) {
        return (int)lVar2 + 0x18;
      }
    }
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225967(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5032_ptr), iVar1 == 0)) {
    return 0x1e;
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225993(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5048_ptr), iVar1 == 0)) {
    return 0x34;
  }
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802259bf(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0x12) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5000_ptr), iVar1 == 0)) {
    return 0x35;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_1802259eb(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5020_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1b;
      }
    }
  }
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225a27(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 5) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5096_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 6) {
        return (int)lVar2 + 0x28;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225a67(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5104_ptr), iVar1 == 0)) {
    return 0x20;
  }
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225a93(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 0xd) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5072_ptr), iVar1 == 0)) {
    return 0x21;
  }
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225abf(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5088_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1e;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225b07(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5140_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x1f;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225b47(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5148_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x20;
      }
    }
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225b87(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 4) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5116_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 5) {
        return (int)lVar2 + 0x21;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225bc7(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5128_ptr), iVar1 == 0)) {
    return 0x26;
  }
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225bf3(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 9) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5192_ptr), iVar1 == 0)) {
    return 0x27;
  }
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225c1f(void)

{
  int iVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar3;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 6) {
    lVar3 = unaff_RSI;
    while (lVar2 = lVar3, *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5204_ptr)[lVar2]
          ) {
      lVar3 = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x22;
      }
    }
  }
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar3 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar3) == (&unknown_var_5156_ptr)[lVar3]) {
      unaff_RSI = lVar3 + 1;
      if (lVar3 + 1 == 7) {
        return (int)lVar3 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225c59(void)

{
  int iVar1;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar2;
  int64_t unaff_RDI;
  
  if ((unaff_EBX == 10) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5216_ptr), iVar1 == 0)) {
    return 0x31;
  }
  if (unaff_EBX == 6) {
    while (lVar2 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5156_ptr)[lVar2]) {
      unaff_RSI = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int FUN_180225c85(void)

{
  int iVar1;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t lVar2;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 6) {
    while (lVar2 = unaff_RSI,
          *(char *)(*(int64_t *)(unaff_RDI + 8) + lVar2) == (&unknown_var_5156_ptr)[lVar2]) {
      unaff_RSI = lVar2 + 1;
      if (lVar2 + 1 == 7) {
        return (int)lVar2 + 0x23;
      }
    }
  }
  if ((unaff_EBX == 0x11) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5168_ptr), iVar1 == 0)) {
    return 0x2a;
  }
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
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
  int64_t 寄存器RDI;
  
  // 检查EBX=0x11且字符串匹配
  if ((寄存器EBX == 0x11) &&
     (比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&unknown_var_5168_ptr), 比较结果 == 0)) {
    return 0x2a;  // 返回标识符42
  }
  
  // 检查EBX=0xe的情况
  if (寄存器EBX == 0xe) {
    比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&unknown_var_5248_ptr);
    if (比较结果 == 0) {
      return 0x2e;  // 返回标识符46
    }
    比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&unknown_var_5264_ptr);
    if (比较结果 == 0) {
      return 0x2f;  // 返回标识符47
    }
  }
  
  // 检查EBX=0xb且字符串匹配
  if ((寄存器EBX == 0xb) &&
     (比较结果 = strcmp(*(uint64_t *)(寄存器RDI + 8),&unknown_var_5232_ptr), 比较结果 == 0)) {
    return 0x33;  // 返回标识符51
  }
  
  return 0;  // 无匹配返回0
}



int32_t FUN_180225cf2(void)

{
  int iVar1;
  int unaff_EBX;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5248_ptr);
    if (iVar1 == 0) {
      return 0x2e;
    }
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if ((unaff_EBX == 0xb) &&
     (iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr), iVar1 == 0)) {
    return 0x33;
  }
  return 0;
}



int32_t FUN_180225d1e(void)

{
  int iVar1;
  int unaff_EBX;
  int64_t unaff_RDI;
  
  if (unaff_EBX == 0xe) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5264_ptr);
    if (iVar1 == 0) {
      return 0x2f;
    }
  }
  if (unaff_EBX == 0xb) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr);
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
  int64_t unaff_RDI;
  
  if (unaff_EBX == 0xb) {
    iVar1 = strcmp(*(uint64_t *)(unaff_RDI + 8),&unknown_var_5232_ptr);
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





