#include "TaleWorlds.Native.Split.h"

// 01_initialization_part018.c - 初始化模块第18部分 (7个函数)
// 本文件包含系统初始化、资源管理、配置计算等功能

// 全局变量声明
undefined8 _DAT_180c86920;  // 引擎配置数据
undefined8 _DAT_180c86918;  // 全局状态指针
undefined8 _DAT_180c86950;  // 配置参数指针
undefined8 _DAT_180c86870;  // 主引擎指针
undefined8 _DAT_180c868b0;  // 子系统配置指针
undefined8 _DAT_180c86890;  // 扩展配置指针
undefined8 _DAT_180c82868;  // 基础配置指针
undefined8 _DAT_180c86930;  // 高级配置指针
undefined8 _DAT_180c868a8;  // 替代配置指针
undefined8 _DAT_180c8ed08;  // 外部接口指针
undefined8 _DAT_180c8ed18;  // 内存管理器
undefined8 _DAT_180bf00a8;  // 安全验证数据
undefined8 _DAT_180bf65b8;  // 时间戳数据

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
  
  engine_config = _DAT_180c86920;
  quality_level = *(int *)(_DAT_180c86920 + 0xd90) + -1;
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
  *(undefined4 *)(config_ptr + 0x3a8) = 0x7f7fffff;
  *(uint *)(config_ptr + 0x3ac) = (uint)(*(int *)(engine_config + 0xd90) == 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004cc20(longlong *param_1)
void FUN_18004cc20(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)param_1[0x7c];
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x14] = &UNK_180a3c3e0;
    if (puVar1[0x15] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x17) = 0;
    puVar1[0x14] = &UNK_18098bcb0;
    puVar1[0x10] = &UNK_180a3c3e0;
    if (puVar1[0x11] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x10] = &UNK_18098bcb0;
    if (puVar1[0xc] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    FUN_180057170();
    FUN_180057170();
    *puVar1 = &UNK_180a3c3e0;
    if (puVar1[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *puVar1 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  param_1[0x7c] = 0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    *puVar1 = &UNK_180a08db0;
    FUN_18005e570(_DAT_180c82868,puVar1[0x28]);
    puVar1[0x28] = 0;
    puVar1[0x29] = &UNK_180a3c3e0;
    if (puVar1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar1[0x2a] = 0;
    *(undefined4 *)(puVar1 + 0x2c) = 0;
    puVar1[0x29] = &UNK_18098bcb0;
    FUN_180174950();
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar2);
    }
  }
  param_1[1] = 0;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_180057d70(lVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  *param_1 = 0;
  lVar2 = _DAT_180c86918;
  if (_DAT_180c86918 != 0) {
    FUN_180057550();
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  _DAT_180c86918 = 0;
  FUN_1800578a0();
  _DAT_180c86950 = 0;
  if (param_1[6] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[6] = 0;
  param_1[0x6d] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x6e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6d] = (longlong)&UNK_18098bcb0;
  param_1[0x69] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x6a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x69] = (longlong)&UNK_18098bcb0;
  FUN_180057830();
  FUN_18005d260(param_1 + 0x5c,param_1[0x5e]);
  param_1[0x58] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x59] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x58] = (longlong)&UNK_18098bcb0;
  param_1[0x52] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x53] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x52] = (longlong)&UNK_18098bcb0;
  param_1[0x4e] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x4f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4e] = (longlong)&UNK_18098bcb0;
  param_1[0x39] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x3a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x39] = (longlong)&UNK_18098bcb0;
  param_1[0x32] = (longlong)&UNK_18098bcb0;
  param_1[0x2e] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x2f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2e] = (longlong)&UNK_18098bcb0;
  param_1[0x29] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x29] = (longlong)&UNK_18098bcb0;
  if (param_1[0x21] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18005d580();
  param_1[0x17] = (longlong)&UNK_180a3c3e0;
  if (param_1[0x18] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = (longlong)&UNK_18098bcb0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
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



// 函数: void FUN_18004d020(undefined8 param_1,longlong param_2)
void FUN_18004d020(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  bool bVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_368 [32];
  undefined1 uStack_348;
  char cStack_338;
  char cStack_337;
  char acStack_336 [2];
  uint uStack_334;
  undefined *puStack_330;
  char *pcStack_328;
  uint uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 *puStack_308;
  uint uStack_300;
  undefined8 uStack_2f8;
  ulonglong uStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  uint uStack_2d8;
  ulonglong uStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined4 uStack_2b8;
  ulonglong uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  uint uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined *puStack_288;
  undefined4 *puStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  longlong lStack_260;
  undefined *puStack_258;
  longlong lStack_250;
  uint uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined *puStack_238;
  longlong lStack_230;
  uint uStack_228;
  undefined4 uStack_220;
  undefined *puStack_218;
  longlong lStack_210;
  uint uStack_208;
  undefined4 uStack_200;
  undefined *puStack_1f8;
  longlong lStack_1f0;
  uint uStack_1e8;
  undefined4 uStack_1e0;
  undefined *puStack_1d8;
  longlong lStack_1d0;
  uint uStack_1c8;
  undefined4 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  int iStack_1a8;
  undefined4 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  int iStack_188;
  undefined4 uStack_180;
  undefined *puStack_178;
  longlong lStack_170;
  undefined4 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined *puStack_148;
  longlong lStack_140;
  undefined4 uStack_130;
  undefined *puStack_128;
  longlong lStack_120;
  undefined4 uStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  undefined4 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined *puStack_c8;
  longlong lStack_c0;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  lVar24 = _DAT_180c86870;
  uStack_a8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_368;
  puVar11 = (undefined1 *)0x0;
  uStack_334 = 0;
  lStack_260 = _DAT_180c86870;
  cStack_338 = '\0';
  puVar17 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar17 = *(undefined **)(param_2 + 8);
  }
  lVar20 = -1;
  do {
    lVar9 = lVar20;
    lVar20 = lVar9 + 1;
  } while (puVar17[lVar20] != '\0');
  uVar21 = lVar9 + 2;
  puStack_310 = &UNK_180a3c3e0;
  uStack_2f8 = 0;
  puStack_308 = (undefined1 *)0x0;
  uStack_300 = 0;
  puStack_268 = puVar17;
  uStack_150 = uVar21;
  (**(code **)(*(longlong *)(_DAT_180c86870 + 0x2c0) + 0x10))
            ((longlong *)(_DAT_180c86870 + 0x2c0),puVar17);
  uStack_2f0 = 0;
  puVar14 = puVar11;
  if (uVar21 != 0) {
    do {
      bVar1 = puVar17[uStack_2f0];
      uVar8 = (uint)puVar14;
      if ((bVar1 & 0xdf) == 0) {
        lVar20 = lVar24 + 0x2e0;
        lVar9 = FUN_18062b420(_DAT_180c8ed18,0x40,*(undefined1 *)(lVar24 + 0x308));
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
          iVar6 = strcmp(puVar11,&UNK_1809fd150);
          bVar31 = iVar6 == 0;
        }
        else {
          bVar31 = false;
        }
        if (bVar31) {


// 函数: void FUN_18004e5f0(longlong param_1)
void FUN_18004e5f0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 0x3d0);
  if (((int)*(float *)(_DAT_180c86950 + 0x17ec) == *(int *)(param_1 + 0x3cc)) &&
     ((int)*(float *)(_DAT_180c86950 + 0x17f0) == *piVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FUN_180092820(_DAT_180c86950,*(int *)(param_1 + 0x3cc),*piVar1);
  }
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x38) == 2) {
    if ((*(char *)(param_1 + 0x3d4) != '\0') || (*(char *)(param_1 + 0x3d5) != '\0')) {
      uVar2 = *(undefined4 *)(_DAT_180c86920 + 0x1ea0);
      FUN_18005ca20(_DAT_180c86920,0);
      FUN_1801725e0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x3cc),*piVar1,
                    *(undefined1 *)(param_1 + 0x3d5));
      FUN_1800a3880(_DAT_180c86938,*(undefined4 *)(param_1 + 0x3cc),*piVar1,1);
      FUN_18005ca20(_DAT_180c86920,uVar2);
      FUN_1801725e0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x3cc),*piVar1,
                    *(undefined1 *)(param_1 + 0x3d5));
      bVar6 = true;
      goto LAB_18004e721;
    }
  }
  else {
    if (*(char *)(param_1 + 0x3d4) != '\0') {
      iVar3 = *(int *)(_DAT_180c86920 + 0x1ea0);
      if ((*(char *)(param_1 + 0x3d5) != '\0') || (bVar4)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      FUN_1801725e0(*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x3cc),*piVar1,uVar5);
      bVar6 = iVar3 == 2;
      goto LAB_18004e721;
    }
    if (!bVar4) {
      return;
    }
  }
  bVar6 = false;
