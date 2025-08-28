/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_08_part001.c - 17 个函数
#include "TaleWorlds.Native.Split.h"
// 99_part_08.c - 500 个函数
// 函数: void UISystem_dcaf1(int param_1)
void UISystem_dcaf1(int param_1)
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
  int local_buffer_60;
  int local_buffer_68;
  puVar6 = (int32_t *)(unaff_R14 + unaff_R13 * 0x28);
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
LAB_1804dcb65:
        piVar2 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dcb65;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
// WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
      param_1 = local_buffer_60;
    }
    param_1 = param_1 + -1;
    puVar6 = puVar6 + -10;
    unaff_R13 = unaff_R13 + -1;
    local_buffer_60 = param_1;
    unaff_EDI = local_buffer_68;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}
// 函数: void UISystem_dcbf7(uint64_t param_1,int param_2)
void UISystem_dcbf7(uint64_t param_1,int param_2)
{
  int64_t unaff_RBP;
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_dcc20(int64_t param_1)
void UISystem_dcc20(int64_t param_1)
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
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0x18,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dcd00;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dcc92:
    plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dcc92;
    plVar2 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar2 = lVar1;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int64_t **)(param_1 + 0x30) = plVar2;
  *(int64_t **)(param_1 + 0x40) = plVar2 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar2 + 1;
LAB_1804dcd00:
  GenericFunction_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (int64_t)iVar4;
  if (-1 < iVar4) {
    puVar11 = (int32_t *)(lVar1 + lVar12 * 0x18);
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
LAB_1804dcda5:
          piVar3 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dcda5;
          piVar3 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
// WARNING: Subroutine does not return
          memmove(piVar3,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar3 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(int **)(param_1 + 0x20) = piVar3 + lVar1;
        *(int **)(param_1 + 0x10) = piVar3;
        *(int **)(param_1 + 0x18) = piVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -6;
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
// 函数: void UISystem_dcd31(int param_1)
void UISystem_dcd31(int param_1)
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
  int local_buffer_60;
  int local_buffer_68;
  puVar6 = (int32_t *)(unaff_R14 + unaff_R13 * 0x18);
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
LAB_1804dcda5:
        piVar2 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dcda5;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
// WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
      param_1 = local_buffer_60;
    }
    param_1 = param_1 + -1;
    puVar6 = puVar6 + -6;
    unaff_R13 = unaff_R13 + -1;
    local_buffer_60 = param_1;
    unaff_EDI = local_buffer_68;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}
// 函数: void UISystem_dce37(uint64_t param_1,int param_2)
void UISystem_dce37(uint64_t param_1,int param_2)
{
  int64_t unaff_RBP;
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_dce60(int64_t param_1)
void UISystem_dce60(int64_t param_1)
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
  lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0xc0,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar2;
    goto LAB_1804dcf40;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dced2:
    plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dced2;
    plVar3 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
// WARNING: Subroutine does not return
    memmove(plVar3,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar3 = lVar2;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int64_t **)(param_1 + 0x30) = plVar3;
  *(int64_t **)(param_1 + 0x40) = plVar3 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar3 + 1;
LAB_1804dcf40:
  GenericFunction_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar1 = iVar8 + -1;
  lVar12 = (int64_t)iVar1;
  if (-1 < iVar1) {
    puVar11 = (int32_t *)(lVar12 * 0xc0 + lVar2);
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
LAB_1804dcfe5:
          piVar4 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1804dcfe5;
          piVar4 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
// WARNING: Subroutine does not return
          memmove(piVar4,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar4 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(int **)(param_1 + 0x10) = piVar4;
        *(int **)(param_1 + 0x20) = piVar4 + lVar2;
        *(int **)(param_1 + 0x18) = piVar4 + 1;
      }
      puVar11 = puVar11 + -0x30;
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
// 函数: void UISystem_dcf71(void)
void UISystem_dcf71(void)
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
  int local_buffer_60;
  int local_buffer_68;
  puVar6 = (int32_t *)(unaff_R13 * 0xc0 + unaff_R14);
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
LAB_1804dcfe5:
        piVar2 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dcfe5;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
// WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
    }
    puVar6 = puVar6 + -0x30;
    in_EAX = local_buffer_60 + -1;
    unaff_R13 = unaff_R13 + -1;
    local_buffer_60 = in_EAX;
    unaff_EDI = local_buffer_68;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}
