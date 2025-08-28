#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part121.c - 6 个函数

// 函数: void FUN_18033d75f(void)
void FUN_18033d75f(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t unaff_RSI;
  uint *unaff_RDI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_R9;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  
  if (unaff_RSI != 0) {
    return;
  }
  lVar8 = in_R9 - (int64_t)unaff_RDI >> 2;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_RDI[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar5 = lVar5 + -2;
      lVar6 = lVar7;
      lVar2 = lVar5;
      while (lVar2 < lVar8) {
        lVar3 = lVar2 + -1;
        if (unaff_RDI[lVar2 + -1] <= unaff_RDI[lVar2]) {
          lVar3 = lVar2;
        }
        unaff_RDI[lVar6] = unaff_RDI[lVar3];
        lVar6 = lVar3;
        lVar2 = lVar3 * 2 + 2;
      }
      if (lVar2 == lVar8) {
        unaff_RDI[lVar6] = unaff_RDI[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (lVar7 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar2]) break;
        unaff_RDI[lVar6] = unaff_RDI[lVar2];
        lVar6 = lVar2;
      }
      unaff_RDI[lVar6] = uVar1;
    } while (lVar7 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (uint *)(in_R9 + -4);
    do {
      uVar1 = *puVar4;
      lVar8 = lVar8 + -1;
      lVar7 = 2;
      *puVar4 = *unaff_RDI;
      bVar9 = lVar8 == 2;
      lVar5 = 0;
      lVar6 = 0;
      if (2 < lVar8) {
        do {
          lVar5 = lVar7 + -1;
          if (unaff_RDI[lVar7 + -1] <= unaff_RDI[lVar7]) {
            lVar5 = lVar7;
          }
          lVar7 = lVar5 * 2 + 2;
          unaff_RDI[lVar6] = unaff_RDI[lVar5];
          bVar9 = lVar7 == lVar8;
          lVar6 = lVar5;
        } while (lVar7 < lVar8);
      }
      if (bVar9) {
        unaff_RDI[lVar5] = unaff_RDI[lVar7 + -1];
        lVar5 = lVar7 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar8]) break;
        unaff_RDI[lVar5] = unaff_RDI[lVar8];
        lVar5 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RDI[lVar5] = uVar1;
      lVar8 = (4 - (int64_t)unaff_RDI) + (int64_t)puVar4 >> 2;
    } while (1 < lVar8);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033da00)
// WARNING: Removing unreachable block (ram,0x00018033da0a)
// WARNING: Removing unreachable block (ram,0x00018033da1a)
// WARNING: Removing unreachable block (ram,0x00018033da20)
// WARNING: Removing unreachable block (ram,0x00018033da2d)
// WARNING: Removing unreachable block (ram,0x00018033da31)
// WARNING: Removing unreachable block (ram,0x00018033da48)
// WARNING: Removing unreachable block (ram,0x00018033da4a)
// WARNING: Removing unreachable block (ram,0x00018033da57)
// WARNING: Removing unreachable block (ram,0x00018033da60)
// WARNING: Removing unreachable block (ram,0x00018033da6f)
// WARNING: Removing unreachable block (ram,0x00018033da7b)
// WARNING: Removing unreachable block (ram,0x00018033da7f)
// WARNING: Removing unreachable block (ram,0x00018033d9f1)



