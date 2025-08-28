#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part055.c - 12 个函数

// 函数: void FUN_1805d8a70(int64_t *param_1,uint64_t *param_2)
void FUN_1805d8a70(int64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  
  puVar4 = (uint64_t *)param_1[6];
  if (puVar4 + 9 != (uint64_t *)param_1[8]) {
    param_1[6] = (int64_t)(puVar4 + 9);
    uVar3 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar3;
    uVar3 = param_2[3];
    puVar4[2] = param_2[2];
    puVar4[3] = uVar3;
    uVar3 = param_2[5];
    puVar4[4] = param_2[4];
    puVar4[5] = uVar3;
    uVar3 = param_2[7];
    puVar4[6] = param_2[6];
    puVar4[7] = uVar3;
    puVar4[8] = param_2[8];
    return;
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  lVar15 = *param_1;
  lVar16 = param_1[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  uVar3 = param_2[8];
  if (lVar16 <= (param_1[9] - lVar15 >> 3) + 1) {
    lVar5 = param_1[5];
    lVar19 = param_1[9] - lVar5 >> 3;
    uVar18 = lVar5 - lVar15 >> 3;
    lVar2 = lVar19 * 8 + 8;
    if (uVar18 != 0) {
      uVar14 = uVar18 >> 1;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
                    // WARNING: Subroutine does not return
      memmove(lVar15 + (uVar18 - uVar14) * 8,lVar5,lVar2);
    }
    lVar15 = lVar16;
    if (lVar16 == 0) {
      lVar15 = 1;
    }
    lVar15 = lVar16 + 2 + lVar15;
    lVar16 = FUN_18062b420(system_memory_pool_ptr,lVar15 * 8,(char)param_1[10]);
    plVar1 = (int64_t *)(lVar16 + (param_1[5] - *param_1 >> 3) * 8);
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(plVar1,param_1[5],lVar2);
    }
    *param_1 = lVar16;
    param_1[1] = lVar15;
    param_1[5] = (int64_t)plVar1;
    lVar15 = *plVar1;
    param_1[3] = lVar15;
    param_1[4] = lVar15 + 0x120;
    param_1[9] = (int64_t)(plVar1 + lVar19);
    lVar15 = plVar1[lVar19];
    param_1[7] = lVar15;
    param_1[8] = lVar15 + 0x120;
  }
  uVar17 = FUN_18062b420(system_memory_pool_ptr,0x120,(char)param_1[10]);
  *(uint64_t *)(param_1[9] + 8) = uVar17;
  puVar4 = (uint64_t *)param_1[6];
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  puVar4[4] = uVar10;
  puVar4[5] = uVar11;
  puVar4[6] = uVar12;
  puVar4[7] = uVar13;
  puVar4[8] = uVar3;
  lVar15 = param_1[9];
  param_1[9] = lVar15 + 8;
  lVar15 = *(int64_t *)(lVar15 + 8);
  param_1[7] = lVar15;
  param_1[8] = lVar15 + 0x120;
  param_1[6] = lVar15;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d8b12(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1805d8b12(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *unaff_RBX;
  int64_t in_R10;
  uint64_t uStackX_20;
  uint64_t in_stack_00000080;
  
  uVar8 = param_4 - param_3 >> 3;
  lVar2 = (param_2 >> 3) * 8 + 8;
  if (uVar8 != 0) {
    uVar4 = uVar8 >> 1;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
                    // WARNING: Subroutine does not return
    memmove(param_3 + (uVar8 - uVar4) * 8,param_4,lVar2);
  }
  lVar5 = in_R10;
  if (in_R10 == 0) {
    lVar5 = 1;
  }
  lVar5 = in_R10 + 2 + lVar5;
  lVar6 = FUN_18062b420(system_memory_pool_ptr,lVar5 * 8,(char)unaff_RBX[10]);
  plVar1 = (int64_t *)(lVar6 + (unaff_RBX[5] - *unaff_RBX >> 3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar1,unaff_RBX[5],lVar2);
  }
  *unaff_RBX = lVar6;
  unaff_RBX[1] = lVar5;
  unaff_RBX[5] = (int64_t)plVar1;
  lVar2 = *plVar1;
  unaff_RBX[3] = lVar2;
  unaff_RBX[4] = lVar2 + 0x120;
  unaff_RBX[9] = (int64_t)(plVar1 + (param_2 >> 3));
  lVar2 = plVar1[param_2 >> 3];
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0x120;
  uVar7 = FUN_18062b420(system_memory_pool_ptr,0x120,(char)unaff_RBX[10]);
  *(uint64_t *)(unaff_RBX[9] + 8) = uVar7;
  puVar3 = (uint64_t *)unaff_RBX[6];
  *puVar3 = uStackX_20;
  puVar3[1] = param_5;
  puVar3[2] = param_6;
  puVar3[3] = param_7;
  puVar3[4] = param_8;
  puVar3[5] = param_9;
  puVar3[6] = param_10;
  puVar3[7] = param_11;
  puVar3[8] = in_stack_00000080;
  lVar2 = unaff_RBX[9];
  unaff_RBX[9] = lVar2 + 8;
  lVar2 = *(int64_t *)(lVar2 + 8);
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0x120;
  unaff_RBX[6] = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d8b78(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1805d8b78(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9,uint64_t param_10,uint64_t param_11)

{
  uint64_t *puVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *unaff_RBX;
  int64_t lVar5;
  int64_t unaff_RSI;
  int64_t in_R10;
  bool in_CF;
  uint64_t uStackX_20;
  uint64_t in_stack_00000080;
  
  if (in_CF) {
    in_RAX = param_2;
  }
  lVar5 = in_R10 + 2 + in_RAX;
  lVar2 = FUN_18062b420(param_1,lVar5 * 8);
  plVar3 = (int64_t *)(lVar2 + (unaff_RBX[5] - *unaff_RBX >> 3) * 8);
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memcpy(plVar3);
  }
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar5;
  unaff_RBX[5] = (int64_t)plVar3;
  lVar2 = *plVar3;
  unaff_RBX[3] = lVar2;
  unaff_RBX[4] = lVar2 + 0x120;
  plVar3 = (int64_t *)(unaff_RSI + -8 + (int64_t)plVar3);
  unaff_RBX[9] = (int64_t)plVar3;
  lVar2 = *plVar3;
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0x120;
  uVar4 = FUN_18062b420(system_memory_pool_ptr,0x120,(char)unaff_RBX[10]);
  *(uint64_t *)(unaff_RBX[9] + 8) = uVar4;
  puVar1 = (uint64_t *)unaff_RBX[6];
  *puVar1 = uStackX_20;
  puVar1[1] = param_5;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  puVar1[6] = param_10;
  puVar1[7] = param_11;
  puVar1[8] = in_stack_00000080;
  lVar2 = unaff_RBX[9];
  unaff_RBX[9] = lVar2 + 8;
  lVar2 = *(int64_t *)(lVar2 + 8);
  unaff_RBX[7] = lVar2;
  unaff_RBX[8] = lVar2 + 0x120;
  unaff_RBX[6] = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d8be9(void)
void FUN_1805d8be9(void)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000080;
  
  *(int64_t **)(unaff_RBX + 0x28) = unaff_RDI;
  lVar1 = *unaff_RDI;
  *(int64_t *)(unaff_RBX + 0x18) = lVar1;
  *(int64_t *)(unaff_RBX + 0x20) = lVar1 + 0x120;
  plVar3 = (int64_t *)(unaff_RSI + -8 + (int64_t)unaff_RDI);
  *(int64_t **)(unaff_RBX + 0x48) = plVar3;
  lVar1 = *plVar3;
  *(int64_t *)(unaff_RBX + 0x38) = lVar1;
  *(int64_t *)(unaff_RBX + 0x40) = lVar1 + 0x120;
  uVar4 = FUN_18062b420(system_memory_pool_ptr,0x120,*(int8_t *)(unaff_RBX + 0x50));
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 8) = uVar4;
  puVar2 = *(uint64_t **)(unaff_RBX + 0x30);
  *puVar2 = uStackX_20;
  puVar2[1] = in_stack_00000028;
  puVar2[2] = in_stack_00000030;
  puVar2[3] = in_stack_00000038;
  puVar2[4] = in_stack_00000040;
  puVar2[5] = in_stack_00000048;
  puVar2[6] = in_stack_00000050;
  puVar2[7] = in_stack_00000058;
  puVar2[8] = in_stack_00000080;
  plVar3 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 8);
  *(int64_t **)(unaff_RBX + 0x48) = plVar3;
  lVar1 = *plVar3;
  *(int64_t *)(unaff_RBX + 0x38) = lVar1;
  *(int64_t *)(unaff_RBX + 0x40) = lVar1 + 0x120;
  *(int64_t *)(unaff_RBX + 0x30) = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d8c27(void)
void FUN_1805d8c27(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t unaff_RBX;
  uint64_t uStackX_20;
  uint64_t in_stack_00000028;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000080;
  
  uVar3 = FUN_18062b420(system_memory_pool_ptr,0x120,*(int8_t *)(unaff_RBX + 0x50));
  *(uint64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 8) = uVar3;
  puVar1 = *(uint64_t **)(unaff_RBX + 0x30);
  *puVar1 = uStackX_20;
  puVar1[1] = in_stack_00000028;
  puVar1[2] = in_stack_00000030;
  puVar1[3] = in_stack_00000038;
  puVar1[4] = in_stack_00000040;
  puVar1[5] = in_stack_00000048;
  puVar1[6] = in_stack_00000050;
  puVar1[7] = in_stack_00000058;
  puVar1[8] = in_stack_00000080;
  plVar4 = (int64_t *)(*(int64_t *)(unaff_RBX + 0x48) + 8);
  *(int64_t **)(unaff_RBX + 0x48) = plVar4;
  lVar2 = *plVar4;
  *(int64_t *)(unaff_RBX + 0x38) = lVar2;
  *(int64_t *)(unaff_RBX + 0x40) = lVar2 + 0x120;
  *(int64_t *)(unaff_RBX + 0x30) = lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_1805d8cb0(int64_t param_1,float *param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  
  iVar3 = FUN_18053a410(&system_data_5f30,
                        *(int32_t *)
                         (*(int64_t *)(*(int64_t *)(param_1 + 0x1c8) + 0x590) + 0xac));
  iVar3 = *(int *)(system_system_config + (int64_t)iVar3 * 4);
  if (iVar3 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(int64_t *)(system_system_config + (int64_t)iVar3 * 8);
  }
  lVar1 = *(int64_t *)(param_1 + 0x1c8);
  iVar3 = *(int *)(param_3 + 0x104);
  fVar8 = 1.0;
  lVar7 = (int64_t)*(short *)(lVar6 + 0x7e) * 0x68 + system_system_config;
  lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x8f8) + 0x9e8);
  if (lVar2 != 0) {
    lVar5 = (int64_t)*(int *)(lVar2 + 0xf0) * 0xa0;
    if (iVar3 == 0) {
      iVar4 = *(int *)(lVar5 + 0x6c + *(int64_t *)(lVar2 + 0xd0));
    }
    else {
      iVar4 = *(int *)(lVar5 + 0x68 + *(int64_t *)(lVar2 + 0xd0));
    }
    fVar8 = (float)iVar4 * 0.01;
  }
  if (iVar3 == 0) {
    fVar8 = fVar8 * *(float *)(lVar1 + 0x3a8);
  }
  else if (iVar3 == 1) {
    fVar8 = fVar8 * *(float *)(lVar1 + 0x3ac);
  }
  fVar8 = system_system_config * fVar8;
  if (*(char *)(param_3 + 5) != '\0') {
    fVar8 = fVar8 * system_system_config;
  }
  fVar8 = *(float *)(lVar6 + 0x188) / fVar8;
  param_2[2] = *(float *)(lVar7 + 0x24);
  param_2[3] = *(float *)(lVar7 + 0x28);
  param_2[1] = fVar8;
  *param_2 = fVar8 * 0.4;
  return param_2;
}



// WARNING: Possible PIC construction at 0x0001805d8edb: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0001805d8ee0)
// WARNING: Removing unreachable block (ram,0x0001805d8eef)
// WARNING: Removing unreachable block (ram,0x0001805d8f47)
// WARNING: Removing unreachable block (ram,0x0001805d8f52)
// WARNING: Removing unreachable block (ram,0x0001805d8fb8)
// WARNING: Removing unreachable block (ram,0x0001805d8f58)
// WARNING: Removing unreachable block (ram,0x0001805d8f5d)
// WARNING: Removing unreachable block (ram,0x0001805d8f8e)
// WARNING: Removing unreachable block (ram,0x0001805d8fc0)
// WARNING: Removing unreachable block (ram,0x0001805d8fe8)
// WARNING: Removing unreachable block (ram,0x0001805d8ef9)
// WARNING: Removing unreachable block (ram,0x0001805d8f14)
// WARNING: Removing unreachable block (ram,0x0001805d8f1b)
// WARNING: Removing unreachable block (ram,0x0001805d8ee6)

float FUN_1805d8ed0(int64_t param_1)

{
  uint uVar1;
  float fVar2;
  uint64_t uStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x10) == 0) {
      uVar1 = uVar1 | 0x10;
      uStack_28 = CONCAT44(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30),
                           *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c));
      *(uint64_t *)(param_1 + 0xc4) = uStack_28;
    }
    uStack_28._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0xc4) >> 0x20);
    uStack_28._0_4_ = (float)*(uint64_t *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0x28) = uVar1 | 0x40;
    fVar2 = SQRT((float)uStack_28 * (float)uStack_28 + uStack_28._4_4_ * uStack_28._4_4_);
    *(float *)(param_1 + 0xcc) = fVar2;
    return fVar2;
  }
  return *(float *)(param_1 + 0xcc);
}



