#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part589.c - 9 个函数

// 函数: void FUN_18058f420(uint64_t *param_1)
void FUN_18058f420(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  
  plVar1 = (int64_t *)param_1[8];
  if (plVar1 == (int64_t *)0x0) {
    uVar4 = 0;
    param_1[8] = 0;
    FUN_180532b80(*param_1);
    *param_1 = 0;
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    uVar5 = uVar4;
    if (param_1[3] - lVar2 >> 3 != 0) {
      do {
        FUN_180532b80(*(uint64_t *)(uVar5 + *plVar1));
        *(uint64_t *)(uVar5 + *plVar1) = 0;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        lVar2 = *plVar1;
        uVar5 = uVar5 + 8;
      } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[3] - lVar2 >> 3));
    }
    param_1[3] = lVar2;
    FUN_180590ae0(param_1 + 0x20);
    if (param_1[0x1a] == 0) {
      if ((int64_t *)param_1[7] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)param_1[7] + 0x38))();
      }
      if (*plVar1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (plVar1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar1);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18058f540(int64_t *param_1,int64_t param_2,uint64_t param_3,int8_t param_4)

{
  int64_t *plVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  int32_t uVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0x30) != *(int *)(param_2 + 0x30))) {
    plVar1 = *(int64_t **)param_1[0x1f];
    plStackX_8 = plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    FUN_1802e8db0(plVar1);
    uVar6 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    lVar4 = *param_1;
    if (lVar4 == 0) {
      uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1f8,8,3,uVar6,uVar7);
      lVar4 = FUN_18058f390(uVar3);
      *param_1 = lVar4;
    }
    FUN_18058d930(lVar4,param_2);
    lVar4 = *param_1;
    *(int16_t *)(lVar4 + 8) = 0;
    lVar4 = *(int64_t *)(lVar4 + 0xf8);
    if (lVar4 != 0) {
      *(int8_t *)(lVar4 + 0x126) = 1;
    }
    plStackX_8 = (int64_t *)0x0;
    lVar4 = *param_1;
    lVar5 = FUN_1805e84b0(param_1[0x1f],lVar4 + 0x100,
                          (int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + *(int64_t *)(lVar4 + 0xd0),
                          &plStackX_8,uVar6,uVar7,&plStackX_8);
    lVar4 = *param_1;
    if (((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0)) >>
          8 & 1) == 0) || (0 < *(short *)(lVar4 + 8))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(int8_t *)(lVar5 + 0x126) = uVar2;
    *(int64_t *)(*param_1 + 0xf8) = lVar5;
    *(int8_t *)(lVar5 + 0x88) = param_4;
    if (*(int64_t *)(lVar5 + 8) != 0) {
      func_0x0001805ec5f0(*(int64_t *)(lVar5 + 8),0xff);
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058f6e0(int64_t *param_1,int64_t param_2,short param_3,uint64_t param_4,
void FUN_18058f6e0(int64_t *param_1,int64_t param_2,short param_3,uint64_t param_4,
                  int8_t param_5)

{
  int64_t *plVar1;
  char cVar2;
  int8_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plStackX_8;
  int32_t uVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    plVar1 = *(int64_t **)param_1[0x1f];
    plStackX_8 = plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    FUN_1802e8db0(plVar1);
    uVar7 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1f8,8,3,uVar7);
    lVar5 = FUN_18058f390(uVar4);
    *param_1 = lVar5;
    FUN_18058d930(lVar5,param_2);
    lVar5 = *param_1;
    *(short *)(lVar5 + 8) = param_3;
    if (*(int64_t *)(lVar5 + 0xf8) != 0) {
      FUN_180507860();
    }
    lVar5 = param_1[0x1f];
  }
  else {
    if ((0 < *(short *)(lVar5 + 8)) || (*(int *)(lVar5 + 0x30) == *(int *)(param_2 + 0x30))) {
      param_3 = *(short *)(lVar5 + 8) + param_3;
      *(short *)(lVar5 + 8) = param_3;
      lVar6 = *(int64_t *)(lVar5 + 0xf8);
      if (lVar6 == 0) {
        return;
      }
      if ((0 < param_3) &&
         ((*(short *)((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x96 + *(int64_t *)(lVar5 + 0xd0))
           <= *(short *)(lVar5 + 10) || (cVar2 = func_0x000180507950(), cVar2 == '\0')))) {
        *(int8_t *)(lVar6 + 0x126) = 0;
        return;
      }
      *(int8_t *)(lVar6 + 0x126) = 1;
      return;
    }
    FUN_18058d930();
    lVar5 = *param_1;
    *(short *)(lVar5 + 8) = param_3;
    if (*(int64_t *)(lVar5 + 0xf8) != 0) {
      FUN_180507860();
    }
    plVar1 = *(int64_t **)param_1[0x1f];
    plStackX_8 = plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    FUN_1802e8db0(plVar1);
    uVar7 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    lVar5 = param_1[0x1f];
  }
  plStackX_8 = (int64_t *)0x0;
  lVar6 = *param_1;
  lVar6 = FUN_1805e84b0(lVar5,lVar6 + 0x100,
                        (int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + *(int64_t *)(lVar6 + 0xd0),
                        &plStackX_8,uVar7,uVar8,&plStackX_8);
  lVar5 = *param_1;
  if (((*(uint *)((int64_t)*(int *)(lVar5 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar5 + 0xd0)) >> 8
       & 1) == 0) || (0 < *(short *)(lVar5 + 8))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(int8_t *)(lVar6 + 0x126) = uVar3;
  *(int64_t *)(*param_1 + 0xf8) = lVar6;
  *(int8_t *)(lVar6 + 0x88) = param_5;
  if (*(int64_t *)(lVar6 + 8) != 0) {
    func_0x0001805ec5f0(*(int64_t *)(lVar6 + 8),0xff);
  }
  return;
}



uint64_t FUN_18058f970(int64_t param_1)

{
  char cVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    if (((*(uint *)((int64_t)*(int *)(param_1 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(param_1 + 0xd0)
                   ) >> 9 & 1) == 0) || (0 < *(short *)(param_1 + 8))) {
      cVar1 = func_0x000180534fb0();
      if ((cVar1 == '\0') || (0 < *(short *)(param_1 + 8))) {
        return 1;
      }
    }
  }
  return 0;
}





// 函数: void FUN_18058fb50(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18058fb50(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  
  *(int32_t *)(param_1 + 6) = 0xffffffff;
  param_1[0x1b] = param_1[0x1a];
  uVar4 = 0;
  *(int16_t *)((int64_t)param_1 + 10) = 0;
  param_1[0x17] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x54) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x5c) = 0;
  *(int32_t *)(param_1 + 9) = 0x3f800000;
  plVar1 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (int64_t *)param_1[8];
  if (plVar1 == (int64_t *)0x0) {
    param_1[8] = 0;
    param_1[0x1f] = 0;
    *(int16_t *)(param_1 + 1) = 0;
    lVar2 = *param_1;
    if (lVar2 != 0) {
      FUN_18058f420(lVar2);
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
    *param_1 = 0;
    lVar2 = param_1[2];
    uVar5 = uVar4;
    if (param_1[3] - lVar2 >> 3 != 0) {
      do {
        lVar2 = *(int64_t *)(uVar5 + lVar2);
        if (lVar2 != 0) {
          FUN_18058f420(lVar2);
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar2);
        }
        *(uint64_t *)(uVar5 + param_1[2]) = 0;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        lVar2 = param_1[2];
        uVar5 = uVar5 + 8;
      } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[3] - lVar2 >> 3));
    }
    param_1[3] = lVar2;
    *(int32_t *)(param_1 + 0x1e) = 0;
    *(int8_t *)((int64_t)param_1 + 0xcc) = 0;
    *(int32_t *)((int64_t)param_1 + 0x34) = 0xffffffff;
    *(uint64_t *)((int64_t)param_1 + 0xc4) = 0xffffffffffffffff;
    *(int32_t *)(param_1 + 0x18) = 0xffffffff;
    *(uint64_t *)((int64_t)param_1 + 100) = 0x3f800000;
    *(uint64_t *)((int64_t)param_1 + 0x6c) = 0;
    *(uint64_t *)((int64_t)param_1 + 0x74) = 0x3f80000000000000;
    *(uint64_t *)((int64_t)param_1 + 0x7c) = 0;
    *(uint64_t *)((int64_t)param_1 + 0x84) = 0;
    *(uint64_t *)((int64_t)param_1 + 0x8c) = 0x3f800000;
    *(uint64_t *)((int64_t)param_1 + 0x94) = 0;
    *(uint64_t *)((int64_t)param_1 + 0x9c) = 0x3f80000000000000;
    return;
  }
  if (plVar1[0x11] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*plVar1 == 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar1);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_18058fd10(int64_t param_1,char param_2,uint64_t param_3,int8_t param_4)
