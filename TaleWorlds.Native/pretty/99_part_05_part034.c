#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part034.c - 13 个函数

// 函数: void FUN_1802ed3b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802ed3b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int32_t uVar8;
  uint64_t uVar9;
  int32_t auStackX_8 [2];
  int64_t *plStackX_10;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  uVar3 = *(uint *)(param_1 + 0x2c4) >> 2;
  uVar8 = 0x31;
  if ((uVar3 & 1) != 0) {
    uVar8 = 1;
  }
  if (((uVar3 & 1) == 0) && ((*(byte *)(param_1 + 0x148) & 0x18) != 0)) {
    uVar8 = 0x21;
  }
  iVar6 = 0;
  lVar4 = *(int64_t *)(param_1 + 0xf0);
  if (*(int64_t *)(param_1 + 0xf8) - lVar4 >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar1 = *(int64_t **)(lVar7 + lVar4);
      plStackX_10 = plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
        auStackX_8[0] = uVar8;
        (**(code **)(*plVar1 + 0x128))(plVar1,auStackX_8);
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar4 = *(int64_t *)(param_1 + 0xf0);
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar4 >> 3));
  }
  lVar4 = *(int64_t *)(param_1 + 0x260);
  if (lVar4 != 0) {
    iVar6 = 0;
    if (*(int64_t *)(lVar4 + 0x1b0) - *(int64_t *)(lVar4 + 0x1a8) >> 3 != 0) {
      lVar7 = 0;
      do {
        plVar1 = *(int64_t **)(lVar7 + *(int64_t *)(lVar4 + 0x1a8));
        plStackX_10 = plVar1;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        plVar2 = *(int64_t **)(lVar7 + *(int64_t *)(*(int64_t *)(param_1 + 0x260) + 0x1a8));
        auStackX_8[0] = uVar8;
        (**(code **)(*plVar2 + 0x128))(plVar2,auStackX_8,param_3,param_4,uVar10);
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1);
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
        lVar4 = *(int64_t *)(param_1 + 0x260);
      } while ((uint64_t)(int64_t)iVar6 <
               (uint64_t)(*(int64_t *)(lVar4 + 0x1b0) - *(int64_t *)(lVar4 + 0x1a8) >> 3));
    }
    if ('\0' < (char)*(byte *)(lVar4 + 0x20)) {
      lVar7 = 0;
      uVar9 = (uint64_t)*(byte *)(lVar4 + 0x20);
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x260) + 0x18);
        lVar5 = 0;
        iVar6 = (int)(*(int64_t *)(lVar4 + 0xb8 + lVar7) - *(int64_t *)(lVar4 + 0xb0 + lVar7) >> 3
                     );
        if (0 < iVar6) {
          do {
            plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0xb0 + lVar7) + lVar5 * 8);
            auStackX_8[0] = uVar8;
            (**(code **)(*plVar1 + 0x128))(plVar1,auStackX_8);
            lVar5 = lVar5 + 1;
          } while (lVar5 < iVar6);
        }
        lVar7 = lVar7 + 0x100;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}