uint64_t FUN_1805d9000(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1805e7d30(param_2,param_1 + 0x118,param_3,param_4,0,0xfffffffffffffffe);
  return param_2;
}






// 函数: void FUN_1805d9040(int32_t *param_1,int param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805d9040(int32_t *param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char cVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  
  if (param_1[0x459] != param_2) {
    lVar13 = (int64_t)param_2 * 0xa60;
    lVar1 = *(int64_t *)(**(int64_t **)(param_1 + 8) + 0x8d8);
    lVar15 = *(int64_t *)(lVar1 + 0x3590 + lVar13);
    if (*(int64_t *)(**(int64_t **)(param_1 + 8) + 0x9d8) == lVar15) {
      if (*(char *)(param_1 + 0x451) != '\0') {
        *(int16_t *)(param_1 + 0x451) = 0;
        param_1[0x45e] = 0;
      }
    }
    else if ((*(char *)(param_1 + 0x451) == '\0') ||
            (lVar12 = FUN_180488690(param_1 + 0x12), lVar15 != lVar12)) {
      *param_1 = 1;
      if (*(char *)(param_1 + 0x451) != '\0') {
        *(int16_t *)(param_1 + 0x451) = 0;
        param_1[0x45e] = 0;
      }
    }
    else {
      *param_1 = 0;
      *(int8_t *)((int64_t)param_1 + 0x1145) = 1;
    }
    lVar15 = *(int64_t *)(lVar1 + 0x3a78 + lVar13);
    lVar12 = *(int64_t *)(lVar1 + 0x30c0 + lVar13);
    lVar14 = 0;
    if ((lVar15 != 0) && (cVar11 = FUN_18038d0a0(lVar15,lVar12 + 0xc), cVar11 != '\0')) {
      lVar14 = lVar15;
    }
    uVar2 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x3978 + lVar13) + 0x18);
    fVar3 = *(float *)(lVar12 + 0xc);
    fVar4 = *(float *)(lVar12 + 0x10);
    uVar5 = *(int32_t *)(lVar12 + 0x14);
    uVar6 = *(int32_t *)(lVar12 + 0x18);
    uVar7 = *(int32_t *)(lVar12 + 0xb0);
    uVar8 = *(int32_t *)(lVar12 + 0xb4);
    uVar9 = *(int32_t *)(lVar12 + 0xb8);
    uVar10 = *(int32_t *)(lVar12 + 0xbc);
    if ((fVar3 != (float)param_1[0x18]) || (fVar4 != (float)param_1[0x19])) {
      *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(lVar12 + 0xc);
      *(uint64_t *)(param_1 + 0x12) = uVar2;
      param_1[0x18] = fVar3;
      param_1[0x19] = fVar4;
      param_1[0x1a] = uVar5;
      param_1[0x1b] = uVar6;
      *(int64_t *)(param_1 + 0x14) = lVar14;
      param_1[0x1c] = uVar7;
      param_1[0x1d] = uVar8;
      param_1[0x1e] = uVar9;
      param_1[0x1f] = uVar10;
      *(int64_t *)(param_1 + 0x16) = lVar15;
      param_1[0x22] = 3;
    }
    param_1[0x459] = param_2;
    func_0x0001805da580(param_1,fVar3,uVar7,param_4,uVar2);
    return;
  }
  return;
}