void FUN_18058fd10(int64_t param_1,char param_2,uint64_t param_3,int8_t param_4)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uVar4;
  
  if ((*(byte *)((int64_t)*(int *)(param_1 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(param_1 + 0xd0))
       >> 1 & 1) != 0) {
    if (*(short *)(param_1 + 10) < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    if (*(int64_t *)(param_1 + 0xf8) != 0) {
      *(int32_t *)(*(int64_t *)(param_1 + 0xf8) + 0x90) = uVar4;
    }
  }
  lVar2 = *(int64_t *)(param_1 + 0xf8);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    if (param_2 != '\0') {
      cVar1 = func_0x000180534fb0();
      if (cVar1 != '\0') {
        *(float *)(lVar2 + 0x98) = (float)(8 - *(short *)(param_1 + 8));
        lVar3 = *(int64_t *)(param_1 + 0xf8);
      }
    }
    FUN_1805ec620(lVar3,param_2,0,param_3,param_3,param_4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18058fdf0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  float *pfVar4;
  uint uVar5;
  void *puVar6;
  int64_t lVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  float fStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    FUN_18014c9e0(param_1,param_1,param_3,param_4,0xfffffffffffffffe);
    if (*(int64_t *)(param_1 + 0xb8) == 0) {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x18) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x18);
      }
      SystemDataInitializer(&rendering_buffer_2416_ptr,puVar6);
    }
    else {
      lStack_70 = 0;
      lStack_68 = 0;
      uVar3 = 0;
      uStack_60 = 0;
      uStack_58 = 3;
      FUN_1805900c0(param_1,&lStack_70);
      uVar9 = lStack_68 - lStack_70 >> 4;
      if (2 < uVar9) {
        fStack_10 = 0.0;
        uVar5 = 0;
        uVar8 = (uint)uVar9;
        if ((0 < (int)uVar8) && (7 < uVar8)) {
          fVar11 = 0.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar18 = 0.0;
          uVar2 = uVar8 & 0x80000007;
          if ((int)uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
          }
          pfVar4 = (float *)(lStack_70 + 0x28);
          uVar9 = uVar3;
          do {
            fVar11 = fVar11 + pfVar4[-8];
            fVar12 = fVar12 + pfVar4[-4];
            fVar13 = fVar13 + *pfVar4;
            fVar14 = fVar14 + pfVar4[4];
            fVar15 = fVar15 + pfVar4[8];
            fVar16 = fVar16 + pfVar4[0xc];
            fVar17 = fVar17 + pfVar4[0x10];
            fVar18 = fVar18 + pfVar4[0x14];
            uVar5 = (int)uVar9 + 8;
            uVar9 = (uint64_t)uVar5;
            uVar3 = uVar3 + 8;
            pfVar4 = pfVar4 + 0x20;
          } while ((int64_t)uVar3 < (int64_t)(int)(uVar8 - uVar2));
          fStack_10 = fVar13 + fVar17 + fVar11 + fVar15 + fVar14 + fVar18 + fVar12 + fVar16;
        }
        lVar10 = (int64_t)(int)uVar5;
        lVar7 = (int64_t)(int)uVar8;
        if (lVar10 < lVar7) {
          if (3 < lVar7 - lVar10) {
            pfVar4 = (float *)(lStack_70 + 0x18 + lVar10 * 0x10);
            lVar1 = ((lVar7 - lVar10) - 4U >> 2) + 1;
            lVar10 = lVar10 + lVar1 * 4;
            do {
              fStack_10 = fStack_10 + pfVar4[-4] + *pfVar4 + pfVar4[4] + pfVar4[8];
              pfVar4 = pfVar4 + 0x10;
              lVar1 = lVar1 + -1;
            } while (lVar1 != 0);
          }
          if (lVar10 < lVar7) {
            pfVar4 = (float *)(lStack_70 + 8 + lVar10 * 0x10);
            lVar7 = lVar7 - lVar10;
            do {
              fStack_10 = fStack_10 + *pfVar4;
              pfVar4 = pfVar4 + 4;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
        fStack_10 = fStack_10 / (float)(int)uVar8;
        uStack_48 = 0x3f800000;
        uStack_40 = 0;
        uStack_38 = 0x3f80000000000000;
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_20 = 0x3f800000;
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_c = 0x3f800000;
        lVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,CONCAT71((int7)((uint64_t)lVar10 >> 8),3));
                    // WARNING: Subroutine does not return
        memset(lVar10 + 0x18,0,0x90);
      }
      if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lStack_70);
      }
    }
  }
  return 0;
}





