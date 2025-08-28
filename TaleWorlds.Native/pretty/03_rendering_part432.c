#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part432.c - 23 个函数

// 函数: void FUN_180502e28(void)
void FUN_180502e28(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180502ed0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a150;
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
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
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





// 函数: void FUN_180502fb0(int param_1,int param_2,int64_t *param_3)
void FUN_180502fb0(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  if (param_1 < param_2) {
    lVar4 = (int64_t)param_1 << 3;
    uVar3 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x876958;
      if (*(char *)(lVar1 + 0x87a93c) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x87a918);
      }
      lVar2 = *(int64_t *)(lVar4 + lVar2);
      if (*(char *)(lVar2 + 0x984) != '\0') {
        if (-1 < *(int *)(lVar2 + 0x564)) {
          func_0x00018051a670(lVar2);
        }
        FUN_18051b210(lVar2,lVar1 + 0x87a948);
        FUN_18051b660(lVar2);
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}





// 函数: void FUN_180502fbe(int param_1,int param_2,int64_t *param_3)
void FUN_180502fbe(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  lVar4 = (int64_t)param_1 << 3;
  uVar3 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x876958;
    if (*(char *)(lVar1 + 0x87a93c) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x87a918);
    }
    lVar2 = *(int64_t *)(lVar4 + lVar2);
    if (*(char *)(lVar2 + 0x984) != '\0') {
      if (-1 < *(int *)(lVar2 + 0x564)) {
        func_0x00018051a670(lVar2);
      }
      FUN_18051b210(lVar2,lVar1 + 0x87a948);
      FUN_18051b660(lVar2);
    }
    lVar4 = lVar4 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_180503059(void)
void FUN_180503059(void)

{
  return;
}





// 函数: void FUN_1805030a0(int param_1,int param_2,int64_t *param_3)
void FUN_1805030a0(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  if (param_1 < param_2) {
    lVar4 = (int64_t)param_1 << 3;
    uVar3 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x872970;
      if (*(char *)(lVar1 + 0x876954) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x876930);
      }
      lVar2 = *(int64_t *)(lVar4 + lVar2);
      if (*(char *)(lVar2 + 0x984) != '\0') {
        if (-1 < *(int *)(lVar2 + 0x564)) {
          func_0x00018051a670(lVar2);
        }
        FUN_18051b210(lVar2,lVar1 + 0x87a948);
        FUN_18051b660(lVar2);
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}





// 函数: void FUN_1805030ae(int param_1,int param_2,int64_t *param_3)
void FUN_1805030ae(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  lVar4 = (int64_t)param_1 << 3;
  uVar3 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x872970;
    if (*(char *)(lVar1 + 0x876954) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x876930);
    }
    lVar2 = *(int64_t *)(lVar4 + lVar2);
    if (*(char *)(lVar2 + 0x984) != '\0') {
      if (-1 < *(int *)(lVar2 + 0x564)) {
        func_0x00018051a670(lVar2);
      }
      FUN_18051b210(lVar2,lVar1 + 0x87a948);
      FUN_18051b660(lVar2);
    }
    lVar4 = lVar4 + 8;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_180503149(void)
void FUN_180503149(void)

{
  return;
}





// 函数: void FUN_180503190(int param_1,int param_2,int64_t *param_3)
void FUN_180503190(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  if (param_1 < param_2) {
    lVar3 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar2 = lVar1 + 0x86e988;
      if (*(char *)(lVar1 + 0x87296c) == '\0') {
        lVar2 = *(int64_t *)(lVar1 + 0x872948);
      }
      FUN_1805261b0(*(uint64_t *)(lVar3 + lVar2),*(int32_t *)param_3[1]);
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180503199(int param_1,int param_2,int64_t *param_3)
void FUN_180503199(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  lVar3 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *param_3;
    lVar2 = lVar1 + 0x86e988;
    if (*(char *)(lVar1 + 0x87296c) == '\0') {
      lVar2 = *(int64_t *)(lVar1 + 0x872948);
    }
    FUN_1805261b0(*(uint64_t *)(lVar3 + lVar2),*(int32_t *)param_3[1]);
    lVar3 = lVar3 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_1805031f5(void)
void FUN_1805031f5(void)

{
  return;
}





// 函数: void FUN_180503240(int param_1,int param_2,int64_t *param_3)
void FUN_180503240(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  if (param_1 < param_2) {
    param_3 = (int64_t *)*param_3;
    lVar5 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar3 = lVar1 + 0x876958;
      if (*(char *)(lVar1 + 0x87a93c) == '\0') {
        lVar3 = *(int64_t *)(lVar1 + 0x87a918);
      }
      lVar3 = *(int64_t *)(lVar5 + lVar3);
      if ((*(int *)(lVar3 + 0x568) == 1) || (*(char *)(lVar3 + 0xa50) == '\0')) {
        if ((*(uint *)(*(int64_t *)(lVar3 + 0x20) + 8) >> 1 & 1) != 0) {
          FUN_1805271f0(lVar3,*(int32_t *)param_3[1],
                        lVar1 + 0x52eda0 + (int64_t)*(int *)(lVar3 + 0x10) * 0x200,param_3[2]);
        }
        FUN_180526710(lVar3,*(int32_t *)param_3[1]);
      }
      cVar2 = func_0x00018052ae60(lVar3);
      if (cVar2 == '\0') {
        FUN_180524d80(lVar3);
      }
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180503250(int param_1,int param_2)
void FUN_180503250(int param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  int64_t lVar5;
  
  lVar5 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *unaff_RSI;
    lVar3 = lVar1 + 0x876958;
    if (*(char *)(lVar1 + 0x87a93c) == '\0') {
      lVar3 = *(int64_t *)(lVar1 + 0x87a918);
    }
    lVar3 = *(int64_t *)(lVar5 + lVar3);
    if ((*(int *)(lVar3 + 0x568) == 1) || (*(char *)(lVar3 + 0xa50) == '\0')) {
      if ((*(uint *)(*(int64_t *)(lVar3 + 0x20) + 8) >> 1 & 1) != 0) {
        FUN_1805271f0(lVar3,*(int32_t *)unaff_RSI[1],
                      lVar1 + 0x52eda0 + (int64_t)*(int *)(lVar3 + 0x10) * 0x200,unaff_RSI[2]);
      }
      FUN_180526710(lVar3,*(int32_t *)unaff_RSI[1]);
    }
    cVar2 = func_0x00018052ae60(lVar3);
    if (cVar2 == '\0') {
      FUN_180524d80(lVar3);
    }
    lVar5 = lVar5 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_18050331a(void)
void FUN_18050331a(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180503320(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a250;
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
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
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





// 函数: void FUN_180503400(int param_1,int param_2,int64_t *param_3)
void FUN_180503400(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  if (param_1 < param_2) {
    param_3 = (int64_t *)*param_3;
    lVar5 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar1 = *param_3;
      lVar3 = lVar1 + 0x872970;
      if (*(char *)(lVar1 + 0x876954) == '\0') {
        lVar3 = *(int64_t *)(lVar1 + 0x876930);
      }
      lVar3 = *(int64_t *)(lVar5 + lVar3);
      if ((*(int *)(lVar3 + 0x568) == 1) || (*(char *)(lVar3 + 0xa50) == '\0')) {
        if ((*(uint *)(*(int64_t *)(lVar3 + 0x20) + 8) >> 1 & 1) != 0) {
          FUN_1805271f0(lVar3,*(int32_t *)param_3[1],
                        lVar1 + 0x52eda0 + (int64_t)*(int *)(lVar3 + 0x10) * 0x200,param_3[2]);
        }
        FUN_180526710(lVar3,*(int32_t *)param_3[1]);
      }
      cVar2 = func_0x00018052ae60(lVar3);
      if (cVar2 == '\0') {
        FUN_180524d80(lVar3);
      }
      lVar5 = lVar5 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_180503410(int param_1,int param_2)
void FUN_180503410(int param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *unaff_RSI;
  int64_t lVar5;
  
  lVar5 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)(uint)(param_2 - param_1);
  do {
    lVar1 = *unaff_RSI;
    lVar3 = lVar1 + 0x872970;
    if (*(char *)(lVar1 + 0x876954) == '\0') {
      lVar3 = *(int64_t *)(lVar1 + 0x876930);
    }
    lVar3 = *(int64_t *)(lVar5 + lVar3);
    if ((*(int *)(lVar3 + 0x568) == 1) || (*(char *)(lVar3 + 0xa50) == '\0')) {
      if ((*(uint *)(*(int64_t *)(lVar3 + 0x20) + 8) >> 1 & 1) != 0) {
        FUN_1805271f0(lVar3,*(int32_t *)unaff_RSI[1],
                      lVar1 + 0x52eda0 + (int64_t)*(int *)(lVar3 + 0x10) * 0x200,unaff_RSI[2]);
      }
      FUN_180526710(lVar3,*(int32_t *)unaff_RSI[1]);
    }
    cVar2 = func_0x00018052ae60(lVar3);
    if (cVar2 == '\0') {
      FUN_180524d80(lVar3);
    }
    lVar5 = lVar5 + 8;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_1805034da(void)
void FUN_1805034da(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1805034e0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a090;
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
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
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





// 函数: void FUN_1805035c0(int param_1,int param_2,int64_t *param_3)
void FUN_1805035c0(int param_1,int param_2,int64_t *param_3)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  if (param_1 < param_2) {
    param_3 = (int64_t *)*param_3;
    lVar5 = (int64_t)param_1 << 3;
    uVar4 = (uint64_t)(uint)(param_2 - param_1);
    do {
      lVar2 = *param_3;
      lVar3 = lVar2 + 0x86e988;
      if (*(char *)(lVar2 + 0x87296c) == '\0') {
        lVar3 = *(int64_t *)(lVar2 + 0x872948);
      }
      lVar2 = *(int64_t *)(lVar5 + lVar3);
      FUN_180510e50(lVar2,*(int32_t *)param_3[1],*(int8_t *)param_3[2]);
      lVar2 = *(int64_t *)(lVar2 + 0x20);
      lVar5 = lVar5 + 8;
      fVar1 = *(float *)param_3[1];
      *(float *)(lVar2 + 0x13c) = *(float *)(lVar2 + 0x13c) + fVar1;
      *(float *)(lVar2 + 0x140) = *(float *)(lVar2 + 0x140) + fVar1;
      *(float *)(lVar2 + 0x144) = *(float *)(lVar2 + 0x144) + fVar1;
      *(float *)(lVar2 + 0x148) = *(float *)(lVar2 + 0x148) + fVar1;
      *(float *)(lVar2 + 0x44) = fVar1 + *(float *)(lVar2 + 0x44);
      *(float *)(lVar2 + 0x14c) = fVar1 + *(float *)(lVar2 + 0x14c);
      *(float *)(lVar2 + 0x154) = fVar1 + *(float *)(lVar2 + 0x154);
      *(float *)(lVar2 + 0x158) = fVar1 + *(float *)(lVar2 + 0x158);
      *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) & 0xc00003ff;
      *(int32_t *)(lVar2 + 0xd8) = 0;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_1805035d2(int param_1,uint param_2)
void FUN_1805035d2(int param_1,uint param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *unaff_RDI;
  
  lVar5 = (int64_t)param_1 << 3;
  uVar4 = (uint64_t)param_2;
  do {
    lVar2 = *unaff_RDI;
    lVar3 = lVar2 + 0x86e988;
    if (*(char *)(lVar2 + 0x87296c) == '\0') {
      lVar3 = *(int64_t *)(lVar2 + 0x872948);
    }
    lVar2 = *(int64_t *)(lVar5 + lVar3);
    FUN_180510e50(lVar2,*(int32_t *)unaff_RDI[1],*(int8_t *)unaff_RDI[2]);
    lVar2 = *(int64_t *)(lVar2 + 0x20);
    lVar5 = lVar5 + 8;
    fVar1 = *(float *)unaff_RDI[1];
    *(float *)(lVar2 + 0x13c) = *(float *)(lVar2 + 0x13c) + fVar1;
    *(float *)(lVar2 + 0x140) = *(float *)(lVar2 + 0x140) + fVar1;
    *(float *)(lVar2 + 0x144) = *(float *)(lVar2 + 0x144) + fVar1;
    *(float *)(lVar2 + 0x148) = *(float *)(lVar2 + 0x148) + fVar1;
    *(float *)(lVar2 + 0x44) = fVar1 + *(float *)(lVar2 + 0x44);
    *(float *)(lVar2 + 0x14c) = fVar1 + *(float *)(lVar2 + 0x14c);
    *(float *)(lVar2 + 0x154) = fVar1 + *(float *)(lVar2 + 0x154);
    *(float *)(lVar2 + 0x158) = fVar1 + *(float *)(lVar2 + 0x158);
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) & 0xc00003ff;
    *(int32_t *)(lVar2 + 0xd8) = 0;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return;
}





// 函数: void FUN_1805036c1(void)
void FUN_1805036c1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1805036d0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a0d0;
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
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
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





// 函数: void FUN_1805037b0(uint64_t param_1,int64_t *param_2)
void FUN_1805037b0(uint64_t param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)*param_2;
  (*(code *)*puVar1)((int64_t)(int)puVar1[1] + puVar1[3],param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1805037f0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0a010;
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
      *(int8_t *)(puVar3 + 2) = *(int8_t *)(puVar1 + 2);
      puVar3[3] = puVar1[3];
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





// 函数: void FUN_1805038d0(int64_t *param_1)
void FUN_1805038d0(int64_t *param_1)

{
  FUN_1808fc8a8((uint64_t)(*(uint *)(param_1 + 1) & 0x1f) * 0x100 + *param_1 + 0x38,0x30,4,
                FUN_18004a130,0xfffffffffffffffe);
  *(int8_t *)((*param_1 - (uint64_t)(*(uint *)(param_1 + 1) & 0x1f)) + 0x202f) = 1;
  return;
}



uint64_t FUN_180503930(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint *puVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  bool bVar12;
  
  uVar8 = (*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
          *(int64_t *)(param_1 + 0x20);
  if (0x8000000000000000 < uVar8) {
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    uVar8 = *(uint64_t *)(param_1 + 0x20);
    if (0x8000000000000000 < (lVar5 - uVar8) - *(int64_t *)(param_1 + 0x38)) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x60);
      uVar11 = (uVar8 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5;
      lVar5 = *(int64_t *)(plVar1[3] + (plVar1[1] + uVar11 & *plVar1 - 1U) * 8);
      uVar6 = *(uint64_t *)(lVar5 + 8);
      lVar10 = (uint64_t)((uint)uVar8 & 0x1f) * 0x100 + uVar6;
      lVar7 = *(int64_t *)(param_1 + 0x50);
      FUN_180506460(param_2,lVar10,uVar11,plVar1,0xfffffffffffffffe,uVar6,uVar8,lVar5);
      FUN_1808fc8a8(lVar10 + 0x38,0x30,4,FUN_18004a130);
      LOCK();
      puVar2 = (uint64_t *)(uVar6 + 0x2008);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (uVar8 == 0x1f) {
        *(uint64_t *)(lVar5 + 8) = 0;
        LOCK();
        puVar3 = (uint *)(uVar6 + 0x2030);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 + 0x80000000;
        UNLOCK();
        uVar8 = (uint64_t)uVar4;
        if (uVar4 == 0) {
          uVar11 = *(uint64_t *)(lVar7 + 0x28);
          do {
            *(uint64_t *)(uVar6 + 0x2038) = uVar11;
            *(int32_t *)(uVar6 + 0x2030) = 1;
            puVar2 = (uint64_t *)(lVar7 + 0x28);
            LOCK();
            uVar9 = *puVar2;
            bVar12 = uVar11 == uVar9;
            if (bVar12) {
              *puVar2 = uVar6;
              uVar9 = uVar11;
            }
            UNLOCK();
            uVar8 = uVar9;
            if (bVar12) break;
            LOCK();
            puVar3 = (uint *)(uVar6 + 0x2030);
            uVar4 = *puVar3;
            uVar8 = (uint64_t)uVar4;
            *puVar3 = *puVar3 + 0x7fffffff;
            UNLOCK();
            uVar11 = uVar9;
          } while (uVar4 == 1);
        }
      }
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
    LOCK();
    *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + 1;
    UNLOCK();
  }
  return uVar8 & 0xffffffffffffff00;
}





// 函数: void FUN_180503ac0(int64_t *param_1)
void FUN_180503ac0(int64_t *param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  
  FUN_1808fc8a8((uint64_t)(*(uint *)(param_1 + 1) & 0x1f) * 0x100 + *param_1 + 0x38,0x30,4,
                FUN_18004a130,0xfffffffffffffffe);
  LOCK();
  plVar1 = (int64_t *)(*param_1 + 0x2008);
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (lVar4 == 0x1f) {
    *(uint64_t *)(param_1[2] + 8) = 0;
    lVar4 = *param_1;
    lVar5 = param_1[3];
    LOCK();
    piVar2 = (int *)(lVar4 + 0x2030);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -0x80000000;
    UNLOCK();
    if (iVar3 == 0) {
      lVar7 = *(int64_t *)(lVar5 + 0x28);
      do {
        *(int64_t *)(lVar4 + 0x2038) = lVar7;
        *(int32_t *)(lVar4 + 0x2030) = 1;
        plVar1 = (int64_t *)(lVar5 + 0x28);
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar7 == lVar6;
        if (bVar8) {
          *plVar1 = lVar4;
          lVar6 = lVar7;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
        LOCK();
        piVar2 = (int *)(lVar4 + 0x2030);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + 0x7fffffff;
        UNLOCK();
        lVar7 = lVar6;
      } while (iVar3 == 1);
    }
  }
  return;
}



uint64_t FUN_180503ba0(int64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint *puVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  bool bVar11;
  
  uVar8 = (*(int64_t *)(param_1 + 0x30) - *(int64_t *)(param_1 + 0x38)) -
          *(int64_t *)(param_1 + 0x20);
  if (0x8000000000000000 < uVar8) {
    LOCK();
    plVar1 = (int64_t *)(param_1 + 0x30);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    uVar8 = *(uint64_t *)(param_1 + 0x20);
    if (0x8000000000000000 < (lVar5 - uVar8) - *(int64_t *)(param_1 + 0x38)) {
      LOCK();
      puVar2 = (uint64_t *)(param_1 + 0x28);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(int64_t **)(param_1 + 0x60);
      lVar5 = *(int64_t *)
               (plVar1[3] +
               (plVar1[1] +
                ((uVar8 & 0xffffffffffffffe0) - **(int64_t **)(plVar1[3] + plVar1[1] * 8) >> 5) &
               *plVar1 - 1U) * 8);
      uVar6 = *(uint64_t *)(lVar5 + 8);
      lVar7 = *(int64_t *)(param_1 + 0x50);
      *param_2 = *(uint64_t *)(uVar6 + (uint64_t)((uint)uVar8 & 0x1f) * 8);
      LOCK();
      puVar2 = (uint64_t *)(uVar6 + 0x108);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      if (uVar8 == 0x1f) {
        *(uint64_t *)(lVar5 + 8) = 0;
        LOCK();
        puVar3 = (uint *)(uVar6 + 0x130);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 + 0x80000000;
        UNLOCK();
        uVar8 = (uint64_t)uVar4;
        if (uVar4 == 0) {
          uVar10 = *(uint64_t *)(lVar7 + 0x28);
          do {
            *(uint64_t *)(uVar6 + 0x138) = uVar10;
            *(int32_t *)(uVar6 + 0x130) = 1;
            puVar2 = (uint64_t *)(lVar7 + 0x28);
            LOCK();
            uVar9 = *puVar2;
            bVar11 = uVar10 == uVar9;
            if (bVar11) {
              *puVar2 = uVar6;
              uVar9 = uVar10;
            }
            UNLOCK();
            uVar8 = uVar9;
            if (bVar11) break;
            LOCK();
            puVar3 = (uint *)(uVar6 + 0x130);
            uVar4 = *puVar3;
            uVar8 = (uint64_t)uVar4;
            *puVar3 = *puVar3 + 0x7fffffff;
            UNLOCK();
            uVar10 = uVar9;
          } while (uVar4 == 1);
        }
      }
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
    LOCK();
    *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + 1;
    UNLOCK();
  }
  return uVar8 & 0xffffffffffffff00;
}





// 函数: void FUN_180503d70(int64_t *param_1,int64_t *param_2,int64_t param_3)
void FUN_180503d70(int64_t *param_1,int64_t *param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int64_t alStack_78 [12];
  
  uVar16 = 0xfffffffffffffffe;
  uVar4 = *(uint *)(param_1 + 1);
  lVar15 = (int64_t)(int)uVar4;
  lVar12 = (int64_t)(int)param_2[1];
  lVar7 = lVar12 - lVar15;
  do {
    if ((lVar7 < 0x1d) || (param_3 < 1)) {
      if (param_3 == 0) {
        lStack_a8 = *param_2;
        lStack_a0 = param_2[1];
        uStack_88 = (int32_t)*param_1;
        uStack_84 = *(int32_t *)((int64_t)param_1 + 4);
        uStack_80 = (int32_t)param_1[1];
        uStack_7c = *(int32_t *)((int64_t)param_1 + 0xc);
        lStack_98 = lStack_a8;
        lStack_90 = lStack_a0;
        FUN_1805050f0(&uStack_88,&lStack_98,&lStack_a8);
      }
      return;
    }
    uVar9 = (int)lVar12 - 1;
    uVar8 = uVar9 >> 4;
    plVar13 = (int64_t *)
              (*(int64_t *)(*param_2 + 8 + (uint64_t)uVar8 * 8) +
              (uint64_t)(uVar9 + uVar8 * -0x10) * 0x50);
    uVar9 = uVar4 + (int)(((int)lVar12 - lVar15) / 2);
    uVar8 = uVar9 >> 4;
    plVar10 = (int64_t *)
              ((uint64_t)(uVar9 + uVar8 * -0x10) * 0x50 +
              *(int64_t *)(*param_1 + 8 + (uint64_t)uVar8 * 8));
    plVar14 = (int64_t *)
              (*(int64_t *)(*param_1 + 8 + (uint64_t)(uVar4 >> 4) * 8) +
              (uint64_t)(uVar4 + (uVar4 >> 4) * -0x10) * 0x50);
    lVar12 = *plVar14;
    lVar7 = *plVar10;
    fVar1 = *(float *)(lVar12 + 0xca4);
    fVar2 = *(float *)(lVar7 + 0xca4);
    if (fVar1 == fVar2) {
      bVar6 = *(float *)(lVar12 + 0xc90) < *(float *)(lVar7 + 0xc90);
    }
    else {
      bVar6 = fVar1 < fVar2;
    }
    lVar5 = *plVar13;
    fVar3 = *(float *)(lVar5 + 0xca4);
    if (bVar6) {
      if (fVar2 == fVar3) {
        bVar6 = *(float *)(lVar7 + 0xc90) < *(float *)(lVar5 + 0xc90);
      }
      else {
        bVar6 = fVar2 < fVar3;
      }
      plVar11 = plVar10;
      if (!bVar6) {
        plVar10 = plVar14;
        if (fVar1 == fVar3) {
          bVar6 = *(float *)(lVar12 + 0xc90) < *(float *)(lVar5 + 0xc90);
        }
        else {
          bVar6 = fVar1 < fVar3;
        }
LAB_180503f10:
        plVar11 = plVar10;
        if (bVar6) {
          plVar11 = plVar13;
        }
      }
    }
    else {
      if (fVar1 == fVar3) {
        bVar6 = *(float *)(lVar12 + 0xc90) < *(float *)(lVar5 + 0xc90);
      }
      else {
        bVar6 = fVar1 < fVar3;
      }
      plVar11 = plVar14;
      if (!bVar6) {
        if (fVar2 == fVar3) {
          bVar6 = *(float *)(lVar7 + 0xc90) < *(float *)(lVar5 + 0xc90);
        }
        else {
          bVar6 = fVar2 < fVar3;
        }
        goto LAB_180503f10;
      }
    }
    FUN_1804ffcd0(alStack_78,plVar11,fVar2,lVar7,uVar16);
    uStack_f8 = (int32_t)*param_2;
    uStack_f4 = *(int32_t *)((int64_t)param_2 + 4);
    uStack_f0 = (int32_t)param_2[1];
    uStack_ec = *(int32_t *)((int64_t)param_2 + 0xc);
    uStack_e8 = (int32_t)*param_1;
    uStack_e4 = *(int32_t *)((int64_t)param_1 + 4);
    uStack_e0 = (int32_t)param_1[1];
    uStack_dc = *(int32_t *)((int64_t)param_1 + 0xc);
    FUN_1805059d0(&lStack_d8,&uStack_e8,&uStack_f8,alStack_78);
    lVar7 = lStack_d0;
    lVar12 = lStack_d8;
    if (alStack_78[0] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_3 = param_3 + -1;
    uStack_c8 = (int32_t)*param_2;
    uStack_c4 = *(int32_t *)((int64_t)param_2 + 4);
    uStack_c0 = (int32_t)param_2[1];
    uStack_bc = *(int32_t *)((int64_t)param_2 + 0xc);
    lStack_b8 = lStack_d8;
    lStack_b0 = lStack_d0;
    FUN_180503d70(&lStack_b8,&uStack_c8,param_3);
    *param_2 = lVar12;
    param_2[1] = lVar7;
    lVar12 = (int64_t)(int)param_2[1];
    lVar7 = lVar12 - lVar15;
  } while( true );
}