// 函数: void FUN_1802ed5d0(int64_t param_1,uint param_2)
void FUN_1802ed5d0(int64_t param_1,uint param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = *(int64_t *)(param_1 + 0x1c0);
  iVar1 = 0;
  if (*(int64_t *)(param_1 + 0x1c8) - lVar3 >> 3 != 0) {
    lVar2 = 0;
    do {
      lVar3 = *(int64_t *)(lVar2 + lVar3);
      if ((((param_2 & 0xfffffffe & *(uint *)(lVar3 + 0x2c8)) == (param_2 & 0xfffffffe)) ||
          ((*(uint *)(lVar3 + 0x2c8) & 1) != 0)) &&
         ((*(byte *)(param_1 + 0x2e7) & *(byte *)(lVar3 + 0x2e7)) != 0)) {
        FUN_1802ed5d0(lVar3,param_2);
      }
      else {
        FUN_1802eb9a0(param_1,lVar3,0,0,0,0x1b);
        iVar1 = iVar1 + -1;
        lVar2 = lVar2 + -8;
      }
      lVar3 = *(int64_t *)(param_1 + 0x1c0);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((uint64_t)(int64_t)iVar1 < (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - lVar3 >> 3));
  }
  return;
}






// 函数: void FUN_1802ed607(uint64_t param_1,uint param_2,uint64_t param_3,int64_t param_4)
void FUN_1802ed607(uint64_t param_1,uint param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  uint unaff_ESI;
  uint64_t uVar2;
  int32_t unaff_R14D;
  
  uVar2 = (uint64_t)unaff_ESI;
  do {
    lVar1 = *(int64_t *)(uVar2 + param_4);
    if ((((param_2 & 0xfffffffe & *(uint *)(lVar1 + 0x2c8)) == (param_2 & 0xfffffffe)) ||
        ((*(uint *)(lVar1 + 0x2c8) & 1) != 0)) &&
       ((*(byte *)(unaff_RBX + 0x2e7) & *(byte *)(lVar1 + 0x2e7)) != 0)) {
      FUN_1802ed5d0(lVar1,unaff_R14D);
    }
    else {
      FUN_1802eb9a0();
      unaff_ESI = unaff_ESI - 1;
      uVar2 = uVar2 - 8;
    }
    param_4 = *(int64_t *)(unaff_RBX + 0x1c0);
    unaff_ESI = unaff_ESI + 1;
    uVar2 = uVar2 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_ESI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - param_4 >> 3));
  return;
}






// 函数: void FUN_1802ed6a4(void)
void FUN_1802ed6a4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ed6c0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_1802ed6c0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  int64_t **pplStackX_20;
  
  plVar7 = (int64_t *)0x0;
  if (param_3 != 0) {
    plStackX_8 = (int64_t *)CONCAT71(plStackX_8._1_7_,1);
    if (*(int64_t *)(param_3 + 0x18) != 0) goto LAB_1802ed702;
  }
  plStackX_8 = (int64_t *)((uint64_t)plStackX_8 & 0xffffffffffffff00);