// 函数: void FUN_1805900c0(int64_t param_1,uint64_t param_2)
void FUN_1805900c0(int64_t param_1,uint64_t param_2)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int *piVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t lVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iStackX_18;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  
  plVar10 = *(int64_t **)(param_1 + 0xb8);
  iVar8 = 0;
  lVar11 = *plVar10;
  lVar4 = plVar10[1] - lVar11 >> 0x3f;
  if ((plVar10[1] - lVar11) / 0x30 + lVar4 != lVar4) {
    lVar4 = 0;
    uStack_ec = 0x7f7fffff;
    uStack_dc = 0x7f7fffff;
    do {
      fStack_f8 = *(float *)(lVar4 + 4 + lVar11);
      fVar1 = *(float *)(lVar4 + 8 + lVar11);
      fStack_e8 = *(float *)(lVar4 + 0x14 + lVar11);
      fStack_e4 = *(float *)(lVar4 + 0x18 + lVar11);
      fVar15 = fStack_f8 - fStack_e8;
      fVar2 = *(float *)(lVar4 + 0xc + lVar11);
      fVar16 = fVar1 - fStack_e4;
      fStack_e0 = *(float *)(lVar4 + 0x1c + lVar11);
      fVar17 = fVar2 - fStack_e0;
      fVar12 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
      auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar14 = auVar13._0_4_;
      fStack_f0 = *(float *)(lVar4 + lVar11);
      fVar14 = fVar14 * 0.5 * (3.0 - fVar12 * fVar14 * fVar14);
      fVar12 = fVar14 * fVar15 * fStack_f0;
      fStack_f4 = fVar14 * fVar16 * fStack_f0;
      fStack_f0 = fVar17 * fVar14 * fStack_f0;
      fStack_f8 = fVar12 + fStack_f8;
      fStack_e8 = fStack_e8 - fVar12;
      fStack_e4 = fStack_e4 - fStack_f4;
      fStack_e0 = fStack_e0 - fStack_f0;
      fStack_f4 = fStack_f4 + fVar1;
      fStack_f0 = fStack_f0 + fVar2;
      FUN_1800863a0(param_2,&fStack_f8);
      FUN_1800863a0(param_2,&fStack_e8);
      plVar10 = *(int64_t **)(param_1 + 0xb8);
      iVar8 = iVar8 + 1;
      lVar4 = lVar4 + 0x30;
      lVar11 = *plVar10;
    } while ((uint64_t)(int64_t)iVar8 < (uint64_t)((plVar10[1] - lVar11) / 0x30));
  }
  iStackX_18 = 0;
  lVar11 = plVar10[9] - plVar10[8] >> 0x3f;
  if ((plVar10[9] - plVar10[8]) / 0x88 + lVar11 != lVar11) {
    lVar11 = 0;
    do {
      lVar4 = plVar10[8];
      iVar8 = 0;
      lVar7 = *(int64_t *)(lVar11 + 0x68 + lVar4);
      lVar3 = *(int64_t *)(lVar11 + 0x70 + lVar4) - lVar7;
      lVar6 = lVar3 >> 0x3f;
      if (lVar3 / 0x18 + lVar6 != lVar6) {
        lVar6 = 0;
        do {
          iVar9 = 0;
          if (0 < *(int *)(lVar7 + lVar6)) {
            piVar5 = (int *)(lVar6 + 4 + lVar7);
            do {
              FUN_1800863a0(param_2,(int64_t)*piVar5 * 0x10 + *(int64_t *)(lVar11 + 0x28 + lVar4))
              ;
              iVar9 = iVar9 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar9 < *(int *)(lVar7 + lVar6));
          }
          lVar7 = *(int64_t *)(lVar11 + 0x68 + lVar4);
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 0x18;
        } while ((uint64_t)(int64_t)iVar8 <
                 (uint64_t)((*(int64_t *)(lVar11 + 0x70 + lVar4) - lVar7) / 0x18));
      }
      iStackX_18 = iStackX_18 + 1;
      lVar11 = lVar11 + 0x88;
      plVar10 = *(int64_t **)(param_1 + 0xb8);
    } while ((uint64_t)(int64_t)iStackX_18 < (uint64_t)((plVar10[9] - plVar10[8]) / 0x88));
  }
  return;
}





