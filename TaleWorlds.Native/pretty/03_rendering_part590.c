/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part590.c - 7 个函数

// 函数: void FUN_1805906f0(int64_t *param_1,uint64_t param_2)
void FUN_1805906f0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar2) / 0xa0) < param_2) {
    puVar4 = (uint64_t *)*param_1;
    lVar1 = ((int64_t)puVar2 - (int64_t)puVar4) / 0xa0;
    uVar5 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar5 = 1;
    }
    if (uVar5 < lVar1 + param_2) {
      uVar5 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar5 != 0) {
      lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 0xa0,(char)param_1[3]);
      puVar4 = (uint64_t *)*param_1;
      puVar2 = (uint64_t *)param_1[1];
    }
    if (puVar4 != puVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,puVar4,(int64_t)puVar2 - (int64_t)puVar4);
    }
    if (param_2 != 0) {
      puVar2 = (uint64_t *)(lVar1 + 0x50);
      uVar3 = param_2;
      do {
        puVar2[-10] = 0x3f800000;
        puVar2[-9] = 0;
        puVar2[-8] = 0x3f80000000000000;
        puVar2[-7] = 0;
        puVar2[-6] = 0;
        puVar2[-5] = 0x3f800000;
        puVar2[-4] = 0;
        puVar2[-3] = 0x3f80000000000000;
        *puVar2 = 0;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 0;
        *(int32_t *)((int64_t)puVar2 + 0x14) = 0xffffffff;
        *(int32_t *)(puVar2 + 3) = 100;
        *(uint64_t *)((int64_t)puVar2 + 0x1c) = 100;
        *(uint64_t *)((int64_t)puVar2 + 0x24) = 0;
        *(int32_t *)((int64_t)puVar2 + 0x2c) = 0;
        puVar2[6] = 100;
        puVar2[7] = 0;
        *(int32_t *)(puVar2 + 8) = 0;
        *(uint64_t *)((int64_t)puVar2 + 0x44) = 0;
        *(int32_t *)((int64_t)puVar2 + 0x4c) = 0;
        *(int32_t *)(puVar2 + -2) = 0;
        *(int32_t *)((int64_t)puVar2 + -0xc) = 0;
        *(int32_t *)(puVar2 + -1) = 0;
        *(int32_t *)((int64_t)puVar2 + -4) = 0;
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 0x14;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *param_1 = lVar1;
    param_1[2] = uVar5 * 0xa0 + lVar1;
    param_1[1] = param_2 * 0xa0 + lVar1;
  }
  else {
    uVar5 = param_2;
    if (param_2 != 0) {
      do {
        *puVar2 = 0x3f800000;
        puVar2[1] = 0;
        puVar2[2] = 0x3f80000000000000;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0x3f800000;
        puVar2[6] = 0;
        puVar2[7] = 0x3f80000000000000;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        *(int32_t *)(puVar2 + 0xc) = 0;
        *(int32_t *)((int64_t)puVar2 + 100) = 0xffffffff;
        *(int32_t *)(puVar2 + 0xd) = 100;
        *(uint64_t *)((int64_t)puVar2 + 0x6c) = 100;
        *(uint64_t *)((int64_t)puVar2 + 0x74) = 0;
        *(int32_t *)((int64_t)puVar2 + 0x7c) = 0;
        puVar2[0x10] = 100;
        puVar2[0x11] = 0;
        *(int32_t *)(puVar2 + 0x12) = 0;
        *(uint64_t *)((int64_t)puVar2 + 0x94) = 0;
        *(int32_t *)((int64_t)puVar2 + 0x9c) = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 0x14;
      } while (uVar5 != 0);
      puVar2 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar2 + param_2 * 0x14);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180590744(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180590744(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int64_t in_RAX;
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  int64_t unaff_R14;
  uint64_t uVar4;
  
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar3 = (lVar3 >> 6) - (lVar3 >> 0x3f);
  uVar4 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (uint64_t)(lVar3 + unaff_R14)) {
    uVar4 = lVar3 + unaff_R14;
  }
  lVar3 = 0;
  if (uVar4 != 0) {
    lVar3 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0xa0,(char)unaff_RSI[3]);
    param_4 = *unaff_RSI;
    unaff_RBX = unaff_RSI[1];
  }
  if (param_4 != unaff_RBX) {
                    // WARNING: Subroutine does not return
    memmove(lVar3,param_4,unaff_RBX - param_4);
  }
  if (unaff_R14 != 0) {
    puVar1 = (uint64_t *)(lVar3 + 0x50);
    lVar2 = unaff_R14;
    do {
      puVar1[-10] = 0x3f800000;
      puVar1[-9] = 0;
      puVar1[-8] = 0x3f80000000000000;
      puVar1[-7] = 0;
      puVar1[-6] = 0;
      puVar1[-5] = 0x3f800000;
      puVar1[-4] = 0;
      puVar1[-3] = 0x3f80000000000000;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(int32_t *)(puVar1 + 2) = 0;
      *(int32_t *)((int64_t)puVar1 + 0x14) = 0xffffffff;
      *(int32_t *)(puVar1 + 3) = 100;
      *(uint64_t *)((int64_t)puVar1 + 0x1c) = 100;
      *(uint64_t *)((int64_t)puVar1 + 0x24) = 0;
      *(int32_t *)((int64_t)puVar1 + 0x2c) = 0;
      puVar1[6] = 100;
      puVar1[7] = 0;
      *(int32_t *)(puVar1 + 8) = 0;
      *(uint64_t *)((int64_t)puVar1 + 0x44) = 0;
      *(int32_t *)((int64_t)puVar1 + 0x4c) = 0;
      *(int32_t *)(puVar1 + -2) = 0;
      *(int32_t *)((int64_t)puVar1 + -0xc) = 0;
      *(int32_t *)(puVar1 + -1) = 0;
      *(int32_t *)((int64_t)puVar1 + -4) = 0;
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 0x14;
    } while (lVar2 != 0);
  }
  if (*unaff_RSI == 0) {
    *unaff_RSI = lVar3;
    unaff_RSI[2] = uVar4 * 0xa0 + lVar3;
    unaff_RSI[1] = unaff_R14 * 0xa0 + lVar3;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}





// 函数: void FUN_1805908d6(int64_t param_1)
void FUN_1805908d6(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_R14;
  
  lVar1 = unaff_R14;
  if (unaff_R14 != 0) {
    do {
      *unaff_RBX = 0x3f800000;
      unaff_RBX[1] = 0;
      unaff_RBX[2] = 0x3f80000000000000;
      unaff_RBX[3] = 0;
      unaff_RBX[4] = 0;
      unaff_RBX[5] = 0x3f800000;
      unaff_RBX[6] = 0;
      unaff_RBX[7] = 0x3f80000000000000;
      unaff_RBX[10] = 0;
      unaff_RBX[0xb] = 0;
      *(int32_t *)(unaff_RBX + 0xc) = 0;
      *(int32_t *)((int64_t)unaff_RBX + 100) = 0xffffffff;
      *(int32_t *)(unaff_RBX + 0xd) = 100;
      *(uint64_t *)((int64_t)unaff_RBX + 0x6c) = 100;
      *(uint64_t *)((int64_t)unaff_RBX + 0x74) = 0;
      *(int32_t *)((int64_t)unaff_RBX + 0x7c) = 0;
      unaff_RBX[0x10] = 100;
      unaff_RBX[0x11] = 0;
      *(int32_t *)(unaff_RBX + 0x12) = 0;
      *(uint64_t *)((int64_t)unaff_RBX + 0x94) = 0;
      *(int32_t *)((int64_t)unaff_RBX + 0x9c) = 0;
      unaff_RBX[8] = 0;
      unaff_RBX[9] = 0;
      lVar1 = lVar1 + -1;
      unaff_RBX = unaff_RBX + 0x14;
    } while (lVar1 != 0);
    unaff_RBX = *(uint64_t **)(param_1 + 8);
  }
  *(uint64_t **)(param_1 + 8) = unaff_RBX + unaff_R14 * 0x14;
  return;
}



int32_t * FUN_1805909a0(int32_t *param_1)

{
  int64_t *plVar1;
  
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0xe) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint64_t *)(param_1 + 4) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 6) = 0xffffffffffffffff;
  plVar1 = *(int64_t **)(param_1 + 8);
  *(uint64_t *)(param_1 + 8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 10);
  *(uint64_t *)(param_1 + 10) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xc);
  *(uint64_t *)(param_1 + 0xc) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xe);
  *(uint64_t *)(param_1 + 0xe) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x10) = 0;
  plVar1 = *(int64_t **)(param_1 + 0x30);
  *(uint64_t *)(param_1 + 0x30) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x32) = 0;
  *(uint64_t *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x3f800000;
  *(uint64_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x3a) = 0;
  *(int8_t *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0x3f800000;
  return param_1;
}





// 函数: void FUN_180590ae0(int64_t param_1)
void FUN_180590ae0(int64_t param_1)

{
  if (*(int64_t **)(param_1 + 0xc0) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0xc0) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x38) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x38) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x30) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x30) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x28) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x20) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x38))();
  }
  return;
}