LAB_18004e721:
  FUN_1800a3880(_DAT_180c86938,*(undefined4 *)(param_1 + 0x3cc),*piVar1,bVar6);
  if (!bVar4) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_1809fd4d8,*(undefined4 *)(param_1 + 0x3cc),*piVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18004e7a0(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puStack_c8;
  longlong lStack_c0;
  uint uStack_b8;
  ulonglong uStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [40];
  
  lVar3 = _DAT_180c86870;
  uStack_88 = 0xfffffffffffffffe;
  auVar1 = *(undefined1 (*) [16])
            (*(longlong *)(_DAT_180c86870 + 8) + 0xcc +
            (ulonglong)(*(uint *)(*(longlong *)(_DAT_180c86870 + 8) + 0x13c) & 1) * 0x48);
  if ((auVar1._12_4_ != 0) && (auVar1._8_4_ != 0)) {
    puStack_c8 = &UNK_180a3c3e0;
    uStack_b0 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    FUN_180628380(&puStack_c8,auVar1._0_4_);
    uVar5 = uStack_b8 + 1;
    FUN_1806277c0(&puStack_c8,uVar5);
    *(undefined2 *)((ulonglong)uStack_b8 + lStack_c0) = 0x2c;
    uStack_b8 = uVar5;
    FUN_180628380(&puStack_c8,auVar1._0_8_ >> 0x20);
    uVar5 = uStack_b8 + 1;
    FUN_1806277c0(&puStack_c8,uVar5);
    *(undefined2 *)((ulonglong)uStack_b8 + lStack_c0) = 0x2c;
    uStack_b8 = uVar5;
    FUN_180628380(&puStack_c8,auVar1._8_8_ & 0xffffffff);
    iVar6 = uStack_b8 + 1;
    FUN_1806277c0(&puStack_c8,iVar6);
    *(undefined2 *)((ulonglong)uStack_b8 + lStack_c0) = 0x2c;
    uStack_b8 = iVar6;
    FUN_180628380(&puStack_c8,auVar1._8_8_ >> 0x20);
    puVar4 = (undefined8 *)FUN_180627ae0(auStack_80,&puStack_c8);
    FUN_18005c8a0(_DAT_180c868b0 + 0xe30,puVar4);
    *puVar4 = &UNK_180a3c3e0;
    if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    *puVar4 = &UNK_18098bcb0;
    puStack_c8 = &UNK_180a3c3e0;
    if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_c0 = 0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    puStack_c8 = &UNK_18098bcb0;
  }
  lVar2 = *(longlong *)(lVar3 + 8);
  auVar1 = *(undefined1 (*) [16])(lVar2 + 0xdc + (ulonglong)(*(uint *)(lVar2 + 0x13c) & 1) * 0x48);
  if ((auVar1._12_4_ != 0) && (auVar1._8_4_ != 0)) {
    puStack_a8 = &UNK_180a3c3e0;
    uStack_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    FUN_180628380(&puStack_a8,auVar1._0_4_);
    uVar5 = uStack_98 + 1;
    FUN_1806277c0(&puStack_a8,uVar5);
    *(undefined2 *)((ulonglong)uStack_98 + lStack_a0) = 0x2c;
    uStack_98 = uVar5;
    FUN_180628380(&puStack_a8,auVar1._0_8_ >> 0x20);
    uVar5 = uStack_98 + 1;
    FUN_1806277c0(&puStack_a8,uVar5);
    *(undefined2 *)((ulonglong)uStack_98 + lStack_a0) = 0x2c;
    uStack_98 = uVar5;
    FUN_180628380(&puStack_a8,auVar1._8_8_ & 0xffffffff);
    iVar6 = uStack_98 + 1;
    FUN_1806277c0(&puStack_a8,iVar6);
    *(undefined2 *)((ulonglong)uStack_98 + lStack_a0) = 0x2c;
    uStack_98 = iVar6;
    FUN_180628380(&puStack_a8,auVar1._8_8_ >> 0x20);
    puVar4 = (undefined8 *)FUN_180627ae0(auStack_60,&puStack_a8);
    FUN_18005c8a0(_DAT_180c868b0 + 0xef0,puVar4);
    *puVar4 = &UNK_180a3c3e0;
    if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    *puVar4 = &UNK_18098bcb0;
    puStack_a8 = &UNK_180a3c3e0;
    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x13c);
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



// 函数: void FUN_18004eb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18004eb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puStack_68;
  longlong lStack_60;
  uint uStack_58;
  undefined8 uStack_50;
  
  lVar3 = _DAT_180c868b0;
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  if (*(int *)(_DAT_180c86920 + 0x1ea0) == 0) {
    uVar1 = *(uint *)(_DAT_180c868b0 + 0xe40);
    uVar5 = (ulonglong)uVar1;
    if (*(longlong *)(_DAT_180c868b0 + 0xe38) != 0) {
      FUN_1806277c0(&puStack_68,uVar5,param_3,param_4,0xfffffffffffffffe);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_60,*(undefined8 *)(lVar3 + 0xe38),uVar5);
    }
    if (lStack_60 != 0) {
      *(undefined1 *)(uVar5 + lStack_60) = 0;
    }
    uStack_50 = CONCAT44(*(undefined4 *)(lVar3 + 0xe4c),(undefined4)uStack_50);
  }
  lVar3 = _DAT_180c868b0;
  uStack_58 = 0;
  uVar1 = *(uint *)(_DAT_180c868b0 + 0xf00);
  uVar5 = (ulonglong)uVar1;
  if (*(longlong *)(_DAT_180c868b0 + 0xef8) != 0) {
    FUN_1806277c0(&puStack_68,uVar5);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_60,*(undefined8 *)(lVar3 + 0xef8),uVar5);
  }
  if (lStack_60 != 0) {
    *(undefined1 *)(uVar5 + lStack_60) = 0;
  }
  lVar4 = _DAT_180c868b0;
  uStack_50 = CONCAT44(*(undefined4 *)(lVar3 + 0xf0c),(undefined4)uStack_50);
  uVar2 = *(uint *)(_DAT_180c868b0 + 0xfc0);
  uVar5 = (ulonglong)uVar2;
  uStack_58 = uVar1;
  if (*(longlong *)(_DAT_180c868b0 + 0xfb8) != 0) {
    FUN_1806277c0(&puStack_68,uVar5);
  }
  if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_60,*(undefined8 *)(lVar4 + 0xfb8),uVar5);
  }
  if (lStack_60 != 0) {
    *(undefined1 *)(uVar5 + lStack_60) = 0;
  }
  uStack_50 = CONCAT44(*(undefined4 *)(lVar4 + 0xfcc),(undefined4)uStack_50);
  puStack_68 = &UNK_180a3c3e0;
  if (lStack_60 != 0) {
    uStack_58 = uVar2;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18004ef60(void)
void FUN_18004ef60(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  char cVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auStack_208 [32];
  longlong lStack_1e8;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 *apuStack_1c8 [10];
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [264];
  ulonglong uStack_48;
  
  lVar3 = _DAT_180c86870;
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_208;
  if (*(undefined **)*_DAT_180c8ed08 == &UNK_18098bb88) {
    cVar9 = *(int *)(_DAT_180c8a9c8 + 0xe0) != 0;
  }
  else {
    cVar9 = (**(code **)(*(undefined **)*_DAT_180c8ed08 + 0x48))();
  }
  if (cVar9 == '\0') {
    _DAT_180bf65b8 = timeGetTime();
  }
  else {
    _DAT_180bf65b8 = 0xb061;
  }
  lVar2 = _DAT_180c86920;
  _DAT_180bf65b8 = _DAT_180bf65b8 ^ 0x41c64e6d;
  if ((*(longlong *)(_DAT_180c86890 + 0x7ab8) == 0) || (*(int *)(_DAT_180c86920 + 0x540) < 1)) {
    if (*(int *)(_DAT_180c86920 + 0x2140) == 0) {
      fVar10 = *(float *)(_DAT_180c86920 + 0x20d0);
    }
    else {
      fVar10 = 100.0;
    }
    fVar10 = fVar10 * 0.01;
  }
  else {
    fVar10 = 1.0;
  }
  *(float *)(lVar3 + 0x234) = fVar10;
  *(undefined4 *)(lVar3 + 0x238) = 0x3f800000;
  fVar12 = 1.0;
  if (*(int *)(lVar2 + 0x1ea0) == 1) {
    iVar1 = *(int *)(lVar2 + 0x1d50);
    piVar5 = (int *)FUN_180171f10(*(undefined8 *)(_DAT_180c86870 + 8),auStack_170);
    fVar12 = (float)iVar1 / (float)*piVar5;
    fVar10 = fVar12 * *(float *)(lVar3 + 0x234);
    fVar12 = fVar12 * *(float *)(lVar3 + 0x238);
  }
  if (0.2 <= fVar10) {
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  else {
    fVar10 = 0.2;
  }
  *(float *)(lVar3 + 0x234) = fVar10;
  fVar10 = 0.2;
  if ((0.2 <= fVar12) && (fVar10 = fVar12, 1.0 <= fVar12)) {
    fVar10 = 1.0;
  }
  *(float *)(lVar3 + 0x238) = fVar10;
  *(undefined1 *)(lVar3 + 0x22d) = 0;
  uVar11 = log2f();
  *(undefined4 *)(lVar3 + 0x230) = uVar11;
  uVar11 = log2f();
  *(undefined4 *)(lVar3 + 0x240) = uVar11;
  uVar11 = log2f();
  *(undefined4 *)(lVar3 + 0x244) = uVar11;
  uVar11 = log2f();
  *(undefined4 *)(lVar3 + 0x248) = uVar11;
  uVar11 = log2f();
  *(undefined4 *)(lVar3 + 0x24c) = uVar11;
  uVar11 = log2f(*(float *)(_DAT_180c86920 + 0x2220) * 0.01);
  *(undefined4 *)(lVar3 + 0x23c) = uVar11;
  *(undefined8 *)(lVar3 + 0x254) = 0x3f8000003f800000;
  lStack_1d8 = 0x3f8000003f800000;
  *(undefined8 *)(lVar3 + 0x25c) = 0x3f8000003f800000;
  lVar4 = _DAT_180c86890;
  lVar2 = _DAT_180c82868;
  puStack_168 = &UNK_1809fdc18;
  puStack_160 = auStack_150;
  auStack_150[0] = 0;
  uStack_158 = 0xd;
  strcpy_s(auStack_150,0x10,&UNK_180a04130);
  puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x208,8,3);
  lStack_1e8 = lVar2 + 0x70;
  apuStack_1c8[0] = puVar6;
  FUN_18020e0e0(puVar6,&puStack_168,3,lVar2 + 0x2e0);
  *puVar6 = &UNK_1809fe220;
  apuStack_1c8[0] = puVar6;
  FUN_18020e840(puVar6);
  FUN_18005ea90(lVar2 + 0x48,apuStack_1c8);
  *(undefined8 **)(lVar4 + 0x18) = puVar6;
  puStack_168 = &UNK_18098bcb0;
  puVar8 = &DAT_18098bc73;
  if (*(undefined **)(lVar3 + 0x278) != (undefined *)0x0) {
    puVar8 = *(undefined **)(lVar3 + 0x278);
  }
  (**(code **)(*(longlong *)(_DAT_180c86930 + 0x560) + 0x10))
            ((longlong *)(_DAT_180c86930 + 0x560),puVar8);
  lVar3 = _DAT_180c868a8;
  lStack_1d8 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *(undefined8 *)(lStack_1d8 + 0x28) = 3;
  *(undefined4 *)(lStack_1d8 + 0x19) = 0;
  *(undefined2 *)(lStack_1d8 + 0x1d) = 0;
  *(undefined1 *)(lStack_1d8 + 0x1f) = 0;
  *(longlong *)lStack_1d8 = lStack_1d8;
  *(longlong *)(lStack_1d8 + 8) = lStack_1d8;
  *(undefined8 *)(lStack_1d8 + 0x10) = 0;
  *(undefined1 *)(lStack_1d8 + 0x18) = 0;
  *(undefined8 *)(lStack_1d8 + 0x20) = 0;
  *(longlong *)(lVar3 + 0xa8) = lStack_1d8;
  lStack_1d0 = lStack_1d8;
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a012e0,&UNK_180a00350,FUN_180086670);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a002e0,&DAT_180a00410,FUN_1800868d0);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a012f0,&UNK_180a00340,FUN_180086600);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a00ef8,&UNK_180a00420,FUN_180086960);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&UNK_180a00e18,&UNK_180a00450,FUN_180086a00);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a01228,&DAT_180a00360,FUN_180086740);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a00c90,&UNK_180a00480,FUN_180086aa0);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&UNK_180a00ab8,&UNK_180a00ac8,FUN_1800900c0);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&UNK_180a01170,&UNK_180a00368,FUN_180086830);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a009f0,&UNK_180a00a00,FUN_180090020);
  FUN_1802567b0(*(undefined8 *)(_DAT_180c868a8 + 0xa8),&DAT_180a00c80,&UNK_180a00490,FUN_180086b40);
  puVar7 = (undefined4 *)FUN_18008d660(lVar3 + 0xe0,&DAT_180a009f0);
  *puVar7 = 1;
  puVar7 = (undefined4 *)FUN_18008d660(lVar3 + 0xe0,&DAT_180a012f0);
  *puVar7 = 1;
  lStack_1d0 = FUN_18062b1e0(_DAT_180c8ed18,0x3878,8,3);
                    // WARNING: Subroutine does not return
  memset(lStack_1d0,0,0x3878);
}





// 函数: void FUN_18004f8e0(longlong param_1)
void FUN_18004f8e0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





