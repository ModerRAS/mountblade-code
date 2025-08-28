#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part329.c - 8 个函数

// 函数: void FUN_18084c653(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_18084c653(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int32_t unaff_EBP;
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    FUN_18084d3f0();
  }
  return;
}





// 函数: void FUN_18084c658(uint64_t param_1,uint64_t param_2,uint param_3)
void FUN_18084c658(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int32_t unaff_EBP;
  longlong unaff_RDI;
  
  *(int32_t *)(unaff_RDI + 8) = unaff_EBP;
  if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
    FUN_18084d3f0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c680(longlong *param_1)
void FUN_18084c680(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != param_1) {
    if (plVar1 != param_1) {
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
      *(longlong **)plVar1[1] = plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      plVar1[1] = (longlong)plVar1;
      *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar1,&unknown_var_1696_ptr,0xe1,1);
    }
    plVar1 = (longlong *)*param_1;
  }
  *(longlong **)param_1[1] = plVar1;
  *(longlong *)(*param_1 + 8) = param_1[1];
  param_1[1] = (longlong)param_1;
  *param_1 = (longlong)param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c730(uint64_t *param_1)
void FUN_18084c730(uint64_t *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar15 = param_1 + 0xd;
  *param_1 = &unknown_var_1552_ptr;
  param_1[4] = &unknown_var_1560_ptr;
  plVar11 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar15;
  if ((plVar2 != plVar15) || ((longlong *)param_1[0xe] != plVar15)) {
    if (plVar2 != plVar15) {
      plVar11 = plVar2;
    }
    FUN_18084c680(plVar11 + 0x18);
    FUN_18084c680(plVar11 + 0x16);
    FUN_18084c5a0(plVar11 + 0x12);
    FUN_18084c5a0(plVar11 + 0x10);
    FUN_18084c680(plVar11 + 0xe);
    FUN_18084c680(plVar11 + 0xc);
    FUN_1808b0fb0(plVar11 + 8,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar11,&unknown_var_1568_ptr,0xe,1);
  }
  plVar2 = param_1 + 0xb;
  plVar3 = (longlong *)*plVar2;
  if ((plVar3 != plVar2) || ((longlong *)param_1[0xc] != plVar2)) {
    if (plVar3 != plVar2) {
      plVar11 = plVar3;
    }
    FUN_1808b0fb0(plVar11 + 3,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar11,&unknown_var_1568_ptr,0x12,1);
  }
  plVar3 = param_1 + 0x11;
  uVar10 = *(uint *)((longlong)param_1 + 0x94);
  plVar9 = (longlong *)(ulonglong)uVar10;
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x12) < 1) {
      if ((0 < (int)uVar10) && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar3,&unknown_var_8432_ptr,0x100,1);
      }
      *plVar3 = 0;
      *(int32_t *)((longlong)param_1 + 0x94) = 0;
      plVar9 = plVar11;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    uVar10 = (uint)plVar9;
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 < 0) {
      lVar13 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar8 = (int32_t *)((longlong)iVar1 * 0x20 + 0x10 + *plVar3);
        do {
          puVar7 = (int32_t *)FUN_180847820();
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          puVar8[-4] = *puVar7;
          puVar8[-3] = uVar4;
          puVar8[-2] = uVar5;
          puVar8[-1] = uVar6;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar7 = (int32_t *)FUN_18084da10();
          puVar8[2] = *puVar7;
          puVar8[3] = 0;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar13 != 0);
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
      }
    }
    *(int32_t *)(param_1 + 0x12) = 0;
    if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
      FUN_18084d620(plVar3,0);
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x84);
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar10) && (param_1[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0xf],&unknown_var_8432_ptr,0x100,1);
    }
    param_1[0xf] = 0;
    *(int32_t *)((longlong)param_1 + 0x84) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    lVar13 = (longlong)(int)-uVar10;
    if ((int)uVar10 < 0) {
      lVar12 = param_1[0xf] + 0x1c + (longlong)(int)uVar10 * 0x28;
      do {
        puVar8 = (int32_t *)FUN_180847820();
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *(int32_t *)(lVar12 + -0x1c) = *puVar8;
        *(int32_t *)(lVar12 + -0x18) = uVar4;
        *(int32_t *)(lVar12 + -0x14) = uVar5;
        *(int32_t *)(lVar12 + -0x10) = uVar6;
        *(uint64_t *)(lVar12 + -0xc) = 0;
        *(uint64_t *)(lVar12 + -4) = 0;
        *(uint64_t *)(lVar12 + 4) = 0;
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 != 0);
    }
  }
  else if (0 < (int)uVar10) {
    lVar13 = param_1[0xf] + 0x10;
    do {
      FUN_180840270(lVar13);
      lVar13 = lVar13 + 0x28;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = (int)*(uint *)((longlong)param_1 + 0x84) >> 0x1f;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0x84) ^ uVar10) - uVar10)) {
    FUN_18084d520(param_1 + 0xf,0);
  }