// 函数: void FUN_180590111(void)
void FUN_180590111(void)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int *piVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar7;
  int unaff_EDI;
  int iVar8;
  int64_t *plVar9;
  int64_t in_R10;
  int64_t in_R11;
  int iVar10;
  int32_t uVar11;
  float fVar12;
  int8_t auVar13 [16];
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  float fVar16;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  float fVar17;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t uStack000000000000003c;
  int64_t in_stack_00000120;
  int iStack0000000000000130;
  
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  lVar5 = 0;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM11_Dd;
  uStack000000000000002c = 0x7f7fffff;
  uStack000000000000003c = 0x7f7fffff;
  do {
    fStackX_20 = *(float *)(lVar5 + 4 + in_R10);
    fVar1 = *(float *)(lVar5 + 8 + in_R10);
    fStack0000000000000030 = *(float *)(lVar5 + 0x14 + in_R10);
    fStack0000000000000034 = *(float *)(lVar5 + 0x18 + in_R10);
    fVar15 = fStackX_20 - fStack0000000000000030;
    fVar2 = *(float *)(lVar5 + 0xc + in_R10);
    fVar16 = fVar1 - fStack0000000000000034;
    fStack0000000000000038 = *(float *)(lVar5 + 0x1c + in_R10);
    fVar17 = fVar2 - fStack0000000000000038;
    fVar12 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
    auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar14 = auVar13._0_4_;
    fStack0000000000000028 = *(float *)(lVar5 + in_R10);
    fVar14 = fVar14 * 0.5 * (3.0 - fVar12 * fVar14 * fVar14);
    fVar12 = fVar14 * fVar15 * fStack0000000000000028;
    fStackX_24 = fVar14 * fVar16 * fStack0000000000000028;
    fStack0000000000000028 = fVar17 * fVar14 * fStack0000000000000028;
    fStackX_20 = fVar12 + fStackX_20;
    fStack0000000000000030 = fStack0000000000000030 - fVar12;
    fStack0000000000000034 = fStack0000000000000034 - fStackX_24;
    fStack0000000000000038 = fStack0000000000000038 - fStack0000000000000028;
    fStackX_24 = fStackX_24 + fVar1;
    fStack0000000000000028 = fStack0000000000000028 + fVar2;
    uVar11 = FUN_1800863a0(fStack0000000000000028,&fStackX_20);
    uVar11 = FUN_1800863a0(uVar11,&stack0x00000030);
    plVar9 = *(int64_t **)(unaff_RSI + 0xb8);
    unaff_EDI = unaff_EDI + 1;
    lVar5 = lVar5 + 0x30;
    in_R10 = *plVar9;
    lVar3 = SUB168(SEXT816(unaff_RBP) * SEXT816(plVar9[1] - in_R10),8);
  } while ((uint64_t)(int64_t)unaff_EDI < (uint64_t)((lVar3 >> 3) - (lVar3 >> 0x3f)));
  iStack0000000000000130 = 0;
  lVar5 = plVar9[9] - plVar9[8] >> 0x3f;
  if ((plVar9[9] - plVar9[8]) / 0x88 + lVar5 != lVar5) {
    lVar5 = 0;
    do {
      lVar3 = plVar9[8];
      iVar10 = 0;
      lVar7 = *(int64_t *)(lVar5 + 0x68 + lVar3);
      lVar4 = SUB168(SEXT816(unaff_RBP) * SEXT816(*(int64_t *)(lVar5 + 0x70 + lVar3) - lVar7),8);
      if (lVar4 >> 2 != lVar4 >> 0x3f) {
        lVar4 = 0;
        do {
          iVar8 = 0;
          if (0 < *(int *)(lVar7 + lVar4)) {
            piVar6 = (int *)(lVar4 + 4 + lVar7);
            do {
              uVar11 = FUN_1800863a0(uVar11,(int64_t)*piVar6 * 0x10 +
                                            *(int64_t *)(lVar5 + 0x28 + lVar3));
              iVar8 = iVar8 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar8 < *(int *)(lVar7 + lVar4));
          }
          lVar7 = *(int64_t *)(lVar5 + 0x68 + lVar3);
          iVar10 = iVar10 + 1;
          lVar4 = lVar4 + 0x18;
        } while ((uint64_t)(int64_t)iVar10 <
                 (uint64_t)((*(int64_t *)(lVar5 + 0x70 + lVar3) - lVar7) / 0x18));
        unaff_RBP = 0x2aaaaaaaaaaaaaab;
      }
      iStack0000000000000130 = iStack0000000000000130 + 1;
      lVar5 = lVar5 + 0x88;
      plVar9 = *(int64_t **)(in_stack_00000120 + 0xb8);
    } while ((uint64_t)(int64_t)iStack0000000000000130 <
             (uint64_t)((plVar9[9] - plVar9[8]) / 0x88));
  }
  return;
}





