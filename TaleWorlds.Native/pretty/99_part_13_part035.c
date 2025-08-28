#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part035.c - 2 个函数

// 函数: void FUN_1808bcca0(int64_t *param_1)
void FUN_1808bcca0(int64_t *param_1)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int *piVar9;
  
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    SystemMemoryAllocator(lVar2);
  }
  uVar6 = 0;
  if (*(int *)((int64_t)param_1 + 0x24) == 0) {
    lVar3 = param_1[5];
    if (lVar3 != 0) {
      SystemMemoryAllocator(lVar3);
    }
    iVar4 = SystemStatusChecker(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_1808744f0(param_1 + 2), iVar4 == 0)) {
      *(int32_t *)(param_1 + 4) = 0xffffffff;
      *(int32_t *)((int64_t)param_1 + 0x24) = 0;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar3);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar2);
    }
    return;
  }
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    piVar9 = (int *)*param_1;
    uVar8 = uVar6;
    do {
      if (*piVar9 != -1) {
        iVar5 = ((int *)*param_1)[(int)uVar8];
        goto LAB_1808bcd12;
      }
      uVar8 = (uint64_t)((int)uVar8 + 1);
      uVar6 = uVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar6 != (int64_t)iVar4);
  }
  iVar5 = -1;
LAB_1808bcd12:
  lVar2 = param_1[2];
  lVar3 = *(int64_t *)((int64_t)iVar5 * 0x20 + 0x18 + lVar2);
  puVar1 = (uint *)((int64_t)iVar5 * 0x20 + lVar2);
  if ((*(int *)((int64_t)param_1 + 0x24) != 0) && (iVar4 != 0)) {
    lVar7 = (int64_t)(int)((puVar1[3] ^ puVar1[1] ^ *puVar1 ^ puVar1[2]) & iVar4 - 1U);
    piVar9 = (int *)(*param_1 + lVar7 * 4);
    iVar4 = *(int *)(*param_1 + lVar7 * 4);
    while (iVar4 != -1) {
      lVar7 = (int64_t)iVar4 * 0x20;
      if ((*(int64_t *)(lVar7 + lVar2) == *(int64_t *)puVar1) &&
         (*(int64_t *)(lVar7 + 8 + lVar2) == *(int64_t *)(puVar1 + 2))) {
        iVar4 = *piVar9;
        lVar7 = (int64_t)iVar4 * 0x20;
        *(uint64_t *)(lVar7 + 0x18 + lVar2) = 0;
        *piVar9 = *(int *)(lVar7 + 0x10 + lVar2);
        *(int *)(lVar7 + 0x10 + lVar2) = (int)param_1[4];
        *(int *)((int64_t)param_1 + 0x24) = *(int *)((int64_t)param_1 + 0x24) + -1;
        *(int *)(param_1 + 4) = iVar4;
        break;
      }
      piVar9 = (int *)(lVar2 + 0x10 + lVar7);
      iVar4 = *piVar9;
    }
  }
  iVar4 = SystemStatusChecker(lVar3);
  if ((iVar4 == 0) && (iVar4 = FUN_180744e20(lVar3 + 0x10), iVar4 == 0)) {
    *(int32_t *)(lVar3 + 0x20) = 0xffffffff;
    *(int32_t *)(lVar3 + 0x24) = 0;
  }
  FUN_180744e20(lVar3 + 0x10);
  SystemStatusChecker(lVar3);
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar3,&unknown_var_2080_ptr,0x62,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bceb0(int64_t *param_1)

