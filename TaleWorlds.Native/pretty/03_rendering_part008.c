#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part008.c - 4 个函数

// 函数: void FUN_180271c54(void)
void FUN_180271c54(void)

{
  int8_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t *puVar5;
  int32_t *puVar6;
  int *piVar7;
  int64_t *unaff_RBX;
  int iVar8;
  int64_t unaff_RBP;
  int iVar9;
  int64_t unaff_RDI;
  
  do {
    System_QueueProcessor();
    unaff_RBP = unaff_RBP + -1;
  } while (unaff_RBP != 0);
  FUN_18025a940(&processed_var_9712_ptr,*(int32_t *)(unaff_RDI + 0x7c8));
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x7cc);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar6 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  piVar7 = (int *)unaff_RBX[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  System_QueueProcessor();
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (int32_t *)unaff_RBX[1];
  uVar2 = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  *puVar6 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  lVar3 = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar3 = 5;
  do {
    System_QueueProcessor();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar3 = 9;
  do {
    System_QueueProcessor();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  System_QueueProcessor();
  System_QueueProcessor();
  lVar3 = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  System_QueueProcessor();
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  *puVar6 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar7 = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      piVar7 = (int *)unaff_RBX[1];
    }
    *piVar7 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





// 函数: void FUN_180271ca1(void)
void FUN_180271ca1(void)

{
  int8_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t *puVar5;
  int32_t *puVar6;
  int *piVar7;
  int64_t *unaff_RBX;
  int iVar8;
  int8_t unaff_SIL;
  int iVar9;
  int64_t unaff_RDI;
  
  System_BufferManager();
  *(int8_t *)unaff_RBX[1] = unaff_SIL;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  if (*(char *)(unaff_RDI + 0x7cc) == '\0') {
    return;
  }
  puVar6 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  piVar7 = (int *)unaff_RBX[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  System_QueueProcessor();
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (int32_t *)unaff_RBX[1];
  uVar2 = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  *puVar6 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  lVar3 = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar3 = 5;
  do {
    System_QueueProcessor();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar3 = 9;
  do {
    System_QueueProcessor();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  System_QueueProcessor();
  System_QueueProcessor();
  lVar3 = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  System_QueueProcessor();
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  *puVar6 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar7 = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      piVar7 = (int *)unaff_RBX[1];
    }
    *piVar7 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}





// 函数: void FUN_180271cc9(void)
void FUN_180271cc9(void)

{
  int8_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t *puVar5;
  int32_t *puVar6;
  int *piVar7;
  int64_t *unaff_RBX;
  int iVar8;
  int iVar9;
  int64_t unaff_RDI;
  uint64_t in_stack_00000030;
  uint64_t uStack0000000000000040;
  
  uStack0000000000000040 = in_stack_00000030;
  puVar6 = (int32_t *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  iVar9 = 0;
  *puVar6 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar3 = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  piVar7 = (int *)unaff_RBX[1];
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x7f8) - *(int64_t *)(unaff_RDI + 0x7f0)) / 0x98));
  }
  System_QueueProcessor();
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x8a8);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (int32_t *)unaff_RBX[1];
  uVar2 = *(int32_t *)(unaff_RDI + 0x8ac);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  *puVar6 = uVar2;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  System_QueueProcessor();
  lVar3 = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x950) - *(int64_t *)(unaff_RDI + 0x948)) / 0x98));
  }
  lVar3 = 5;
  do {
    System_QueueProcessor();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0xc68) - *(int64_t *)(unaff_RDI + 0xc60)) / 0x98));
  }
  lVar3 = 9;
  do {
    System_QueueProcessor();
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  System_QueueProcessor();
  System_QueueProcessor();
  lVar3 = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  lVar3 = lVar3 / 0x26 + (lVar3 >> 0x3f);
  piVar7 = (int *)unaff_RBX[1];
  if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    piVar7 = (int *)unaff_RBX[1];
  }
  *piVar7 = (int)(lVar3 >> 2) - (int)(lVar3 >> 0x3f);
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar4 = *(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888);
  lVar3 = lVar4 >> 0x3f;
  iVar8 = iVar9;
  if (lVar4 / 0x98 + lVar3 != lVar3) {
    do {
      System_QueueProcessor();
      iVar8 = iVar8 + 1;
    } while ((uint64_t)(int64_t)iVar8 <
             (uint64_t)
             ((*(int64_t *)(unaff_RDI + 0x1890) - *(int64_t *)(unaff_RDI + 0x1888)) / 0x98));
  }
  System_QueueProcessor();
  puVar5 = (int8_t *)unaff_RBX[1];
  uVar1 = *(int8_t *)(unaff_RDI + 0x18c9);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar5) + unaff_RBX[2]) < 2) {
    System_BufferManager();
    puVar5 = (int8_t *)unaff_RBX[1];
  }
  *puVar5 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 1;
  puVar6 = (int32_t *)unaff_RBX[1];
  if (*(char *)(unaff_RDI + 0x18c9) != '\0') {
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    System_QueueProcessor();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar6) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar6 = (int32_t *)unaff_RBX[1];
  }
  *puVar6 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  do {
    piVar7 = (int *)unaff_RBX[1];
    if ((uint64_t)((*unaff_RBX - (int64_t)piVar7) + unaff_RBX[2]) < 5) {
      System_BufferManager();
      piVar7 = (int *)unaff_RBX[1];
    }
    *piVar7 = iVar9;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    System_QueueProcessor();
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180271cf0(int64_t param_1,int64_t param_2)
void FUN_180271cf0(int64_t param_1,int64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int *piVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint *puVar7;
  void *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int8_t auStack_118 [32];
  uint64_t uStack_f8;
  void *puStack_e8;
  void *puStack_e0;
  int32_t uStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  lVar13 = *(int64_t *)(param_2 + 8);
  piVar3 = (int *)(lVar13 + 4);
  *(int **)(param_2 + 8) = piVar3;
  iVar1 = *piVar3;
  *(int64_t *)(param_2 + 8) = lVar13 + 8;
  FUN_180272e40(param_1 + 0x20,(int64_t)iVar1);
  uVar10 = 0;
  lVar13 = *(int64_t *)(param_1 + 0x20);
  lVar5 = *(int64_t *)(param_1 + 0x28) - lVar13;
  lVar2 = lVar5 >> 0x3f;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (lVar5 / 0x98 + lVar2 == lVar2) {
    puVar7 = *(uint **)(param_2 + 8);
  }
  else {
    do {
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*(int64_t *)(uVar9 + lVar13) + 0x18))
                  ((int64_t *)(uVar9 + lVar13),puVar7,uVar11);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
        puVar7 = *(uint **)(param_2 + 8);
      }
      uVar11 = (int)uVar12 + 1;
      lVar13 = *(int64_t *)(param_1 + 0x20);
      uVar9 = uVar9 + 0x98;
      uVar12 = (uint64_t)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)((*(int64_t *)(param_1 + 0x28) - lVar13) / 0x98));
  }
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x40) + 0x18))((int64_t *)(param_1 + 0x40),puVar7,uVar11);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  *(char *)(param_1 + 0xd8) = (char)*puVar7;
  puVar4 = (int32_t *)(*(int64_t *)(param_2 + 8) + 1);
  *(int32_t **)(param_2 + 8) = puVar4;
  *(int32_t *)(param_1 + 0xdc) = *puVar4;
  lVar13 = *(int64_t *)(param_2 + 8);
  puVar7 = (uint *)(lVar13 + 4);
  *(uint **)(param_2 + 8) = puVar7;
  uVar11 = *puVar7;
  piVar3 = (int *)(lVar13 + 8);
  *(int **)(param_2 + 8) = piVar3;
  if (uVar11 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0xe0) + 0x18))((int64_t *)(param_1 + 0xe0),piVar3,uVar11);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
    piVar3 = *(int **)(param_2 + 8);
  }
  iVar1 = *piVar3;
  *(int **)(param_2 + 8) = piVar3 + 1;
  FUN_180272e40(param_1 + 0x178,(int64_t)iVar1);
  lVar13 = *(int64_t *)(param_1 + 0x178);
  lVar5 = *(int64_t *)(param_1 + 0x180) - lVar13;
  lVar2 = lVar5 >> 0x3f;
  uVar9 = uVar10;
  uVar12 = uVar10;
  if (lVar5 / 0x98 + lVar2 != lVar2) {
    do {
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*(int64_t *)(uVar9 + lVar13) + 0x18))
                  ((int64_t *)(uVar9 + lVar13),puVar7,uVar11);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      }
      uVar11 = (int)uVar12 + 1;
      lVar13 = *(int64_t *)(param_1 + 0x178);
      uVar9 = uVar9 + 0x98;
      uVar12 = (uint64_t)uVar11;
    } while ((uint64_t)(int64_t)(int)uVar11 <
             (uint64_t)((*(int64_t *)(param_1 + 0x180) - lVar13) / 0x98));
  }
  plVar6 = (int64_t *)(param_1 + 0x198);
  lVar13 = 5;
  do {
    uVar11 = **(uint **)(param_2 + 8);
    puVar7 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    plVar6 = plVar6 + 0x13;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  lVar13 = (int64_t)(int)*puVar7;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  FUN_180272e40(param_1 + 0x490,lVar13);
  uVar9 = uVar10;
  if (0 < lVar13) {
    do {
      plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x490) + uVar9);
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      }
      lVar13 = lVar13 + -1;
      uVar9 = uVar9 + 0x98;
    } while (lVar13 != 0);
  }
  plVar6 = (int64_t *)(param_1 + 0xa30);
  lVar13 = 9;
  do {
    uVar11 = **(uint **)(param_2 + 8);
    puVar7 = *(uint **)(param_2 + 8) + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    plVar6 = plVar6 + 0x13;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0xf88) + 0x18))(param_1 + 0xf88,puVar7,uVar11);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x1020) + 0x18))(param_1 + 0x1020,puVar7,uVar11);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  lVar13 = (int64_t)(int)*puVar7;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  FUN_180272e40(param_1 + 0x10b8,lVar13);
  if (lVar13 < 1) {
    puVar7 = *(uint **)(param_2 + 8);
  }
  else {
    do {
      plVar6 = (int64_t *)(*(int64_t *)(param_1 + 0x10b8) + uVar10);
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,uVar11);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
        puVar7 = *(uint **)(param_2 + 8);
      }
      uVar10 = uVar10 + 0x98;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  uVar11 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar11 != 0) {
    (**(code **)(*(int64_t *)(param_1 + 0x10d8) + 0x18))
              ((int64_t *)(param_1 + 0x10d8),puVar7,uVar11);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
    puVar7 = *(uint **)(param_2 + 8);
  }
  *(char *)(param_1 + 0x10f9) = (char)*puVar7;
  lVar13 = *(int64_t *)(param_2 + 8);
  puVar7 = (uint *)(lVar13 + 1);
  *(uint **)(param_2 + 8) = puVar7;
  if (*(char *)(param_1 + 0x10f9) != '\0') {
    uVar11 = *puVar7;
    puVar7 = (uint *)(lVar13 + 5);
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(int64_t *)(param_1 + 0x1100) + 0x18))
                ((int64_t *)(param_1 + 0x1100),puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(int64_t *)(param_1 + 0x1198) + 0x18))
                ((int64_t *)(param_1 + 0x1198),puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(int64_t *)(param_1 + 0x1230) + 0x18))
                ((int64_t *)(param_1 + 0x1230),puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(int64_t *)(param_1 + 0x12c8) + 0x18))
                ((int64_t *)(param_1 + 0x12c8),puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(int64_t *)(param_1 + 0x1360) + 0x18))
                ((int64_t *)(param_1 + 0x1360),puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
    uVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    *(uint **)(param_2 + 8) = puVar7;
    if (uVar11 != 0) {
      (**(code **)(*(int64_t *)(param_1 + 0x13f8) + 0x18))
                ((int64_t *)(param_1 + 0x13f8),puVar7,uVar11);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      puVar7 = *(uint **)(param_2 + 8);
    }
  }
  uVar11 = *puVar7;
  lVar13 = (int64_t)(int)uVar11;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  if (0 < (int)uVar11) {
    plVar6 = (int64_t *)(param_1 + 0x4b0);
    do {
      iVar1 = **(int **)(param_2 + 8);
      *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
      puStack_e8 = &memory_allocator_3432_ptr;
      puStack_e0 = auStack_d0;
      uStack_d8 = 0;
      auStack_d0[0] = 0;
      uVar11 = **(uint **)(param_2 + 8);
      puVar7 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar7;
      if (uVar11 != 0) {
        FUN_180049910(&puStack_e8,puVar7,uVar11);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar11;
      }
      if (iVar1 < 0x10) {
        puVar8 = &system_buffer_ptr;
        if (puStack_e0 != (void *)0x0) {
          puVar8 = puStack_e0;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,puVar8);
      }
      puStack_e8 = &system_state_ptr;
      plVar6 = plVar6 + 0xb;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_118);
}