LAB_1802ed702:
  uVar10 = (uint64_t)(int)(*(int64_t *)(param_2 + 0xf8) - *(int64_t *)(param_2 + 0xf0) >> 3);
  plVar8 = *(int64_t **)(param_1 + 0xf0);
  lStackX_18 = param_3;
  if ((uint64_t)(*(int64_t *)(param_1 + 0x100) - (int64_t)plVar8 >> 3) < uVar10) {
    plVar5 = plVar7;
    if (uVar10 != 0) {
      plVar5 = (int64_t *)FUN_18062b420(system_memory_pool_ptr,uVar10 * 8,*(int8_t *)(param_1 + 0x108))
      ;
      plVar8 = *(int64_t **)(param_1 + 0xf0);
    }
    plVar1 = *(int64_t **)(param_1 + 0xf8);
    plVar6 = plVar5;
    if (plVar8 != plVar1) {
      do {
        *plVar6 = *plVar8;
        *plVar8 = 0;
        plVar8 = plVar8 + 1;
        plVar6 = plVar6 + 1;
      } while (plVar8 != plVar1);
      plVar1 = *(int64_t **)(param_1 + 0xf8);
      plVar8 = *(int64_t **)(param_1 + 0xf0);
      if (plVar8 != plVar1) {
        do {
          if ((int64_t *)*plVar8 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar8 + 0x38))();
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar1);
        plVar8 = *(int64_t **)(param_1 + 0xf0);
      }
    }
    if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar8);
    }
    *(int64_t **)(param_1 + 0xf0) = plVar5;
    *(int64_t **)(param_1 + 0xf8) = plVar6;
    *(int64_t **)(param_1 + 0x100) = plVar5 + uVar10;
  }
  if (0 < (int64_t)uVar10) {
    cVar3 = (char)plStackX_8;
    plVar8 = plVar7;
    plVar5 = plVar7;
    do {
      if ((*(char *)(param_2 + 0x2e8) < '\0') &&
         (plVar1 = *(int64_t **)((int64_t)plVar8 * 8 + *(int64_t *)(param_2 + 0xb0)),
         plVar1 != (int64_t *)0x0)) {
        pcVar2 = *(code **)(*plVar1 + 0x98);
        if (pcVar2 != (code *)0x180069ee0) {
          iVar4 = (*pcVar2)();
          goto LAB_1802ed865;
        }
LAB_1802ed869:
        if (cVar3 == '\0') goto LAB_1802ed8bf;
        if ((-1 < *(char *)(param_2 + 0x2e8)) ||
           (lVar9 = *(int64_t *)((int64_t)plVar8 * 8 + *(int64_t *)(param_2 + 0xb0)), lVar9 == 0)
           ) {
          lVar9 = *(int64_t *)((int64_t)plVar8 * 8 + *(int64_t *)(param_2 + 0xf0));
        }
        FUN_1802f3a80(lStackX_18,
                      (int)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3) +
                      (int)plVar5,lVar9,param_1);
        plVar5 = (int64_t *)(uint64_t)((int)plVar5 + 1);
      }
      else {
        iVar4 = (**(code **)(**(int64_t **)((int64_t)plVar8 * 8 + *(int64_t *)(param_2 + 0xf0)) +
                            0x98))();
LAB_1802ed865:
        if (iVar4 == 0) goto LAB_1802ed869;
LAB_1802ed8bf:
        FUN_1802ed230(param_2,&plStackX_10,plVar7);
        iVar4 = (**(code **)(*plStackX_10 + 0x98))();
        if (iVar4 == 7) {
          *(int8_t *)(plStackX_10 + 0x38) = 1;
        }
        plStackX_8 = plStackX_10;
        if (plStackX_10 != (int64_t *)0x0) {
          (**(code **)(*plStackX_10 + 0x28))();
        }
        pplStackX_20 = &plStackX_8;
        FUN_1802edcd0(param_1,plStackX_8,1);
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        if (plStackX_10 != (int64_t *)0x0) {
          (**(code **)(*plStackX_10 + 0x38))();
        }
      }
      plVar7 = (int64_t *)(uint64_t)((int)plVar7 + 1);
      plVar8 = (int64_t *)((int64_t)plVar8 + 1);
    } while ((int64_t)plVar8 < (int64_t)uVar10);
  }
  return;
}






