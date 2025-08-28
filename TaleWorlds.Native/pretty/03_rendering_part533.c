#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part533.c - 15 个函数

// 函数: void FUN_18055b600(int64_t *param_1)
void FUN_18055b600(int64_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  void *puVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int8_t auStack_60 [24];
  void *puStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar8 = (param_1[1] - *param_1) / 0x68;
  FUN_1804a5d80(param_1 + 4);
  iVar4 = (int)uVar8;
  uVar1 = FUN_18066c0c0(param_1 + 8,uVar8 & 0xffffffff);
  FUN_18055bb10(param_1 + 4,uVar1);
  uVar7 = 0;
  lVar6 = (int64_t)iVar4;
  uVar8 = uVar7;
  if (0 < iVar4) {
    do {
      lVar5 = *param_1 + uVar8;
      puStack_48 = &system_data_buffer_ptr;
      uStack_30 = 0;
      puStack_40 = (int8_t *)0x0;
      uStack_38 = 0;
      CoreEngineDataBufferProcessor(&puStack_48,*(int32_t *)(lVar5 + 0x10));
      if (0 < *(int *)(lVar5 + 0x10)) {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(lVar5 + 8) != (void *)0x0) {
          puVar3 = *(void **)(lVar5 + 8);
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_40,puVar3,(int64_t)(*(int *)(lVar5 + 0x10) + 1));
      }
      if ((*(int64_t *)(lVar5 + 8) != 0) && (uStack_38 = 0, puStack_40 != (int8_t *)0x0)) {
        *puStack_40 = 0;
      }
      plVar2 = (int64_t *)FUN_18055b790(param_1 + 4,auStack_60);
      *(int *)(*plVar2 + 0x20) = (int)uVar7;
      puStack_48 = &system_data_buffer_ptr;
      if (puStack_40 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      uVar7 = (uint64_t)((int)uVar7 + 1);
      lVar6 = lVar6 + -1;
      uVar8 = uVar8 + 0x68;
    } while (lVar6 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18055b790(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t param_4)

{
  int64_t *plVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  char acStackX_8 [4];
  uint uStackX_c;
  int64_t lStackX_10;
  
  uVar3 = *(uint *)(param_4 + 0x10);
  pbVar4 = *(byte **)(param_4 + 8);
  pbVar6 = &system_buffer_ptr;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  uVar8 = 0xcbf29ce484222325;
  uVar9 = 0;
  if (uVar3 != 0) {
    do {
      uVar8 = (uVar8 ^ *pbVar6) * 0x100000001b3;
      uVar9 = uVar9 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar9 < uVar3);
  }
  uVar10 = uVar8 % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar1 = (int64_t *)(*(int64_t *)(param_1 + 8) + uVar10 * 8);
  lVar7 = *plVar1;
  do {
    if (lVar7 == 0) {
      FUN_18066c220(param_1 + 0x20,acStackX_8,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 0x2c));
      lStackX_10 = lVar7;
      CoreEngineDataTransformer(lVar7);
      *(int32_t *)(lVar7 + 0x20) = 0;
      *(uint64_t *)(lVar7 + 0x28) = 0;
      if (acStackX_8[0] != '\0') {
        uVar10 = uVar8 % (uint64_t)uStackX_c;
        FUN_18055bb10(param_1,uStackX_c);
      }
      *(uint64_t *)(lVar7 + 0x28) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar10 * 8);
      *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar10 * 8) = lVar7;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      lVar5 = *(int64_t *)(param_1 + 8);
      *param_2 = lVar7;
      param_2[1] = lVar5 + uVar10 * 8;
      *(int8_t *)(param_2 + 2) = 1;
      return param_2;
    }
    uVar9 = *(uint *)(lVar7 + 0x10);
    if (uVar3 == uVar9) {
      if (uVar3 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar2 = pbVar6 + (*(int64_t *)(lVar7 + 8) - (int64_t)pbVar4);
          uVar9 = (uint)*pbVar6 - (uint)*pbVar2;
          if (uVar9 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18055b85f:
      if (uVar9 == 0) {
        *param_2 = lVar7;
        param_2[1] = (int64_t)plVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
    }
    else if (uVar3 == 0) goto LAB_18055b85f;
    lVar7 = *(int64_t *)(lVar7 + 0x28);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055b940(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18055b940(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  
  uVar11 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar7 = *param_1;
  lVar5 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar10 = (lVar2 - lVar7) / 0x68;
  if (lVar10 != 0) {
    lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x68,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0
                          ,uVar1);
  }
  lVar10 = lVar10 * 0x68 + lVar5;
  if (lVar7 != lVar2) {
    puVar8 = (int32_t *)(lVar5 + 0x10);
    lVar12 = lVar5;
    lVar13 = lVar10;
    lVar14 = lVar10;
    do {
      *(void **)(puVar8 + -4) = &system_state_ptr;
      *(uint64_t *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      *(void **)(puVar8 + -4) = &unknown_var_3480_ptr;
      *(int32_t **)(puVar8 + -2) = puVar8 + 2;
      *puVar8 = 0;
      *(int8_t *)(puVar8 + 2) = 0;
      *puVar8 = *(int32_t *)(lVar7 + 0x10);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(lVar7 + 8) != (void *)0x0) {
        puVar9 = *(void **)(lVar7 + 8);
      }
      strcpy_s(*(uint64_t *)(puVar8 + -2),0x40,puVar9,param_4,uVar11,lVar12,lVar13,lVar14);
      puVar8[0x12] = *(int32_t *)(lVar7 + 0x58);
      puVar8[0x13] = *(int32_t *)(lVar7 + 0x5c);
      *(int8_t *)(puVar8 + 0x14) = *(int8_t *)(lVar7 + 0x60);
      lVar7 = lVar7 + 0x68;
      puVar8 = puVar8 + 0x1a;
    } while (lVar7 != lVar2);
  }
  puVar3 = (uint64_t *)*param_1;
  *param_1 = lVar5;
  puVar4 = (uint64_t *)param_1[1];
  param_1[1] = lVar10;
  param_1[2] = lVar10;
  *(uint *)(param_1 + 3) = uVar1;
  for (puVar6 = puVar3; puVar6 != puVar4; puVar6 = puVar6 + 0xd) {
    *puVar6 = &system_state_ptr;
  }
  if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055bb10(int64_t param_1,int64_t param_2)
void FUN_18055bb10(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055bb23(uint64_t param_1,int64_t param_2)
void FUN_18055bb23(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_2 * 8 + 8,8);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}





// 函数: void FUN_18055bb6e(void)
void FUN_18055bb6e(void)

{
  byte bVar1;
  uint64_t uVar2;
  byte *pbVar3;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar4;
  int64_t lVar5;
  uint64_t in_R11;
  
  do {
    lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8);
    if (lVar5 != 0) {
      do {
        pbVar3 = &system_buffer_ptr;
        if (*(byte **)(lVar5 + 8) != (byte *)0x0) {
          pbVar3 = *(byte **)(lVar5 + 8);
        }
        uVar4 = 0;
        uVar2 = 0xcbf29ce484222325;
        if (*(uint *)(lVar5 + 0x10) != 0) {
          do {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            uVar4 = uVar4 + 1;
            uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
          } while (uVar4 < *(uint *)(lVar5 + 0x10));
        }
        uVar2 = uVar2 % (unaff_RBP & 0xffffffff);
        *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8) = *(uint64_t *)(lVar5 + 0x28);
        *(uint64_t *)(lVar5 + 0x28) = *(uint64_t *)(unaff_RSI + uVar2 * 8);
        *(int64_t *)(unaff_RSI + uVar2 * 8) = lVar5;
        lVar5 = *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8);
      } while (lVar5 != 0);
    }
    in_R11 = in_R11 + 1;
  } while (in_R11 < *(uint64_t *)(unaff_RDI + 0x10));
  if ((1 < *(uint64_t *)(unaff_RDI + 0x10)) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}





// 函数: void FUN_18055bc21(uint64_t param_1)
void FUN_18055bc21(uint64_t param_1)

{
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}





// 函数: void FUN_18055bc2c(void)
void FUN_18055bc2c(void)

{
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  
  if (*(int64_t *)(unaff_RDI + 8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(uint64_t *)(unaff_RDI + 8) = unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055bc50(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18055bc50(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int8_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  void *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar9 = ((int64_t)puVar7 - (int64_t)puVar4) / 0x68;
  puVar2 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_18055bcdc;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 0x68,*(int8_t *)(param_1 + 3),param_4,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18055bcdc:
  puVar5 = puVar2;
  if (puVar4 != puVar7) {
    lVar8 = (int64_t)puVar2 - (int64_t)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar5 = &system_state_ptr;
      *(uint64_t *)(lVar8 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar4) = 0;
      *puVar5 = &unknown_var_3480_ptr;
      puVar3 = (int8_t *)((int64_t)puVar4 + lVar8 + 0x10);
      *(int8_t **)(lVar8 + (int64_t)puVar4) = puVar3;
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar4) = 0;
      *puVar3 = 0;
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 1);
      puVar6 = &system_buffer_ptr;
      if ((void *)*puVar4 != (void *)0x0) {
        puVar6 = (void *)*puVar4;
      }
      strcpy_s(*(uint64_t *)(lVar8 + (int64_t)puVar4),0x40,puVar6);
      *(int32_t *)(lVar8 + 0x50 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 10);
      *(int32_t *)(lVar8 + 0x54 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x54);
      *(int8_t *)(lVar8 + 0x58 + (int64_t)puVar4) = *(int8_t *)(puVar4 + 0xb);
      puVar5 = puVar5 + 0xd;
      puVar1 = puVar4 + 0xc;
      puVar4 = puVar4 + 0xd;
    } while (puVar1 != puVar7);
  }
  FUN_1800b8300(puVar5,param_2);
  *(int32_t *)(puVar5 + 0xb) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)puVar5 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  *(int8_t *)(puVar5 + 0xc) = *(int8_t *)(param_2 + 0x60);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 0xd;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar5 + 0xd;
    param_1[2] = puVar2 + lVar9 * 0xd;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18055be50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  double dVar2;
  double dVar3;
  int64_t lVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t *plStackX_10;
  int64_t alStackX_18 [2];
  uint uStack_44;
  
  plVar1 = param_1 + 1;
  puVar5 = (int32_t *)0x0;
  *plVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0;
  *param_1 = 0;
  puVar7 = (int32_t *)*plVar1;
  param_1[2] = puVar7;
  lVar8 = render_system_data_config;
  if (render_system_data_config == 0) {
    plStackX_10 = plVar1;
    QueryPerformanceCounter(alStackX_18,param_2,param_3,param_4,0xfffffffffffffffe);
    puVar7 = (int32_t *)param_1[2];
    lVar8 = alStackX_18[0];
  }
  dVar3 = (double)(lVar8 - render_system_data_config) * render_system_data_config;
  plStackX_10 = (int64_t *)0x1000ffffff87;
  uStack_44 = uStack_44 & 0xffffff00;
  dVar2 = dVar3 - 1.0;
  lVar8 = 1;
  if (puVar7 < (int32_t *)param_1[3]) {
    param_1[2] = puVar7 + 8;
    *puVar7 = 0xffffff87;
    puVar7[1] = 0x1000;
    *(double *)(puVar7 + 2) = dVar2;
    puVar7[4] = 0;
    puVar7[5] = 0xbff00000;
    puVar7[6] = 1;
    puVar7[7] = uStack_44;
  }
  else {
    puVar6 = (int32_t *)*plVar1;
    lVar4 = (int64_t)puVar7 - (int64_t)puVar6 >> 5;
    if ((lVar4 == 0) || (lVar8 = lVar4 * 2, lVar8 != 0)) {
      puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 5,*(int8_t *)(param_1 + 4));
      puVar7 = (int32_t *)param_1[2];
      puVar6 = (int32_t *)*plVar1;
    }
    if (puVar6 != puVar7) {
                    // WARNING: Subroutine does not return
      memmove(puVar5,puVar6,(int64_t)puVar7 - (int64_t)puVar6);
    }
    *puVar5 = 0xffffff87;
    puVar5[1] = 0x1000;
    *(double *)(puVar5 + 2) = dVar2;
    puVar5[4] = 0;
    puVar5[5] = 0xbff00000;
    puVar5[6] = 1;
    puVar5[7] = uStack_44;
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *plVar1 = (int64_t)puVar5;
    param_1[2] = puVar5 + 8;
    param_1[3] = puVar5 + lVar8 * 8;
  }
  FUN_18055c030(param_1,&plStackX_10,SUB84(dVar3,0));
  param_1[8] = 0x4123880000000000;
  param_1[9] = 0x4123880000000000;
  param_1[10] = 0x4123880000000000;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c030(int64_t param_1,int *param_2,double param_3)
void FUN_18055c030(int64_t param_1,int *param_2,double param_3)

{
  double dVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  double *pdVar5;
  uint uVar6;
  uint64_t uVar7;
  int *piVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int64_t lStackX_8;
  
  piVar8 = *(int **)(param_1 + 8);
  iVar2 = (int)(*(int64_t *)(param_1 + 0x10) - (int64_t)piVar8 >> 5);
  if (iVar2 < 1) {
    return;
  }
  uVar7 = 0;
  uVar4 = uVar7;
  while ((*piVar8 != *param_2 || (piVar8[1] != param_2[1]))) {
    uVar4 = uVar4 + 1;
    piVar8 = piVar8 + 8;
    if ((int64_t)iVar2 <= (int64_t)uVar4) {
      return;
    }
  }
  *(double *)(piVar8 + 4) = param_3;
  if (param_3 - *(double *)(piVar8 + 2) < 0.001) {
    *(double *)(piVar8 + 4) = *(double *)(piVar8 + 2) + 0.001;
  }
  lVar3 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&lStackX_8);
    lVar3 = lStackX_8;
  }
  dVar11 = (double)(lVar3 - render_system_data_config) * render_system_data_config;
  FUN_1805f7390(param_1);
  uVar4 = *(int64_t *)(param_1 + 0x10) - *(int64_t *)(param_1 + 8) >> 5;
  if (uVar4 != 0) {
    pdVar5 = (double *)(*(int64_t *)(param_1 + 8) + 8);
    dVar9 = -1.7976931348623157e+308;
    do {
      dVar1 = pdVar5[1];
      dVar10 = dVar9;
      if (((0.0 <= dVar1) && (dVar11 < dVar1 + 10.0)) &&
         (dVar10 = dVar1 - *pdVar5, dVar1 - *pdVar5 <= dVar9)) {
        dVar10 = dVar9;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      pdVar5 = pdVar5 + 4;
      dVar9 = dVar10;
    } while ((uint64_t)(int64_t)(int)uVar6 < uVar4);
    if (0.0 <= dVar10) goto LAB_18055c15a;
  }
  dVar10 = 1.0;
LAB_18055c15a:
  dVar11 = ((dVar10 + 0.016666666666666666) - *(double *)(param_1 + 0x30)) * 0.05 +
           *(double *)(param_1 + 0x30);
  *(double *)(param_1 + 0x30) = dVar11;
  if (1.0 < dVar11) {
    *(uint64_t *)(param_1 + 0x30) = 0x3ff0000000000000;
  }
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x40);
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x40) * 1.05;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c053(uint64_t param_1,int64_t param_2,double param_3)
void FUN_18055c053(uint64_t param_1,int64_t param_2,double param_3)

{
  double dVar1;
  int in_EAX;
  int64_t lVar2;
  uint64_t uVar3;
  double *pdVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t unaff_RDI;
  int *in_R8;
  int in_R10D;
  double dVar7;
  double dVar8;
  double dVar9;
  int64_t in_stack_00000040;
  
  uVar6 = 0;
  uVar3 = uVar6;
  while ((*in_R8 != in_R10D || (in_R8[1] != *(int *)(param_2 + 4)))) {
    uVar3 = uVar3 + 1;
    in_R8 = in_R8 + 8;
    if ((int64_t)in_EAX <= (int64_t)uVar3) {
      return;
    }
  }
  *(double *)(in_R8 + 4) = param_3;
  if (param_3 - *(double *)(in_R8 + 2) < 0.001) {
    *(double *)(in_R8 + 4) = *(double *)(in_R8 + 2) + 0.001;
  }
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar2 = in_stack_00000040;
  }
  dVar9 = (double)(lVar2 - render_system_data_config) * render_system_data_config;
  FUN_1805f7390();
  uVar3 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8) >> 5;
  if (uVar3 != 0) {
    pdVar4 = (double *)(*(int64_t *)(unaff_RDI + 8) + 8);
    dVar7 = -1.7976931348623157e+308;
    do {
      dVar1 = pdVar4[1];
      dVar8 = dVar7;
      if (((0.0 <= dVar1) && (dVar9 < dVar1 + 10.0)) &&
         (dVar8 = dVar1 - *pdVar4, dVar1 - *pdVar4 <= dVar7)) {
        dVar8 = dVar7;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      pdVar4 = pdVar4 + 4;
      dVar7 = dVar8;
    } while ((uint64_t)(int64_t)(int)uVar5 < uVar3);
    if (0.0 <= dVar8) goto LAB_18055c15a;
  }
  dVar8 = 1.0;
LAB_18055c15a:
  dVar9 = ((dVar8 + 0.016666666666666666) - *(double *)(unaff_RDI + 0x30)) * 0.05 +
          *(double *)(unaff_RDI + 0x30);
  *(double *)(unaff_RDI + 0x30) = dVar9;
  if (1.0 < dVar9) {
    *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;
  }
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * 1.05;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c085(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18055c085(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  double dVar1;
  int64_t lVar2;
  double *pdVar3;
  uint64_t uVar4;
  int unaff_EBX;
  int64_t unaff_RDI;
  double in_XMM2_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  int64_t in_stack_00000040;
  
  *(double *)(param_3 + 0x10) = in_XMM2_Qa;
  if (in_XMM2_Qa - *(double *)(param_3 + 8) < 0.001) {
    *(double *)(param_3 + 0x10) = *(double *)(param_3 + 8) + 0.001;
  }
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar2 = in_stack_00000040;
  }
  dVar7 = (double)(lVar2 - render_system_data_config) * render_system_data_config;
  FUN_1805f7390();
  uVar4 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8) >> 5;
  if (uVar4 != 0) {
    pdVar3 = (double *)(*(int64_t *)(unaff_RDI + 8) + 8);
    dVar5 = -1.7976931348623157e+308;
    do {
      dVar1 = pdVar3[1];
      dVar6 = dVar5;
      if (((0.0 <= dVar1) && (dVar7 < dVar1 + 10.0)) &&
         (dVar6 = dVar1 - *pdVar3, dVar1 - *pdVar3 <= dVar5)) {
        dVar6 = dVar5;
      }
      unaff_EBX = unaff_EBX + 1;
      pdVar3 = pdVar3 + 4;
      dVar5 = dVar6;
    } while ((uint64_t)(int64_t)unaff_EBX < uVar4);
    if (0.0 <= dVar6) goto LAB_18055c15a;
  }
  dVar6 = 1.0;
LAB_18055c15a:
  dVar7 = ((dVar6 + 0.016666666666666666) - *(double *)(unaff_RDI + 0x30)) * 0.05 +
          *(double *)(unaff_RDI + 0x30);
  *(double *)(unaff_RDI + 0x30) = dVar7;
  if (1.0 < dVar7) {
    *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;
  }
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * 1.05;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c09d(double param_1,double param_2,double param_3)
void FUN_18055c09d(double param_1,double param_2,double param_3)

{
  double dVar1;
  int64_t lVar2;
  double *pdVar3;
  uint64_t uVar4;
  int unaff_EBX;
  int64_t unaff_RDI;
  int64_t in_R8;
  double dVar5;
  double dVar6;
  double dVar7;
  int64_t in_stack_00000040;
  
  if (param_3 < param_2) {
    *(double *)(in_R8 + 0x10) = param_1 + param_2;
  }
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    QueryPerformanceCounter(&stack0x00000040);
    lVar2 = in_stack_00000040;
  }
  dVar7 = (double)(lVar2 - render_system_data_config) * render_system_data_config;
  FUN_1805f7390();
  uVar4 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8) >> 5;
  if (uVar4 != 0) {
    pdVar3 = (double *)(*(int64_t *)(unaff_RDI + 8) + 8);
    dVar5 = -1.7976931348623157e+308;
    do {
      dVar1 = pdVar3[1];
      dVar6 = dVar5;
      if (((0.0 <= dVar1) && (dVar7 < dVar1 + 10.0)) &&
         (dVar6 = dVar1 - *pdVar3, dVar1 - *pdVar3 <= dVar5)) {
        dVar6 = dVar5;
      }
      unaff_EBX = unaff_EBX + 1;
      pdVar3 = pdVar3 + 4;
      dVar5 = dVar6;
    } while ((uint64_t)(int64_t)unaff_EBX < uVar4);
    if (0.0 <= dVar6) goto LAB_18055c15a;
  }
  dVar6 = 1.0;
LAB_18055c15a:
  dVar7 = ((dVar6 + 0.016666666666666666) - *(double *)(unaff_RDI + 0x30)) * 0.05 +
          *(double *)(unaff_RDI + 0x30);
  *(double *)(unaff_RDI + 0x30) = dVar7;
  if (1.0 < dVar7) {
    *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;
  }
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * 1.05;
  return;
}