int32_t * FUN_180590b50(int64_t *param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  
  FUN_1805909a0(param_2);
  uVar2 = *(int32_t *)((int64_t)param_1 + 0x124);
  lVar4 = param_1[0x25];
  uVar3 = *(int32_t *)((int64_t)param_1 + 300);
  *param_2 = (int)param_1[0x24];
  param_2[1] = uVar2;
  param_2[2] = (int)lVar4;
  param_2[3] = uVar3;
  param_2[4] = (int)param_1[0x20];
  param_2[5] = *(int32_t *)((int64_t)param_1 + 0x104);
  param_2[6] = (int)param_1[0x21];
  param_2[7] = *(int32_t *)((int64_t)param_1 + 0x10c);
  plVar5 = (int64_t *)*param_1;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_2 + 8);
  *(int64_t **)(param_2 + 8) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar5 = (int64_t *)param_1[1];
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_2 + 10);
  *(int64_t **)(param_2 + 10) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar5 = (int64_t *)param_1[2];
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_2 + 0xc);
  *(int64_t **)(param_2 + 0xc) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar5 = (int64_t *)param_1[3];
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_2 + 0xe);
  *(int64_t **)(param_2 + 0xe) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar5 = param_1 + 4;
  do {
    lVar4 = *plVar5;
    *(char *)((int64_t)param_2 + (0x40 - (int64_t)(param_1 + 4)) + (int64_t)plVar5) = (char)lVar4
    ;
    plVar5 = (int64_t *)((int64_t)plVar5 + 1);
  } while ((char)lVar4 != '\0');
  plVar5 = (int64_t *)param_1[0x16];
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(int64_t **)(param_2 + 0x30);
  *(int64_t **)(param_2 + 0x30) = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar4 = param_1[0x30];
  *(int64_t *)(param_2 + 0x32) = param_1[0x2f];
  *(int64_t *)(param_2 + 0x34) = lVar4;
  param_2[0x36] = *(int32_t *)((int64_t)param_1 + 0x174);
  param_2[0x37] = (int)param_1[0x23];
  lVar4 = param_1[0x32];
  *(int64_t *)(param_2 + 0x38) = param_1[0x31];
  *(int64_t *)(param_2 + 0x3a) = lVar4;
  *(int8_t *)(param_2 + 0x3c) = *(int8_t *)((int64_t)param_1 + 0x23c);
  param_2[0x3d] = (int)param_1[0x48];
  return param_2;
}