{
  ushort *puVar1;
  int iVar2;
  int64_t lVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      if ((*(byte *)(lVar3 + 8 + *param_1) & 1) == 0) {
        *(int *)(param_1 + 2) = (int)param_1[2] + -0x200;
        FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(lVar3 + *param_1),
                      &unknown_var_2816_ptr,0x104);
        puVar1 = (ushort *)(lVar3 + 8 + *param_1);
        *puVar1 = *puVar1 | 1;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 < (int)param_1[1]);
  }
  FUN_1807d3160(param_1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bcec4(void)

{
  ushort *puVar1;
  int64_t *unaff_RBX;
  uint unaff_ESI;
  uint64_t uVar2;
  
  uVar2 = (uint64_t)unaff_ESI;
  do {
    if ((*(byte *)(uVar2 + 8 + *unaff_RBX) & 1) == 0) {
      *(int *)(unaff_RBX + 2) = (int)unaff_RBX[2] + -0x200;
      FUN_180741df0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(uint64_t *)(uVar2 + *unaff_RBX),
                    &unknown_var_2816_ptr,0x104);
      puVar1 = (ushort *)(uVar2 + 8 + *unaff_RBX);
      *puVar1 = *puVar1 | 1;
    }
    unaff_ESI = unaff_ESI + 1;
    uVar2 = uVar2 + 0x10;
  } while ((int)unaff_ESI < (int)unaff_RBX[1]);
  FUN_1807d3160();
  return 0;
}



uint64_t FUN_1808bcf1e(void)

