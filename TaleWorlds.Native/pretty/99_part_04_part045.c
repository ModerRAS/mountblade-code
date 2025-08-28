#include "TaleWorlds.Native.Split.h"

// 99_part_04_part045.c - 5 个函数

// 函数: void FUN_1802b13d0(int64_t param_1)
void FUN_1802b13d0(int64_t param_1)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  
  lVar3 = *(int64_t *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_1802b0770();
      lVar3 = *(int64_t *)(param_1 + 0x20);
    }
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(uint64_t *)(lVar3 + 0xf0) = 0;
    }
    *(uint64_t *)(param_1 + 0x20) = 0;
    plVar2 = *(int64_t **)(param_1 + 0x38);
    plVar4 = *(int64_t **)(param_1 + 0x30);
    if (plVar4 != plVar2) {
      do {
        lVar3 = *plVar4;
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 8);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(uint64_t *)(lVar3 + 0xf0) = 0;
          }
        }
        if (plVar4[0xd] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        if (plVar4[9] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        FUN_1802c00d0();
        if (plVar4[1] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar4 = plVar4 + 0x11;
      } while (plVar4 != plVar2);
      plVar4 = *(int64_t **)(param_1 + 0x30);
    }
    *(int64_t **)(param_1 + 0x38) = plVar4;
  }
  return;
}






// 函数: void FUN_1802b14b0(int16_t *param_1)
void FUN_1802b14b0(int16_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  
  lVar6 = 0;
  *(uint64_t *)(param_1 + 2) = 0;
  *param_1 = 1;
  *(int32_t *)(param_1 + 8) = 0;
  uVar4 = *(int *)(param_1 + 0x30) << 0xd ^ *(uint *)(param_1 + 0x30);
  uVar4 = uVar4 >> 0x11 ^ uVar4;
  uVar4 = uVar4 << 5 ^ uVar4;
  *(uint *)(param_1 + 0x30) = uVar4;
  fVar8 = (float)(uVar4 - 1) * 2.3283064e-10;
  *(float *)(param_1 + 10) =
       ((fVar8 + fVar8) - 1.0) * *(float *)(*(int64_t *)(param_1 + 0xc) + 0x74) +
       *(float *)(*(int64_t *)(param_1 + 0xc) + 0x78);
  iVar3 = (int)((*(int64_t *)(param_1 + 0x1c) - *(int64_t *)(param_1 + 0x18)) / 0x88);
  lVar7 = (int64_t)iVar3;
  if (0 < iVar3) {
    do {
      lVar1 = *(int64_t *)(param_1 + 0x18);
      lVar2 = *(int64_t *)(lVar6 + 0x30 + lVar1);
      lVar5 = *(int64_t *)(lVar6 + 0x28 + lVar1);
      if (lVar5 != lVar2) {
        do {
          FUN_1802b13d0(lVar5);
          if (*(int64_t *)(lVar5 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          if (*(int64_t **)(lVar5 + 0x58) != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(lVar5 + 0x58) + 0x38))();
          }
          FUN_1802bfac0();
          if (*(int64_t **)(lVar5 + 0x18) != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(lVar5 + 0x18) + 0x38))();
          }
          lVar5 = lVar5 + 0x90;
        } while (lVar5 != lVar2);
        lVar5 = *(int64_t *)(lVar6 + 0x28 + lVar1);
      }
      *(int64_t *)(lVar6 + 0x30 + lVar1) = lVar5;
      *(uint64_t *)(lVar6 + 0x70 + lVar1) = *(uint64_t *)(lVar6 + 0x68 + lVar1);
      *(uint64_t *)(lVar6 + 0x50 + lVar1) = *(uint64_t *)(lVar6 + 0x48 + lVar1);
      lVar6 = lVar6 + 0x88;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}






// 函数: void FUN_1802b1620(int64_t param_1,uint64_t *param_2)
void FUN_1802b1620(int64_t param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  
  FUN_1800b8500(*(int64_t *)(param_1 + 0x20) + 0x150);
  FUN_1802bed10(*(int64_t *)(param_1 + 0x20) + 0x150,
                *(uint64_t *)(*(int64_t *)(param_1 + 0x20) + 0x158),*param_2,param_2[1]);
  iVar3 = (int)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30)) / 0x88);
  lVar5 = (int64_t)iVar3;
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(param_1 + 0x30));
      plVar2 = *(int64_t **)(lVar1 + 0x158);
      plVar4 = *(int64_t **)(lVar1 + 0x150);
      if (plVar4 != plVar2) {
        do {
          if ((int64_t *)*plVar4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
        plVar4 = *(int64_t **)(lVar1 + 0x150);
      }
      *(int64_t **)(lVar1 + 0x158) = plVar4;
      lVar1 = *(int64_t *)(lVar6 + *(int64_t *)(param_1 + 0x30));
      FUN_1802bed10(lVar1 + 0x150,*(uint64_t *)(lVar1 + 0x158),*param_2,param_2[1]);
      lVar6 = lVar6 + 0x88;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}






// 函数: void FUN_1802b1689(void)
void FUN_1802b1689(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t unaff_RBP;
  int64_t unaff_R12;
  int64_t lVar4;
  uint64_t *unaff_R15;
  
  lVar4 = 0;
  do {
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x30));
    plVar2 = *(int64_t **)(lVar1 + 0x158);
    plVar3 = *(int64_t **)(lVar1 + 0x150);
    if (plVar3 != plVar2) {
      do {
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar2);
      plVar3 = *(int64_t **)(lVar1 + 0x150);
    }
    *(int64_t **)(lVar1 + 0x158) = plVar3;
    lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(unaff_RBP + 0x30));
    FUN_1802bed10(lVar1 + 0x150,*(uint64_t *)(lVar1 + 0x158),*unaff_R15,unaff_R15[1]);
    lVar4 = lVar4 + 0x88;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  return;
}






// 函数: void FUN_1802b1725(void)
void FUN_1802b1725(void)

{
  return;
}



bool FUN_1802b1730(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  ushort uStack_68;
  char cStack_66;
  int32_t uStack_64;
  int8_t uStack_60;
  uint64_t uStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  uVar6 = 0xfffffffffffffffe;
  iVar4 = 0;
  if (*(int *)(param_1 + 0xc) != 1) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0xffffffff;
    cStack_66 = '\0';
    uStack_64 = 0xffffffff;
    uStack_60 = 1;
    uStack_58 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 3;
    uStack_30 = 0;
    uStack_68 = (ushort)(*(int *)(param_1 + 0xc) == -1);
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x48) + 0x18);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    uVar5 = 0;
    iVar3 = iVar4;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
      plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x48) + 0x18);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      iVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,&uStack_78,param_3,param_4,2);
      uVar5 = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
    }
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x48) + 0x10);
    if (lVar2 != 0) {
      if (cStack_66 == '\0') {
        iVar4 = FUN_18022d470(lVar2,&uStack_78,param_3,param_4,uVar5,uVar6);
      }
      iVar3 = iVar3 + iVar4;
    }
    *(uint *)(param_1 + 0xc) = (uint)(iVar3 == 0);
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return *(int *)(param_1 + 0xc) == 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




