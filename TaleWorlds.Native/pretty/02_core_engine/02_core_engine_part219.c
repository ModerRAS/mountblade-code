#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part219.c - 核心引擎模块第219部分
// 包含8个函数，主要涉及引擎初始化、内存管理和资源清理

// 函数: 空函数，可能用于初始化或占位
void initialize_empty_placeholder(void)

{
  return;
}



// WARNING: 全局变量以'_'开头的可能与较小符号在同一地址重叠

// 函数: 初始化引擎核心组件
undefined8 * initialize_engine_core(undefined8 *engine_context,longlong config_flags)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined4 auStackX_18 [2];
  int iStackX_20;
  longlong *plStack_190;
  longlong *plStack_188;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  longlong *plStack_168;
  char cStack_160;
  char cStack_15f;
  char cStack_15e;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  longlong *plStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uStack_f8 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  uVar9 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a0c4a0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  plStack_138 = (longlong *)param_1[8];
  param_1[8] = 0;
  if (plStack_138 != (longlong *)0x0) {
    (**(code **)(*plStack_138 + 0x38))();
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 100;
  uVar5 = FUN_18062b420(_DAT_180c8ed18,400,3);
  param_1[0xb] = uVar5;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 3;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 3;
  param_1[0x18] = 1;
  param_1[0x17] = &DAT_180be0000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 3;
  param_1[0x22] = 0;
  param_1[0x23] = _guard_check_icall;
  _Mtx_init_in_situ(param_1 + 0x24,2);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 3;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 3;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar11 = param_1 + 0x44;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x49) = 3;
  *puVar11 = puVar11;
  param_1[0x45] = puVar11;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined2 *)(param_1 + 0x3b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x55] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 3;
  FUN_1808fc838(param_1 + 0x5e,8,4,&SUB_18005d5f0,FUN_180045af0);
  param_1[100] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 3;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  plVar7 = param_1 + 0x91;
  *plVar7 = (longlong)&UNK_18098bcb0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *plVar7 = (longlong)&UNK_180a3c3e0;
  param_1[0x94] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = &UNK_18098bcb0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9b] = &UNK_180a3c3e0;
  param_1[0x9e] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0xa0] = &UNK_18098bcb0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa0] = &UNK_180a3c3e0;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa4] = &UNK_18098bcb0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa4] = &UNK_180a3c3e0;
  param_1[0xa7] = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 3;
  FUN_18024f160(param_1 + 0xae);
  param_1[0x4ce] = 0;
  _Cnd_init_in_situ(param_1 + 0x4cf);
  _Mtx_init_in_situ(param_1 + 0x4d8,2);
  *(undefined1 *)(param_1 + 0x4e2) = 0;
  _Cnd_init_in_situ(param_1 + 0x4e3);
  _Mtx_init_in_situ(param_1 + 0x4ec,2);
  *(undefined1 *)(param_1 + 0x4f6) = 0;
  param_1[0x4f9] = &UNK_18098bcb0;
  param_1[0x4fa] = 0;
  *(undefined4 *)(param_1 + 0x4fb) = 0;
  param_1[0x4f9] = &UNK_180a3c3e0;
  param_1[0x4fc] = 0;
  param_1[0x4fa] = 0;
  *(undefined4 *)(param_1 + 0x4fb) = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  param_1[0x4ff] = 0;
  param_1[0x500] = 0;
  *(undefined4 *)(param_1 + 0x501) = 0xc;
  param_1[0x502] = 0;
  param_1[0x503] = 0;
  param_1[0x504] = 0;
  *(undefined4 *)(param_1 + 0x505) = 0xc;
  param_1[0x50a] = 0;
  param_1[0x50b] = _guard_check_icall;
  *(undefined4 *)((longlong)param_1 + 0x286c) = 0;
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  *(undefined4 *)(param_1 + 0x511) = 3;
  param_1[0x512] = &UNK_18098bcb0;
  param_1[0x513] = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  param_1[0x512] = &UNK_180a3c3e0;
  param_1[0x515] = 0;
  param_1[0x513] = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  param_1[0x519] = 0;
  param_1[0x51a] = 0;
  param_1[0x51b] = 0;
  param_1[0x51c] = 0;
  param_1[0x51d] = 0;
  param_1[0x51e] = 0;
  *(undefined2 *)(param_1 + 0x520) = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3f800000;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0x3f800000;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x3f800000;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x3f800000;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0x3f800000;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x3f800000;
  uStack_4c = 0;
  *(undefined4 *)(param_1 + 0x524) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2924) = 0;
  *(undefined4 *)(param_1 + 0x525) = 0;
  *(undefined4 *)((longlong)param_1 + 0x292c) = 0;
  *(undefined4 *)(param_1 + 0x526) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2934) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x527) = 0;
  *(undefined4 *)((longlong)param_1 + 0x293c) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2944) = 0;
  *(undefined4 *)(param_1 + 0x529) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x294c) = 0;
  *(undefined4 *)(param_1 + 0x52a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2954) = 0;
  *(undefined4 *)(param_1 + 0x52b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x295c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x52c) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x2964) = 0x101;
  *(undefined1 *)(param_1 + 0x52d) = 0;
  param_1[0x52e] = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  *(undefined4 *)(param_1 + 0x531) = 3;
  param_1[0x534] = 0;
  param_1[0x535] = 0;
  param_1[0x533] = param_1;
  param_1[0x536] = 0;
  param_1[0x537] = 0;
  param_1[0x538] = 0;
  *(undefined4 *)(param_1 + 0x539) = 3;
  param_1[0x53a] = 0;
  param_1[0x53b] = 0;
  param_1[0x53c] = 0;
  *(undefined4 *)(param_1 + 0x53d) = 3;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  param_1[0x540] = 0;
  *(undefined4 *)(param_1 + 0x541) = 3;
  _Mtx_init_in_situ(param_1 + 0x542,2);
  FUN_18038a910(param_1 + 0x54d);
  *(undefined8 *)((longlong)param_1 + 0x3004) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300c) = 0;
  FUN_180142b20(param_1 + 0x603);
  FUN_180142b20(param_1 + 0x66d);
  FUN_180397660(param_1 + 0x6d6);
  param_1[0x7ce] = 0;
  param_1[1999] = 0;
  param_1[2000] = 0;
  *(undefined4 *)(param_1 + 0x7d1) = 3;
  *(undefined8 *)((longlong)param_1 + 0x3eb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ebc) = 0;
  param_1[0x7da] = &UNK_18098bcb0;
  param_1[0x7db] = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  param_1[0x7da] = &UNK_180a3c3e0;
  param_1[0x7dd] = 0;
  param_1[0x7db] = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x7ed) = 0;
  UNLOCK();
  uVar8 = uVar9;
  do {
    param_1[(longlong)(int)uVar8 + 0x7ee] = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar8 + 0x3fb0) = 1;
    UNLOCK();
    uVar8 = uVar8 + 1;
  } while (uVar8 < 8);
  FUN_1808fc838(param_1 + 0x7f7,0x908,2,&UNK_1800e8020,FUN_1800e7d00);
  *(undefined4 *)(param_1 + 0xa39) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0xa3a) = 0;
  UNLOCK();
  uVar8 = uVar9;
  do {
    param_1[(longlong)(int)uVar8 + 0xa3b] = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar8 + 23000) = 1;
    UNLOCK();
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x100);
  LOCK();
  *(undefined4 *)(param_1 + 0xb5b) = 0;
  UNLOCK();
  do {
    param_1[(longlong)(int)uVar9 + 0xb5c] = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar9 + 0x5b20) = 1;
    UNLOCK();
    uVar9 = uVar9 + 1;
  } while (uVar9 < 8);
  param_1[0xb65] = 0;
  param_1[0xb66] = 0;
  param_1[0xb67] = 0;
  *(undefined4 *)(param_1 + 0xb68) = 3;
  _Mtx_init_in_situ(param_1 + 0xb69,2);
  param_1[0xb75] = 0;
  param_1[0xb76] = 0;
  param_1[0xb77] = 0;
  *(undefined4 *)(param_1 + 0xb78) = 3;
  param_1[0xb7b] = 0;
  param_1[0xb7c] = 0;
  param_1[0xb7d] = 0;
  param_1[0xb7f] = 0;
  param_1[0xb80] = 0;
  param_1[0xb81] = 0;
  *(undefined4 *)(param_1 + 0xb82) = 3;
  param_1[0xb85] = 0;
  param_1[0xb86] = 0;
  param_1[0xb87] = 0;
  _Mtx_init_in_situ(param_1 + 0xb89,2);
  param_1[0xb93] = 0;
  param_1[0xb94] = 0;
  param_1[0xb95] = 0;
  *(undefined4 *)(param_1 + 0xb96) = 3;
  FUN_1808fc838(param_1 + 0xb97,0x2408,1,&UNK_1801b9c30,FUN_1801b99e0);
  *(undefined4 *)(param_1 + 0x1018) = 0;
  _Mtx_init_in_situ(param_1 + 0x1019,2);
  param_1[0x1023] = 0;
  param_1[0x1024] = 0;
  param_1[0x1025] = 0;
  *(undefined4 *)(param_1 + 0x1026) = 3;
  param_1[0x1027] = 0;
  param_1[0x1028] = 0;
  param_1[0x1029] = 0;
  *(undefined4 *)(param_1 + 0x102a) = 3;
  param_1[0x102b] = 0;
  param_1[0x102c] = 0;
  param_1[0x102d] = 0;
  *(undefined4 *)(param_1 + 0x102e) = 3;
  param_1[0x102f] = 0;
  param_1[0x1030] = 0;
  param_1[0x1031] = 0;
  *(undefined4 *)(param_1 + 0x1032) = 3;
  param_1[0x1036] = 0;
  param_1[0x1037] = 0;
  param_1[0x1038] = 0;
  *(undefined4 *)(param_1 + 0x1039) = 3;
  param_1[0x103a] = &UNK_18098bcb0;
  param_1[0x103b] = 0;
  *(undefined4 *)(param_1 + 0x103c) = 0;
  param_1[0x103a] = &UNK_180a3c3e0;
  param_1[0x103d] = 0;
  param_1[0x103b] = 0;
  *(undefined4 *)(param_1 + 0x103c) = 0;
  param_1[0x103f] = 0;
  param_1[0x1040] = 0;
  param_1[0x1041] = 0;
  param_1[0x1042] = 0;
  param_1[0x1043] = 0;
  FUN_1802e5470(param_1 + 0x1045);
  FUN_1801b8150();
  param_1[0xc0e2] = 0;
  param_1[0xc0e3] = 0;
  param_1[0xc0e4] = 0;
  *(undefined4 *)(param_1 + 0xc0e5) = 3;
  param_1[0xc0e8] = &UNK_18098bcb0;
  param_1[0xc0e9] = 0;
  *(undefined4 *)(param_1 + 0xc0ea) = 0;
  param_1[0xc0e8] = &UNK_180a3c3e0;
  param_1[0xc0eb] = 0;
  param_1[0xc0e9] = 0;
  *(undefined4 *)(param_1 + 0xc0ea) = 0;
  param_1[0xc0ec] = &UNK_18098bcb0;
  param_1[0xc0ed] = 0;
  *(undefined4 *)(param_1 + 0xc0ee) = 0;
  param_1[0xc0ec] = &UNK_180a3c3e0;
  param_1[0xc0ef] = 0;
  param_1[0xc0ed] = 0;
  *(undefined4 *)(param_1 + 0xc0ee) = 0;
  param_1[0xc0f0] = &UNK_18098bcb0;
  param_1[0xc0f1] = 0;
  *(undefined4 *)(param_1 + 0xc0f2) = 0;
  param_1[0xc0f0] = &UNK_180a3c3e0;
  param_1[0xc0f3] = 0;
  param_1[0xc0f1] = 0;
  *(undefined4 *)(param_1 + 0xc0f2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x607d4) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xc0fb) = 0x47c35000;
  FUN_180397bc0(param_1 + 0xc0fc,param_1,*(undefined1 *)(param_2 + 0x28));
  param_1[0xc11c] = 0;
  param_1[0xc11d] = _guard_check_icall;
  FUN_1803996b0(param_1 + 0xc11e);
  param_1[0xc169] = &UNK_18098bcb0;
  param_1[0xc16a] = 0;
  *(undefined4 *)(param_1 + 0xc16b) = 0;
  param_1[0xc169] = &UNK_180a3c3e0;
  param_1[0xc16c] = 0;
  param_1[0xc16a] = 0;
  *(undefined4 *)(param_1 + 0xc16b) = 0;
  param_1[0xc16d] = 0;
  param_1[0xc16e] = 0;
  puVar11 = param_1 + 0xc173;
  param_1[0xc176] = 0;
  *(undefined4 *)(param_1 + 0xc178) = 3;
  *puVar11 = puVar11;
  param_1[0xc174] = puVar11;
  param_1[0xc175] = 0;
  *(undefined1 *)(param_1 + 0xc176) = 0;
  param_1[0xc177] = 0;
  param_1[0xc179] = 0;
  param_1[0xc17a] = 0;
  param_1[0xc17b] = 0;
  *(undefined4 *)(param_1 + 0xc17c) = 3;
  param_1[0xc17d] = 0;
  param_1[0xc17e] = 0;
  param_1[0xc17f] = 0;
  *(undefined4 *)(param_1 + 0xc180) = 3;
  param_1[0xc181] = 0;
  param_1[0xc184] = 0;
  param_1[0xc185] = 0;
  param_1[0xc186] = 0;
  *(undefined4 *)(param_1 + 0xc187) = 3;
  param_1[0xc18a] = 0;
  param_1[0xc18b] = 0;
  param_1[0xc18d] = 0;
  param_1[0xc189] = param_1;
  *(undefined1 *)((longlong)param_1 + 0x60c1c) = 0;
  *(undefined1 *)(param_1 + 0xc18c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x60c64) = 0;
  param_1[0xc188] = 0xffffffffffffffff;
  param_1[0xc182] = 0;
  *(undefined4 *)(param_1 + 0xc183) = 0;
  param_1[0xc18e] = 0;
  param_1[0xc18f] = 0;
  param_1[0xc190] = 0;
  param_1[0xc191] = 0;
  param_1[0xc192] = 0;
  param_1[0xc193] = 0;
  param_1[0xc194] = 0;
  param_1[0xc195] = 0;
  _Mtx_init_in_situ(param_1 + 0xc197,2);
  param_1[0xc1a2] = 0;
  param_1[0xc1a3] = 0;
  param_1[0xc1a4] = 0;
  *(undefined4 *)(param_1 + 0xc1a5) = 3;
  *(undefined1 *)(param_1 + 0x522) = 0;
  param_1[0x523] = 0;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xb60,8,3);
  uVar5 = FUN_1802d1460(uVar5,param_1);
  param_1[0x4c] = uVar5;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined2 *)(param_1 + 0x4f7) = 1;
  *(undefined2 *)(param_1 + 0xc172) = 0;
  *(undefined1 *)(param_1 + 0x50d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a64) = 0;
  param_1[0x14] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0xc0e6) = 1;
  if ((code *)param_1[0xc11c] != (code *)0x0) {
    (*(code *)param_1[0xc11c])(param_1 + 0xc11a,0,0);
  }
  param_1[0xc11c] = 0;
  param_1[0xc11d] = _guard_check_icall;
  *(undefined1 *)(param_1 + 0xc1a1) = 0;
  *(undefined1 *)(param_1 + 0xc0fa) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0x1033) = 1;
  plStack_130 = (longlong *)param_1[100];
  param_1[100] = 0;
  if (plStack_130 != (longlong *)0x0) {
    (**(code **)(*plStack_130 + 0x38))();
  }
  param_1[0x70] = 0;
  param_1[0x75] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f62) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28b4) = 0;
  *(undefined1 *)(param_1 + 0x517) = 0;
  *(undefined1 *)(param_1 + 0x506) = 1;
  *(undefined1 *)(param_1 + 0xac) = 0;
  if (*(int *)(_DAT_180c86870 + 0x340) != 0) {
    iVar3 = (**(code **)(_DAT_180c8a9c0 + 0xf8))();
    iStackX_20 = iVar3;
    if ((iVar3 != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x30))(iVar3);
    }
    if ((*(int *)((longlong)param_1 + 0x286c) != 0) && (_DAT_180c8f008 != 0)) {
      (**(code **)(_DAT_180c8f008 + 0x18))();
    }
    *(int *)((longlong)param_1 + 0x286c) = iVar3;
  }
  param_1[0x507] = 0;
  if ((code *)param_1[0x50a] != (code *)0x0) {
    (*(code *)param_1[0x50a])(param_1 + 0x508,0,0);
  }
  param_1[0x50a] = 0;
  param_1[0x50b] = _guard_check_icall;
  param_1[0x50c] = 0;
  param_1[0x518] = 0;
  param_1[0x66c] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28b9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x315) = *(undefined1 *)(param_2 + 0x26);
  if (*(char *)(param_2 + 0x27) != '\0') {
    *(undefined1 *)(param_1 + 0x520) = 1;
  }
  *(undefined4 *)(param_1 + 0x4f8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3e94) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7d3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3e9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7d4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3ea4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7d5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3eac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7d6) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7de) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ecc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7d9) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x7e7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f3c) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3f44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7e9) = 0x3f800000;
  plStack_128 = (longlong *)param_1[0x1041];
  param_1[0x1041] = 0;
  if (plStack_128 != (longlong *)0x0) {
    (**(code **)(*plStack_128 + 0x38))(plStack_128,0x3f800000);
  }
  *(undefined4 *)(param_1 + 0xc171) = 0;
  *(undefined1 *)(param_1 + 0x600) = 0;
  puVar10 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar10 = *(undefined **)(param_2 + 8);
  }
  (**(code **)(param_1[0x9b] + 0x10))(param_1 + 0x9b,puVar10);
  *(undefined4 *)((longlong)param_1 + 0x5b9c) = 0;
  *(undefined4 *)(param_1 + 0xb73) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0xb74) = 0;
  param_1[0x521] = 0;
  *(undefined2 *)(param_1 + 0xb88) = 0x101;
  *(undefined1 *)(param_1 + 0xb7e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5c42) = 1;
  param_1[0x79] = 0x3f800000;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0x3f80000000000000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x3f800000;
  param_1[0x7f] = 0;
  param_1[0x80] = 0x3f80000000000000;
  param_1[0x81] = 0x3f800000;
  param_1[0x82] = 0;
  param_1[0x83] = 0x3f80000000000000;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x562) = 0;
  param_1[0x7cc] = 0;
  param_1[0x7cd] = 0x3f80000000000000;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x3f4c) = 0;
  UNLOCK();
  *(undefined4 *)(param_1 + 0x7ea) = 0;
  *(undefined4 *)(param_1 + 0x516) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60b8c) = *(undefined4 *)(_DAT_180c86870 + 0x3b4);
  *(undefined1 *)((longlong)param_1 + 0x2869) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3f61) = 0;
  plStack_120 = (longlong *)param_1[0x103f];
  param_1[0x103f] = 0;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x5ba4) = 0x3f800000;
  param_1[0xc16d] = 0xc3800000c3800000;
  param_1[0xc16e] = 0x4380000043800000;
  *(undefined8 *)((longlong)param_1 + 0x3eb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ebc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ec4) = 0xc2c80000;
  (**(code **)(param_1[0x7da] + 0x10))(param_1 + 0x7da,&UNK_180a0b1f0);
  *(undefined1 *)((longlong)param_1 + 0x561) = 0;
  *(undefined2 *)(param_1 + 0x9f) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x314) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x95) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0xffffffff;
  (**(code **)(*plVar7 + 0x10))(plVar7,&DAT_18098bc73);
  *(undefined1 *)(param_1 + 0x99) = 1;
  *(undefined4 *)((longlong)param_1 + 0x27bc) = 0x3f800000;
  if ((*(char *)(param_2 + 0x24) == '\0') || (*(int *)(_DAT_180c8a9c8 + 0x540) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x563) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x564) = *(undefined1 *)(param_2 + 0x25);
  *(undefined4 *)(param_1 + 0xad) = *(undefined4 *)(param_2 + 0x2c);
  param_1[99] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a61) = 1;
  param_1[0xc170] = 0;
  param_1[0x89] = 0;
  plStack_118 = (longlong *)param_1[0x1042];
  param_1[0x1042] = 0;
  if (plStack_118 != (longlong *)0x0) {
    (**(code **)(*plStack_118 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x1044) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x54c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2a62) = 1;
  param_1[0x5f2] = param_1;
  *(undefined4 *)(param_1 + 0x7eb) = 0;
  *(float *)((longlong)param_1 + 0x3f5c) = *(float *)(_DAT_180c86870 + 0x388) * 2000.0;
  *(undefined4 *)((longlong)param_1 + 0x3f54) = 0;
  *(undefined1 *)(param_1 + 0x7ec) = 1;
  *(undefined4 *)(param_1 + 0x6d5) = 0xffffffff;
  uVar4 = _Thrd_id();
  *(undefined4 *)(param_1 + 0x9a) = uVar4;
  param_1[0x532] = param_1;
  FUN_1801b6020(param_1);
  puVar6 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x10,4,3);
  *(undefined8 *)(puVar6 + 1) = 0x3f800000;
  puVar6[3] = 0x3f800000;
  *puVar6 = 0x3f800000;
  param_1[0x103e] = puVar6;
  FUN_180049550(param_1 + 0x4cf,0);
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc0e7) = 0;
  *(undefined1 *)(param_1 + 0xc0f4) = 0;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3);
  plVar7 = (longlong *)FUN_180275090(uVar5);
  if (plVar7 != (longlong *)0x0) {
    plStack_110 = plVar7;
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plStack_110 = (longlong *)param_1[0x4fd];
  param_1[0x4fd] = plVar7;
  if (plStack_110 != (longlong *)0x0) {
    (**(code **)(*plStack_110 + 0x38))();
  }
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar7 = (longlong *)FUN_180075030(uVar5,1);
  plStack_f0 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  uVar9 = 0;
  plStack_190 = (longlong *)0x0;
  plStack_188 = (longlong *)0x0;
  plStack_168 = (longlong *)0x0;
  uStack_178 = 0;
  auStack_180[0] = 0;
  FUN_18022f2e0(&plStack_190,plVar7,0);
  auStackX_18[0] = 0xffffffff;
  uStack_158 = 0x3f800000;
  uStack_154 = 0x3f800000;
  uStack_150 = 0;
  uStack_148 = 0x40000000;
  uStack_144 = 0x40000000;
  uStack_e8 = 0xbf800000;
  uStack_e4 = 0xbf800000;
  uStack_e0 = 0;
  uStack_dc = 0x7f7fffff;
  FUN_1802356b0(&plStack_190,&uStack_e8,&uStack_148,&uStack_150,&uStack_158,auStackX_18);
  if ((plStack_190 != (longlong *)0x0) && (plStack_188 != (longlong *)0x0)) {
    if (cStack_15e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_180);
    if (cStack_160 != '\0') {
      FUN_180079520(plStack_190);
    }
    if (cStack_15f != '\0') {
      FUN_180079520(plStack_190);
    }
    plVar1 = plStack_188;
    plStack_108 = plStack_188;
    plStack_188 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  uVar4 = FUN_18007f6a0(auStack_180);
  if (plStack_168 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plStack_168 + 0x38))();
  }
  if (plStack_188 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plStack_188 + 0x38))();
  }
  if (plStack_190 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plStack_190 + 0x38))();
  }
  uVar5 = FUN_180095000(uVar4,&plStack_100,&UNK_180a0b1d8,0);
  FUN_180076910(plVar7,uVar5);
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  *(undefined1 *)((longlong)plVar7 + 0xff) = 0;
  uVar5 = param_1[0x4fd];
  plStack_140 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  FUN_180275cf0(uVar5,0,&plStack_140,1);
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 3;
  puVar11 = param_1 + 0xc061;
  do {
    if (*(int *)(puVar11 + 2) != 0) {
      FUN_1801b8450(param_1 + 0xc060,puVar11);
    }
    uVar9 = uVar9 + 1;
    puVar11 = puVar11 + 4;
  } while (uVar9 < 0x20);
  FUN_18005d580(&uStack_d8);
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,3);
  uVar5 = FUN_1802e6b00(uVar5,4);
  FUN_180056f10(param_1 + 0x12,uVar5);
  param_1[0x13] = 0;
  FUN_1801afbc0(param_1);
  if (*(char *)((longlong)param_1 + 0x564) != '\0') {
    FUN_1801af7a0(param_1);
  }
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(_DAT_180c86920 + 0xe0);
  (**(code **)(*plVar7 + 0x38))(plVar7);
  return param_1;
}



