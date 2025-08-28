#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part436.c - 12 个函数

// 函数: void FUN_180507500(int64_t param_1)
void FUN_180507500(int64_t param_1)

{
  *(int32_t *)(param_1 + 0xc20) = 0;
  *(int8_t *)(param_1 + 0xc24) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0xc28,0,0x60);
}



int64_t FUN_180507590(int64_t param_1,int64_t param_2,int64_t param_3,float *param_4)

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
  
  fVar1 = *param_4;
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_3 + 0x1c);
  fVar7 = *(float *)(param_2 + 0x1c);
  fVar8 = *(float *)(param_2 + 0x14);
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0x10) =
       (*(float *)(param_3 + 0x10) - *(float *)(param_2 + 0x10)) * fVar1 +
       *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0x14) = (fVar2 - fVar3) * fVar1 + fVar8;
  *(float *)(param_1 + 0x18) = (fVar4 - fVar5) * fVar1 + fVar9;
  *(float *)(param_1 + 0x1c) = (fVar6 - fVar7) * fVar1 + fVar10;
  fVar1 = *param_4;
  fVar2 = *(float *)(param_3 + 0x24);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar5 = *(float *)(param_2 + 0x28);
  fVar6 = *(float *)(param_3 + 0x2c);
  fVar7 = *(float *)(param_2 + 0x2c);
  fVar8 = *(float *)(param_2 + 0x24);
  fVar9 = *(float *)(param_2 + 0x28);
  fVar10 = *(float *)(param_2 + 0x2c);
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_3 + 0x20) - *(float *)(param_2 + 0x20)) * fVar1 +
       *(float *)(param_2 + 0x20);
  *(float *)(param_1 + 0x24) = (fVar2 - fVar3) * fVar1 + fVar8;
  *(float *)(param_1 + 0x28) = (fVar4 - fVar5) * fVar1 + fVar9;
  *(float *)(param_1 + 0x2c) = (fVar6 - fVar7) * fVar1 + fVar10;
  FUN_180084ae0();
  return param_1;
}



uint64_t * FUN_1805077e0(uint64_t *param_1)

{
  *(uint64_t *)((int64_t)param_1 + 0x3c) = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001805aeed0();
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180507810(int64_t param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *param_2 = iVar1;
  if ((iVar1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))();
  }
  return param_2;
}





// 函数: void FUN_180507860(int64_t param_1)
void FUN_180507860(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  
  lVar2 = *(int64_t *)(param_1 + 0xf8);
  if (0 < *(short *)(param_1 + 8)) {
    if (*(short *)(param_1 + 10) <
        *(short *)((int64_t)*(int *)(param_1 + 0xf0) * 0xa0 + 0x96 + *(int64_t *)(param_1 + 0xd0))
       ) {
      cVar1 = func_0x000180507950();
      if (cVar1 != '\0') goto LAB_1805078ac;
    }
    *(int8_t *)(lVar2 + 0x126) = 0;
    return;
  }
LAB_1805078ac:
  *(int8_t *)(lVar2 + 0x126) = 1;
  return;
}



int64_t * FUN_1805078f0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x100);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



float FUN_180507b40(uint *param_1)

{
  float fVar1;
  
  if ((*param_1 & 0x400) == 0) {
    FUN_180487c70(param_1 + 8,2);
    if ((int)param_1[0x18] < 2) {
      fVar1 = -NAN;
    }
    else {
      fVar1 = (float)param_1[0x10];
    }
    param_1[0x24] = (uint)ABS(fVar1 - (float)param_1[3]);
    *param_1 = *param_1 | 0x400;
    return ABS(fVar1 - (float)param_1[3]);
  }
  return (float)param_1[0x24];
}





// 函数: void FUN_180507b56(int64_t param_1)
void FUN_180507b56(int64_t param_1)

{
  uint *unaff_RBX;
  float fVar1;
  
  FUN_180487c70(param_1 + 0x20);
  if ((int)unaff_RBX[0x18] < 2) {
    fVar1 = -NAN;
  }
  else {
    fVar1 = (float)unaff_RBX[0x10];
  }
  unaff_RBX[0x24] = (uint)ABS(fVar1 - (float)unaff_RBX[3]);
  *unaff_RBX = *unaff_RBX | 0x400;
  return;
}



