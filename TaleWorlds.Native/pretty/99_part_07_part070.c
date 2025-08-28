#include "TaleWorlds.Native.Split.h"

// 99_part_07_part070.c - 9 个函数

// 函数: void FUN_1804d9963(void)
void FUN_1804d9963(void)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  uint *puVar23;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R14;
  float fStackX_20;
  float fStackX_24;
  float in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  uint uStack0000000000000050;
  uint uStack0000000000000054;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  uint uStack000000000000006c;
  uint uStack0000000000000070;
  uint uStack0000000000000074;
  uint uStack0000000000000078;
  uint uStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  uint uStack000000000000008c;
  ulonglong in_stack_00000090;
  
  lVar24 = 0;
  do {
    lVar26 = *(longlong *)(unaff_R14 + 0x28 + unaff_RBP);
    lVar22 = (longlong)(int)(*(uint *)(in_R11 + 0x4a8) & *(uint *)(unaff_RSI + 0x18));
    puVar23 = (uint *)((longlong)*(char *)(lVar24 + 4 + lVar26) * 0x100 +
                      *(longlong *)(unaff_RBX + 0x18));
    lVar25 = *(longlong *)
              (*(longlong *)(in_R11 + 0x488) +
              (longlong)((int)*(uint *)(unaff_RSI + 0x18) >> 10) * 8);
    do {
      LOCK();
      uVar2 = *puVar23;
      *puVar23 = *puVar23 | 1;
      UNLOCK();
    } while ((uVar2 & 1) != 0);
    uStack0000000000000050 = puVar23[1];
    uStack0000000000000054 = puVar23[2];
    uStack0000000000000058 = puVar23[3];
    uStack000000000000005c = puVar23[4];
    fVar3 = (float)puVar23[5];
    fVar4 = (float)puVar23[6];
    fVar5 = (float)puVar23[7];
    uStack000000000000006c = puVar23[8];
    *puVar23 = 0;
    fStack0000000000000060 = fVar3;
    fStack0000000000000064 = fVar4;
    fStack0000000000000068 = fVar5;
    uStack0000000000000070 = uStack0000000000000050;
    uStack0000000000000074 = uStack0000000000000054;
    uStack0000000000000078 = uStack0000000000000058;
    uStack000000000000007c = uStack000000000000005c;
    fStack0000000000000080 = fVar3;
    fStack0000000000000084 = fVar4;
    fStack0000000000000088 = fVar5;
    uStack000000000000008c = uStack000000000000006c;
    FUN_18063b5f0(&fStackX_20,&stack0x00000050);
    pfVar1 = (float *)(lVar25 + 8 + lVar22 * 0x48);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar9 = pfVar1[3];
    pfVar1 = (float *)(lVar25 + 0x18 + lVar22 * 0x48);
    fVar10 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar13 = pfVar1[3];
    pfVar1 = (float *)(lVar25 + 0x28 + lVar22 * 0x48);
    fVar14 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar16 = pfVar1[2];
    fVar17 = pfVar1[3];
    pfVar1 = (float *)(lVar25 + 0x38 + lVar22 * 0x48);
    fVar18 = *pfVar1;
    fVar19 = pfVar1[1];
    fVar20 = pfVar1[2];
    fVar21 = pfVar1[3];
    pfVar1 = (float *)(lVar24 + 0x1c + lVar26);
    *pfVar1 = fStackX_24 * fVar10 + fStackX_20 * fVar6 + in_stack_00000028 * fVar14;
    pfVar1[1] = fStackX_24 * fVar11 + fStackX_20 * fVar7 + in_stack_00000028 * fVar15;
    pfVar1[2] = fStackX_24 * fVar12 + fStackX_20 * fVar8 + in_stack_00000028 * fVar16;
    pfVar1[3] = fStackX_24 * fVar13 + fStackX_20 * fVar9 + in_stack_00000028 * fVar17;
    pfVar1 = (float *)(lVar24 + 0x2c + lVar26);
    *pfVar1 = fStack0000000000000034 * fVar10 + fStack0000000000000030 * fVar6 +
              in_stack_00000038 * fVar14;
    pfVar1[1] = fStack0000000000000034 * fVar11 + fStack0000000000000030 * fVar7 +
                in_stack_00000038 * fVar15;
    pfVar1[2] = fStack0000000000000034 * fVar12 + fStack0000000000000030 * fVar8 +
                in_stack_00000038 * fVar16;
    pfVar1[3] = fStack0000000000000034 * fVar13 + fStack0000000000000030 * fVar9 +
                in_stack_00000038 * fVar17;
    pfVar1 = (float *)(lVar24 + 0x3c + lVar26);
    *pfVar1 = fStack0000000000000044 * fVar10 + fStack0000000000000040 * fVar6 +
              in_stack_00000048 * fVar14;
    pfVar1[1] = fStack0000000000000044 * fVar11 + fStack0000000000000040 * fVar7 +
                in_stack_00000048 * fVar15;
    pfVar1[2] = fStack0000000000000044 * fVar12 + fStack0000000000000040 * fVar8 +
                in_stack_00000048 * fVar16;
    pfVar1[3] = fStack0000000000000044 * fVar13 + fStack0000000000000040 * fVar9 +
                in_stack_00000048 * fVar17;
    pfVar1 = (float *)(lVar24 + 0x4c + lVar26);
    *pfVar1 = fVar4 * fVar10 + fVar3 * fVar6 + fVar5 * fVar14 + fVar18;
    pfVar1[1] = fVar4 * fVar11 + fVar3 * fVar7 + fVar5 * fVar15 + fVar19;
    pfVar1[2] = fVar4 * fVar12 + fVar3 * fVar8 + fVar5 * fVar16 + fVar20;
    pfVar1[3] = fVar4 * fVar13 + fVar3 * fVar9 + fVar5 * fVar17 + fVar21;
    lVar24 = lVar24 + 0x68;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1804d9b30(void)
void FUN_1804d9b30(void)

{
  ulonglong in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1804d9b50(void)
void FUN_1804d9b50(void)

{
  ulonglong in_stack_00000090;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000090 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d9b70(uint64_t *param_1)
void FUN_1804d9b70(uint64_t *param_1)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int8_t auStack_138 [32];
  code *pcStack_118;
  longlong *plStack_108;
  longlong *plStack_100;
  uint64_t *puStack_f8;
  uint64_t *puStack_f0;
  longlong *plStack_e8;
  longlong *plStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  int8_t auStack_b0 [136];
  ulonglong uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  *param_1 = &unknown_var_3952_ptr;
  uVar5 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  *param_1 = &unknown_var_1952_ptr;
  plStack_100 = param_1 + 0xd;
  *plStack_100 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  pcStack_118 = FUN_1804a7600;
  puStack_d0 = param_1;
  FUN_1808fc838(param_1 + 0x16,0x58,8,FUN_1804dc080);
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(int32_t *)(param_1 + 0x73) = 3;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(int32_t *)(param_1 + 0x77) = 3;
  *(int32_t *)(param_1 + 0x78) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x3c4) = 0x400;
  param_1[0x6e] = 0;
  *(int32_t *)(param_1 + 0x6f) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(int32_t *)(param_1 + 0x7e) = 3;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(int32_t *)(param_1 + 0x82) = 3;
  *(int32_t *)(param_1 + 0x83) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x41c) = 0x400;
  param_1[0x79] = 0;
  *(int32_t *)(param_1 + 0x7a) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(int32_t *)(param_1 + 0x87) = 3;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(int32_t *)(param_1 + 0x90) = 3;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(int32_t *)(param_1 + 0x94) = 3;
  *(int32_t *)(param_1 + 0x95) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x4ac) = 0x400;
  param_1[0x8b] = 0;
  *(int32_t *)(param_1 + 0x8c) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(int32_t *)(param_1 + 0x9b) = 3;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(int32_t *)(param_1 + 0x9f) = 3;
  *(int32_t *)(param_1 + 0xa0) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x504) = 0x400;
  param_1[0x96] = 0;
  *(int32_t *)(param_1 + 0x97) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  *(int32_t *)(param_1 + 0xa6) = 3;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(int32_t *)(param_1 + 0xaa) = 3;
  *(int32_t *)(param_1 + 0xab) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x55c) = 0x400;
  param_1[0xa1] = 0;
  *(int32_t *)(param_1 + 0xa2) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(int32_t *)(param_1 + 0xb1) = 3;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(int32_t *)(param_1 + 0xb5) = 3;
  *(int32_t *)(param_1 + 0xb6) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x5b4) = 0x400;
  param_1[0xac] = 0;
  *(int32_t *)(param_1 + 0xad) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(int32_t *)(param_1 + 0xbc) = 3;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(int32_t *)(param_1 + 0xc0) = 3;
  *(int32_t *)(param_1 + 0xc1) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x60c) = 0x400;
  param_1[0xb7] = 0;
  *(int32_t *)(param_1 + 0xb8) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(int32_t *)(param_1 + 199) = 3;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(int32_t *)(param_1 + 0xcb) = 3;
  *(int32_t *)(param_1 + 0xcc) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x664) = 0x400;
  param_1[0xc2] = 0;
  *(int32_t *)(param_1 + 0xc3) = 0;
  plStack_100 = param_1 + 0xcd;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(int32_t *)(param_1 + 0xd2) = 3;
  plStack_108 = param_1 + 0xd3;
  *plStack_108 = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(int32_t *)(param_1 + 0xd6) = 3;
  *(int32_t *)(param_1 + 0xd7) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x6bc) = 0x400;
  *plStack_100 = 0;
  *(int32_t *)(param_1 + 0xce) = 0;
  LOCK();
  *(int32_t *)(param_1 + 0xd8) = 0;
  UNLOCK();
  do {
    param_1[(longlong)(int)uVar5 + 0xd9] = 0;
    LOCK();
    *(int8_t *)((longlong)param_1 + (longlong)(int)uVar5 + 0x26c8) = 1;
    UNLOCK();
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x400);
  puStack_f0 = param_1 + 0x559;
  param_1[0x55b] = 0;
  param_1[0x55c] = 0;
  param_1[0x55d] = 0;
  *(int32_t *)(param_1 + 0x55e) = 3;
  param_1[0x55f] = 0;
  param_1[0x560] = 0;
  param_1[0x561] = 0;
  *(int32_t *)(param_1 + 0x562) = 3;
  *(int32_t *)(param_1 + 0x563) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x2b1c) = 0x400;
  *puStack_f0 = 0;
  *(int32_t *)(param_1 + 0x55a) = 0;
  *(int32_t *)(param_1 + 0x568) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x2b44) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x2b4c) = 3;
  param_1[0x566] = 1;
  param_1[0x565] = &system_data_0000;
  param_1[0x567] = 0;
  *(int32_t *)(param_1 + 0x569) = 0;
  puVar3 = param_1 + 0x56b;
  param_1[0x56e] = 0;
  *(int32_t *)(param_1 + 0x570) = 3;
  *puVar3 = puVar3;
  param_1[0x56c] = puVar3;
  param_1[0x56d] = 0;
  *(int8_t *)(param_1 + 0x56e) = 0;
  param_1[0x56f] = 0;
  puVar3 = param_1 + 0x571;
  param_1[0x574] = 0;
  *(int32_t *)(param_1 + 0x576) = 3;
  *puVar3 = puVar3;
  param_1[0x572] = puVar3;
  param_1[0x573] = 0;
  *(int8_t *)(param_1 + 0x574) = 0;
  param_1[0x575] = 0;
  puVar3 = param_1 + 0x577;
  param_1[0x57a] = 0;
  *(int32_t *)(param_1 + 0x57c) = 3;
  *puVar3 = puVar3;
  param_1[0x578] = puVar3;
  param_1[0x579] = 0;
  *(int8_t *)(param_1 + 0x57a) = 0;
  param_1[0x57b] = 0;
  puStack_f8 = param_1 + 0x57d;
  _Mtx_init_in_situ(puStack_f8,2);
  param_1[0x589] = 0;
  param_1[0x58a] = 0;
  param_1[0x58b] = 0;
  *(int32_t *)(param_1 + 0x58c) = 3;
  param_1[0x58d] = 0;
  param_1[0x58e] = 0;
  param_1[0x58f] = 0;
  *(int32_t *)(param_1 + 0x590) = 3;
  *(int32_t *)(param_1 + 0x591) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x2c8c) = 0x400;
  param_1[0x587] = 0;
  *(int32_t *)(param_1 + 0x588) = 0;
  *(int32_t *)(param_1 + 0x596) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x2cb4) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x2cbc) = 3;
  param_1[0x594] = 1;
  param_1[0x593] = &system_data_0000;
  param_1[0x595] = 0;
  *(int32_t *)(param_1 + 0x597) = 0;
  puStack_f8 = param_1 + 0x598;
  param_1[0x59a] = 0;
  param_1[0x59b] = 0;
  param_1[0x59c] = 0;
  *(int32_t *)(param_1 + 0x59d) = 3;
  puStack_f0 = param_1 + 0x59e;
  *puStack_f0 = 0;
  param_1[0x59f] = 0;
  param_1[0x5a0] = 0;
  *(int32_t *)(param_1 + 0x5a1) = 3;
  *(int32_t *)(param_1 + 0x5a2) = 0x3ff;
  *(int32_t *)((longlong)param_1 + 0x2d14) = 0x400;
  *puStack_f8 = 0;
  *(int32_t *)(param_1 + 0x599) = 0;
  *(int32_t *)((longlong)param_1 + 0x2d1c) = 0;
  puVar3 = (uint64_t *)FUN_180094e80(puStack_f8,&plStack_e0,&unknown_var_2432_ptr);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plStack_e8 = (longlong *)param_1[0x88];
  param_1[0x88] = uVar1;
  if (plStack_e8 != (longlong *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  if (plStack_e0 != (longlong *)0x0) {
    (**(code **)(*plStack_e0 + 0x38))();
  }
  puVar3 = (uint64_t *)FUN_1800763c0(param_1[0x88],&plStack_100);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plStack_108 = (longlong *)param_1[0x89];
  param_1[0x89] = uVar1;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_100 != (longlong *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  lVar2 = *(longlong *)(param_1[0x89] + 0x1b8);
  puStack_c8 = &unknown_var_3432_ptr;
  puStack_c0 = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0x25;
  strcpy_s(auStack_b0,0x80,&system_data_d5d0);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar2 + 0x1e0),&puStack_c8,1);
  *(ulonglong *)(lVar2 + 0x140) = *(ulonglong *)(lVar2 + 0x140) | uVar4;
  FUN_18022dd60(lVar2);
  *(int16_t *)(lVar2 + 0x3c0) = 0xffff;
  puStack_c8 = &unknown_var_720_ptr;
  *(int8_t *)((longlong)param_1 + 0xac) = 0;
  *(int16_t *)(param_1 + 0x56a) = 0x100;
  FUN_1804da310(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804da310(longlong param_1)
void FUN_1804da310(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = _DAT_180c86920;
  iVar2 = *(int *)(_DAT_180c86920 + 0xe00) + -1;
  iVar3 = 0;
  if ((-1 < iVar2) && (iVar3 = iVar2, 3 < iVar2)) {
    iVar3 = 3;
  }
  fVar7 = (float)iVar3;
  fVar6 = fVar7 * 3.35 + 4.9500003;
  fVar4 = fVar7 * 0.99999994 + 4.5;
  fVar5 = fVar6 + fVar4;
  *(float *)(param_1 + 0x88) = fVar6 * fVar6;
  fVar4 = fVar5 + fVar4;
  *(float *)(param_1 + 0x8c) = fVar5 * fVar5;
  fVar6 = (fVar7 + 1.0) * 4.5;
  fVar5 = fVar6 + fVar4;
  *(float *)(param_1 + 0x90) = fVar4 * fVar4;
  fVar6 = fVar6 + fVar5;
  *(float *)(param_1 + 0x94) = fVar5 * fVar5;
  fVar4 = (fVar7 + 1.0) * 12.5 + fVar6;
  *(float *)(param_1 + 0x98) = fVar6 * fVar6;
  fVar5 = (fVar7 + 1.0) * 15.0 + fVar4;
  *(float *)(param_1 + 0x9c) = fVar4 * fVar4;
  *(float *)(param_1 + 0xa0) = fVar5 * fVar5;
  *(int32_t *)(param_1 + 0xa4) = 0x7f7fffff;
  *(uint *)(param_1 + 0xa8) = (uint)(*(int *)(lVar1 + 0xe00) == 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804da440(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_1804da440(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint64_t uStackX_8;
  uint64_t *puStackX_10;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar3 = param_1;
  lVar6 = _DAT_180c86920;
  if (*(int *)(_DAT_180c86920 + 0xe04) != *(int *)(_DAT_180c86920 + 0xe00)) {
    FUN_1804da310();
  }
  uVar5 = 0;
  if (0 < *(int *)(lVar3 + 0x564)) {
    uVar1 = 0;
    if (*(int *)(lVar3 + 0x564) < 1) goto LAB_1804da4f5;
    do {
      uVar5 = uVar1;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x590) + (longlong)((int)uVar5 >> 10) * 8);
      lVar4 = (longlong)(int)(*(uint *)(param_1 + 0x5b0) & uVar5);
      lVar2 = lVar4 * 0x18;
      if (((*(int *)(lVar3 + lVar2) != -1) && (lVar3 = lVar2 + 8 + lVar3, lVar3 != 0)) &&
         (*(int *)(lVar6 + 0x624) != *(int *)(lVar6 + 0x620))) {
        puStackX_10 = &uStackX_8;
        uStackX_8 = 0;
        FUN_1800f5a90(lVar4,*(uint64_t *)(lVar3 + 8),param_3,&uStackX_8,uVar7);
        lVar6 = _DAT_180c86920;
      }
LAB_1804da4f5:
      uVar1 = uVar5 + 1;
    } while ((int)(uVar5 + 1) < *(int *)(param_1 + 0x564));
  }
  return;
}






// 函数: void FUN_1804da520(longlong param_1)
void FUN_1804da520(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lStackX_10;
  
  piVar9 = (int *)(param_1 + 0xb4);
  lStackX_10 = 8;
  uVar8 = 0;
  do {
    if (0 < *piVar9) {
      uVar7 = 0;
      uVar2 = uVar8;
      if (*piVar9 < 1) goto LAB_1804da78c;
      do {
        uVar7 = (uint)uVar2;
        piVar4 = (int *)((longlong)(int)(piVar9[0x13] & uVar7) * 0x68 +
                        *(longlong *)
                         (*(longlong *)(piVar9 + 0xb) + (longlong)((int)uVar7 >> 10) * 8));
        if ((*piVar4 != -1) && (plVar5 = (longlong *)(piVar4 + 2), plVar5 != (longlong *)0x0)) {
          lVar6 = *plVar5;
          uVar2 = uVar8;
          uVar3 = uVar8;
          if ((*(longlong *)(piVar4 + 4) - lVar6) / 0x68 != 0) {
            do {
              lVar6 = *(longlong *)(uVar3 + 0x48 + lVar6);
              if (*(char *)(lVar6 + 0xf9) != '\0') {
                if (*(longlong *)(lVar6 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *(uint64_t *)(lVar6 + 0x1d8) = 0;
                LOCK();
                *(int8_t *)(lVar6 + 0xf9) = 0;
                UNLOCK();
              }
              FUN_180077040(*(uint64_t *)(uVar3 + 0x48 + *plVar5));
              lVar6 = *plVar5;
              uVar1 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uVar1;
              uVar3 = uVar3 + 0x68;
            } while ((ulonglong)(longlong)(int)uVar1 <
                     (ulonglong)((*(longlong *)(piVar4 + 4) - lVar6) / 0x68));
          }
          lVar6 = *(longlong *)(piVar4 + 10);
          uVar2 = uVar8;
          uVar3 = uVar8;
          if ((*(longlong *)(piVar4 + 0xc) - lVar6) / 0x68 != 0) {
            do {
              lVar6 = *(longlong *)(uVar3 + 8 + lVar6);
              if (*(char *)(lVar6 + 0xf9) != '\0') {
                if (*(longlong *)(lVar6 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *(uint64_t *)(lVar6 + 0x1d8) = 0;
                LOCK();
                *(int8_t *)(lVar6 + 0xf9) = 0;
                UNLOCK();
              }
              FUN_180077040(*(uint64_t *)(uVar3 + 8 + *(longlong *)(piVar4 + 10)));
              lVar6 = *(longlong *)(piVar4 + 10);
              uVar1 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uVar1;
              uVar3 = uVar3 + 0x68;
            } while ((ulonglong)(longlong)(int)uVar1 <
                     (ulonglong)((*(longlong *)(piVar4 + 0xc) - lVar6) / 0x68));
          }
          lVar6 = *(longlong *)(piVar4 + 0x12);
          uVar2 = uVar8;
          uVar3 = uVar8;
          if ((*(longlong *)(piVar4 + 0x14) - lVar6) / 0x30 != 0) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x18 + uVar3);
              if (*(char *)(lVar6 + 0xf9) != '\0') {
                if (*(longlong *)(lVar6 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                *(uint64_t *)(lVar6 + 0x1d8) = 0;
                LOCK();
                *(int8_t *)(lVar6 + 0xf9) = 0;
                UNLOCK();
              }
              FUN_180077040(*(uint64_t *)(*(longlong *)(piVar4 + 0x12) + 0x18 + uVar3));
              lVar6 = *(longlong *)(piVar4 + 0x12);
              uVar1 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uVar1;
              uVar3 = uVar3 + 0x30;
            } while ((ulonglong)(longlong)(int)uVar1 <
                     (ulonglong)((*(longlong *)(piVar4 + 0x14) - lVar6) / 0x30));
          }
        }
LAB_1804da78c:
        uVar2 = (ulonglong)(uVar7 + 1);
      } while ((int)(uVar7 + 1) < *piVar9);
    }
    piVar9 = piVar9 + 0x16;
    lStackX_10 = lStackX_10 + -1;
  } while (lStackX_10 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804da7e0(int32_t *param_1,uint64_t param_2,longlong param_3)
void FUN_1804da7e0(int32_t *param_1,uint64_t param_2,longlong param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t **ppuStackX_20;
  longlong alStack_68 [2];
  int32_t **ppuStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  int32_t *apuStack_30 [2];
  code *pcStack_20;
  void *puStack_18;
  
  alStack_68[1] = 0xfffffffffffffffe;
  if (*(char *)(_DAT_180c86870 + 0xfd) != '\0') {
    uVar3 = *(uint64_t *)(param_3 + 0xf8);
    *(uint64_t *)(param_1 + 10) = *(uint64_t *)(param_3 + 0xf0);
    *(uint64_t *)(param_1 + 0xc) = uVar3;
    uVar3 = *(uint64_t *)(param_3 + 0x108);
    *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_3 + 0x100);
    *(uint64_t *)(param_1 + 0x10) = uVar3;
    uVar4 = *(int32_t *)(param_3 + 0x114);
    uVar1 = *(int32_t *)(param_3 + 0x118);
    uVar2 = *(int32_t *)(param_3 + 0x11c);
    param_1[0x12] = *(int32_t *)(param_3 + 0x110);
    param_1[0x13] = uVar4;
    param_1[0x14] = uVar1;
    param_1[0x15] = uVar2;
    uVar4 = *(int32_t *)(param_3 + 0x124);
    uVar1 = *(int32_t *)(param_3 + 0x128);
    uVar2 = *(int32_t *)(param_3 + 300);
    param_1[0x16] = *(int32_t *)(param_3 + 0x120);
    param_1[0x17] = uVar4;
    param_1[0x18] = uVar1;
    param_1[0x19] = uVar2;
    param_1[0xb46] = 0;
    *(uint64_t *)(param_1 + 0x10a) = *(uint64_t *)(param_1 + 0x108);
    FUN_1804d5bb0();
    FUN_1804d2fd0(param_1,param_3);
    ppuStackX_20 = (int32_t **)CONCAT44(ppuStackX_20._4_4_,0xffffffff);
    uStack_48 = param_3 + 0x120;
    ppuStack_58 = apuStack_30;
    uStack_40 = &ppuStackX_20;
    uStack_38 = alStack_68;
    pcStack_20 = FUN_1804df390;
    puStack_18 = &unknown_var_9552_ptr;
    alStack_68[0] = param_3;
    uStack_50 = param_1;
    apuStack_30[0] = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,system_allocation_flags);
    *apuStack_30[0] = (int32_t)uStack_50;
    apuStack_30[0][1] = uStack_50._4_4_;
    apuStack_30[0][2] = (int32_t)uStack_48;
    apuStack_30[0][3] = uStack_48._4_4_;
    apuStack_30[0][4] = (int32_t)uStack_40;
    apuStack_30[0][5] = uStack_40._4_4_;
    apuStack_30[0][6] = (int32_t)uStack_38;
    apuStack_30[0][7] = uStack_38._4_4_;
    FUN_18015b810((int32_t)uStack_50,0,param_1[0xb46],0x10,0xffffffffffffffff,apuStack_30);
    uVar4 = FUN_1804d7130(param_1,param_2);
    if (*(char *)(param_1 + 0x2b) != '\0') {
      ppuStackX_20 = apuStack_30;
      pcStack_20 = (code *)&unknown_var_496_ptr;
      puStack_18 = &unknown_var_480_ptr;
      apuStack_30[0] = param_1;
      FUN_18015b810(uVar4,0,param_1[0x185],0x10,0xffffffffffffffff,apuStack_30);
    }
  }
  return;
}






// 函数: void FUN_1804da9a0(longlong *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)
void FUN_1804da9a0(longlong *param_1,uint64_t param_2,uint64_t param_3,ulonglong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint64_t uVar13;
  longlong lStack_30;
  longlong lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  uVar13 = 0xfffffffffffffffe;
  uVar7 = 0;
  uVar10 = 0;
  uVar6 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x50c)) {
    uVar3 = uVar7;
    uVar9 = uVar10;
    if (*(int *)((longlong)param_1 + 0x50c) < 1) goto LAB_1804daa11;
    do {
      uVar9 = (uint)uVar3;
      lVar12 = *(longlong *)(param_1[0xa7] + (longlong)((int)uVar9 >> 10) * 8);
      uVar3 = uVar7;
      if (*(int *)(lVar12 + (longlong)(int)(*(uint *)(param_1 + 0xab) & uVar9) * 0x18) != -1) {
        uVar3 = (longlong)(int)(*(uint *)(param_1 + 0xab) & uVar9) * 0x18 + 8 + lVar12;
      }
LAB_1804daa11:
      if (uVar3 != 0) {
        lStack_30 = 0;
        lStack_28 = 0;
        uStack_20 = 0;
        uStack_18 = 3;
        (**(code **)(**(longlong **)(uVar3 + 8) + 0x170))
                  (*(longlong **)(uVar3 + 8),&lStack_30,0xffffffff,param_4,uVar13);
        uVar3 = uVar7;
        param_4 = uVar7;
        if (lStack_28 - lStack_30 >> 3 != 0) {
          do {
            pbVar1 = (byte *)(*(longlong *)(uVar3 + lStack_30) + 0xfe);
            *pbVar1 = *pbVar1 & 0xfb;
            uVar8 = (int)param_4 + 1;
            param_4 = (ulonglong)uVar8;
            uVar3 = uVar3 + 8;
          } while ((ulonglong)(longlong)(int)uVar8 < (ulonglong)(lStack_28 - lStack_30 >> 3));
        }
        if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      uVar3 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < *(int *)((longlong)param_1 + 0x50c));
  }
  if (0 < *(int *)((longlong)param_1 + 0x564)) {
    uVar3 = uVar7;
    if (*(int *)((longlong)param_1 + 0x564) < 1) goto LAB_1804dab08;
    do {
      uVar10 = (uint)uVar3;
      lVar12 = *(longlong *)(param_1[0xb2] + (longlong)((int)uVar10 >> 10) * 8);
      lVar2 = (longlong)(int)(*(uint *)(param_1 + 0xb6) & uVar10) * 0x18;
      uVar3 = uVar7;
      if (*(int *)(lVar12 + lVar2) != -1) {
        uVar3 = lVar2 + 8 + lVar12;
      }
LAB_1804dab08:
      if (uVar3 != 0) {
        lStack_30 = 0;
        lStack_28 = 0;
        uStack_20 = 0;
        uStack_18 = 3;
        plVar5 = *(longlong **)(*(longlong *)(uVar3 + 8) + 0x48);
        (**(code **)(*plVar5 + 0x170))(plVar5,&lStack_30,0xffffffff);
        uVar3 = uVar7;
        uVar11 = uVar7;
        if (lStack_28 - lStack_30 >> 3 != 0) {
          do {
            pbVar1 = (byte *)(*(longlong *)(uVar3 + lStack_30) + 0xfe);
            *pbVar1 = *pbVar1 & 0xfb;
            uVar9 = (int)uVar11 + 1;
            uVar3 = uVar3 + 8;
            uVar11 = (ulonglong)uVar9;
          } while ((ulonglong)(longlong)(int)uVar9 < (ulonglong)(lStack_28 - lStack_30 >> 3));
        }
        if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      uVar3 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < *(int *)((longlong)param_1 + 0x564));
  }
  if (0 < *(int *)((longlong)param_1 + 0xb4)) {
    uVar3 = uVar7;
    if (*(int *)((longlong)param_1 + 0xb4) < 1) goto LAB_1804dad3a;
    do {
      uVar6 = (uint)uVar3;
      piVar4 = (int *)((longlong)(int)(*(uint *)(param_1 + 0x20) & uVar6) * 0x68 +
                      *(longlong *)(param_1[0x1c] + (longlong)((int)uVar6 >> 10) * 8));
      if ((*piVar4 != -1) && (plVar5 = (longlong *)(piVar4 + 2), plVar5 != (longlong *)0x0)) {
        lVar12 = *(longlong *)(piVar4 + 0x14) - *(longlong *)(piVar4 + 0x12) >> 0x3f;
        uVar3 = uVar7;
        uVar11 = uVar7;
        if ((*(longlong *)(piVar4 + 0x14) - *(longlong *)(piVar4 + 0x12)) / 0x30 + lVar12 != lVar12)
        {
          do {
            pbVar1 = (byte *)(*(longlong *)(uVar3 + 0x18 + *(longlong *)(piVar4 + 0x12)) + 0xfe);
            *pbVar1 = *pbVar1 & 0xfb;
            uVar10 = (int)uVar11 + 1;
            uVar3 = uVar3 + 0x30;
            uVar11 = (ulonglong)uVar10;
          } while ((ulonglong)(longlong)(int)uVar10 <
                   (ulonglong)((*(longlong *)(piVar4 + 0x14) - *(longlong *)(piVar4 + 0x12)) / 0x30)
                  );
        }
        lVar12 = *(longlong *)(piVar4 + 0xc) - *(longlong *)(piVar4 + 10) >> 0x3f;
        uVar3 = uVar7;
        uVar11 = uVar7;
        if ((*(longlong *)(piVar4 + 0xc) - *(longlong *)(piVar4 + 10)) / 0x68 + lVar12 != lVar12) {
          do {
            pbVar1 = (byte *)(*(longlong *)(uVar3 + 8 + *(longlong *)(piVar4 + 10)) + 0xfe);
            *pbVar1 = *pbVar1 & 0xfb;
            uVar10 = (int)uVar11 + 1;
            uVar3 = uVar3 + 0x68;
            uVar11 = (ulonglong)uVar10;
          } while ((ulonglong)(longlong)(int)uVar10 <
                   (ulonglong)((*(longlong *)(piVar4 + 0xc) - *(longlong *)(piVar4 + 10)) / 0x68));
        }
        lVar12 = *plVar5;
        lVar2 = *(longlong *)(piVar4 + 4) - lVar12 >> 0x3f;
        uVar3 = uVar7;
        uVar11 = uVar7;
        if ((*(longlong *)(piVar4 + 4) - lVar12) / 0x68 + lVar2 != lVar2) {
          do {
            pbVar1 = (byte *)(*(longlong *)(uVar3 + 0x48 + lVar12) + 0xfe);
            *pbVar1 = *pbVar1 & 0xfb;
            uVar10 = (int)uVar11 + 1;
            lVar12 = *plVar5;
            uVar3 = uVar3 + 0x68;
            uVar11 = (ulonglong)uVar10;
          } while ((ulonglong)(longlong)(int)uVar10 <
                   (ulonglong)((*(longlong *)(piVar4 + 4) - lVar12) / 0x68));
        }
      }
LAB_1804dad3a:
      uVar3 = (ulonglong)(uVar6 + 1);
    } while ((int)(uVar6 + 1) < *(int *)((longlong)param_1 + 0xb4));
  }
                    // WARNING: Could not recover jumptable at 0x0001804dad66. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x50))(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




