#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part009.c - 3 个函数

// 函数: void FUN_1806a787d(int64_t *param_1,int64_t *param_2)
void FUN_1806a787d(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *unaff_RBP;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint64_t unaff_R12;
  int64_t *plVar10;
  uint64_t unaff_R15;
  uint64_t uVar11;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  uint64_t in_stack_00000040;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  
  *(uint64_t *)(in_RAX + -0x38) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R15;
  lVar1 = *param_2;
  *(int32_t *)(unaff_RBP + 0xab) = 4;
  (**(code **)(lVar1 + 8))(param_2,&stack0x00000058,unaff_RBP + 0xab);
  lVar1 = *param_2;
  *(int32_t *)(unaff_RBP + 0xab) = 4;
  (**(code **)(lVar1 + 8))(param_2,param_1 + 0x1d,unaff_RBP + 0xab);
  FUN_1806a85d0(param_1[0x13],param_2);
  lVar1 = *param_2;
  *(int32_t *)(unaff_RBP + 0xab) = 4;
  _uStack0000000000000030 = param_1;
  _uStack0000000000000038 = param_2;
  (**(code **)(lVar1 + 8))(param_2,unaff_RBP + 0xac,unaff_RBP + 0xab);
  puVar6 = (uint64_t *)0x0;
  unaff_RBP[0xab] = 0;
  FUN_1806b0eb0(param_1 + 0x11,*(int32_t *)(unaff_RBP + 0xac),unaff_RBP + 0xab);
  puVar5 = puVar6;
  if ((int)param_1[0x12] != 0) {
    do {
      lVar1 = param_1[0x11];
      *(int32_t *)(unaff_RBP + 0xab) = 4;
      (**(code **)(*param_2 + 8))(param_2,unaff_RBP + 0xad,unaff_RBP + 0xab);
      if (*(int *)(unaff_RBP + 0xad) == 0) {
        puVar3 = (uint64_t *)0x0;
      }
      else {
        puVar3 = (uint64_t *)
                 (**(code **)(*system_system_buffer_buffer + 8))
                           (system_system_buffer_buffer,0x68,&processed_var_5616_ptr,&processed_var_5360_ptr,0x568);
        if (puVar3 == (uint64_t *)0x0) {
          FUN_1806a8c20(0,&stack0x00000030);
          puVar3 = puVar6;
        }
        else {
          puVar3[1] = &system_buffer_ptr;
          puVar3[2] = &system_buffer_ptr;
          *(int32_t *)(puVar3 + 3) = 0xffffffff;
          puVar3[4] = &system_buffer_ptr;
          puVar3[5] = &system_buffer_ptr;
          *(int32_t *)(puVar3 + 6) = 0xffffffff;
          puVar3[7] = &system_buffer_ptr;
          puVar3[8] = &system_buffer_ptr;
          *(int32_t *)(puVar3 + 9) = 0;
          *(int32_t *)((int64_t)puVar3 + 0x4c) = 0xffffffff;
          puVar3[10] = 0;
          *puVar3 = &processed_var_5048_ptr;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          FUN_1806a8c20(puVar3,&stack0x00000030);
        }
      }
      uVar7 = (int)puVar5 + 1;
      *(uint64_t **)(lVar1 + (int64_t)puVar5 * 8) = puVar3;
      puVar5 = (uint64_t *)(uint64_t)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x12));
    param_1 = (int64_t *)unaff_RBP[0xaa];
  }
  lVar1 = *param_2;
  *(int32_t *)(unaff_RBP + 0xab) = 4;
  (**(code **)(lVar1 + 8))(param_2,&stack0x00000050,unaff_RBP + 0xab);
  unaff_RBP[0xab] = 0;
  FUN_1806b0dd0(param_1 + 0xf,uStack0000000000000050,unaff_RBP + 0xab);
  puVar5 = puVar6;
  if ((int)param_1[0x10] != 0) {
    do {
      lVar1 = param_1[0xf];
      *(int32_t *)(unaff_RBP + 0xab) = 4;
      (**(code **)(*param_2 + 8))(param_2,unaff_RBP + 0xad,unaff_RBP + 0xab);
      if (*(int *)(unaff_RBP + 0xad) == 0) {
        puVar3 = (uint64_t *)0x0;
      }
      else {
        puVar3 = (uint64_t *)
                 (**(code **)(*system_system_buffer_buffer + 8))
                           (system_system_buffer_buffer,0xa0,&processed_var_5616_ptr,&processed_var_5360_ptr,0x568);
        if (puVar3 == (uint64_t *)0x0) {
          FUN_1806a89c0(0,&stack0x00000030);
          puVar3 = puVar6;
        }
        else {
          puVar3[1] = &system_buffer_ptr;
          puVar3[2] = &system_buffer_ptr;
          puVar3[3] = 0xffffffffffffffff;
          puVar3[4] = 0xffffffffffffffff;
          puVar3[5] = 0;
          *(int32_t *)(puVar3 + 6) = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          *(int32_t *)(puVar3 + 10) = 0;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          *(int16_t *)(puVar3 + 0xd) = 0;
          *puVar3 = &processed_var_5056_ptr;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          puVar3[0x10] = 0;
          puVar3[0x11] = 0;
          puVar3[0x12] = 0;
          puVar3[0x13] = 0;
          FUN_1806a89c0(puVar3,&stack0x00000030);
        }
      }
      uVar7 = (int)puVar5 + 1;
      *(uint64_t **)(lVar1 + (int64_t)puVar5 * 8) = puVar3;
      puVar5 = (uint64_t *)(uint64_t)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
    param_1 = (int64_t *)unaff_RBP[0xaa];
  }
  lVar1 = *param_2;
  *(int32_t *)(unaff_RBP + 0xab) = 4;
  plVar10 = param_1 + 0x1b;
  (**(code **)(lVar1 + 8))(param_2,(int64_t)&stack0x00000050 + 4,unaff_RBP + 0xab);
  unaff_RBP[0xab] = 0;
  FUN_1806b0f90(plVar10,uStack0000000000000054,unaff_RBP + 0xab);
  puVar5 = puVar6;
  if ((int)param_1[0x1c] != 0) {
    do {
      lVar1 = *plVar10;
      *(int32_t *)(unaff_RBP + 0xab) = 4;
      (**(code **)(*param_2 + 8))(param_2,unaff_RBP + 0xad,unaff_RBP + 0xab);
      if (*(int *)(unaff_RBP + 0xad) == 0) {
        puVar3 = (uint64_t *)0x0;
      }
      else {
        puVar3 = (uint64_t *)
                 (**(code **)(*system_system_buffer_buffer + 8))
                           (system_system_buffer_buffer,0x90,&processed_var_5616_ptr,&processed_var_5360_ptr,0x568);
        if (puVar3 == (uint64_t *)0x0) {
          FUN_1806a8e00(0,&stack0x00000030);
          puVar3 = puVar6;
        }
        else {
          puVar3[1] = &system_buffer_ptr;
          puVar3[2] = &system_buffer_ptr;
          *(int32_t *)(puVar3 + 3) = 0xffffffff;
          puVar3[4] = &system_buffer_ptr;
          puVar3[5] = &system_buffer_ptr;
          *(int32_t *)(puVar3 + 6) = 0xffffffff;
          puVar3[7] = 0;
          puVar3[8] = 0;
          *(int32_t *)(puVar3 + 9) = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          *puVar3 = &processed_var_5120_ptr;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          puVar3[0x10] = 0;
          puVar3[0x11] = 0;
          FUN_1806a8e00(puVar3,&stack0x00000030);
        }
      }
      uVar7 = (int)puVar5 + 1;
      *(uint64_t **)(lVar1 + (int64_t)puVar5 * 8) = puVar3;
      puVar5 = (uint64_t *)(uint64_t)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x1c));
    param_1 = (int64_t *)unaff_RBP[0xaa];
  }
  if ((*(int *)((int64_t)param_1 + 0x2c) != 0) && (*(int *)((int64_t)param_1 + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[4],0xffffffff,*(int *)((int64_t)param_1 + 0x2c) * 4);
  }
  if ((*(int *)((int64_t)param_1 + 100) != 0) && (*(int *)((int64_t)param_1 + 0x74) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[0xb],0xffffffff,*(int *)((int64_t)param_1 + 100) * 4);
  }
  if ((*(int *)((int64_t)param_1 + 0xc4) != 0) && (*(int *)((int64_t)param_1 + 0xd4) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[0x17],0xffffffff,*(int *)((int64_t)param_1 + 0xc4) * 4);
  }
  *(int32_t *)(unaff_RBP + 0xac) = 0;
  puVar5 = puVar6;
  if ((int)param_1[0x10] != 0) {
    do {
      lVar1 = *(int64_t *)(param_1[0xf] + (int64_t)puVar5 * 8);
      if (lVar1 != 0) {
        uStack0000000000000030 = *(int32_t *)(lVar1 + 8);
        uStack0000000000000034 = *(int32_t *)(lVar1 + 0xc);
        uStack0000000000000038 = *(int32_t *)(lVar1 + 0x10);
        uStack000000000000003c = *(int32_t *)(lVar1 + 0x14);
        puVar4 = (int32_t *)FUN_1806ab040(param_1 + 1,&stack0x00000030,unaff_RBP + 0xaa);
        if (*(char *)(unaff_RBP + 0xaa) == '\0') {
          *puVar4 = uStack0000000000000030;
          puVar4[1] = uStack0000000000000034;
          puVar4[2] = uStack0000000000000038;
          puVar4[3] = uStack000000000000003c;
          *(int64_t *)(puVar4 + 4) = lVar1;
        }
        iVar2 = (**(code **)(*param_1 + 0x80))(param_1,*(int32_t *)(lVar1 + 0x18));
        unaff_RBP[-0x10] = &memory_allocator_3704_ptr;
        unaff_RBP[-0xf] = &system_buffer_ptr;
        unaff_RBP[-0xe] = &system_buffer_ptr;
        unaff_RBP[-0xc] = &system_buffer_ptr;
        unaff_RBP[-0xb] = &system_buffer_ptr;
        unaff_RBP[-9] = &system_buffer_ptr;
        unaff_RBP[-8] = &system_buffer_ptr;
        unaff_RBP[-4] = &system_buffer_ptr;
        unaff_RBP[-3] = &system_buffer_ptr;
        unaff_RBP[-1] = &system_buffer_ptr;
        *unaff_RBP = &system_buffer_ptr;
        unaff_RBP[2] = &system_buffer_ptr;
        unaff_RBP[3] = &system_buffer_ptr;
        unaff_RBP[7] = &system_buffer_ptr;
        unaff_RBP[8] = &system_buffer_ptr;
        unaff_RBP[10] = &system_buffer_ptr;
        unaff_RBP[0xb] = &system_buffer_ptr;
        unaff_RBP[0xd] = &system_buffer_ptr;
        unaff_RBP[0xe] = &system_buffer_ptr;
        unaff_RBP[0x12] = &system_buffer_ptr;
        unaff_RBP[0x13] = &system_buffer_ptr;
        unaff_RBP[0x15] = &system_buffer_ptr;
        unaff_RBP[0x16] = &system_buffer_ptr;
        unaff_RBP[0x18] = &system_buffer_ptr;
        unaff_RBP[0x19] = &system_buffer_ptr;
        unaff_RBP[0x1d] = &system_buffer_ptr;
        unaff_RBP[0x1e] = &system_buffer_ptr;
        unaff_RBP[0x20] = &system_buffer_ptr;
        unaff_RBP[0x21] = &system_buffer_ptr;
        unaff_RBP[0x23] = &system_buffer_ptr;
        unaff_RBP[0x24] = &system_buffer_ptr;
        unaff_RBP[0x28] = &system_buffer_ptr;
        unaff_RBP[0x29] = &system_buffer_ptr;
        unaff_RBP[0x2b] = &system_buffer_ptr;
        unaff_RBP[0x2c] = &system_buffer_ptr;
        unaff_RBP[0x2e] = &system_buffer_ptr;
        unaff_RBP[0x2f] = &system_buffer_ptr;
        unaff_RBP[0x33] = &system_buffer_ptr;
        unaff_RBP[0x34] = &system_buffer_ptr;
        *(int *)(unaff_RBP + 0xad) = iVar2;
        *(int32_t *)(unaff_RBP + -0xd) = 0xffffffff;
        *(int32_t *)(unaff_RBP + -10) = 0xffffffff;
        *(int32_t *)(unaff_RBP + -7) = 0;
        *(int32_t *)((int64_t)unaff_RBP + -0x34) = 0xffffffff;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = &memory_allocator_3704_ptr;
        *(int32_t *)(unaff_RBP + -2) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 1) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 4) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x24) = 0xffffffff;
        unaff_RBP[5] = 0;
        unaff_RBP[6] = &memory_allocator_3704_ptr;
        *(int32_t *)(unaff_RBP + 9) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0xc) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0xf) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x7c) = 0xffffffff;
        unaff_RBP[0x10] = 0;
        unaff_RBP[0x11] = &memory_allocator_3704_ptr;
        *(int32_t *)(unaff_RBP + 0x14) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x17) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x1a) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0xd4) = 0xffffffff;
        unaff_RBP[0x1b] = 0;
        unaff_RBP[0x1c] = &memory_allocator_3704_ptr;
        *(int32_t *)(unaff_RBP + 0x1f) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x22) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x25) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 300) = 0xffffffff;
        unaff_RBP[0x26] = 0;
        unaff_RBP[0x27] = &memory_allocator_3704_ptr;
        *(int32_t *)(unaff_RBP + 0x2a) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x2d) = 0xffffffff;
        *(int32_t *)(unaff_RBP + 0x30) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x184) = 0xffffffff;
        unaff_RBP[0x31] = 0;
        unaff_RBP[0x32] = &memory_allocator_3704_ptr;
        *(int32_t *)(unaff_RBP + 0x35) = 0xffffffff;
        unaff_RBP[0x36] = &system_buffer_ptr;
        unaff_RBP[0x37] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x38) = 0xffffffff;
        unaff_RBP[0x39] = &system_buffer_ptr;
        unaff_RBP[0x3a] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x3b) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x1dc) = 0xffffffff;
        unaff_RBP[0x3c] = 0;
        unaff_RBP[0x3d] = &memory_allocator_3704_ptr;
        unaff_RBP[0x3e] = &system_buffer_ptr;
        unaff_RBP[0x3f] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x40) = 0xffffffff;
        unaff_RBP[0x41] = &system_buffer_ptr;
        unaff_RBP[0x42] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x43) = 0xffffffff;
        unaff_RBP[0x44] = &system_buffer_ptr;
        unaff_RBP[0x45] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x46) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x234) = 0xffffffff;
        unaff_RBP[0x47] = 0;
        unaff_RBP[0x48] = &memory_allocator_3704_ptr;
        unaff_RBP[0x49] = &system_buffer_ptr;
        unaff_RBP[0x4a] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x4b) = 0xffffffff;
        unaff_RBP[0x4c] = &system_buffer_ptr;
        unaff_RBP[0x4d] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x4e) = 0xffffffff;
        unaff_RBP[0x4f] = &system_buffer_ptr;
        unaff_RBP[0x50] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x51) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x28c) = 0xffffffff;
        unaff_RBP[0x52] = 0;
        unaff_RBP[0x53] = &memory_allocator_3704_ptr;
        unaff_RBP[0x54] = &system_buffer_ptr;
        unaff_RBP[0x55] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x56) = 0xffffffff;
        unaff_RBP[0x57] = &system_buffer_ptr;
        unaff_RBP[0x58] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x59) = 0xffffffff;
        unaff_RBP[0x5a] = &system_buffer_ptr;
        unaff_RBP[0x5b] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x5c) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x2e4) = 0xffffffff;
        unaff_RBP[0x5d] = 0;
        unaff_RBP[0x5e] = &memory_allocator_3704_ptr;
        unaff_RBP[0x5f] = &system_buffer_ptr;
        unaff_RBP[0x60] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x61) = 0xffffffff;
        unaff_RBP[0x62] = &system_buffer_ptr;
        unaff_RBP[99] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 100) = 0xffffffff;
        unaff_RBP[0x65] = &system_buffer_ptr;
        unaff_RBP[0x66] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x67) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x33c) = 0xffffffff;
        unaff_RBP[0x68] = 0;
        unaff_RBP[0x69] = &memory_allocator_3704_ptr;
        unaff_RBP[0x6a] = &system_buffer_ptr;
        unaff_RBP[0x6b] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x6c) = 0xffffffff;
        unaff_RBP[0x6d] = &system_buffer_ptr;
        unaff_RBP[0x6e] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x6f) = 0xffffffff;
        unaff_RBP[0x70] = &system_buffer_ptr;
        unaff_RBP[0x71] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x72) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x394) = 0xffffffff;
        unaff_RBP[0x73] = 0;
        unaff_RBP[0x74] = &memory_allocator_3704_ptr;
        unaff_RBP[0x75] = &system_buffer_ptr;
        unaff_RBP[0x76] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x77) = 0xffffffff;
        unaff_RBP[0x78] = &system_buffer_ptr;
        unaff_RBP[0x79] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x7a) = 0xffffffff;
        unaff_RBP[0x7b] = &system_buffer_ptr;
        unaff_RBP[0x7c] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x7d) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x3ec) = 0xffffffff;
        unaff_RBP[0x7e] = 0;
        unaff_RBP[0x7f] = &memory_allocator_3704_ptr;
        unaff_RBP[0x80] = &system_buffer_ptr;
        unaff_RBP[0x81] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x82) = 0xffffffff;
        unaff_RBP[0x83] = &system_buffer_ptr;
        unaff_RBP[0x84] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x85) = 0xffffffff;
        unaff_RBP[0x86] = &system_buffer_ptr;
        unaff_RBP[0x87] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x88) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x444) = 0xffffffff;
        unaff_RBP[0x89] = 0;
        unaff_RBP[0x8a] = &memory_allocator_3704_ptr;
        unaff_RBP[0x8b] = &system_buffer_ptr;
        unaff_RBP[0x8c] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x8d) = 0xffffffff;
        unaff_RBP[0x8e] = &system_buffer_ptr;
        unaff_RBP[0x8f] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x90) = 0xffffffff;
        unaff_RBP[0x91] = &system_buffer_ptr;
        unaff_RBP[0x92] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x93) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x49c) = 0xffffffff;
        unaff_RBP[0x94] = 0;
        unaff_RBP[0x95] = &memory_allocator_3704_ptr;
        unaff_RBP[0x96] = &system_buffer_ptr;
        unaff_RBP[0x97] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x98) = 0xffffffff;
        unaff_RBP[0x99] = &system_buffer_ptr;
        unaff_RBP[0x9a] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x9b) = 0xffffffff;
        unaff_RBP[0x9c] = &system_buffer_ptr;
        unaff_RBP[0x9d] = &system_buffer_ptr;
        *(int32_t *)(unaff_RBP + 0x9e) = 0;
        *(int32_t *)((int64_t)unaff_RBP + 0x4f4) = 0xffffffff;
        unaff_RBP[0x9f] = 0;
        puVar5 = puVar6;
        if (iVar2 != 0) {
          do {
            uVar7 = (**(code **)(*param_1 + 0x88))
                              (param_1,*(int32_t *)(lVar1 + 0x18),unaff_RBP + -0x10,0x10,
                               (int)puVar5);
            uVar9 = (int)puVar5 + uVar7;
            puVar5 = (uint64_t *)(uint64_t)uVar9;
            if (uVar7 != 0) {
              puVar8 = (uint *)((int64_t)unaff_RBP + -0x34);
              uVar11 = (uint64_t)uVar7;
              do {
                uVar7 = *puVar8;
                puVar3 = puVar6;
                if ((-1 < (int)uVar7) && (uVar7 < *(uint *)(param_1 + 0x12))) {
                  puVar3 = *(uint64_t **)(param_1[0x11] + (uint64_t)uVar7 * 8);
                }
                if (puVar3 != (uint64_t *)0x0) {
                  _uStack0000000000000060 = *(uint64_t *)(lVar1 + 8);
                  _uStack0000000000000068 = *(uint64_t *)(lVar1 + 0x10);
                  in_stack_00000040 = puVar3[4];
                  in_stack_00000070 = in_stack_00000040;
                  puVar4 = (int32_t *)
                           FUN_1806aae60(param_1 + 8,&stack0x00000060,unaff_RBP + 0xab);
                  if (*(char *)(unaff_RBP + 0xab) == '\0') {
                    *puVar4 = uStack0000000000000060;
                    puVar4[1] = uStack0000000000000064;
                    puVar4[2] = uStack0000000000000068;
                    puVar4[3] = uStack000000000000006c;
                    *(uint64_t **)(puVar4 + 6) = puVar3;
                    *(uint64_t *)(puVar4 + 4) = in_stack_00000070;
                  }
                }
                puVar8 = puVar8 + 0x16;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          } while (uVar9 < *(uint *)(unaff_RBP + 0xad));
        }
      }
      uVar7 = *(int *)(unaff_RBP + 0xac) + 1;
      *(uint *)(unaff_RBP + 0xac) = uVar7;
      puVar5 = (uint64_t *)(uint64_t)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
    plVar10 = param_1 + 0x1b;
  }
  if ((int)param_1[0x1c] != 0) {
    do {
      lVar1 = *(int64_t *)(*plVar10 + (int64_t)puVar6 * 8);
      _uStack0000000000000030 = *(int64_t **)(lVar1 + 0x20);
      _uStack0000000000000038 = *(int64_t **)(lVar1 + 0x28);
      puVar5 = (uint64_t *)FUN_1806ab040(param_1 + 0x14,&stack0x00000030,unaff_RBP + 0xaa);
      if (*(char *)(unaff_RBP + 0xaa) == '\0') {
        *puVar5 = _uStack0000000000000030;
        puVar5[1] = _uStack0000000000000038;
        puVar5[2] = lVar1;
      }
      uVar7 = (int)puVar6 + 1;
      puVar6 = (uint64_t *)(uint64_t)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x1c));
  }
  return;
}






