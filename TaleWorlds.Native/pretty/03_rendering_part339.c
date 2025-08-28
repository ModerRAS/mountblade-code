#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part339.c - 15 个函数

// 函数: void FUN_18044aad0(uint64_t param_1,int64_t *param_2,int32_t param_3)
void FUN_18044aad0(uint64_t param_1,int64_t *param_2,int32_t param_3)

{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_180275cf0(param_1,param_3,&plStackX_8,1,uVar1);
  return;
}



int64_t * FUN_18044ab80(int64_t *param_1,int64_t param_2,int param_3)

{
  int64_t *plStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  if ((param_2 == 0) ||
     (plStack_20 = *(int64_t **)((int64_t)param_3 * 0x10 + *(int64_t *)(param_2 + 0x38)),
     plStack_20 == (int64_t *)0x0)) {
    plStack_20 = (int64_t *)0x0;
    uStack_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    uStack_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (int64_t)plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}



uint FUN_18044ac20(int64_t *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (param_1 != (int64_t *)0x0) {
    if (*(code **)(*param_1 + 0xc0) == (code *)&unknown_var_9120_ptr) {
      cVar10 = (param_1[8] - param_1[7] & 0xfffffffffffffff0U) == 0;
    }
    else {
      cVar10 = (**(code **)(*param_1 + 0xc0))();
    }
    if (cVar10 == '\0') {
      lVar4 = *(int64_t *)param_1[7];
    }
    else {
      lVar4 = 0;
    }
    fVar1 = *(float *)(lVar4 + 0x23c);
    fVar2 = *(float *)(lVar4 + 0x240);
    fVar3 = *(float *)(lVar4 + 0x244);
    dVar11 = (double)pow((double)*(float *)(lVar4 + 0x238),0x3fdd1745d1745d17);
    dVar12 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar13 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar7 = (uint)(int64_t)(fVar3 * 256.0);
    uVar9 = 0xff;
    if (uVar7 < 0xff) {
      uVar9 = uVar7;
    }
    uVar8 = (uint)(int64_t)((float)dVar11 * 256.0);
    uVar7 = 0xff;
    if (uVar8 < 0xff) {
      uVar7 = uVar8;
    }
    uVar6 = (uint)(int64_t)((float)dVar12 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar5 = (uint)(int64_t)((float)dVar13 * 256.0);
    uVar6 = 0xff;
    if (uVar5 < 0xff) {
      uVar6 = uVar5;
    }
    return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
  }
  return 0;
}



uint FUN_18044ac35(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t in_RAX;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RBX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (*(code **)(in_RAX + 0xc0) == (code *)&unknown_var_9120_ptr) {
    cVar10 = (*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) & 0xfffffffffffffff0U)
             == 0;
  }
  else {
    cVar10 = (**(code **)(in_RAX + 0xc0))();
  }
  if (cVar10 == '\0') {
    lVar4 = **(int64_t **)(unaff_RBX + 0x38);
  }
  else {
    lVar4 = 0;
  }
  fVar1 = *(float *)(lVar4 + 0x23c);
  fVar2 = *(float *)(lVar4 + 0x240);
  fVar3 = *(float *)(lVar4 + 0x244);
  dVar11 = (double)pow((double)*(float *)(lVar4 + 0x238),0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar13 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar7 = (uint)(int64_t)(fVar3 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar8 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar7 = 0xff;
  if (uVar8 < 0xff) {
    uVar7 = uVar8;
  }
  uVar6 = (uint)(int64_t)((float)dVar12 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar5 = (uint)(int64_t)((float)dVar13 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
}



uint64_t FUN_18044ad72(void)

{
  return 0;
}



uint FUN_18044ad7a(uint64_t param_1,code *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int64_t unaff_RBX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  cVar4 = (*param_2)();
  if (cVar4 == '\0') {
    lVar5 = **(int64_t **)(unaff_RBX + 0x38);
  }
  else {
    lVar5 = 0;
  }
  fVar1 = *(float *)(lVar5 + 0x23c);
  fVar2 = *(float *)(lVar5 + 0x240);
  fVar3 = *(float *)(lVar5 + 0x244);
  dVar11 = (double)pow((double)*(float *)(lVar5 + 0x238),0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar13 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar8 = (uint)(int64_t)(fVar3 * 256.0);
  uVar10 = 0xff;
  if (uVar8 < 0xff) {
    uVar10 = uVar8;
  }
  uVar9 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar8 = 0xff;
  if (uVar9 < 0xff) {
    uVar8 = uVar9;
  }
  uVar7 = (uint)(int64_t)((float)dVar12 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar6 = (uint)(int64_t)((float)dVar13 * 256.0);
  uVar7 = 0xff;
  if (uVar6 < 0xff) {
    uVar7 = uVar6;
  }
  return ((uVar8 | uVar10 << 8) << 8 | uVar9) << 8 | uVar7;
}



uint FUN_18044ad90(int64_t *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (param_1 != (int64_t *)0x0) {
    if (*(code **)(*param_1 + 0xc0) == (code *)&unknown_var_9120_ptr) {
      cVar10 = (param_1[8] - param_1[7] & 0xfffffffffffffff0U) == 0;
    }
    else {
      cVar10 = (**(code **)(*param_1 + 0xc0))();
    }
    if (cVar10 == '\0') {
      lVar4 = *(int64_t *)param_1[7];
    }
    else {
      lVar4 = 0;
    }
    fVar1 = *(float *)(lVar4 + 0x24c);
    fVar2 = *(float *)(lVar4 + 0x250);
    fVar3 = *(float *)(lVar4 + 0x254);
    dVar11 = (double)pow((double)*(float *)(lVar4 + 0x248),0x3fdd1745d1745d17);
    dVar12 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar13 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar7 = (uint)(int64_t)(fVar3 * 256.0);
    uVar9 = 0xff;
    if (uVar7 < 0xff) {
      uVar9 = uVar7;
    }
    uVar8 = (uint)(int64_t)((float)dVar11 * 256.0);
    uVar7 = 0xff;
    if (uVar8 < 0xff) {
      uVar7 = uVar8;
    }
    uVar6 = (uint)(int64_t)((float)dVar12 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar5 = (uint)(int64_t)((float)dVar13 * 256.0);
    uVar6 = 0xff;
    if (uVar5 < 0xff) {
      uVar6 = uVar5;
    }
    return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
  }
  return 0;
}



uint FUN_18044ada5(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t in_RAX;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  int64_t unaff_RBX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if (*(code **)(in_RAX + 0xc0) == (code *)&unknown_var_9120_ptr) {
    cVar10 = (*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38) & 0xfffffffffffffff0U)
             == 0;
  }
  else {
    cVar10 = (**(code **)(in_RAX + 0xc0))();
  }
  if (cVar10 == '\0') {
    lVar4 = **(int64_t **)(unaff_RBX + 0x38);
  }
  else {
    lVar4 = 0;
  }
  fVar1 = *(float *)(lVar4 + 0x24c);
  fVar2 = *(float *)(lVar4 + 0x250);
  fVar3 = *(float *)(lVar4 + 0x254);
  dVar11 = (double)pow((double)*(float *)(lVar4 + 0x248),0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar13 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar7 = (uint)(int64_t)(fVar3 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar8 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar7 = 0xff;
  if (uVar8 < 0xff) {
    uVar7 = uVar8;
  }
  uVar6 = (uint)(int64_t)((float)dVar12 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar5 = (uint)(int64_t)((float)dVar13 * 256.0);
  uVar6 = 0xff;
  if (uVar5 < 0xff) {
    uVar6 = uVar5;
  }
  return ((uVar7 | uVar9 << 8) << 8 | uVar8) << 8 | uVar6;
}



uint64_t FUN_18044aee2(void)

{
  return 0;
}



uint FUN_18044aeea(uint64_t param_1,code *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int64_t unaff_RBX;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  cVar4 = (*param_2)();
  if (cVar4 == '\0') {
    lVar5 = **(int64_t **)(unaff_RBX + 0x38);
  }
  else {
    lVar5 = 0;
  }
  fVar1 = *(float *)(lVar5 + 0x24c);
  fVar2 = *(float *)(lVar5 + 0x250);
  fVar3 = *(float *)(lVar5 + 0x254);
  dVar11 = (double)pow((double)*(float *)(lVar5 + 0x248),0x3fdd1745d1745d17);
  dVar12 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar13 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar8 = (uint)(int64_t)(fVar3 * 256.0);
  uVar10 = 0xff;
  if (uVar8 < 0xff) {
    uVar10 = uVar8;
  }
  uVar9 = (uint)(int64_t)((float)dVar11 * 256.0);
  uVar8 = 0xff;
  if (uVar9 < 0xff) {
    uVar8 = uVar9;
  }
  uVar7 = (uint)(int64_t)((float)dVar12 * 256.0);
  uVar9 = 0xff;
  if (uVar7 < 0xff) {
    uVar9 = uVar7;
  }
  uVar6 = (uint)(int64_t)((float)dVar13 * 256.0);
  uVar7 = 0xff;
  if (uVar6 < 0xff) {
    uVar7 = uVar6;
  }
  return ((uVar8 | uVar10 << 8) << 8 | uVar9) << 8 | uVar7;
}





// 函数: void FUN_18044af00(int64_t param_1,uint param_2)
void FUN_18044af00(int64_t param_1,uint param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(int64_t **)(param_1 + 0x38);
    if (plVar2 < *(int64_t **)(param_1 + 0x40)) {
      do {
        lVar1 = *plVar2;
        plVar2 = plVar2 + 2;
        *(uint64_t *)(lVar1 + 0x248) =
             CONCAT44((float)(param_2 >> 8 & 0xff) * 0.003921569,
                      (float)(param_2 >> 0x10 & 0xff) * 0.003921569);
        *(uint64_t *)(lVar1 + 0x250) =
             CONCAT44((float)(param_2 >> 0x18) * 0.003921569,(float)(param_2 & 0xff) * 0.003921569);
      } while (plVar2 < *(int64_t **)(param_1 + 0x40));
    }
  }
  return;
}





// 函数: void FUN_18044afb0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_18044afb0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(int64_t **)(param_1 + 0x38);
    if (plVar2 < *(int64_t **)(param_1 + 0x40)) {
      do {
        lVar1 = *plVar2;
        plVar2 = plVar2 + 2;
        *(uint64_t *)(lVar1 + 0x2b8) = CONCAT44(param_3,param_2);
        *(uint64_t *)(lVar1 + 0x2c0) = CONCAT44(param_5,param_4);
      } while (plVar2 < *(int64_t **)(param_1 + 0x40));
    }
  }
  return;
}



uint64_t * FUN_18044b010(uint64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  if (*(int64_t *)(param_2 + 0x40) - (int64_t)*(int64_t **)(param_2 + 0x38) >> 4 != 0) {
    lVar1 = **(int64_t **)(param_2 + 0x38);
    uVar2 = *(uint64_t *)(lVar1 + 0x2c0);
    *param_1 = *(uint64_t *)(lVar1 + 0x2b8);
    param_1[1] = uVar2;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}





// 函数: void FUN_18044b080(uint64_t *param_1,uint64_t *param_2)
void FUN_18044b080(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if (param_1 != (uint64_t *)0x0) {
    if ((void *)*param_1 == &unknown_var_9304_ptr) {
      param_1 = param_1 + 0x66;
    }
    else {
      param_1 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))();
    }
    uVar1 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar1;
    uVar1 = param_1[5];
    param_2[4] = param_1[4];
    param_2[5] = uVar1;
    uVar1 = param_1[7];
    param_2[6] = param_1[6];
    param_2[7] = uVar1;
    return;
  }
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0x3f80000000000000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0x3f80000000000000;
  return;
}



int32_t * FUN_18044b110(int32_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  
  if (param_2 != (int64_t *)0x0) {
    if (*(code **)(*param_2 + 0xc0) == (code *)&unknown_var_9120_ptr) {
      cVar2 = (param_2[8] - param_2[7] & 0xfffffffffffffff0U) == 0;
    }
    else {
      cVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
    }
    if ((cVar2 == '\0') && (*(int64_t *)param_2[7] != 0)) {
      if (*(code **)(*param_2 + 0xc0) == (code *)&unknown_var_9120_ptr) {
        cVar2 = (param_2[8] - param_2[7] & 0xfffffffffffffff0U) == 0;
      }
      else {
        cVar2 = (**(code **)(*param_2 + 0xc0))();
      }
      uVar3 = uRam00000000000002a8;
      uVar4 = uRam00000000000002ac;
      uVar5 = uRam00000000000002b0;
      uVar6 = uRam00000000000002b4;
      if (cVar2 == '\0') {
        lVar1 = *(int64_t *)param_2[7];
        uVar3 = *(int32_t *)(lVar1 + 0x2a8);
        uVar4 = *(int32_t *)(lVar1 + 0x2ac);
        uVar5 = *(int32_t *)(lVar1 + 0x2b0);
        uVar6 = *(int32_t *)(lVar1 + 0x2b4);
      }
      goto LAB_18044b1a4;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_18044b1a4:
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  return param_1;
}





// 函数: void FUN_18044b1d0(int64_t *param_1,uint64_t *param_2)
void FUN_18044b1d0(int64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  
  if (param_1 != (int64_t *)0x0) {
    if (*(code **)(*param_1 + 0xc0) == (code *)&unknown_var_9120_ptr) {
      cVar4 = (param_1[8] - param_1[7] & 0xfffffffffffffff0U) == 0;
    }
    else {
      cVar4 = (**(code **)(*param_1 + 0xc0))();
    }
    if ((cVar4 == '\0') && (*(int64_t *)param_1[7] != 0)) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      lVar3 = FUN_180275820(param_1);
      *(uint64_t *)(lVar3 + 0x2a8) = uVar1;
      *(uint64_t *)(lVar3 + 0x2b0) = uVar2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044b280(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t *param_4)
void FUN_18044b280(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t *param_4)

{
  uint *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar10;
  uint64_t uVar9;
  
  if (param_1 != 0) {
    uVar6 = param_4[1];
    *(uint64_t *)(param_1 + 0x370) = *param_4;
    *(uint64_t *)(param_1 + 0x378) = uVar6;
    uVar9 = 0;
    uVar6 = param_4[3];
    *(uint64_t *)(param_1 + 0x380) = param_4[2];
    *(uint64_t *)(param_1 + 0x388) = uVar6;
    uVar2 = *(int32_t *)((int64_t)param_4 + 0x24);
    uVar3 = *(int32_t *)(param_4 + 5);
    uVar4 = *(int32_t *)((int64_t)param_4 + 0x2c);
    *(int32_t *)(param_1 + 0x390) = *(int32_t *)(param_4 + 4);
    *(int32_t *)(param_1 + 0x394) = uVar2;
    *(int32_t *)(param_1 + 0x398) = uVar3;
    *(int32_t *)(param_1 + 0x39c) = uVar4;
    uVar6 = param_4[6];
    uVar5 = param_4[7];
    *(int8_t *)(param_1 + 0x3b0) = param_3;
    *(uint64_t *)(param_1 + 0x3a0) = uVar6;
    *(uint64_t *)(param_1 + 0x3a8) = uVar5;
    lVar7 = *(int64_t *)(param_1 + 0x38);
    uVar10 = uVar9;
    if (*(int64_t *)(param_1 + 0x40) - lVar7 >> 4 != 0) {
      do {
        puVar1 = (uint *)(*(int64_t *)(uVar10 + lVar7) + 0x100);
        *puVar1 = *puVar1 | 0x100;
        lVar7 = *(int64_t *)(uVar10 + *(int64_t *)(param_1 + 0x38));
        if (*(int *)(*(int64_t *)(lVar7 + 600) + 0x18) != 1) {
          *(int32_t *)(*(int64_t *)(lVar7 + 600) + 0x18) = 1;
          FUN_18007e990(lVar7,*(int *)(*(int64_t *)(lVar7 + 600) + 0x1c) +
                              *(int *)(*(int64_t *)(lVar7 + 600) + 0x18));
          uVar6 = system_memory_pool_ptr;
          if (*(int64_t *)(*(int64_t *)(lVar7 + 600) + 0x10) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(uint64_t *)(*(int64_t *)(lVar7 + 600) + 0x10) = 0;
          uVar6 = FUN_18062b1e0(uVar6,1,0x10,3);
          *(uint64_t *)(*(int64_t *)(lVar7 + 600) + 0x10) = uVar6;
          **(int8_t **)(*(int64_t *)(lVar7 + 600) + 0x10) = param_3;
        }
        lVar7 = *(int64_t *)(param_1 + 0x38);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        uVar10 = uVar10 + 0x10;
      } while ((uint64_t)(int64_t)(int)uVar8 <
               (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar7 >> 4));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044b293(uint64_t param_1,uint64_t param_2,int8_t param_3,int64_t param_4)
void FUN_18044b293(uint64_t param_1,uint64_t param_2,int8_t param_3,int64_t param_4)

{
  uint *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t in_RCX;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar10;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  uint64_t uVar9;
  
  *(int *)(in_RCX + 0x370) = (int)param_1;
  *(int *)(in_RCX + 0x374) = (int)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(in_RCX + 0x378) = in_XMM0_Dc;
  *(int32_t *)(in_RCX + 0x37c) = in_XMM0_Dd;
  uVar9 = 0;
  uVar6 = *(uint64_t *)(param_4 + 0x18);
  *(uint64_t *)(in_RCX + 0x380) = *(uint64_t *)(param_4 + 0x10);
  *(uint64_t *)(in_RCX + 0x388) = uVar6;
  uVar2 = *(int32_t *)(param_4 + 0x24);
  uVar3 = *(int32_t *)(param_4 + 0x28);
  uVar4 = *(int32_t *)(param_4 + 0x2c);
  *(int32_t *)(in_RCX + 0x390) = *(int32_t *)(param_4 + 0x20);
  *(int32_t *)(in_RCX + 0x394) = uVar2;
  *(int32_t *)(in_RCX + 0x398) = uVar3;
  *(int32_t *)(in_RCX + 0x39c) = uVar4;
  uVar6 = *(uint64_t *)(param_4 + 0x30);
  uVar5 = *(uint64_t *)(param_4 + 0x38);
  *(int8_t *)(in_RCX + 0x3b0) = param_3;
  *(uint64_t *)(in_RCX + 0x3a0) = uVar6;
  *(uint64_t *)(in_RCX + 0x3a8) = uVar5;
  lVar7 = *(int64_t *)(in_RCX + 0x38);
  uVar10 = uVar9;
  if (*(int64_t *)(in_RCX + 0x40) - lVar7 >> 4 != 0) {
    do {
      puVar1 = (uint *)(*(int64_t *)(uVar10 + lVar7) + 0x100);
      *puVar1 = *puVar1 | 0x100;
      lVar7 = *(int64_t *)(uVar10 + *(int64_t *)(in_RCX + 0x38));
      if (*(int *)(*(int64_t *)(lVar7 + 600) + 0x18) != 1) {
        *(int32_t *)(*(int64_t *)(lVar7 + 600) + 0x18) = 1;
        FUN_18007e990(lVar7,*(int *)(*(int64_t *)(lVar7 + 600) + 0x1c) +
                            *(int *)(*(int64_t *)(lVar7 + 600) + 0x18));
        uVar6 = system_memory_pool_ptr;
        if (*(int64_t *)(*(int64_t *)(lVar7 + 600) + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(*(int64_t *)(lVar7 + 600) + 0x10) = 0;
        uVar6 = FUN_18062b1e0(uVar6,1,0x10,3);
        *(uint64_t *)(*(int64_t *)(lVar7 + 600) + 0x10) = uVar6;
        **(int8_t **)(*(int64_t *)(lVar7 + 600) + 0x10) = param_3;
      }
      lVar7 = *(int64_t *)(in_RCX + 0x38);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar10 = uVar10 + 0x10;
    } while ((uint64_t)(int64_t)(int)uVar8 <
             (uint64_t)(*(int64_t *)(in_RCX + 0x40) - lVar7 >> 4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044b2f3(uint64_t param_1,int64_t param_2)
void FUN_18044b2f3(uint64_t param_1,int64_t param_2)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int8_t unaff_BL;
  int unaff_EBP;
  int64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  
  uVar4 = unaff_R15 & 0xffffffff;
  do {
    puVar1 = (uint *)(*(int64_t *)(uVar4 + param_2) + 0x100);
    *puVar1 = *puVar1 | 0x100;
    lVar2 = *(int64_t *)(uVar4 + *(int64_t *)(unaff_RSI + 0x38));
    if (*(int *)(*(int64_t *)(lVar2 + 600) + 0x18) != 1) {
      *(int32_t *)(*(int64_t *)(lVar2 + 600) + 0x18) = 1;
      FUN_18007e990(lVar2,*(int *)(*(int64_t *)(lVar2 + 600) + 0x1c) +
                          *(int *)(*(int64_t *)(lVar2 + 600) + 0x18));
      uVar3 = system_memory_pool_ptr;
      if (*(int64_t *)(*(int64_t *)(lVar2 + 600) + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(*(int64_t *)(lVar2 + 600) + 0x10) = unaff_R15;
      uVar3 = FUN_18062b1e0(uVar3,1,0x10,3);
      *(uint64_t *)(*(int64_t *)(lVar2 + 600) + 0x10) = uVar3;
      **(int8_t **)(*(int64_t *)(lVar2 + 600) + 0x10) = unaff_BL;
    }
    param_2 = *(int64_t *)(unaff_RSI + 0x38);
    unaff_EBP = unaff_EBP + 1;
    uVar4 = uVar4 + 0x10;
  } while ((uint64_t)(int64_t)unaff_EBP <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x40) - param_2 >> 4));
  return;
}





// 函数: void FUN_18044b3ba(void)
void FUN_18044b3ba(void)

{
  return;
}





// 函数: void FUN_18044b3ca(void)
void FUN_18044b3ca(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044b3d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18044b3d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6)

{
  uint64_t uVar1;
  int32_t uStack_58;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  uint64_t uStack_44;
  uint64_t uStack_38;
  int8_t auStack_30 [8];
  void *puStack_28;
  int64_t lStack_20;
  
  if (param_1 != 0) {
    uStack_38 = 0xfffffffffffffffe;
    uStack_58 = param_6;
    uStack_54 = param_5;
    uStack_4c = param_4;
    uStack_44 = param_3;
    FUN_180627910(&puStack_28);
    uVar1 = render_system_data_config;
    FUN_1802777f0(param_1);
    FUN_180182280(uVar1,auStack_30,&puStack_28,&uStack_44,&uStack_4c,&uStack_54,param_1,&uStack_58);
    puStack_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void FUN_18044b4f0(uint64_t *param_1,uint64_t *param_2)
void FUN_18044b4f0(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if ((void *)*param_1 == &unknown_var_9304_ptr) {
    param_1 = (uint64_t *)((int64_t)param_1 + 0x214);
  }
  else {
    param_1 = (uint64_t *)(**(code **)((void *)*param_1 + 0x198))();
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  uVar1 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar1;
  uVar1 = param_1[5];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  *(int32_t *)(param_2 + 6) = *(int32_t *)(param_1 + 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18044b580(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4
                       )

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t alStack_30 [3];
  int32_t uStack_18;
  
  uVar1 = *(uint64_t *)(system_resource_state + 0xab0);
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  alStack_30[2] = 0;
  uStack_18 = 3;
  FUN_1800b7eb0(0,alStack_30,param_3,param_4,0xfffffffffffffffe);
  iVar3 = (int)uVar1;
  lVar2 = (int64_t)iVar3;
  if (0 < iVar3) {
    lVar4 = alStack_30[0] - (int64_t)param_1;
    do {
      *param_1 = *(uint64_t *)(lVar4 + (int64_t)param_1);
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (alStack_30[0] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1 & 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18044b610(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int32_t uStack_34;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  uVar2 = FUN_180627910(&puStack_30);
  plVar3 = (int64_t *)FUN_1800b6de0(system_resource_state,uVar2,0,param_4,uVar4);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &system_state_ptr;
    if (plVar3 == (int64_t *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    *param_1 = plVar3;
    param_1[1] = CONCAT44(uStack_34,uVar1);
    return param_1;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18044b6e0(int64_t *param_1,int32_t param_2)
void FUN_18044b6e0(int64_t *param_1,int32_t param_2)

{
  int32_t auStackX_10 [6];
  
  if (param_1 != (int64_t *)0x0) {
    auStackX_10[0] = param_2;
    (**(code **)(*param_1 + 0x128))(param_1,auStackX_10);
  }
  return;
}





// 函数: void FUN_18044b700(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18044b700(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int16_t uStack_48;
  int8_t uStack_46;
  int32_t uStack_44;
  int8_t uStack_40;
  uint64_t uStack_38;
  int64_t lStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  if (param_1 != (int64_t *)0x0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0xffffffff;
    uStack_48 = 1;
    uStack_46 = 0;
    uStack_44 = 0xffffffff;
    uStack_40 = 1;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_18 = 3;
    uStack_10 = 0;
    (**(code **)(*param_1 + 0x1a8))(0,&uStack_58,param_3,param_4,0xfffffffffffffffe);
    if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18044b7a0(int64_t *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t alStack_b8 [2];
  int32_t uStack_a8;
  int8_t auStack_a0 [8];
  void *puStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int64_t *plStack_70;
  uint64_t uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  int16_t uStack_58;
  int8_t uStack_56;
  int32_t uStack_54;
  int8_t uStack_50;
  uint64_t uStack_48;
  int64_t lStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int8_t *puStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (param_1 == (int64_t *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    uStack_68 = 0;
    uStack_5c = 0xffffffff;
    uStack_58 = 1;
    uStack_56 = 0;
    uStack_54 = 0xffffffff;
    uStack_50 = 1;
    uStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    puStack_20 = (int8_t *)0x0;
    uStack_60 = 0x10;
    alStack_b8[0] = 0;
    alStack_b8[0] = FUN_18062b420(system_memory_pool_ptr,0x1000,0xd);
    LOCK();
    alStack_b8[1] = 0;
    UNLOCK();
    uStack_a8 = 0;
    uStack_80 = 0x3f800000;
    uStack_7c = 0x40000000;
    plStack_70 = alStack_b8;
    uStack_90 = 1;
    puStack_98 = &system_data_0000;
    uStack_88 = 0;
    uStack_78 = 0;
    puStack_20 = auStack_a0;
    uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,&uStack_68);
    if (uStack_90 != 0) {
      do {
        *(uint64_t *)(puStack_98 + uVar2 * 8) = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uStack_90);
    }
    uStack_88 = 0;
    if (alStack_b8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_b8[0] = 0;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18044b910(int64_t param_1,int8_t param_2,int8_t param_3)
void FUN_18044b910(int64_t param_1,int8_t param_2,int8_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  uint64_t uStackX_20;
  uint64_t uVar6;
  int64_t alStack_48 [3];
  int32_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  uVar6 = 0xfffffffffffffffe;
  if (*(char *)(*(int64_t *)(system_global_data_ptr + 0x50) + 0x358) != '\0') {
    uStack_28 = 0;
    uStack_20 = 0;
    uVar2 = 0;
    uStack_18 = 0;
    uStack_10 = 3;
    FUN_1801cf2b0(0,&uStack_28,param_2,param_3,1);
    uVar5 = 0;
    alStack_48[0] = 0;
    alStack_48[1] = 0;
    alStack_48[2] = 0;
    uStack_30 = 3;
    lVar1 = *(int64_t *)(param_1 + 0x38);
    uVar4 = uVar2;
    if (*(int64_t *)(param_1 + 0x40) - lVar1 >> 4 != 0) {
      do {
        uVar3 = *(uint *)(*(int64_t *)(uVar4 + lVar1) + 0x100) >> 0x16 & 0xffffff01;
        uStackX_20 = 0;
        uVar5 = FUN_1801cdb50(uVar3,*(uint64_t *)(*(int64_t *)(uVar4 + lVar1) + 0x1b8),&uStack_28
                              ,0,0,0,(char)uVar3,alStack_48,1,1,0,&uStackX_20,uVar6,&uStackX_20);
        uVar3 = (int)uVar2 + 1;
        uVar2 = (uint64_t)uVar3;
        lVar1 = *(int64_t *)(param_1 + 0x38);
        uVar4 = uVar4 + 0x10;
      } while ((uint64_t)(int64_t)(int)uVar3 <
               (uint64_t)(*(int64_t *)(param_1 + 0x40) - lVar1 >> 4));
    }
    uStackX_20 = 0;
    FUN_1801de280(uVar5,alStack_48,&uStackX_20);
    if (alStack_48[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    FUN_180080df0(&uStack_28);
  }
  return;
}