LAB_18084ca76:
  plVar11 = (longlong *)*plVar15;
  if (plVar11 != plVar15) {
    do {
      if (plVar11 == plVar15) break;
      plVar3 = (longlong *)*plVar11;
      *(longlong **)plVar11[1] = plVar3;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      plVar11[1] = (longlong)plVar11;
      *plVar11 = (longlong)plVar11;
      plVar11 = plVar3;
    } while (plVar3 != plVar15);
    plVar11 = (longlong *)*plVar15;
  }
  *(longlong **)param_1[0xe] = plVar11;
  *(uint64_t *)(*plVar15 + 8) = param_1[0xe];
  param_1[0xe] = plVar15;
  *plVar15 = (longlong)plVar15;
  plVar15 = (longlong *)*plVar2;
  if (plVar15 != plVar2) {
    do {
      if (plVar15 == plVar2) break;
      plVar11 = (longlong *)*plVar15;
      *(longlong **)plVar15[1] = plVar11;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      plVar15 = plVar11;
    } while (plVar11 != plVar2);
    plVar15 = (longlong *)*plVar2;
  }
  *(longlong **)param_1[0xc] = plVar15;
  *(uint64_t *)(*plVar2 + 8) = param_1[0xc];
  param_1[0xc] = plVar2;
  *plVar2 = (longlong)plVar2;
  FUN_18084c5a0(param_1 + 9);
  FUN_18084c5a0(param_1 + 7);
  FUN_18084c220(param_1 + 5);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &unknown_var_1544_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c738(uint64_t *param_1)
void FUN_18084c738(uint64_t *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar15 = param_1 + 0xd;
  *param_1 = &unknown_var_1552_ptr;
  param_1[4] = &unknown_var_1560_ptr;
  plVar11 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar15;
  if ((plVar2 != plVar15) || ((longlong *)param_1[0xe] != plVar15)) {
    if (plVar2 != plVar15) {
      plVar11 = plVar2;
    }
    FUN_18084c680(plVar11 + 0x18);
    FUN_18084c680(plVar11 + 0x16);
    FUN_18084c5a0(plVar11 + 0x12);
    FUN_18084c5a0(plVar11 + 0x10);
    FUN_18084c680(plVar11 + 0xe);
    FUN_18084c680(plVar11 + 0xc);
    FUN_1808b0fb0(plVar11 + 8,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar11,&unknown_var_1568_ptr,0xe,1);
  }
  plVar2 = param_1 + 0xb;
  plVar3 = (longlong *)*plVar2;
  if ((plVar3 != plVar2) || ((longlong *)param_1[0xc] != plVar2)) {
    if (plVar3 != plVar2) {
      plVar11 = plVar3;
    }
    FUN_1808b0fb0(plVar11 + 3,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar11,&unknown_var_1568_ptr,0x12,1);
  }
  plVar3 = param_1 + 0x11;
  uVar10 = *(uint *)((longlong)param_1 + 0x94);
  plVar9 = (longlong *)(ulonglong)uVar10;
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x12) < 1) {
      if ((0 < (int)uVar10) && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar3,&unknown_var_8432_ptr,0x100,1);
      }
      *plVar3 = 0;
      *(int32_t *)((longlong)param_1 + 0x94) = 0;
      plVar9 = plVar11;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    uVar10 = (uint)plVar9;
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 < 0) {
      lVar13 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar8 = (int32_t *)((longlong)iVar1 * 0x20 + 0x10 + *plVar3);
        do {
          puVar7 = (int32_t *)FUN_180847820();
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          puVar8[-4] = *puVar7;
          puVar8[-3] = uVar4;
          puVar8[-2] = uVar5;
          puVar8[-1] = uVar6;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar7 = (int32_t *)FUN_18084da10();
          puVar8[2] = *puVar7;
          puVar8[3] = 0;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar13 != 0);
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
      }
    }
    *(int32_t *)(param_1 + 0x12) = 0;
    if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
      FUN_18084d620(plVar3,0);
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x84);
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar10) && (param_1[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0xf],&unknown_var_8432_ptr,0x100,1);
    }
    param_1[0xf] = 0;
    *(int32_t *)((longlong)param_1 + 0x84) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    lVar13 = (longlong)(int)-uVar10;
    if ((int)uVar10 < 0) {
      lVar12 = param_1[0xf] + 0x1c + (longlong)(int)uVar10 * 0x28;
      do {
        puVar8 = (int32_t *)FUN_180847820();
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *(int32_t *)(lVar12 + -0x1c) = *puVar8;
        *(int32_t *)(lVar12 + -0x18) = uVar4;
        *(int32_t *)(lVar12 + -0x14) = uVar5;
        *(int32_t *)(lVar12 + -0x10) = uVar6;
        *(uint64_t *)(lVar12 + -0xc) = 0;
        *(uint64_t *)(lVar12 + -4) = 0;
        *(uint64_t *)(lVar12 + 4) = 0;
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 != 0);
    }
  }
  else if (0 < (int)uVar10) {
    lVar13 = param_1[0xf] + 0x10;
    do {
      FUN_180840270(lVar13);
      lVar13 = lVar13 + 0x28;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = (int)*(uint *)((longlong)param_1 + 0x84) >> 0x1f;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0x84) ^ uVar10) - uVar10)) {
    FUN_18084d520(param_1 + 0xf,0);
  }
