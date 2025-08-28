#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part359.c - 11 个函数

// 函数: void FUN_1804630a0(int param_1,int param_2,uint64_t *param_3)
void FUN_1804630a0(int param_1,int param_2,uint64_t *param_3)

{
  int32_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  float fStack_2c;
  
  param_3 = (uint64_t *)*param_3;
  lVar5 = (int64_t)param_1;
  if (lVar5 < param_2) {
    lVar7 = param_2 - lVar5;
    lVar5 = lVar5 * 0x18;
    do {
      iVar4 = *(int *)*param_3 * (param_1 + 1);
      iVar3 = *(int *)param_3[1];
      if (iVar4 < *(int *)param_3[1]) {
        iVar3 = iVar4;
      }
      iVar4 = *(int *)*param_3 * param_1;
      if (iVar4 < iVar3) {
        do {
          iVar6 = iVar4 / 6 + (iVar4 >> 0x1f) +
                  (int)(((int64_t)iVar4 / 6 + ((int64_t)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
          puVar1 = (int32_t *)(((int64_t *)param_3[2])[3] + (int64_t)iVar6 * 0x10);
          uStack_38 = *puVar1;
          uStack_34 = puVar1[1];
          uStack_30 = puVar1[2];
          fStack_2c = (float)puVar1[3];
          lVar2 = *(int64_t *)param_3[2];
          LOCK();
          *(uint64_t *)(lVar5 + 8 + lVar2) = 0;
          UNLOCK();
          *(int32_t *)(lVar5 + 0x10 + lVar2) = 0;
          FUN_180461c10((int64_t *)param_3[2],(int)fStack_2c,*(uint64_t *)param_3[3],
                        *(uint64_t *)param_3[4],&uStack_38,iVar4 + iVar6 * -6,
                        *(int32_t *)param_3[5],*(int64_t *)param_3[2] + (int64_t)param_1 * 0x18
                       );
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      lVar5 = lVar5 + 0x18;
      lVar7 = lVar7 + -1;
      param_1 = param_1 + 1;
    } while (lVar7 != 0);
  }
  return;
}





// 函数: void FUN_1804630bc(int param_1)
void FUN_1804630bc(int param_1)

{
  int32_t *puVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t in_RAX;
  int iVar5;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar6;
  uint64_t unaff_RSI;
  int64_t lVar7;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t *unaff_R14;
  uint64_t unaff_R15;
  int iStack0000000000000028;
  int32_t uStack0000000000000030;
  int64_t lStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  float fStack000000000000004c;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  lVar6 = unaff_RBP - in_RAX;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R13;
  lVar7 = in_RAX * 0x18;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  do {
    iVar4 = *(int *)*unaff_R14 * (param_1 + 1);
    iVar3 = *(int *)unaff_R14[1];
    if (iVar4 < *(int *)unaff_R14[1]) {
      iVar3 = iVar4;
    }
    iVar4 = *(int *)*unaff_R14 * param_1;
    if (iVar4 < iVar3) {
      do {
        iVar5 = iVar4 / 6 + (iVar4 >> 0x1f) +
                (int)(((int64_t)iVar4 / 6 + ((int64_t)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
        iStack0000000000000028 = iVar4 + iVar5 * -6;
        puVar1 = (int32_t *)(((int64_t *)unaff_R14[2])[3] + (int64_t)iVar5 * 0x10);
        uStack0000000000000040 = *puVar1;
        uStack0000000000000044 = puVar1[1];
        uStack0000000000000048 = puVar1[2];
        fStack000000000000004c = (float)puVar1[3];
        lVar2 = *(int64_t *)unaff_R14[2];
        LOCK();
        *(uint64_t *)(lVar7 + 8 + lVar2) = 0;
        UNLOCK();
        *(int32_t *)(lVar7 + 0x10 + lVar2) = 0;
        lStack0000000000000038 = *(int64_t *)unaff_R14[2] + (int64_t)param_1 * 0x18;
        uStack0000000000000030 = *(int32_t *)unaff_R14[5];
        FUN_180461c10((int64_t *)unaff_R14[2],(int)fStack000000000000004c,
                      *(uint64_t *)unaff_R14[3],*(uint64_t *)unaff_R14[4],&stack0x00000040);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    lVar7 = lVar7 + 0x18;
    lVar6 = lVar6 + -1;
    param_1 = param_1 + 1;
  } while (lVar6 != 0);
  return;
}





// 函数: void FUN_1804631e6(void)
void FUN_1804631e6(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1804631f0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c07d40;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180463320(int param_1,int param_2,int64_t *param_3)
void FUN_180463320(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_78;
  int iStack_74;
  int32_t uStack_70;
  int16_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t uStack_54;
  int32_t uStack_50;
  uint64_t uStack_4c;
  int16_t uStack_44;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int8_t uStack_24;
  int64_t lStack_10;
  
  param_3 = (int64_t *)*param_3;
  for (lVar3 = (int64_t)param_1; lVar3 < param_2; lVar3 = lVar3 + 1) {
    lVar1 = *(int64_t *)(*(int64_t *)(*param_3 + 0x88) + lVar3 * 8);
    if ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb) {
      iStack_74 = *(int *)(lVar1 + 0x2b8);
      lStack_10 = *(int64_t *)(lVar1 + 0x28) + 0x130;
      uStack_78 = 0;
      uStack_6c = 0xff00;
      uStack_68 = 0;
      uStack_60 = 0xffffffffffffffff;
      lVar2 = *(int64_t *)param_3[1];
      uStack_58 = 0xffffffff;
      uStack_54 = 0xff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0;
      uStack_44 = 0x400;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_70 = 1;
      if (*(int *)(*(int64_t *)(lVar2 + 0x98f8) + (int64_t)iStack_74 * 4) != 0) {
        if (*(int64_t *)(lVar1 + 0x260) != 0) {
          FUN_1801bcdd0(*(int64_t *)(lVar1 + 0x260),lVar1 + 0x70,*(int64_t *)param_3[2] + 0xf0,
                        *(int32_t *)(*(int64_t *)param_3[3] + 0x8220));
          lVar2 = *(int64_t *)param_3[1];
        }
        FUN_1802e7550(lVar1,lVar2,&uStack_78);
      }
    }
  }
  return;
}





// 函数: void FUN_180463345(void)
void FUN_180463345(void)

{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int32_t uStack0000000000000028;
  int16_t uStack000000000000002c;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int8_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  uint64_t uStack000000000000004c;
  int16_t uStack0000000000000054;
  uint64_t uStack0000000000000058;
  int32_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int64_t lStack0000000000000088;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R14;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(*unaff_RSI + 0x88) + unaff_RDI * 8);
    if ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb) {
      lStack0000000000000088 = *(int64_t *)(lVar1 + 0x28) + 0x130;
      uStack000000000000002c = 0xff00;
      uStack0000000000000030 = 0;
      uStack0000000000000038 = 0xffffffffffffffff;
      lVar2 = *(int64_t *)unaff_RSI[1];
      uStack0000000000000040 = 0xffffffff;
      uStack0000000000000044 = 0xff;
      uStack0000000000000048 = 0xffffffff;
      uStack000000000000004c = 0;
      uStack0000000000000054 = 0x400;
      uStack0000000000000058 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000074 = 0;
      uStack0000000000000028 = 1;
      if (*(int *)(*(int64_t *)(lVar2 + 0x98f8) + (int64_t)*(int *)(lVar1 + 0x2b8) * 4) != 0) {
        if (*(int64_t *)(lVar1 + 0x260) != 0) {
          FUN_1801bcdd0(*(int64_t *)(lVar1 + 0x260),lVar1 + 0x70,*(int64_t *)unaff_RSI[2] + 0xf0,
                        *(int32_t *)(*(int64_t *)unaff_RSI[3] + 0x8220),0);
          lVar2 = *(int64_t *)unaff_RSI[1];
        }
        FUN_1802e7550(lVar1,lVar2,&stack0x00000020);
      }
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RBP);
  return;
}





// 函数: void FUN_18046345f(void)
void FUN_18046345f(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180463480(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c07d00;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_180463560(int param_1,int param_2,int64_t *param_3)
void FUN_180463560(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uStack_78;
  int iStack_74;
  int32_t uStack_70;
  int16_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t uStack_54;
  int32_t uStack_50;
  uint64_t uStack_4c;
  int16_t uStack_44;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  int8_t uStack_24;
  int64_t lStack_10;
  
  param_3 = (int64_t *)*param_3;
  for (lVar3 = (int64_t)param_1; lVar3 < param_2; lVar3 = lVar3 + 1) {
    lVar1 = *(int64_t *)(*(int64_t *)(*param_3 + 0x88) + lVar3 * 8);
    if ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb) {
      iStack_74 = *(int *)(lVar1 + 0x2b8);
      lStack_10 = *(int64_t *)(lVar1 + 0x28) + 0x130;
      uStack_78 = 0;
      uStack_6c = 0xff00;
      uStack_68 = 0;
      uStack_60 = 0xffffffffffffffff;
      lVar2 = *(int64_t *)param_3[1];
      uStack_58 = 0xffffffff;
      uStack_54 = 0xff;
      uStack_50 = 0xffffffff;
      uStack_4c = 0;
      uStack_44 = 0x400;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_70 = 1;
      if (*(int *)(*(int64_t *)(lVar2 + 0x98f8) + (int64_t)iStack_74 * 4) != 0) {
        if (*(int64_t *)(lVar1 + 0x260) != 0) {
          FUN_1801bcce0(*(int64_t *)(lVar1 + 0x260),lVar1 + 0x70,*(int64_t *)param_3[2] + 0xf0,
                        *(int32_t *)(*(int64_t *)param_3[3] + 0x8220));
          lVar2 = *(int64_t *)param_3[1];
        }
        FUN_1802e7550(lVar1,lVar2,&uStack_78);
      }
    }
  }
  return;
}





// 函数: void FUN_180463585(void)
void FUN_180463585(void)

{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t unaff_R14;
  int32_t uStack0000000000000028;
  int16_t uStack000000000000002c;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int8_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  uint64_t uStack000000000000004c;
  int16_t uStack0000000000000054;
  uint64_t uStack0000000000000058;
  int32_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  int32_t uStack0000000000000070;
  int8_t uStack0000000000000074;
  int64_t lStack0000000000000088;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_R14;
  do {
    lVar1 = *(int64_t *)(*(int64_t *)(*unaff_RSI + 0x88) + unaff_RDI * 8);
    if ((*(byte *)(lVar1 + 0x2e8) & 0xb) == 0xb) {
      lStack0000000000000088 = *(int64_t *)(lVar1 + 0x28) + 0x130;
      uStack000000000000002c = 0xff00;
      uStack0000000000000030 = 0;
      uStack0000000000000038 = 0xffffffffffffffff;
      lVar2 = *(int64_t *)unaff_RSI[1];
      uStack0000000000000040 = 0xffffffff;
      uStack0000000000000044 = 0xff;
      uStack0000000000000048 = 0xffffffff;
      uStack000000000000004c = 0;
      uStack0000000000000054 = 0x400;
      uStack0000000000000058 = 0;
      uStack0000000000000060 = 0;
      uStack0000000000000068 = 0;
      uStack0000000000000070 = 0;
      uStack0000000000000074 = 0;
      uStack0000000000000028 = 1;
      if (*(int *)(*(int64_t *)(lVar2 + 0x98f8) + (int64_t)*(int *)(lVar1 + 0x2b8) * 4) != 0) {
        if (*(int64_t *)(lVar1 + 0x260) != 0) {
          FUN_1801bcce0(*(int64_t *)(lVar1 + 0x260),lVar1 + 0x70,*(int64_t *)unaff_RSI[2] + 0xf0,
                        *(int32_t *)(*(int64_t *)unaff_RSI[3] + 0x8220),0);
          lVar2 = *(int64_t *)unaff_RSI[1];
        }
        FUN_1802e7550(lVar1,lVar2,&stack0x00000020);
      }
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RBP);
  return;
}





// 函数: void FUN_18046369f(void)
void FUN_18046369f(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1804636c0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c07cc0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}





// 函数: void FUN_1804637a0(int64_t param_1,int64_t param_2)
void FUN_1804637a0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x30);
  uVar2 = (int64_t)(int)plVar1[2] + 7U & 0xfffffffffffffff8;
  *(int *)(plVar1 + 2) = (int)uVar2 + ((int)param_2 + 1) * 8;
                    // WARNING: Subroutine does not return
  memset(*plVar1 + uVar2,0,param_2 * 8);
}



float * FUN_180463870(float *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int8_t auStack_108 [240];
  
  fVar7 = param_2[0xc] - param_3[0xc];
  fVar8 = param_2[0xd] - param_3[0xd];
  fVar9 = param_2[0xe] - param_3[0xe];
  fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
  if (fVar6 < 0.001) {
    uVar1 = *(uint64_t *)(param_2 + 2);
    uVar2 = *(uint64_t *)(param_2 + 4);
    uVar3 = *(uint64_t *)(param_2 + 6);
    *(uint64_t *)param_1 = *(uint64_t *)param_2;
    *(uint64_t *)(param_1 + 2) = uVar1;
    uVar1 = *(uint64_t *)(param_2 + 8);
    uVar4 = *(uint64_t *)(param_2 + 10);
    *(uint64_t *)(param_1 + 4) = uVar2;
    *(uint64_t *)(param_1 + 6) = uVar3;
    uVar2 = *(uint64_t *)(param_2 + 0xc);
    uVar3 = *(uint64_t *)(param_2 + 0xe);
    *(uint64_t *)(param_1 + 8) = uVar1;
    *(uint64_t *)(param_1 + 10) = uVar4;
    *(uint64_t *)(param_1 + 0xc) = uVar2;
    *(uint64_t *)(param_1 + 0xe) = uVar3;
    return param_1;
  }
  fVar6 = ((param_4[1] - param_3[0xd]) * fVar8 + (*param_4 - param_3[0xc]) * fVar7 +
          (param_4[2] - param_3[0xe]) * fVar9) / fVar6;
  fVar7 = 0.0;
  if ((0.0 <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
    fVar7 = 1.0;
  }
  fVar7 = 1.0 - fVar7;
  uStack_168 = 0x3f800000;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_140 = 0x3f800000;
  uStack_158 = 0x3f80000000000000;
  uStack_150 = 0;
  uStack_118 = 0;
  uStack_110 = 0x3f80000000000000;
  if (param_5 == 0) {
    puVar5 = (uint64_t *)FUN_1804649e0(auStack_108,0,fVar6,fVar7);
  }
  else if (param_5 == 2) {
    puVar5 = (uint64_t *)FUN_180463cd0(auStack_108,0,fVar6,fVar7);
  }
  else {
    if (param_5 != 1) goto LAB_180463a3e;
    puVar5 = (uint64_t *)FUN_1804643c0(auStack_108,0,fVar6,fVar7);
  }
  uStack_168 = *puVar5;
  uStack_160 = puVar5[1];
  uStack_158 = puVar5[2];
  uStack_150 = puVar5[3];
  uStack_148 = puVar5[4];
  uStack_140 = puVar5[5];
  uStack_118 = puVar5[6];
  uStack_110 = puVar5[7];
LAB_180463a3e:
  fVar9 = 1.0 - fVar7;
  fVar6 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]) * fVar7 +
          SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]) * fVar9;
  fVar8 = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]) * fVar9
          + SQRT(param_3[4] * param_3[4] + param_3[5] * param_3[5] + param_3[6] * param_3[6]) *
            fVar7;
  fVar7 = SQRT(param_2[8] * param_2[8] + param_2[9] * param_2[9] + param_2[10] * param_2[10]) *
          fVar9 + SQRT(param_3[8] * param_3[8] + param_3[9] * param_3[9] + param_3[10] * param_3[10]
                      ) * fVar7;
  *param_1 = (float)uStack_168 * fVar6;
  param_1[1] = uStack_168._4_4_ * fVar6;
  param_1[2] = (float)uStack_160 * fVar6;
  param_1[3] = uStack_160._4_4_;
  param_1[4] = (float)uStack_158 * fVar8;
  param_1[5] = uStack_158._4_4_ * fVar8;
  param_1[6] = (float)uStack_150 * fVar8;
  param_1[7] = uStack_150._4_4_;
  param_1[8] = (float)uStack_148 * fVar7;
  param_1[9] = uStack_148._4_4_ * fVar7;
  param_1[10] = (float)uStack_140 * fVar7;
  param_1[0xb] = uStack_140._4_4_;
  *(uint64_t *)(param_1 + 0xc) = uStack_118;
  *(uint64_t *)(param_1 + 0xe) = uStack_110;
  return param_1;
}





// 函数: void FUN_180463941(float param_1,float param_2,float param_3,float param_4)
void FUN_180463941(float param_1,float param_2,float param_3,float param_4)

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
  int iVar15;
  uint64_t *puVar16;
  float *unaff_RBX;
  int64_t unaff_RBP;
  float *unaff_RSI;
  float *unaff_RDI;
  float fVar17;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar18;
  float fVar19;
  float unaff_XMM8_Da;
  float fVar20;
  uint64_t uStackX_20;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  uint64_t uStack0000000000000070;
  uint64_t uStack0000000000000078;
  
  param_4 = (param_3 * in_XMM5_Da + param_1 * in_XMM4_Da + param_2 * unaff_XMM6_Da) / param_4;
  fVar18 = 0.0;
  if ((0.0 <= param_4) && (fVar18 = param_4, unaff_XMM8_Da <= param_4)) {
    fVar18 = unaff_XMM8_Da;
  }
  iVar15 = *(int *)(unaff_RBP + 0xb0);
  fVar18 = unaff_XMM8_Da - fVar18;
  uStackX_20 = 0x3f800000;
  _fStack0000000000000028 = 0;
  _fStack0000000000000040 = 0;
  _fStack0000000000000048 = 0x3f800000;
  *(float *)(unaff_RBP + 0x98) = fVar18;
  _fStack0000000000000030 = 0x3f80000000000000;
  _fStack0000000000000038 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000078 = 0x3f80000000000000;
  if (iVar15 == 0) {
    puVar16 = (uint64_t *)FUN_1804649e0(unaff_RBP + -0x80,0,param_4,fVar18);
  }
  else if (iVar15 == 2) {
    puVar16 = (uint64_t *)FUN_180463cd0(unaff_RBP + -0x80,0,param_4,fVar18);
  }
  else {
    if (iVar15 != 1) goto LAB_180463a3e;
    puVar16 = (uint64_t *)FUN_1804643c0(unaff_RBP + -0x80,0,param_4,fVar18);
  }
  uStackX_20 = *puVar16;
  _fStack0000000000000028 = puVar16[1];
  _fStack0000000000000030 = puVar16[2];
  _fStack0000000000000038 = puVar16[3];
  _fStack0000000000000040 = puVar16[4];
  _fStack0000000000000048 = puVar16[5];
  uStack0000000000000070 = puVar16[6];
  uStack0000000000000078 = puVar16[7];
LAB_180463a3e:
  fVar1 = unaff_RBX[1];
  fVar17 = *unaff_RBX;
  fVar19 = unaff_RDI[1];
  fVar20 = *unaff_RDI;
  fVar2 = unaff_RBX[2];
  fVar3 = unaff_RDI[2];
  fVar4 = unaff_RBX[5];
  fVar5 = unaff_RDI[4];
  fVar6 = unaff_RBX[4];
  fVar7 = unaff_RDI[5];
  fVar8 = unaff_RBX[6];
  fVar9 = unaff_RBX[9];
  fVar10 = unaff_RBX[10];
  fVar11 = unaff_RDI[9];
  fVar12 = unaff_RDI[10];
  fVar13 = *(float *)(unaff_RBP + 0x98);
  *(float *)(unaff_RBP + 0xa0) = unaff_XMM8_Da - fVar18;
  fVar18 = *(float *)(unaff_RBP + 0xa0);
  fVar14 = unaff_RDI[6];
  fVar17 = SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fVar3 * fVar3) * fVar13 +
           SQRT(fVar17 * fVar17 + fVar1 * fVar1 + fVar2 * fVar2) * fVar18;
  *(float *)(unaff_RBP + 0x98) = fVar17;
  fVar19 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar8 * fVar8) * fVar18 +
           SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar14 * fVar14) * fVar13;
  fVar1 = *(float *)(unaff_RBP + 0x98);
  fVar20 = SQRT(unaff_RBX[8] * unaff_RBX[8] + fVar9 * fVar9 + fVar10 * fVar10) * fVar18 +
           SQRT(unaff_RDI[8] * unaff_RDI[8] + fVar11 * fVar11 + fVar12 * fVar12) * fVar13;
  fVar18 = *(float *)(unaff_RBP + 0x98);
  *unaff_RSI = (float)uStackX_20 * fVar17;
  unaff_RSI[1] = uStackX_20._4_4_ * fVar18;
  unaff_RSI[2] = fStack0000000000000028 * fVar1;
  unaff_RSI[3] = fStack000000000000002c;
  unaff_RSI[4] = fStack0000000000000030 * fVar19;
  unaff_RSI[5] = fStack0000000000000034 * fVar19;
  unaff_RSI[6] = fStack0000000000000038 * fVar19;
  unaff_RSI[7] = fStack000000000000003c;
  unaff_RSI[8] = fStack0000000000000040 * fVar20;
  unaff_RSI[9] = fStack0000000000000044 * fVar20;
  unaff_RSI[10] = fStack0000000000000048 * fVar20;
  unaff_RSI[0xb] = fStack000000000000004c;
  *(uint64_t *)(unaff_RSI + 0xc) = uStack0000000000000070;
  *(uint64_t *)(unaff_RSI + 0xe) = uStack0000000000000078;
  return;
}