// 函数: void UISystem_dd07a(int param_1)
void UISystem_dd07a(int param_1)
{
  int64_t unaff_RBP;
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_dd0a0(int64_t param_1)
void UISystem_dd0a0(int64_t param_1)
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
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_1 + 0x54) * 0x48,0x17);
  plVar7 = *(int64_t **)(param_1 + 0x38);
  plVar5 = *(int64_t **)(param_1 + 0x30);
  lVar9 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
  if (plVar7 < *(int64_t **)(param_1 + 0x40)) {
    *(int64_t **)(param_1 + 0x38) = plVar7 + 1;
    *plVar7 = lVar1;
    goto LAB_1804dd180;
  }
  if (lVar9 == 0) {
    lVar12 = 1;
LAB_1804dd112:
    plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_1 + 0x48));
    plVar5 = *(int64_t **)(param_1 + 0x30);
    plVar7 = *(int64_t **)(param_1 + 0x38);
  }
  else {
    lVar12 = lVar9 * 2;
    if (lVar12 != 0) goto LAB_1804dd112;
    plVar2 = (int64_t *)0x0;
  }
  if (plVar5 != plVar7) {
// WARNING: Subroutine does not return
    memmove(plVar2,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
  }
  *plVar2 = lVar1;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int64_t **)(param_1 + 0x30) = plVar2;
  *(int64_t **)(param_1 + 0x40) = plVar2 + lVar12;
  *(int64_t **)(param_1 + 0x38) = plVar2 + 1;