int32_t FUN_180507b9e(int64_t param_1)

{
  return *(int32_t *)(param_1 + 0x90);
}



uint64_t * FUN_180507be0(int64_t param_1,uint64_t *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  uint64_t uStackX_8;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 2) == 0) {
      uVar1 = uVar1 | 2;
      *(uint *)(param_1 + 0x28) = uVar1;
      uStackX_8 = CONCAT44(*(float *)(param_1 + 100) - *(float *)(param_1 + 0x30),
                           *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x2c));
      *(uint64_t *)(param_1 + 0xa8) = uStackX_8;
    }
    uStackX_8._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0xa8) >> 0x20);
    uStackX_8._0_4_ = (float)*(uint64_t *)(param_1 + 0xa8);
    fVar2 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
    *(uint *)(param_1 + 0x28) = uVar1 | 4;
    fVar2 = (float)(fVar2 <= 1.1754944e-38) * 1.1754944e-38 + fVar2;
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
    uStackX_8 = CONCAT44(uStackX_8._4_4_ * fVar2,(float)uStackX_8 * fVar2);
    *(uint64_t *)(param_1 + 0xa0) = uStackX_8;
  }
  *param_2 = *(uint64_t *)(param_1 + 0xa0);
  return param_2;
}



uint64_t * FUN_180507bf2(int64_t param_1,uint64_t *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  uint64_t uStackX_20;
  
  if ((param_3 & 2) == 0) {
    param_3 = param_3 | 2;
    *(uint *)(param_1 + 0x28) = param_3;
    uStackX_20 = CONCAT44(*(float *)(param_1 + 100) - *(float *)(param_1 + 0x30),
                          *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x2c));
    *(uint64_t *)(param_1 + 0xa8) = uStackX_20;
  }
  uStackX_20._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0xa8) >> 0x20);
  uStackX_20._0_4_ = (float)*(uint64_t *)(param_1 + 0xa8);
  fVar1 = uStackX_20._4_4_ * uStackX_20._4_4_ + (float)uStackX_20 * (float)uStackX_20;
  *(uint *)(param_1 + 0x28) = param_3 | 4;
  fVar1 = (float)(fVar1 <= 1.1754944e-38) * 1.1754944e-38 + fVar1;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  uStackX_20 = CONCAT44(uStackX_20._4_4_ * fVar1,(float)uStackX_20 * fVar1);
  *(uint64_t *)(param_1 + 0xa0) = uStackX_20;
  *param_2 = *(uint64_t *)(param_1 + 0xa0);
  return param_2;
}



uint64_t * FUN_180507cd4(int64_t param_1,uint64_t *param_2)

{
  *param_2 = *(uint64_t *)(param_1 + 0xa0);
  return param_2;
}



uint64_t * FUN_180507cf0(int64_t param_1,uint64_t *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  uint64_t uStackX_8;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 0x10) == 0) {
      uVar1 = uVar1 | 0x10;
      *(uint *)(param_1 + 0x28) = uVar1;
      uStackX_8 = CONCAT44(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30),
                           *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c));
      *(uint64_t *)(param_1 + 0xc4) = uStackX_8;
    }
    uStackX_8._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0xc4) >> 0x20);
    uStackX_8._0_4_ = (float)*(uint64_t *)(param_1 + 0xc4);
    fVar2 = uStackX_8._4_4_ * uStackX_8._4_4_ + (float)uStackX_8 * (float)uStackX_8;
    fVar2 = (float)(fVar2 <= 1.1754944e-38) * 1.1754944e-38 + fVar2;
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar2 = fVar3 * 0.5 * (3.0 - fVar2 * fVar3 * fVar3);
    uStackX_8 = CONCAT44(uStackX_8._4_4_ * fVar2,(float)uStackX_8 * fVar2);
    *(uint64_t *)(param_1 + 0xbc) = uStackX_8;
    *(uint *)(param_1 + 0x28) = uVar1 | 0x20;
  }
  *param_2 = *(uint64_t *)(param_1 + 0xbc);
  return param_2;
}



