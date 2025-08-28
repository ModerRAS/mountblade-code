#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part051.c - 8 个函数

// 函数: void FUN_180078051(uint64_t param_1,uint64_t param_2,float param_3,float param_4)
void FUN_180078051(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

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
  int64_t unaff_RBX;
  float *unaff_RDI;
  int32_t unaff_R14D;
  float in_XMM0_Dc;
  float in_XMM1_Dc;
  float in_XMM4_Da;
  float in_XMM4_Db;
  float in_XMM4_Dc;
  float in_XMM5_Da;
  int32_t uStack0000000000000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  int32_t uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  fVar4 = *unaff_RDI;
  fVar5 = unaff_RDI[1];
  fVar6 = unaff_RDI[2];
  fVar7 = unaff_RDI[8];
  fVar8 = unaff_RDI[9];
  fVar9 = unaff_RDI[10];
  fVar1 = *(float *)(unaff_RBX + 0x124);
  fVar2 = *(float *)(unaff_RBX + 0x130);
  fStack0000000000000030 = fVar1 * in_XMM4_Da + (float)param_1 * fVar4 + (float)param_2 * fVar7;
  fStack0000000000000034 =
       fVar1 * in_XMM4_Db + (float)((uint64_t)param_1 >> 0x20) * fVar5 +
       (float)((uint64_t)param_2 >> 0x20) * fVar8;
  fStack0000000000000038 = fVar1 * in_XMM4_Dc + in_XMM0_Dc * fVar6 + in_XMM1_Dc * fVar9;
  fVar1 = *(float *)(unaff_RBX + 0x138);
  fVar3 = *(float *)(unaff_RBX + 0x140);
  fStack0000000000000040 = in_XMM5_Da * in_XMM4_Da + fVar2 * fVar4 + fVar1 * fVar7;
  fStack0000000000000044 = in_XMM5_Da * in_XMM4_Db + fVar2 * fVar5 + fVar1 * fVar8;
  fStack0000000000000048 = in_XMM5_Da * in_XMM4_Dc + fVar2 * fVar6 + fVar1 * fVar9;
  fVar1 = *(float *)(unaff_RBX + 0x148);
  fVar2 = *(float *)(unaff_RBX + 0x150);
  fStack0000000000000050 = param_4 * in_XMM4_Da + fVar3 * fVar4 + fVar1 * fVar7;
  fStack0000000000000054 = param_4 * in_XMM4_Db + fVar3 * fVar5 + fVar1 * fVar8;
  fStack0000000000000058 = param_4 * in_XMM4_Dc + fVar3 * fVar6 + fVar1 * fVar9;
  fVar1 = *(float *)(unaff_RBX + 0x158);
  fStack0000000000000060 = param_3 * in_XMM4_Da + fVar2 * fVar4 + fVar1 * fVar7 + unaff_RDI[0xc];
  fStack0000000000000064 = param_3 * in_XMM4_Db + fVar2 * fVar5 + fVar1 * fVar8 + unaff_RDI[0xd];
  fStack0000000000000068 = param_3 * in_XMM4_Dc + fVar2 * fVar6 + fVar1 * fVar9 + unaff_RDI[0xe];
  uStack0000000000000028 = in_stack_000000e8;
  uStack000000000000006c = 0x3f800000;
  uStack000000000000005c = 0;
  uStack000000000000004c = 0;
  uStack000000000000003c = 0;
  FUN_180252ca0(0x3f800000,fVar1 * fVar7,unaff_R14D,&stack0x00000030,in_stack_000000e0);
  return;
}





// 函数: void FUN_180078143(void)
void FUN_180078143(void)