// 函数: void FUN_1802ed990(int64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802ed990(int64_t param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar4 = *(int64_t *)(param_1 + 0x168);
  while ((lVar2 = lVar4, lVar2 != 0 && (*(int64_t *)(lVar2 + 0x268) != 0))) {
    param_1 = lVar2;
    lVar4 = *(int64_t *)(lVar2 + 0x168);
  }
  lVar4 = 0;
  if (*(int64_t *)(param_1 + 0x268) != 0) {
    plVar1 = *(int64_t **)(param_1 + 0x268);
    *(uint64_t *)(param_1 + 0x268) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  iVar3 = (int)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3);
  if (0 < iVar3) {
    do {
      FUN_1802ed990(*(uint64_t *)(*(int64_t *)(param_1 + 0x1c0) + lVar4 * 8),param_2,param_3,
                    param_4,uVar5);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}






// 函数: void FUN_1802eda60(int64_t param_1,uint64_t param_2)
void FUN_1802eda60(int64_t param_1,uint64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  
  uVar3 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    for (lVar2 = *(int64_t *)(param_1 + 0x198); lVar2 != param_1 + 400;
        lVar2 = func_0x00018066bd70(lVar2)) {
      uVar1 = FUN_1801b83d0(param_2,lVar2 + 0x20);
      uVar5 = uVar5 | uVar1;
    }
  }
  FUN_1802f21b0(param_1,uVar5);
  uVar4 = uVar3;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802eda60(*(uint64_t *)(uVar3 + *(int64_t *)(param_1 + 0x1c0)),param_2,
                    *(int32_t *)(param_1 + 0x2c8),1);
      uVar3 = uVar3 + 8;
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802eda6f(int64_t param_1,uint64_t param_2)
void FUN_1802eda6f(int64_t param_1,uint64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  uint uVar4;
  
  uVar4 = (uint)unaff_RBP;
  if (*(uint64_t *)(param_1 + 0x1b0) == unaff_RBP) {
    uVar4 = uVar4 - 1;
  }
  else {
    for (lVar2 = *(int64_t *)(param_1 + 0x198); lVar2 != param_1 + 400;
        lVar2 = func_0x00018066bd70(lVar2)) {
      uVar1 = FUN_1801b83d0(param_2,lVar2 + 0x20);
      uVar4 = uVar4 | uVar1;
    }
  }
  FUN_1802f21b0(param_1,uVar4);
  uVar3 = unaff_RBP;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802eda60(*(uint64_t *)(unaff_RBP + *(int64_t *)(param_1 + 0x1c0)),param_2,
                    *(int32_t *)(param_1 + 0x2c8),1);
      unaff_RBP = unaff_RBP + 8;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802eda88(int64_t param_1)
void FUN_1802eda88(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_RDI;
  
  for (lVar1 = *(int64_t *)(param_1 + 0x198); lVar1 != param_1 + 400;
      lVar1 = func_0x00018066bd70(lVar1)) {
    FUN_1801b83d0();
  }
  FUN_1802f21b0();
  uVar3 = unaff_RBP;
  if (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802eda60(*(uint64_t *)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1c0)));
      unaff_RBP = unaff_RBP + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802edac3(void)
void FUN_1802edac3(void)

{
  uint uVar1;
  uint64_t unaff_RBP;
  uint64_t uVar2;
  int64_t unaff_RDI;
  
  FUN_1802f21b0();
  uVar2 = unaff_RBP;
  if (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802eda60(*(uint64_t *)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1c0)));
      unaff_RBP = unaff_RBP + 8;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while ((uint64_t)(int64_t)(int)uVar1 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802edae9(void)
void FUN_1802edae9(void)

{
  uint uVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  uint64_t uVar2;
  
  uVar2 = unaff_RBP;
  do {
    FUN_1802eda60(*(uint64_t *)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1c0)));
    unaff_RBP = unaff_RBP + 8;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (uint64_t)uVar1;
  } while ((uint64_t)(int64_t)(int)uVar1 <
           (uint64_t)(*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802edb40(int64_t param_1,int64_t *param_2)
void FUN_1802edb40(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  iVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  plVar3 = param_2;
  if ((iVar2 == 0) && (cVar1 = func_0x000180282950(param_2), cVar1 != '\0')) {
    uVar4 = FUN_18062b1e0(system_memory_pool_ptr,200,8,3,uVar4);
    plVar3 = (int64_t *)FUN_18030b420(uVar4,param_2,0);
    plStackX_18 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
      plStackX_10 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStackX_8 = plVar3;
    plStackX_10 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  (**(code **)(*plVar3 + 0x1e0))(plVar3,param_1);
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(int64_t *)(param_1 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  FUN_1800b88d0(param_1 + 0xf0,&plStackX_8);
  plVar3 = plStackX_8;
  cVar1 = (**(code **)(*plStackX_8 + 0xa0))(plStackX_8);
  if (cVar1 != '\0') {
    FUN_1800b88d0(param_1 + 0x1e0,&plStackX_8);
    plVar3 = plStackX_8;
  }
  (**(code **)(*plVar3 + 0xe0))
            (plVar3,CONCAT31((uint3)(*(uint *)(param_1 + 0x2ac) >> 0x1e),
                             ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16)) & 0xffffff01);
  (**(code **)(*plVar3 + 0xe8))(plVar3,*(uint *)(param_1 + 0x2ac) >> 0x13 & 0xffffff01);
  if ((*(uint *)(param_1 + 0x2ac) & 0x100000) != 0) {
    (**(code **)(*plVar3 + 0xf0))(plVar3,1);
  }
                    // WARNING: Could not recover jumptable at 0x0001802edcc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802edcd0(int64_t param_1,int64_t *param_2,char param_3)
void FUN_1802edcd0(int64_t param_1,int64_t *param_2,char param_3)

{
  int8_t uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int32_t uVar7;
  int64_t *plStackX_20;
  int64_t *plStack_68;
  uint64_t uStack_60;
  int64_t *plStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_60 = 0xfffffffffffffffe;
  FUN_1802ed990(param_1,1);
  plStack_68 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  iVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  plVar6 = param_2;
  if (iVar3 == 0) {
    cVar2 = func_0x000180282950(param_2);
    if (cVar2 != '\0') {
      uVar5 = FUN_18062b1e0(system_memory_pool_ptr,200,8,3);
      plVar6 = (int64_t *)FUN_18030b420(uVar5,param_2,0);
      plStack_58 = plVar6;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
        plStackX_20 = plVar6;
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      plStackX_20 = param_2;
      plStack_68 = plVar6;
      (**(code **)(*param_2 + 0x38))(param_2);
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6);
      }
    }
    (**(code **)(*plVar6 + 0x1a0))
              (plVar6,(*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x88) -
                      *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x84)) *
                      *(float *)(param_1 + 0x90) +
                      (*(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x80) -
                      *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x88)) *
                      *(float *)(param_1 + 0x94) +
                      (*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x84) -
                      *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x80)) *
                      *(float *)(param_1 + 0x98) < 0.0);
  }
  else if (iVar3 == 7) {
    uVar1 = FUN_180084fa0(param_1 + 0x70);
    (**(code **)(*param_2 + 0x1a0))(param_2,uVar1);
  }
  cVar2 = (**(code **)(*plVar6 + 0xa0))(plVar6);
  if (cVar2 != '\0') {
    FUN_1800b88d0(param_1 + 0x1e0,&plStack_68);
    plVar6 = plStack_68;
  }
  (**(code **)(*plVar6 + 0x1e0))(plVar6,param_1);
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(int64_t *)(param_1 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  FUN_1800b88d0(param_1 + 0xf0,&plStack_68);
  plVar6 = plStack_68;
  (**(code **)(*plStack_68 + 0xe0))
            (plStack_68,
             CONCAT31((uint3)(*(uint *)(param_1 + 0x2ac) >> 0x1e),
                      ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16)) & 0xffffff01);
  (**(code **)(*plVar6 + 0xe8))(plVar6,*(uint *)(param_1 + 0x2ac) >> 0x13 & 0xffffff01);
  if ((*(uint *)(param_1 + 0x2ac) & 0x100000) != 0) {
    (**(code **)(*plVar6 + 0xf0))(plVar6,1);
  }
  if (param_3 != '\0') {
    uVar4 = *(uint *)(param_1 + 0x2c4) >> 2;
    uVar7 = 0x31;
    if ((uVar4 & 1) != 0) {
      uVar7 = 1;
    }
    if (((uVar4 & 1) == 0) && ((*(byte *)(param_1 + 0x148) & 0x18) != 0)) {
      uVar7 = 0x21;
    }
    plStackX_20 = (int64_t *)CONCAT44(plStackX_20._4_4_,uVar7);
    (**(code **)(*param_2 + 0x128))(param_2,&plStackX_20);
  }
  uStack_50 = 3;
  uStack_40 = 0;
  uStack_48._0_4_ = (int32_t)param_1;
  uStack_48._4_4_ = (int32_t)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(param_2 + 2) = 3;
  *(int32_t *)((int64_t)param_2 + 0x14) = uStack_4c;
  *(int32_t *)(param_2 + 3) = (int32_t)uStack_48;
  *(int32_t *)((int64_t)param_2 + 0x1c) = uStack_48._4_4_;
  param_2[4] = 0;
  uStack_48 = param_1;
  if ((param_2[5] != 0) && (*(int64_t *)(param_2[5] + 0x20) != 0)) {
    FUN_1802548a0(param_2);
  }
                    // WARNING: Could not recover jumptable at 0x0001802edfd2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar6 + 0x38))(plVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