uint64_t * FUN_180507d02(int64_t param_1,uint64_t *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  uint64_t uStackX_20;
  
  if ((param_3 & 0x10) == 0) {
    param_3 = param_3 | 0x10;
    *(uint *)(param_1 + 0x28) = param_3;
    uStackX_20 = CONCAT44(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x30),
                          *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c));
    *(uint64_t *)(param_1 + 0xc4) = uStackX_20;
  }
  uStackX_20._4_4_ = (float)((uint64_t)*(uint64_t *)(param_1 + 0xc4) >> 0x20);
  uStackX_20._0_4_ = (float)*(uint64_t *)(param_1 + 0xc4);
  fVar1 = uStackX_20._4_4_ * uStackX_20._4_4_ + (float)uStackX_20 * (float)uStackX_20;
  fVar1 = (float)(fVar1 <= 1.1754944e-38) * 1.1754944e-38 + fVar1;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  uStackX_20 = CONCAT44(uStackX_20._4_4_ * fVar1,(float)uStackX_20 * fVar1);
  *(uint64_t *)(param_1 + 0xbc) = uStackX_20;
  *(uint *)(param_1 + 0x28) = param_3 | 0x20;
  *param_2 = *(uint64_t *)(param_1 + 0xbc);
  return param_2;
}



uint64_t * FUN_180507de4(int64_t param_1,uint64_t *param_2)

{
  *param_2 = *(uint64_t *)(param_1 + 0xbc);
  return param_2;
}



int8_t FUN_180507e00(int64_t param_1)

{
  float fVar1;
  
  param_1 = param_1 + 0x28;
  fVar1 = (float)func_0x000180507ac0();
  if (fVar1 < *(float *)(param_1 + 0x6c) || fVar1 == *(float *)(param_1 + 0x6c)) {
    fVar1 = (float)FUN_180507b40();
    if (fVar1 < 1.5) {
      return 1;
    }
  }
  return 0;
}



uint64_t * FUN_180507e30(int64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  uint64_t uStackX_8;
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [16];
  
  lVar2 = param_1 + 0x28;
  fVar4 = (float)func_0x000180507a40();
  if (*(float *)(lVar2 + 0x68) <= fVar4 && fVar4 != *(float *)(lVar2 + 0x68)) {
    puVar1 = (uint64_t *)FUN_180507cf0(param_1,auStackX_10);
    *param_2 = *puVar1;
    return param_2;
  }
  if (*(char *)(param_1 + 0x1144) != '\0') {
    lVar2 = param_1 + 0x118;
    lVar3 = (int64_t)*(int *)(param_1 + 0x1140) * 0x20;
    if (*(char *)(param_1 + 0x113c) == '\0') {
      lVar2 = *(int64_t *)(param_1 + 0x1118);
    }
    fVar5 = *(float *)(lVar3 + 4 + lVar2) - *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(lVar3 + lVar2) - *(float *)(param_1 + 0x2c);
    fVar6 = fVar5 * fVar5 + fVar4 * fVar4;
    fVar6 = (float)(fVar6 <= 1.1754944e-38) * 1.1754944e-38 + fVar6;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    uStackX_8 = CONCAT44(fVar5 * fVar6,fVar4 * fVar6);
    *param_2 = uStackX_8;
    return param_2;
  }
  puVar1 = (uint64_t *)FUN_180507be0(param_1,auStackX_18);
  *param_2 = *puVar1;
  return param_2;
}



uint64_t * FUN_180507e8b(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t *param_4)

{
  int64_t in_RAX;
  bool in_ZF;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [16];
  uint64_t uStack0000000000000040;
  
  if (in_ZF) {
    in_RAX = *(int64_t *)(in_RAX + 0x1000);
  }
  fVar2 = *(float *)(param_1 + 4 + in_RAX) - *(float *)(param_3 + 0x30);
  fVar1 = *(float *)(param_1 + in_RAX) - *(float *)(param_3 + 0x2c);
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  fVar3 = (float)(fVar3 <= 1.1754944e-38) * 1.1754944e-38 + fVar3;
  auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
  fVar4 = auVar5._0_4_;
  fVar3 = fVar4 * 0.5 * (3.0 - fVar3 * fVar4 * fVar4);
  uStack0000000000000040 = CONCAT44(fVar2 * fVar3,fVar1 * fVar3);
  *param_4 = uStack0000000000000040;
  return param_4;
}