// 函数: void FUN_18059030a(void)
void FUN_18059030a(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int iVar4;
  int64_t in_R9;
  int iVar5;
  int64_t lVar6;
  int64_t in_stack_00000120;
  int iStack0000000000000130;
  
  lVar1 = *(int64_t *)(in_R9 + 0x48) - *(int64_t *)(in_R9 + 0x40);
  iStack0000000000000130 = 0;
  lVar6 = lVar1 >> 0x3f;
  if (lVar1 / 0x88 + lVar6 != lVar6) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(in_R9 + 0x40);
      iVar5 = 0;
      lVar3 = *(int64_t *)(lVar6 + 0x68 + lVar1);
      lVar2 = SUB168(SEXT816(unaff_RBP) * SEXT816(*(int64_t *)(lVar6 + 0x70 + lVar1) - lVar3),8);
      if (lVar2 >> 2 != lVar2 >> 0x3f) {
        lVar2 = 0;
        do {
          iVar4 = 0;
          if (0 < *(int *)(lVar3 + lVar2)) {
            do {
              FUN_1800863a0();
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(lVar3 + lVar2));
          }
          lVar3 = *(int64_t *)(lVar6 + 0x68 + lVar1);
          iVar5 = iVar5 + 1;
          lVar2 = lVar2 + 0x18;
        } while ((uint64_t)(int64_t)iVar5 <
                 (uint64_t)((*(int64_t *)(lVar6 + 0x70 + lVar1) - lVar3) / 0x18));
        unaff_RBP = 0x2aaaaaaaaaaaaaab;
      }
      iStack0000000000000130 = iStack0000000000000130 + 1;
      lVar6 = lVar6 + 0x88;
      in_R9 = *(int64_t *)(in_stack_00000120 + 0xb8);
    } while ((uint64_t)(int64_t)iStack0000000000000130 <
             (uint64_t)((*(int64_t *)(in_R9 + 0x48) - *(int64_t *)(in_R9 + 0x40)) / 0x88));
  }
  return;
}