undefined8 FUN_180196ab0(undefined8 param_1,ulonglong param_2)

{
  FUN_180197a20();
  if ((param_2 & 1) != 0) {
    free(param_1,0x60d30);
  }
  return param_1;
}





// 函数: void FUN_180196af0(longlong param_1)
void FUN_180196af0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(undefined8 **)(lVar1 + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180196b10(longlong param_1)
void FUN_180196b10(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  
  lVar3 = _DAT_180c82868;
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && (_DAT_180c82868 != 0)) {
    pplStackX_18 = &plStackX_10;
    plStackX_10 = plVar1;
    (**(code **)(*plVar1 + 0x28))();
    FUN_18005e6a0(lVar3,&plStackX_10,0);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = __RTCastToVoid(puVar2);
    (**(code **)*puVar2)(puVar2,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}





// 函数: void FUN_180196b30(longlong param_1)
void FUN_180196b30(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180196b80(longlong param_1)
void FUN_180196b80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1800e7d00(param_1 + 0x1218);
  FUN_1808fc8a8(param_1,0x908,2,FUN_1800e7d00,uVar1);
  return;
}



undefined8 * FUN_180196bd0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}





// 函数: void FUN_180196c10(undefined8 param_1)
void FUN_180196c10(undefined8 param_1)

{
  FUN_1808fc8a8(param_1,0x2408,1,FUN_1801b99e0,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180196c40(longlong param_1)
void FUN_180196c40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  FUN_1808fc8a8(param_1 + 0x30,8,2,FUN_180045af0);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
  }
  return;
}





// 函数: void FUN_180196cf0(longlong param_1)
void FUN_180196cf0(longlong param_1)

{
  FUN_1808fc8a8(param_1 + 8,0x20,0x20,FUN_18004a130,0xfffffffffffffffe);
  return;
}