{
  uint64_t *unaff_RDI;
  int32_t unaff_R14D;
  int32_t uStack0000000000000028;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  uStack0000000000000030 = *unaff_RDI;
  uStack0000000000000040 = unaff_RDI[2];
  uStack0000000000000050 = unaff_RDI[4];
  uStack0000000000000060 = *(int32_t *)(unaff_RDI + 6);
  uStack0000000000000064 = *(int32_t *)((int64_t)unaff_RDI + 0x34);
  uStack0000000000000068 = *(int32_t *)(unaff_RDI + 7);
  uStack0000000000000028 = in_stack_000000e8;
  uStack000000000000006c = 0x3f800000;
  uStack0000000000000058 = unaff_RDI[5] & 0xffffffff;
  uStack0000000000000048 = unaff_RDI[3] & 0xffffffff;
  uStack0000000000000038 = unaff_RDI[1] & 0xffffffff;
  FUN_180252ca0(0x3f800000,uStack0000000000000060,unaff_R14D,&stack0x00000030,in_stack_000000e0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800781e0(int64_t param_1)
void FUN_1800781e0(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int8_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  
  lVar8 = param_1;
  if ((*(int64_t *)(param_1 + 0x1c8) != 0) &&
     (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x1c8) + 0x28), lVar1 != 0)) {
    fVar11 = (*(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x88) -
             *(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x84)) * *(float *)(lVar1 + 0x90);
    func_0x0001800773c0(fVar11,(*(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x80) -
                               *(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x88)) *
                               *(float *)(lVar1 + 0x94) + fVar11 +
                               (*(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x84) -
                               *(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x80)) *
                               *(float *)(lVar1 + 0x98) < 0.0);
  }
  if (*(int64_t *)(lVar8 + 0x1b8) == 0) {
LAB_1800782d4:
    bVar10 = (*(byte *)(param_1 + 0xfd) & 2) != 0;
  }
  else {
    uVar9 = *(uint *)(*(int64_t *)(lVar8 + 0x1b8) + 0x138);
    if ((uVar9 & 0x20) != 0) {
      cVar5 = '\0';
      goto LAB_1800782e0;
    }
    if ((uVar9 & 0x10) == 0) goto LAB_1800782d4;
    bVar10 = (*(byte *)(param_1 + 0xfd) & 2) == 0;
  }
  cVar5 = bVar10 + '\x01';
LAB_1800782e0:
  *(char *)(param_1 + 0xff) = cVar5;
  lVar8 = *(int64_t *)(param_1 + 0x1b8);
  uVar9 = *(uint *)(lVar8 + 0x138) & 0x3000;
  uVar6 = 0;
  if (uVar9 == 0x1000) {
    *(int8_t *)(param_1 + 0xf7) = 1;
  }
  else {
    if (uVar9 == 0x2000) {
      uVar6 = 2;
    }
    *(int8_t *)(param_1 + 0xf7) = uVar6;
  }
  if ((((*(float *)(lVar8 + 0x288) != 0.0) || (*(float *)(lVar8 + 0x28c) != 0.0)) ||
      (*(float *)(lVar8 + 0x290) != 0.0)) || (*(float *)(lVar8 + 0x294) != 0.0)) {
    uVar2 = *(int32_t *)(lVar8 + 0x28c);
    uVar3 = *(int32_t *)(lVar8 + 0x290);
    uVar4 = *(int32_t *)(lVar8 + 0x294);
    *(int32_t *)(param_1 + 0x2a8) = *(int32_t *)(lVar8 + 0x288);
    *(int32_t *)(param_1 + 0x2ac) = uVar2;
    *(int32_t *)(param_1 + 0x2b0) = uVar3;
    *(int32_t *)(param_1 + 0x2b4) = uVar4;
  }
  if (((*(float *)(lVar8 + 0x298) != 0.0) || (*(float *)(lVar8 + 0x29c) != 0.0)) ||
     ((*(float *)(lVar8 + 0x2a0) != 0.0 || (*(float *)(lVar8 + 0x2a4) != 0.0)))) {
    uVar2 = *(int32_t *)(lVar8 + 0x29c);
    uVar3 = *(int32_t *)(lVar8 + 0x2a0);
    uVar4 = *(int32_t *)(lVar8 + 0x2a4);
    *(int32_t *)(param_1 + 0x2b8) = *(int32_t *)(lVar8 + 0x298);
    *(int32_t *)(param_1 + 700) = uVar2;
    *(int32_t *)(param_1 + 0x2c0) = uVar3;
    *(int32_t *)(param_1 + 0x2c4) = uVar4;
  }
  *(int16_t *)(lVar8 + 0x3c0) = 0xffff;
  FUN_180077150(param_1);
  if ((*(int64_t *)(param_1 + 600) == 0) &&
     ((*(uint *)(*(int64_t *)(param_1 + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,9);
    *(uint64_t *)((int64_t)puVar7 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar7 + 9) = 0xffffffff;
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[7] = 0;
    *(int32_t *)(puVar7 + 5) = 0xffffffff;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 8) = 0;
    *(int32_t *)(puVar7 + 1) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x44) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x24) = 0;
    *(uint64_t **)(param_1 + 600) = puVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800781f4(int64_t param_1)
void FUN_1800781f4(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int8_t uVar6;
  int64_t in_RAX;
  uint64_t *puVar7;
  uint uVar8;
  int64_t unaff_RBX;
  bool bVar9;
  float fVar10;
  
  if ((in_RAX != 0) && (lVar1 = *(int64_t *)(in_RAX + 0x28), lVar1 != 0)) {
    fVar10 = (*(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x88) -
             *(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x84)) * *(float *)(lVar1 + 0x90);
    func_0x0001800773c0(fVar10,(*(float *)(lVar1 + 0x78) * *(float *)(lVar1 + 0x80) -
                               *(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x88)) *
                               *(float *)(lVar1 + 0x94) + fVar10 +
                               (*(float *)(lVar1 + 0x70) * *(float *)(lVar1 + 0x84) -
                               *(float *)(lVar1 + 0x74) * *(float *)(lVar1 + 0x80)) *
                               *(float *)(lVar1 + 0x98) < 0.0);
  }
  if (*(int64_t *)(param_1 + 0x1b8) == 0) {
LAB_1800782d4:
    bVar9 = (*(byte *)(unaff_RBX + 0xfd) & 2) != 0;
  }
  else {
    uVar8 = *(uint *)(*(int64_t *)(param_1 + 0x1b8) + 0x138);
    if ((uVar8 & 0x20) != 0) {
      cVar5 = '\0';
      goto LAB_1800782e0;
    }
    if ((uVar8 & 0x10) == 0) goto LAB_1800782d4;
    bVar9 = (*(byte *)(unaff_RBX + 0xfd) & 2) == 0;
  }
  cVar5 = bVar9 + '\x01';
LAB_1800782e0:
  *(char *)(unaff_RBX + 0xff) = cVar5;
  lVar1 = *(int64_t *)(unaff_RBX + 0x1b8);
  uVar8 = *(uint *)(lVar1 + 0x138) & 0x3000;
  uVar6 = 0;
  if (uVar8 == 0x1000) {
    *(int8_t *)(unaff_RBX + 0xf7) = 1;
  }
  else {
    if (uVar8 == 0x2000) {
      uVar6 = 2;
    }
    *(int8_t *)(unaff_RBX + 0xf7) = uVar6;
  }
  if ((((*(float *)(lVar1 + 0x288) != 0.0) || (*(float *)(lVar1 + 0x28c) != 0.0)) ||
      (*(float *)(lVar1 + 0x290) != 0.0)) || (*(float *)(lVar1 + 0x294) != 0.0)) {
    uVar2 = *(int32_t *)(lVar1 + 0x28c);
    uVar3 = *(int32_t *)(lVar1 + 0x290);
    uVar4 = *(int32_t *)(lVar1 + 0x294);
    *(int32_t *)(unaff_RBX + 0x2a8) = *(int32_t *)(lVar1 + 0x288);
    *(int32_t *)(unaff_RBX + 0x2ac) = uVar2;
    *(int32_t *)(unaff_RBX + 0x2b0) = uVar3;
    *(int32_t *)(unaff_RBX + 0x2b4) = uVar4;
  }
  if (((*(float *)(lVar1 + 0x298) != 0.0) || (*(float *)(lVar1 + 0x29c) != 0.0)) ||
     ((*(float *)(lVar1 + 0x2a0) != 0.0 || (*(float *)(lVar1 + 0x2a4) != 0.0)))) {
    uVar2 = *(int32_t *)(lVar1 + 0x29c);
    uVar3 = *(int32_t *)(lVar1 + 0x2a0);
    uVar4 = *(int32_t *)(lVar1 + 0x2a4);
    *(int32_t *)(unaff_RBX + 0x2b8) = *(int32_t *)(lVar1 + 0x298);
    *(int32_t *)(unaff_RBX + 700) = uVar2;
    *(int32_t *)(unaff_RBX + 0x2c0) = uVar3;
    *(int32_t *)(unaff_RBX + 0x2c4) = uVar4;
  }
  *(int16_t *)(lVar1 + 0x3c0) = 0xffff;
  FUN_180077150();
  if ((*(int64_t *)(unaff_RBX + 600) == 0) &&
     ((*(uint *)(*(int64_t *)(unaff_RBX + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,9);
    *(uint64_t *)((int64_t)puVar7 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar7 + 9) = 0xffffffff;
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[7] = 0;
    *(int32_t *)(puVar7 + 5) = 0xffffffff;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 8) = 0;
    *(int32_t *)(puVar7 + 1) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x44) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x24) = 0;
    *(uint64_t **)(unaff_RBX + 600) = puVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180078239(float param_1,float param_2,float param_3,float param_4)
void FUN_180078239(float param_1,float param_2,float param_3,float param_4)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int8_t uVar6;
  int64_t in_RAX;
  uint64_t *puVar7;
  int64_t in_RCX;
  uint uVar8;
  int64_t unaff_RBX;
  bool bVar9;
  float fVar10;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM8_Da;
  
  fVar10 = (*(float *)(in_RAX + 0x74) * param_2 - param_3 * param_4) * *(float *)(in_RAX + 0x90);
  func_0x0001800773c0(fVar10,(param_3 * in_XMM4_Da - param_1 * param_2) * *(float *)(in_RAX + 0x94)
                             + fVar10 +
                             (in_XMM5_Da * param_4 - *(float *)(in_RAX + 0x74) * in_XMM4_Da) *
                             *(float *)(in_RAX + 0x98) < unaff_XMM8_Da);
  if (*(int64_t *)(in_RCX + 0x1b8) == 0) {
LAB_1800782d4:
    bVar9 = (*(byte *)(unaff_RBX + 0xfd) & 2) != 0;
  }
  else {
    uVar8 = *(uint *)(*(int64_t *)(in_RCX + 0x1b8) + 0x138);
    if ((uVar8 & 0x20) != 0) {
      cVar5 = '\0';
      goto LAB_1800782e0;
    }
    if ((uVar8 & 0x10) == 0) goto LAB_1800782d4;
    bVar9 = (*(byte *)(unaff_RBX + 0xfd) & 2) == 0;
  }
  cVar5 = bVar9 + '\x01';
LAB_1800782e0:
  *(char *)(unaff_RBX + 0xff) = cVar5;
  lVar1 = *(int64_t *)(unaff_RBX + 0x1b8);
  uVar8 = *(uint *)(lVar1 + 0x138) & 0x3000;
  uVar6 = 0;
  if (uVar8 == 0x1000) {
    *(int8_t *)(unaff_RBX + 0xf7) = 1;
  }
  else {
    if (uVar8 == 0x2000) {
      uVar6 = 2;
    }
    *(int8_t *)(unaff_RBX + 0xf7) = uVar6;
  }
  if ((((unaff_XMM8_Da != *(float *)(lVar1 + 0x288)) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x28c))
       ) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x290))) ||
     (unaff_XMM8_Da != *(float *)(lVar1 + 0x294))) {
    uVar2 = *(int32_t *)(lVar1 + 0x28c);
    uVar3 = *(int32_t *)(lVar1 + 0x290);
    uVar4 = *(int32_t *)(lVar1 + 0x294);
    *(int32_t *)(unaff_RBX + 0x2a8) = *(int32_t *)(lVar1 + 0x288);
    *(int32_t *)(unaff_RBX + 0x2ac) = uVar2;
    *(int32_t *)(unaff_RBX + 0x2b0) = uVar3;
    *(int32_t *)(unaff_RBX + 0x2b4) = uVar4;
  }
  if (((unaff_XMM8_Da != *(float *)(lVar1 + 0x298)) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x29c)))
     || ((unaff_XMM8_Da != *(float *)(lVar1 + 0x2a0) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x2a4))
         ))) {
    uVar2 = *(int32_t *)(lVar1 + 0x29c);
    uVar3 = *(int32_t *)(lVar1 + 0x2a0);
    uVar4 = *(int32_t *)(lVar1 + 0x2a4);
    *(int32_t *)(unaff_RBX + 0x2b8) = *(int32_t *)(lVar1 + 0x298);
    *(int32_t *)(unaff_RBX + 700) = uVar2;
    *(int32_t *)(unaff_RBX + 0x2c0) = uVar3;
    *(int32_t *)(unaff_RBX + 0x2c4) = uVar4;
  }
  *(int16_t *)(lVar1 + 0x3c0) = 0xffff;
  FUN_180077150();
  if ((*(int64_t *)(unaff_RBX + 600) == 0) &&
     ((*(uint *)(*(int64_t *)(unaff_RBX + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,9);
    *(uint64_t *)((int64_t)puVar7 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar7 + 9) = 0xffffffff;
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[7] = 0;
    *(int32_t *)(puVar7 + 5) = 0xffffffff;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 8) = 0;
    *(int32_t *)(puVar7 + 1) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x44) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x24) = 0;
    *(uint64_t **)(unaff_RBX + 600) = puVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800782a8(int64_t param_1)
void FUN_1800782a8(int64_t param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  char cVar5;
  int8_t uVar6;
  uint64_t *puVar7;
  uint uVar8;
  int64_t unaff_RBX;
  bool bVar9;
  float unaff_XMM8_Da;
  
  if (*(int64_t *)(param_1 + 0x1b8) == 0) {
LAB_1800782d4:
    bVar9 = (*(byte *)(unaff_RBX + 0xfd) & 2) != 0;
  }
  else {
    uVar8 = *(uint *)(*(int64_t *)(param_1 + 0x1b8) + 0x138);
    if ((uVar8 & 0x20) != 0) {
      cVar5 = '\0';
      goto LAB_1800782e0;
    }
    if ((uVar8 & 0x10) == 0) goto LAB_1800782d4;
    bVar9 = (*(byte *)(unaff_RBX + 0xfd) & 2) == 0;
  }
  cVar5 = bVar9 + '\x01';
LAB_1800782e0:
  *(char *)(unaff_RBX + 0xff) = cVar5;
  lVar1 = *(int64_t *)(unaff_RBX + 0x1b8);
  uVar8 = *(uint *)(lVar1 + 0x138) & 0x3000;
  uVar6 = 0;
  if (uVar8 == 0x1000) {
    *(int8_t *)(unaff_RBX + 0xf7) = 1;
  }
  else {
    if (uVar8 == 0x2000) {
      uVar6 = 2;
    }
    *(int8_t *)(unaff_RBX + 0xf7) = uVar6;
  }
  if ((((unaff_XMM8_Da != *(float *)(lVar1 + 0x288)) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x28c))
       ) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x290))) ||
     (unaff_XMM8_Da != *(float *)(lVar1 + 0x294))) {
    uVar2 = *(int32_t *)(lVar1 + 0x28c);
    uVar3 = *(int32_t *)(lVar1 + 0x290);
    uVar4 = *(int32_t *)(lVar1 + 0x294);
    *(int32_t *)(unaff_RBX + 0x2a8) = *(int32_t *)(lVar1 + 0x288);
    *(int32_t *)(unaff_RBX + 0x2ac) = uVar2;
    *(int32_t *)(unaff_RBX + 0x2b0) = uVar3;
    *(int32_t *)(unaff_RBX + 0x2b4) = uVar4;
  }
  if (((unaff_XMM8_Da != *(float *)(lVar1 + 0x298)) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x29c)))
     || ((unaff_XMM8_Da != *(float *)(lVar1 + 0x2a0) || (unaff_XMM8_Da != *(float *)(lVar1 + 0x2a4))
         ))) {
    uVar2 = *(int32_t *)(lVar1 + 0x29c);
    uVar3 = *(int32_t *)(lVar1 + 0x2a0);
    uVar4 = *(int32_t *)(lVar1 + 0x2a4);
    *(int32_t *)(unaff_RBX + 0x2b8) = *(int32_t *)(lVar1 + 0x298);
    *(int32_t *)(unaff_RBX + 700) = uVar2;
    *(int32_t *)(unaff_RBX + 0x2c0) = uVar3;
    *(int32_t *)(unaff_RBX + 0x2c4) = uVar4;
  }
  *(int16_t *)(lVar1 + 0x3c0) = 0xffff;
  FUN_180077150();
  if ((*(int64_t *)(unaff_RBX + 600) == 0) &&
     ((*(uint *)(*(int64_t *)(unaff_RBX + 0x1b8) + 0x388) >> 0x19 & 1) != 0)) {
    puVar7 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,9);
    *(uint64_t *)((int64_t)puVar7 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar7 + 9) = 0xffffffff;
    *puVar7 = 0;
    puVar7[2] = 0;
    puVar7[7] = 0;
    *(int32_t *)(puVar7 + 5) = 0xffffffff;
    *(int32_t *)(puVar7 + 4) = 0xffffffff;
    puVar7[3] = 0;
    *(int32_t *)(puVar7 + 8) = 0;
    *(int32_t *)(puVar7 + 1) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x44) = 0;
    *(int8_t *)((int64_t)puVar7 + 0x24) = 0;
    *(uint64_t **)(unaff_RBX + 600) = puVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800783b0(void)