{
  FUN_1807d3160();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bcf40(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int32_t *puVar10;
  uint uVar11;
  int64_t *plVar12;
  uint64_t uStack_50;
  int aiStack_48 [2];
  int64_t lStack_40;
  uint64_t uStack_38;
  int aiStack_30 [2];
  
  plVar12 = (int64_t *)0x0;
  if (*(int64_t *)(param_1 + 0x4d8) != 0) {
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(param_1 + 0x4d8),
                  &unknown_var_8432_ptr,0x100,1);
  }
  *(uint64_t *)(param_1 + 0x4e0) = 0;
  *(int32_t *)(param_1 + 0x4e8) = 0;
  while( true ) {
    lVar1 = *(int64_t *)(param_1 + 0x60);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    if (*(int *)(param_1 + 0x5c) < 1) break;
    uStack_50 = 0xffffffffffffffff;
    aiStack_48[0] = -1;
    FUN_1808741f0(param_1 + 0x38,&uStack_50,aiStack_48);
    uStack_38 = 0xffffffffffffffff;
    aiStack_30[0] = -1;
    lStack_40 = *(int64_t *)((int64_t)aiStack_48[0] * 0x20 + 0x18 + *(int64_t *)(param_1 + 0x48))
    ;
    FUN_1807d1650(lStack_40,&uStack_38,aiStack_30);
    if ((*(char *)(param_1 + 0x780) == '\0') &&
       (uVar5 = FUN_1808b81c0(param_1 + 0x3c8,
                              *(uint64_t *)
                               (*(int64_t *)(lStack_40 + 0x10) + 8 + (int64_t)aiStack_30[0] * 0x10
                               )), (int)uVar5 != 0)) {
      return uVar5;
    }
  }
  lVar1 = param_1 + 0x108;
  while( true ) {
    lVar6 = *(int64_t *)(param_1 + 0x130);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    if (*(int *)(param_1 + 300) < 1) break;
    uStack_38 = 0xffffffffffffffff;
    aiStack_30[0] = -1;
    lStack_40 = lVar1;
    FUN_1808741f0(lVar1,&uStack_38,aiStack_30);
    uVar5 = FUN_180851740(param_1 + 0x368,
                          (int64_t)aiStack_30[0] * 0x20 + *(int64_t *)(lStack_40 + 0x10));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (*(int64_t *)(param_1 + 0x790) != 0) {
    uVar5 = FUN_1808e1420();
    if ((int)uVar5 == 0) {
      uVar5 = *(uint64_t *)(param_1 + 0x790);
      FUN_1808e0c60(uVar5);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar5,&unknown_var_2688_ptr,0x40c,1);
    }
    return uVar5;
  }
  if (*(int64_t *)(param_1 + 0x788) == 0) {
    plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x28) + -0x18);
    if (*(int64_t *)(param_1 + 0x28) == 0) {
      plVar7 = plVar12;
    }
    plVar2 = plVar12;
    if (plVar7 != (int64_t *)0x0) {
      plVar2 = plVar7 + 3;
    }
    while (plVar2 != (int64_t *)(param_1 + 0x28)) {
      plVar7 = plVar2 + -3;
      if (plVar2 == (int64_t *)0x0) {
        plVar7 = plVar12;
      }
      if (plVar2 == (int64_t *)(param_1 + 0x28)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (int64_t *)(lVar6 + -0x18);
      if (lVar6 == 0) {
        plVar8 = plVar12;
      }
      plVar9 = plVar12;
      if (plVar8 != (int64_t *)0x0) {
        plVar9 = plVar8 + 3;
      }
      *(int64_t *)plVar2[1] = lVar6;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      iVar3 = FUN_1808d7110(plVar7,param_1);
      plVar2 = plVar9;
      if (iVar3 == 0) {
        FUN_1808bec80(param_1 + 0x408,plVar7);
      }
    }
    plVar7 = (int64_t *)(*(int64_t *)(param_1 + 0x18) + -8);
    if (*(int64_t *)(param_1 + 0x18) == 0) {
      plVar7 = plVar12;
    }
    plVar2 = plVar12;
    if (plVar7 != (int64_t *)0x0) {
      plVar2 = plVar7 + 1;
    }
    while (plVar2 != (int64_t *)(param_1 + 0x18)) {
      plVar7 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar7 = plVar12;
      }
      if (plVar2 == (int64_t *)(param_1 + 0x18)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (int64_t *)(lVar6 + -8);
      if (lVar6 == 0) {
        plVar8 = plVar12;
      }
      plVar9 = plVar12;
      if (plVar8 != (int64_t *)0x0) {
        plVar9 = plVar8 + 1;
      }
      *(int64_t *)plVar2[1] = lVar6;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      FUN_1808be9f0(param_1 + 0x430,plVar7);
      plVar2 = plVar9;
    }
    lVar6 = *(int64_t *)(param_1 + 0x60);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    FUN_18084f2d0(param_1 + 0x68);
    FUN_18084f2d0(param_1 + 0x38);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    lVar6 = *(int64_t *)(param_1 + 200);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    FUN_1808bcca0(param_1 + 0xd0);
    FUN_1808bcca0(param_1 + 0xa0);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    lVar6 = *(int64_t *)(param_1 + 0x130);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    FUN_18084f040(param_1 + 0x138);
    FUN_18084f040(lVar1);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    lVar1 = *(int64_t *)(param_1 + 0x200);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    FUN_18084f560(param_1 + 0x208);
    FUN_18084f560(param_1 + 0x1d8);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    lVar1 = *(int64_t *)(param_1 + 0x198);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    FUN_18084f040(param_1 + 0x1a0);
    FUN_18084f040(param_1 + 0x170);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    FUN_1808bceb0(param_1 + 0x3e0);
    FUN_1808bceb0(param_1 + 0x408);
    FUN_1808bceb0(param_1 + 0x430);
    FUN_1808bceb0(param_1 + 0x458);
    FUN_1808bceb0(param_1 + 0x480);
    uStack_50 = 0xffffffffffffffff;
    aiStack_48[0] = -1;
    FUN_1808741f0(param_1 + 0x240,&uStack_50,aiStack_48);
    if (aiStack_48[0] == -1) {
      iVar3 = SystemStatusChecker(param_1 + 0x240);
      if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(param_1 + 0x250), iVar3 == 0)) {
        *(int32_t *)(param_1 + 0x260) = 0xffffffff;
        *(int32_t *)(param_1 + 0x264) = 0;
      }
      *(uint64_t *)(param_1 + 0x7a0) = 0;
      return 0;
    }
    lVar1 = *(int64_t *)((int64_t)aiStack_48[0] * 0x20 + 0x18 + *(int64_t *)(param_1 + 0x250));
    uVar11 = *(uint *)(lVar1 + 0x14);
    plVar12 = (int64_t *)(lVar1 + 8);
    uVar4 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar4 = uVar11;
    }
    if ((int)uVar4 < 0) {
      if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd5a0;
      if ((0 < (int)uVar11) && (*plVar12 != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar12,&unknown_var_8432_ptr,0x100,1);
      }
      *plVar12 = 0;
      uVar11 = 0;
      *(int32_t *)(lVar1 + 0x14) = 0;
    }
    iVar3 = *(int *)(lVar1 + 0x10);
    if (iVar3 < 0) {
      puVar10 = (int32_t *)(*plVar12 + (int64_t)iVar3 * 4);
      lVar6 = (int64_t)-iVar3;
      if (iVar3 < 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        uVar11 = *(uint *)(lVar1 + 0x14);
      }
    }
    *(int32_t *)(lVar1 + 0x10) = 0;
    if (0 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
      FUN_180861ef0(plVar12,0);
    }