LAB_18084ca76:
  plVar11 = (longlong *)*plVar15;
  if (plVar11 != plVar15) {
    do {
      if (plVar11 == plVar15) break;
      plVar3 = (longlong *)*plVar11;
      *(longlong **)plVar11[1] = plVar3;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      plVar11[1] = (longlong)plVar11;
      *plVar11 = (longlong)plVar11;
      plVar11 = plVar3;
    } while (plVar3 != plVar15);
    plVar11 = (longlong *)*plVar15;
  }
  *(longlong **)param_1[0xe] = plVar11;
  *(uint64_t *)(*plVar15 + 8) = param_1[0xe];
  param_1[0xe] = plVar15;
  *plVar15 = (longlong)plVar15;
  plVar15 = (longlong *)*plVar2;
  if (plVar15 != plVar2) {
    do {
      if (plVar15 == plVar2) break;
      plVar11 = (longlong *)*plVar15;
      *(longlong **)plVar15[1] = plVar11;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      plVar15 = plVar11;
    } while (plVar11 != plVar2);
    plVar15 = (longlong *)*plVar2;
  }
  *(longlong **)param_1[0xc] = plVar15;
  *(uint64_t *)(*plVar2 + 8) = param_1[0xc];
  param_1[0xc] = plVar2;
  *plVar2 = (longlong)plVar2;
  FUN_18084c5a0(param_1 + 9);
  FUN_18084c5a0(param_1 + 7);
  FUN_18084c220(param_1 + 5);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &unknown_var_1544_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c744(uint64_t *param_1)