// 函数: void FUN_180590fc0(int64_t param_1,int64_t param_2,float param_3,int64_t param_4)
void FUN_180590fc0(int64_t param_1,int64_t param_2,float param_3,int64_t param_4)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 0x168) + *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x16c);
  fVar5 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x170);
  *(float *)(param_1 + 0x178) = fVar3;
  *(float *)(param_1 + 0x17c) = fVar4;
  *(float *)(param_1 + 0x180) = fVar5;
  *(int32_t *)(param_1 + 0x184) = 0x7f7fffff;
  if (*(char *)(param_4 + 0x98) != '\0') {
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x34));
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  fVar2 = fVar3;
  if ((((*(byte *)(param_1 + 0x40) & 3) == 0) || ((*(byte *)(param_1 + 0x40) & 4) != 0)) &&
     (*(char *)(param_4 + 0x198) == '\0')) {
    fVar2 = *(float *)(param_1 + 0x118) - param_3 * 9.806;
    *(float *)(param_1 + 0x118) = fVar2;
  }
  if (*(char *)(param_4 + 500) != '\0') {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfc | 4;
    *(int32_t *)(param_1 + 0x154) = 0xbe4ccccd;
  }
  if (*(float *)(param_4 + 0x1f0) != 0.0) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfc;
    *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_4 + 0x1f0);
  }
  FUN_1805912f0(fVar2,param_3,param_4,fVar4,fVar3,fVar5);
  *(uint64_t *)(param_1 + 0x110) = 0;
  *(uint64_t *)(param_1 + 0x118) = 0;
  fVar3 = ABS(*(float *)(param_1 + 0x108));
  if (fVar3 <= 5.0) {
    if (0.001 < fVar3) {
      fVar4 = (param_3 * 2.5 + *(float *)(param_1 + 0x10c)) / fVar3;
      if (param_3 * 8.0 <= fVar4) {
        fVar4 = param_3 * 8.0;
      }
      *(float *)(param_1 + 0x10c) = fVar4 * fVar3;
      *(float *)(param_1 + 0x108) = (1.0 - fVar4) * *(float *)(param_1 + 0x108);
      goto LAB_18059126d;
    }
    if (fVar3 <= 0.0) goto LAB_18059126d;
  }
  *(uint64_t *)(param_1 + 0x108) = 0;