LAB_1808bd5a0:
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2688_ptr,0x434,1);
  }
  uVar5 = FUN_1808e06a0();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar1 = *(int64_t *)(param_1 + 0x788);
  uVar11 = *(uint *)(lVar1 + 0x14);
  if ((int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f)) < 0) {
    if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd1ec;
    if ((0 < (int)uVar11) && (*(int64_t *)(lVar1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar1 + 8),&unknown_var_8432_ptr,
                    0x100,1);
    }
    *(uint64_t *)(lVar1 + 8) = 0;
    *(int32_t *)(lVar1 + 0x14) = 0;
    uVar11 = 0;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 8) + (int64_t)iVar3 * 8,0,(int64_t)-iVar3 << 3);
  }
  *(int32_t *)(lVar1 + 0x10) = 0;
  if (0 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
    FUN_180747f10(lVar1 + 8,0);
  }
LAB_1808bd1ec:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2688_ptr,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bd05e(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *plVar8;
  int64_t *plVar9;
  int32_t *puVar10;
  uint uVar11;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  
  lVar1 = unaff_RSI + 0x108;
  while( true ) {
    lVar6 = *(int64_t *)(unaff_RSI + 0x130);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    if (*(int *)(unaff_RSI + 300) < 1) break;
    *(int64_t *)(unaff_RBP + -0x18) = lVar1;
    *(uint64_t *)(unaff_RBP + -0x10) = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + -8) = 0xffffffff;
    FUN_1808741f0(lVar1,unaff_RBP + -0x10,unaff_RBP + -8);
    uVar4 = FUN_180851740(unaff_RSI + 0x368,
                          (int64_t)*(int *)(unaff_RBP + -8) * 0x20 +
                          *(int64_t *)(*(int64_t *)(unaff_RBP + -0x18) + 0x10));
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (*(int64_t *)(unaff_RSI + 0x790) != 0) {
    uVar4 = FUN_1808e1420();
    if ((int)uVar4 == 0) {
      uVar4 = *(uint64_t *)(unaff_RSI + 0x790);
      FUN_1808e0c60(uVar4);
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar4,&unknown_var_2688_ptr,0x40c,1);
    }
    return uVar4;
  }
  uVar11 = (uint)unaff_R12;
  if (*(int64_t *)(unaff_RSI + 0x788) == 0) {
    plVar7 = (int64_t *)(*(int64_t *)(unaff_RSI + 0x28) + -0x18);
    if (*(int64_t *)(unaff_RSI + 0x28) == 0) {
      plVar7 = unaff_R12;
    }
    plVar2 = unaff_R12;
    if (plVar7 != (int64_t *)0x0) {
      plVar2 = plVar7 + 3;
    }
    while (plVar2 != (int64_t *)(unaff_RSI + 0x28)) {
      plVar7 = plVar2 + -3;
      if (plVar2 == (int64_t *)0x0) {
        plVar7 = unaff_R12;
      }
      if (plVar2 == (int64_t *)(unaff_RSI + 0x28)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (int64_t *)(lVar6 + -0x18);
      if (lVar6 == 0) {
        plVar8 = unaff_R12;
      }
      plVar9 = unaff_R12;
      if (plVar8 != (int64_t *)0x0) {
        plVar9 = plVar8 + 3;
      }
      *(int64_t *)plVar2[1] = lVar6;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      iVar3 = FUN_1808d7110(plVar7);
      plVar2 = plVar9;
      if (iVar3 == 0) {
        FUN_1808bec80(unaff_RSI + 0x408,plVar7);
      }
    }
    plVar7 = (int64_t *)(*(int64_t *)(unaff_RSI + 0x18) + -8);
    if (*(int64_t *)(unaff_RSI + 0x18) == 0) {
      plVar7 = unaff_R12;
    }
    plVar2 = unaff_R12;
    if (plVar7 != (int64_t *)0x0) {
      plVar2 = plVar7 + 1;
    }
    while (plVar2 != (int64_t *)(unaff_RSI + 0x18)) {
      plVar7 = plVar2 + -1;
      if (plVar2 == (int64_t *)0x0) {
        plVar7 = unaff_R12;
      }
      if (plVar2 == (int64_t *)(unaff_RSI + 0x18)) {
        return 0x1c;
      }
      lVar6 = *plVar2;
      plVar8 = (int64_t *)(lVar6 + -8);
      if (lVar6 == 0) {
        plVar8 = unaff_R12;
      }
      plVar9 = unaff_R12;
      if (plVar8 != (int64_t *)0x0) {
        plVar9 = plVar8 + 1;
      }
      *(int64_t *)plVar2[1] = lVar6;
      *(int64_t *)(*plVar2 + 8) = plVar2[1];
      plVar2[1] = (int64_t)plVar2;
      *plVar2 = (int64_t)plVar2;
      FUN_1808be9f0(unaff_RSI + 0x430,plVar7);
      plVar2 = plVar9;
    }
    lVar6 = *(int64_t *)(unaff_R13 + 0x28);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    FUN_18084f2d0(unaff_R13 + 0x30);
    FUN_18084f2d0();
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    lVar6 = *(int64_t *)(unaff_RSI + 200);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    FUN_1808bcca0(unaff_RSI + 0xd0);
    FUN_1808bcca0(unaff_RSI + 0xa0);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    lVar6 = *(int64_t *)(unaff_RSI + 0x130);
    if (lVar6 != 0) {
      SystemMemoryAllocator(lVar6);
    }
    FUN_18084f040(unaff_RSI + 0x138);
    FUN_18084f040(lVar1);
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar6);
    }
    lVar1 = *(int64_t *)(unaff_RSI + 0x200);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    FUN_18084f560(unaff_RSI + 0x208);
    FUN_18084f560(unaff_RSI + 0x1d8);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    lVar1 = *(int64_t *)(unaff_RSI + 0x198);
    if (lVar1 != 0) {
      SystemMemoryAllocator(lVar1);
    }
    FUN_18084f040(unaff_RSI + 0x1a0);
    FUN_18084f040(unaff_RSI + 0x170);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      SystemMemoryManager(lVar1);
    }
    FUN_1808bceb0(unaff_RSI + 0x3e0);
    FUN_1808bceb0(unaff_RSI + 0x408);
    FUN_1808bceb0(unaff_RSI + 0x430);
    FUN_1808bceb0(unaff_RSI + 0x458);
    FUN_1808bceb0(unaff_RSI + 0x480);
    lVar1 = unaff_RSI + 0x240;
    *(uint64_t *)(unaff_RBP + -0x28) = 0xffffffffffffffff;
    *(int64_t *)(unaff_RBP + -0x30) = lVar1;
    *(int32_t *)(unaff_RBP + -0x20) = 0xffffffff;
    FUN_1808741f0(lVar1,unaff_RBP + -0x28,unaff_RBP + -0x20);
    if (*(int *)(unaff_RBP + -0x20) == -1) {
      iVar3 = SystemStatusChecker(lVar1);
      if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(unaff_RSI + 0x250), iVar3 == 0)) {
        *(int32_t *)(unaff_RSI + 0x260) = 0xffffffff;
        *(uint *)(unaff_RSI + 0x264) = uVar11;
      }
      *(int64_t **)(unaff_RSI + 0x7a0) = unaff_R12;
      return 0;
    }
    lVar1 = *(int64_t *)
             ((int64_t)*(int *)(unaff_RBP + -0x20) * 0x20 + 0x18 +
             *(int64_t *)(*(int64_t *)(unaff_RBP + -0x30) + 0x10));
    uVar11 = *(uint *)(lVar1 + 0x14);
    plVar7 = (int64_t *)(lVar1 + 8);
    *(int64_t *)(unaff_RBP + 0x30) = lVar1;
    uVar5 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar5 = uVar11;
    }
    lVar6 = lVar1;
    if ((int)uVar5 < 0) {
      if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd5a0;
      if ((0 < (int)uVar11) && (*plVar7 != 0)) {
                    // WARNING: Subroutine does not return
        SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar7,&unknown_var_8432_ptr,0x100,1);
      }
      *plVar7 = 0;
      uVar11 = 0;
      *(int32_t *)(lVar1 + 0x14) = 0;
    }
    iVar3 = *(int *)(lVar1 + 0x10);
    if (iVar3 < 0) {
      puVar10 = (int32_t *)(*plVar7 + (int64_t)iVar3 * 4);
      lVar6 = (int64_t)-iVar3;
      if (iVar3 < 0) {
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        uVar11 = *(uint *)(lVar1 + 0x14);
      }
      lVar6 = *(int64_t *)(unaff_RBP + 0x30);
    }
    *(int32_t *)(lVar1 + 0x10) = 0;
    if (0 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
      FUN_180861ef0(plVar7,0);
    }