void FUN_18084c744(uint64_t *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t in_RAX;
  int32_t *puVar7;
  int32_t *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  
  plVar15 = param_1 + 0xd;
  *param_1 = in_RAX;
  param_1[4] = &unknown_var_1560_ptr;
  plVar11 = (longlong *)0x0;
  plVar2 = (longlong *)*plVar15;
  if ((plVar2 != plVar15) || ((longlong *)param_1[0xe] != plVar15)) {
    if (plVar2 != plVar15) {
      plVar11 = plVar2;
    }
    FUN_18084c680(plVar11 + 0x18);
    FUN_18084c680(plVar11 + 0x16);
    FUN_18084c5a0(plVar11 + 0x12);
    FUN_18084c5a0(plVar11 + 0x10);
    FUN_18084c680(plVar11 + 0xe);
    FUN_18084c680(plVar11 + 0xc);
    FUN_1808b0fb0(plVar11 + 8,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar11,&unknown_var_1568_ptr,0xe,1);
  }
  plVar2 = param_1 + 0xb;
  plVar3 = (longlong *)*plVar2;
  if ((plVar3 != plVar2) || ((longlong *)param_1[0xc] != plVar2)) {
    if (plVar3 != plVar2) {
      plVar11 = plVar3;
    }
    FUN_1808b0fb0(plVar11 + 3,0);
    *(longlong *)plVar11[1] = *plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    *(longlong **)plVar11[1] = plVar11;
    *(longlong *)(*plVar11 + 8) = plVar11[1];
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),plVar11,&unknown_var_1568_ptr,0x12,1);
  }
  plVar3 = param_1 + 0x11;
  uVar10 = *(uint *)((longlong)param_1 + 0x94);
  plVar9 = (longlong *)(ulonglong)uVar10;
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x12) < 1) {
      if ((0 < (int)uVar10) && (*plVar3 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar3,&unknown_var_8432_ptr,0x100,1);
      }
      *plVar3 = 0;
      *(int32_t *)((longlong)param_1 + 0x94) = 0;
      plVar9 = plVar11;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    uVar10 = (uint)plVar9;
    iVar1 = *(int *)(param_1 + 0x12);
    if (iVar1 < 0) {
      lVar13 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar8 = (int32_t *)((longlong)iVar1 * 0x20 + 0x10 + *plVar3);
        do {
          puVar7 = (int32_t *)FUN_180847820();
          uVar4 = puVar7[1];
          uVar5 = puVar7[2];
          uVar6 = puVar7[3];
          puVar8[-4] = *puVar7;
          puVar8[-3] = uVar4;
          puVar8[-2] = uVar5;
          puVar8[-1] = uVar6;
          *puVar8 = 4;
          puVar8[1] = 4;
          puVar7 = (int32_t *)FUN_18084da10();
          puVar8[2] = *puVar7;
          puVar8[3] = 0;
          lVar13 = lVar13 + -1;
          puVar8 = puVar8 + 8;
        } while (lVar13 != 0);
        uVar10 = *(uint *)((longlong)param_1 + 0x94);
      }
    }
    *(int32_t *)(param_1 + 0x12) = 0;
    if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
      FUN_18084d620(plVar3,0);
    }
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x84);
  if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar10) && (param_1[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_1[0xf],&unknown_var_8432_ptr,0x100,1);
    }
    param_1[0xf] = 0;
    *(int32_t *)((longlong)param_1 + 0x84) = 0;
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar14 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    lVar13 = (longlong)(int)-uVar10;
    if ((int)uVar10 < 0) {
      lVar12 = param_1[0xf] + 0x1c + (longlong)(int)uVar10 * 0x28;
      do {
        puVar8 = (int32_t *)FUN_180847820();
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *(int32_t *)(lVar12 + -0x1c) = *puVar8;
        *(int32_t *)(lVar12 + -0x18) = uVar4;
        *(int32_t *)(lVar12 + -0x14) = uVar5;
        *(int32_t *)(lVar12 + -0x10) = uVar6;
        *(uint64_t *)(lVar12 + -0xc) = 0;
        *(uint64_t *)(lVar12 + -4) = 0;
        *(uint64_t *)(lVar12 + 4) = 0;
        lVar13 = lVar13 + -1;
        lVar12 = lVar12 + 0x28;
      } while (lVar13 != 0);
    }
  }
  else if (0 < (int)uVar10) {
    lVar13 = param_1[0xf] + 0x10;
    do {
      FUN_180840270(lVar13);
      lVar13 = lVar13 + 0x28;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar10 = (int)*(uint *)((longlong)param_1 + 0x84) >> 0x1f;
  *(int32_t *)(param_1 + 0x10) = 0;
  if (0 < (int)((*(uint *)((longlong)param_1 + 0x84) ^ uVar10) - uVar10)) {
    FUN_18084d520(param_1 + 0xf,0);
  }
LAB_18084ca76:
  plVar11 = (longlong *)*plVar15;
  if (plVar11 != plVar15) {
    do {
      if (plVar11 == plVar15) break;
      plVar3 = (longlong *)*plVar11;
      *(longlong **)plVar11[1] = plVar3;
      *(longlong *)(*plVar11 + 8) = plVar11[1];
      plVar11[1] = (longlong)plVar11;
      *plVar11 = (longlong)plVar11;
      plVar11 = plVar3;
    } while (plVar3 != plVar15);
    plVar11 = (longlong *)*plVar15;
  }
  *(longlong **)param_1[0xe] = plVar11;
  *(uint64_t *)(*plVar15 + 8) = param_1[0xe];
  param_1[0xe] = plVar15;
  *plVar15 = (longlong)plVar15;
  plVar15 = (longlong *)*plVar2;
  if (plVar15 != plVar2) {
    do {
      if (plVar15 == plVar2) break;
      plVar11 = (longlong *)*plVar15;
      *(longlong **)plVar15[1] = plVar11;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      plVar15 = plVar11;
    } while (plVar11 != plVar2);
    plVar15 = (longlong *)*plVar2;
  }
  *(longlong **)param_1[0xc] = plVar15;
  *(uint64_t *)(*plVar2 + 8) = param_1[0xc];
  param_1[0xc] = plVar2;
  *plVar2 = (longlong)plVar2;
  FUN_18084c5a0(param_1 + 9);
  FUN_18084c5a0(param_1 + 7);
  FUN_18084c220(param_1 + 5);
  *(int32_t *)(param_1 + 1) = 0xdeadf00d;
  *param_1 = &unknown_var_1544_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18084c8cc(int32_t param_1)
void FUN_18084c8cc(int32_t param_1)

{
  int iVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  uint uVar13;
  longlong unaff_R12;
  longlong *unaff_R14;
  uint64_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  
  uVar8 = *(uint *)((longlong)unaff_R14 + 0xc);
  uVar13 = (uint)unaff_R12;
  if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 0) {
    if ((int)unaff_R14[1] <= (int)uVar13) {
      if ((0 < (int)uVar8) && (*unaff_R14 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*unaff_R14,&unknown_var_8432_ptr,0x100,1);
      }
      *unaff_R14 = unaff_R12;
      *(uint *)((longlong)unaff_R14 + 0xc) = uVar13;
      uVar8 = uVar13;
      goto LAB_18084c923;
    }
  }
  else {
LAB_18084c923:
    iVar1 = (int)unaff_R14[1];
    if (iVar1 < 0) {
      lVar10 = (longlong)-iVar1;
      if (iVar1 < 0) {
        puVar7 = (int32_t *)((longlong)iVar1 * 0x20 + 0x10 + *unaff_R14);
        do {
          puVar6 = (int32_t *)FUN_180847820();
          uVar3 = puVar6[1];
          uVar4 = puVar6[2];
          uVar5 = puVar6[3];
          puVar7[-4] = *puVar6;
          puVar7[-3] = uVar3;
          puVar7[-2] = uVar4;
          puVar7[-1] = uVar5;
          *puVar7 = 4;
          puVar7[1] = 4;
          puVar6 = (int32_t *)FUN_18084da10();
          puVar7[2] = *puVar6;
          puVar7[3] = uVar13;
          lVar10 = lVar10 + -1;
          puVar7 = puVar7 + 8;
        } while (lVar10 != 0);
        uVar8 = *(uint *)((longlong)unaff_R14 + 0xc);
        param_1 = extraout_XMM0_Da;
      }
    }
    *(uint *)(unaff_R14 + 1) = uVar13;
    if (0 < (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f))) {
      FUN_18084d620(param_1,0);
    }
  }
  uVar8 = *(uint *)((longlong)unaff_R15 + 0x84);
  if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) < 0) {
    if ((int)uVar13 < *(int *)(unaff_R15 + 0x10)) goto LAB_18084ca76;
    if ((0 < (int)uVar8) && (unaff_R15[0xf] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),unaff_R15[0xf],&unknown_var_8432_ptr,0x100,1);
    }
    unaff_R15[0xf] = unaff_R12;
    *(uint *)((longlong)unaff_R15 + 0x84) = uVar13;
  }
  uVar8 = *(uint *)(unaff_R15 + 0x10);
  uVar11 = (ulonglong)uVar8;
  if ((int)uVar8 < 0) {
    lVar10 = (longlong)(int)-uVar8;
    if ((int)uVar8 < 0) {
      lVar9 = unaff_R15[0xf] + 0x1c + (longlong)(int)uVar8 * 0x28;
      do {
        puVar7 = (int32_t *)FUN_180847820();
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        *(int32_t *)(lVar9 + -0x1c) = *puVar7;
        *(int32_t *)(lVar9 + -0x18) = uVar3;
        *(int32_t *)(lVar9 + -0x14) = uVar4;
        *(int32_t *)(lVar9 + -0x10) = uVar5;
        *(longlong *)(lVar9 + -0xc) = unaff_R12;
        *(longlong *)(lVar9 + -4) = unaff_R12;
        *(longlong *)(lVar9 + 4) = unaff_R12;
        lVar10 = lVar10 + -1;
        lVar9 = lVar9 + 0x28;
      } while (lVar10 != 0);
    }
  }
  else if (0 < (int)uVar8) {
    lVar10 = unaff_R15[0xf] + 0x10;
    do {
      FUN_180840270(lVar10);
      lVar10 = lVar10 + 0x28;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar8 = (int)*(uint *)((longlong)unaff_R15 + 0x84) >> 0x1f;
  *(uint *)(unaff_R15 + 0x10) = uVar13;
  if (0 < (int)((*(uint *)((longlong)unaff_R15 + 0x84) ^ uVar8) - uVar8)) {
    FUN_18084d520(unaff_R15 + 0xf,0);
  }
LAB_18084ca76:
  plVar12 = (longlong *)*unaff_RSI;
  if (plVar12 != unaff_RSI) {
    do {
      if (plVar12 == unaff_RSI) break;
      plVar2 = (longlong *)*plVar12;
      *(longlong **)plVar12[1] = plVar2;
      *(longlong *)(*plVar12 + 8) = plVar12[1];
      plVar12[1] = (longlong)plVar12;
      *plVar12 = (longlong)plVar12;
      plVar12 = plVar2;
    } while (plVar2 != unaff_RSI);
    plVar12 = (longlong *)*unaff_RSI;
  }
  *(longlong **)unaff_RSI[1] = plVar12;
  *(longlong *)(*unaff_RSI + 8) = unaff_RSI[1];
  unaff_RSI[1] = (longlong)unaff_RSI;
  *unaff_RSI = (longlong)unaff_RSI;
  plVar12 = (longlong *)*unaff_RDI;
  if (plVar12 != unaff_RDI) {
    do {
      if (plVar12 == unaff_RDI) break;
      plVar2 = (longlong *)*plVar12;
      *(longlong **)plVar12[1] = plVar2;
      *(longlong *)(*plVar12 + 8) = plVar12[1];
      plVar12[1] = (longlong)plVar12;
      *plVar12 = (longlong)plVar12;
      plVar12 = plVar2;
    } while (plVar2 != unaff_RDI);
    plVar12 = (longlong *)*unaff_RDI;
  }
  *(longlong **)unaff_RDI[1] = plVar12;
  *(longlong *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (longlong)unaff_RDI;
  *unaff_RDI = (longlong)unaff_RDI;
  FUN_18084c5a0(unaff_R15 + 9);
  FUN_18084c5a0(unaff_R15 + 7);
  FUN_18084c220(unaff_R15 + 5);
  *(int32_t *)(unaff_R15 + 1) = 0xdeadf00d;
  *unaff_R15 = &unknown_var_1544_ptr;
  return;
}





// 函数: void FUN_18084ca92(uint64_t param_1,uint64_t param_2,longlong *param_3)
void FUN_18084ca92(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar2;
  uint64_t *unaff_R15;
  
  do {
    if (param_3 == unaff_RSI) break;
    plVar2 = (longlong *)*param_3;
    *(longlong **)param_3[1] = plVar2;
    *(longlong *)(*param_3 + 8) = param_3[1];
    param_3[1] = (longlong)param_3;
    *param_3 = (longlong)param_3;
    param_3 = plVar2;
  } while (plVar2 != unaff_RSI);
  *(longlong *)unaff_RSI[1] = *unaff_RSI;
  *(longlong *)(*unaff_RSI + 8) = unaff_RSI[1];
  unaff_RSI[1] = (longlong)unaff_RSI;
  *unaff_RSI = (longlong)unaff_RSI;
  plVar2 = (longlong *)*unaff_RDI;
  if (plVar2 != unaff_RDI) {
    do {
      if (plVar2 == unaff_RDI) break;
      plVar1 = (longlong *)*plVar2;
      *(longlong **)plVar2[1] = plVar1;
      *(longlong *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (longlong)plVar2;
      *plVar2 = (longlong)plVar2;
      plVar2 = plVar1;
    } while (plVar1 != unaff_RDI);
    plVar2 = (longlong *)*unaff_RDI;
  }
  *(longlong **)unaff_RDI[1] = plVar2;
  *(longlong *)(*unaff_RDI + 8) = unaff_RDI[1];
  unaff_RDI[1] = (longlong)unaff_RDI;
  *unaff_RDI = (longlong)unaff_RDI;
  FUN_18084c5a0(unaff_R15 + 9);
  FUN_18084c5a0(unaff_R15 + 7);
  FUN_18084c220(unaff_R15 + 5);
  *(int32_t *)(unaff_R15 + 1) = 0xdeadf00d;
  *unaff_R15 = &unknown_var_1544_ptr;
  return;
}