LAB_1804dd180:
  GenericFunction_18014e8b0(param_1 + 0x10,
                (*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 0x10) >> 2) +
                (int64_t)*(int *)(param_1 + 0x54));
  iVar8 = *(int *)(param_1 + 0x54);
  iVar4 = iVar8 + -1;
  lVar12 = (int64_t)iVar4;
  if (-1 < iVar4) {
    puVar11 = (int32_t *)(lVar1 + lVar12 * 0x48);
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
LAB_1804dd225:
          piVar3 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(param_1 + 0x28));
          piVar6 = *(int **)(param_1 + 0x10);
          piVar10 = *(int **)(param_1 + 0x18);
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_1804dd225;
          piVar3 = (int *)0x0;
        }
        if (piVar6 != piVar10) {
// WARNING: Subroutine does not return
          memmove(piVar3,piVar6,(int64_t)piVar10 - (int64_t)piVar6);
        }
        *piVar3 = iVar8;
        if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(int **)(param_1 + 0x20) = piVar3 + lVar1;
        *(int **)(param_1 + 0x10) = piVar3;
        *(int **)(param_1 + 0x18) = piVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      puVar11 = puVar11 + -0x12;
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
// 函数: void UISystem_dd1b1(int param_1)
void UISystem_dd1b1(int param_1)
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
  int local_buffer_60;
  int local_buffer_68;
  puVar6 = (int32_t *)(unaff_R14 + unaff_R13 * 0x48);
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
LAB_1804dd225:
        piVar2 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,*(int8_t *)(unaff_RBP + 0x28));
        piVar3 = *(int **)(unaff_RBP + 0x10);
        piVar5 = *(int **)(unaff_RBP + 0x18);
      }
      else {
        lVar1 = lVar1 * 2;
        if (lVar1 != 0) goto LAB_1804dd225;
        piVar2 = (int *)0x0;
      }
      if (piVar3 != piVar5) {
// WARNING: Subroutine does not return
        memmove(piVar2,piVar3,(int64_t)piVar5 - (int64_t)piVar3);
      }
      *piVar2 = iVar4;
      if (*(int64_t *)(unaff_RBP + 0x10) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int **)(unaff_RBP + 0x20) = piVar2 + lVar1;
      *(int **)(unaff_RBP + 0x10) = piVar2;
      *(int **)(unaff_RBP + 0x18) = piVar2 + 1;
      param_1 = local_buffer_60;
    }
    param_1 = param_1 + -1;
    puVar6 = puVar6 + -0x12;
    unaff_R13 = unaff_R13 + -1;
    local_buffer_60 = param_1;
    unaff_EDI = local_buffer_68;
    if (unaff_R13 < 0) {
      *(int *)(unaff_RBP + 8) =
           *(int *)(unaff_RBP + 8) +
           (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) *
           *(int *)(unaff_RBP + 0x54);
      return;
    }
  } while( true );
}
// 函数: void UISystem_dd2b7(uint64_t param_1,int param_2)
void UISystem_dd2b7(uint64_t param_1,int param_2)
{
  int64_t unaff_RBP;
  *(int *)(unaff_RBP + 8) =
       *(int *)(unaff_RBP + 8) +
       (int)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) * param_2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UISystem_dd2e0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  plVar3 = *(int64_t **)(lVar1 + uVar2 * 8);
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[2];
    } while (plVar3 != (int64_t *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  *(int32_t *)(plVar3 + 1) = 0;
  plVar3[2] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
  }
  plVar3[2] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_dd33b(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_dd33b(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint local_buffer_84;
  RenderingShaderProcessor0(param_1,&local_buffer_00000080,param_3,param_4,1);
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(int32_t *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)local_buffer_84 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)local_buffer_84 * 8);
  }
  puVar2[2] = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(uint64_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void UISystem_dd43e(uint64_t param_1,uint64_t param_2)
void UISystem_dd43e(uint64_t param_1,uint64_t param_2)
{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}
// 函数: void UISystem_dd45a(uint64_t param_1)
void UISystem_dd45a(uint64_t param_1)
{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x10) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void UISystem_dd480(void)
void UISystem_dd480(void)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  *(uint64_t *)(unaff_R12 + 0x10) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_dd4d0(uint64_t *param_1,uint64_t param_2,int32_t *param_3)
void UISystem_dd4d0(uint64_t *param_1,uint64_t param_2,int32_t *param_3)
{
  bool bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 5));
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  bVar1 = true;
  *(int32_t *)(lVar5 + 0x20) = *param_3;
  *(int32_t *)(lVar5 + 0x24) = uVar2;
  *(int32_t *)(lVar5 + 0x28) = uVar3;
  *(int32_t *)(lVar5 + 0x2c) = uVar4;
  puVar7 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar6 = (uint64_t *)param_1[2];
    do {
      puVar7 = puVar6;
      bVar1 = *(int *)(lVar5 + 0x28) < *(int *)(puVar7 + 5);
      if (*(int *)(lVar5 + 0x28) < *(int *)(puVar7 + 5)) {
        puVar6 = (uint64_t *)puVar7[1];
      }
      else {
        puVar6 = (uint64_t *)*puVar7;
      }
    } while (puVar6 != (uint64_t *)0x0);
  }
  puVar6 = puVar7;
  if (bVar1) {
    if (puVar7 == (uint64_t *)param_1[1]) goto LAB_1804dd56e;
    puVar6 = (uint64_t *)Function_e2d50782(puVar7);
  }
  if (*(int *)(lVar5 + 0x28) <= *(int *)(puVar6 + 5)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar5);
  }
LAB_1804dd56e:
  if ((puVar7 == param_1) || (*(int *)(lVar5 + 0x28) < *(int *)(puVar7 + 5))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
// WARNING: Subroutine does not return
  SystemStateController(lVar5,puVar7,param_1,uVar8);
}
int64_t * UISystem_dd5d0(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar3 = ((((uint64_t)*(byte *)(param_3 + 10) ^
            (((uint64_t)*(byte *)(param_3 + 8) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (uint64_t)*(byte *)(param_3 + 9)) * 0x100000001b3) * 0x100000001b3 ^
           (uint64_t)*(byte *)(param_3 + 0xb)) * 0x100000001b3) %
          (uint64_t)*(uint *)(param_1 + 0x10);
  lVar2 = *(int64_t *)(lVar1 + uVar3 * 8);
  if (lVar2 != 0) {
    do {
      if (*(int *)(param_3 + 8) == *(int *)(lVar2 + 8)) goto LAB_1804dd650;
      lVar2 = *(int64_t *)(lVar2 + 0x18);
    } while (lVar2 != 0);
  }
  lVar2 = 0;
LAB_1804dd650:
  if (lVar2 == 0) {
    uVar3 = *(uint64_t *)(param_1 + 0x10);
    lVar2 = *(int64_t *)(lVar1 + uVar3 * 8);
  }
  *param_2 = lVar2;
  param_2[1] = lVar1 + uVar3 * 8;
  return param_2;
}