// 函数: void FUN_1806a8572(void)
void FUN_1806a8572(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t *unaff_R13;
  int64_t unaff_R14;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  
  do {
    lVar1 = *(int64_t *)(*unaff_R13 + (uint64_t)unaff_EBX * 8);
    uStack0000000000000030 = *(int32_t *)(lVar1 + 0x20);
    uStack0000000000000034 = *(int32_t *)(lVar1 + 0x24);
    uStack0000000000000038 = *(int32_t *)(lVar1 + 0x28);
    uStack000000000000003c = *(int32_t *)(lVar1 + 0x2c);
    puVar2 = (uint64_t *)FUN_1806ab040(unaff_R14 + 0xa0,&stack0x00000030,unaff_RBP + 0x550);
    if (*(char *)(unaff_RBP + 0x550) == '\0') {
      *puVar2 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      puVar2[1] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      puVar2[2] = lVar1;
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_R14 + 0xe0));
  return;
}






// 函数: void FUN_1806a85d0(int64_t param_1,int64_t *param_2)
void FUN_1806a85d0(int64_t param_1,int64_t *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int iVar5;
  char *pcVar6;
  int64_t *plVar7;
  byte *pbVar8;
  int32_t *puVar9;
  uint64_t *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint64_t uVar13;
  byte *pbVar15;
  int64_t lVar16;
  byte *pbVar17;
  bool bVar18;
  uint64_t auStackX_8 [2];
  char acStackX_18 [8];
  char acStackX_20 [8];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  int32_t uStack_6c;
  uint uStack_68;
  byte *pbStack_60;
  uint64_t uStack_58;
  uint64_t uVar14;
  
  pbVar8 = (byte *)0x0;
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x60),0xffffffff,*(int *)(param_1 + 0x6c) * 4);
  }
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(param_1 + 0x98),0xffffffff,*(int *)(param_1 + 0xa4) * 4);
  }
  auStackX_8[0]._0_4_ = 4;
  (**(code **)(*param_2 + 8))(param_2,&uStack_70,auStackX_8);
  auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,4);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x40,auStackX_8);
  pbStack_60 = (byte *)0x0;
  uStack_58 = 0;
  uStack_74 = 0;
  pbVar12 = pbVar8;
  pbVar15 = pbVar8;
  pbVar17 = pbVar8;
  if (uStack_70 != 0) {
LAB_1806a8770:
    auStackX_8[0]._0_4_ = 4;
    (**(code **)(*param_2 + 8))(param_2,&uStack_6c,auStackX_8);
    auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,4);
    (**(code **)(*param_2 + 8))(param_2,&uStack_78,auStackX_8);
    uVar11 = (uint)pbVar12;
    bVar18 = uVar11 < uStack_78;
    if (bVar18) {
      auStackX_8[0] = auStackX_8[0] & 0xffffffffffffff00;
      FUN_1806a6600(&pbStack_60,uStack_78,auStackX_8);
      bVar18 = uVar11 < uStack_78;
      pbVar17 = pbStack_60;
    }
    uStack_68 = uVar11;
    if (bVar18) {
      uStack_68 = uStack_78;
    }
    (**(code **)(*param_2 + 8))(param_2,pbVar17,&uStack_78);
    uVar4 = uStack_6c;
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar11 = 0x1505;
      bVar1 = *pbVar17;
      pbVar12 = pbVar17;
      while (bVar1 != 0) {
        pbVar12 = pbVar12 + 1;
        uVar11 = uVar11 * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar12;
      }
      uVar11 = *(uint *)(*(int64_t *)(param_1 + 0x20) +
                        (uint64_t)(*(int *)(param_1 + 0x2c) - 1U & uVar11) * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar13 = (uint64_t)uVar11;
          pcVar6 = *(char **)(*(int64_t *)(param_1 + 0x10) + uVar13 * 0x10);
          lVar16 = (int64_t)pbVar17 - (int64_t)pcVar6;
          do {
            cVar2 = *pcVar6;
            cVar3 = pcVar6[lVar16];
            if (cVar2 != cVar3) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) goto LAB_1806a8897;
          uVar11 = *(uint *)(*(int64_t *)(param_1 + 0x18) + uVar13 * 4);
          if (uVar11 == 0xffffffff) break;
        } while( true );
      }
    }
    goto LAB_1806a8868;
  }
