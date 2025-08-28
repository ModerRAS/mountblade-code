#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part034.c - 5 个函数

// 函数: void FUN_18085dff0(uint64_t *param_1)
void FUN_18085dff0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t *plVar9;
  int32_t *puVar10;
  
  plVar1 = param_1 + 0x94;
  plVar9 = (int64_t *)0x0;
  *param_1 = &rendering_buffer_2520_ptr;
  param_1[1] = &rendering_buffer_2560_ptr;
  plVar5 = (int64_t *)(*plVar1 + -0x70);
  if (*plVar1 == 0) {
    plVar5 = plVar9;
  }
  plVar6 = plVar9;
  if (plVar5 != (int64_t *)0x0) {
    plVar6 = plVar5 + 0xe;
  }
  while (plVar6 != plVar1) {
    plVar5 = plVar6 + 0x82;
    if (plVar6 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x480;
    }
    *plVar5 = 0;
    if (plVar6 == plVar1) break;
    plVar5 = (int64_t *)(*plVar6 + -0x70);
    if (*plVar6 == 0) {
      plVar5 = plVar9;
    }
    plVar6 = plVar9;
    if (plVar5 != (int64_t *)0x0) {
      plVar6 = plVar5 + 0xe;
    }
  }
  plVar5 = param_1 + 0x92;
  plVar6 = (int64_t *)*plVar5;
  if ((plVar6 != plVar5) || ((int64_t *)param_1[0x93] != plVar5)) {
    if (plVar6 == plVar5) {
      plVar6 = plVar9;
    }
    if (plVar6 != (int64_t *)0x0) {
      plVar5 = plVar6;
    }
    *(int64_t *)plVar5[1] = *plVar5;
    *(int64_t *)(*plVar5 + 8) = plVar5[1];
    plVar5[1] = (int64_t)plVar5;
    *plVar5 = (int64_t)plVar5;
    *(int64_t **)plVar5[1] = plVar5;
    *(int64_t *)(*plVar5 + 8) = plVar5[1];
    plVar5[1] = (int64_t)plVar5;
    *plVar5 = (int64_t)plVar5;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar5,&rendering_buffer_2624_ptr,0x40e,1);
  }
  plVar9 = (int64_t *)param_1[0x9a];
  if ((plVar9 < (int64_t *)param_1[0x9a]) ||
     ((int64_t *)param_1[0x9a] + *(int *)(param_1 + 0x9b) <= plVar9)) {
    plVar9 = (int64_t *)param_1[0x8f];
    if (plVar9 == (int64_t *)0x0) {
      if (((*(byte *)(param_1 + 0x5b) & 1) != 0) &&
         (iVar4 = FUN_1808c7d50(*(uint64_t *)(param_1[0x11] + 0xd0)), iVar4 == 0)) {
        *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xfffffffe;
      }
      FUN_18085dca0(param_1 + 0x9c);
      FUN_18085dbf0(param_1 + 0x9a);
      FUN_18085dbf0(param_1 + 0x98);
      FUN_18085dbf0(param_1 + 0x96);
      func_0x00018085de10(plVar1);
      func_0x00018085dda0(plVar5);
      func_0x00018085e3f0(param_1 + 0x7f);
      func_0x00018085e3f0(param_1 + 0x6f);
      func_0x00018085deb0(param_1 + 0x54);
      FUN_180744d60(param_1 + 0x4e);
      FUN_180744d60(param_1 + 0x4c);
      plVar1 = param_1 + 0x4a;
      func_0x00018085f3d0(plVar1);
      *(int64_t *)param_1[0x4b] = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = param_1[0x4b];
      param_1[0x4b] = plVar1;
      *plVar1 = (int64_t)plVar1;
      *(int64_t **)param_1[0x4b] = plVar1;
      *(uint64_t *)(*plVar1 + 8) = param_1[0x4b];
      param_1[0x4b] = plVar1;
      *plVar1 = (int64_t)plVar1;
      func_0x00018085df50(param_1 + 0x48);
      FUN_18085e4a0(param_1 + 0x19);
      func_0x0001808b6360(param_1 + 0x17);
      FUN_1808b1a30(param_1 + 1);
      plVar1 = param_1 + 0xe;
      *(int64_t *)param_1[0xf] = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = param_1[0xf];
      param_1[0xf] = plVar1;
      *plVar1 = (int64_t)plVar1;
      *(int64_t **)param_1[0xf] = plVar1;
      *(uint64_t *)(*plVar1 + 8) = param_1[0xf];
      param_1[0xf] = plVar1;
      *plVar1 = (int64_t)plVar1;
      plVar1 = param_1 + 0xc;
      *(int64_t *)param_1[0xd] = *plVar1;
      *(uint64_t *)(*plVar1 + 8) = param_1[0xd];
      param_1[0xd] = plVar1;
      *plVar1 = (int64_t)plVar1;
      *(int64_t **)param_1[0xd] = plVar1;
      *(uint64_t *)(*plVar1 + 8) = param_1[0xd];
      param_1[0xd] = plVar1;
      *plVar1 = (int64_t)plVar1;
      return;
    }
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar9,&rendering_buffer_2624_ptr,0x418,1);
  }
  lVar2 = *plVar9;
  uVar8 = *(uint *)(lVar2 + 0x14);
  uVar3 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar3 = uVar8;
  }
  if ((int)uVar3 < 0) {
    if (0 < *(int *)(lVar2 + 0x10)) goto LAB_18085e1d5;
    if ((0 < (int)uVar8) && (*(int64_t *)(lVar2 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar2 + 8),&processed_var_8432_ptr,
                    0x100,1);
    }
    *(uint64_t *)(lVar2 + 8) = 0;
    *(int32_t *)(lVar2 + 0x14) = 0;
    uVar8 = 0;
  }
  iVar4 = *(int *)(lVar2 + 0x10);
  if (iVar4 < 0) {
    puVar10 = (int32_t *)(*(int64_t *)(lVar2 + 8) + (int64_t)iVar4 * 4);
    lVar7 = (int64_t)-iVar4;
    if (iVar4 < 0) {
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      uVar8 = *(uint *)(lVar2 + 0x14);
    }
  }
  *(int32_t *)(lVar2 + 0x10) = 0;
  if (0 < (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
    FUN_180861ef0(lVar2 + 8,0);
  }
LAB_18085e1d5:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar2,&rendering_buffer_2624_ptr,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085e003(uint64_t *param_1)
void FUN_18085e003(uint64_t *param_1)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t *unaff_RBP;
  int64_t *plVar8;
  int32_t *puVar9;
  
  plVar8 = (int64_t *)0x0;
  *param_1 = &rendering_buffer_2520_ptr;
  param_1[1] = &rendering_buffer_2560_ptr;
  plVar4 = (int64_t *)(*unaff_RBP + -0x70);
  if (*unaff_RBP == 0) {
    plVar4 = plVar8;
  }
  plVar5 = plVar8;
  if (plVar4 != (int64_t *)0x0) {
    plVar5 = plVar4 + 0xe;
  }
  while (plVar5 != unaff_RBP) {
    plVar4 = plVar5 + 0x82;
    if (plVar5 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x480;
    }
    *plVar4 = 0;
    if (plVar5 == unaff_RBP) break;
    plVar4 = (int64_t *)(*plVar5 + -0x70);
    if (*plVar5 == 0) {
      plVar4 = plVar8;
    }
    plVar5 = plVar8;
    if (plVar4 != (int64_t *)0x0) {
      plVar5 = plVar4 + 0xe;
    }
  }
  plVar4 = param_1 + 0x92;
  plVar5 = (int64_t *)*plVar4;
  if ((plVar5 != plVar4) || ((int64_t *)param_1[0x93] != plVar4)) {
    if (plVar5 == plVar4) {
      plVar5 = plVar8;
    }
    if (plVar5 != (int64_t *)0x0) {
      plVar4 = plVar5;
    }
    *(int64_t *)plVar4[1] = *plVar4;
    *(int64_t *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (int64_t)plVar4;
    *plVar4 = (int64_t)plVar4;
    *(int64_t **)plVar4[1] = plVar4;
    *(int64_t *)(*plVar4 + 8) = plVar4[1];
    plVar4[1] = (int64_t)plVar4;
    *plVar4 = (int64_t)plVar4;
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&rendering_buffer_2624_ptr,0x40e,1);
  }
  plVar8 = (int64_t *)param_1[0x9a];
  if ((plVar8 < (int64_t *)param_1[0x9a]) ||
     ((int64_t *)param_1[0x9a] + *(int *)(param_1 + 0x9b) <= plVar8)) {
    plVar8 = (int64_t *)param_1[0x8f];
    if (plVar8 == (int64_t *)0x0) {
      if (((*(byte *)(param_1 + 0x5b) & 1) != 0) &&
         (iVar3 = FUN_1808c7d50(*(uint64_t *)(param_1[0x11] + 0xd0)), iVar3 == 0)) {
        *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xfffffffe;
      }
      FUN_18085dca0(param_1 + 0x9c);
      FUN_18085dbf0(param_1 + 0x9a);
      FUN_18085dbf0(param_1 + 0x98);
      FUN_18085dbf0(param_1 + 0x96);
      func_0x00018085de10();
      func_0x00018085dda0(plVar4);
      func_0x00018085e3f0(param_1 + 0x7f);
      func_0x00018085e3f0(param_1 + 0x6f);
      func_0x00018085deb0(param_1 + 0x54);
      FUN_180744d60(param_1 + 0x4e);
      FUN_180744d60(param_1 + 0x4c);
      plVar4 = param_1 + 0x4a;
      func_0x00018085f3d0(plVar4);
      *(int64_t *)param_1[0x4b] = *plVar4;
      *(uint64_t *)(*plVar4 + 8) = param_1[0x4b];
      param_1[0x4b] = plVar4;
      *plVar4 = (int64_t)plVar4;
      *(int64_t **)param_1[0x4b] = plVar4;
      *(uint64_t *)(*plVar4 + 8) = param_1[0x4b];
      param_1[0x4b] = plVar4;
      *plVar4 = (int64_t)plVar4;
      func_0x00018085df50(param_1 + 0x48);
      FUN_18085e4a0(param_1 + 0x19);
      func_0x0001808b6360(param_1 + 0x17);
      FUN_1808b1a30(param_1 + 1);
      plVar4 = param_1 + 0xe;
      *(int64_t *)param_1[0xf] = *plVar4;
      *(uint64_t *)(*plVar4 + 8) = param_1[0xf];
      param_1[0xf] = plVar4;
      *plVar4 = (int64_t)plVar4;
      *(int64_t **)param_1[0xf] = plVar4;
      *(uint64_t *)(*plVar4 + 8) = param_1[0xf];
      param_1[0xf] = plVar4;
      *plVar4 = (int64_t)plVar4;
      plVar4 = param_1 + 0xc;
      *(int64_t *)param_1[0xd] = *plVar4;
      *(uint64_t *)(*plVar4 + 8) = param_1[0xd];
      param_1[0xd] = plVar4;
      *plVar4 = (int64_t)plVar4;
      *(int64_t **)param_1[0xd] = plVar4;
      *(uint64_t *)(*plVar4 + 8) = param_1[0xd];
      param_1[0xd] = plVar4;
      *plVar4 = (int64_t)plVar4;
      return;
    }
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar8,&rendering_buffer_2624_ptr,0x418,1);
  }
  lVar1 = *plVar8;
  uVar7 = *(uint *)(lVar1 + 0x14);
  uVar2 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar2 = uVar7;
  }
  if ((int)uVar2 < 0) {
    if (0 < *(int *)(lVar1 + 0x10)) goto LAB_18085e1d5;
    if ((0 < (int)uVar7) && (*(int64_t *)(lVar1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar1 + 8),&processed_var_8432_ptr,
                    0x100,1);
    }
    *(uint64_t *)(lVar1 + 8) = 0;
    *(int32_t *)(lVar1 + 0x14) = 0;
    uVar7 = 0;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
    puVar9 = (int32_t *)(*(int64_t *)(lVar1 + 8) + (int64_t)iVar3 * 4);
    lVar6 = (int64_t)-iVar3;
    if (iVar3 < 0) {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      uVar7 = *(uint *)(lVar1 + 0x14);
    }
  }
  *(int32_t *)(lVar1 + 0x10) = 0;
  if (0 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
    FUN_180861ef0(lVar1 + 8,0);
  }