// 函数: void FUN_18059033e(uint64_t param_1,uint64_t param_2,int param_3,int64_t param_4)
void FUN_18059033e(uint64_t param_1,uint64_t param_2,int param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t in_stack_00000120;
  int in_stack_00000130;
  
  lVar6 = 0;
  do {
    lVar1 = *(int64_t *)(param_4 + 0x40);
    iVar5 = 0;
    lVar3 = *(int64_t *)(lVar6 + 0x68 + lVar1);
    lVar2 = SUB168(SEXT816(unaff_RBP) * SEXT816(*(int64_t *)(lVar6 + 0x70 + lVar1) - lVar3),8);
    if (lVar2 >> 2 != lVar2 >> 0x3f) {
      lVar2 = 0;
      do {
        iVar4 = 0;
        if (0 < *(int *)(lVar3 + lVar2)) {
          do {
            FUN_1800863a0();
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(lVar3 + lVar2));
        }
        lVar3 = *(int64_t *)(lVar6 + 0x68 + lVar1);
        iVar5 = iVar5 + 1;
        lVar2 = lVar2 + 0x18;
      } while ((uint64_t)(int64_t)iVar5 <
               (uint64_t)((*(int64_t *)(lVar6 + 0x70 + lVar1) - lVar3) / 0x18));
      unaff_RBP = 0x2aaaaaaaaaaaaaab;
      param_3 = in_stack_00000130;
    }
    param_3 = param_3 + 1;
    lVar6 = lVar6 + 0x88;
    param_4 = *(int64_t *)(in_stack_00000120 + 0xb8);
    in_stack_00000130 = param_3;
  } while ((uint64_t)(int64_t)param_3 <
           (uint64_t)((*(int64_t *)(param_4 + 0x48) - *(int64_t *)(param_4 + 0x40)) / 0x88));
  return;
}