uint64_t *
FUN_180507f5e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)FUN_180507be0(param_3,&stack0x00000050);
  *param_4 = *puVar1;
  return param_4;
}



int64_t FUN_180507fc0(int64_t param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x1000) == 0) {
    FUN_1805d4df0();
    return param_1 + 0x104;
  }
  return param_1 + 0x104;
}





// 函数: void FUN_180508010(int64_t param_1)
void FUN_180508010(int64_t param_1)

{
  uint uVar1;
  void *puVar2;
  int64_t lVar3;
  void *puVar4;
  float fVar5;
  
  puVar4 = &system_error_code;
  puVar2 = &unknown_var_6416_ptr;
  if (*(char *)(param_1 + 0x13bc) != '\0') {
    puVar2 = &unknown_var_6344_ptr;
  }
  fVar5 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x13b0) * 8) -
                 *(int64_t *)(param_1 + 0x13a8)) * 1e-05;
  lVar3 = param_1;
  func_0x000180508000(fVar5,&unknown_var_6496_ptr,&unknown_var_6352_ptr,puVar2,
                      (double)*(float *)(param_1 + 0x13b8),(double)fVar5);
  if (*(char *)(param_1 + 0x13bc) == '\0') {
    *(int8_t *)(param_1 + 0x13bc) = 1;
    uVar1 = *(uint *)(param_1 + 0x1390) << 0xd ^ *(uint *)(param_1 + 0x1390);
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    uVar1 = uVar1 << 5 ^ uVar1;
    *(uint *)(lVar3 + 0x1390) = uVar1;
    *(float *)(lVar3 + 0x13b8) = (float)(uVar1 - 1) * 1.3969839e-10 + 0.4;
    *(uint64_t *)(lVar3 + 0x13a8) =
         *(uint64_t *)(puVar4 + (int64_t)*(int *)(lVar3 + 0x13b0) * 8);
  }
  return;
}





// 函数: void FUN_180508100(int64_t param_1,float param_2,float param_3)
void FUN_180508100(int64_t param_1,float param_2,float param_3)

{
  void *puVar1;
  uint uVar2;
  void *puVar3;
  
  puVar3 = &system_error_code;
  puVar1 = &unknown_var_6416_ptr;
  if (*(char *)(param_1 + 0x13bc) != '\0') {
    puVar1 = &unknown_var_6344_ptr;
  }
  func_0x000180508000(param_1,&unknown_var_6512_ptr,&unknown_var_6432_ptr,(double)param_2,(double)param_3,puVar1,
                      (double)*(float *)(param_1 + 0x13b8),
                      (double)((float)(*(int64_t *)
                                        (&system_error_code + (int64_t)*(int *)(param_1 + 0x13b0) * 8)
                                      - *(int64_t *)(param_1 + 0x13a8)) * 1e-05));
  if (*(char *)(param_1 + 0x13bc) == '\0') {
    *(int8_t *)(param_1 + 0x13bc) = 1;
    uVar2 = *(uint *)(param_1 + 0x1390) << 0xd ^ *(uint *)(param_1 + 0x1390);
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    uVar2 = uVar2 << 5 ^ uVar2;
    *(uint *)(param_1 + 0x1390) = uVar2;
    *(float *)(param_1 + 0x13b8) =
         (float)(uVar2 - 1) * 2.3283064e-10 * (param_3 - param_2) + param_2;
    *(uint64_t *)(param_1 + 0x13a8) =
         *(uint64_t *)(puVar3 + (int64_t)*(int *)(param_1 + 0x13b0) * 8);
  }
  return;
}