LAB_18085e1d5:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&rendering_buffer_2624_ptr,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085e112(void)
void FUN_18085e112(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t unaff_RDI;
  int32_t *puVar7;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  
  if ((unaff_R14 < *(int64_t **)(unaff_R15 + 0x4d0)) ||
     (*(int64_t **)(unaff_R15 + 0x4d0) + *(int *)(unaff_R15 + 0x4d8) <= unaff_R14)) {
    plVar2 = *(int64_t **)(unaff_R15 + 0x478);
    if (plVar2 == (int64_t *)0x0) {
      if (((*(byte *)(unaff_R15 + 0x2d8) & 1) != 0) &&
         (iVar4 = FUN_1808c7d50(*(uint64_t *)(*(int64_t *)(unaff_R15 + 0x88) + 0xd0)), iVar4 == 0
         )) {
        *(uint *)(unaff_R15 + 0x2d8) = *(uint *)(unaff_R15 + 0x2d8) & 0xfffffffe;
      }
      FUN_18085dca0(unaff_R15 + 0x4e0);
      FUN_18085dbf0(unaff_R15 + 0x4d0);
      FUN_18085dbf0(unaff_R15 + 0x4c0);
      FUN_18085dbf0(unaff_R15 + 0x4b0);
      func_0x00018085de10();
      func_0x00018085dda0();
      func_0x00018085e3f0(unaff_R15 + 0x3f8);
      func_0x00018085e3f0(unaff_R15 + 0x378);
      func_0x00018085deb0(unaff_R15 + 0x2a0);
      FUN_180744d60(unaff_R15 + 0x270);
      FUN_180744d60(unaff_R15 + 0x260);
      plVar2 = (int64_t *)(unaff_R15 + 0x250);
      func_0x00018085f3d0(plVar2);
      **(int64_t **)(unaff_R15 + 600) = *plVar2;
      *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_R15 + 600);
      *(int64_t **)(unaff_R15 + 600) = plVar2;
      *plVar2 = (int64_t)plVar2;
      **(int64_t **)(unaff_R15 + 600) = (int64_t)plVar2;
      *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_R15 + 600);
      *(int64_t **)(unaff_R15 + 600) = plVar2;
      *plVar2 = (int64_t)plVar2;
      func_0x00018085df50(unaff_R15 + 0x240);
      FUN_18085e4a0(unaff_R15 + 200);
      func_0x0001808b6360(unaff_R15 + 0xb8);
      FUN_1808b1a30(unaff_R15 + 8);
      plVar2 = (int64_t *)(unaff_R15 + 0x70);
      **(int64_t **)(unaff_R15 + 0x78) = *plVar2;
      *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_R15 + 0x78);
      *(int64_t **)(unaff_R15 + 0x78) = plVar2;
      *plVar2 = (int64_t)plVar2;
      **(int64_t **)(unaff_R15 + 0x78) = (int64_t)plVar2;
      *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_R15 + 0x78);
      *(int64_t **)(unaff_R15 + 0x78) = plVar2;
      *plVar2 = (int64_t)plVar2;
      plVar2 = (int64_t *)(unaff_R15 + 0x60);
      **(int64_t **)(unaff_R15 + 0x68) = *plVar2;
      *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_R15 + 0x68);
      *(int64_t **)(unaff_R15 + 0x68) = plVar2;
      *plVar2 = (int64_t)plVar2;
      **(int64_t **)(unaff_R15 + 0x68) = (int64_t)plVar2;
      *(uint64_t *)(*plVar2 + 8) = *(uint64_t *)(unaff_R15 + 0x68);
      *(int64_t **)(unaff_R15 + 0x68) = plVar2;
      *plVar2 = (int64_t)plVar2;
      return;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar2,&rendering_buffer_2624_ptr,0x418,1);
  }
  lVar1 = *unaff_R14;
  uVar6 = *(uint *)(lVar1 + 0x14);
  uVar3 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar3 = uVar6;
  }
  if ((int)uVar3 < 0) {
    if (0 < *(int *)(lVar1 + 0x10)) goto LAB_18085e1d5;
    if ((0 < (int)uVar6) && (*(int64_t *)(lVar1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar1 + 8),&processed_var_8432_ptr,
                    0x100,1);
    }
    *(uint64_t *)(lVar1 + 8) = unaff_RDI;
    uVar6 = (uint)unaff_RDI;
    *(uint *)(lVar1 + 0x14) = uVar6;
  }
  iVar4 = *(int *)(lVar1 + 0x10);
  if (iVar4 < 0) {
    puVar7 = (int32_t *)(*(int64_t *)(lVar1 + 8) + (int64_t)iVar4 * 4);
    lVar5 = (int64_t)-iVar4;
    if (iVar4 < 0) {
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      uVar6 = *(uint *)(lVar1 + 0x14);
    }
    unaff_RDI = 0;
  }
  *(int *)(lVar1 + 0x10) = (int)unaff_RDI;
  if (0 < (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
    FUN_180861ef0(lVar1 + 8,0);
  }
LAB_18085e1d5:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&rendering_buffer_2624_ptr,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085e221(void)
void FUN_18085e221(void)

{
  int64_t *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x28))();
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18085e4a0(int64_t param_1)
void FUN_18085e4a0(int64_t param_1)

