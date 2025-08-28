#include "TaleWorlds.Native.Split.h"

// 99_part_10_part047.c - 7 个函数

// 函数: void FUN_1806c4470(int64_t *param_1,int64_t *param_2)
void FUN_1806c4470(int64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char cVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint uVar12;
  int32_t auStackX_8 [2];
  uint64_t uStackX_20;
  int64_t alStack_448 [2];
  void *puStack_438;
  uint uStack_430;
  int32_t uStack_42c;
  int64_t lStack_428;
  uint64_t *puStack_418;
  int64_t lStack_410;
  int64_t lStack_408;
  int64_t lStack_400;
  int64_t lStack_3f8;
  uint64_t uStack_3f0;
  int32_t uStack_3e8;
  int32_t uStack_3e4;
  uint64_t uStack_3e0;
  uint64_t uStack_3d8;
  uint64_t uStack_3d0;
  int32_t uStack_3c8;
  int32_t uStack_3c4;
  int32_t uStack_3c0;
  int32_t uStack_3bc;
  uint64_t uStack_3b8;
  int32_t uStack_3b0;
  int8_t auStack_3a8 [896];
  
  uStack_3d8 = (**(code **)(*(int64_t *)param_1[7] + 0x18))();
  plVar3 = (int64_t *)param_1[8];
  lVar11 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  lStack_400 = 0;
  puStack_418 = &uStack_3d8;
  uStack_3e8 = 0x3f400000;
  lStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e4 = 0xffffffff;
  uStack_3e0 = 0;
  FUN_1806d7a90(&puStack_418,0x40);
  lVar7 = param_1[1];
  auStackX_8[0] = *(int32_t *)(*param_1 + 0x10);
  if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar7 + 8) + (uint64_t)*(uint *)(lVar7 + 0x10) * 4) =
         auStackX_8[0];
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar7,auStackX_8);
  }
  cVar6 = FUN_1806d56e0(param_1);
  if (cVar6 != '\0') {
    FUN_1806d56e0(param_1);
    lVar7 = *param_1;
    puStack_438 = &unknown_var_1552_ptr;
    lStack_428 = CONCAT71(lStack_428._1_7_,(char)param_1[9]);
    uVar2 = *(uint *)(lVar7 + 0x10);
    uStack_430 = uStack_430 & 0xffffff00;
    if (uVar2 < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
      lVar4 = *(int64_t *)(lVar7 + 8);
      puVar1 = (int32_t *)(lVar4 + (uint64_t)uVar2 * 0x18);
      *puVar1 = 0x8094c850;
      puVar1[1] = 1;
      puVar1[2] = uStack_430;
      puVar1[3] = uStack_42c;
      *(int64_t *)(lVar4 + 0x10 + (uint64_t)uVar2 * 0x18) = lStack_428;
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
    }
    else {
      FUN_1806d5b60(lVar7,&puStack_438);
    }
    cVar6 = (char)param_1[9];
    if (cVar6 != '\0') {
      cVar6 = (**(code **)(*(int64_t *)param_1[5] + 0x20))();
      *(char *)(param_1 + 9) = cVar6;
    }
    *(char *)(*(int64_t *)(*param_1 + 8) + 0x10 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18
             ) = cVar6;
    *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18) =
         (char)param_1[9];
    cVar6 = (char)param_1[9];
    while (cVar6 != '\0') {
      alStack_448[0] = 0;
      cVar6 = (**(code **)(*(int64_t *)param_1[5] + 8))
                        ((int64_t *)param_1[5],&unknown_var_9600_ptr,alStack_448);
      lVar7 = lVar11;
      if (cVar6 != '\0') {
        if (uStack_3e0._4_4_ != 0) {
          uVar10 = ~(alStack_448[0] << 0x20) + alStack_448[0];
          uVar10 = uVar10 ^ uVar10 >> 0x16;
          uVar10 = uVar10 + ~(uVar10 << 0xd);
          uVar10 = (uVar10 >> 8 ^ uVar10) * 9;
          uVar10 = uVar10 ^ uVar10 >> 0xf;
          uVar10 = uVar10 + ~(uVar10 << 0x1b);
          for (uVar2 = *(uint *)(lStack_3f8 +
                                ((uVar10 >> 0x1f ^ uVar10) & (uint64_t)(uStack_3f0._4_4_ - 1)) * 4)
              ; uVar2 != 0xffffffff; uVar2 = *(uint *)(lStack_400 + (uint64_t)uVar2 * 4)) {
            if (*(int64_t *)((uint64_t)uVar2 * 0x10 + lStack_408) == alStack_448[0]) {
              if (uVar2 != 0xffffffff) {
                lVar7 = (uint64_t)uVar2 * 0x10 + lStack_408;
              }
              break;
            }
          }
        }
        lVar7 = *(int64_t *)(lVar7 + 8);
      }
      uStack_3b8 = 0;
      uStack_3c8 = 0;
      uStack_3c4 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0x3f800000;
      uStack_3b0 = 0;
      uVar8 = (**(code **)(*param_2 + 0x88))(param_2,lVar7,&uStack_3c8);
      uStackX_20 = 0;
      (**(code **)(*(int64_t *)param_1[5] + 8))((int64_t *)param_1[5],&unknown_var_3672_ptr,&uStackX_20);
      uVar5 = uStackX_20;
      uStack_3d0 = uStackX_20;
      puVar9 = (uint64_t *)FUN_1806d3700(&puStack_418,&uStack_3d0,auStackX_8);
      if ((char)auStackX_8[0] == '\0') {
        *puVar9 = uVar5;
        puVar9[1] = uVar8;
      }
      __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(auStack_3a8);
      puStack_438 = (void *)param_1[2];
      uStack_430 = *(uint *)(param_1 + 3);
      uStack_42c = *(int32_t *)((int64_t)param_1 + 0x1c);
      lStack_428 = param_1[4];
      cVar6 = FUN_1806c32a0(&puStack_438,*param_1,param_1[1],param_1[5],uVar8,param_1[7],param_1[8],
                            auStack_3a8);
      if (cVar6 == '\0') {
        *(int8_t *)param_1[10] = 1;
      }
      (**(code **)(*plVar3 + 8))(plVar3,uVar8,uStackX_20);
      if ((char)param_1[9] == '\0') break;
      cVar6 = (**(code **)(*(int64_t *)param_1[5] + 0x28))();
    }
  }
  lVar7 = param_1[1];
  if (*(int *)(lVar7 + 0x10) != 0) {
    lVar11 = *param_1;
    uVar2 = *(uint *)(*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 4);
    if (uVar2 < *(uint *)(lVar11 + 0x10)) {
      do {
        if (*(int *)(lVar11 + 0x10) != 0) {
          uVar10 = (uint64_t)(*(int *)(lVar11 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar11 + 8) + 8 + uVar10 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + uVar10 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)param_1[5] + 0x48))();
            lVar11 = *param_1;
          }
          *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
          lVar11 = *param_1;
        }
        *(int8_t *)(param_1 + 9) = 1;
        uVar12 = *(uint *)(lVar11 + 0x10);
        if ((uVar12 != 0) &&
           (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + (uint64_t)(uVar12 - 1) * 0x18) == '\0')) {
          *(int8_t *)(param_1 + 9) = 0;
          uVar12 = *(uint *)(lVar11 + 0x10);
        }
      } while (uVar2 < uVar12);
      lVar7 = param_1[1];
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  if (lStack_410 != 0) {
    (**(code **)(*(int64_t *)*puStack_418 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806c4482(int64_t *param_1,int64_t *param_2)
void FUN_1806c4482(int64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t in_RAX;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar13;
  uint uVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t in_stack_00000040;
  void *in_stack_00000050;
  uint uStack0000000000000058;
  int32_t uStack000000000000005c;
  int64_t in_stack_00000060;
  uint64_t *in_stack_00000070;
  int64_t in_stack_00000078;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  plVar3 = (int64_t *)param_1[7];
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  uVar7 = (**(code **)(*plVar3 + 0x18))();
  plVar3 = (int64_t *)param_1[8];
  lVar13 = 0;
  *(uint64_t *)(unaff_RBP + -0x50) = uVar7;
  in_stack_00000078 = 0;
  *(uint64_t *)(unaff_RBP + -0x80) = 0;
  *(uint64_t *)(unaff_RBP + -0x78) = 0;
  in_stack_00000070 = (uint64_t *)(unaff_RBP + -0x50);
  *(int32_t *)(unaff_RBP + -0x60) = 0x3f400000;
  *(uint64_t *)(unaff_RBP + -0x70) = 0;
  *(uint64_t *)(unaff_RBP + -0x68) = 0;
  *(int32_t *)(unaff_RBP + -0x5c) = 0xffffffff;
  *(uint64_t *)(unaff_RBP + -0x58) = 0;
  FUN_1806d7a90(&stack0x00000070,0x40);
  lVar8 = param_1[1];
  uVar2 = *(int32_t *)(*param_1 + 0x10);
  uVar11 = *(uint *)(lVar8 + 0x14);
  uVar14 = *(uint *)(lVar8 + 0x10);
  *(int32_t *)(unaff_RBP + 0x390) = uVar2;
  if (uVar14 < (uVar11 & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar8 + 8) + (uint64_t)uVar14 * 4) = uVar2;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar8,unaff_RBP + 0x390);
  }
  cVar6 = FUN_1806d56e0(param_1);
  if (cVar6 != '\0') {
    FUN_1806d56e0(param_1);
    lVar8 = *param_1;
    in_stack_00000050 = &unknown_var_1552_ptr;
    in_stack_00000060 = CONCAT71(in_stack_00000060._1_7_,(char)param_1[9]);
    uVar11 = *(uint *)(lVar8 + 0x10);
    uStack0000000000000058 = uStack0000000000000058 & 0xffffff00;
    if (uVar11 < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
      lVar4 = *(int64_t *)(lVar8 + 8);
      puVar1 = (int32_t *)(lVar4 + (uint64_t)uVar11 * 0x18);
      *puVar1 = 0x8094c850;
      puVar1[1] = 1;
      puVar1[2] = uStack0000000000000058;
      puVar1[3] = uStack000000000000005c;
      *(int64_t *)(lVar4 + 0x10 + (uint64_t)uVar11 * 0x18) = in_stack_00000060;
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
    }
    else {
      FUN_1806d5b60(lVar8,&stack0x00000050);
    }
    cVar6 = (char)param_1[9];
    if (cVar6 != '\0') {
      cVar6 = (**(code **)(*(int64_t *)param_1[5] + 0x20))();
      *(char *)(param_1 + 9) = cVar6;
    }
    *(char *)(*(int64_t *)(*param_1 + 8) + 0x10 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18
             ) = cVar6;
    *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18) =
         (char)param_1[9];
    cVar6 = (char)param_1[9];
    while (cVar6 != '\0') {
      in_stack_00000040 = 0;
      cVar6 = (**(code **)(*(int64_t *)param_1[5] + 8))
                        ((int64_t *)param_1[5],&unknown_var_9600_ptr,&stack0x00000040);
      lVar8 = lVar13;
      if (cVar6 != '\0') {
        if ((*(int *)(unaff_RBP + -0x54) != 0) &&
           (uVar12 = ~(in_stack_00000040 << 0x20) + in_stack_00000040,
           uVar12 = uVar12 ^ uVar12 >> 0x16, uVar12 = uVar12 + ~(uVar12 << 0xd),
           uVar12 = (uVar12 >> 8 ^ uVar12) * 9, uVar12 = uVar12 ^ uVar12 >> 0xf,
           uVar12 = uVar12 + ~(uVar12 << 0x1b),
           uVar11 = *(uint *)(*(int64_t *)(unaff_RBP + -0x70) +
                             ((uVar12 >> 0x1f ^ uVar12) &
                             (uint64_t)(*(int *)(unaff_RBP + -100) - 1)) * 4), uVar11 != 0xffffffff
           )) {
          do {
            if (*(int64_t *)((uint64_t)uVar11 * 0x10 + *(int64_t *)(unaff_RBP + -0x80)) ==
                in_stack_00000040) {
              if (uVar11 != 0xffffffff) {
                lVar8 = (uint64_t)uVar11 * 0x10 + *(int64_t *)(unaff_RBP + -0x80);
              }
              break;
            }
            uVar11 = *(uint *)(*(int64_t *)(unaff_RBP + -0x78) + (uint64_t)uVar11 * 4);
          } while (uVar11 != 0xffffffff);
        }
        lVar8 = *(int64_t *)(lVar8 + 8);
      }
      lVar4 = *param_2;
      *(uint64_t *)(unaff_RBP + -0x30) = 0;
      *(int32_t *)(unaff_RBP + -0x40) = 0;
      *(int32_t *)(unaff_RBP + -0x3c) = 0;
      *(int32_t *)(unaff_RBP + -0x38) = 0;
      *(int32_t *)(unaff_RBP + -0x34) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x28) = 0;
      uVar9 = (**(code **)(lVar4 + 0x88))(param_2,lVar8,unaff_RBP + -0x40);
      plVar5 = (int64_t *)param_1[5];
      *(uint64_t *)(unaff_RBP + 0x3a8) = 0;
      (**(code **)(*plVar5 + 8))(plVar5,&unknown_var_3672_ptr,unaff_RBP + 0x3a8);
      uVar7 = *(uint64_t *)(unaff_RBP + 0x3a8);
      *(uint64_t *)(unaff_RBP + -0x48) = uVar7;
      puVar10 = (uint64_t *)FUN_1806d3700(&stack0x00000070,unaff_RBP + -0x48,unaff_RBP + 0x390);
      if (*(char *)(unaff_RBP + 0x390) == '\0') {
        *puVar10 = uVar7;
        puVar10[1] = uVar9;
      }
      __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x20);
      in_stack_00000050 = (void *)param_1[2];
      uStack0000000000000058 = *(uint *)(param_1 + 3);
      uStack000000000000005c = *(int32_t *)((int64_t)param_1 + 0x1c);
      in_stack_00000060 = param_1[4];
      cVar6 = FUN_1806c32a0(&stack0x00000050,*param_1,param_1[1],param_1[5],uVar9);
      if (cVar6 == '\0') {
        *(int8_t *)param_1[10] = 1;
      }
      (**(code **)(*plVar3 + 8))(plVar3,uVar9,*(uint64_t *)(unaff_RBP + 0x3a8));
      if ((char)param_1[9] == '\0') break;
      cVar6 = (**(code **)(*(int64_t *)param_1[5] + 0x28))();
    }
  }
  lVar8 = param_1[1];
  if (*(int *)(lVar8 + 0x10) != 0) {
    lVar13 = *param_1;
    uVar11 = *(uint *)(*(int64_t *)(lVar8 + 8) + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 4);
    if (uVar11 < *(uint *)(lVar13 + 0x10)) {
      do {
        if (*(int *)(lVar13 + 0x10) != 0) {
          uVar12 = (uint64_t)(*(int *)(lVar13 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar13 + 8) + 8 + uVar12 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar13 + 8) + 0x10 + uVar12 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)param_1[5] + 0x48))();
            lVar13 = *param_1;
          }
          *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + -1;
          lVar13 = *param_1;
        }
        *(int8_t *)(param_1 + 9) = 1;
        uVar14 = *(uint *)(lVar13 + 0x10);
        if ((uVar14 != 0) &&
           (*(char *)(*(int64_t *)(lVar13 + 8) + 0x10 + (uint64_t)(uVar14 - 1) * 0x18) == '\0')) {
          *(int8_t *)(param_1 + 9) = 0;
          uVar14 = *(uint *)(lVar13 + 0x10);
        }
      } while (uVar11 < uVar14);
      lVar8 = param_1[1];
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  if (in_stack_00000078 != 0) {
    (**(code **)(*(int64_t *)*in_stack_00000070 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806c448d(int64_t *param_1,int64_t *param_2)
void FUN_1806c448d(int64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t in_RAX;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar13;
  uint uVar14;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int64_t in_stack_00000040;
  void *in_stack_00000050;
  uint uStack0000000000000058;
  int32_t uStack000000000000005c;
  int64_t in_stack_00000060;
  uint64_t *in_stack_00000070;
  int64_t in_stack_00000078;
  
  *(uint64_t *)(in_RAX + -0x18) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  uVar7 = (**(code **)(*param_1 + 0x18))();
  plVar3 = (int64_t *)unaff_RBX[8];
  lVar13 = 0;
  *(uint64_t *)(unaff_RBP + -0x50) = uVar7;
  in_stack_00000078 = 0;
  *(uint64_t *)(unaff_RBP + -0x80) = 0;
  *(uint64_t *)(unaff_RBP + -0x78) = 0;
  in_stack_00000070 = (uint64_t *)(unaff_RBP + -0x50);
  *(int32_t *)(unaff_RBP + -0x60) = 0x3f400000;
  *(uint64_t *)(unaff_RBP + -0x70) = 0;
  *(uint64_t *)(unaff_RBP + -0x68) = 0;
  *(int32_t *)(unaff_RBP + -0x5c) = 0xffffffff;
  *(uint64_t *)(unaff_RBP + -0x58) = 0;
  FUN_1806d7a90(&stack0x00000070,0x40);
  lVar8 = unaff_RBX[1];
  uVar2 = *(int32_t *)(*unaff_RBX + 0x10);
  uVar11 = *(uint *)(lVar8 + 0x14);
  uVar14 = *(uint *)(lVar8 + 0x10);
  *(int32_t *)(unaff_RBP + 0x390) = uVar2;
  if (uVar14 < (uVar11 & 0x7fffffff)) {
    *(int32_t *)(*(int64_t *)(lVar8 + 8) + (uint64_t)uVar14 * 4) = uVar2;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    FUN_1806d5770(lVar8,unaff_RBP + 0x390);
  }
  cVar6 = FUN_1806d56e0();
  if (cVar6 != '\0') {
    FUN_1806d56e0();
    lVar8 = *unaff_RBX;
    in_stack_00000050 = &unknown_var_1552_ptr;
    in_stack_00000060 = CONCAT71(in_stack_00000060._1_7_,(char)unaff_RBX[9]);
    uVar11 = *(uint *)(lVar8 + 0x10);
    uStack0000000000000058 = uStack0000000000000058 & 0xffffff00;
    if (uVar11 < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
      lVar4 = *(int64_t *)(lVar8 + 8);
      puVar1 = (int32_t *)(lVar4 + (uint64_t)uVar11 * 0x18);
      *puVar1 = 0x8094c850;
      puVar1[1] = 1;
      puVar1[2] = uStack0000000000000058;
      puVar1[3] = uStack000000000000005c;
      *(int64_t *)(lVar4 + 0x10 + (uint64_t)uVar11 * 0x18) = in_stack_00000060;
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
    }
    else {
      FUN_1806d5b60(lVar8,&stack0x00000050);
    }
    cVar6 = (char)unaff_RBX[9];
    if (cVar6 != '\0') {
      cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x20))();
      *(char *)(unaff_RBX + 9) = cVar6;
    }
    *(char *)(*(int64_t *)(*unaff_RBX + 8) + 0x10 +
             (uint64_t)(*(int *)(*unaff_RBX + 0x10) - 1) * 0x18) = cVar6;
    *(char *)(*(int64_t *)(*unaff_RBX + 8) + 8 +
             (uint64_t)(*(int *)(*unaff_RBX + 0x10) - 1) * 0x18) = (char)unaff_RBX[9];
    cVar6 = (char)unaff_RBX[9];
    while (cVar6 != '\0') {
      in_stack_00000040 = 0;
      cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 8))
                        ((int64_t *)unaff_RBX[5],&unknown_var_9600_ptr,&stack0x00000040);
      lVar8 = lVar13;
      if (cVar6 != '\0') {
        if ((*(int *)(unaff_RBP + -0x54) != 0) &&
           (uVar12 = ~(in_stack_00000040 << 0x20) + in_stack_00000040,
           uVar12 = uVar12 ^ uVar12 >> 0x16, uVar12 = uVar12 + ~(uVar12 << 0xd),
           uVar12 = (uVar12 >> 8 ^ uVar12) * 9, uVar12 = uVar12 ^ uVar12 >> 0xf,
           uVar12 = uVar12 + ~(uVar12 << 0x1b),
           uVar11 = *(uint *)(*(int64_t *)(unaff_RBP + -0x70) +
                             ((uVar12 >> 0x1f ^ uVar12) &
                             (uint64_t)(*(int *)(unaff_RBP + -100) - 1)) * 4), uVar11 != 0xffffffff
           )) {
          do {
            if (*(int64_t *)((uint64_t)uVar11 * 0x10 + *(int64_t *)(unaff_RBP + -0x80)) ==
                in_stack_00000040) {
              if (uVar11 != 0xffffffff) {
                lVar8 = (uint64_t)uVar11 * 0x10 + *(int64_t *)(unaff_RBP + -0x80);
              }
              break;
            }
            uVar11 = *(uint *)(*(int64_t *)(unaff_RBP + -0x78) + (uint64_t)uVar11 * 4);
          } while (uVar11 != 0xffffffff);
        }
        lVar8 = *(int64_t *)(lVar8 + 8);
      }
      lVar4 = *param_2;
      *(uint64_t *)(unaff_RBP + -0x30) = 0;
      *(int32_t *)(unaff_RBP + -0x40) = 0;
      *(int32_t *)(unaff_RBP + -0x3c) = 0;
      *(int32_t *)(unaff_RBP + -0x38) = 0;
      *(int32_t *)(unaff_RBP + -0x34) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x28) = 0;
      uVar9 = (**(code **)(lVar4 + 0x88))(param_2,lVar8,unaff_RBP + -0x40);
      plVar5 = (int64_t *)unaff_RBX[5];
      *(uint64_t *)(unaff_RBP + 0x3a8) = 0;
      (**(code **)(*plVar5 + 8))(plVar5,&unknown_var_3672_ptr,unaff_RBP + 0x3a8);
      uVar7 = *(uint64_t *)(unaff_RBP + 0x3a8);
      *(uint64_t *)(unaff_RBP + -0x48) = uVar7;
      puVar10 = (uint64_t *)FUN_1806d3700(&stack0x00000070,unaff_RBP + -0x48,unaff_RBP + 0x390);
      if (*(char *)(unaff_RBP + 0x390) == '\0') {
        *puVar10 = uVar7;
        puVar10[1] = uVar9;
      }
      __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x20);
      in_stack_00000050 = (void *)unaff_RBX[2];
      uStack0000000000000058 = *(uint *)(unaff_RBX + 3);
      uStack000000000000005c = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
      in_stack_00000060 = unaff_RBX[4];
      cVar6 = FUN_1806c32a0(&stack0x00000050,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],uVar9);
      if (cVar6 == '\0') {
        *(int8_t *)unaff_RBX[10] = 1;
      }
      (**(code **)(*plVar3 + 8))(plVar3,uVar9,*(uint64_t *)(unaff_RBP + 0x3a8));
      if ((char)unaff_RBX[9] == '\0') break;
      cVar6 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x28))();
    }
  }
  lVar8 = unaff_RBX[1];
  if (*(int *)(lVar8 + 0x10) != 0) {
    lVar13 = *unaff_RBX;
    uVar11 = *(uint *)(*(int64_t *)(lVar8 + 8) + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 4);
    if (uVar11 < *(uint *)(lVar13 + 0x10)) {
      do {
        if (*(int *)(lVar13 + 0x10) != 0) {
          uVar12 = (uint64_t)(*(int *)(lVar13 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar13 + 8) + 8 + uVar12 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar13 + 8) + 0x10 + uVar12 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
            lVar13 = *unaff_RBX;
          }
          *(int *)(lVar13 + 0x10) = *(int *)(lVar13 + 0x10) + -1;
          lVar13 = *unaff_RBX;
        }
        *(int8_t *)(unaff_RBX + 9) = 1;
        uVar14 = *(uint *)(lVar13 + 0x10);
        if ((uVar14 != 0) &&
           (*(char *)(*(int64_t *)(lVar13 + 8) + 0x10 + (uint64_t)(uVar14 - 1) * 0x18) == '\0')) {
          *(int8_t *)(unaff_RBX + 9) = 0;
          uVar14 = *(uint *)(lVar13 + 0x10);
        }
      } while (uVar11 < uVar14);
      lVar8 = unaff_RBX[1];
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  if (in_stack_00000078 != 0) {
    (**(code **)(*(int64_t *)*in_stack_00000070 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806c45f6(void)
void FUN_1806c45f6(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar9;
  uint uVar10;
  int64_t unaff_R12;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int64_t in_stack_00000060;
  uint64_t *in_stack_00000070;
  int64_t in_stack_00000078;
  
  do {
    cVar3 = (**(code **)(*(int64_t *)unaff_RBX[5] + 8))
                      ((int64_t *)unaff_RBX[5],&unknown_var_9600_ptr,&stack0x00000040);
    lVar4 = unaff_R12;
    if (cVar3 != '\0') {
      if ((*(int *)(unaff_RBP + -0x54) != (int)unaff_R12) &&
         (uVar8 = ~(unaff_R12 << 0x20) + unaff_R12, uVar8 = uVar8 ^ uVar8 >> 0x16,
         uVar8 = uVar8 + ~(uVar8 << 0xd), uVar8 = (uVar8 >> 8 ^ uVar8) * 9,
         uVar8 = uVar8 ^ uVar8 >> 0xf, uVar8 = uVar8 + ~(uVar8 << 0x1b),
         uVar7 = *(uint *)(*(int64_t *)(unaff_RBP + -0x70) +
                          ((uVar8 >> 0x1f ^ uVar8) & (uint64_t)(*(int *)(unaff_RBP + -100) - 1)) *
                          4), uVar7 != 0xffffffff)) {
        do {
          if (*(int64_t *)((uint64_t)uVar7 * 0x10 + *(int64_t *)(unaff_RBP + -0x80)) == unaff_R12
             ) {
            if (uVar7 != 0xffffffff) {
              lVar4 = (uint64_t)uVar7 * 0x10 + *(int64_t *)(unaff_RBP + -0x80);
            }
            break;
          }
          uVar7 = *(uint *)(*(int64_t *)(unaff_RBP + -0x78) + (uint64_t)uVar7 * 4);
        } while (uVar7 != 0xffffffff);
      }
      lVar4 = *(int64_t *)(lVar4 + 8);
    }
    lVar9 = *unaff_R15;
    *(int64_t *)(unaff_RBP + -0x30) = unaff_R12;
    *(int32_t *)(unaff_RBP + -0x40) = 0;
    *(int32_t *)(unaff_RBP + -0x3c) = 0;
    *(int32_t *)(unaff_RBP + -0x38) = 0;
    *(int32_t *)(unaff_RBP + -0x34) = 0x3f800000;
    *(int *)(unaff_RBP + -0x28) = (int)unaff_R12;
    uVar5 = (**(code **)(lVar9 + 0x88))(0,lVar4,unaff_RBP + -0x40);
    plVar1 = (int64_t *)unaff_RBX[5];
    *(int64_t *)(unaff_RBP + 0x3a8) = unaff_R12;
    (**(code **)(*plVar1 + 8))(plVar1,&unknown_var_3672_ptr,unaff_RBP + 0x3a8);
    uVar2 = *(uint64_t *)(unaff_RBP + 0x3a8);
    *(uint64_t *)(unaff_RBP + -0x48) = uVar2;
    puVar6 = (uint64_t *)FUN_1806d3700(&stack0x00000070,unaff_RBP + -0x48,unaff_RBP + 0x390);
    if (*(char *)(unaff_RBP + 0x390) == (char)unaff_R12) {
      *puVar6 = uVar2;
      puVar6[1] = uVar5;
    }
    __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x20);
    uStack0000000000000050 = (int32_t)unaff_RBX[2];
    uStack0000000000000054 = *(int32_t *)((int64_t)unaff_RBX + 0x14);
    uStack0000000000000058 = (int32_t)unaff_RBX[3];
    uStack000000000000005c = *(int32_t *)((int64_t)unaff_RBX + 0x1c);
    in_stack_00000060 = unaff_RBX[4];
    cVar3 = FUN_1806c32a0(&stack0x00000050,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],uVar5);
    if (cVar3 == '\0') {
      *(int8_t *)unaff_RBX[10] = 1;
    }
    (**(code **)(*unaff_R14 + 8))(extraout_XMM0_Da,uVar5,*(uint64_t *)(unaff_RBP + 0x3a8));
    if (((char)unaff_RBX[9] == '\0') ||
       (cVar3 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x28))(), cVar3 == '\0')) {
      lVar4 = unaff_RBX[1];
      if (*(int *)(lVar4 + 0x10) != 0) {
        lVar9 = *unaff_RBX;
        uVar7 = *(uint *)(*(int64_t *)(lVar4 + 8) + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 4);
        if (uVar7 < *(uint *)(lVar9 + 0x10)) {
          do {
            if (*(int *)(lVar9 + 0x10) != 0) {
              uVar8 = (uint64_t)(*(int *)(lVar9 + 0x10) - 1);
              if ((*(char *)(*(int64_t *)(lVar9 + 8) + 8 + uVar8 * 0x18) != '\0') &&
                 (*(char *)(*(int64_t *)(lVar9 + 8) + 0x10 + uVar8 * 0x18) != '\0')) {
                (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
                lVar9 = *unaff_RBX;
              }
              *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
              lVar9 = *unaff_RBX;
            }
            *(int8_t *)(unaff_RBX + 9) = 1;
            uVar10 = *(uint *)(lVar9 + 0x10);
            if ((uVar10 != 0) &&
               (*(char *)(*(int64_t *)(lVar9 + 8) + 0x10 + (uint64_t)(uVar10 - 1) * 0x18) == '\0')
               ) {
              *(int8_t *)(unaff_RBX + 9) = 0;
              uVar10 = *(uint *)(lVar9 + 0x10);
            }
          } while (uVar7 < uVar10);
          lVar4 = unaff_RBX[1];
        }
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
      }
      if (in_stack_00000078 != 0) {
        (**(code **)(*(int64_t *)*in_stack_00000070 + 0x10))();
      }
      return;
    }
  } while( true );
}






// 函数: void FUN_1806c47d2(void)
void FUN_1806c47d2(void)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int64_t lVar4;
  uint uVar5;
  uint64_t *in_stack_00000070;
  int64_t in_stack_00000078;
  
  lVar3 = unaff_RBX[1];
  if (*(int *)(lVar3 + 0x10) != 0) {
    lVar4 = *unaff_RBX;
    uVar1 = *(uint *)(*(int64_t *)(lVar3 + 8) + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 4);
    if (uVar1 < *(uint *)(lVar4 + 0x10)) {
      do {
        if (*(int *)(lVar4 + 0x10) != 0) {
          uVar2 = (uint64_t)(*(int *)(lVar4 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar4 + 8) + 8 + uVar2 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar4 + 8) + 0x10 + uVar2 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
            lVar4 = *unaff_RBX;
          }
          *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
          lVar4 = *unaff_RBX;
        }
        *(int8_t *)(unaff_RBX + 9) = 1;
        uVar5 = *(uint *)(lVar4 + 0x10);
        if ((uVar5 != 0) &&
           (*(char *)(*(int64_t *)(lVar4 + 8) + 0x10 + (uint64_t)(uVar5 - 1) * 0x18) == '\0')) {
          *(int8_t *)(unaff_RBX + 9) = 0;
          uVar5 = *(uint *)(lVar4 + 0x10);
        }
      } while (uVar1 < uVar5);
      lVar3 = unaff_RBX[1];
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  if (in_stack_00000078 != 0) {
    (**(code **)(*(int64_t *)*in_stack_00000070 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806c47f9(uint64_t param_1,int64_t param_2)
void FUN_1806c47f9(uint64_t param_1,int64_t param_2)

{
  uint uVar1;
  int in_EAX;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  int64_t lVar3;
  uint uVar4;
  uint64_t *in_stack_00000070;
  int64_t in_stack_00000078;
  
  lVar3 = *unaff_RBX;
  uVar1 = *(uint *)(*(int64_t *)(param_2 + 8) + (uint64_t)(in_EAX - 1) * 4);
  if (uVar1 < *(uint *)(lVar3 + 0x10)) {
    do {
      if (*(int *)(lVar3 + 0x10) != 0) {
        uVar2 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
        if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar2 * 0x18) != '\0') &&
           (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar2 * 0x18) != '\0')) {
          (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
          lVar3 = *unaff_RBX;
        }
        *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
        lVar3 = *unaff_RBX;
      }
      *(int8_t *)(unaff_RBX + 9) = 1;
      uVar4 = *(uint *)(lVar3 + 0x10);
      if ((uVar4 != 0) &&
         (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(uVar4 - 1) * 0x18) == '\0')) {
        *(int8_t *)(unaff_RBX + 9) = 0;
        uVar4 = *(uint *)(lVar3 + 0x10);
      }
    } while (uVar1 < uVar4);
    param_2 = unaff_RBX[1];
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  if (in_stack_00000078 != 0) {
    (**(code **)(*(int64_t *)*in_stack_00000070 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806c4895(void)
void FUN_1806c4895(void)

{
  uint64_t *in_stack_00000070;
  
  (**(code **)(*(int64_t *)*in_stack_00000070 + 0x10))();
  return;
}






