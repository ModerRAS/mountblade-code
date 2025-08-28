#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part072.c - 13 个函数

// 函数: void FUN_1804dc0f0(int64_t param_1)
void FUN_1804dc0f0(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int64_t *plVar5;
  int *piVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t *puVar11;
  int64_t lVar12;
  
  lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0x68,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dc1cc;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc15e:
    plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc15e;
    plVar3 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar3 = lVar2;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t **)(param_1 + 0x30) = plVar3;
  *(int64_t **)(param_1 + 0x40) = plVar3 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dc1cc:
  FUN_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (int64_t)iVar1;
  if (-1 < iVar1) {
    puVar11 = (int32_t *)(lVar12 * 0x68 + lVar2);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar1;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar2 = (int64_t)piVar10 - (int64_t)piVar6 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804dc265:
          piVar4 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dc265;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar4 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0x1a;
      iVar1 = iVar1 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc1fd(void)
void FUN_1804dc1fd(void)

{
  int in_EAX;
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int64_t unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  int32_t *puVar6;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (int32_t *)(unaff_R13 * 0x68 + unaff_R14);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + in_EAX;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (int64_t)piVar5 - (int64_t)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc265:
        piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc265;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0x1a;
    in_EAX = in_stack_00000060 + -1;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = in_EAX;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc2f7(int param_1)
void FUN_1804dc2f7(int param_1)

{
  int64_t unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc320(int64_t param_1)
void FUN_1804dc320(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int64_t *plVar5;
  int *piVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t *puVar11;
  int64_t lVar12;
  
  lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0xd8,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dc3ff;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc391:
    plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc391;
    plVar3 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar3 = lVar2;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t **)(param_1 + 0x30) = plVar3;
  *(int64_t **)(param_1 + 0x40) = plVar3 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dc3ff:
  FUN_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (int64_t)iVar1;
  if (-1 < iVar1) {
    puVar11 = (int32_t *)(lVar12 * 0xd8 + lVar2);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar1;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar2 = (int64_t)piVar10 - (int64_t)piVar6 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804dc4a5:
          piVar4 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dc4a5;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar4 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0x36;
      iVar1 = iVar1 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc430(void)
void FUN_1804dc430(void)

{
  int in_EAX;
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int64_t unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  int32_t *puVar6;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (int32_t *)(unaff_R13 * 0xd8 + unaff_R14);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + in_EAX;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (int64_t)piVar5 - (int64_t)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc4a5:
        piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc4a5;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0x36;
    in_EAX = in_stack_00000060 + -1;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = in_EAX;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc53a(int param_1)
void FUN_1804dc53a(int param_1)

{
  int64_t unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc560(int64_t param_1)
void FUN_1804dc560(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int *piVar4;
  int64_t *plVar5;
  int *piVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t *puVar11;
  int64_t lVar12;
  
  lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0x30,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dc640;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc5d2:
    plVar3 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc5d2;
    plVar3 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar3 = lVar2;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t **)(param_1 + 0x30) = plVar3;
  *(int64_t **)(param_1 + 0x40) = plVar3 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dc640:
  FUN_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (int64_t)iVar1;
  if (-1 < iVar1) {
    puVar11 = (int32_t *)(lVar12 * 0x30 + lVar2);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar1;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar2 = (int64_t)piVar10 - (int64_t)piVar6 >> 2;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1804dc6e5:
          piVar4 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dc6e5;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar4 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0xc;
      iVar1 = iVar1 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc671(void)
void FUN_1804dc671(void)

{
  int in_EAX;
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int64_t unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  int32_t *puVar6;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (int32_t *)(unaff_R13 * 0x30 + unaff_R14);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + in_EAX;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (int64_t)piVar5 - (int64_t)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc6e5:
        piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc6e5;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0xc;
    in_EAX = in_stack_00000060 + -1;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = in_EAX;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc777(int param_1)
void FUN_1804dc777(int param_1)

{
  int64_t unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc7a0(int64_t param_1)
void FUN_1804dc7a0(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int *piVar3;
  int iVar4;
  int64_t *plVar5;
  int *piVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t *puVar11;
  int64_t lVar12;
  
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0xc,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dc880;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dc812:
    plVar2 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dc812;
    plVar2 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar2 = lVar1;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t **)(param_1 + 0x30) = plVar2;
  *(int64_t **)(param_1 + 0x40) = plVar2 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar2 + 1;
LAB_1804dc880:
  FUN_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (int64_t)iVar4;
  if (-1 < iVar4) {
    puVar11 = (int32_t *)(lVar1 + lVar12 * 0xc);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar4;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar1 = (int64_t)piVar10 - (int64_t)piVar6 >> 2;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804dc925:
          piVar3 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dc925;
          piVar3 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar3,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar3 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(int **)(param_1 + 0x20) = piVar3 + lVar1;
        *(int **)(param_1 + 0x10) = piVar3;
        *(int **)(param_1 + 0x18) = piVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -3;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc8b1(int param_1)
void FUN_1804dc8b1(int param_1)

{
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int64_t unaff_RBP;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  int32_t *puVar6;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int in_stack_00000060;
  int in_stack_00000068;
  
  puVar6 = (int32_t *)(unaff_R14 + unaff_R13 * 0xc);
  do {
    *puVar6 = 0xffffffff;
    iVar4 = unaff_EDI * *(int *)(unaff_RBP + 0x54) + param_1;
    puVar6[1] = iVar4;
    piVar5 = *(int **)(unaff_RBP + 0x18);
    if (piVar5 < *(int **)(unaff_RBP + 0x20)) {
      *(int **)(unaff_RBP + 0x18) = piVar5 + 1;
      *piVar5 = iVar4;
    }
    else {
      piVar3 = *(int **)(unaff_RBP + 0x10);
      lVar1 = (int64_t)piVar5 - (int64_t)piVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804dc925:
        piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dc925;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
                    // WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
      param_1 = in_stack_00000060;
    }
    param_1 = param_1 + -1;
    puVar6 = puVar6 + -3;
    unaff_R13 = unaff_R13 + -1;
    in_stack_00000060 = param_1;
    unaff_EDI = in_stack_00000068;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}






// 函数: void FUN_1804dc9b7(uint64_t param_1,int param_2)
void FUN_1804dc9b7(uint64_t param_1,int param_2)

{
  int64_t unaff_RBP;
  
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804dc9e0(int64_t param_1)
void FUN_1804dc9e0(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int *piVar3;
  int iVar4;
  int64_t *plVar5;
  int *piVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t *puVar11;
  int64_t lVar12;
  
  lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0x28,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dcac0;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dca52:
    plVar2 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dca52;
    plVar2 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar2 = lVar1;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(int64_t **)(param_1 + 0x30) = plVar2;
  *(int64_t **)(param_1 + 0x40) = plVar2 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar2 + 1;
LAB_1804dcac0:
  FUN_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (int64_t)iVar4;
  if (-1 < iVar4) {
    puVar11 = (int32_t *)(lVar1 + lVar12 * 0x28);
    do {
      *puVar11 = 0xffffffff;
      iVar8 = (int)lVar9 * *(int *)(param_1 + 0x54) + iVar4;
      puVar11[1] = iVar8;
      piVar10 = *(int **)(param_1 + 0x18);
      if (piVar10 < *(int **)(param_1 + 0x20)) {
        *(int **)(param_1 + 0x18) = piVar10 + 1;
        *piVar10 = iVar8;
      }
      else {
        piVar6 = *(int **)(param_1 + 0x10);
        lVar1 = (int64_t)piVar10 - (int64_t)piVar6 >> 2;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804dcb65:
          piVar3 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dcb65;
          piVar3 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
                    // WARNING: Subroutine does not return
          memmove(piVar3,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar3 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        *(int **)(param_1 + 0x20) = piVar3 + lVar1;
        *(int **)(param_1 + 0x10) = piVar3;
        *(int **)(param_1 + 0x18) = piVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar8 = *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3) * iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