{
  int *piVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  
  plVar6 = (int64_t *)0x0;
  plVar7 = (int64_t *)(param_1 + 0x118);
  lVar8 = *plVar7;
  plVar4 = (int64_t *)(lVar8 + -0x18);
  if (lVar8 == 0) {
    plVar4 = plVar6;
  }
  plVar3 = plVar6;
  if (plVar4 != (int64_t *)0x0) {
    plVar3 = plVar4 + 3;
  }
  if (plVar3 != plVar7) {
    do {
      if (plVar3 == plVar7) break;
      lVar8 = *plVar3;
      plVar4 = (int64_t *)(lVar8 + -0x18);
      if (lVar8 == 0) {
        plVar4 = plVar6;
      }
      plVar5 = plVar6;
      if (plVar4 != (int64_t *)0x0) {
        plVar5 = plVar4 + 3;
      }
      *(int64_t *)plVar3[1] = lVar8;
      *(int64_t *)(*plVar3 + 8) = plVar3[1];
      plVar3[1] = (int64_t)plVar3;
      *plVar3 = (int64_t)plVar3;
      plVar3 = plVar5;
    } while (plVar5 != plVar7);
    lVar8 = *plVar7;
  }
  **(int64_t **)(param_1 + 0x120) = lVar8;
  *(uint64_t *)(*plVar7 + 8) = *(uint64_t *)(param_1 + 0x120);
  *(int64_t **)(param_1 + 0x120) = plVar7;
  *plVar7 = (int64_t)plVar7;
  **(int64_t **)(param_1 + 0x120) = (int64_t)plVar7;
  *(uint64_t *)(*plVar7 + 8) = *(uint64_t *)(param_1 + 0x120);
  *(int64_t **)(param_1 + 0x120) = plVar7;
  *plVar7 = (int64_t)plVar7;
  iVar2 = SystemStatusChecker(param_1 + 0xe0);
  if ((iVar2 == 0) && (iVar2 = FUN_1808553b0(param_1 + 0xf0), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x100) = 0xffffffff;
    *(int32_t *)(param_1 + 0x104) = 0;
  }
  FUN_1808553b0(param_1 + 0xf0);
  SystemStatusChecker(param_1 + 0xe0);
  iVar2 = SystemStatusChecker(param_1 + 0xb8);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 200), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0xd8) = 0xffffffff;
    *(int32_t *)(param_1 + 0xdc) = 0;
  }
  FUN_1808555a0(param_1 + 200);
  SystemStatusChecker(param_1 + 0xb8);
  iVar2 = SystemStatusChecker(param_1 + 0x90);
  if ((iVar2 == 0) && (iVar2 = FUN_1808554a0(param_1 + 0xa0), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0xb0) = 0xffffffff;
    *(int32_t *)(param_1 + 0xb4) = 0;
  }
  FUN_1808554a0(param_1 + 0xa0);
  SystemStatusChecker(param_1 + 0x90);
  plVar7 = (int64_t *)(param_1 + 0x80);
  plVar4 = (int64_t *)*plVar7;
  if (plVar4 != plVar7) {
    if (plVar4 != plVar7) {
      *(int64_t *)plVar4[1] = *plVar4;
      *(int64_t *)(*plVar4 + 8) = plVar4[1];
      plVar4[1] = (int64_t)plVar4;
      *plVar4 = (int64_t)plVar4;
      *(int64_t **)plVar4[1] = plVar4;
      *(int64_t *)(*plVar4 + 8) = plVar4[1];
      plVar4[1] = (int64_t)plVar4;
      *plVar4 = (int64_t)plVar4;
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar4,&ui_system_data_1696_ptr,0xe1,1);
    }
    plVar4 = (int64_t *)*plVar7;
  }
  plVar6 = (int64_t *)(param_1 + 0x70);
  **(int64_t **)(param_1 + 0x88) = (int64_t)plVar4;
  *(uint64_t *)(*plVar7 + 8) = *(uint64_t *)(param_1 + 0x88);
  *(int64_t **)(param_1 + 0x88) = plVar7;
  *plVar7 = (int64_t)plVar7;
  plVar7 = (int64_t *)*plVar6;
  if (plVar7 != plVar6) {
    if (plVar7 != plVar6) {
      *(int64_t *)plVar7[1] = *plVar7;
      *(int64_t *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (int64_t)plVar7;
      *plVar7 = (int64_t)plVar7;
      lVar8 = plVar7[4];
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x10);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
          SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&rendering_buffer_2208_ptr,0x76,1);
        }
      }
      *(int64_t *)plVar7[1] = *plVar7;
      *(int64_t *)(*plVar7 + 8) = plVar7[1];
      plVar7[1] = (int64_t)plVar7;
      *plVar7 = (int64_t)plVar7;
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar7,&ui_system_data_1696_ptr,0xe1,1);
    }
    plVar7 = (int64_t *)*plVar6;
  }
  **(int64_t **)(param_1 + 0x78) = (int64_t)plVar7;
  *(uint64_t *)(*plVar6 + 8) = *(uint64_t *)(param_1 + 0x78);
  *(int64_t **)(param_1 + 0x78) = plVar6;
  *plVar6 = (int64_t)plVar6;
  lVar8 = *(int64_t *)(param_1 + 0x50);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  lVar8 = *(int64_t *)(param_1 + 0x38);
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar8,&rendering_buffer_2208_ptr,0x76,1);
    }
  }
  return;
}