// 函数: void FUN_18055c184(void)
void FUN_18055c184(void)

{
  int64_t unaff_RDI;
  
  *(uint64_t *)(unaff_RDI + 0x30) = 0x3ff0000000000000;
  *(double *)(unaff_RDI + 0x48) = *(double *)(unaff_RDI + 0x40);
  *(double *)(unaff_RDI + 0x50) = *(double *)(unaff_RDI + 0x40) * 1.05;
  return;
}





// 函数: void FUN_18055c1ae(void)
void FUN_18055c1ae(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18055c1c0(int64_t param_1)
void FUN_18055c1c0(int64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int8_t auStack_178 [48];
  int64_t lStack_148;
  int64_t lStack_140;
  int8_t auStack_138 [256];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  uVar8 = 0;
  do {
    puVar5 = *(uint64_t **)(param_1 + 0x618);
    uVar9 = *puVar5;
    if ((uVar9 == puVar5[1]) && (puVar5[1] = puVar5[8], uVar9 == puVar5[8])) {
      if (puVar5 == *(uint64_t **)(param_1 + 0x658)) {
        lVar6 = *(int64_t *)(param_1 + 0x35d8);
        uVar9 = uVar8;
        uVar11 = uVar8;
        if (*(int64_t *)(param_1 + 0x35e0) - lVar6 >> 3 != 0) {
          do {
            iVar7 = (int)uVar9;
            if (*(int64_t *)(uVar11 + lVar6) != 0) {
              plVar3 = *(int64_t **)(param_1 + 0x738);
              uVar10 = *(int64_t *)(param_1 + 0x740) - (int64_t)plVar3 >> 3;
              uVar9 = uVar8;
              if (uVar10 != 0) {
                do {
                  if (*plVar3 == *(int64_t *)(uVar11 + lVar6)) {
                    if ((int)uVar9 != -1) {
                      FUN_18055c930(param_1,uVar9,0);
                      lVar6 = *(int64_t *)(param_1 + 0x35d8) + (int64_t)iVar7 * 8;
                      uVar10 = *(uint64_t *)(param_1 + 0x35e0);
                      uVar9 = lVar6 + 8;
                      if (uVar9 < uVar10) {
                    // WARNING: Subroutine does not return
                        memmove(lVar6,uVar9,uVar10 - uVar9);
                      }
                      iVar7 = iVar7 + -1;
                      *(uint64_t *)(param_1 + 0x35e0) = uVar10 - 8;
                      uVar11 = uVar11 - 8;
                    }
                    break;
                  }
                  uVar4 = (int)uVar9 + 1;
                  uVar9 = (uint64_t)uVar4;
                  plVar3 = plVar3 + 1;
                } while ((uint64_t)(int64_t)(int)uVar4 < uVar10);
              }
            }
            lVar6 = *(int64_t *)(param_1 + 0x35d8);
            uVar9 = (uint64_t)(iVar7 + 1U);
            uVar11 = uVar11 + 8;
          } while ((uint64_t)(int64_t)(int)(iVar7 + 1U) <
                   (uint64_t)(*(int64_t *)(param_1 + 0x35e0) - lVar6 >> 3));
        }
        lVar6 = *(int64_t *)(param_1 + 0x738);
        uVar9 = uVar8;
        if (*(int64_t *)(param_1 + 0x740) - lVar6 >> 3 != 0) {
          do {
            iVar7 = (int)uVar8;
            lVar6 = *(int64_t *)(uVar9 + lVar6);
            if (*(char *)(lVar6 + 0x31) == '\0') {
              lVar2 = render_system_data_config;
              if (render_system_data_config == 0) {
                QueryPerformanceCounter(&lStack_140);
                lVar2 = lStack_140;
              }
              if (*(double *)(lVar6 + 0x20) + 20.0 <
                  (double)(lVar2 - render_system_data_config) * render_system_data_config) {
                FUN_18055c930(param_1,uVar8,1);
                iVar7 = iVar7 + -1;
                uVar9 = uVar9 - 8;
              }
            }
            lVar6 = *(int64_t *)(param_1 + 0x738);
            uVar8 = (uint64_t)(iVar7 + 1U);
            uVar9 = uVar9 + 8;
          } while ((uint64_t)(int64_t)(int)(iVar7 + 1U) <
                   (uint64_t)(*(int64_t *)(param_1 + 0x740) - lVar6 >> 3));
        }
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
      }
      puVar5 = *(uint64_t **)(param_1 + 0x618);
      puVar5[1] = puVar5[8];
      uVar9 = *puVar5;
      if (uVar9 != puVar5[8]) goto LAB_18055c268;
      puVar5 = (uint64_t *)puVar5[0x10];
      uVar9 = *puVar5;
      puVar5[1] = puVar5[8];
      *(uint64_t **)(param_1 + 0x618) = puVar5;
      lVar6 = *(int64_t *)(puVar5[0x11] + uVar9 * 8);
      uVar11 = puVar5[0x12];
    }
    else {
LAB_18055c268:
      lVar6 = *(int64_t *)(puVar5[0x11] + uVar9 * 8);
      uVar11 = puVar5[0x12];
    }
    *puVar5 = uVar11 & uVar9 + 1;
    *(int32_t *)(lVar6 + 0x5c4) = 0;
    cVar1 = FUN_18055cde0(param_1,lVar6,lVar6 + 0x5d0);
    if (cVar1 == '\0') {
                    // WARNING: Subroutine does not return
      memset(auStack_138,0,0x100);
    }
    lStack_148 = lVar6;
    FUN_1805603c0(param_1 + 0x668,&lStack_148);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



