#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part009.c - 10 个函数

// 函数: void FUN_18025e700(int64_t *param_1,int64_t param_2)
void FUN_18025e700(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint uVar2;
  int32_t uVar3;
  int64_t lVar4;
  uint *puVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  
  uVar2 = **(uint **)(param_2 + 8);
  puVar5 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar5;
  if (uVar2 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar5,uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
    puVar5 = *(uint **)(param_2 + 8);
  }
  uVar2 = *puVar5;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  FUN_180260aa0(param_1 + 8,uVar2);
  uVar10 = 0;
  uVar7 = uVar10;
  if (uVar2 != 0) {
    do {
      FUN_18025e9f0(param_1[8] + (int64_t)(int)uVar7 * 0x48,param_2);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
    } while (uVar6 < uVar2);
  }
  uVar2 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  uVar9 = (uint64_t)uVar2;
  FUN_180260b90(param_1 + 0xc,uVar2);
  puVar5 = *(uint **)(param_2 + 8);
  uVar7 = uVar10;
  if (uVar2 != 0) {
    do {
      lVar4 = param_1[0xc];
      *(uint **)(param_2 + 8) = puVar5 + 1;
      *(uint *)(uVar7 + lVar4) = puVar5[1];
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(uVar7 + 4 + lVar4) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(uVar7 + 8 + lVar4) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(uVar7 + 0xc + lVar4) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      uVar3 = **(int32_t **)(param_2 + 8);
      *(int32_t *)(uVar7 + 0x10 + lVar4) = uVar3;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      FUN_180260830(uVar3,param_2,lVar4 + 0x14 + uVar7);
      uVar2 = **(uint **)(param_2 + 8);
      puVar5 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar5;
      if (uVar2 != 0) {
        (**(code **)(*(int64_t *)(uVar7 + lVar4 + 0x18) + 0x18))(uVar7 + lVar4 + 0x18,puVar5,uVar2)
        ;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
        puVar5 = *(uint **)(param_2 + 8);
      }
      uVar9 = uVar9 - 1;
      uVar7 = uVar7 + 0x38;
    } while (uVar9 != 0);
  }
  uVar2 = *puVar5;
  *(uint **)(param_2 + 8) = puVar5 + 1;
  plVar1 = param_1 + 4;
  lVar4 = param_1[5];
  lVar11 = *plVar1;
  uVar7 = (lVar4 - lVar11) / 0x60;
  if (uVar7 < uVar2) {
    FUN_180261390(plVar1,uVar2 - uVar7);
  }
  else {
    lVar12 = (uint64_t)uVar2 * 0x60;
    lVar8 = lVar11 + lVar12;
    if (lVar8 != lVar4) {
      do {
        FUN_18014d790(lVar8);
        lVar8 = lVar8 + 0x60;
      } while (lVar8 != lVar4);
      lVar11 = *plVar1;
    }
    param_1[5] = lVar12 + lVar11;
  }
  if (uVar2 != 0) {
    do {
      FUN_18025ef30((int64_t)(int)uVar10 * 0x60 + *plVar1,param_2);
      uVar6 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar6;
    } while (uVar6 < uVar2);
  }
  return;
}






// 函数: void FUN_18025e930(int32_t *param_1,uint64_t param_2,int64_t *param_3,uint64_t param_4)
void FUN_18025e930(int32_t *param_1,uint64_t param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint *puVar6;
  void *puVar7;
  uint64_t unaff_RDI;
  
  puVar5 = (int32_t *)param_3[1];
  if ((uint64_t)((*param_3 - (int64_t)puVar5) + param_3[2]) < 5) {
    System_BufferManager(param_3,(int64_t)puVar5 + (4 - *param_3));
    puVar5 = (int32_t *)param_3[1];
  }
  *puVar5 = 0;
  param_3[1] = param_3[1] + 4;
  puVar5 = (int32_t *)param_3[1];
  uVar2 = *param_1;
  if ((uint64_t)((*param_3 - (int64_t)puVar5) + param_3[2]) < 5) {
    System_BufferManager(param_3,(int64_t)puVar5 + (4 - *param_3));
    puVar5 = (int32_t *)param_3[1];
  }
  *puVar5 = uVar2;
  param_3[1] = param_3[1] + 4;
  FUN_180639f50(param_3,param_1 + 1);
  FUN_180639f50(param_3,param_1 + 5);
  FUN_1802609c0();
  uVar3 = param_1[0xe];
  puVar6 = (uint *)param_3[1];
  uVar1 = (uint64_t)uVar3 + 4;
  lVar4 = *param_3;
  if ((uint64_t)((param_3[2] - (int64_t)puVar6) + lVar4) <= uVar1) {
    System_BufferManager(param_3,(int64_t)puVar6 + (uVar1 - lVar4),lVar4,param_4,unaff_RDI);
    puVar6 = (uint *)param_3[1];
  }
  *puVar6 = uVar3;
  lVar4 = param_3[1];
  param_3[1] = lVar4 + 4;
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 0xc);
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar4 + 4,puVar7,(uint64_t)uVar3);
}