FUN_1806a8971:
  if (((((uint64_t)pbVar8 & 0x7fffffff) != 0) && (-1 < (int)pbVar8)) && (pbVar17 != (byte *)0x0)) {
    plVar7 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,pbVar17);
  }
  return;
LAB_1806a8897:
  if ((uVar11 == 0xffffffff) ||
     (lVar16 = uVar13 * 0x10 + *(int64_t *)(param_1 + 0x10), lVar16 == 0)) {
LAB_1806a8868:
    uVar13 = 0xffffffffffffffff;
    pbVar12 = &system_buffer_ptr;
    if (pbVar17 != (byte *)0x0) {
      pbVar12 = pbVar17;
    }
    do {
      uVar14 = uVar13;
      uVar13 = uVar14 + 1;
    } while (pbVar12[uVar13] != 0);
    iVar5 = (int)uVar14 + 2;
    if (iVar5 != 0) {
      plVar7 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      pbVar8 = (byte *)(**(code **)(*plVar7 + 8))(plVar7,iVar5,&ui_system_data_1832_ptr,&processed_var_4688_ptr,0x70);
    }
                    // WARNING: Subroutine does not return
    memcpy(pbVar8,pbVar12,uVar13 & 0xffffffff);
  }
  uVar13 = *(uint64_t *)(lVar16 + 8);
  auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,uStack_6c);
  puVar9 = (int32_t *)FUN_1806aad10(param_1 + 0x48,auStackX_8,acStackX_18);
  if (acStackX_18[0] == '\0') {
    *puVar9 = uVar4;
    *(uint64_t *)(puVar9 + 2) = uVar13;
  }
  auStackX_8[0] = uVar13;
  puVar10 = (uint64_t *)FUN_1806a45c0(param_1 + 0x80,auStackX_8,acStackX_20);
  if (acStackX_20[0] == '\0') {
    *puVar10 = uVar13;
    *(int32_t *)(puVar10 + 1) = uVar4;
  }
  uStack_74 = (int)pbVar15 + 1;
  pbVar12 = (byte *)(uint64_t)uStack_68;
  pbVar15 = (byte *)(uint64_t)uStack_74;
  if (uStack_70 <= uStack_74) goto code_r0x0001806a8968;
  goto LAB_1806a8770;
code_r0x0001806a8968:
  pbVar8 = (byte *)(uStack_58 >> 0x20);
  goto FUN_1806a8971;
}






