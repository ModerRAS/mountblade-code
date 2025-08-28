#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part166_sub001.c - 9 个函数

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part166.c - 9 个函数


// 函数: void FUN_18014f220(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_18014f220(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  uint64_t *puVar1;
  int8_t uVar2;
  
  puVar1 = (uint64_t *)*param_4;
  uVar2 = FUN_18014d7f0(puVar1[1],puVar1[2],param_1);
  *(int8_t *)*puVar1 = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18014f250(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c000e0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18014f3f0(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180bfffe0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
      FUN_18014aa50(lVar1,*param_2);
      *param_1 = lVar1;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18014f520(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180c00020;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
      FUN_18014aa50(lVar1,*param_2);
      *param_1 = lVar1;
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






// 函数: void FUN_18014f660(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_18014f660(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  
  lVar1 = *param_4;
  FUN_18014d7f0(*(uint64_t *)
                 (*(int64_t *)(lVar1 + 0x28) + 200 + (int64_t)*(int *)(lVar1 + 0x20) * 8),
                *(uint64_t *)(lVar1 + 0x30),param_1);
                    // WARNING: Could not recover jumptable at 0x00018014f691. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(lVar1 + 0x18))(lVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18014f6a0(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180bfffa0;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
        lVar2 = *param_2;
        *(uint64_t *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(lVar2 + 0x18);
        }
        *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(lVar2 + 0x20);
        *(uint64_t *)(lVar1 + 0x28) = *(uint64_t *)(lVar2 + 0x28);
        *(uint64_t *)(lVar1 + 0x30) = *(uint64_t *)(lVar2 + 0x30);
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}






// 函数: void FUN_18014f810(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_18014f810(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  
  lVar1 = *param_4;
  FUN_18014ce90(*(uint64_t *)(*(int64_t *)(lVar1 + 0x20) + 0xc0),param_1);
                    // WARNING: Could not recover jumptable at 0x00018014f838. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(lVar1 + 0x18))(lVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18014f840(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180bfff20;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
        lVar2 = *param_2;
        *(uint64_t *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(uint64_t *)(lVar1 + 0x18) = *(uint64_t *)(lVar2 + 0x18);
        }
        *(uint64_t *)(lVar1 + 0x20) = *(uint64_t *)(lVar2 + 0x20);
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



uint64_t * FUN_18014f980(uint64_t *param_1,int8_t *param_2,uint64_t *param_3)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  bool bVar7;
  bool bVar8;
  
  bVar8 = true;
  puVar6 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    uVar3 = *param_3;
    puVar5 = (uint64_t *)param_1[2];
    do {
      puVar6 = puVar5;
      uVar4 = puVar6[4];
      if (uVar3 < uVar4) {
LAB_18014fa54:
        puVar5 = (uint64_t *)puVar6[1];
        bVar8 = true;
      }
      else {
        if (uVar3 <= uVar4) {
          fVar1 = *(float *)(param_3 + 1);
          fVar2 = *(float *)(puVar6 + 5);
          if (fVar1 == fVar2) {
            fVar1 = *(float *)((int64_t)param_3 + 0xc);
            fVar2 = *(float *)((int64_t)puVar6 + 0x2c);
            if (fVar1 != fVar2) {
              bVar8 = fVar2 == fVar1;
              bVar7 = fVar2 < fVar1;
              goto LAB_18014f9f9;
            }
            bVar8 = *(float *)(param_3 + 2) < *(float *)(puVar6 + 6);
          }
          else {
            bVar8 = fVar2 == fVar1;
            bVar7 = fVar2 < fVar1;
LAB_18014f9f9:
            bVar8 = !bVar7 && !bVar8;
          }
          if (bVar8) goto LAB_18014fa54;
        }
        if (uVar3 <= uVar4) {
          fVar1 = *(float *)(puVar6 + 5);
          fVar2 = *(float *)(param_3 + 1);
          if (fVar1 == fVar2) {
            fVar1 = *(float *)((int64_t)puVar6 + 0x2c);
            fVar2 = *(float *)((int64_t)param_3 + 0xc);
            if (fVar1 != fVar2) {
              bVar8 = fVar2 == fVar1;
              bVar7 = fVar2 < fVar1;
              goto LAB_18014fa3c;
            }
            bVar8 = *(float *)(puVar6 + 6) < *(float *)(param_3 + 2);
          }
          else {
            bVar8 = fVar2 == fVar1;
            bVar7 = fVar2 < fVar1;
LAB_18014fa3c:
            bVar8 = !bVar7 && !bVar8;
          }
          if ((!bVar8) && ((byte)param_3[3] < *(byte *)(puVar6 + 7))) goto LAB_18014fa54;
        }
        puVar5 = (uint64_t *)*puVar6;
        bVar8 = false;
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  puVar5 = puVar6;
  if (bVar8) {
    if (puVar6 == (uint64_t *)param_1[1]) {
      *param_2 = 1;
      return puVar6;
    }
    puVar5 = (uint64_t *)func_0x00018066b9a0(puVar6);
  }
  uVar3 = puVar5[4];
  uVar4 = *param_3;
  if (uVar3 < uVar4) goto LAB_18014fb44;
  if (uVar3 <= uVar4) {
    fVar1 = *(float *)(puVar5 + 5);
    fVar2 = *(float *)(param_3 + 1);
    if (fVar1 == fVar2) {
      fVar1 = *(float *)((int64_t)puVar5 + 0x2c);
      fVar2 = *(float *)((int64_t)param_3 + 0xc);
      if (fVar1 != fVar2) {
        bVar8 = fVar2 == fVar1;
        bVar7 = fVar2 < fVar1;
        goto LAB_18014fada;
      }
      bVar8 = *(float *)(puVar5 + 6) < *(float *)(param_3 + 2);
    }
    else {
      bVar8 = fVar2 == fVar1;
      bVar7 = fVar2 < fVar1;
LAB_18014fada:
      bVar8 = !bVar7 && !bVar8;
    }
    if (bVar8) goto LAB_18014fb44;
  }
  if (uVar4 < uVar3) goto LAB_18014fb2e;
  fVar1 = *(float *)(param_3 + 1);
  fVar2 = *(float *)(puVar5 + 5);
  if (fVar1 == fVar2) {
    fVar1 = *(float *)((int64_t)param_3 + 0xc);
    fVar2 = *(float *)((int64_t)puVar5 + 0x2c);
    if (fVar1 != fVar2) {
      bVar8 = fVar2 == fVar1;
      bVar7 = fVar2 < fVar1;
      goto LAB_18014fb1d;
    }
    bVar8 = *(float *)(param_3 + 2) < *(float *)(puVar5 + 6);
  }
  else {
    bVar8 = fVar2 == fVar1;
    bVar7 = fVar2 < fVar1;
LAB_18014fb1d:
    bVar8 = !bVar7 && !bVar8;
  }
  if ((!bVar8) && (*(byte *)(puVar5 + 7) < (byte)param_3[3])) {
LAB_18014fb44:
    *param_2 = 1;
    return puVar6;
  }
LAB_18014fb2e:
  *param_2 = 0;
  return puVar5;
}






// 函数: void FUN_18014fb60(int64_t param_1,int64_t param_2,uint64_t param_3)
void FUN_18014fb60(int64_t param_1,int64_t param_2,uint64_t param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18014fbc0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  
  *param_1 = (int64_t)param_4;
  if (param_2 != param_3) {
    plVar5 = param_2 + 6;
    do {
      lVar4 = plVar5[-5] - plVar5[-6] >> 3;
      uVar2 = *(uint *)(plVar5 + -3);
      *(uint *)(param_4 + 3) = uVar2;
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,uVar2 & 0xff);
      }
      *param_4 = lVar3;
      param_4[1] = lVar3;
      param_4[2] = lVar3 + lVar4 * 8;
      lVar4 = plVar5[-6];
      if (lVar4 != plVar5[-5]) {
                    // WARNING: Subroutine does not return
        memmove(*param_4,lVar4,plVar5[-5] - lVar4);
      }
      param_4[1] = *param_4;
      param_4[4] = plVar5[-2];
      lVar4 = *plVar5 - plVar5[-1] >> 4;
      uVar2 = *(uint *)(plVar5 + 2);
      *(uint *)(param_4 + 8) = uVar2;
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 4,uVar2 & 0xff);
      }
      param_4[5] = lVar3;
      param_4[6] = lVar3;
      param_4[7] = lVar4 * 0x10 + lVar3;
      lVar4 = param_4[5];
      lVar3 = plVar5[-1];
      if (lVar3 != *plVar5) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar3,*plVar5 - lVar3);
      }
      param_4[6] = lVar4;
      lVar4 = plVar5[4] - plVar5[3] >> 2;
      uVar2 = *(uint *)(plVar5 + 6);
      *(uint *)(param_4 + 0xc) = uVar2;
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 4,uVar2 & 0xff);
      }
      param_4[9] = lVar3;
      param_4[10] = lVar3;
      param_4[0xb] = lVar3 + lVar4 * 4;
      lVar4 = param_4[9];
      lVar3 = plVar5[3];
      if (lVar3 != plVar5[4]) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar3,plVar5[4] - lVar3);
      }
      param_4[10] = lVar4;
      lVar4 = (plVar5[8] - plVar5[7]) / 6 + (plVar5[8] - plVar5[7] >> 0x3f);
      lVar4 = (lVar4 >> 2) - (lVar4 >> 0x3f);
      uVar2 = *(uint *)(plVar5 + 10);
      *(uint *)(param_4 + 0x10) = uVar2;
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 0x18,uVar2 & 0xff);
      }
      param_4[0xd] = lVar3;
      param_4[0xe] = lVar3;
      param_4[0xf] = lVar3 + lVar4 * 0x18;
      lVar4 = param_4[0xd];
      lVar3 = plVar5[7];
      if (lVar3 != plVar5[8]) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar3,plVar5[8] - lVar3);
      }
      param_4[0xe] = lVar4;
      *param_1 = *param_1 + 0x88;
      param_4 = (int64_t *)*param_1;
      plVar1 = plVar5 + 0xb;
      plVar5 = plVar5 + 0x11;
    } while (plVar1 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18014fe60(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t lStackX_8;
  int64_t *plStackX_18;
  
  lStackX_8 = (param_2 - param_1) / 0x88;
  if (0 < lStackX_8) {
    plVar7 = param_3 + 10;
    plVar10 = (int64_t *)(param_1 + 0x70);
    plStackX_18 = param_3;
    do {
      if (plStackX_18 != plVar10 + -0xe) {
        lVar6 = plVar10[-0xd];
        lVar2 = plVar10[-0xe];
        lVar4 = *plStackX_18;
        lVar9 = lVar6 - lVar2;
        uVar8 = lVar9 >> 3;
        if ((uint64_t)(plVar7[-8] - lVar4 >> 3) < uVar8) {
          if (uVar8 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 8,(char)plVar7[-7]);
          }
          if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar2,lVar9);
          }
          if (*plStackX_18 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lVar6 = lVar4 + uVar8 * 8;
          *plStackX_18 = lVar4;
          plVar7[-9] = lVar6;
          plVar7[-8] = lVar6;
        }
        else {
          lVar3 = plVar7[-9];
          uVar5 = lVar3 - lVar4 >> 3;
          if (uVar5 < uVar8) {
            lVar9 = uVar5 * 8 + lVar2;
            if (lVar2 != lVar9) {
                    // WARNING: Subroutine does not return
              memmove(lVar4,lVar2);
            }
            if (lVar9 != lVar6) {
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar9,lVar6 - lVar9);
            }
            plVar7[-9] = lVar3;
          }
          else {
            if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
              memmove(lVar4,lVar2,lVar9);
            }
            plVar7[-9] = lVar4;
          }
        }
      }
      plVar7[-6] = plVar10[-10];
      FUN_180150240(plVar7 + -5,plVar10 + -9);
      plVar1 = plVar7 + -1;
      if (plVar1 != plVar10 + -5) {
        lVar6 = plVar10[-4];
        lVar2 = plVar10[-5];
        lVar4 = *plVar1;
        lVar9 = lVar6 - lVar2;
        uVar8 = lVar9 >> 2;
        if ((uint64_t)(plVar7[1] - lVar4 >> 2) < uVar8) {
          if (uVar8 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 4,(char)plVar7[2]);
          }
          if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar2,lVar9);
          }
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lVar6 = lVar4 + uVar8 * 4;
          *plVar1 = lVar4;
          *plVar7 = lVar6;
          plVar7[1] = lVar6;
        }
        else {
          lVar3 = *plVar7;
          uVar5 = lVar3 - lVar4 >> 2;
          if (uVar5 < uVar8) {
            lVar9 = uVar5 * 4 + lVar2;
            if (lVar2 != lVar9) {
                    // WARNING: Subroutine does not return
              memmove(lVar4,lVar2);
            }
            if (lVar9 != lVar6) {
                    // WARNING: Subroutine does not return
              memmove(lVar3,lVar9,lVar6 - lVar9);
            }
            *plVar7 = lVar3;
          }
          else {
            if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
              memmove(lVar4,lVar2,lVar9);
            }
            *plVar7 = lVar4;
          }
        }
      }
      plVar1 = plVar7 + 3;
      if (plVar1 != plVar10 + -1) {
        lVar6 = *plVar10;
        lVar2 = plVar10[-1];
        lVar4 = (lVar6 - lVar2) / 6 + (lVar6 - lVar2 >> 0x3f);
        uVar8 = (lVar4 >> 2) - (lVar4 >> 0x3f);
        if ((uint64_t)((plVar7[5] - *plVar1) / 0x18) < uVar8) {
          if (uVar8 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 0x18,(char)plVar7[6]);
          }
          FUN_180082a50(lVar2,lVar6,lVar4);
          if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *plVar1 = lVar4;
          lVar4 = lVar4 + uVar8 * 0x18;
          plVar7[4] = lVar4;
          plVar7[5] = lVar4;
        }
        else {
          uVar5 = (plVar7[4] - *plVar1) / 0x18;
          if (uVar5 < uVar8) {
            lVar4 = lVar2 + uVar5 * 0x18;
            FUN_180082a50(lVar2,lVar4);
            lVar6 = FUN_180082a50(lVar4,lVar6,plVar7[4]);
          }
          else {
            lVar6 = FUN_180082a50(lVar2,lVar6);
          }
          plVar7[4] = lVar6;
        }
      }
      param_3 = plStackX_18 + 0x11;
      lStackX_8 = lStackX_8 + -1;
      plVar7 = plVar7 + 0x11;
      plVar10 = plVar10 + 0x11;
      plStackX_18 = param_3;
    } while (0 < lStackX_8);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18014fe9c(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t unaff_RBX;
  int64_t *plVar7;
  uint64_t unaff_RBP;
  uint64_t uVar8;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar9;
  int64_t *unaff_R13;
  uint64_t unaff_R14;
  int64_t *plVar10;
  uint64_t unaff_R15;
  int64_t in_stack_00000060;
  int64_t *in_stack_00000070;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  plVar7 = (int64_t *)(param_3 + 0x50);
  *(uint64_t *)(in_R11 + -0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  plVar10 = (int64_t *)(param_1 + 0x70);
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RDI;
  do {
    if (unaff_R13 != plVar10 + -0xe) {
      lVar6 = plVar10[-0xd];
      lVar2 = plVar10[-0xe];
      lVar4 = *unaff_R13;
      lVar9 = lVar6 - lVar2;
      uVar8 = lVar9 >> 3;
      if ((uint64_t)(plVar7[-8] - lVar4 >> 3) < uVar8) {
        if (uVar8 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 8,(char)plVar7[-7]);
        }
        if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar2,lVar9);
        }
        if (*unaff_R13 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lVar6 = lVar4 + uVar8 * 8;
        *unaff_R13 = lVar4;
        plVar7[-9] = lVar6;
        plVar7[-8] = lVar6;
      }
      else {
        lVar3 = plVar7[-9];
        uVar5 = lVar3 - lVar4 >> 3;
        if (uVar5 < uVar8) {
          lVar9 = uVar5 * 8 + lVar2;
          if (lVar2 != lVar9) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar2);
          }
          if (lVar9 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar3,lVar9,lVar6 - lVar9);
          }
          plVar7[-9] = lVar3;
        }
        else {
          if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar2,lVar9);
          }
          plVar7[-9] = lVar4;
        }
      }
    }
    plVar7[-6] = plVar10[-10];
    FUN_180150240(plVar7 + -5,plVar10 + -9);
    plVar1 = plVar7 + -1;
    if (plVar1 != plVar10 + -5) {
      lVar6 = plVar10[-4];
      lVar2 = plVar10[-5];
      lVar4 = *plVar1;
      lVar9 = lVar6 - lVar2;
      uVar8 = lVar9 >> 2;
      unaff_R13 = in_stack_00000070;
      if ((uint64_t)(plVar7[1] - lVar4 >> 2) < uVar8) {
        if (uVar8 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 4,(char)plVar7[2]);
        }
        if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar2,lVar9);
        }
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lVar6 = lVar4 + uVar8 * 4;
        *plVar1 = lVar4;
        *plVar7 = lVar6;
        plVar7[1] = lVar6;
      }
      else {
        lVar3 = *plVar7;
        uVar5 = lVar3 - lVar4 >> 2;
        if (uVar5 < uVar8) {
          lVar9 = uVar5 * 4 + lVar2;
          if (lVar2 != lVar9) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar2);
          }
          if (lVar9 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar3,lVar9,lVar6 - lVar9);
          }
          *plVar7 = lVar3;
        }
        else {
          if (lVar2 != lVar6) {
                    // WARNING: Subroutine does not return
            memmove(lVar4,lVar2,lVar9);
          }
          *plVar7 = lVar4;
        }
      }
    }
    plVar1 = plVar7 + 3;
    if (plVar1 != plVar10 + -1) {
      lVar6 = *plVar10;
      lVar2 = plVar10[-1];
      lVar4 = (lVar6 - lVar2) / 6 + (lVar6 - lVar2 >> 0x3f);
      uVar8 = (lVar4 >> 2) - (lVar4 >> 0x3f);
      if ((uint64_t)((plVar7[5] - *plVar1) / 0x18) < uVar8) {
        if (uVar8 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 0x18,(char)plVar7[6]);
        }
        FUN_180082a50(lVar2,lVar6,lVar4);
        if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar1 = lVar4;
        lVar4 = lVar4 + uVar8 * 0x18;
        plVar7[4] = lVar4;
        plVar7[5] = lVar4;
      }
      else {
        uVar5 = (plVar7[4] - *plVar1) / 0x18;
        if (uVar5 < uVar8) {
          lVar4 = lVar2 + uVar5 * 0x18;
          FUN_180082a50(lVar2,lVar4);
          lVar6 = FUN_180082a50(lVar4,lVar6,plVar7[4]);
        }
        else {
          lVar6 = FUN_180082a50(lVar2,lVar6);
        }
        plVar7[4] = lVar6;
      }
    }
    unaff_R13 = unaff_R13 + 0x11;
    in_stack_00000060 = in_stack_00000060 + -1;
    plVar7 = plVar7 + 0x11;
    plVar10 = plVar10 + 0x11;
    in_stack_00000070 = unaff_R13;
    if (in_stack_00000060 < 1) {
      return unaff_R13;
    }
  } while( true );
}