uint64_t FUN_18085e820(uint64_t param_1,uint64_t param_2)

{
  FUN_18085dff0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x4f0);
  }
  return param_1;
}



uint64_t FUN_18085e860(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  
  for (puVar2 = (uint64_t *)(*param_1 + (int64_t)((int)param_1[1] + -1) * 8);
      ((uint64_t *)*param_1 <= puVar2 && (puVar2 < (uint64_t *)*param_1 + (int)param_1[1]));
      puVar2 = puVar2 + -1) {
    uVar1 = FUN_1808b3bc0(*puVar2,param_2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



uint64_t
FUN_18085e8d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,byte param_4,int64_t param_5
             ,char param_6,byte param_7)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = FUN_18085fea0();
  if (lVar1 != 0) {
    uVar4 = (uint)param_7 * 4 + 4;
    uVar3 = ((uint)param_4 * 2 | *(uint *)(lVar1 + 0x1c)) & ~((param_4 ^ 1) * 2);
    *(uint *)(lVar1 + 0x1c) = uVar3;
    uVar3 = uVar3 & uVar4;
    if ((param_6 != '\0') && (uVar3 != 0)) {
      return 0;
    }
    if ((uVar3 == 0) && ((param_4 != 0 || (param_5 == 0)))) {
      *(int64_t *)(lVar1 + (uint64_t)param_7 * 8 + 0x20) = param_5;
      uVar4 = *(uint *)(lVar1 + 0x1c) | uVar4;
      *(uint *)(lVar1 + 0x1c) = uVar4;
      if (((uVar4 >> 5 & 1) != 0) && ((uVar4 >> 6 & 1) == 0)) {
        return 0;
      }
      uVar2 = FUN_1808c7260(param_3,lVar1,(uint64_t)param_7 ^ 1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      return 0;
    }
  }
  return 0x1c;
}



uint64_t FUN_18085e990(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t alStackX_10 [3];
  
  plVar6 = (int64_t *)0x0;
  plVar7 = (int64_t *)(param_2 + 8);
  if (param_2 == 0) {
    plVar7 = plVar6;
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_18085ea6d:
    uVar4 = 0x1c;
  }
  else {
    plVar3 = (int64_t *)*plVar7;
    if (plVar3 != plVar7) {
      do {
        plVar3 = (int64_t *)*plVar3;
        uVar5 = (int)plVar6 + 1;
        plVar6 = (int64_t *)(uint64_t)uVar5;
      } while (plVar3 != plVar7);
      if (uVar5 != 0) goto LAB_18085ea6d;
    }
    plVar7[1] = *(int64_t *)(param_1 + 600);
    *plVar7 = param_1 + 0x250;
    *(int64_t **)(param_1 + 600) = plVar7;
    *(int64_t **)plVar7[1] = plVar7;
    alStackX_10[0] = param_2;
    uVar4 = FUN_1808d71b0(param_2,0 < *(int *)(param_1 + 0x2e4));
    if ((((int)uVar4 == 0) &&
        ((((lVar1 = *(int64_t *)(param_2 + 0x18), *(float *)(lVar1 + 0x40) == 0.0 &&
           (*(float *)(lVar1 + 0x44) == 0.0)) && (*(float *)(lVar1 + 0x48) == 0.0)) ||
         (uVar4 = FUN_180853260(param_1 + 0x260,alStackX_10), param_2 = alStackX_10[0],
         (int)uVar4 == 0)))) &&
       ((cVar2 = func_0x00018084de30(*(uint64_t *)(param_2 + 0x18)), cVar2 == '\0' ||
        (uVar4 = FUN_180853260(param_1 + 0x270,alStackX_10), (int)uVar4 == 0)))) {
      return 0;
    }
  }
  return uVar4;
}



uint64_t FUN_18085ea80(int64_t param_1,uint param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t *plVar10;
  int64_t lStackX_8;
  
  plVar10 = (int64_t *)0x0;
  uVar9 = 0;
  lStackX_8 = 0;
  uVar2 = FUN_1808b79f0(param_1 + 0x90,param_3,&lStackX_8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  lVar1 = *(int64_t *)(lStackX_8 + 0x38);
  if ((*(int *)(lVar1 + 0x30) != -1) && (uVar2 = FUN_18085e990(param_1,lVar1), (int)uVar2 != 0)) {
    return uVar2;
  }
  if (param_2 == 0xffffffff) {
    plVar6 = (int64_t *)(lStackX_8 + 0x18);
    if (lStackX_8 == 0) {
      plVar6 = plVar10;
    }
    if (plVar6 == (int64_t *)0x0) {
      return 0x1c;
    }
    plVar3 = (int64_t *)*plVar6;
    if (plVar3 != plVar6) {
      do {
        plVar3 = (int64_t *)*plVar3;
        uVar9 = (int)plVar10 + 1;
        plVar10 = (int64_t *)(uint64_t)uVar9;
      } while (plVar3 != plVar6);
      if (uVar9 != 0) {
        return 0x1c;
      }
    }
    plVar6[1] = *(int64_t *)(param_1 + 0x248);
    *plVar6 = param_1 + 0x240;
    *(int64_t **)(param_1 + 0x248) = plVar6;
    *(int64_t **)plVar6[1] = plVar6;
  }
  else {
    plVar6 = (int64_t *)(param_1 + 0x240);
    if ((int)param_2 < 0) {
      return 0x1f;
    }
    plVar3 = (int64_t *)(lStackX_8 + 0x18);
    if (lStackX_8 == 0) {
      plVar3 = plVar10;
    }
    if (plVar3 == (int64_t *)0x0) {
      return 0x1c;
    }
    plVar4 = (int64_t *)*plVar3;
    plVar8 = plVar10;
    if (plVar4 != plVar3) {
      do {
        plVar4 = (int64_t *)*plVar4;
        uVar5 = (int)plVar8 + 1;
        plVar8 = (int64_t *)(uint64_t)uVar5;
      } while (plVar4 != plVar3);
      if (uVar5 != 0) {
        return 0x1c;
      }
    }
    plVar4 = (int64_t *)*plVar6;
    plVar8 = plVar10;
    if (plVar4 != plVar6) {
      plVar7 = plVar4;
      uVar5 = param_2;
      if (0 < (int)param_2) {
        do {
          plVar7 = (int64_t *)*plVar7;
          if (plVar7 == plVar6) goto LAB_18085ebc2;
          uVar5 = uVar5 - 1;
        } while (0 < (int)uVar5);
      }
      if (plVar7 != (int64_t *)0x0) {
        plVar8 = plVar7 + -3;
      }
    }
LAB_18085ebc2:
    plVar7 = plVar8 + 3;
    if (plVar8 == (int64_t *)0x0) {
      plVar7 = plVar10;
    }
    if (plVar7 == (int64_t *)0x0) {
      for (; plVar4 != plVar6; plVar4 = (int64_t *)*plVar4) {
        uVar9 = (int)plVar10 + 1;
        plVar10 = (int64_t *)(uint64_t)uVar9;
      }
      if (param_2 != uVar9) {
        return 0x1f;
      }
      plVar3[1] = *(int64_t *)(param_1 + 0x248);
      *plVar3 = (int64_t)plVar6;
      *(int64_t **)(param_1 + 0x248) = plVar3;
    }
    else {
      plVar3[1] = plVar7[1];
      *plVar3 = (int64_t)plVar7;
      plVar7[1] = (int64_t)plVar3;
    }
    *(int64_t **)plVar3[1] = plVar3;
    if ((*(int64_t *)(param_1 + 0x80) != 0) &&
       (uVar2 = FUN_180867990(*(int64_t *)(param_1 + 0x80),param_2,lVar1), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  uVar2 = func_0x0001808d7290(lStackX_8,param_1);
  if (((int)uVar2 == 0) &&
     ((*(int *)(param_1 + 0x2e4) < 3 ||
      ((uVar2 = FUN_1808d5bd0(lStackX_8), (int)uVar2 == 0 &&
       (uVar2 = FUN_1808d74e0(lStackX_8,0), (int)uVar2 == 0)))))) {
    uVar2 = 0;
  }
  return uVar2;
}



uint64_t FUN_18085eabf(void)

{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t *unaff_RBX;
  int unaff_ESI;
  int64_t unaff_RDI;
  int iVar10;
  int64_t in_stack_00000030;
  
  lVar1 = *(int64_t *)(in_RAX + 0x38);
  if ((*(int *)(lVar1 + 0x30) != -1) &&
     (uVar2 = FUN_18085e990(), in_RAX = in_stack_00000030, (int)uVar2 != 0)) {
    return uVar2;
  }
  if (unaff_ESI == -1) {
    plVar5 = (int64_t *)(in_RAX + 0x18);
    if (in_RAX == 0) {
      plVar5 = unaff_RBX;
    }
    if (plVar5 == (int64_t *)0x0) {
      return 0x1c;
    }
    plVar3 = (int64_t *)*plVar5;
    if (plVar3 != plVar5) {
      do {
        plVar3 = (int64_t *)*plVar3;
        uVar9 = (int)unaff_RBX + 1;
        unaff_RBX = (int64_t *)(uint64_t)uVar9;
      } while (plVar3 != plVar5);
      if (uVar9 != 0) {
        return 0x1c;
      }
    }
    plVar5[1] = *(int64_t *)(unaff_RDI + 0x248);
    *plVar5 = unaff_RDI + 0x240;
    *(int64_t **)(unaff_RDI + 0x248) = plVar5;
    *(int64_t **)plVar5[1] = plVar5;
  }
  else {
    plVar5 = (int64_t *)(unaff_RDI + 0x240);
    if (unaff_ESI < 0) {
      return 0x1f;
    }
    plVar3 = (int64_t *)(in_RAX + 0x18);
    if (in_RAX == 0) {
      plVar3 = unaff_RBX;
    }
    if (plVar3 == (int64_t *)0x0) {
      return 0x1c;
    }
    plVar4 = (int64_t *)*plVar3;
    if (plVar4 != plVar3) {
      uVar6 = (uint64_t)unaff_RBX & 0xffffffff;
      do {
        plVar4 = (int64_t *)*plVar4;
        uVar9 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar9;
      } while (plVar4 != plVar3);
      if (uVar9 != 0) {
        return 0x1c;
      }
    }
    plVar4 = (int64_t *)*plVar5;
    plVar8 = unaff_RBX;
    if (plVar4 != plVar5) {
      plVar7 = plVar4;
      iVar10 = unaff_ESI;
      if (0 < unaff_ESI) {
        do {
          plVar7 = (int64_t *)*plVar7;
          if (plVar7 == plVar5) goto LAB_18085ebc2;
          iVar10 = iVar10 + -1;
        } while (0 < iVar10);
      }
      if (plVar7 != (int64_t *)0x0) {
        plVar8 = plVar7 + -3;
      }
    }
LAB_18085ebc2:
    plVar7 = plVar8 + 3;
    if (plVar8 == (int64_t *)0x0) {
      plVar7 = unaff_RBX;
    }
    if (plVar7 == (int64_t *)0x0) {
      for (; plVar4 != plVar5; plVar4 = (int64_t *)*plVar4) {
        unaff_RBX = (int64_t *)(uint64_t)((int)unaff_RBX + 1);
      }
      if (unaff_ESI != (int)unaff_RBX) {
        return 0x1f;
      }
      plVar3[1] = *(int64_t *)(unaff_RDI + 0x248);
      *plVar3 = (int64_t)plVar5;
      *(int64_t **)(unaff_RDI + 0x248) = plVar3;
    }
    else {
      plVar3[1] = plVar7[1];
      *plVar3 = (int64_t)plVar7;
      plVar7[1] = (int64_t)plVar3;
    }
    *(int64_t **)plVar3[1] = plVar3;
    if ((*(int64_t *)(unaff_RDI + 0x80) != 0) &&
       (uVar2 = FUN_180867990(*(int64_t *)(unaff_RDI + 0x80),unaff_ESI,lVar1), (int)uVar2 != 0)) {
      return uVar2;
    }
  }
  uVar2 = func_0x0001808d7290(in_stack_00000030);
  if (((int)uVar2 == 0) &&
     ((*(int *)(unaff_RDI + 0x2e4) < 3 ||
      ((uVar2 = FUN_1808d5bd0(in_stack_00000030), (int)uVar2 == 0 &&
       (uVar2 = FUN_1808d74e0(in_stack_00000030,0), (int)uVar2 == 0)))))) {
    uVar2 = 0;
  }
  return uVar2;
}