// 函数: void FUN_18025e9f0(int32_t *param_1,int64_t param_2)
void FUN_18025e9f0(int32_t *param_1,int64_t param_2)

{
  uint *puVar1;
  uint uVar2;
  int64_t lVar3;
  
  lVar3 = *(int64_t *)(param_2 + 8);
  *param_1 = *(int32_t *)(lVar3 + 4);
  param_1[1] = *(int32_t *)(lVar3 + 8);
  param_1[2] = *(int32_t *)(lVar3 + 0xc);
  param_1[3] = *(int32_t *)(lVar3 + 0x10);
  param_1[4] = *(int32_t *)(lVar3 + 0x14);
  param_1[5] = *(int32_t *)(lVar3 + 0x18);
  param_1[6] = *(int32_t *)(lVar3 + 0x1c);
  param_1[7] = *(int32_t *)(lVar3 + 0x20);
  param_1[8] = *(int32_t *)(lVar3 + 0x24);
  *(int64_t *)(param_2 + 8) = lVar3 + 0x28;
  FUN_180260830(param_1,param_2,param_1 + 9);
  uVar2 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar2 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 10) + 0x18))(param_1 + 10,puVar1,uVar2);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
  }
  return;
}






// 函数: void FUN_18025ea90(int32_t *param_1,uint64_t param_2,int64_t *param_3,uint64_t param_4)
void FUN_18025ea90(int32_t *param_1,uint64_t param_2,int64_t *param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint *puVar6;
  void *puVar7;
  uint64_t unaff_RDI;
  
  puVar5 = (int32_t *)param_3[1];
  if ((uint64_t)((*param_3 - (int64_t)puVar5) + param_3[2]) < 5) {
    System_BufferManager(param_3,(int64_t)puVar5 + (4 - *param_3));
    puVar5 = (int32_t *)param_3[1];
  }
  *puVar5 = 0;
  param_3[1] = param_3[1] + 4;
  puVar5 = (int32_t *)param_3[1];
  uVar2 = *param_1;
  if ((uint64_t)((*param_3 - (int64_t)puVar5) + param_3[2]) < 5) {
    System_BufferManager(param_3,(int64_t)puVar5 + (4 - *param_3));
    puVar5 = (int32_t *)param_3[1];
  }
  *puVar5 = uVar2;
  param_3[1] = param_3[1] + 4;
  FUN_180639f50(param_3,param_1 + 1);
  FUN_1802609c0();
  uVar3 = param_1[10];
  puVar6 = (uint *)param_3[1];
  uVar1 = (uint64_t)uVar3 + 4;
  lVar4 = *param_3;
  if ((uint64_t)((param_3[2] - (int64_t)puVar6) + lVar4) <= uVar1) {
    System_BufferManager(param_3,(int64_t)puVar6 + (uVar1 - lVar4),lVar4,param_4,unaff_RDI);
    puVar6 = (uint *)param_3[1];
  }
  *puVar6 = uVar3;
  lVar4 = param_3[1];
  param_3[1] = lVar4 + 4;
  puVar7 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar7 = *(void **)(param_1 + 8);
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar4 + 4,puVar7,(uint64_t)uVar3);
}