// 函数: void FUN_1805d905b(int64_t param_1)
void FUN_1805d905b(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  int64_t in_RAX;
  int64_t lVar10;
  int32_t *unaff_RBX;
  uint64_t unaff_RBP;
  int64_t lVar11;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fStack000000000000003c;
  int32_t uStack0000000000000044;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  lVar11 = unaff_RSI * 0xa60;
  lVar1 = *(int64_t *)(**(int64_t **)(param_1 + 0x20) + 0x8d8);
  lVar13 = *(int64_t *)(lVar1 + 0x3590 + lVar11);
  if (*(int64_t *)(**(int64_t **)(param_1 + 0x20) + 0x9d8) == lVar13) {
    if (*(char *)(param_1 + 0x1144) != '\0') {
      *(int16_t *)(param_1 + 0x1144) = 0;
      *(int32_t *)(param_1 + 0x1178) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x1144) != '\0') {
      lVar10 = FUN_180488690(param_1 + 0x48);
      if (lVar13 == lVar10) {
        *unaff_RBX = 0;
        *(int8_t *)((int64_t)unaff_RBX + 0x1145) = 1;
        goto LAB_1805d90e9;
      }
    }
    *unaff_RBX = 1;
    if (*(char *)(unaff_RBX + 0x451) != '\0') {
      *(int16_t *)(unaff_RBX + 0x451) = 0;
      unaff_RBX[0x45e] = 0;
    }
  }