LAB_18059126d:
  lVar1 = *(int64_t *)(param_4 + 0x1c8);
  if (-1 < *(int *)(lVar1 + 0x10)) {
    if (*(float *)(param_1 + 0x1d0) <= 0.0) {
      if (*(int *)(param_4 + 0x1a0) != 2) {
        FUN_1804fc920((int64_t)
                      ((int)*(uint64_t *)(lVar1 + 0x10) +
                      (int)((uint64_t)*(uint64_t *)(lVar1 + 0x10) >> 0x20) *
                      *(int *)(param_2 + 0x98d238)) * 9 + *(int64_t *)(param_2 + 0x98d248));
      }
    }
    else {
      FUN_180531590(param_2 + 0x98d230,lVar1,param_1 + 0x178);
    }
  }
  return;
}





// 函数: void FUN_18059101b(float param_1,uint64_t param_2,float param_3,int32_t param_4)
void FUN_18059101b(float param_1,uint64_t param_2,float param_3,int32_t param_4)

{
  char cVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R9;
  int32_t in_XMM0_Dd;
  float fVar3;
  float fVar4;
  int32_t in_XMM4_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(float *)(in_RCX + 0x178) = param_1;
  *(int32_t *)(in_RCX + 0x17c) = param_4;
  *(int32_t *)(in_RCX + 0x180) = in_XMM4_Da;
  *(int32_t *)(in_RCX + 0x184) = in_XMM0_Dd;
  cVar1 = *(char *)(in_R9 + 0x98);
  *(float *)(in_RAX + -0x78) = param_1;
  *(int32_t *)(in_RAX + -0x74) = param_4;
  *(int32_t *)(in_RAX + -0x70) = in_XMM4_Da;
  *(int32_t *)(in_RAX + -0x6c) = in_XMM0_Dd;
  if (cVar1 != '\0') {
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(float *)(in_RCX + 0x120) + *(float *)(in_RCX + 0x34));
  }
  *(uint *)(in_RCX + 8) = *(uint *)(in_RCX + 8) | 2;
  if ((((*(byte *)(in_RCX + 0x40) & 3) == 0) || ((*(byte *)(in_RCX + 0x40) & 4) != 0)) &&
     (*(char *)(in_R9 + 0x198) == '\0')) {
    param_1 = *(float *)(in_RCX + 0x118) - param_3 * 9.806;
    *(float *)(in_RCX + 0x118) = param_1;
  }
  if (*(char *)(in_R9 + 500) != '\0') {
    *(byte *)(in_RCX + 0x40) = *(byte *)(in_RCX + 0x40) & 0xfc | 4;
    *(int32_t *)(in_RCX + 0x154) = 0xbe4ccccd;
  }
  if (*(float *)(in_R9 + 0x1f0) != 0.0) {
    *(byte *)(in_RCX + 0x40) = *(byte *)(in_RCX + 0x40) & 0xfc;
    *(int32_t *)(in_RCX + 0x44) = *(int32_t *)(in_R9 + 0x1f0);
  }
  FUN_1805912f0(param_1,param_3);
  *(uint64_t *)(unaff_RBX + 0x110) = 0;
  *(uint64_t *)(unaff_RBX + 0x118) = 0;
  fVar3 = ABS(*(float *)(unaff_RBX + 0x108));
  if (fVar3 <= 5.0) {
    if (0.001 < fVar3) {
      fVar4 = (param_3 * 2.5 + *(float *)(unaff_RBX + 0x10c)) / fVar3;
      if (param_3 * 8.0 <= fVar4) {
        fVar4 = param_3 * 8.0;
      }
      *(float *)(unaff_RBX + 0x10c) = fVar4 * fVar3;
      *(float *)(unaff_RBX + 0x108) = (1.0 - fVar4) * *(float *)(unaff_RBX + 0x108);
      goto LAB_18059126d;
    }
    if (fVar3 <= 0.0) goto LAB_18059126d;
  }
  *(uint64_t *)(unaff_RBX + 0x108) = 0;