void FUN_1800783b0(void)

{
  uint64_t *puVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RDI;
  
  if ((*(uint *)(*(int64_t *)(unaff_RBX + 0x1b8) + 0x388) >> 0x19 & 1) != 0) {
    puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,9);
    *(uint64_t *)((int64_t)puVar1 + 0x2c) = 0xffffffffffffffff;
    *(int32_t *)(puVar1 + 9) = 0xffffffff;
    *puVar1 = unaff_RDI;
    puVar1[2] = unaff_RDI;
    puVar1[7] = unaff_RDI;
    *(int32_t *)(puVar1 + 5) = 0xffffffff;
    *(int32_t *)(puVar1 + 4) = 0xffffffff;
    puVar1[3] = unaff_RDI;
    *(int *)(puVar1 + 8) = (int)unaff_RDI;
    *(int *)(puVar1 + 1) = (int)unaff_RDI;
    *(char *)((int64_t)puVar1 + 0x44) = (char)unaff_RDI;
    *(char *)((int64_t)puVar1 + 0x24) = (char)unaff_RDI;
    *(uint64_t **)(unaff_RBX + 600) = puVar1;
  }
  return;
}



uint64_t * FUN_1800784e0(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7192_ptr;
  FUN_180078550();
  SystemDataValidator(param_1 + 1,8,7,DataCacheManager,uVar1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x158);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180078550(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180078550(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (0 < *(int *)(init_system_data_config + 0x40)) {
    param_1[0x26] = *(uint64_t *)(init_system_data_config + 0x38);
  }
  plVar2 = param_1 + 1;
  lVar3 = 7;
  do {
    plVar1 = (int64_t *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0x20] = 0x3f8000003f800000;
  param_1[0x21] = 0x3f8000003f800000;
  param_1[0x22] = 0;
  *(int32_t *)(param_1 + 0x23) = 0;
  *(int32_t *)((int64_t)param_1 + 0x11c) = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  *(int32_t *)(param_1 + 0x25) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x13c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x144) = 0;
  *(int32_t *)(param_1 + 0x29) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x14c) = 0x3f800000;
  *(int16_t *)(param_1 + 0x2a) = 0;
  *(int8_t *)((int64_t)param_1 + 0x152) = 1;
  *(int32_t *)(param_1 + 0x27) = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0x3f80000000000000;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(int32_t *)((int64_t)param_1 + 100) = 0;
  *(int32_t *)(param_1 + 0xd) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0xe) = 0;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  *(int32_t *)((int64_t)param_1 + 0x7c) = 0x3f800000;
  if ((void *)*param_1 == &processed_var_7192_ptr) {
    param_1[0x10] = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
    *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_1 + 0xc);
    *(int32_t *)((int64_t)param_1 + 0xa4) = *(int32_t *)((int64_t)param_1 + 100);
    *(int32_t *)(param_1 + 0x15) = *(int32_t *)(param_1 + 0xd);
    *(int32_t *)((int64_t)param_1 + 0xac) = *(int32_t *)((int64_t)param_1 + 0x6c);
    *(int32_t *)(param_1 + 0x16) = *(int32_t *)(param_1 + 0xe);
    *(int32_t *)((int64_t)param_1 + 0xb4) = *(int32_t *)((int64_t)param_1 + 0x74);
    *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_1 + 0xf);
    *(int32_t *)((int64_t)param_1 + 0xbc) = *(int32_t *)((int64_t)param_1 + 0x7c);
    uVar4 = FUN_180084ae0();
    *(int32_t *)((int64_t)param_1 + 0x8c) = 0;
    *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
    *(int32_t *)((int64_t)param_1 + 0xac) = 0;
    *(int32_t *)((int64_t)param_1 + 0xbc) = 0x3f800000;
    FUN_180084760(uVar4,param_1 + 0x18);
  }
  else {
    (**(code **)((void *)*param_1 + 0x10))(param_1,0,param_3,param_4,uVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