LAB_1805d90e9:
  lVar13 = *(int64_t *)(lVar1 + 0x3a78 + lVar11);
  lVar10 = *(int64_t *)(lVar1 + 0x30c0 + lVar11);
  lVar12 = 0;
  if (lVar13 != 0) {
    cVar9 = FUN_18038d0a0(lVar13,lVar10 + 0xc);
    if (cVar9 != '\0') {
      lVar12 = lVar13;
    }
  }
  uVar2 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x3978 + lVar11) + 0x18);
  fVar3 = *(float *)(lVar10 + 0xc);
  fStack000000000000003c = *(float *)(lVar10 + 0x10);
  uVar4 = *(int32_t *)(lVar10 + 0x14);
  uStack0000000000000044 = *(int32_t *)(lVar10 + 0x18);
  uVar5 = *(int32_t *)(lVar10 + 0xb0);
  uVar6 = *(int32_t *)(lVar10 + 0xb4);
  uVar7 = *(int32_t *)(lVar10 + 0xb8);
  uVar8 = *(int32_t *)(lVar10 + 0xbc);
  if ((fVar3 != (float)unaff_RBX[0x18]) || (fStack000000000000003c != (float)unaff_RBX[0x19])) {
    *(uint64_t *)(unaff_RBX + 0x20) = *(uint64_t *)(lVar10 + 0xc);
    *(uint64_t *)(unaff_RBX + 0x12) = uVar2;
    unaff_RBX[0x18] = fVar3;
    unaff_RBX[0x19] = fStack000000000000003c;
    unaff_RBX[0x1a] = uVar4;
    unaff_RBX[0x1b] = uStack0000000000000044;
    *(int64_t *)(unaff_RBX + 0x14) = lVar12;
    unaff_RBX[0x1c] = uVar5;
    unaff_RBX[0x1d] = uVar6;
    unaff_RBX[0x1e] = uVar7;
    unaff_RBX[0x1f] = uVar8;
    *(int64_t *)(unaff_RBX + 0x16) = lVar13;
    unaff_RBX[0x22] = 3;
  }
  unaff_RBX[0x459] = (int)unaff_RSI;
  func_0x0001805da580();
  return;
}