// 函数: void FUN_180590470(void)
void FUN_180590470(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180590480(int64_t param_1,int param_2,uint param_3,char param_4,char param_5,
                       char param_6)

{
  byte bVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  int iVar6;
  
  lVar2 = *(int64_t *)(param_1 + 0xd0);
  iVar6 = 0;
  iVar4 = (int)((*(int64_t *)(param_1 + 0xd8) - lVar2) / 0xa0);
  if (0 < iVar4) {
    do {
      uVar3 = (int64_t)(iVar6 + param_2) % (int64_t)iVar4;
      lVar5 = (int64_t)(int)uVar3 * 0xa0;
      bVar1 = *(byte *)((int64_t)*(int *)(lVar5 + 100 + lVar2) * 0x170 + 0x140 + render_system_config);
      if ((param_6 != '\0') || ((bVar1 & 0x10) == 0)) {
        if (param_4 == '\0') {
          if ((bVar1 & 1) == 0) goto LAB_18059053c;
        }
        else if (((bVar1 & 2) == 0) ||
                ((*(int *)(lVar5 + 0x5c + lVar2) == 0xf && ((param_3 >> 0x18 & 1) != 0)))) {
LAB_18059053c:
          if (param_5 == '\0') {
            bVar1 = bVar1 & 4;
          }
          else {
            bVar1 = bVar1 & 8;
          }
          if (bVar1 == 0) {
            return uVar3 & 0xffffffff;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



