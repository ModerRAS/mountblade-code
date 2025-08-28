#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 05_networking_part030.c - 1 个函数

// 函数: void FUN_1808596d0(int64_t param_1,int64_t param_2)
void FUN_1808596d0(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int32_t uVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  uint uStack_c0;
  uint uStack_b8;
  uint uStack_b0;
  uint uStack_a8;
  uint uStack_a0;
  uint uStack_98;
  uint uStack_90;
  uint uStack_88;
  uint uStack_80;
  uint uStack_78;
  int64_t lStack_70;
  int8_t auStack_68 [40];
  uint64_t uStack_40;
  
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  lVar6 = **(int64_t **)(param_1 + 0x38);
  plVar8 = (int64_t *)(lVar6 + 0x60);
  plVar7 = (int64_t *)*plVar8;
  uVar1 = *(uint *)(lVar6 + 0xa0);
  uStack_78 = uVar1;
  lStack_70 = param_1;
  if (plVar7 != plVar8) {
    do {
      if ((*(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10) == plVar7[2]) &&
         (*(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x18) == plVar7[3])) {
        lVar6 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x268))
                          (*(int64_t **)(param_1 + 0x170),plVar7 + 4,
                           CONCAT71((int7)((uint64_t)plVar8 >> 8),1));
        if (lVar6 == 0) {
          uStack_80 = (uint)*(byte *)((int64_t)plVar7 + 0x2f);
          uStack_88 = (uint)*(byte *)((int64_t)plVar7 + 0x2e);
          uStack_90 = (uint)*(byte *)((int64_t)plVar7 + 0x2d);
          uStack_98 = (uint)*(byte *)((int64_t)plVar7 + 0x2c);
          uStack_a0 = (uint)*(byte *)((int64_t)plVar7 + 0x2b);
          uStack_a8 = (uint)*(byte *)((int64_t)plVar7 + 0x2a);
          uStack_b0 = (uint)*(byte *)((int64_t)plVar7 + 0x29);
          uStack_b8 = (uint)*(byte *)(plVar7 + 5);
          uStack_c0 = (uint)*(ushort *)((int64_t)plVar7 + 0x26);
          uStack_c8 = (uint)*(ushort *)((int64_t)plVar7 + 0x24);
                    // WARNING: Subroutine does not return
          SystemDataValidator(auStack_68,0x27,&processed_var_8960_ptr,(int)plVar7[4]);
        }
        puVar4 = *(uint **)(lVar6 + 0x30);
        uVar2 = *(uint *)(param_1 + 0x24);
        if (uVar2 < *puVar4) {
          fVar11 = (float)uVar2 / (float)*puVar4;
          if (*(int *)(*(int64_t *)(param_2 + 0x28) + 0x40) == 4) {
            if (1.1920929e-07 <= ABS((float)puVar4[1])) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = 1.0;
            }
          }
          uVar9 = 1;
        }
        else {
          uVar3 = puVar4[(int64_t)*(int *)(lVar6 + 0x38) * 6 + -6];
          if (uVar2 <= uVar3) {
            uVar9 = 1;
            goto LAB_180859953;
          }
          fVar11 = 0.0;
          if (((uVar3 < uVar1) &&
              (fVar12 = (float)(int)(uVar1 - uVar2) / (float)(int)(uVar1 - uVar3), 0.0 <= fVar12))
             && (fVar11 = fVar12, 1.0 <= fVar12)) {
            fVar11 = 1.0;
          }
          uVar9 = 2;
        }
        iVar5 = func_0x0001808c6c40(param_2,fVar11,uVar9);
        if (iVar5 != 0) goto LAB_1808597c2;
        goto LAB_18085996b;
      }
    } while ((plVar7 != plVar8) && (plVar7 = (int64_t *)*plVar7, plVar7 != plVar8));
  }
  plVar8 = (int64_t *)(lVar6 + 0x70);
  if (*(int64_t **)(lVar6 + 0x70) != plVar8) {
    plVar7 = *(int64_t **)(lVar6 + 0x70);
    do {
      if ((*(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x10) == plVar7[2]) &&
         (*(int64_t *)(*(int64_t *)(param_2 + 0x28) + 0x18) == plVar7[3])) {
        lVar6 = (**(code **)(**(int64_t **)(param_1 + 0x170) + 0x268))
                          (*(int64_t **)(param_1 + 0x170),plVar7 + 4,
                           CONCAT71((int7)((uint64_t)plVar8 >> 8),1));
        if (lVar6 == 0) {
          uStack_80 = (uint)*(byte *)((int64_t)plVar7 + 0x2f);
          uStack_88 = (uint)*(byte *)((int64_t)plVar7 + 0x2e);
          uStack_90 = (uint)*(byte *)((int64_t)plVar7 + 0x2d);
          uStack_98 = (uint)*(byte *)((int64_t)plVar7 + 0x2c);
          uStack_a0 = (uint)*(byte *)((int64_t)plVar7 + 0x2b);
          uStack_a8 = (uint)*(byte *)((int64_t)plVar7 + 0x2a);
          uStack_b0 = (uint)*(byte *)((int64_t)plVar7 + 0x29);
          uStack_b8 = (uint)*(byte *)(plVar7 + 5);
          uStack_c0 = (uint)*(ushort *)((int64_t)plVar7 + 0x26);
          uStack_c8 = (uint)*(ushort *)((int64_t)plVar7 + 0x24);
                    // WARNING: Subroutine does not return
          SystemDataValidator(auStack_68,0x27,&processed_var_8960_ptr,(int)plVar7[4]);
        }
        uVar9 = 4;
LAB_180859953:
        iVar5 = func_0x0001808c6c40(param_2,0x3f800000,uVar9);
        if (iVar5 == 0) {
LAB_18085996b:
          uVar10 = FUN_1808c6120(lVar6,*(int32_t *)(param_1 + 0x24));
          func_0x0001808c6c50(param_2,uVar10);
        }
        goto LAB_1808597c2;
      }
    } while ((plVar7 != plVar8) && (plVar7 = (int64_t *)*plVar7, plVar7 != plVar8));
  }
  if (*(int *)(param_2 + 0x6c) != 4) {
    func_0x0001808c6c40(param_2,plVar7,3);
  }