// 函数: void FUN_1805d9069(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805d9069(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  float fVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  int64_t in_RAX;
  int64_t lVar9;
  int32_t *unaff_RBX;
  int64_t lVar10;
  int64_t unaff_RSI;
  int32_t uVar11;
  int64_t unaff_RDI;
  int64_t lVar12;
  uint64_t unaff_R15;
  float in_XMM0_Da;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fStack000000000000003c;
  int32_t uStack0000000000000044;
  
  *(uint64_t *)(in_RAX + -0x18) = unaff_R15;
  lVar10 = unaff_RSI * 0xa60;
  lVar1 = *(int64_t *)(**(int64_t **)(param_1 + 0x20) + 0x8d8);
  lVar12 = *(int64_t *)(lVar1 + 0x3590 + lVar10);
  uVar11 = (int32_t)unaff_RDI;
  if (*(int64_t *)(**(int64_t **)(param_1 + 0x20) + 0x9d8) == lVar12) {
    if (*(char *)(param_1 + 0x1144) != '\0') {
      *(short *)(param_1 + 0x1144) = (short)unaff_RDI;
      *(int32_t *)(param_1 + 0x1178) = uVar11;
    }
  }
  else {
    if (*(char *)(param_1 + 0x1144) != '\0') {
      lVar9 = FUN_180488690(param_1 + 0x48);
      in_XMM0_Da = extraout_XMM0_Da;
      if (lVar12 == lVar9) {
        *unaff_RBX = uVar11;
        *(int8_t *)((int64_t)unaff_RBX + 0x1145) = 1;
        goto LAB_1805d90e9;
      }
    }
    *unaff_RBX = 1;
    if (*(char *)(unaff_RBX + 0x451) != (char)unaff_RDI) {
      *(short *)(unaff_RBX + 0x451) = (short)unaff_RDI;
      unaff_RBX[0x45e] = uVar11;
    }
  }