// 函数: void FUN_180508220(int64_t param_1)
void FUN_180508220(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t auStackX_8 [4];
  
  auStackX_8[0] = 0xffffffffffffffff;
  FUN_1805d1c80(param_1,auStackX_8,0);
  *(int32_t *)(param_1 + 0x12dc) = 0xffffffff;
  plVar2 = *(int64_t **)(param_1 + 0x198);
  lVar3 = *(int64_t *)(*plVar2 + 0x8d8);
  *(int32_t *)(param_1 + 0x18c) = 0;
  if (-1 < *(int *)(param_1 + 0x12dc)) {
    *(int32_t *)(param_1 + 0x18c) = 1;
    return;
  }
  if (((*(uint *)((int64_t)plVar2 + 0x1484) >> 6 & 1) != 0) && ((int)plVar2[0x295] != 0)) {
    iVar1 = (int)plVar2[0x426];
    if ((-1 < iVar1) &&
       ((iVar1 < *(int *)(lVar3 + 0x52ed94) &&
        (-1 < *(short *)(lVar3 + 0x52dda0 + (int64_t)iVar1 * 2))))) {
      *(int32_t *)(param_1 + 0x18c) = 1;
      *(int *)(param_1 + 0x12dc) = (int)plVar2[0x426];
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180508510(int64_t param_1,short param_2,int param_3,uint64_t param_4)
void FUN_180508510(int64_t param_1,short param_2,int param_3,uint64_t param_4)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t **pplVar10;
  int64_t lVar11;
  int64_t **pplVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int64_t *plStackX_8;
  
  if (*(char *)(param_1 + 0x70c) != '\0') {
    if (*(float *)(param_1 + 0x708) < 1.2) {
      return;
    }
    *(float *)(param_1 + 0x708) = *(float *)(param_1 + 0x708) - 1.2;
  }
  lVar2 = *(int64_t *)(param_1 + 0x6d8);
  pfVar13 = (float *)(lVar2 + 0x8e4);
  pplVar12 = (int64_t **)0x0;
  if (param_2 < 0) {
    if (((*(int64_t **)(param_1 + 0x6e8) != (int64_t *)0x0) &&
        (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xd8))(), cVar7 != '\0')) &&
       (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0')) {
      (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x68))();
    }
  }
  else {
    plStackX_8 = (int64_t *)0x0;
    if (((*(uint *)(param_1 + 0x56c) & 0x800) != 0) ||
       (fVar15 = *(float *)(render_system_data_config + 0x1bc) - *(float *)(lVar2 + 0x8e8),
       fVar16 = *(float *)(render_system_data_config + 0x1b8) - *pfVar13,
       fVar14 = *(float *)(render_system_data_config + 0x1c0) - *(float *)(lVar2 + 0x8ec), pplVar10 = pplVar12,
       fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14 <= 100.0)) {
      pplVar10 = &plStackX_8;
    }
    cVar7 = FUN_180544200(*(uint64_t *)(param_1 + 0x6d8),(int)param_2,param_4,pfVar13,pplVar10,
                          *(int32_t *)(param_1 + 0x648));
    plVar6 = plStackX_8;
    if (cVar7 != '\0') {
      if (((*(int64_t **)(param_1 + 0x6e8) != (int64_t *)0x0) &&
          (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0xd8))(), cVar7 != '\0')) &&
         (cVar7 = (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x80))(), cVar7 != '\0')) {
        (**(code **)(**(int64_t **)(param_1 + 0x6e8) + 0x68))();
      }
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      plVar3 = *(int64_t **)(param_1 + 0x6e8);
      *(int64_t **)(param_1 + 0x6e8) = plVar6;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))();
      }
    }
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
  }
  if (((param_3 != 0) && ((system_status_flag - 2U & 0xfffffffc) == 0)) &&
     ((system_status_flag != 4 &&
      ((iVar8 = *(int *)(*(int64_t *)(param_1 + 0x6d8) + 0x8b4), -1 < iVar8 &&
       (iVar8 = *(int *)(*(int64_t *)((int64_t)iVar8 * 0x60 + 0x48 + render_system_config) +
                        (int64_t)param_2 * 4), iVar8 != -1)))))) {
    pplVar10 = pplVar12;
    if (param_3 == 1) {
      pplVar10 = *(int64_t ***)(param_1 + 0x8e8);
    }
    fVar14 = *(float *)(*render_system_config + 4 + (int64_t)iVar8 * 0x14);
    uVar9 = FUN_18055caa0(&system_data_25a0);
    uVar1 = *(int32_t *)(param_1 + 0x10);
    cVar7 = SystemBufferProcessor(uVar9,0,&system_param1_ptr);
    if ((((cVar7 != '\0') && (cVar7 = SystemBufferProcessor(uVar9,0x15,&unknown_var_3472_ptr), cVar7 != '\0')) &&
        (cVar7 = SystemBufferProcessor(uVar9,uVar1,&unknown_var_3424_ptr), cVar7 != '\0')) &&
       (cVar7 = SystemBufferProcessor(uVar9,(int)param_2,&system_data_bcd0), cVar7 != '\0')) {
      FUN_1805aea10(uVar9,param_4);
    }
    render_system_config = render_system_config & 0xffffffff00000000;
    iVar8 = (int)(render_system_config - render_system_config >> 3);
    lVar11 = render_system_config;
    if (0 < iVar8) {
      do {
        lVar4 = *(int64_t *)(lVar11 + (int64_t)pplVar12 * 8);
        if (((lVar4 != 0) &&
            (pplVar5 = *(int64_t ***)(lVar4 + 0x58f8), *(char *)((int64_t)pplVar5 + 0x1c) != '\0')
            ) && (((pplVar5 != pplVar10 &&
                   ((pplVar5 != (int64_t **)0x0 && (*(char *)((int64_t)pplVar5 + 0x27) != '\0'))))
                  && (fVar16 = *(float *)(lVar2 + 0x8e8) - *(float *)(lVar4 + 0x5904),
                     fVar17 = *pfVar13 - *(float *)(lVar4 + 0x5900),
                     fVar15 = *(float *)(lVar2 + 0x8ec) - *(float *)(lVar4 + 0x5908),
                     fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15 < fVar14 * fVar14)))) {
          FUN_1805b59d0(lVar4,0x180c95578);
          lVar11 = render_system_config;
        }
        pplVar12 = (int64_t **)((int64_t)pplVar12 + 1);
      } while ((int64_t)pplVar12 < (int64_t)iVar8);
    }
    if (render_system_config != 0) {
      FUN_180567f30(render_system_config,0x180c95578);
    }
    render_system_config = 0;
                    // WARNING: Subroutine does not return
    memset(render_system_config,0,(int64_t)(render_system_config >> 3));
  }
  return;
}