// 函数: void FUN_18025eb50(int64_t *param_1,int64_t *param_2)
void FUN_18025eb50(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int *piVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lStackX_8;
  
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  lVar10 = param_1[9];
  lVar9 = param_1[8];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = (int)(lVar10 - lVar9 >> 4);
  iVar7 = 0;
  piVar6 = (int *)(param_2[1] + 4);
  param_2[1] = (int64_t)piVar6;
  lVar10 = param_1[8];
  if (param_1[9] - lVar10 >> 4 != 0) {
    lVar9 = 0;
    do {
      if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 0x11) {
        System_BufferManager(param_2,(int64_t)piVar6 + (0x10 - *param_2));
        piVar6 = (int *)param_2[1];
      }
      iVar7 = iVar7 + 1;
      *piVar6 = *(int *)(lVar9 + lVar10);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = *(int32_t *)(lVar9 + 4 + lVar10);
      param_2[1] = param_2[1] + 4;
      lVar1 = lVar9 + 8;
      lVar9 = lVar9 + 0x10;
      *(int32_t *)param_2[1] = *(int32_t *)(lVar1 + lVar10);
      param_2[1] = param_2[1] + 4;
      *(int32_t *)param_2[1] = 0x3f800000;
      piVar6 = (int *)(param_2[1] + 4);
      param_2[1] = (int64_t)piVar6;
      lVar10 = param_1[8];
    } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(param_1[9] - lVar10 >> 4));
  }
  uVar8 = param_1[1] - *param_1 >> 5;
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
    piVar6 = (int *)param_2[1];
  }
  iVar7 = (int)uVar8;
  *piVar6 = iVar7;
  param_2[1] = param_2[1] + 4;
  piVar6 = (int *)param_2[1];
  if (0 < iVar7) {
    lVar10 = 0;
    uVar8 = uVar8 & 0xffffffff;
    do {
      System_QueueProcessor(param_2,*param_1 + lVar10);
      lVar10 = lVar10 + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    piVar6 = (int *)param_2[1];
  }
  iVar7 = (int)((param_1[5] - param_1[4]) / 0x14);
  if ((uint64_t)((*param_2 - (int64_t)piVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar6 + (4 - *param_2));
    piVar6 = (int *)param_2[1];
  }
  *piVar6 = iVar7;
  puVar4 = (int32_t *)(param_2[1] + 4);
  lStackX_8 = (int64_t)iVar7;
  param_2[1] = (int64_t)puVar4;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      lVar9 = param_1[4];
      uVar2 = *(uint *)(lVar10 + lVar9);
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = 0;
      lVar1 = *param_2;
      lVar5 = param_2[1] + 4;
      param_2[1] = lVar5;
      lVar12 = 0;
      if (lVar1 != 0) {
        lVar12 = lVar5 - lVar1;
      }
      if ((uint64_t)((lVar1 - lVar5) + param_2[2]) < 5) {
        System_BufferManager(param_2,(lVar5 - lVar1) + 4);
        lVar5 = param_2[1];
      }
      iVar7 = 0;
      param_2[1] = lVar5 + 4;
      puVar11 = (uint64_t *)&processed_var_8416_ptr;
      do {
        if ((*(uint *)(puVar11 + 1) & uVar2) != 0) {
          FUN_180639de0(param_2,*puVar11);
          iVar7 = iVar7 + 1;
        }
        puVar11 = puVar11 + 2;
      } while ((int64_t)puVar11 < 0x18098dc90);
      *(int *)(*param_2 + lVar12) = iVar7;
      puVar4 = (int32_t *)param_2[1];
      uVar3 = *(int32_t *)(lVar10 + 4 + lVar9);
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar3;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      uVar3 = *(int32_t *)(lVar10 + 8 + lVar9);
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar3;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      uVar3 = *(int32_t *)(lVar10 + 0xc + lVar9);
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar3;
      param_2[1] = param_2[1] + 4;
      puVar4 = (int32_t *)param_2[1];
      uVar3 = *(int32_t *)(lVar10 + 0x10 + lVar9);
      if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
        System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
        puVar4 = (int32_t *)param_2[1];
      }
      *puVar4 = uVar3;
      lVar10 = lVar10 + 0x14;
      param_2[1] = param_2[1] + 4;
      lStackX_8 = lStackX_8 + -1;
      puVar4 = (int32_t *)param_2[1];
    } while (lStackX_8 != 0);
  }
  return;
}






// 函数: void FUN_18025ed5a(int32_t *param_1)
void FUN_18025ed5a(int32_t *param_1)