LAB_1805d90e9:
  lVar12 = *(int64_t *)(lVar1 + 0x3a78 + lVar10);
  lVar9 = *(int64_t *)(lVar1 + 0x30c0 + lVar10);
  if (lVar12 != 0) {
    cVar8 = FUN_18038d0a0(lVar12,lVar9 + 0xc);
    in_XMM0_Da = extraout_XMM0_Da_00;
    if (cVar8 != '\0') {
      unaff_RDI = lVar12;
    }
  }
  uVar2 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x3978 + lVar10) + 0x18);
  fVar3 = *(float *)(lVar9 + 0xc);
  fStack000000000000003c = *(float *)(lVar9 + 0x10);
  uVar11 = *(int32_t *)(lVar9 + 0x14);
  uStack0000000000000044 = *(int32_t *)(lVar9 + 0x18);
  uVar4 = *(int32_t *)(lVar9 + 0xb0);
  uVar5 = *(int32_t *)(lVar9 + 0xb4);
  uVar6 = *(int32_t *)(lVar9 + 0xb8);
  uVar7 = *(int32_t *)(lVar9 + 0xbc);
  if ((fVar3 != (float)unaff_RBX[0x18]) ||
     (in_XMM0_Da = fStack000000000000003c, fStack000000000000003c != (float)unaff_RBX[0x19])) {
    *(uint64_t *)(unaff_RBX + 0x20) = *(uint64_t *)(lVar9 + 0xc);
    *(uint64_t *)(unaff_RBX + 0x12) = uVar2;
    unaff_RBX[0x18] = fVar3;
    unaff_RBX[0x19] = fStack000000000000003c;
    unaff_RBX[0x1a] = uVar11;
    unaff_RBX[0x1b] = uStack0000000000000044;
    *(int64_t *)(unaff_RBX + 0x14) = unaff_RDI;
    unaff_RBX[0x1c] = uVar4;
    unaff_RBX[0x1d] = uVar5;
    unaff_RBX[0x1e] = uVar6;
    unaff_RBX[0x1f] = uVar7;
    *(int64_t *)(unaff_RBX + 0x16) = lVar12;
    unaff_RBX[0x22] = 3;
  }
  unaff_RBX[0x459] = (int)unaff_RSI;
  func_0x0001805da580(in_XMM0_Da,fVar3,uVar4,param_4,uVar2);
  return;
}






// 函数: void FUN_1805d9103(int32_t param_1)
void FUN_1805d9103(int32_t param_1)

{
  uint64_t uVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  char cVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t unaff_ESI;
  uint64_t unaff_RDI;
  uint64_t in_R10;
  int64_t in_R11;
  int64_t unaff_R14;
  float fStack000000000000003c;
  int32_t uStack0000000000000044;
  
  cVar8 = FUN_18038d0a0(param_1,in_R11 + 0xc);
  if (cVar8 != '\0') {
    unaff_RDI = in_R10;
  }
  uVar1 = *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x3978 + unaff_RBP) + 0x18);
  fVar2 = *(float *)(in_R11 + 0xc);
  fStack000000000000003c = *(float *)(in_R11 + 0x10);
  uVar3 = *(int32_t *)(in_R11 + 0x14);
  uStack0000000000000044 = *(int32_t *)(in_R11 + 0x18);
  uVar4 = *(int32_t *)(in_R11 + 0xb0);
  uVar5 = *(int32_t *)(in_R11 + 0xb4);
  uVar6 = *(int32_t *)(in_R11 + 0xb8);
  uVar7 = *(int32_t *)(in_R11 + 0xbc);
  if ((fVar2 != *(float *)(unaff_RBX + 0x60)) ||
     (fStack000000000000003c != *(float *)(unaff_RBX + 100))) {
    *(uint64_t *)(unaff_RBX + 0x80) = *(uint64_t *)(in_R11 + 0xc);
    *(uint64_t *)(unaff_RBX + 0x48) = uVar1;
    *(float *)(unaff_RBX + 0x60) = fVar2;
    *(float *)(unaff_RBX + 100) = fStack000000000000003c;
    *(int32_t *)(unaff_RBX + 0x68) = uVar3;
    *(int32_t *)(unaff_RBX + 0x6c) = uStack0000000000000044;
    *(uint64_t *)(unaff_RBX + 0x50) = unaff_RDI;
    *(int32_t *)(unaff_RBX + 0x70) = uVar4;
    *(int32_t *)(unaff_RBX + 0x74) = uVar5;
    *(int32_t *)(unaff_RBX + 0x78) = uVar6;
    *(int32_t *)(unaff_RBX + 0x7c) = uVar7;
    *(uint64_t *)(unaff_RBX + 0x58) = in_R10;
    *(int32_t *)(unaff_RBX + 0x88) = 3;
  }
  *(int32_t *)(unaff_RBX + 0x1164) = unaff_ESI;
  func_0x0001805da580();
  return;
}