LAB_18059126d:
  lVar2 = *(int64_t *)(unaff_RDI + 0x1c8);
  if (-1 < *(int *)(lVar2 + 0x10)) {
    if (*(float *)(unaff_RBX + 0x1d0) <= 0.0) {
      if (*(int *)(unaff_RDI + 0x1a0) != 2) {
        FUN_1804fc920((int64_t)
                      ((int)*(uint64_t *)(lVar2 + 0x10) +
                      (int)((uint64_t)*(uint64_t *)(lVar2 + 0x10) >> 0x20) *
                      *(int *)(unaff_RSI + 0x98d238)) * 9 + *(int64_t *)(unaff_RSI + 0x98d248));
      }
    }
    else {
      FUN_180531590(unaff_RSI + 0x98d230,lVar2,unaff_RBX + 0x178);
    }
  }
  return;
}





// 函数: void FUN_180591282(uint64_t param_1,int64_t param_2)
void FUN_180591282(uint64_t param_1,int64_t param_2)

{
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  float unaff_XMM7_Da;
  
  if (*(float *)(unaff_RBX + 0x1d0) <= unaff_XMM7_Da) {
    if (*(int *)(unaff_RDI + 0x1a0) != 2) {
      FUN_1804fc920((int64_t)
                    ((int)*(uint64_t *)(param_2 + 0x10) +
                    (int)((uint64_t)*(uint64_t *)(param_2 + 0x10) >> 0x20) *
                    *(int *)(unaff_RSI + 0x98d238)) * 9 + *(int64_t *)(unaff_RSI + 0x98d248));
    }
  }
  else {
    FUN_180531590(unaff_RSI + 0x98d230,param_2,unaff_RBX + 0x178);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