// 函数: void FUN_180150227(void)
void FUN_180150227(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180150240(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar7 = lVar3 - lVar2;
    uVar5 = lVar7 >> 4;
    if ((uint64_t)(param_1[2] - lVar1 >> 4) < uVar5) {
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 << 4,(char)param_1[3]);
      }
      if (lVar2 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar7);
      }
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = lVar4;
      lVar4 = lVar4 + uVar5 * 0x10;
      param_1[2] = lVar4;
    }
    else {
      lVar4 = param_1[1];
      uVar6 = lVar4 - lVar1 >> 4;
      if (uVar5 <= uVar6) {
        if (lVar2 == lVar3) {
          param_1[1] = lVar1;
          return param_1;
        }
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar7);
      }
      lVar7 = uVar6 * 0x10 + lVar2;
      if (lVar2 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2);
      }
      if (lVar7 != lVar3) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar7,lVar3 - lVar7);
      }
    }
    param_1[1] = lVar4;
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180150259(int64_t param_1,int64_t *param_2)
void FUN_180150259(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t *unaff_RBX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar6 = lVar2 - lVar1;
  uVar4 = lVar6 >> 4;
  if ((uint64_t)(in_RAX - param_1 >> 4) < uVar4) {
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 << 4,(char)unaff_RBX[3]);
    }
    if (lVar1 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar1,lVar6);
    }
    if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBX = lVar3;
    lVar3 = lVar3 + uVar4 * 0x10;
    unaff_RBX[2] = lVar3;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar5 = lVar3 - param_1 >> 4;
    if (uVar4 <= uVar5) {
      if (lVar1 == lVar2) {
        unaff_RBX[1] = param_1;
        return;
      }
                    // WARNING: Subroutine does not return
      memmove(param_1,lVar1,lVar6);
    }
    lVar6 = uVar5 * 0x10 + lVar1;
    if (lVar1 != lVar6) {
                    // WARNING: Subroutine does not return
      memmove(param_1,lVar1);
    }
    if (lVar6 != lVar2) {
                    // WARNING: Subroutine does not return
      memmove(lVar3,lVar6,lVar2 - lVar6);
    }
  }
  unaff_RBX[1] = lVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18015028d(void)
void FUN_18015028d(void)

{
  int64_t lVar1;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (unaff_RDI == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RDI << 4,(char)unaff_RBX[3]);
  }
  if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = lVar1;
  lVar1 = lVar1 + unaff_RDI * 0x10;
  unaff_RBX[2] = lVar1;
  unaff_RBX[1] = lVar1;
  return;
}






// 函数: void FUN_1801502ec(int64_t param_1)
void FUN_1801502ec(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 4;
  if (uVar3 < unaff_RDI) {
    lVar1 = uVar3 * 0x10 + unaff_RBP;
    if (unaff_RBP != lVar1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(int64_t *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RBP != unaff_RSI) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RBX + 8) = param_1;
  }
  return;
}