// 函数: void FUN_1805d9158(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805d9158(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t unaff_RBX;
  int32_t unaff_ESI;
  uint64_t unaff_RDI;
  uint64_t in_R10;
  float fVar1;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  uint64_t in_XMM2_Qb;
  uint64_t in_stack_00000038;
  
  fVar1 = (float)((uint64_t)param_2 >> 0x20);
  if (fVar1 != *(float *)(unaff_RBX + 100)) {
    *(uint64_t *)(unaff_RBX + 0x80) = in_stack_00000038;
    *(uint64_t *)(unaff_RBX + 0x48) = param_1;
    *(int *)(unaff_RBX + 0x60) = (int)param_2;
    *(float *)(unaff_RBX + 100) = fVar1;
    *(int32_t *)(unaff_RBX + 0x68) = in_XMM1_Dc;
    *(int32_t *)(unaff_RBX + 0x6c) = in_XMM1_Dd;
    *(uint64_t *)(unaff_RBX + 0x50) = unaff_RDI;
    *(uint64_t *)(unaff_RBX + 0x70) = param_3;
    *(uint64_t *)(unaff_RBX + 0x78) = in_XMM2_Qb;
    *(uint64_t *)(unaff_RBX + 0x58) = in_R10;
    *(int32_t *)(unaff_RBX + 0x88) = 3;
  }
  *(int32_t *)(unaff_RBX + 0x1164) = unaff_ESI;
  func_0x0001805da580();
  return;
}






// 函数: void FUN_1805d91a5(void)
void FUN_1805d91a5(void)

{
  return;
}