// 函数: void FUN_18033d769(void)
void FUN_18033d769(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint *puVar4;
  uint *unaff_RDI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_R9;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  
  lVar8 = in_R9 - (int64_t)unaff_RDI >> 2;
  if (1 < lVar8) {
    lVar7 = (lVar8 + -2 >> 1) + 1;
    lVar5 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_RDI[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar5 = lVar5 + -2;
      lVar6 = lVar7;
      lVar2 = lVar5;
      while (lVar2 < lVar8) {
        lVar3 = lVar2 + -1;
        if (unaff_RDI[lVar2 + -1] <= unaff_RDI[lVar2]) {
          lVar3 = lVar2;
        }
        unaff_RDI[lVar6] = unaff_RDI[lVar3];
        lVar6 = lVar3;
        lVar2 = lVar3 * 2 + 2;
      }
      if (lVar2 == lVar8) {
        unaff_RDI[lVar6] = unaff_RDI[lVar2 + -1];
        lVar6 = lVar2 + -1;
      }
      while (lVar7 < lVar6) {
        lVar2 = lVar6 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar2]) break;
        unaff_RDI[lVar6] = unaff_RDI[lVar2];
        lVar6 = lVar2;
      }
      unaff_RDI[lVar6] = uVar1;
    } while (lVar7 != 0);
  }
  if (1 < lVar8) {
    puVar4 = (uint *)(in_R9 + -4);
    do {
      uVar1 = *puVar4;
      lVar8 = lVar8 + -1;
      lVar7 = 2;
      *puVar4 = *unaff_RDI;
      bVar9 = lVar8 == 2;
      lVar5 = 0;
      lVar6 = 0;
      if (2 < lVar8) {
        do {
          lVar5 = lVar7 + -1;
          if (unaff_RDI[lVar7 + -1] <= unaff_RDI[lVar7]) {
            lVar5 = lVar7;
          }
          lVar7 = lVar5 * 2 + 2;
          unaff_RDI[lVar6] = unaff_RDI[lVar5];
          bVar9 = lVar7 == lVar8;
          lVar6 = lVar5;
        } while (lVar7 < lVar8);
      }
      if (bVar9) {
        unaff_RDI[lVar5] = unaff_RDI[lVar7 + -1];
        lVar5 = lVar7 + -1;
      }
      while (0 < lVar5) {
        lVar8 = lVar5 + -1 >> 1;
        if (uVar1 <= unaff_RDI[lVar8]) break;
        unaff_RDI[lVar5] = unaff_RDI[lVar8];
        lVar5 = lVar8;
      }
      puVar4 = puVar4 + -1;
      unaff_RDI[lVar5] = uVar1;
      lVar8 = (4 - (int64_t)unaff_RDI) + (int64_t)puVar4 >> 2;
    } while (1 < lVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18033d790(int64_t *param_1,int64_t *param_2,int64_t *param_3,int32_t *param_4)

{
  int64_t *plVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void *puVar8;
  
  *param_1 = (int64_t)param_4;
  if (param_2 != param_3) {
    plVar6 = param_2 + 0x12;
    do {
      *param_4 = (int)plVar6[-0x12];
      uVar3 = *(int32_t *)((int64_t)plVar6 + -0x7c);
      lVar5 = plVar6[-0xf];
      uVar4 = *(int32_t *)((int64_t)plVar6 + -0x74);
      param_4[4] = (int)plVar6[-0x10];
      param_4[5] = uVar3;
      param_4[6] = (int)lVar5;
      param_4[7] = uVar4;
      uVar3 = *(int32_t *)((int64_t)plVar6 + -0x6c);
      lVar5 = plVar6[-0xd];
      uVar4 = *(int32_t *)((int64_t)plVar6 + -100);
      param_4[8] = (int)plVar6[-0xe];
      param_4[9] = uVar3;
      param_4[10] = (int)lVar5;
      param_4[0xb] = uVar4;
      *(void **)(param_4 + 0xc) = &system_state_ptr;
      *(uint64_t *)(param_4 + 0xe) = 0;
      param_4[0x10] = 0;
      *(void **)(param_4 + 0xc) = &memory_allocator_3480_ptr;
      *(int32_t **)(param_4 + 0xe) = param_4 + 0x12;
      param_4[0x10] = 0;
      *(int8_t *)(param_4 + 0x12) = 0;
      param_4[0x10] = (int)plVar6[-10];
      puVar8 = &system_buffer_ptr;
      if ((void *)plVar6[-0xb] != (void *)0x0) {
        puVar8 = (void *)plVar6[-0xb];
      }
      strcpy_s(*(uint64_t *)(param_4 + 0xe),0x40,puVar8);
      lVar7 = *plVar6 - plVar6[-1] >> 3;
      uVar2 = *(uint *)(plVar6 + 2);
      param_4[0x28] = uVar2;
      lVar5 = 0;
      if (lVar7 != 0) {
        lVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,uVar2 & 0xff);
      }
      *(int64_t *)(param_4 + 0x22) = lVar5;
      *(int64_t *)(param_4 + 0x24) = lVar5;
      *(int64_t *)(param_4 + 0x26) = lVar5 + lVar7 * 8;
      lVar5 = *(int64_t *)(param_4 + 0x22);
      lVar7 = plVar6[-1];
      if (lVar7 != *plVar6) {
                    // WARNING: Subroutine does not return
        memmove(lVar5,lVar7,*plVar6 - lVar7);
      }
      *(int64_t *)(param_4 + 0x24) = lVar5;
      *param_1 = *param_1 + 0xb0;
      param_4 = (int32_t *)*param_1;
      plVar1 = plVar6 + 4;
      plVar6 = plVar6 + 0x16;
    } while (plVar1 != param_3);
  }
  return param_1;
}





// 函数: void FUN_18033d900(uint *param_1,uint *param_2,uint *param_3)
void FUN_18033d900(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint64_t uVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  
  uVar9 = (int64_t)param_2 - (int64_t)param_1 >> 2;
  if (1 < (int64_t)uVar9) {
    uVar8 = ((int64_t)(uVar9 - 2) >> 1) + 1;
    uVar4 = uVar8 * 2 + 2;
    do {
      uVar1 = param_1[uVar8 - 1];
      uVar8 = uVar8 - 1;
      uVar4 = uVar4 - 2;
      uVar5 = uVar8;
      uVar2 = uVar4;
      while ((int64_t)uVar2 < (int64_t)uVar9) {
        uVar7 = uVar2 - 1;
        if (param_1[uVar2 - 1] <= param_1[uVar2]) {
          uVar7 = uVar2;
        }
        param_1[uVar5] = param_1[uVar7];
        uVar5 = uVar7;
        uVar2 = uVar7 * 2 + 2;
      }
      if (uVar2 == uVar9) {
        param_1[uVar5] = param_1[uVar2 - 1];
        uVar5 = uVar2 - 1;
      }
      while ((int64_t)uVar8 < (int64_t)uVar5) {
        uVar2 = (int64_t)(uVar5 - 1) >> 1;
        if (uVar1 <= param_1[uVar2]) break;
        param_1[uVar5] = param_1[uVar2];
        uVar5 = uVar2;
      }
      param_1[uVar5] = uVar1;
    } while (uVar8 != 0);
  }
  uVar8 = 0;
  uVar4 = (uint64_t)((int64_t)param_3 + (3 - (int64_t)param_2)) >> 2;
  if (param_3 < param_2) {
    uVar4 = uVar8;
  }
  puVar3 = param_2;
  uVar5 = uVar8;
  if (uVar4 != 0) {
    do {
      uVar1 = *puVar3;
      if (uVar1 < *param_1) {
        uVar7 = 2;
        *puVar3 = *param_1;
        bVar10 = uVar9 == 2;
        uVar2 = uVar8;
        uVar6 = uVar8;
        if (2 < (int64_t)uVar9) {
          do {
            uVar2 = uVar7 - 1;
            if (param_1[uVar7 - 1] <= param_1[uVar7]) {
              uVar2 = uVar7;
            }
            uVar7 = uVar2 * 2 + 2;
            param_1[uVar6] = param_1[uVar2];
            bVar10 = uVar7 == uVar9;
            uVar6 = uVar2;
          } while ((int64_t)uVar7 < (int64_t)uVar9);
        }
        if (bVar10) {
          param_1[uVar2] = param_1[uVar7 - 1];
          uVar2 = uVar7 - 1;
        }
        while (0 < (int64_t)uVar2) {
          uVar7 = (int64_t)(uVar2 - 1) >> 1;
          if (uVar1 <= param_1[uVar7]) break;
          param_1[uVar2] = param_1[uVar7];
          uVar2 = uVar7;
        }
        param_1[uVar2] = uVar1;
      }
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (1 < (int64_t)uVar9) {
    param_2 = param_2 + -1;
    do {
      uVar1 = *param_2;
      uVar9 = uVar9 - 1;
      uVar5 = 2;
      *param_2 = *param_1;
      bVar10 = uVar9 == 2;
      uVar4 = uVar8;
      uVar2 = uVar8;
      if (2 < (int64_t)uVar9) {
        do {
          uVar4 = uVar5 - 1;
          if (param_1[uVar5 - 1] <= param_1[uVar5]) {
            uVar4 = uVar5;
          }
          uVar5 = uVar4 * 2 + 2;
          param_1[uVar2] = param_1[uVar4];
          bVar10 = uVar5 == uVar9;
          uVar2 = uVar4;
        } while ((int64_t)uVar5 < (int64_t)uVar9);
      }
      if (bVar10) {
        param_1[uVar4] = param_1[uVar5 - 1];
        uVar4 = uVar5 - 1;
      }
      while (0 < (int64_t)uVar4) {
        uVar9 = (int64_t)(uVar4 - 1) >> 1;
        if (uVar1 <= param_1[uVar9]) break;
        param_1[uVar4] = param_1[uVar9];
        uVar4 = uVar9;
      }
      param_2 = param_2 + -1;
      param_1[uVar4] = uVar1;
      uVar9 = (4 - (int64_t)param_1) + (int64_t)param_2 >> 2;
    } while (1 < (int64_t)uVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18033db70(int64_t param_1,int64_t param_2)
void FUN_18033db70(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



int64_t FUN_18033dc50(int64_t param_1,int64_t param_2)

{
  int iVar1;
  uint uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  iVar5 = 0;
  *(int *)(param_1 + 0xc0) = iVar1;
  if (0 < iVar1) {
    plVar3 = (int64_t *)(param_2 + 8);
    param_2 = param_1 - param_2;
    do {
      uVar2 = *(uint *)(plVar3 + 1);
      uVar4 = (uint64_t)uVar2;
      if (*plVar3 != 0) {
        CoreMemoryPoolProcessor(param_2 + -8 + (int64_t)plVar3,uVar4);
      }
      if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_2 + (int64_t)plVar3),*plVar3,uVar4);
      }
      *(int32_t *)(param_2 + 8 + (int64_t)plVar3) = 0;
      if (*(int64_t *)(param_2 + (int64_t)plVar3) != 0) {
        *(int8_t *)(uVar4 + *(int64_t *)(param_2 + (int64_t)plVar3)) = 0;
      }
      iVar5 = iVar5 + 1;
      *(int32_t *)(param_2 + 0x14 + (int64_t)plVar3) = *(int32_t *)((int64_t)plVar3 + 0x14);
      *(int *)(param_2 + 0x18 + (int64_t)plVar3) = (int)plVar3[3];
      *(int32_t *)(param_2 + 0x1c + (int64_t)plVar3) = *(int32_t *)((int64_t)plVar3 + 0x1c);
      *(char *)(param_2 + 0x20 + (int64_t)plVar3) = (char)plVar3[4];
      plVar3 = plVar3 + 6;
    } while (iVar5 < *(int *)(param_1 + 0xc0));
  }
  return param_1;
}





// 函数: void FUN_18033dc75(int64_t param_1,int64_t param_2)
void FUN_18033dc75(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t unaff_RBP;
  uint64_t uVar3;
  int unaff_R14D;
  
  plVar2 = (int64_t *)(param_2 + 8);
  param_1 = param_1 - param_2;
  do {
    uVar1 = *(uint *)(plVar2 + 1);
    uVar3 = (uint64_t)uVar1;
    if (*plVar2 != 0) {
      CoreMemoryPoolProcessor(param_1 + -8 + (int64_t)plVar2,uVar3);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_1 + (int64_t)plVar2),*plVar2,uVar3);
    }
    *(int32_t *)(param_1 + 8 + (int64_t)plVar2) = 0;
    if (*(int64_t *)(param_1 + (int64_t)plVar2) != 0) {
      *(int8_t *)(uVar3 + *(int64_t *)(param_1 + (int64_t)plVar2)) = 0;
    }
    unaff_R14D = unaff_R14D + 1;
    *(int32_t *)(param_1 + 0x14 + (int64_t)plVar2) = *(int32_t *)((int64_t)plVar2 + 0x14);
    *(int *)(param_1 + 0x18 + (int64_t)plVar2) = (int)plVar2[3];
    *(int32_t *)(param_1 + 0x1c + (int64_t)plVar2) = *(int32_t *)((int64_t)plVar2 + 0x1c);
    *(char *)(param_1 + 0x20 + (int64_t)plVar2) = (char)plVar2[4];
    plVar2 = plVar2 + 6;
  } while (unaff_R14D < *(int *)(unaff_RBP + 0xc0));
  return;
}





// 函数: void FUN_18033dd07(void)
void FUN_18033dd07(void)

{
  return;
}



uint64_t * FUN_18033dd20(uint64_t param_1,uint64_t *param_2)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_18033eb00();
  FUN_18033f560();
  FUN_180342f20();
  FUN_18033ddb0();
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