LAB_1808bd5a0:
                    // WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar6,&unknown_var_2688_ptr,0x434,1);
  }
  uVar4 = FUN_1808e06a0();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar1 = *(int64_t *)(unaff_RSI + 0x788);
  uVar5 = *(uint *)(lVar1 + 0x14);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if ((int)uVar11 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd1ec;
    if ((0 < (int)uVar5) && (*(int64_t *)(lVar1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(lVar1 + 8),&unknown_var_8432_ptr,
                    0x100,1);
    }
    *(int64_t **)(lVar1 + 8) = unaff_R12;
    *(uint *)(lVar1 + 0x14) = uVar11;
    uVar5 = uVar11;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 8) + (int64_t)iVar3 * 8,0,(int64_t)-iVar3 << 3);
  }
  *(uint *)(lVar1 + 0x10) = uVar11;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    FUN_180747f10(lVar1 + 8,0);
  }
LAB_1808bd1ec:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar1,&unknown_var_2688_ptr,0x413,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1808bd222(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  uint uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *plVar7;
  int64_t *plVar8;
  int32_t *puVar9;
  uint uVar10;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R15;
  bool in_ZF;
  
  plVar6 = (int64_t *)(in_RAX + -0x18);
  if (in_ZF) {
    plVar6 = unaff_R12;
  }
  plVar2 = unaff_R12;
  if (plVar6 != (int64_t *)0x0) {
    plVar2 = plVar6 + 3;
  }
  while (plVar2 != (int64_t *)(unaff_RSI + 0x28)) {
    plVar6 = plVar2 + -3;
    if (plVar2 == (int64_t *)0x0) {
      plVar6 = unaff_R12;
    }
    if (plVar2 == (int64_t *)(unaff_RSI + 0x28)) {
      return 0x1c;
    }
    lVar1 = *plVar2;
    plVar7 = (int64_t *)(lVar1 + -0x18);
    if (lVar1 == 0) {
      plVar7 = unaff_R12;
    }
    plVar8 = unaff_R12;
    if (plVar7 != (int64_t *)0x0) {
      plVar8 = plVar7 + 3;
    }
    *(int64_t *)plVar2[1] = lVar1;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    iVar3 = FUN_1808d7110(plVar6);
    plVar2 = plVar8;
    if (iVar3 == 0) {
      FUN_1808bec80(unaff_RSI + 0x408,plVar6);
    }
  }
  plVar6 = (int64_t *)(*(int64_t *)(unaff_RSI + 0x18) + -8);
  if (*(int64_t *)(unaff_RSI + 0x18) == 0) {
    plVar6 = unaff_R12;
  }
  plVar2 = unaff_R12;
  if (plVar6 != (int64_t *)0x0) {
    plVar2 = plVar6 + 1;
  }
  while (plVar2 != (int64_t *)(unaff_RSI + 0x18)) {
    plVar6 = plVar2 + -1;
    if (plVar2 == (int64_t *)0x0) {
      plVar6 = unaff_R12;
    }
    if (plVar2 == (int64_t *)(unaff_RSI + 0x18)) {
      return 0x1c;
    }
    lVar1 = *plVar2;
    plVar7 = (int64_t *)(lVar1 + -8);
    if (lVar1 == 0) {
      plVar7 = unaff_R12;
    }
    plVar8 = unaff_R12;
    if (plVar7 != (int64_t *)0x0) {
      plVar8 = plVar7 + 1;
    }
    *(int64_t *)plVar2[1] = lVar1;
    *(int64_t *)(*plVar2 + 8) = plVar2[1];
    plVar2[1] = (int64_t)plVar2;
    *plVar2 = (int64_t)plVar2;
    FUN_1808be9f0(unaff_RSI + 0x430,plVar6);
    plVar2 = plVar8;
  }
  lVar1 = *(int64_t *)(unaff_R13 + 0x28);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  FUN_18084f2d0(unaff_R13 + 0x30);
  FUN_18084f2d0();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  lVar1 = *(int64_t *)(unaff_RSI + 200);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  FUN_1808bcca0(unaff_RSI + 0xd0);
  FUN_1808bcca0(unaff_RSI + 0xa0);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  lVar1 = *(int64_t *)(unaff_R15 + 0x28);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  FUN_18084f040(unaff_R15 + 0x30);
  FUN_18084f040();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  lVar1 = *(int64_t *)(unaff_RSI + 0x200);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  FUN_18084f560(unaff_RSI + 0x208);
  FUN_18084f560(unaff_RSI + 0x1d8);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  lVar1 = *(int64_t *)(unaff_RSI + 0x198);
  if (lVar1 != 0) {
    SystemMemoryAllocator(lVar1);
  }
  FUN_18084f040(unaff_RSI + 0x1a0);
  FUN_18084f040(unaff_RSI + 0x170);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    SystemMemoryManager(lVar1);
  }
  FUN_1808bceb0(unaff_RSI + 0x3e0);
  FUN_1808bceb0(unaff_RSI + 0x408);
  FUN_1808bceb0(unaff_RSI + 0x430);
  FUN_1808bceb0(unaff_RSI + 0x458);
  FUN_1808bceb0(unaff_RSI + 0x480);
  lVar1 = unaff_RSI + 0x240;
  *(uint64_t *)(unaff_RBP + -0x28) = 0xffffffffffffffff;
  *(int64_t *)(unaff_RBP + -0x30) = lVar1;
  *(int32_t *)(unaff_RBP + -0x20) = 0xffffffff;
  FUN_1808741f0(lVar1,unaff_RBP + -0x28,unaff_RBP + -0x20);
  if (*(int *)(unaff_RBP + -0x20) == -1) {
    iVar3 = SystemStatusChecker(lVar1);
    if ((iVar3 == 0) && (iVar3 = FUN_1808744f0(unaff_RSI + 0x250), iVar3 == 0)) {
      *(int32_t *)(unaff_RSI + 0x260) = 0xffffffff;
      *(int *)(unaff_RSI + 0x264) = (int)unaff_R12;
    }
    *(int64_t **)(unaff_RSI + 0x7a0) = unaff_R12;
    return 0;
  }
  lVar1 = *(int64_t *)
           ((int64_t)*(int *)(unaff_RBP + -0x20) * 0x20 + 0x18 +
           *(int64_t *)(*(int64_t *)(unaff_RBP + -0x30) + 0x10));
  uVar10 = *(uint *)(lVar1 + 0x14);
  plVar6 = (int64_t *)(lVar1 + 8);
  *(int64_t *)(unaff_RBP + 0x30) = lVar1;
  uVar4 = -uVar10;
  if (-1 < (int)uVar10) {
    uVar4 = uVar10;
  }
  lVar5 = lVar1;
  if ((int)uVar4 < 0) {
    if (0 < *(int *)(lVar1 + 0x10)) goto LAB_1808bd5a0;
    if ((0 < (int)uVar10) && (*plVar6 != 0)) {
                    // WARNING: Subroutine does not return
      SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar6,&unknown_var_8432_ptr,0x100,1);
    }
    *plVar6 = 0;
    uVar10 = 0;
    *(int32_t *)(lVar1 + 0x14) = 0;
  }
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < 0) {
    puVar9 = (int32_t *)(*plVar6 + (int64_t)iVar3 * 4);
    lVar5 = (int64_t)-iVar3;
    if (iVar3 < 0) {
      for (; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      uVar10 = *(uint *)(lVar1 + 0x14);
    }
    lVar5 = *(int64_t *)(unaff_RBP + 0x30);
  }
  *(int32_t *)(lVar1 + 0x10) = 0;
  if (0 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
    FUN_180861ef0(plVar6,0);
  }
LAB_1808bd5a0:
                    // WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),lVar5,&unknown_var_2688_ptr,0x434,1);
}






// 函数: void FUN_1808bd66c(void)
void FUN_1808bd66c(void)

{
  return;
}






