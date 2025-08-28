#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part052.c - 6 个函数

// 函数: void FUN_1803dc030(int64_t *param_1)
void FUN_1803dc030(int64_t *param_1)

{
  int64_t lVar1;
  
  for (lVar1 = *param_1; lVar1 != param_1[1]; lVar1 = lVar1 + 0x38) {
    if (*(int64_t *)(lVar1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1803dc0a0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int8_t *)(param_1 + 2) = *(int8_t *)(param_2 + 2);
  *(int8_t *)((int64_t)param_1 + 0x11) = *(int8_t *)((int64_t)param_2 + 0x11);
  lVar3 = (int64_t)(param_2[4] - param_2[3]) >> 3;
  uVar1 = *(uint *)(param_2 + 6);
  *(uint *)(param_1 + 6) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  param_1[3] = lVar2;
  param_1[4] = lVar2;
  param_1[5] = lVar2 + lVar3 * 8;
  lVar3 = param_1[3];
  lVar2 = param_2[3];
  if (lVar2 != param_2[4]) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,lVar2,param_2[4] - lVar2);
  }
  param_1[4] = lVar3;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803dc170(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803dc170(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int32_t *puVar9;
  int64_t lVar10;
  
  puVar9 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar10 = ((int64_t)puVar9 - (int64_t)puVar5) / 0x38;
  puVar4 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1803dc1f0;
  }
  puVar4 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x38,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar9 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_1803dc1f0:
  puVar7 = puVar4;
  if (puVar5 != puVar9) {
    lVar8 = (int64_t)puVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 0xc;
    do {
      *puVar7 = *(uint64_t *)(puVar5 + -0xc);
      *(uint64_t *)(lVar8 + -0x28 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -10);
      *(int8_t *)(lVar8 + -0x20 + (int64_t)puVar5) = *(int8_t *)(puVar5 + -8);
      *(int8_t *)(lVar8 + -0x1f + (int64_t)puVar5) = *(int8_t *)((int64_t)puVar5 + -0x1f);
      puVar6 = (uint64_t *)((int64_t)puVar5 + lVar8 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar8 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar8 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar8 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar8 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar8 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar8 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar8 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar8 + (int64_t)puVar5);
      *(int32_t *)(lVar8 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 7;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 0xe;
    } while (puVar1 != puVar9);
  }
  FUN_1803dc0a0(puVar7,param_2);
  lVar8 = *param_1;
  if (lVar8 != param_1[1]) {
    do {
      if (*(int64_t *)(lVar8 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lVar8 = lVar8 + 0x38;
    } while (lVar8 != param_1[1]);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar7 + 7);
    param_1[2] = (int64_t)(puVar4 + lVar10 * 7);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(lVar8);
}



uint64_t * FUN_1803dc330(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &memory_allocator_3592_ptr;
  param_1[9] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint64_t *)((int64_t)param_1 + 0xd4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xdc) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0xe4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xec) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0xf4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xfc) = 0x7f7fffff00000000;
  *(uint64_t *)((int64_t)param_1 + 0x184) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x104) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x10c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x114) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x11c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x124) = 0;
  *(uint64_t *)((int64_t)param_1 + 300) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x134) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x13c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x144) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x14c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x154) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x15c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x164) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x16c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x174) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x17c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x18c) = 0xffffffff;
  *(int32_t *)(param_1 + 10) = 0xffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 8) = 0x1010101;
  return param_1;
}






// 函数: void FUN_1803dc460(uint64_t *param_1)
void FUN_1803dc460(uint64_t *param_1)

{
  *param_1 = &memory_allocator_3592_ptr;
  if ((int64_t *)param_1[0x13] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x13] + 0x38))();
  }
  if ((int64_t *)param_1[9] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[9] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}






// 函数: void FUN_1803dc4c0(int64_t param_1)
void FUN_1803dc4c0(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  int32_t extraout_XMM0_Da;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  pfVar5 = (float *)(param_1 + 0x58);
  cVar4 = FUN_1801be0f0();
  if (cVar4 == '\0') {
    FUN_180085020(extraout_XMM0_Da,&fStack_38);
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    *pfVar5 = fVar1 * fVar6;
    pfVar5[1] = fVar2 * fVar6;
    pfVar5[2] = fVar3 * fVar6;
    fVar1 = *(float *)(param_1 + 0x6c);
    fVar2 = *(float *)(param_1 + 0x68);
    fVar3 = *(float *)(param_1 + 0x70);
    fVar6 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    *(float *)(param_1 + 0x68) = fVar2 * fVar6;
    *(float *)(param_1 + 0x6c) = fVar1 * fVar6;
    *(float *)(param_1 + 0x70) = fVar3 * fVar6;
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x7c);
    fVar3 = *(float *)(param_1 + 0x80);
    fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    *(float *)(param_1 + 0x78) = fVar1 * fVar6;
    *(float *)(param_1 + 0x7c) = fVar2 * fVar6;
    *(float *)(param_1 + 0x80) = fVar3 * fVar6;
    FUN_180084ae0();
    *pfVar5 = fStack_38 * *pfVar5;
    pfVar5[1] = fStack_38 * pfVar5[1];
    pfVar5[2] = fStack_38 * pfVar5[2];
    pfVar5[4] = fStack_34 * pfVar5[4];
    pfVar5[5] = fStack_34 * pfVar5[5];
    pfVar5[6] = fStack_34 * pfVar5[6];
    pfVar5[8] = fStack_30 * pfVar5[8];
    pfVar5[9] = fStack_30 * pfVar5[9];
    pfVar5[10] = fStack_30 * pfVar5[10];
  }
  return;
}






// 函数: void FUN_1803dc4d8(float *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1803dc4d8(float *param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fStackX_20;
  float fStackX_24;
  
  FUN_180085020(param_1,&fStackX_20);
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar4;
  param_1[2] = fVar3 * fVar4;
  fVar1 = *(float *)(param_3 + 0x6c);
  fVar2 = *(float *)(param_3 + 0x68);
  fVar3 = *(float *)(param_3 + 0x70);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  *(float *)(param_3 + 0x68) = fVar2 * fVar4;
  *(float *)(param_3 + 0x6c) = fVar1 * fVar4;
  *(float *)(param_3 + 0x70) = fVar3 * fVar4;
  fVar1 = *(float *)(param_3 + 0x78);
  fVar2 = *(float *)(param_3 + 0x7c);
  fVar3 = *(float *)(param_3 + 0x80);
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar5 = auVar6._0_4_;
  fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
  *(float *)(param_3 + 0x78) = fVar1 * fVar4;
  *(float *)(param_3 + 0x7c) = fVar2 * fVar4;
  *(float *)(param_3 + 0x80) = fVar3 * fVar4;
  FUN_180084ae0();
  *param_1 = fStackX_20 * *param_1;
  param_1[1] = fStackX_20 * param_1[1];
  param_1[2] = fStackX_20 * param_1[2];
  param_1[4] = fStackX_24 * param_1[4];
  param_1[5] = fStackX_24 * param_1[5];
  param_1[6] = fStackX_24 * param_1[6];
  param_1[8] = param_5 * param_1[8];
  param_1[9] = param_5 * param_1[9];
  param_1[10] = param_5 * param_1[10];
  return;
}






// 函数: void FUN_1803dc6e0(void)
void FUN_1803dc6e0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