int FUN_180508920(int64_t param_1,uint64_t param_2,uint64_t *param_3,int8_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fStackX_8;
  float fStackX_c;
  int8_t auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  
  iVar6 = 0;
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x8f8) + 0x9e4);
  piVar5 = (int *)(*(int64_t *)(param_1 + 0x8f8) + 0xf8);
  lVar7 = 0;
  do {
    if (((0 < piVar5[-0x30]) &&
        ((((uVar2 = *(uint64_t *)((int64_t)*piVar5 * 0xa0 + 0x50 + *(int64_t *)(piVar5 + -8)),
           (uVar2 >> 9 & 1) == 0 || (0 < (short)piVar5[-0x3a])) && ((uVar2 >> 0x1c & 1) != 0)) &&
         ((lVar7 != iVar1 && (0 < (short)piVar5[-0x3a])))))) &&
       (-1 < *(int *)(*(int64_t *)(piVar5 + 2) + 0x16c))) {
      lVar3 = *(int64_t *)(piVar5 + -0x2c);
      FUN_1805ec350(*(int64_t *)(piVar5 + 2),&fStack_c8,0,*(uint64_t *)(param_1 + 0x658),
                    *(uint64_t *)(param_1 + 0x658),0,1);
      fStackX_c = (float)((uint64_t)*param_3 >> 0x20);
      fStackX_8 = (float)*param_3;
      fVar11 = *(float *)(lVar3 + 0x6c) * fStack_b8 + fStack_c8 * *(float *)(lVar3 + 0x68) +
               *(float *)(lVar3 + 0x70) * fStack_a8;
      fVar12 = *(float *)(lVar3 + 0x6c) * fStack_b4 + fStack_c4 * *(float *)(lVar3 + 0x68) +
               *(float *)(lVar3 + 0x70) * fStack_a4;
      fVar8 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar13 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
      fVar8 = fVar12 * fVar12 + fVar11 * fVar11;
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
      if ((fVar12 * fVar8 * fVar13 * fStackX_c + fVar8 * fVar11 * fVar13 * fStackX_8 < -0.3) &&
         (cVar4 = FUN_180658a60(lVar3,&fStack_c8,param_2,auStack_d8,param_4), cVar4 != '\0')) {
        return iVar6;
      }
    }
    iVar6 = iVar6 + 1;
    lVar7 = lVar7 + 1;
    piVar5 = piVar5 + 0x7e;
    if (3 < lVar7) {
      return -1;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180508bd0(int64_t param_1,char param_2)
void FUN_180508bd0(int64_t param_1,char param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  if (*(char *)(param_1 + 0x604) != param_2) {
    *(char *)(param_1 + 0x604) = param_2;
    if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
      iVar2 = _Mtx_lock(0x180c95528);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      FUN_1805ae1e0(0x180c95578,*(int32_t *)(param_1 + 0x10),*(int8_t *)(param_1 + 0x604));
      render_system_config = render_system_config & 0xffffffff00000000;
      iVar2 = (int)(render_system_config - render_system_config >> 3);
      if (0 < iVar2) {
        lVar4 = 0;
        lVar3 = render_system_config;
        do {
          lVar1 = *(int64_t *)(lVar3 + lVar4 * 8);
          if ((lVar1 != 0) && (*(char *)(*(int64_t *)(lVar1 + 0x58f8) + 0x1c) != '\0')) {
            FUN_1805b59d0(lVar1,0x180c95578);
            lVar3 = render_system_config;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar2);
      }
      if (render_system_config != 0) {
        FUN_180567f30(render_system_config,0x180c95578);
      }
      render_system_config = 0;
                    // WARNING: Subroutine does not return
      memset(render_system_config,0,(int64_t)(render_system_config >> 3));
    }
    *(char *)(*(int64_t *)(param_1 + 0x738) + 0xf4) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180508c19(void)
void FUN_180508c19(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t unaff_RDI;
  
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  FUN_1805ae1e0(0x180c95578,*(int32_t *)(unaff_RDI + 0x10),*(int8_t *)(unaff_RDI + 0x604));
  render_system_config = render_system_config & 0xffffffff00000000;
  iVar2 = (int)(render_system_config - render_system_config >> 3);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = render_system_config;
    do {
      lVar1 = *(int64_t *)(lVar3 + lVar4 * 8);
      if ((lVar1 != 0) && (*(char *)(*(int64_t *)(lVar1 + 0x58f8) + 0x1c) != '\0')) {
        FUN_1805b59d0(lVar1,0x180c95578);
        lVar3 = render_system_config;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if (render_system_config != 0) {
    FUN_180567f30(render_system_config,0x180c95578);
  }
  render_system_config = 0;
                    // WARNING: Subroutine does not return
  memset(render_system_config,0,(int64_t)(render_system_config >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180508c6d(uint64_t param_1,int64_t param_2)
void FUN_180508c6d(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RSI;
  
  lVar2 = 0;
  do {
    lVar1 = *(int64_t *)(param_2 + lVar2 * 8);
    if ((lVar1 != 0) && (*(char *)(*(int64_t *)(lVar1 + 0x58f8) + 0x1c) != '\0')) {
      FUN_1805b59d0(lVar1,0x180c95578);
      param_2 = render_system_config;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < unaff_RSI);
  if (render_system_config != 0) {
    FUN_180567f30(render_system_config,0x180c95578);
  }
  render_system_config = 0;
                    // WARNING: Subroutine does not return
  memset(render_system_config,0,(int64_t)(render_system_config >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180508caa(void)
void FUN_180508caa(void)

{
  if (render_system_config != 0) {
    FUN_180567f30(render_system_config,0x180c95578);
  }
  render_system_config = 0;
                    // WARNING: Subroutine does not return
  memset(render_system_config,0,(int64_t)(render_system_config >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180508cb9(void)
void FUN_180508cb9(void)

{
  FUN_180567f30(render_system_config,0x180c95578);
  render_system_config = 0;
                    // WARNING: Subroutine does not return
  memset(render_system_config,0,(int64_t)(render_system_config >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