char FUN_1805d91b0(int32_t *param_1,uint64_t *param_2,float param_3,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  uint64_t uStack_c8;
  int64_t lStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  uint64_t uStack_90;
  int iStack_88;
  
  iVar8 = 0;
  cVar9 = '\0';
  lVar5 = *(int64_t *)(**(int64_t **)(param_1 + 8) + 0x8d8);
  do {
    uStack_c8 = *param_2;
    lStack_c0 = param_2[1];
    uStack_b8 = param_2[2];
    uStack_90 = param_2[7];
    fVar1 = *(float *)(param_2 + 3);
    fVar2 = *(float *)((int64_t)param_2 + 0x1c);
    uStack_b0 = param_2[3];
    uStack_a8 = *(int32_t *)(param_2 + 4);
    uStack_a4 = *(int32_t *)((int64_t)param_2 + 0x24);
    uStack_a0 = *(int32_t *)(param_2 + 5);
    uStack_9c = *(int32_t *)((int64_t)param_2 + 0x2c);
    uStack_98 = *(int32_t *)(param_2 + 6);
    uStack_94 = *(int32_t *)((int64_t)param_2 + 0x34);
    iStack_88 = *(int *)(param_2 + 8);
    if (0.0 < param_3) {
      lVar4 = *(int64_t *)(param_1 + 8);
      uVar6 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      uVar6 = uVar6 << 5 ^ uVar6;
      *(uint *)(lVar4 + 0x1390) = uVar6;
      lVar4 = *(int64_t *)(param_1 + 8);
      uVar7 = *(int *)(lVar4 + 0x1390) << 0xd ^ *(uint *)(lVar4 + 0x1390);
      uVar7 = uVar7 >> 0x11 ^ uVar7;
      uVar7 = uVar7 << 5 ^ uVar7;
      *(uint *)(lVar4 + 0x1390) = uVar7;
      fVar10 = ((float)(uVar7 - 1) * param_3 * 4.656613e-10 - param_3) + fVar1;
      fVar11 = ((float)(uVar6 - 1) * param_3 * 4.656613e-10 - param_3) + fVar2;
      if ((fVar1 != fVar10) || (fVar2 != fVar11)) {
        uStack_b0 = CONCAT44(fVar11,fVar10);
        iStack_88 = 0;
      }
    }
    if ((param_4 == '\0') || (cVar3 = FUN_1804f6190(lVar5,&uStack_b0), cVar3 != '\0')) {
      if (((param_5 != '\0') &&
          (lVar4 = *(int64_t *)(lVar5 + 0x18),
          *(int64_t *)(lVar4 + 0x2ee8) - *(int64_t *)(lVar4 + 12000) >> 3 != 0)) &&
         ((FUN_180487c70(&uStack_c8,2), iStack_88 < 2 || (lStack_c0 == 0)))) {
        cVar9 = '\0';
        goto LAB_1805d9378;
      }
      cVar9 = '\x01';
    }
    else {
LAB_1805d9378:
      param_3 = param_3 * 0.9;
    }
    iVar8 = iVar8 + 1;
    if (cVar9 != '\0') {
      lVar5 = *(int64_t *)(**(int64_t **)(param_1 + 8) + 0x9d8);
      lVar4 = FUN_180488690(&uStack_c8);
      cVar3 = *(char *)(param_1 + 0x451);
      if (lVar5 != lVar4) {
        if (cVar3 != '\0') {
          lVar5 = FUN_180488690(param_1 + 0x12);
          lVar4 = FUN_180488690(&uStack_c8);
          if (lVar4 == lVar5) {
            *param_1 = 0;
            *(int8_t *)((int64_t)param_1 + 0x1145) = 1;
            goto LAB_1805d942f;
          }
        }
        if (*(int *)(**(int64_t **)(param_1 + 8) + 0x5f8) != 0) goto LAB_1805d942f;
        cVar3 = *(char *)(param_1 + 0x451);
        *param_1 = 2;
      }
      if (cVar3 != '\0') {
        param_1[0x45e] = 0;
        *(int16_t *)(param_1 + 0x451) = 0;
      }
LAB_1805d942f:
      param_1[0x459] = 0xffffffff;
      func_0x0001805da580(param_1);
      if (((float)uStack_b0 != (float)param_1[0x18]) || (uStack_b0._4_4_ != (float)param_1[0x19])) {
        *(uint64_t *)(param_1 + 0x12) = uStack_c8;
        *(int64_t *)(param_1 + 0x14) = lStack_c0;
        *(uint64_t *)(param_1 + 0x16) = uStack_b8;
        *(uint64_t *)(param_1 + 0x20) = uStack_90;
        param_1[0x22] = iStack_88;
        *(uint64_t *)(param_1 + 0x18) = uStack_b0;
        *(uint64_t *)(param_1 + 0x1a) = CONCAT44(uStack_a4,uStack_a8);
        *(uint64_t *)(param_1 + 0x1c) = CONCAT44(uStack_9c,uStack_a0);
        *(uint64_t *)(param_1 + 0x1e) = CONCAT44(uStack_94,uStack_98);
      }
      return cVar9;
    }
    if (param_3 <= 0.01) {
      return '\0';
    }
    if (0x1f < iVar8) {
      return '\0';
    }
  } while( true );
}






// 函数: void FUN_1805d94e0(int64_t param_1,uint64_t param_2,float param_3)
void FUN_1805d94e0(int64_t param_1,uint64_t param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  int32_t uStack0000000000000030;
  
  uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x20) + 0x1390);
  uStack0000000000000030 = 1;
  uVar2 = uVar2 << 0xd ^ uVar2;
  uVar2 = uVar2 >> 0x11 ^ uVar2;
  uVar2 = uVar2 << 5 ^ uVar2;
  uVar1 = uVar2 << 0xd ^ uVar2;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  uVar1 = uVar1 << 5 ^ uVar1;
  *(uint *)(*(int64_t *)(param_1 + 0x20) + 0x1390) = uVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(((float)(uVar2 - 1) * param_3 * 4.656613e-10 - param_3) +
                ((float)(uVar1 - 1) * 2.3283064e-10 - 0.5) * 1.0);
}