{
  uint uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int64_t *unaff_RBX;
  int iVar7;
  void *puVar8;
  int64_t unaff_R12;
  int64_t lVar9;
  int64_t lVar10;
  int64_t in_stack_00000050;
  
  lVar10 = 0;
  do {
    lVar3 = *(int64_t *)(unaff_R12 + 0x20);
    uVar1 = *(uint *)(lVar10 + lVar3);
    if ((uint64_t)((*unaff_RBX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      param_1 = (int32_t *)unaff_RBX[1];
    }
    *param_1 = 0;
    lVar4 = *unaff_RBX;
    lVar5 = unaff_RBX[1] + 4;
    unaff_RBX[1] = lVar5;
    lVar9 = 0;
    if (lVar4 != 0) {
      lVar9 = lVar5 - lVar4;
    }
    if ((uint64_t)((lVar4 - lVar5) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      lVar5 = unaff_RBX[1];
    }
    iVar7 = 0;
    unaff_RBX[1] = lVar5 + 4;
    puVar8 = &processed_var_8416_ptr;
    do {
      if ((*(uint *)(puVar8 + 8) & uVar1) != 0) {
        FUN_180639de0();
        iVar7 = iVar7 + 1;
      }
      puVar8 = puVar8 + 0x10;
    } while ((int64_t)puVar8 < 0x18098dc90);
    *(int *)(*unaff_RBX + lVar9) = iVar7;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(lVar10 + 4 + lVar3);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(lVar10 + 8 + lVar3);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(lVar10 + 0xc + lVar3);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar2;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar6 = (int32_t *)unaff_RBX[1];
    uVar2 = *(int32_t *)(lVar10 + 0x10 + lVar3);
    if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      puVar6 = (int32_t *)unaff_RBX[1];
    }
    *puVar6 = uVar2;
    lVar10 = lVar10 + 0x14;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    in_stack_00000050 = in_stack_00000050 + -1;
    param_1 = (int32_t *)unaff_RBX[1];
  } while (in_stack_00000050 != 0);
  return;
}






// 函数: void FUN_18025ef24(void)
void FUN_18025ef24(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025ef30(int64_t *param_1,int64_t param_2)
void FUN_18025ef30(int64_t *param_1,int64_t param_2)

{
  byte *pbVar1;
  uint uVar2;
  int64_t lVar3;
  int *piVar4;
  int64_t lVar5;
  byte *pbVar6;
  uint *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int iVar11;
  uint64_t uVar12;
  int8_t auStack_4a8 [32];
  uint64_t uStack_488;
  int64_t *plStack_480;
  uint64_t uStack_478;
  void *puStack_468;
  byte *pbStack_460;
  int iStack_458;
  byte abStack_450 [1032];
  uint64_t uStack_48;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4a8;
  lVar8 = *(int64_t *)(param_2 + 8);
  piVar4 = (int *)(lVar8 + 4);
  *(int **)(param_2 + 8) = piVar4;
  iVar11 = *piVar4;
  *(int64_t *)(param_2 + 8) = lVar8 + 8;
  FUN_180080aa0(param_1 + 8,(int64_t)iVar11);
  iVar11 = 0;
  lVar8 = param_1[8];
  piVar4 = *(int **)(param_2 + 8);
  if (param_1[9] - lVar8 >> 4 != 0) {
    lVar9 = 0;
    do {
      *(int *)(lVar9 + lVar8) = *piVar4;
      *(int *)(lVar9 + 4 + lVar8) = piVar4[1];
      *(int *)(lVar9 + 8 + lVar8) = piVar4[2];
      *(int *)(lVar9 + 0xc + lVar8) = piVar4[3];
      piVar4 = piVar4 + 4;
      *(int **)(param_2 + 8) = piVar4;
      iVar11 = iVar11 + 1;
      lVar9 = lVar9 + 0x10;
      lVar8 = param_1[8];
    } while ((uint64_t)(int64_t)iVar11 < (uint64_t)(param_1[9] - lVar8 >> 4));
  }
  lVar8 = (int64_t)*piVar4;
  *(int **)(param_2 + 8) = piVar4 + 1;
  FUN_18025aa20(param_1,lVar8);
  if (lVar8 < 1) {
    puVar7 = *(uint **)(param_2 + 8);
  }
  else {
    lVar9 = 0;
    do {
      lVar3 = *param_1;
      uVar2 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar2 != 0) {
        (**(code **)(*(int64_t *)(lVar3 + lVar9) + 0x18))((int64_t *)(lVar3 + lVar9),puVar7,uVar2)
        ;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
        puVar7 = *(uint **)(param_2 + 8);
      }
      lVar9 = lVar9 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar12 = (uint64_t)(int)*puVar7;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  plVar10 = param_1 + 4;
  uStack_488 = uVar12;
  plStack_480 = plVar10;
  if ((uint64_t)((param_1[5] - *plVar10) / 0x14) < uVar12) {
    FUN_1802611f0(plVar10);
  }
  else {
    param_1[5] = *plVar10 + uVar12 * 0x14;
  }
  if (0 < (int64_t)uVar12) {
    lVar8 = *(int64_t *)(param_2 + 8);
    lVar9 = 0;
    do {
      lVar3 = *plVar10;
      *(int64_t *)(param_2 + 8) = lVar8 + 4;
      *(int32_t *)(lVar9 + lVar3) = 0;
      uVar2 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar2 != 0) {
        uVar12 = (uint64_t)uVar2;
        do {
          puStack_468 = &memory_allocator_336_ptr;
          pbStack_460 = abStack_450;
          iStack_458 = 0;
          abStack_450[0] = 0;
          uVar2 = **(uint **)(param_2 + 8);
          puVar7 = *(uint **)(param_2 + 8) + 1;
          *(uint **)(param_2 + 8) = puVar7;
          if (uVar2 != 0) {
            FUN_180045f60(&puStack_468,puVar7,uVar2);
            *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar2;
          }
          lVar8 = 0;
          plVar10 = (int64_t *)&processed_var_8416_ptr;
          do {
            lVar5 = -1;
            do {
              lVar5 = lVar5 + 1;
            } while (*(char *)(*plVar10 + lVar5) != '\0');
            iVar11 = (int)lVar5;
            if (iStack_458 == iVar11) {
              if (iStack_458 != 0) {
                pbVar6 = pbStack_460;
                do {
                  pbVar1 = pbVar6 + (*plVar10 - (int64_t)pbStack_460);
                  iVar11 = (uint)*pbVar6 - (uint)*pbVar1;
                  if (iVar11 != 0) break;
                  pbVar6 = pbVar6 + 1;
                } while (*pbVar1 != 0);
              }
LAB_18025f1ce:
              if (iVar11 == 0) {
                *(uint *)(lVar9 + lVar3) =
                     *(uint *)(lVar9 + lVar3) | *(uint *)(&processed_var_8424_ptr + lVar8 * 0x10);
                break;
              }
            }
            else if (iStack_458 == 0) goto LAB_18025f1ce;
            lVar8 = lVar8 + 1;
            plVar10 = plVar10 + 2;
          } while ((int64_t)plVar10 < 0x18098dc90);
          puStack_468 = &system_state_ptr;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        puVar7 = *(uint **)(param_2 + 8);
        plVar10 = plStack_480;
        uVar12 = uStack_488;
      }
      *(uint *)(lVar9 + 4 + lVar3) = *puVar7;
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(lVar9 + 8 + lVar3) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(lVar9 + 0xc + lVar3) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(lVar9 + 0x10 + lVar3) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      lVar8 = *(int64_t *)(param_2 + 8);
      lVar9 = lVar9 + 0x14;
      uVar12 = uVar12 - 1;
      uStack_488 = uVar12;
    } while (uVar12 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_4a8);
}



uint64_t * FUN_18025f2a0(uint64_t *param_1)

{
  *param_1 = &processed_var_5192_ptr;
  *param_1 = &processed_var_4392_ptr;
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &system_data_buffer_ptr;
  param_1[5] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 6;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 6;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 6;
  *(int32_t *)(param_1 + 0x1a) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int8_t *)((int64_t)param_1 + 0xd4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 1) = 1;
  return param_1;
}



uint64_t *
FUN_18025f390(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180260c80();
  FUN_18014e4d0();
  FUN_18014e570();
  param_1[2] = &system_data_buffer_ptr;
  if (param_1[3] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[3] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[2] = &system_state_ptr;
  *param_1 = &processed_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xd8,param_3,param_4,uVar1);
  }
  return param_1;
}






// 函数: void FUN_18025f450(int64_t *param_1)
void FUN_18025f450(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_18005d580(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_18025f490(int64_t param_1,int64_t *param_2)
void FUN_18025f490(int64_t param_1,int64_t *param_2)

{
  int8_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int8_t *puVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int *piVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  uVar2 = *(int32_t *)(param_1 + 8);
  puVar6 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = uVar2;
  param_2[1] = param_2[1] + 4;
  System_QueueProcessor(param_2,param_1 + 0x10);
  puVar5 = (int8_t *)param_2[1];
  uVar1 = *(int8_t *)(param_1 + 0xd4);
  if ((uint64_t)((*param_2 - (int64_t)puVar5) + param_2[2]) < 2) {
    System_BufferManager(param_2,puVar5 + (1 - *param_2));
    puVar5 = (int8_t *)param_2[1];
  }
  *puVar5 = uVar1;
  puVar6 = (int32_t *)(param_2[1] + 1);
  param_2[1] = (int64_t)puVar6;
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar6 + (0x10 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  uVar2 = *(int32_t *)(param_1 + 0x34);
  uVar3 = *(int32_t *)(param_1 + 0x38);
  uVar4 = *(int32_t *)(param_1 + 0x3c);
  *puVar6 = *(int32_t *)(param_1 + 0x30);
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  piVar10 = (int *)(param_2[1] + 0x10);
  param_2[1] = (int64_t)piVar10;
  lVar7 = *(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60);
  lVar7 = lVar7 / 0x12 + (lVar7 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  *piVar10 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  iVar9 = 0;
  puVar6 = (int32_t *)param_2[1];
  uVar12 = (*(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60)) / 0x48;
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      FUN_18025e930(*(int64_t *)(param_1 + 0x60) + uVar11 * 0x48,uVar12,param_2);
      iVar9 = iVar9 + 1;
      uVar11 = (uint64_t)iVar9;
      uVar12 = (*(int64_t *)(param_1 + 0x68) - *(int64_t *)(param_1 + 0x60)) / 0x48;
    } while (uVar11 < uVar12);
    puVar6 = (int32_t *)param_2[1];
  }
  lVar7 = *(int64_t *)(param_1 + 0x48);
  lVar8 = *(int64_t *)(param_1 + 0x40);
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = (int)((lVar7 - lVar8) / 0x38);
  param_2[1] = param_2[1] + 4;
  iVar9 = 0;
  piVar10 = (int *)param_2[1];
  uVar12 = (*(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x40)) / 0x38;
  if (uVar12 != 0) {
    uVar11 = 0;
    do {
      FUN_18025ea90(uVar11 * 0x38 + *(int64_t *)(param_1 + 0x40),uVar12,param_2);
      iVar9 = iVar9 + 1;
      uVar11 = (uint64_t)iVar9;
      uVar12 = (*(int64_t *)(param_1 + 0x48) - *(int64_t *)(param_1 + 0x40)) / 0x38;
    } while (uVar11 < uVar12);
    piVar10 = (int *)param_2[1];
  }
  lVar7 = *(int64_t *)(param_1 + 0x88) - *(int64_t *)(param_1 + 0x80);
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  if ((uint64_t)((*param_2 - (int64_t)piVar10) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  *piVar10 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  iVar9 = 0;
  lVar8 = *(int64_t *)(param_1 + 0x88) - *(int64_t *)(param_1 + 0x80);
  puVar6 = (int32_t *)param_2[1];
  lVar7 = lVar8 >> 0x3f;
  if (lVar8 / 0x30 + lVar7 != lVar7) {
    uVar12 = 0;
    do {
      FUN_1802606b0(uVar12 * 0x30 + *(int64_t *)(param_1 + 0x80),param_2);
      iVar9 = iVar9 + 1;
      uVar12 = (uint64_t)iVar9;
    } while (uVar12 < (uint64_t)
                      ((*(int64_t *)(param_1 + 0x88) - *(int64_t *)(param_1 + 0x80)) / 0x30));
    puVar6 = (int32_t *)param_2[1];
  }
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = 0;
  puVar6 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar6;
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar6 + (0x10 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = *(int32_t *)(param_1 + 0xa0);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = *(int32_t *)(param_1 + 0xa4);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = *(int32_t *)(param_1 + 0xa8);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = 0x3f800000;
  puVar6 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar6;
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar6 + (0x10 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = *(int32_t *)(param_1 + 0xb0);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = *(int32_t *)(param_1 + 0xb4);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = *(int32_t *)(param_1 + 0xb8);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = 0x3f800000;
  puVar6 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar6;
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 0x11) {
    System_BufferManager(param_2,(int64_t)puVar6 + (0x10 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = *(int32_t *)(param_1 + 0xc0);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = *(int32_t *)(param_1 + 0xc4);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = *(int32_t *)(param_1 + 200);
  lVar7 = param_2[1];
  param_2[1] = lVar7 + 4;
  *(int32_t *)(lVar7 + 4) = 0x3f800000;
  puVar6 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar6;
  uVar2 = *(int32_t *)(param_1 + 0xd0);
  if ((uint64_t)((*param_2 - (int64_t)puVar6) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar6 + (4 - *param_2));
    *(int32_t *)param_2[1] = uVar2;
  }
  else {
    *puVar6 = uVar2;
  }
  param_2[1] = param_2[1] + 4;
  return;
}






