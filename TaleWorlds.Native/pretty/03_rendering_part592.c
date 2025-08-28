/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part592.c - 6 个函数
// 函数: void NetworkSystem_91aee(uint64_t param_1,int32_t param_2)
void NetworkSystem_91aee(uint64_t param_1,int32_t param_2)
{
// WARNING: Subroutine does not return
  AdvancedSystemController(param_2);
}
int8_t NetworkSystem_91c6d(void)
{
  float fVar1;
  float fVar2;
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
  int8_t unaff_SIL;
  float *unaff_R12;
  int64_t unaff_R15;
  int32_t uVar16;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM15_Da;
  *(int32_t *)(unaff_R15 + 0x1d0) = unaff_XMM15_Da;
  *(int32_t *)(unaff_R15 + 0x1b0) = unaff_XMM6_Da;
  *(int32_t *)(unaff_R15 + 0x1b4) = unaff_XMM6_Db;
  *(int32_t *)(unaff_R15 + 0x1b8) = unaff_XMM6_Dc;
  *(int32_t *)(unaff_R15 + 0x1bc) = unaff_XMM6_Dd;
  *(int32_t *)(unaff_R15 + 0x1c0) = unaff_XMM7_Da;
  *(int32_t *)(unaff_R15 + 0x1c4) = unaff_XMM7_Db;
  *(int32_t *)(unaff_R15 + 0x1c8) = unaff_XMM7_Dc;
  *(int32_t *)(unaff_R15 + 0x1cc) = unaff_XMM7_Dd;
  *(int32_t *)(unaff_R15 + 500) = unaff_XMM15_Da;
  *(int32_t *)(unaff_R15 + 0x1d4) = unaff_XMM6_Da;
  *(int32_t *)(unaff_R15 + 0x1d8) = unaff_XMM6_Db;
  *(int32_t *)(unaff_R15 + 0x1dc) = unaff_XMM6_Dc;
  *(int32_t *)(unaff_R15 + 0x1e0) = unaff_XMM6_Dd;
  *(int32_t *)(unaff_R15 + 0x1e4) = unaff_XMM7_Da;
  *(int32_t *)(unaff_R15 + 0x1e8) = unaff_XMM7_Db;
  *(int32_t *)(unaff_R15 + 0x1ec) = unaff_XMM7_Dc;
  *(int32_t *)(unaff_R15 + 0x1f0) = unaff_XMM7_Dd;
  fVar4 = unaff_R12[5];
  fVar5 = unaff_R12[6];
  fVar6 = unaff_R12[7];
  fVar7 = unaff_R12[1];
  fVar8 = unaff_R12[2];
  fVar9 = unaff_R12[3];
  fVar1 = *(float *)(unaff_R15 + 0x1d8);
  fVar2 = *(float *)(unaff_R15 + 0x1d4);
  fVar3 = *(float *)(unaff_R15 + 0x1dc);
  fVar10 = unaff_R12[9];
  fVar11 = unaff_R12[10];
  fVar12 = unaff_R12[0xb];
  fVar13 = unaff_R12[0xd];
  fVar14 = unaff_R12[0xe];
  fVar15 = unaff_R12[0xf];
  *(float *)(unaff_R15 + 0x1b0) =
       unaff_R12[4] * fVar1 + *unaff_R12 * fVar2 + unaff_R12[8] * fVar3 + unaff_R12[0xc];
  *(float *)(unaff_R15 + 0x1b4) = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
  *(float *)(unaff_R15 + 0x1b8) = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
  *(float *)(unaff_R15 + 0x1bc) = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
  fVar4 = unaff_R12[5];
  fVar5 = unaff_R12[6];
  fVar6 = unaff_R12[7];
  fVar7 = unaff_R12[1];
  fVar8 = unaff_R12[2];
  fVar9 = unaff_R12[3];
  fVar1 = *(float *)(unaff_R15 + 0x1e8);
  fVar2 = *(float *)(unaff_R15 + 0x1e4);
  fVar3 = *(float *)(unaff_R15 + 0x1ec);
  fVar10 = unaff_R12[9];
  fVar11 = unaff_R12[10];
  fVar12 = unaff_R12[0xb];
  fVar13 = unaff_R12[0xd];
  fVar14 = unaff_R12[0xe];
  fVar15 = unaff_R12[0xf];
  *(float *)(unaff_R15 + 0x1c0) =
       unaff_R12[4] * fVar1 + *unaff_R12 * fVar2 + unaff_R12[8] * fVar3 + unaff_R12[0xc];
  *(float *)(unaff_R15 + 0x1c4) = fVar4 * fVar1 + fVar7 * fVar2 + fVar10 * fVar3 + fVar13;
  *(float *)(unaff_R15 + 0x1c8) = fVar5 * fVar1 + fVar8 * fVar2 + fVar11 * fVar3 + fVar14;
  *(float *)(unaff_R15 + 0x1cc) = fVar6 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3 + fVar15;
  uVar16 = Function_b601fd69();
  *(int32_t *)(unaff_R15 + 0x1d0) = uVar16;
  return unaff_SIL;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_91d90(int64_t param_1,int64_t param_2,float param_3)
void NetworkSystem_91d90(int64_t param_1,int64_t param_2,float param_3)
{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint64_t local_var_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t local_var_4c;
  local_var_88 = 0x3f800000;
  local_var_80 = 0;
  local_var_68 = 0;
  local_var_60 = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0x3f800000;
  local_var_70 = 0;
  local_var_6c = 0;
  if ((*(uint *)(param_2 + 0x24) & 0x800) == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(param_1 + 0x34));
  }
  fStack_58 = *(float *)(param_1 + 0x168) + *(float *)(param_1 + 0xc);
  fStack_54 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x16c);
  fStack_50 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x170);
  *(int32_t *)(param_1 + 0x18c) = *(int32_t *)(param_1 + 0x1b0);
  *(int32_t *)(param_1 + 400) = *(int32_t *)(param_1 + 0x1b4);
  *(int32_t *)(param_1 + 0x194) = *(int32_t *)(param_1 + 0x1b8);
  *(int32_t *)(param_1 + 0x198) = *(int32_t *)(param_1 + 0x1bc);
  *(int32_t *)(param_1 + 0x19c) = *(int32_t *)(param_1 + 0x1c0);
  *(int32_t *)(param_1 + 0x1a0) = *(int32_t *)(param_1 + 0x1c4);
  *(int32_t *)(param_1 + 0x1a4) = *(int32_t *)(param_1 + 0x1c8);
  *(int32_t *)(param_1 + 0x1a8) = *(int32_t *)(param_1 + 0x1cc);
  *(int32_t *)(param_1 + 0x1ac) = *(int32_t *)(param_1 + 0x1d0);
  local_var_4c = 0x7f7fffff;
  cVar1 = NetworkSystem_91740(param_1,&local_var_88,param_2);
  if (cVar1 == '\0') {
    if (*(char *)(param_2 + 0x98) == '\0') {
      *(float *)(param_1 + 0x1f8) =
           param_3 * 8.2 * (1.0 - *(float *)(param_1 + 0x1f8)) + *(float *)(param_1 + 0x1f8);
    }
    else {
      *(int32_t *)(param_1 + 0x1f8) = 0x3f800000;
    }
  }
  else {
    *(int32_t *)(param_1 + 0x1f8) = render_system_config;
  }
  if ((*(float *)(param_1 + 0x1ac) <= 0.0) ||
     (fVar5 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x18c),
     fVar4 = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 400),
     fVar2 = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x194),
     fVar3 = *(float *)(param_1 + 0x1d0) * *(float *)(param_1 + 0x1d0), fVar3 = fVar3 + fVar3,
     fVar3 + fVar3 < fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2)) {
    *(uint64_t *)(param_1 + 0x18c) = *(uint64_t *)(param_1 + 0x1b0);
    *(uint64_t *)(param_1 + 0x194) = *(uint64_t *)(param_1 + 0x1b8);
    *(uint64_t *)(param_1 + 0x19c) = *(uint64_t *)(param_1 + 0x1c0);
    *(uint64_t *)(param_1 + 0x1a4) = *(uint64_t *)(param_1 + 0x1c8);
    *(int32_t *)(param_1 + 0x1ac) = *(int32_t *)(param_1 + 0x1d0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_91dbf(int64_t param_1,uint64_t param_2,float param_3)
void NetworkSystem_91dbf(int64_t param_1,uint64_t param_2,float param_3)
{
  int32_t uVar1;
  char cVar2;
  int64_t in_RAX;
  int64_t in_RDX;
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  bool in_ZF;
  float fVar3;
  uint64_t in_XMM0_Qa;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar4;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fVar5;
  float fVar6;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  uint64_t unaff_XMM8_Qa;
  uint64_t unaff_XMM8_Qb;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float local_buffer_60;
  float fStack0000000000000064;
  float local_buffer_68;
  int32_t local_buffer_6c;
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int *)(in_RAX + -0x68) = (int)in_XMM0_Qa;
  *(int *)(in_RAX + -100) = (int)((uint64_t)in_XMM0_Qa >> 0x20);
  *(int32_t *)(in_RAX + -0x60) = in_XMM0_Dc;
  *(int32_t *)(in_RAX + -0x5c) = in_XMM0_Dd;
  *(int *)(in_RAX + -0x78) = (int)param_2;
  *(int *)(in_RAX + -0x74) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(in_RAX + -0x70) = in_XMM1_Dc;
  *(int32_t *)(in_RAX + -0x6c) = in_XMM1_Dd;
  if (in_ZF) {
    uVar1 = *(int32_t *)(param_1 + 0x34);
    *(uint64_t *)(in_RAX + -0x18) = unaff_XMM6_Qa;
    *(uint64_t *)(in_RAX + -0x10) = unaff_XMM6_Qb;
    *(uint64_t *)(in_RAX + -0x28) = unaff_XMM7_Qa;
    *(uint64_t *)(in_RAX + -0x20) = unaff_XMM7_Qb;
    *(uint64_t *)(in_RAX + -0x38) = unaff_XMM8_Qa;
    *(uint64_t *)(in_RAX + -0x30) = unaff_XMM8_Qb;
// WARNING: Subroutine does not return
    AdvancedSystemController(uVar1);
  }
  local_buffer_60 = *(float *)(unaff_RBX + 0x168) + *(float *)(unaff_RBX + 0xc);
  fStack0000000000000064 = *(float *)(unaff_RBX + 0x10) + *(float *)(unaff_RBX + 0x16c);
  local_buffer_68 = *(float *)(unaff_RBX + 0x14) + *(float *)(unaff_RBX + 0x170);
  *(int32_t *)(unaff_RBX + 0x18c) = *(int32_t *)(unaff_RBX + 0x1b0);
  *(int32_t *)(unaff_RBX + 400) = *(int32_t *)(unaff_RBX + 0x1b4);
  *(int32_t *)(unaff_RBX + 0x194) = *(int32_t *)(unaff_RBX + 0x1b8);
  *(int32_t *)(unaff_RBX + 0x198) = *(int32_t *)(unaff_RBX + 0x1bc);
  *(int32_t *)(unaff_RBX + 0x19c) = *(int32_t *)(unaff_RBX + 0x1c0);
  *(int32_t *)(unaff_RBX + 0x1a0) = *(int32_t *)(unaff_RBX + 0x1c4);
  *(int32_t *)(unaff_RBX + 0x1a4) = *(int32_t *)(unaff_RBX + 0x1c8);
  *(int32_t *)(unaff_RBX + 0x1a8) = *(int32_t *)(unaff_RBX + 0x1cc);
  *(int32_t *)(unaff_RBX + 0x1ac) = *(int32_t *)(unaff_RBX + 0x1d0);
  local_buffer_6c = 0x7f7fffff;
  cVar2 = NetworkSystem_91740(*(int32_t *)(unaff_RBX + 0x1b0),&local_buffer_00000030,in_RDX);
  if (cVar2 == '\0') {
    if (*(char *)(in_RDX + 0x98) == '\0') {
      *(float *)(unaff_RBX + 0x1f8) =
           param_3 * 8.2 * (1.0 - *(float *)(unaff_RBX + 0x1f8)) + *(float *)(unaff_RBX + 0x1f8);
    }
    else {
      *(int32_t *)(unaff_RBX + 0x1f8) = 0x3f800000;
    }
  }
  else {
    *(int32_t *)(unaff_RBX + 0x1f8) = render_system_config;
  }
  if ((*(float *)(unaff_RBX + 0x1ac) <= 0.0) ||
     (fVar6 = *(float *)(unaff_RBX + 0x1b0) - *(float *)(unaff_RBX + 0x18c),
     fVar5 = *(float *)(unaff_RBX + 0x1b4) - *(float *)(unaff_RBX + 400),
     fVar3 = *(float *)(unaff_RBX + 0x1b8) - *(float *)(unaff_RBX + 0x194),
     fVar4 = *(float *)(unaff_RBX + 0x1d0) * *(float *)(unaff_RBX + 0x1d0), fVar4 = fVar4 + fVar4,
     fVar4 + fVar4 < fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3)) {
    *(uint64_t *)(unaff_RBX + 0x18c) = *(uint64_t *)(unaff_RBX + 0x1b0);
    *(uint64_t *)(unaff_RBX + 0x194) = *(uint64_t *)(unaff_RBX + 0x1b8);
    *(uint64_t *)(unaff_RBX + 0x19c) = *(uint64_t *)(unaff_RBX + 0x1c0);
    *(uint64_t *)(unaff_RBX + 0x1a4) = *(uint64_t *)(unaff_RBX + 0x1c8);
    *(int32_t *)(unaff_RBX + 0x1ac) = *(int32_t *)(unaff_RBX + 0x1d0);
  }
  return;
}
// 函数: void NetworkSystem_91de2(void)
void NetworkSystem_91de2(void)
{
  int64_t in_RAX;
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  uint64_t unaff_XMM7_Qa;
  uint64_t unaff_XMM7_Qb;
  uint64_t unaff_XMM8_Qa;
  uint64_t unaff_XMM8_Qb;
  *(uint64_t *)(in_RAX + -0x18) = unaff_XMM6_Qa;
  *(uint64_t *)(in_RAX + -0x10) = unaff_XMM6_Qb;
  *(uint64_t *)(in_RAX + -0x28) = unaff_XMM7_Qa;
  *(uint64_t *)(in_RAX + -0x20) = unaff_XMM7_Qb;
  *(uint64_t *)(in_RAX + -0x38) = unaff_XMM8_Qa;
  *(uint64_t *)(in_RAX + -0x30) = unaff_XMM8_Qb;
// WARNING: Subroutine does not return
  AdvancedSystemController();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_91ed5(void)
void NetworkSystem_91ed5(void)
{
  char cVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM9_Da;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t local_buffer_6c;
  fStack0000000000000060 = *(float *)(unaff_RBX + 0x168) + *(float *)(unaff_RBX + 0xc);
  fStack0000000000000064 = *(float *)(unaff_RBX + 0x10) + *(float *)(unaff_RBX + 0x16c);
  fStack0000000000000068 = *(float *)(unaff_RBX + 0x14) + *(float *)(unaff_RBX + 0x170);
  *(int32_t *)(unaff_RBX + 0x18c) = *(int32_t *)(unaff_RBX + 0x1b0);
  *(int32_t *)(unaff_RBX + 400) = *(int32_t *)(unaff_RBX + 0x1b4);
  *(int32_t *)(unaff_RBX + 0x194) = *(int32_t *)(unaff_RBX + 0x1b8);
  *(int32_t *)(unaff_RBX + 0x198) = *(int32_t *)(unaff_RBX + 0x1bc);
  *(int32_t *)(unaff_RBX + 0x19c) = *(int32_t *)(unaff_RBX + 0x1c0);
  *(int32_t *)(unaff_RBX + 0x1a0) = *(int32_t *)(unaff_RBX + 0x1c4);
  *(int32_t *)(unaff_RBX + 0x1a4) = *(int32_t *)(unaff_RBX + 0x1c8);
  *(int32_t *)(unaff_RBX + 0x1a8) = *(int32_t *)(unaff_RBX + 0x1cc);
  *(int32_t *)(unaff_RBX + 0x1ac) = *(int32_t *)(unaff_RBX + 0x1d0);
  local_buffer_6c = 0x7f7fffff;
  cVar1 = NetworkSystem_91740(*(int32_t *)(unaff_RBX + 0x1b0),&local_buffer_00000030);
  if (cVar1 == '\0') {
    if (*(char *)(unaff_RDI + 0x98) == '\0') {
      *(float *)(unaff_RBX + 0x1f8) =
           unaff_XMM9_Da * 8.2 * (1.0 - *(float *)(unaff_RBX + 0x1f8)) +
           *(float *)(unaff_RBX + 0x1f8);
    }
    else {
      *(int32_t *)(unaff_RBX + 0x1f8) = 0x3f800000;
    }
  }
  else {
    *(int32_t *)(unaff_RBX + 0x1f8) = render_system_config;
  }
  if ((*(float *)(unaff_RBX + 0x1ac) <= 0.0) ||
     (fVar5 = *(float *)(unaff_RBX + 0x1b0) - *(float *)(unaff_RBX + 0x18c),
     fVar4 = *(float *)(unaff_RBX + 0x1b4) - *(float *)(unaff_RBX + 400),
     fVar2 = *(float *)(unaff_RBX + 0x1b8) - *(float *)(unaff_RBX + 0x194),
     fVar3 = *(float *)(unaff_RBX + 0x1d0) * *(float *)(unaff_RBX + 0x1d0), fVar3 = fVar3 + fVar3,
     fVar3 + fVar3 < fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2)) {
    *(uint64_t *)(unaff_RBX + 0x18c) = *(uint64_t *)(unaff_RBX + 0x1b0);
    *(uint64_t *)(unaff_RBX + 0x194) = *(uint64_t *)(unaff_RBX + 0x1b8);
    *(uint64_t *)(unaff_RBX + 0x19c) = *(uint64_t *)(unaff_RBX + 0x1c0);
    *(uint64_t *)(unaff_RBX + 0x1a4) = *(uint64_t *)(unaff_RBX + 0x1c8);
    *(int32_t *)(unaff_RBX + 0x1ac) = *(int32_t *)(unaff_RBX + 0x1d0);
  }
  return;
}
// 函数: void NetworkSystem_91fd2(void)
void NetworkSystem_91fd2(void)
{
  int64_t unaff_RBX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  fVar4 = *(float *)(unaff_RBX + 0x1b0) - *(float *)(unaff_RBX + 0x18c);
  fVar3 = *(float *)(unaff_RBX + 0x1b4) - *(float *)(unaff_RBX + 400);
  fVar1 = *(float *)(unaff_RBX + 0x1b8) - *(float *)(unaff_RBX + 0x194);
  fVar2 = *(float *)(unaff_RBX + 0x1d0) * *(float *)(unaff_RBX + 0x1d0);
  fVar2 = fVar2 + fVar2;
  if (fVar2 + fVar2 < fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1) {
    *(uint64_t *)(unaff_RBX + 0x18c) = *(uint64_t *)(unaff_RBX + 0x1b0);
    *(uint64_t *)(unaff_RBX + 0x194) = *(uint64_t *)(unaff_RBX + 0x1b8);
    *(uint64_t *)(unaff_RBX + 0x19c) = *(uint64_t *)(unaff_RBX + 0x1c0);
    *(uint64_t *)(unaff_RBX + 0x1a4) = *(uint64_t *)(unaff_RBX + 0x1c8);
    *(int32_t *)(unaff_RBX + 0x1ac) = *(int32_t *)(unaff_RBX + 0x1d0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address