LAB_1808597c2:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_e8);
}



uint64_t FUN_180859a50(int64_t param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  
  if (*(int *)(param_1 + 0x34) - 4U < 2) {
    if (*(int64_t **)(param_1 + 0x38) == (int64_t *)0x0) {
      return 0x1c;
    }
    if (**(int64_t **)(param_1 + 0x38) != 0) {
      plVar6 = (int64_t *)0x0;
      plVar4 = (int64_t *)(param_1 + 0x118);
      plVar5 = (int64_t *)(*plVar4 + -0x18);
      if (*plVar4 == 0) {
        plVar5 = plVar6;
      }
      plVar2 = plVar6;
      if (plVar5 != (int64_t *)0x0) {
        plVar2 = plVar5 + 3;
      }
      while (plVar2 != plVar4) {
        plVar5 = plVar2 + -3;
        if (plVar2 == (int64_t *)0x0) {
          plVar5 = plVar6;
        }
        uVar3 = FUN_1808596d0(param_1,plVar5);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        if (plVar2 == plVar4) {
          return 0;
        }
        plVar5 = (int64_t *)(*plVar2 + -0x18);
        if (*plVar2 == 0) {
          plVar5 = plVar6;
        }
        plVar2 = plVar6;
        if (plVar5 != (int64_t *)0x0) {
          plVar2 = plVar5 + 3;
        }
      }
    }
  }
  else {
    uVar1 = *(int32_t *)(param_1 + 0x20);
    plVar6 = (int64_t *)(param_1 + 0x118);
    plVar5 = (int64_t *)0x0;
    plVar4 = (int64_t *)(*plVar6 + -0x18);
    if (*plVar6 == 0) {
      plVar4 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar4 != (int64_t *)0x0) {
      plVar2 = plVar4 + 3;
    }
    while (plVar2 != plVar6) {
      plVar4 = plVar2 + -3;
      if (plVar2 == (int64_t *)0x0) {
        plVar4 = plVar5;
      }
      uVar3 = FUN_1808c6cd0(plVar4,uVar1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (plVar2 == plVar6) {
        return 0;
      }
      plVar4 = (int64_t *)(*plVar2 + -0x18);
      if (*plVar2 == 0) {
        plVar4 = plVar5;
      }
      plVar2 = plVar5;
      if (plVar4 != (int64_t *)0x0) {
        plVar2 = plVar4 + 3;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



